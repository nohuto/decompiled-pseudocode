/*
 * XREFs of KeQueryMaximumGroupCount @ 0x1401329A0
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
