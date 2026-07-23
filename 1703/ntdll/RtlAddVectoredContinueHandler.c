/*
 * XREFs of RtlAddVectoredContinueHandler @ 0x180090550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlAddVectoredContinueHandler(ULONG First, PVECTORED_EXCEPTION_HANDLER Handler)
{
  return sub_180077618(First, Handler, 1u);
}
