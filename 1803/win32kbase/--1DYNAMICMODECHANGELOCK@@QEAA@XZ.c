/*
 * XREFs of ??1DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C009F6F0
 * Callers:
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C00D6CC0 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DYNAMICMODECHANGELOCK::~DYNAMICMODECHANGELOCK(DYNAMICMODECHANGELOCK *this, __int64 a2, int a3)
{
  __int64 v3; // rcx

  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, a3);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v3);
  }
}
