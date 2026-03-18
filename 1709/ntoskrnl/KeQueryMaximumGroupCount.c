/*
 * XREFs of KeQueryMaximumGroupCount @ 0x140025A20
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
