/*
 * XREFs of RtlAddVectoredExceptionHandler @ 0x180075880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlAddVectoredExceptionHandler(ULONG First, PVECTORED_EXCEPTION_HANDLER Handler)
{
  return (PVOID)RtlpAddVectoredHandler(First, Handler, 0LL);
}
