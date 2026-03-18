/*
 * XREFs of PpmEndHighPerfRequest @ 0x14016DFB4
 * Callers:
 *     PopUserShutdownCancelled @ 0x1405EACD0 (PopUserShutdownCancelled.c)
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 *     PoClearBroadcast @ 0x1405ECC28 (PoClearBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x14062754C (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x140764B40 (PdcPoPerfOverride.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoClearPowerRequestInternal @ 0x1400762C0 (PoClearPowerRequestInternal.c)
 */

__int64 __fastcall PpmEndHighPerfRequest(int a1)
{
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 result; // rax

  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&PpmHighPerfRequestLock);
  if ( !PpmHighPerfDuration[v1] || PpmHighPerfDeferredEndDisabled )
  {
    PoClearPowerRequestInternal(PpmHighPerfPowerRequest, 4);
  }
  else
  {
    ++PpmHighPerfDeferredEndCount;
    v3 = (unsigned int)(10000 * PpmHighPerfDuration[v1]);
    v4 = PpmHighPerfDeferredEndTime;
    if ( PpmHighPerfDeferredEndTime <= (unsigned __int64)(v3 + MEMORY[0xFFFFF78000000008]) )
    {
      v4 = v3 + MEMORY[0xFFFFF78000000008];
      PpmHighPerfDeferredEndTime = v3 + MEMORY[0xFFFFF78000000008];
    }
    KiSetTimerEx((__int64)&PpmHighPerfEndTimer, MEMORY[0xFFFFF78000000008] - v4, 0, 0, (__int64)&PpmHighPerfEndDpc);
  }
  KxReleaseSpinLock(&PpmHighPerfRequestLock);
  result = v2;
  __writecr8(v2);
  return result;
}
