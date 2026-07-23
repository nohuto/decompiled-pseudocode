/*
 * XREFs of ZwFlushKey @ 0x18009C6F0
 * Callers:
 *     RtlApplyRXact @ 0x1800DFB20 (RtlApplyRXact.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushKey(HANDLE KeyHandle)
{
  NTSTATUS result; // eax

  result = 226;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
