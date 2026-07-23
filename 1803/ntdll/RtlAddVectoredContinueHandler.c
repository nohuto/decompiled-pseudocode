/*
 * XREFs of RtlAddVectoredContinueHandler @ 0x1800D3BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlAddVectoredContinueHandler(ULONG First, PVECTORED_EXCEPTION_HANDLER Handler)
{
  return sub_180071028(First, Handler, 1u);
}
