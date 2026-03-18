/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x140025A60
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
