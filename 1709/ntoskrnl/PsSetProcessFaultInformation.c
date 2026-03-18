/*
 * XREFs of PsSetProcessFaultInformation @ 0x140578FB0
 * Callers:
 *     DbgkForwardException @ 0x1404504F4 (DbgkForwardException.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     EtwTelemetryCoverageReport @ 0x14011E500 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x14011E7C8 (TelemetryCoverageStringHashInternal.c)
 *     PsSetProcessTelemetryAppState @ 0x1404FD040 (PsSetProcessTelemetryAppState.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(ULONG_PTR a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v6; // rbp
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  int v9; // [rsp+48h] [rbp+10h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 1740));
    v7 = *(_DWORD *)(a1 + 1740);
    do
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1740), v7 | 4, v7);
    }
    while ( v8 != v7 );
    if ( (v7 & 4) == 0 )
    {
      if ( (unsigned int)dword_14035635C < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140356358 )
          dword_140356358 = TelemetryCoverageStringHashInternal(off_140356350, &v9);
        EtwTelemetryCoverageReport(&off_140356350);
      }
      PsSetProcessTelemetryAppState(a1, 4);
    }
  }
  if ( (*a2 & 2) != 0 )
  {
    if ( (unsigned int)dword_140354484 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140354480 )
        dword_140354480 = TelemetryCoverageStringHashInternal(off_140354478, &v10);
      EtwTelemetryCoverageReport(&off_140354478);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 728, 0LL);
    if ( (*(_BYTE *)(a1 + 1739) & 0xF) != 0xF )
      *(_BYTE *)(a1 + 1739) ^= (*(_BYTE *)(a1 + 1739) ^ (*(_BYTE *)(a1 + 1739) + 1)) & 0xF;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728));
    KeAbPostRelease(a1 + 728);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  if ( (*a2 & 4) != 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 728, 0LL);
    if ( (*(_BYTE *)(a1 + 1739) & 0xF0u) < 0xF0 )
      *(_BYTE *)(a1 + 1739) += 16;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728));
    KeAbPostRelease(a1 + 728);
    KeLeaveCriticalRegionThread((__int64)v6);
  }
  return 0LL;
}
