/*
 * XREFs of ?QueryInterface@CHwStereoFullScreenRenderTarget@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C6A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CHwStereoFullScreenRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHwTextureRenderTarget::QueryInterface((CHwTextureRenderTarget *)(a1 - 144), a2, a3);
}
