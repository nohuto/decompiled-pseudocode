/*
 * XREFs of ndisWMIIrpDispatch @ 0x1C00B7BE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisWMIDispatch @ 0x1C00B7BFC (ndisWMIDispatch.c)
 */

__int64 __fastcall ndisWMIIrpDispatch(__int64 a1, __int64 a2)
{
  return ndisWMIDispatch(a1, *(_QWORD *)(a1 + 64), a2);
}
