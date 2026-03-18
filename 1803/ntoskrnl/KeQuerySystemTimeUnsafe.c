/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x140132974
 * Callers:
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
