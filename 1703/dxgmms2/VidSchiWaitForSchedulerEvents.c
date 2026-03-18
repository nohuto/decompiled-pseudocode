/*
 * XREFs of VidSchiWaitForSchedulerEvents @ 0x1C006AE70
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0008F20 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiIsFlipQueueBusy @ 0x1C0005FB0 (VidSchiIsFlipQueueBusy.c)
 *     VidSchiAcceptsIncomingWork @ 0x1C00072D0 (VidSchiAcceptsIncomingWork.c)
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchIsTDRPending @ 0x1C00096C0 (VidSchIsTDRPending.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     VidSchiCheckHwProgress @ 0x1C006B650 (VidSchiCheckHwProgress.c)
 *     VidSchiHandleControlEvent @ 0x1C00AAA90 (VidSchiHandleControlEvent.c)
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
  union _LARGE_INTEGER *Timeout; // r9
  ULONG v17; // r10d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  PRKEVENT v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // r9
  PRKEVENT v25; // rcx
  _BYTE v26[8]; // [rsp+40h] [rbp-88h] BYREF
  union _LARGE_INTEGER v27; // [rsp+48h] [rbp-80h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-78h] BYREF
  PRKEVENT Event[2]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v30; // [rsp+68h] [rbp-60h]
  PVOID Object; // [rsp+70h] [rbp-58h] BYREF

  Event[0] = (PRKEVENT)(a1 + 1400);
  Event[1] = (PRKEVENT)(a1 + 1344);
  v30 = a1 + 1512;
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
    v25 = Event[v4];
    v25[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v25);
LABEL_6:
    if ( v4 == v3 )
    {
      VidSchiProfilePerformanceTick(14LL, a1, 0LL, v6, 0LL, 0LL, 0LL, 0LL);
      while ( 1 )
      {
        do
        {
          v27.QuadPart = 0LL;
          v7 = *(_DWORD *)(a1 + 952) != 0;
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
            if ( *(_BYTE *)(a1 + 2944) )
              v11 = *(_QWORD *)(a1 + 2928);
            v12 = *(_DWORD *)(a1 + 60);
            if ( v12 )
            {
              v13 = a1 + 416;
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
              *(_BYTE *)(a1 + 932) = 1;
              v17 = 3;
            }
            else
            {
              if ( v11 <= v10 )
                v27.QuadPart = 0LL;
              else
                v27.QuadPart = v10 - v11;
              Timeout = &v27;
              *(_BYTE *)(a1 + 932) = 0;
              v17 = 2;
            }
          }
          else
          {
            Timeout = 0LL;
            v17 = 1;
            *(_BYTE *)(a1 + 932) = 0;
          }
          v18 = MEMORY[0xFFFFF78000000320];
          v19 = 0LL;
          v20 = v17;
          do
          {
            v21 = Event[v19++];
            *(_QWORD *)&v21[1].Header.Lock = v18;
            *(__int64 *)((char *)&v30 + v19 * 8) = (__int64)v21;
            --v20;
          }
          while ( v20 );
          v22 = KeWaitForMultipleObjects(v17, &Object, WaitAny, Executive, 0, 0, Timeout, 0LL);
          *(_BYTE *)(a1 + 932) = 0;
          v4 = v22;
        }
        while ( v22 > 1 && v22 != 258 );
        v26[0] = 0;
        if ( v22 != 258 || !(unsigned int)VidSchiCheckHwProgress(a1, v26) )
          break;
        if ( v26[0] )
        {
          v4 = 1;
          break;
        }
      }
      VidSchiProfilePerformanceTick(15LL, a1, 0LL, v23, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v4 )
      break;
    VidSchiHandleControlEvent((struct _VIDSCH_GLOBAL *)a1);
    if ( VidSchIsTDRPending(a1) )
      return 258LL;
  }
  if ( !VidSchIsTDRPending(a1) )
    return v4;
  return 258LL;
}
