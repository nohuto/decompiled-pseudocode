/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x1401104F8
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
