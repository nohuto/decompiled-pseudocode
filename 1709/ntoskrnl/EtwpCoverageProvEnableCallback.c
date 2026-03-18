/*
 * XREFs of EtwpCoverageProvEnableCallback @ 0x1404F18A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     TraceLoggingProviderEnabled @ 0x1400BA300 (TraceLoggingProviderEnabled.c)
 *     EtwTelemetryCoverageReport @ 0x14011E500 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x14011E7C8 (TelemetryCoverageStringHashInternal.c)
 */

void __fastcall EtwpCoverageProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  BOOLEAN v4; // di
  struct _KTHREAD *CurrentThread; // rax
  char v6; // bl
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = TraceLoggingProviderEnabled(&stru_140354BD0, ControlCode, 1uLL);
  if ( v4 && !EtwpCoverageCoreTracingEnabled && (unsigned int)dword_1403564DC < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_1403564D8 )
      dword_1403564D8 = TelemetryCoverageStringHashInternal(off_1403564D0, v7);
    EtwTelemetryCoverageReport(&off_1403564D0);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
  EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
  if ( EtwpCoverageContext && EtwpCoverageCoreTracingEnabled != v4 )
  {
    if ( v4 )
    {
      MEMORY[0xFFFFF7800000037C] = -256;
      *(_WORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 2LL) |= 1u;
    }
    else
    {
      MEMORY[0xFFFFF7800000037C] = *(_DWORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 24LL);
      *(_WORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 2LL) &= ~1u;
    }
  }
  EtwpCoverageLockOwner = 0LL;
  EtwpCoverageCoreTracingEnabled = v4;
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
