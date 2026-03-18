/*
 * XREFs of ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C0219710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SelectFont(struct _SELECT_FONT *a1)
{
  GreSelectFontInternal(*(HDC *)a1, *((_QWORD *)a1 + 1), 1);
}
