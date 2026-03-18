/*
 * XREFs of GreCreatePatternBrush @ 0x1C009C0F0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreatePatternBrushInternal @ 0x1C001B3E0 (GreCreatePatternBrushInternal.c)
 */

__int64 __fastcall GreCreatePatternBrush(struct HOBJ__ *a1)
{
  return GreCreatePatternBrushInternal(a1, 0, 0);
}
