/*
 * XREFs of _GetWindowContextHelpId @ 0x1C0218D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowContextHelpId(__int64 a1)
{
  return GetProp(a1, *(_WORD *)(gpsi + 1360LL), 1);
}
