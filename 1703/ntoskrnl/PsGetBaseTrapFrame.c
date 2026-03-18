/*
 * XREFs of PsGetBaseTrapFrame @ 0x140238D74
 * Callers:
 *     PsPicoWalkUserStack @ 0x1406E34F0 (PsPicoWalkUserStack.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall PsGetBaseTrapFrame(__int64 a1)
{
  return PspGetBaseTrapFrame(a1);
}
