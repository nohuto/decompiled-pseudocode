/*
 * XREFs of NtCreateIoCompletion @ 0x1800A1570
 * Callers:
 *     TpAllocPoolInternal @ 0x18000AC04 (TpAllocPoolInternal.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateIoCompletion()
{
  __int64 result; // rax

  result = 166LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
