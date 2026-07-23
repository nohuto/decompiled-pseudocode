/*
 * XREFs of RtlKnownExceptionFilter @ 0x1800F5FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __cdecl RtlKnownExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  return (ExceptionPointers->ExceptionRecord->ExceptionCode != -1073741420) - 1;
}
