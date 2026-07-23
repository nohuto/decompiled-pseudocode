/*
 * XREFs of ZwRaiseException @ 0x1800A7E10
 * Callers:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x180033870 (RtlUnwindEx.c)
 *     KiUserExceptionDispatcher @ 0x1800A9060 (KiUserExceptionDispatcher.c)
 *     sub_1800D6480 @ 0x1800D6480 (sub_1800D6480.c)
 *     sub_1800DE274 @ 0x1800DE274 (sub_1800DE274.c)
 *     RtlEnterUmsSchedulingMode @ 0x1800F2760 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  NTSTATUS result; // eax

  result = 345;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
