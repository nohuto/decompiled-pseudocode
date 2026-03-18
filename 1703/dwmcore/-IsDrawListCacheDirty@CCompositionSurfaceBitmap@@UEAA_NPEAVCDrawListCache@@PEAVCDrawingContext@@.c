/*
 * XREFs of ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000B0F0
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000A520 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A8B0 (-BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000AA10 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x180037A90 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

bool __fastcall CCompositionSurfaceBitmap::IsDrawListCacheDirty(
        CCompositionSurfaceBitmap *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        struct D2D_SIZE_F *a4)
{
  char Transform; // bl
  __int64 v9; // rax
  bool result; // al
  _BYTE v11[64]; // [rsp+30h] [rbp-A8h] BYREF
  int v12; // [rsp+70h] [rbp-68h]
  _DWORD v13[4]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v14; // [rsp+90h] [rbp-48h] BYREF

  v12 = 0;
  Transform = CCompositionSurfaceBitmap::GetTransform((__int64)this + 56, (__int64)v11, &v14);
  if ( CCompositionSurfaceBitmap::BoundsFromLayoutSize((__int64)this, (float *)a4, v13) )
    Transform |= CCompositionSurfaceBitmap::AppendSizePreferenceTransform((char *)this + 56, v13, v11);
  result = 1;
  if ( !CContent::IsDrawListCacheDirty(
          this,
          a2,
          a3,
          a4,
          (const struct CMILMatrix *)((unsigned __int64)v11 & -(__int64)(Transform != 0))) )
  {
    v9 = *((_QWORD *)this + 49);
    if ( v9 )
    {
      if ( *((_QWORD *)a2 + 3) >= *(_QWORD *)(v9 + 32) )
        return 0;
    }
  }
  return result;
}
