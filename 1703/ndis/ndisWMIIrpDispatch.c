/*
 * XREFs of ndisWMIIrpDispatch @ 0x1C00A6BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisWMIIrpDispatch(__int64 a1, __int64 a2)
{
  return ndisWMIDispatch(a1, *(_QWORD *)(a1 + 64), a2);
}
