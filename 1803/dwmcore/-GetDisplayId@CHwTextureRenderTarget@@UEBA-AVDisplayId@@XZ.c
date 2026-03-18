/*
 * XREFs of ?GetDisplayId@CHwTextureRenderTarget@@UEBA?AVDisplayId@@XZ @ 0x1800D6CA0
 * Callers:
 *     ?GetDisplayId@CHwTextureRenderTarget@@W7EBA?AVDisplayId@@XZ @ 0x1800DE020 (-GetDisplayId@CHwTextureRenderTarget@@W7EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CHwTextureRenderTarget::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 - 108);
  return a2;
}
