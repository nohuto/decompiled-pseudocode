/*
 * XREFs of NtGdiRectVisible @ 0x1C00F7600
 * Callers:
 *     <none>
 * Callees:
 *     GreRectVisible @ 0x1C00F7654 (GreRectVisible.c)
 */

__int64 __fastcall NtGdiRectVisible(HDC a1)
{
  return GreRectVisible(a1);
}
