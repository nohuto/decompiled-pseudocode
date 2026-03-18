/*
 * XREFs of ?QueryInterface@CHwStereoFullScreenRenderTarget@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D62A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHwTextureRenderTarget::QueryInterface((CHwTextureRenderTarget *)(a1 - 176), a2, a3);
}
