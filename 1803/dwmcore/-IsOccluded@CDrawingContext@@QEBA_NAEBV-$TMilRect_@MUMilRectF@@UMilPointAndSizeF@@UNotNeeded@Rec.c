/*
 * XREFs of ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180008170
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A5380 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x1800A8DCC (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::IsOccluded(__int64 a1, __int128 *a2, unsigned int a3)
{
  char v3; // bl
  const struct CMILMatrix *TopByReference; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  float left; // xmm3_4
  float top; // xmm1_4
  float right; // xmm2_4
  float bottom; // xmm0_4
  struct D2D_RECT_F v14; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a1 + 6827) )
  {
    v15 = *a2;
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 480));
    CMILMatrix::Transform2DBoundsHelper<1>(TopByReference, &v15, &v14);
    v3 = 1;
    if ( !IsEmpty(&v14) )
    {
      LOBYTE(v7) = 1;
      CScopedClipStack::GetTopGpuClipInScope(a1 + 1008, v7, &v15);
      left = v14.left;
      if ( *(float *)&v15 > v14.left )
      {
        LODWORD(v14.left) = v15;
        left = *(float *)&v15;
      }
      top = v14.top;
      if ( *((float *)&v15 + 1) > v14.top )
      {
        v14.top = *((FLOAT *)&v15 + 1);
        top = *((float *)&v15 + 1);
      }
      right = v14.right;
      if ( v14.right > *((float *)&v15 + 2) )
      {
        v14.right = *((FLOAT *)&v15 + 2);
        right = *((float *)&v15 + 2);
      }
      bottom = v14.bottom;
      if ( v14.bottom > *((float *)&v15 + 3) )
      {
        v14.bottom = *((FLOAT *)&v15 + 3);
        bottom = *((float *)&v15 + 3);
      }
      if ( right <= left || bottom <= top )
      {
        v14.bottom = 0.0;
        v14.right = 0.0;
        v14.top = 0.0;
        v14.left = 0.0;
      }
      LOBYTE(v8) = 1;
      return ((__int64 (__fastcall *)(_QWORD, struct D2D_RECT_F *, __int64, _QWORD))COcclusionContext::IsOccluded)(
               *(_QWORD *)(a1 + 6744),
               &v14,
               v8,
               a3);
    }
  }
  return v3;
}
