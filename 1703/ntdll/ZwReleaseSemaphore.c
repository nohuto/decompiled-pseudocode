/*
 * XREFs of ZwReleaseSemaphore @ 0x1800A5440
 * Callers:
 *     sub_1800156B0 @ 0x1800156B0 (sub_1800156B0.c)
 *     RtlReleaseResource @ 0x180073A90 (RtlReleaseResource.c)
 *     RtlConvertExclusiveToShared @ 0x18008ED10 (RtlConvertExclusiveToShared.c)
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
