/*
 * XREFs of EditionPointerActivate @ 0x1C01C9F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EditionPointerActivate(__int64 a1, int a2, __int16 a3, __int64 a4, const struct tagPOINTEREVENTINT *a5)
{
  xxxPointerActivateInternal(*(struct tagWND **)(a1 + 80), a2, a3, a4, a5);
}
