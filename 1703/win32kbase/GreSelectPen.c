/*
 * XREFs of GreSelectPen @ 0x1C00E82E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct HOBJ__ *__fastcall GreSelectPen(HDC a1, struct HOBJ__ *a2)
{
  return GreSelectPenInternal(a1, a2, 1);
}
