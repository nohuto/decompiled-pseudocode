/*
 * XREFs of KeQueryMaximumGroupCount @ 0x140110530
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
