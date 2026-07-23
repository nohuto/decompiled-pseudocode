/*
 * XREFs of ZwRaiseException @ 0x18009D670
 * Callers:
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x18000DEA0 (RtlUnwindEx.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     KiUserExceptionDispatcher @ 0x18009E830 (KiUserExceptionDispatcher.c)
 *     sub_1800CBC40 @ 0x1800CBC40 (sub_1800CBC40.c)
 *     sub_1800D7B3C @ 0x1800D7B3C (sub_1800D7B3C.c)
 *     RtlEnterUmsSchedulingMode @ 0x1800EF810 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  NTSTATUS result; // eax

  result = 350;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
