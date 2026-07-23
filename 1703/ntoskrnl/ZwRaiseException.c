/*
 * XREFs of ZwRaiseException @ 0x140180A60
 * Callers:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     RtlUnwindEx @ 0x140009D90 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x14023BBE0 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context, BOOLEAN SearchFrames)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord);
}
