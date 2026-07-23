/*
 * XREFs of WheaInitialize @ 0x1407FC324
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     WheapInitializeWorkQueue @ 0x140167D94 (WheapInitializeWorkQueue.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x140167F80 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     IoWMIRegistrationControl @ 0x14059FCD0 (IoWMIRegistrationControl.c)
 *     WheapLogInitEvent @ 0x1405CCE38 (WheapLogInitEvent.c)
 *     WheapQueryPshedForErrorSources @ 0x1407FC69C (WheapQueryPshedForErrorSources.c)
 *     WheapInitializeErrorSourceTable @ 0x14081A088 (WheapInitializeErrorSourceTable.c)
 *     WheapCreatePerProcessorInfo @ 0x140822420 (WheapCreatePerProcessorInfo.c)
 *     WheapLoadPolicy @ 0x140822AB8 (WheapLoadPolicy.c)
 *     WheapInitializeEventing @ 0x1408266AC (WheapInitializeEventing.c)
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
  __int64 j; // rbx
  __int64 k; // rbx
  bool v15; // zf
  int v16; // eax
  int v18; // eax
  int PerProcessorInfo; // eax
  int v20; // eax
  int *v21; // rbx
  unsigned int v22; // edi
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // [rsp+78h] [rbp+48h] BYREF
  PVOID Address; // [rsp+80h] [rbp+50h] BYREF
  char v28; // [rsp+88h] [rbp+58h] BYREF

  v2 = 0;
  v3 = a2;
  v26 = 0;
  if ( a2 )
  {
    *(_QWORD *)&WheapDispatchPtr.DeviceLock.Header.Lock = &WheapDispatchPtr.SecurityDescriptor;
    WheapDispatchPtr.SecurityDescriptor = &WheapDispatchPtr.SecurityDescriptor;
    v5 = PshedInitialize(a1, &v28);
    if ( v5 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v5, 0LL, 0LL);
    WheapInitializeWorkQueue();
    WheapInitializeEventing();
    v6 = WheapQueryPshedForErrorSources(&v26, &Address);
    if ( v6 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v6, v3, 0LL);
    v7 = KeAbPreAcquire((ULONG_PTR)&WheapDispatchPtr.Dpc.DpcData, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&WheapDispatchPtr.Dpc.DpcData, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&WheapDispatchPtr.Dpc.DpcData,
        v7,
        (ULONG_PTR)&WheapDispatchPtr.Dpc.DpcData);
    if ( v9 )
      BYTE2(v9[1].Left) |= 1u;
    v10 = WheapInitializeErrorSourceTable(v26, Address);
    if ( v10 < 0 )
      KeBugCheckEx(0x122u, 7uLL, v10, 0LL, 0LL);
    PshedFreeMemory(Address);
    for ( i = 0;
          i < (unsigned int)KeNumberProcessors_0;
          *(_QWORD *)(*(_QWORD *)(Prcb + 24776) + 8LL) = &WheapErrorSourceTable )
    {
      Prcb = KeGetPrcb(i++);
      **(_DWORD **)(Prcb + 24776) = v26;
      *(_QWORD *)(*(_QWORD *)(Prcb + 24776) + 16LL) = &WheapDispatchPtr.DeviceLock.Header.WaitListHead;
    }
    for ( j = qword_14036F120; (__int64 *)j != &qword_14036F120; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 97) == 7 )
      {
        v25 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))&WheapSourceConfiguration + 6 * *(int *)(j + 40) + 3))(
                (unsigned int)v3,
                j + 89,
                *(_QWORD *)(j + 56));
        if ( v25 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v25, v3, *(int *)(j + 97));
        *(_DWORD *)(j + 101) = 2;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2296LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
      WheapCheckForAndReportErrorsFromPreviousSession();
    for ( k = qword_14036F120; (__int64 *)k != &qword_14036F120; ++v2 )
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapDispatchPtr.Dpc.DpcData, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapDispatchPtr.Dpc.DpcData);
    KeAbPostRelease((ULONG_PTR)&WheapDispatchPtr.Dpc.DpcData);
  }
  else
  {
    WheapStatus = 0LL;
    dword_140342678 = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v18 = PshedInitialize(a1, &v28);
    if ( v18 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v18, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v20 = WheapQueryPshedForErrorSources(&v26, &Address);
    if ( v20 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v20, 0LL, 0LL);
    v21 = (int *)Address;
    qword_14036F128 = (__int64)&qword_14036F120;
    qword_14036F120 = (__int64)&qword_14036F120;
    v22 = 0;
    WheapErrorSourceTable = 1279410516LL;
    word_14036F130 = 1;
    byte_14036F132 = 6;
    dword_14036F134 = 1;
    qword_14036F140 = (__int64)&qword_14036F138;
    qword_14036F138 = (__int64)&qword_14036F138;
    if ( v26 )
    {
      do
      {
        v23 = (*((__int64 (__fastcall **)(_QWORD, int *, _QWORD))&WheapSourceConfiguration + 6 * v21[2] + 3))(
                0LL,
                v21,
                0LL);
        if ( v23 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v23, 0LL, v21[2]);
        v24 = (unsigned int)*v21;
        ++v22;
        v21[3] = 2;
        v21 = (int *)((char *)v21 + v24);
      }
      while ( v22 < v26 );
      v21 = (int *)Address;
    }
    PshedFreeMemory(v21);
  }
  return 0LL;
}
