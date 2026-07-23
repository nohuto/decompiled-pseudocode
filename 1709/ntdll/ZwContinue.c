/*
 * XREFs of ZwContinue @ 0x1800A0920
 * Callers:
 *     LdrInitializeThunk @ 0x180078E00 (LdrInitializeThunk.c)
 *     KiUserApcDispatcher @ 0x1800A3C90 (KiUserApcDispatcher.c)
 *     RtlRestoreContext @ 0x1800A4150 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x1800A4470 (RcFrameConsolidation.c)
 *     RtlpLoadUmsDebugRegisterState @ 0x1801087E0 (RtlpLoadUmsDebugRegisterState.c)
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
