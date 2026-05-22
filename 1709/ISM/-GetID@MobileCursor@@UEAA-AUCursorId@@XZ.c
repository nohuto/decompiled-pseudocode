/*
 * XREFs of ?GetID@MobileCursor@@UEAA?AUCursorId@@XZ @ 0x180030860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall MobileCursor::GetID(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = *(_OWORD *)(a1 + 40);
  return result;
}
