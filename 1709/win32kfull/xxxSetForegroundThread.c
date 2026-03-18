/*
 * XREFs of xxxSetForegroundThread @ 0x1C000D020
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00859CC (xxxSetForegroundThreadWithWindowHint.c)
 */

__int64 __fastcall xxxSetForegroundThread(__int64 a1)
{
  return xxxSetForegroundThreadWithWindowHint(a1, 0LL);
}
