/*
 * XREFs of NtGdiDdCreateFullscreenSprite @ 0x1C02510C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiDdCreateFullscreenSprite(HDC a1, unsigned int a2, HSPRITE *a3, HDC *a4)
{
  return SpDdCreateFullscreenSprite(a1, a2, a3, a4);
}
