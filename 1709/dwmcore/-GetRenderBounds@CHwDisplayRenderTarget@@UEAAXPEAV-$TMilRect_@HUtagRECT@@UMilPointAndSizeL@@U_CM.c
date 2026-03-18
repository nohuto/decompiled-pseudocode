/*
 * XREFs of ?GetRenderBounds@CHwDisplayRenderTarget@@UEAAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800C1920
 * Callers:
 *     ?GetRenderBounds@CHwTextureRenderTarget@@WMA@EAAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800C69F0 (-GetRenderBounds@CHwTextureRenderTarget@@WMA@EAAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwDisplayRenderTarget::GetRenderBounds(__int64 a1, _OWORD *a2)
{
  *a2 = *(_OWORD *)(a1 + 84);
}
