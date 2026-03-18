/*
 * XREFs of ?IsOccluded@CDrawingContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18000DC2C
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18001D074 (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009339C (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::IsOccluded(__int64 a1, __int128 *a2, unsigned int a3)
{
  char v3; // bl
  const struct CMILMatrix *TopByReference; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v14; // [rsp+20h] [rbp-30h] BYREF
  float v15; // [rsp+24h] [rbp-2Ch]
  float v16; // [rsp+28h] [rbp-28h]
  float v17; // [rsp+2Ch] [rbp-24h]
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a1 + 6771) && *(_QWORD *)(a1 + 6680) )
  {
    v18 = *a2;
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 472));
    CMILMatrix::Transform2DBoundsHelper<1>(TopByReference, &v18, &v14);
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v14) )
    {
      return 1;
    }
    else
    {
      LOBYTE(v7) = 1;
      CScopedClipStack::GetTopGpuClipInScope(a1 + 912, v7, &v18);
      v9 = v14;
      if ( *(float *)&v18 > v14 )
      {
        v14 = *(float *)&v18;
        v9 = *(float *)&v18;
      }
      v10 = v15;
      if ( *((float *)&v18 + 1) > v15 )
      {
        v15 = *((float *)&v18 + 1);
        v10 = *((float *)&v18 + 1);
      }
      v11 = v16;
      if ( v16 > *((float *)&v18 + 2) )
      {
        v11 = *((float *)&v18 + 2);
        v16 = *((float *)&v18 + 2);
      }
      v12 = v17;
      if ( v17 > *((float *)&v18 + 3) )
      {
        v12 = *((float *)&v18 + 3);
        v17 = *((float *)&v18 + 3);
      }
      if ( v11 <= v9 || v12 <= v10 )
      {
        v17 = 0.0;
        v16 = 0.0;
        v15 = 0.0;
        v14 = 0.0;
      }
      LOBYTE(v8) = 1;
      return ((__int64 (__fastcall *)(_QWORD, float *, __int64, _QWORD))COcclusionContext::IsOccluded)(
               *(_QWORD *)(a1 + 6680),
               &v14,
               v8,
               a3);
    }
  }
  return v3;
}
