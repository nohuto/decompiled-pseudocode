/*
 * XREFs of RIMRemoveFromActiveDevices @ 0x1C000B7A0
 * Callers:
 *     RIMFreePointerDevice @ 0x1C000B580 (RIMFreePointerDevice.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C010FAE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStart @ 0x1C00E0EB0 (EtwTracePointerDeviceOutOfRangeMessageStart.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStop @ 0x1C00E0EE0 (EtwTracePointerDeviceOutOfRangeMessageStop.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0107450 (RIMUpdatePrimaryDevice.c)
 */

__int64 __fastcall RIMRemoveFromActiveDevices(__int64 a1, __int64 a2, int a3, int *a4)
{
  int v4; // r15d
  _QWORD *v5; // r14
  _QWORD *v7; // rsi
  __int64 v9; // rbp
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rdx

  v4 = 0;
  v5 = (_QWORD *)(a1 + 576);
  v7 = *(_QWORD **)(a1 + 576);
  v9 = a2;
  if ( *(_QWORD *)(a1 + 608) == a2 )
    RIMUpdatePrimaryDevice(a1, 0LL);
  while ( v7 != v5 )
  {
    v12 = v7 - 1;
    v7 = (_QWORD *)*v7;
    if ( *v12 == v9 )
    {
      v13 = *(_QWORD *)(v9 + 16);
      *(_DWORD *)(v13 + 184) &= ~0x80000000;
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        20,
        32,
        (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids,
        v13);
      if ( (v12[3] & 1) == 0 && *(_DWORD *)(v9 + 24) != 7 )
      {
        EtwTracePointerDeviceOutOfRangeMessageStart();
        if ( (int)IsPostPointerDeviceOutOfRangeMessageSupported() >= 0 )
          PostPointerDeviceOutOfRangeMessage(v9, 0LL, 0LL);
        EtwTracePointerDeviceOutOfRangeMessageStop();
      }
      if ( (*(_DWORD *)(a1 + 604) & 1) != 0 )
      {
        *((_DWORD *)v12 + 6) |= 1u;
        *(_DWORD *)(a1 + 604) |= 2u;
        if ( a3 )
        {
          *((_DWORD *)v12 + 6) |= 2u;
          *(_DWORD *)(a1 + 604) |= 4u;
        }
        v4 = 1;
      }
      else
      {
        v15 = v12[1];
        if ( *(_QWORD **)(v15 + 8) != v12 + 1 || (v16 = (_QWORD *)v12[2], (_QWORD *)*v16 != v12 + 1) )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        Win32FreePool(v12, v16, v14);
        --*(_DWORD *)(a1 + 592);
      }
      break;
    }
  }
  if ( a4 )
    *a4 = v4;
  return 1LL;
}
