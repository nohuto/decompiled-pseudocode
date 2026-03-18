/*
 * XREFs of PpmCheckCustomRun @ 0x140135D90
 * Callers:
 *     PoLatencySensitivityHint @ 0x140130BD0 (PoLatencySensitivityHint.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140132020 (PpmPerfLatencySensitivityHintWorker.c)
 *     PopIntSteerSetMode @ 0x14015FA70 (PopIntSteerSetMode.c)
 *     PpmCheckApplyParkConstraints @ 0x14015FC60 (PpmCheckApplyParkConstraints.c)
 *     PpmCheckApplyResetNotification @ 0x1402331E0 (PpmCheckApplyResetNotification.c)
 *     PpmParkSetLpiCap @ 0x140237BAC (PpmParkSetLpiCap.c)
 *     PpmPerfReApplyStates @ 0x140577A88 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomains @ 0x140581950 (PpmPerfUpdateDomains.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PpmUpdatePerfStates @ 0x1406C92D0 (PpmUpdatePerfStates.c)
 *     PpmCheckApplyPerfConstraints @ 0x1406CEFBC (PpmCheckApplyPerfConstraints.c)
 * Callees:
 *     PpmCheckStart @ 0x14006F670 (PpmCheckStart.c)
 */

__int64 __fastcall PpmCheckCustomRun(int a1)
{
  unsigned __int8 CurrentIrql; // bl

  PpmPerfPolicyLock = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  PpmCheckStart(a1);
  __writecr8(CurrentIrql);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
