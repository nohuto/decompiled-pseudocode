/*
 * XREFs of RtlSetUnhandledExceptionFilter @ 0x180077820
 * Callers:
 *     <none>
 * Callees:
 *     RtlEncodePointer @ 0x180077840 (RtlEncodePointer.c)
 */

void __cdecl RtlSetUnhandledExceptionFilter(PRTLP_UNHANDLED_EXCEPTION_FILTER UnhandledExceptionFilter)
{
  Ptr = RtlEncodePointer(UnhandledExceptionFilter);
}
