/*
 * XREFs of KeAreAllApcsDisabled @ 0x1400F0AD0
 * Callers:
 *     PnpIsSafeToExamineUserModeTeb @ 0x1400750E4 (PnpIsSafeToExamineUserModeTeb.c)
 *     NtSetInformationWorkerFactory @ 0x140085580 (NtSetInformationWorkerFactory.c)
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     sub_1401947F0 @ 0x1401947F0 (sub_1401947F0.c)
 *     MmFlushVirtualMemory @ 0x140568184 (MmFlushVirtualMemory.c)
 *     ViZwCheckApcRequirement @ 0x140837674 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400F0B30 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
