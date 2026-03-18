/*
 * XREFs of ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C021A960
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 */

void __fastcall SelectFont(struct _SELECT_FONT *a1)
{
  GreSelectFont(*(_QWORD *)a1, *((_QWORD *)a1 + 1));
}
