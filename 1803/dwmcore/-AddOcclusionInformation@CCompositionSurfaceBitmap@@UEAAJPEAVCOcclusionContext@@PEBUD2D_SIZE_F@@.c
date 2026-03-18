/*
 * XREFs of ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180007A70
 * Callers:
 *     ?AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801AA560 (-AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006D04 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800070B4 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000711C (-GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800478F0 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800A9470 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddOcclusionInformation(
        CCompositionSurfaceBitmap *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  int BoundsInternal; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  _BYTE v11[64]; // [rsp+30h] [rbp-88h] BYREF
  int v12; // [rsp+70h] [rbp-48h]
  struct D2D_RECT_F v13; // [rsp+80h] [rbp-38h] BYREF

  BoundsInternal = CCompositionSurfaceBitmap::GetBoundsInternal((__int64)this, (__int64)a3, (__int64)&v13);
  v7 = BoundsInternal;
  if ( BoundsInternal < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BoundsInternal, 0x41Bu);
  }
  else if ( !IsEmpty(&v13) )
  {
    if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)((char *)this + 64))
      && (v8 = COcclusionContext::DrawOcclusionRectangle(a2, &v13, 0LL), v7 = v8, v8 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x421u);
    }
    else if ( *((_BYTE *)a2 + 817) )
    {
      v12 = 0;
      CCompositionSurfaceBitmap::CalcImageTransform((__int64)this, (__int64)a3, (__int64)v11, (__int64)&v13);
      v9 = COcclusionContext::CheckAndRecordOverlayCandidate(
             (__int64)a2,
             *((_QWORD *)a2 + 101),
             (_QWORD *)(((unsigned __int64)this + 56) & -(__int64)(this != 0LL)),
             (__int64)v11,
             0LL,
             0);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x42Du);
    }
  }
  return v7;
}
