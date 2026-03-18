/*
 * XREFs of ZwRaiseException @ 0x140180440
 * Callers:
 *     RtlUnwindEx @ 0x1400D5CB0 (RtlUnwindEx.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x140251460 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context, BOOLEAN SearchFrames)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord, Context, SearchFrames);
}
