/*
 * XREFs of ZwRaiseException @ 0x1401AA080
 * Callers:
 *     RtlUnwindEx @ 0x14012DE70 (RtlUnwindEx.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x140286F30 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context, BOOLEAN SearchFrames)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord);
}
