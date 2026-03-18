/*
 * XREFs of ?QueryInterface@CHwStereoFullScreenRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E4AA0
 * Callers:
 *     ?QueryInterface@CHwCompSwapChainTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DDE60 (-QueryInterface@CHwCompSwapChainTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwCompSwapChainTarget@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DDE70 (-QueryInterface@CHwCompSwapChainTarget@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WCFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE390 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WCFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::QueryInterface(
        CHwStereoFullScreenRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CHwStereoFullScreenRenderTarget *)((char *)this + 160), a2, a3);
}
