/*
 * XREFs of KeAreAllApcsDisabled @ 0x1400E2F30
 * Callers:
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140080268 (PnpIsSafeToExamineUserModeTeb.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140129BE0 (NtSetInformationWorkerFactory.c)
 *     MmFlushVirtualMemory @ 0x1404C6968 (MmFlushVirtualMemory.c)
 *     ViZwCheckApcRequirement @ 0x140787CB4 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400E2B84 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
