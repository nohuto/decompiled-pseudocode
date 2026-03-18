/*
 * XREFs of ?IsOccluded@CDrawingContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18003D048
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x1800363D0 (-IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059BA0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDrawingContext::IsOccluded(__int64 a1, __int128 *a2, unsigned int a3)
{
  char v3; // bl
  int v6; // eax
  void *v7; // rcx
  float v8; // xmm3_4
  float v9; // xmm7_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  int v12; // r8d
  int v13; // eax
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm0_4
  float v17; // xmm6_4
  char v18; // r9
  __int64 v19; // rcx
  char (__fastcall *v20)(__int64, __int64, int, char); // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int128 v25; // [rsp+20h] [rbp-60h] BYREF
  __int128 v26; // [rsp+30h] [rbp-50h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a1 + 6827) && *(_QWORD *)(a1 + 6744) )
  {
    v6 = *(_DWORD *)(a1 + 480);
    v26 = *a2;
    if ( v6 )
      v7 = (void *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(v6 - 1));
    else
      v7 = &CMILMatrix::Identity;
    CMILMatrix::Transform2DBoundsHelper<1>(v7, &v26, &v25);
    v8 = *((float *)&v25 + 2);
    v9 = *(float *)&v25;
    if ( *((float *)&v25 + 2) <= *(float *)&v25 )
      return 1;
    v10 = *((float *)&v25 + 3);
    v11 = *((float *)&v25 + 1);
    if ( *((float *)&v25 + 3) <= *((float *)&v25 + 1) )
    {
      return 1;
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 1032);
      if ( v12
        && *(_DWORD *)(*(_QWORD *)(a1 + 1008) + 80LL * (unsigned int)(v12 - 1) + 4)
        && (v13 = *(_DWORD *)(a1 + 3072)) != 0 )
      {
        v26 = *(_OWORD *)(*(_QWORD *)(a1 + 3088) + 16LL * (unsigned int)(v13 - 1));
        v14 = *((float *)&v26 + 3);
        v15 = *((float *)&v26 + 2);
        v16 = *((float *)&v26 + 1);
        v17 = *(float *)&v26;
      }
      else
      {
        v14 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
        v15 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
        v16 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
        v17 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
      v18 = 1;
      if ( v12 && *(_DWORD *)(*(_QWORD *)(a1 + 1008) + 80LL * (unsigned int)(v12 - 1) + 8) )
      {
        v23 = 120LL * (unsigned int)(*(_DWORD *)(a1 + 1864) - 1);
        v24 = *(_QWORD *)(a1 + 1840);
        if ( *(float *)(v23 + v24 + 96) > v17 )
          v17 = *(float *)(v23 + v24 + 96);
        if ( *(float *)(v23 + v24 + 100) > v16 )
          v16 = *(float *)(v23 + v24 + 100);
        if ( v15 > *(float *)(v23 + v24 + 104) )
          v15 = *(float *)(v23 + v24 + 104);
        if ( v14 > *(float *)(v23 + v24 + 108) )
          v14 = *(float *)(v23 + v24 + 108);
        if ( v15 <= v17 || v14 <= v16 )
        {
          v14 = 0.0;
          v15 = 0.0;
          v16 = 0.0;
          v17 = 0.0;
        }
      }
      if ( v17 > *(float *)&v25 )
      {
        *(float *)&v25 = v17;
        v9 = v17;
      }
      if ( v16 > *((float *)&v25 + 1) )
      {
        *((float *)&v25 + 1) = v16;
        v11 = v16;
      }
      if ( *((float *)&v25 + 2) > v15 )
      {
        *((float *)&v25 + 2) = v15;
        v8 = v15;
      }
      if ( *((float *)&v25 + 3) > v14 )
      {
        *((float *)&v25 + 3) = v14;
        v10 = v14;
      }
      if ( v8 <= v9 || v10 <= v11 )
      {
        v10 = 0.0;
        v8 = 0.0;
        v11 = 0.0;
        v9 = 0.0;
        v25 = 0uLL;
      }
      if ( v8 > v9 && v10 > v11 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 6744) + 392LL);
        v26 = v25;
        v20 = *(char (__fastcall **)(__int64, __int64, int, char))(*(_QWORD *)v19 + 56LL);
        if ( v20 == CArrayBasedCoverageSet::IsFullyCovered )
          return CArrayBasedCoverageSet::IsFullyCovered(v19, (__int64)&v26, a3, 1);
        else
          return v20(v19, (__int64)&v26, a3, 1);
      }
      return v18;
    }
  }
  return v3;
}
