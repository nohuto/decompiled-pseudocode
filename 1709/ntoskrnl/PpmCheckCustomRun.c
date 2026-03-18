/*
 * XREFs of PpmCheckCustomRun @ 0x140130618
 * Callers:
 *     PoLatencySensitivityHint @ 0x14000DB40 (PoLatencySensitivityHint.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x14000F3F0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PopIntSteerSetMode @ 0x140137B10 (PopIntSteerSetMode.c)
 *     PpmCheckApplyParkConstraints @ 0x140137E00 (PpmCheckApplyParkConstraints.c)
 *     PpmCheckApplyResetNotification @ 0x1402486D0 (PpmCheckApplyResetNotification.c)
 *     PpmParkSetLpiCap @ 0x14024CC50 (PpmParkSetLpiCap.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1405B62EC (PpmPerfUpdateDomainPolicy.c)
 *     PpmPerfReApplyStates @ 0x1406F9D48 (PpmPerfReApplyStates.c)
 *     PpmCheckApplyPerfConstraints @ 0x140706630 (PpmCheckApplyPerfConstraints.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     PpmCheckStart @ 0x1400E4720 (PpmCheckStart.c)
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
