/*
 * XREFs of RtlAddVectoredExceptionHandler @ 0x180071020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlAddVectoredExceptionHandler(ULONG First, PVECTORED_EXCEPTION_HANDLER Handler)
{
  return (PVOID)sub_180071028(First, Handler, 0LL);
}
