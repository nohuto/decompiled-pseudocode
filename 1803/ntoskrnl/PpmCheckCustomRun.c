/*
 * XREFs of PpmCheckCustomRun @ 0x14014CB34
 * Callers:
 *     PoLatencySensitivityHint @ 0x140144140 (PoLatencySensitivityHint.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140144D10 (PpmPerfLatencySensitivityHintWorker.c)
 *     PopIntSteerSetMode @ 0x14017F220 (PopIntSteerSetMode.c)
 *     PpmCheckApplyParkConstraints @ 0x14017F420 (PpmCheckApplyParkConstraints.c)
 *     PpmCheckApplyResetNotification @ 0x14027E7D0 (PpmCheckApplyResetNotification.c)
 *     PpmParkSetLpiCap @ 0x1402829EC (PpmParkSetLpiCap.c)
 *     PpmPerfReApplyStates @ 0x1405EA8BC (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14061034C (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckApplyPerfConstraints @ 0x14076A55C (PpmCheckApplyPerfConstraints.c)
 * Callees:
 *     PpmCheckStart @ 0x1400356C0 (PpmCheckStart.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
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
