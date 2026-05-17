/*
 * XREFs of ZwReleaseSemaphore @ 0x18009AC00
 * Callers:
 *     sub_180027040 @ 0x180027040 (sub_180027040.c)
 *     RtlReleaseResource @ 0x18006C890 (RtlReleaseResource.c)
 *     RtlConvertExclusiveToShared @ 0x180088680 (RtlConvertExclusiveToShared.c)
 * Callees:
 *     <none>
 */

__int64 ZwReleaseSemaphore()
{
  __int64 result; // rax

  result = 10LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
