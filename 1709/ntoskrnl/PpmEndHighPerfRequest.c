/*
 * XREFs of PpmEndHighPerfRequest @ 0x14015B7B4
 * Callers:
 *     PopSetupHighPerfPowerRequest @ 0x1405EF820 (PopSetupHighPerfPowerRequest.c)
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 *     PopUserShutdownCancelled @ 0x1406FDB68 (PopUserShutdownCancelled.c)
 *     PdcPoPerfOverride @ 0x1406FF1B0 (PdcPoPerfOverride.c)
 *     PoClearBroadcast @ 0x140700A3C (PoClearBroadcast.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoClearPowerRequestInternal @ 0x1400B4DB8 (PoClearPowerRequestInternal.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
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
