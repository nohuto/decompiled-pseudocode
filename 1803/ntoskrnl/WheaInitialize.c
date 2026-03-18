/*
 * XREFs of WheaInitialize @ 0x1408A29A0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     WheapInitializeWorkQueue @ 0x140186650 (WheapInitializeWorkQueue.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1401868E8 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     IoWMIRegistrationControl @ 0x140600880 (IoWMIRegistrationControl.c)
 *     WheapLogInitEvent @ 0x14064E1A4 (WheapLogInitEvent.c)
 *     WheapQueryPshedForErrorSources @ 0x1408A2D28 (WheapQueryPshedForErrorSources.c)
 *     WheapInitializeErrorSourceTable @ 0x1408C0DD8 (WheapInitializeErrorSourceTable.c)
 *     WheapLoadPolicy @ 0x1408C6534 (WheapLoadPolicy.c)
 *     WheapCreatePerProcessorInfo @ 0x1408C85BC (WheapCreatePerProcessorInfo.c)
 *     WheapInitializeEventing @ 0x1408C9FAC (WheapInitializeEventing.c)
 */

__int64 __fastcall WheaInitialize(__int64 a1, unsigned int a2)
{
  int v2; // r12d
  ULONG_PTR v3; // r15
  int v5; // eax
  int PerProcessorInfo; // eax
  int v7; // eax
  int *v8; // rbx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rax
  __int64 k; // rbx
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // al
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  signed __int8 v23; // cf
  __int64 v24; // rbx
  int v25; // eax
  ULONG i; // ebx
  __int64 Prcb; // rax
  __int64 j; // rbx
  int v29; // eax
  unsigned int v35; // [rsp+88h] [rbp+48h] BYREF
  PVOID Address; // [rsp+90h] [rbp+50h] BYREF
  char v37; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  v3 = a2;
  v35 = 0;
  if ( a2 )
  {
    WheapDispatchPtr.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)&WheapDispatchPtr.SectorSize;
    *(_QWORD *)&WheapDispatchPtr.SectorSize = &WheapDispatchPtr.SectorSize;
    v20 = PshedInitialize(a1, &v37);
    if ( v20 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v20, 0LL, 0LL);
    WheapInitializeWorkQueue();
    WheapInitializeEventing();
    v21 = WheapQueryPshedForErrorSources(&v35, &Address);
    if ( v21 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v21, v3, 0LL);
    v22 = KeAbPreAcquire((ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead, 0LL, 0);
    v23 = _interlockedbittestandset64((volatile signed __int32 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead, 0LL);
    v24 = v22;
    if ( v23 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead,
        v22,
        (ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
    if ( v24 )
      *(_BYTE *)(v24 + 26) |= 1u;
    v25 = WheapInitializeErrorSourceTable(v35, Address);
    if ( v25 < 0 )
      KeBugCheckEx(0x122u, 7uLL, v25, 0LL, 0LL);
    PshedFreeMemory(Address);
    for ( i = 0;
          i < (unsigned int)KeNumberProcessors_0;
          *(_QWORD *)(*(_QWORD *)(Prcb + 24608) + 8LL) = &WheapErrorSourceTable )
    {
      Prcb = KeGetPrcb(i++);
      **(_DWORD **)(Prcb + 24608) = v35;
      *(_QWORD *)(*(_QWORD *)(Prcb + 24608) + 16LL) = &WheapDispatchPtr.Reserved;
    }
    for ( j = qword_1403D17D0; (__int64 *)j != &qword_1403D17D0; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 97) == 7 )
      {
        v29 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))&WheapSourceConfiguration + 6 * *(int *)(j + 40) + 3))(
                (unsigned int)v3,
                j + 89,
                *(_QWORD *)(j + 56));
        if ( v29 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v29, v3, *(int *)(j + 97));
        *(_DWORD *)(j + 101) = 2;
      }
    }
    if ( KeGetCurrentPrcb()->CpuVendor == 1 )
    {
      _RAX = 0x80000000LL;
      __asm { cpuid }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2296LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
      WheapCheckForAndReportErrorsFromPreviousSession();
    for ( k = qword_1403D17D0; (__int64 *)k != &qword_1403D17D0; ++v2 )
    {
      v13 = *(_DWORD *)(k + 97) == 7;
      *(_DWORD *)(k + 117) = v2;
      if ( !v13 && !*(_BYTE *)(k + 88) )
      {
        v14 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))&WheapSourceConfiguration + 6 * *(int *)(k + 40) + 3))(
                (unsigned int)v3,
                k + 89,
                *(_QWORD *)(k + 56));
        if ( v14 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v14, v3, *(int *)(k + 97));
        *(_DWORD *)(k + 101) = 2;
      }
      k = *(_QWORD *)k;
    }
    WheapLogInitEvent();
    *(_QWORD *)&WheapDispatchPtr.Type = WheaWmiDispatch;
    IoWMIRegistrationControl(&WheapDispatchPtr, 0x80000001);
    WheapInitializationComplete = 1;
    v18 = _InterlockedExchangeAdd64(
            (volatile signed __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead.Flink,
            0xFFFFFFFFFFFFFFFFuLL);
    if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapDispatchPtr.DeviceLock.Header.WaitListHead, v15, v16, v17);
    KeAbPostRelease((ULONG_PTR)&WheapDispatchPtr.DeviceLock.Header.WaitListHead);
  }
  else
  {
    WheapStatus = 0LL;
    dword_14039E458 = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v5 = PshedInitialize(a1, &v37);
    if ( v5 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v5, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v7 = WheapQueryPshedForErrorSources(&v35, &Address);
    if ( v7 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v7, 0LL, 0LL);
    v8 = (int *)Address;
    qword_1403D17D8 = (__int64)&qword_1403D17D0;
    qword_1403D17D0 = (__int64)&qword_1403D17D0;
    v9 = 0;
    WheapErrorSourceTable = 1279410516LL;
    LOWORD(stru_1403D17E0.Header.Lock) = 1;
    stru_1403D17E0.Header.Size = 6;
    stru_1403D17E0.Header.SignalState = 1;
    stru_1403D17E0.Header.WaitListHead.Blink = &stru_1403D17E0.Header.WaitListHead;
    stru_1403D17E0.Header.WaitListHead.Flink = &stru_1403D17E0.Header.WaitListHead;
    if ( v35 )
    {
      do
      {
        v10 = (*((__int64 (__fastcall **)(_QWORD, int *, _QWORD))&WheapSourceConfiguration + 6 * v8[2] + 3))(
                0LL,
                v8,
                0LL);
        if ( v10 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v10, 0LL, v8[2]);
        v11 = (unsigned int)*v8;
        ++v9;
        v8[3] = 2;
        v8 = (int *)((char *)v8 + v11);
      }
      while ( v9 < v35 );
      v8 = (int *)Address;
    }
    PshedFreeMemory(v8);
  }
  return 0LL;
}
