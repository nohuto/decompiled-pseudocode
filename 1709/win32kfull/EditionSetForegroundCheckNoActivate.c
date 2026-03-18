/*
 * XREFs of EditionSetForegroundCheckNoActivate @ 0x1C01B4EC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetForegroundCheckNoActivate @ 0x1C01B5070 (xxxSetForegroundCheckNoActivate.c)
 */

__int64 __fastcall EditionSetForegroundCheckNoActivate(__int64 a1)
{
  return xxxSetForegroundCheckNoActivate(*(struct tagWND **)(a1 + 80));
}
