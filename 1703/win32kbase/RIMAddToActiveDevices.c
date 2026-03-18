/*
 * XREFs of RIMAddToActiveDevices @ 0x1C0105BF0
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C01138B4 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C0113A78 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     EtwTracePointerDeviceInRangeMessageStart @ 0x1C00DA2C0 (EtwTracePointerDeviceInRangeMessageStart.c)
 *     EtwTracePointerDeviceInRangeMessageStop @ 0x1C00DA2F0 (EtwTracePointerDeviceInRangeMessageStop.c)
 */

__int64 __fastcall RIMAddToActiveDevices(LARGE_INTEGER *a1, __int64 a2)
{
  unsigned int v2; // ebx
  LARGE_INTEGER *v3; // r14
  LARGE_INTEGER *QuadPart; // rsi
  __int64 v7; // rcx
  LARGE_INTEGER *v8; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  LARGE_INTEGER **v11; // rax
  LARGE_INTEGER **v12; // rdx
  DWORD v13; // eax
  void *v14; // rcx
  void *v15; // rcx
  int LowPart; // edx
  union _LARGE_INTEGER DueTime; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = a1 + 72;
  QuadPart = (LARGE_INTEGER *)a1[72].QuadPart;
  if ( *(_DWORD *)(a2 + 24) != 7 )
  {
    EtwTracePointerDeviceInRangeMessageStart((__int64)a1);
    if ( (int)IsPostPointerDeviceInRangeMessageSupported() >= 0 )
      PostPointerDeviceInRangeMessage(a2, 0LL, 0LL);
    EtwTracePointerDeviceInRangeMessageStop(v7);
  }
  do
  {
    if ( QuadPart == v3 )
    {
      v9 = Win32AllocPoolZInit(0x20uLL, 2020635474LL);
      if ( v9 )
      {
        v10 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)(v10 + 184) |= 0x40000000u;
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x14u,
          0x24u,
          (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids,
          v10);
        *v9 = a2;
        v11 = (LARGE_INTEGER **)(v9 + 1);
        v12 = (LARGE_INTEGER **)v3[1].QuadPart;
        if ( *v12 != v3 )
          __fastfail(3u);
        *v11 = v3;
        v2 = 1;
        v9[2] = v12;
        *v12 = (LARGE_INTEGER *)v11;
        v3[1].QuadPart = (LONGLONG)v11;
        if ( ++a1[74].LowPart == 1 )
        {
          v14 = (void *)a1[59].QuadPart;
          DueTime.QuadPart = -1000000LL;
          ZwSetTimer(v14, &DueTime, 0LL, 0LL, 0, 0, 0LL);
          v15 = (void *)a1[60].QuadPart;
          if ( v15 != (void *)-1LL )
          {
            LowPart = 10;
            if ( a1[61].LowPart )
              LowPart = a1[61].LowPart;
            DueTime.QuadPart = -10000LL * LowPart;
            ZwSetTimer(v15, &DueTime, 0LL, 0LL, 0, 0, 0LL);
            a1[64] = KeQueryPerformanceCounter(0LL);
          }
        }
      }
      return v2;
    }
    v8 = QuadPart - 1;
    QuadPart = (LARGE_INTEGER *)QuadPart->QuadPart;
  }
  while ( v8->QuadPart != a2 );
  v13 = v8[3].LowPart;
  v2 = 1;
  if ( (v13 & 1) != 0 )
    v8[3].LowPart = v13 & 0xFFFFFFFE;
  return v2;
}
