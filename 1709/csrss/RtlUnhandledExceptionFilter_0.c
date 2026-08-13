/*
 * XREFs of RtlUnhandledExceptionFilter_0 @ 0x140001680
 * Callers:
 *     __report_gsfailure @ 0x140001450 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG __stdcall RtlUnhandledExceptionFilter_0(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  return RtlUnhandledExceptionFilter(ExceptionInfo);
}
