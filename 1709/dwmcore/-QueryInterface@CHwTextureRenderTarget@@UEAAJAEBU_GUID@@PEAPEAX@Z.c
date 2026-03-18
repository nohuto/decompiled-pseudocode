/*
 * XREFs of ?QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008F930
 * Callers:
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C6A70 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C6A80 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WMI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C6A90 (-QueryInterface@CHwTextureRenderTarget@@WMI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C6AA0 (-QueryInterface@CHwTextureRenderTarget@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwTextureRenderTarget@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C6AB0 (-QueryInterface@CHwTextureRenderTarget@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwStereoFullScreenRenderTarget@@WCDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C6CB0 (-QueryInterface@CHwStereoFullScreenRenderTarget@@WCDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CHwTextureRenderTarget::QueryInterface(CHwTextureRenderTarget *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CHwTextureRenderTarget *)((char *)this + 144), a2, a3);
}
