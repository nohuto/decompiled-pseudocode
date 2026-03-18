/*
 * XREFs of ?GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002BC20
 * Callers:
 *     ?DiscardRectangle@CHwDisplayRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x18002B5E0 (-DiscardRectangle@CHwDisplayRenderTarget@@UEAAXAEBUMilRectF@@@Z.c)
 *     ?GetD2DContext@CHwDisplayRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x18002B750 (-GetD2DContext@CHwDisplayRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?GetDeviceInfo@CHwDisplayRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18002C4B0 (-GetDeviceInfo@CHwDisplayRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::GetDeviceNoRef(CHwDisplayRenderTarget *this, struct CD3DDeviceLevel1 **a2)
{
  *a2 = (struct CD3DDeviceLevel1 *)*((_QWORD *)this + 25);
  return 0LL;
}
