/*
 * XREFs of ZwContinue @ 0x18009B320
 * Callers:
 *     LdrInitializeThunk @ 0x180074F90 (LdrInitializeThunk.c)
 *     KiUserApcDispatcher @ 0x18009E6D0 (KiUserApcDispatcher.c)
 *     sub_18009EB90 @ 0x18009EB90 (sub_18009EB90.c)
 *     sub_18009EEB0 @ 0x18009EEB0 (sub_18009EEB0.c)
 *     sub_1801041E0 @ 0x1801041E0 (sub_1801041E0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  NTSTATUS result; // eax

  result = 67;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
