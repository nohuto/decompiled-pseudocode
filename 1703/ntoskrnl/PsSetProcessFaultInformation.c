/*
 * XREFs of PsSetProcessFaultInformation @ 0x14041FC34
 * Callers:
 *     DbgkForwardException @ 0x140423F54 (DbgkForwardException.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     PsSetProcessTelemetryAppState @ 0x140498E00 (PsSetProcessTelemetryAppState.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(ULONG_PTR a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v6; // al

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 1740));
    if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 1740), 0x10u) & 0x10) == 0 )
      PsSetProcessTelemetryAppState(a1);
  }
  if ( (*a2 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 728, 0LL);
    v6 = *(_BYTE *)(a1 + 1739);
    if ( v6 != -1 )
      *(_BYTE *)(a1 + 1739) = v6 + 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728));
    KeAbPostRelease(a1 + 728);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return 0LL;
}
