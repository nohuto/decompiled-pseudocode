/*
 * XREFs of _GetWindowContextHelpId @ 0x1C0219EF0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 */

__int64 __fastcall GetWindowContextHelpId(__int64 a1)
{
  return GetProp(a1, *(_WORD *)(gpsi + 1360LL), 1);
}
