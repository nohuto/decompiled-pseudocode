/*
 * XREFs of ?QueryInterface@CHwCompSwapChainTarget@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DDE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwCompSwapChainTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHwStereoFullScreenRenderTarget::QueryInterface((CHwStereoFullScreenRenderTarget *)(a1 - 216), a2, a3);
}
