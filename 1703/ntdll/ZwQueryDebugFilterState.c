/*
 * XREFs of ZwQueryDebugFilterState @ 0x1800A7990
 * Callers:
 *     sub_18005FF34 @ 0x18005FF34 (sub_18005FF34.c)
 *     DbgQueryDebugFilterState @ 0x1800E1380 (DbgQueryDebugFilterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  NTSTATUS result; // eax

  result = 309;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
