/*
 * XREFs of ?QueryInterface@CHwStereoFullScreenRenderTarget@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C6A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CHwStereoFullScreenRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHwTextureRenderTarget::QueryInterface((CHwTextureRenderTarget *)(a1 - 192), a2, a3);
}
