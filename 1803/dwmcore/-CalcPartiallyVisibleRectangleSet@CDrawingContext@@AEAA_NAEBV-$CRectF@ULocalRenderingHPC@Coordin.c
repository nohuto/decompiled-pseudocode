/*
 * XREFs of ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18013D2C4
 * Callers:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180008CF0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18015ECE0 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 * Callees:
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?ComputeVisibleRegion@COcclusionContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18013FFC8 (-ComputeVisibleRegion@COcclusionContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 */

char __fastcall CDrawingContext::CalcPartiallyVisibleRectangleSet(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5)
{
  char v9; // bl
  const struct CMILMatrix *TopByReference; // rax
  __int64 v11; // rdx
  CMatrixStack *v12; // r11
  CMILMatrix *v13; // rax
  float left; // xmm3_4
  float top; // xmm1_4
  float right; // xmm2_4
  float bottom; // xmm0_4
  int v18; // r9d
  __int64 v19; // rcx
  _BYTE v21[8]; // [rsp+40h] [rbp-30h] BYREF
  struct D2D_RECT_F v22; // [rsp+48h] [rbp-28h] BYREF
  float v23; // [rsp+58h] [rbp-18h] BYREF
  float v24; // [rsp+5Ch] [rbp-14h]
  float v25; // [rsp+60h] [rbp-10h]
  float v26; // [rsp+64h] [rbp-Ch]

  v9 = 0;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 480));
  if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)TopByReference, v11) )
  {
    v13 = CMatrixStack::GetTopByReference(v12);
    CMILMatrix::Transform2DBoundsHelper<0>(v13, a2, &v22.left);
    CScopedClipStack::GetTopGpuClipInScope((__int64 *)(a1 + 1008), 1, (__int64)&v23);
    left = v22.left;
    if ( v23 > v22.left )
    {
      v22.left = v23;
      left = v23;
    }
    top = v22.top;
    if ( v24 > v22.top )
    {
      v22.top = v24;
      top = v24;
    }
    right = v22.right;
    if ( v22.right > v25 )
    {
      v22.right = v25;
      right = v25;
    }
    bottom = v22.bottom;
    if ( v22.bottom > v26 )
    {
      v22.bottom = v26;
      bottom = v26;
    }
    if ( right <= left || bottom <= top )
    {
      v22.bottom = 0.0;
      v22.right = 0.0;
      v22.top = 0.0;
      v22.left = 0.0;
    }
    if ( IsEmpty(&v22) )
    {
      *a5 = 0;
      return 1;
    }
    if ( *(_BYTE *)(a1 + 6827) )
    {
      v19 = *(_QWORD *)(a1 + 6744);
      v21[0] = 0;
      if ( (int)COcclusionContext::ComputeVisibleRegion(v19, (unsigned int)&v22, a3, v18, (__int64)v21, a4, (__int64)a5) >= 0 )
      {
        if ( v21[0] )
          return 1;
      }
    }
  }
  return v9;
}
