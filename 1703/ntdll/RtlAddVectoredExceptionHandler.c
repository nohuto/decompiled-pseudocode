/*
 * XREFs of RtlAddVectoredExceptionHandler @ 0x180077610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlAddVectoredExceptionHandler(ULONG First, PVECTORED_EXCEPTION_HANDLER Handler)
{
  return (PVOID)sub_180077618(First, Handler, 0LL);
}
