/*
 * XREFs of KeQueryActiveGroupCount @ 0x14012E4F0
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 *     EtwpProcessorRundown @ 0x140710EC4 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
