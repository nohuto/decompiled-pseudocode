/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x1800F84F0
 * Callers:
 *     sub_180095ED0 @ 0x180095ED0 (sub_180095ED0.c)
 *     __report_gsfailure @ 0x180095EF0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

LONG __cdecl RtlUnhandledExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  return RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&dword_1801150C2);
}
