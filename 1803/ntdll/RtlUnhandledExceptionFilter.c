/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x1800F5FD0
 * Callers:
 *     sub_18008B110 @ 0x18008B110 (sub_18008B110.c)
 *     __report_gsfailure @ 0x18008B130 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

LONG __cdecl RtlUnhandledExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  return RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&dword_180114112);
}
