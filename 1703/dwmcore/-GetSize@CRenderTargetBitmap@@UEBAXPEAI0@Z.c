/*
 * XREFs of ?GetSize@CRenderTargetBitmap@@UEBAXPEAI0@Z @ 0x1800164B0
 * Callers:
 *     ?GetSurfaceSize@CBrushRenderingGraph@@CA?AUD2D_SIZE_F@@PEAVIImageSource@@@Z @ 0x18001637C (-GetSurfaceSize@CBrushRenderingGraph@@CA-AUD2D_SIZE_F@@PEAVIImageSource@@@Z.c)
 * Callees:
 *     ?GetRenderBounds@CRenderTargetBitmap@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18004744C (-GetRenderBounds@CRenderTargetBitmap@@QEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILS.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CRenderTargetBitmap::GetSize(CRenderTargetBitmap *this, unsigned int *a2, unsigned int *a3)
{
  _DWORD v5[4]; // [rsp+20h] [rbp-28h] BYREF

  CRenderTargetBitmap::GetRenderBounds((char *)this - 104, v5);
  *a2 = v5[2] - v5[0];
  *a3 = v5[3] - v5[1];
}
