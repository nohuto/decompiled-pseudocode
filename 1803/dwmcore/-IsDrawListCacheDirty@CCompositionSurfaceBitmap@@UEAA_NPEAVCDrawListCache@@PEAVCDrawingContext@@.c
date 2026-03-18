/*
 * XREFs of ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800079B0
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800071B4 (-BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180007240 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18009AF60 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x180186A50 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 */

bool __fastcall CCompositionSurfaceBitmap::IsDrawListCacheDirty(
        CCompositionSurfaceBitmap *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        struct D2D_SIZE_F *a4)
{
  char Transform; // bl
  _BYTE v10[64]; // [rsp+30h] [rbp-A8h] BYREF
  int v11; // [rsp+70h] [rbp-68h]
  _DWORD v12[4]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v13; // [rsp+90h] [rbp-48h] BYREF

  v11 = 0;
  Transform = CCompositionSurfaceBitmap::GetTransform((__int64)this + 56, (__int64)v10, &v13);
  if ( CCompositionSurfaceBitmap::BoundsFromLayoutSize((__int64)this, (float *)a4, v12) )
    Transform |= CCompositionSurfaceBitmap::AppendSizePreferenceTransform((char *)this + 56, v12, v10);
  return CContent::IsDrawListCacheDirty(
           this,
           a2,
           a3,
           a4,
           (const struct CMILMatrix *)((unsigned __int64)v10 & -(__int64)(Transform != 0)));
}
