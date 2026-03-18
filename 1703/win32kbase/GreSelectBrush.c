/*
 * XREFs of GreSelectBrush @ 0x1C00E82C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSelectBrush(HDC a1, __int64 a2)
{
  return GreSelectBrushInternal(a1, a2, 1);
}
