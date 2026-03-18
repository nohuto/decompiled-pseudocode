/*
 * XREFs of ?QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049190
 * Callers:
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6290 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D62A0 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D62B0 (-QueryInterface@CHwTextureRenderTarget@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D62C0 (-QueryInterface@CHwTextureRenderTarget@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WMI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D62D0 (-QueryInterface@CHwTextureRenderTarget@@WMI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WBHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D64B0 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WBHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::QueryInterface(
        CHwTextureRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CHwTextureRenderTarget *)((char *)this + 128), a2, a3);
}
