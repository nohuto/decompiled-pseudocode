/*
 * XREFs of NtDebugActiveProcess @ 0x1800A1970
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800CFD90 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     <none>
 */

__int64 NtDebugActiveProcess()
{
  __int64 result; // rax

  result = 198LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
