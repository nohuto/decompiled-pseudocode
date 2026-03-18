/*
 * XREFs of NtGdiRectVisible @ 0x1C00EB370
 * Callers:
 *     <none>
 * Callees:
 *     GreRectVisible @ 0x1C00EB3C0 (GreRectVisible.c)
 */

__int64 __fastcall NtGdiRectVisible(HDC a1)
{
  return GreRectVisible(a1);
}
