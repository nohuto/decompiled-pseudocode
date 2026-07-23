/*
 * XREFs of RtlSetUnhandledExceptionFilter @ 0x180075AB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEncodePointer @ 0x180075AD0 (RtlEncodePointer.c)
 */

void __cdecl RtlSetUnhandledExceptionFilter(PRTLP_UNHANDLED_EXCEPTION_FILTER UnhandledExceptionFilter)
{
  RtlpUnhandledExceptionFilter = RtlEncodePointer(UnhandledExceptionFilter);
}
