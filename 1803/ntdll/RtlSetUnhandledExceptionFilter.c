/*
 * XREFs of RtlSetUnhandledExceptionFilter @ 0x180071250
 * Callers:
 *     <none>
 * Callees:
 *     RtlEncodePointer @ 0x180071270 (RtlEncodePointer.c)
 */

void __cdecl RtlSetUnhandledExceptionFilter(PRTLP_UNHANDLED_EXCEPTION_FILTER UnhandledExceptionFilter)
{
  Ptr = RtlEncodePointer(UnhandledExceptionFilter);
}
