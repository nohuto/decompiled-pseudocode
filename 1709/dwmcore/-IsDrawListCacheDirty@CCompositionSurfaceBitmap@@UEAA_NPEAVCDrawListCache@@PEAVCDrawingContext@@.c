/*
 * XREFs of ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180029600
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800231D0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180022DE0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800287B4 (-BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028CA0 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x18015DAC0 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsDrawListCacheDirty(
        CCompositionSurfaceBitmap *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        struct D2D_SIZE_F *a4)
{
  char v7; // bl
  char Transform; // di
  unsigned __int64 v10; // rax
  _BYTE v12[64]; // [rsp+30h] [rbp-B8h] BYREF
  int v13; // [rsp+70h] [rbp-78h]
  _DWORD v14[4]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v15; // [rsp+90h] [rbp-58h] BYREF

  v7 = 0;
  v13 = 0;
  Transform = CCompositionSurfaceBitmap::GetTransform((__int64)this + 56, (__int64)v12, &v15);
  if ( CCompositionSurfaceBitmap::BoundsFromLayoutSize((__int64)this, (float *)a4, v14) )
    Transform |= CCompositionSurfaceBitmap::AppendSizePreferenceTransform((char *)this + 56, v14, v12);
  if ( CContent::IsDrawListCacheDirty(
         this,
         a2,
         a3,
         a4,
         (const struct CMILMatrix *)((unsigned __int64)v12 & -(__int64)(Transform != 0))) )
  {
    return 1;
  }
  v10 = *((_QWORD *)this + 19);
  if ( !v10 || *((_QWORD *)a2 + 3) < v10 )
    return 1;
  return v7;
}
