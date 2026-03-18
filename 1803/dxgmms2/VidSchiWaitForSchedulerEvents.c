/*
 * XREFs of VidSchiWaitForSchedulerEvents @ 0x1C0076E40
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C000A450 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiIsFlipQueueBusy @ 0x1C0006930 (VidSchiIsFlipQueueBusy.c)
 *     VidSchiAcceptsIncomingWork @ 0x1C0008290 (VidSchiAcceptsIncomingWork.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A8D0 (VidSchiProfilePerformanceTick.c)
 *     VidSchIsTDRPending @ 0x1C000B250 (VidSchIsTDRPending.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     VidSchiCheckHwProgress @ 0x1C0077190 (VidSchiCheckHwProgress.c)
 *     VidSchiHandleControlEvent @ 0x1C00BBDA8 (VidSchiHandleControlEvent.c)
 */

__int64 __fastcall VidSchiWaitForSchedulerEvents(__int64 a1)
{
  PRKEVENT *v2; // rdi
  unsigned int v3; // esi
  unsigned int v4; // ebx
  PRKEVENT v5; // rcx
  __int64 v6; // r9
  bool v7; // bl
  char IsFlipQueueBusy; // di
  LARGE_INTEGER v9; // rcx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r9
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  union _LARGE_INTEGER v16; // rcx
  union _LARGE_INTEGER v17; // rax
  bool v18; // cc
  union _LARGE_INTEGER *Timeout; // r9
  ULONG v20; // r10d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  PRKEVENT v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // r9
  PRKEVENT v28; // rcx
  _BYTE v29[8]; // [rsp+40h] [rbp-88h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-80h] BYREF
  union _LARGE_INTEGER v31; // [rsp+50h] [rbp-78h] BYREF
  PRKEVENT Event[2]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v33; // [rsp+68h] [rbp-60h]
  PVOID Object; // [rsp+70h] [rbp-58h] BYREF

  Event[0] = (PRKEVENT)(a1 + 1424);
  Event[1] = (PRKEVENT)(a1 + 1368);
  v33 = a1 + 1536;
  while ( 1 )
  {
    v2 = Event;
    v3 = 1;
    v4 = 0;
    if ( VidSchiAcceptsIncomingWork(a1) )
      v3 = 2;
    while ( 1 )
    {
      v5 = *v2;
      *(_QWORD *)&v5[2].Header.Lock = MEMORY[0xFFFFF78000000320];
      if ( KeReadStateEvent(v5) )
        break;
      ++v4;
      ++v2;
      if ( v4 >= v3 )
        goto LABEL_6;
    }
    v28 = Event[v4];
    v28[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v28);
LABEL_6:
    if ( v4 == v3 )
    {
      VidSchiProfilePerformanceTick(14LL, a1, 0LL, v6, 0LL, 0LL, 0LL, 0LL);
      while ( 1 )
      {
        do
        {
          v31.QuadPart = 0LL;
          v7 = *(_DWORD *)(a1 + 968) || *(_DWORD *)(a1 + 56);
          IsFlipQueueBusy = VidSchiIsFlipQueueBusy(a1);
          if ( VidSchiAcceptsIncomingWork(a1) )
          {
            v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
            if ( is_mul_ok(v9.QuadPart, 0x989680uLL) )
              v10 = (unsigned __int64)v9.QuadPart
                  * (unsigned __int128)0x989680uLL
                  / (unsigned __int64)PerformanceFrequency.QuadPart;
            else
              v10 = 10000000 * (v9.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
                  + 10000000
                  * (v9.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
                  / PerformanceFrequency.QuadPart;
            v11 = -1LL;
            if ( *(_BYTE *)(a1 + 2984) )
              v11 = *(_QWORD *)(a1 + 2968);
            v12 = *(_DWORD *)(a1 + 64);
            if ( v12 )
            {
              v13 = a1 + 440;
              v14 = v12;
              do
              {
                v15 = *(_QWORD *)(*(_QWORD *)v13 + 128LL);
                if ( v15 && v11 >= v15 )
                  v11 = *(_QWORD *)(*(_QWORD *)v13 + 128LL);
                v13 += 8LL;
                --v14;
              }
              while ( v14 );
            }
            if ( (v7 || IsFlipQueueBusy) && v11 >= v10 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1) )
              v11 = v10 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
            if ( v11 == -1LL )
            {
              Timeout = 0LL;
              *(_BYTE *)(a1 + 956) = 1;
              v20 = 3;
            }
            else
            {
              *(_BYTE *)(a1 + 956) = 0;
              v16.QuadPart = v10 - v11;
              v17.QuadPart = 0LL;
              v18 = v11 <= v10;
              Timeout = &v31;
              v20 = 2;
              if ( !v18 )
                v17 = v16;
              v31 = v17;
            }
          }
          else
          {
            Timeout = 0LL;
            v20 = 1;
            *(_BYTE *)(a1 + 956) = 0;
          }
          v21 = MEMORY[0xFFFFF78000000320];
          v22 = 0LL;
          v23 = v20;
          do
          {
            v24 = Event[v22++];
            *(_QWORD *)&v24[1].Header.Lock = v21;
            *(__int64 *)((char *)&v33 + v22 * 8) = (__int64)v24;
            --v23;
          }
          while ( v23 );
          v25 = KeWaitForMultipleObjects(v20, &Object, WaitAny, Executive, 0, 0, Timeout, 0LL);
          *(_BYTE *)(a1 + 956) = 0;
          v4 = v25;
        }
        while ( v25 > 1 && v25 != 258 );
        v29[0] = 0;
        if ( v25 != 258 || !(unsigned int)VidSchiCheckHwProgress(a1, v29) )
          break;
        if ( v29[0] )
        {
          v4 = 1;
          break;
        }
      }
      VidSchiProfilePerformanceTick(15LL, a1, 0LL, v26, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v4 )
      break;
    VidSchiHandleControlEvent(a1);
    if ( VidSchIsTDRPending(a1) )
      return 258LL;
  }
  if ( !VidSchIsTDRPending(a1) )
    return v4;
  return 258LL;
}
