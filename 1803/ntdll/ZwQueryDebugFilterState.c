/*
 * XREFs of ZwQueryDebugFilterState @ 0x18009D1D0
 * Callers:
 *     sub_1800085D4 @ 0x1800085D4 (sub_1800085D4.c)
 *     DbgQueryDebugFilterState @ 0x1800DAF50 (DbgQueryDebugFilterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  NTSTATUS result; // eax

  result = 313;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
