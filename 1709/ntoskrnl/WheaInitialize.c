/*
 * XREFs of WheaInitialize @ 0x140840C7C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     WheapInitializeWorkQueue @ 0x14015C4C0 (WheapInitializeWorkQueue.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14015C7CC (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     IoWMIRegistrationControl @ 0x14057F320 (IoWMIRegistrationControl.c)
 *     WheapLogInitEvent @ 0x1405E1124 (WheapLogInitEvent.c)
 *     WheapQueryPshedForErrorSources @ 0x140840FF0 (WheapQueryPshedForErrorSources.c)
 *     WheapInitializeErrorSourceTable @ 0x14084A850 (WheapInitializeErrorSourceTable.c)
 *     WheapCreatePerProcessorInfo @ 0x140852F98 (WheapCreatePerProcessorInfo.c)
 *     WheapLoadPolicy @ 0x1408544DC (WheapLoadPolicy.c)
 *     WheapInitializeEventing @ 0x140857E18 (WheapInitializeEventing.c)
 */

__int64 __fastcall WheaInitialize(__int64 a1, unsigned int a2)
{
  int v2; // r12d
  ULONG_PTR v3; // r15
  int v5; // eax
  int v6; // eax
  PRTL_BALANCED_NODE v7; // rax
  signed __int8 v8; // cf
  PRTL_BALANCED_NODE v9; // rbx
  int v10; // eax
  ULONG i; // ebx
  __int64 Prcb; // rax
  __int64 j; // rdi
  __int64 k; // rdi
  bool v15; // zf
  int v16; // eax
  char v17; // al
  int v19; // eax
  int PerProcessorInfo; // eax
  int v21; // eax
  unsigned int v22; // edi
  int *v23; // rbx
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // [rsp+78h] [rbp+48h] BYREF
  PVOID Address; // [rsp+80h] [rbp+50h] BYREF
  char v29; // [rsp+88h] [rbp+58h] BYREF

  v2 = 0;
  v3 = a2;
  v27 = 0;
  if ( a2 )
  {
    WheapDispatchPtr.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)&WheapDispatchPtr.SectorSize;
    *(_QWORD *)&WheapDispatchPtr.SectorSize = &WheapDispatchPtr.SectorSize;
    v5 = PshedInitialize(a1, &v29);
    if ( v5 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v5, 0LL, 0LL);
    WheapInitializeWorkQueue();
    WheapInitializeEventing();
    v6 = WheapQueryPshedForErrorSources(&v27, &Address);
    if ( v6 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v6, v3, 0LL);
    v7 = KeAbPreAcquire((ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead,
        (__int64)v7,
        (__int16 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
    if ( v9 )
      BYTE2(v9[1].Left) |= 1u;
    v10 = WheapInitializeErrorSourceTable(v27, Address);
    if ( v10 < 0 )
      KeBugCheckEx(0x122u, 7uLL, v10, 0LL, 0LL);
    PshedFreeMemory(Address);
    for ( i = 0;
          i < (unsigned int)KeNumberProcessors_0;
          *(_QWORD *)(*(_QWORD *)(Prcb + 24608) + 8LL) = &WheapErrorSourceTable )
    {
      Prcb = KeGetPrcb(i++);
      **(_DWORD **)(Prcb + 24608) = v27;
      *(_QWORD *)(*(_QWORD *)(Prcb + 24608) + 16LL) = &WheapDispatchPtr.Reserved;
    }
    for ( j = qword_14038D838; (__int64 *)j != &qword_14038D838; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 97) == 7 )
      {
        v26 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))&WheapSourceConfiguration + 6 * *(int *)(j + 40) + 3))(
                (unsigned int)v3,
                j + 89,
                *(_QWORD *)(j + 56));
        if ( v26 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v26, v3, *(int *)(j + 97));
        *(_DWORD *)(j + 101) = 2;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2296LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
      WheapCheckForAndReportErrorsFromPreviousSession();
    for ( k = qword_14038D838; (__int64 *)k != &qword_14038D838; ++v2 )
    {
      v15 = *(_DWORD *)(k + 97) == 7;
      *(_DWORD *)(k + 117) = v2;
      if ( !v15 && !*(_BYTE *)(k + 88) )
      {
        v16 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))&WheapSourceConfiguration + 6 * *(int *)(k + 40) + 3))(
                (unsigned int)v3,
                k + 89,
                *(_QWORD *)(k + 56));
        if ( v16 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v16, v3, *(int *)(k + 97));
        *(_DWORD *)(k + 101) = 2;
      }
      k = *(_QWORD *)k;
    }
    WheapLogInitEvent();
    *(_QWORD *)&WheapDispatchPtr.Type = WheaWmiDispatch;
    IoWMIRegistrationControl(&WheapDispatchPtr, 0x80000001);
    WheapInitializationComplete = 1;
    v17 = _InterlockedExchangeAdd64(
            (volatile signed __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead.Flink,
            0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
    KeAbPostRelease((ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
  }
  else
  {
    WheapStatus = 0LL;
    dword_14035AE18 = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v19 = PshedInitialize(a1, &v29);
    if ( v19 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v19, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v21 = WheapQueryPshedForErrorSources(&v27, &Address);
    if ( v21 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v21, 0LL, 0LL);
    WheapErrorSourceTable = 1279410516LL;
    qword_14038D840 = (__int64)&qword_14038D838;
    v22 = 0;
    qword_14038D838 = (__int64)&qword_14038D838;
    v23 = (int *)Address;
    LOWORD(stru_14038D848.Header.Lock) = 1;
    stru_14038D848.Header.Size = 6;
    stru_14038D848.Header.SignalState = 1;
    stru_14038D848.Header.WaitListHead.Blink = &stru_14038D848.Header.WaitListHead;
    stru_14038D848.Header.WaitListHead.Flink = &stru_14038D848.Header.WaitListHead;
    if ( v27 )
    {
      do
      {
        v24 = (*((__int64 (__fastcall **)(_QWORD, int *, _QWORD))&WheapSourceConfiguration + 6 * v23[2] + 3))(
                0LL,
                v23,
                0LL);
        if ( v24 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v24, 0LL, v23[2]);
        v25 = (unsigned int)*v23;
        ++v22;
        v23[3] = 2;
        v23 = (int *)((char *)v23 + v25);
      }
      while ( v22 < v27 );
      v23 = (int *)Address;
    }
    PshedFreeMemory(v23);
  }
  return 0LL;
}
