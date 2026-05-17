/*
 * XREFs of ZwEnumerateKey @ 0x1800A5940
 * Callers:
 *     sub_180055C50 @ 0x180055C50 (sub_180055C50.c)
 *     sub_18007C494 @ 0x18007C494 (sub_18007C494.c)
 *     RtlpNtEnumerateSubKey @ 0x180082470 (RtlpNtEnumerateSubKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC730 (RtlpCleanupRegistryKeys.c)
 *     sub_1800FC800 @ 0x1800FC800 (sub_1800FC800.c)
 *     sub_1800FD750 @ 0x1800FD750 (sub_1800FD750.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateKey()
{
  __int64 result; // rax

  result = 50LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
