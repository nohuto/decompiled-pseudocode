/*
 * XREFs of ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009DBF0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CNineGridBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180003FA0 (-GetBounds@CNineGridBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x180027F08 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800990E0 (-GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180099D20 (-GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?GetBounds@CSpriteVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009D360 (-GetBounds@CSpriteVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMil.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800DA9A8 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisual::GetContentBounds(CSpriteVisual *this, __int64 a2, __int64 a3)
{
  int v3; // ebx
  CSurfaceBrush *v7; // rcx
  struct D2D_SIZE_F *v8; // r8
  __int64 (__fastcall *v9)(__int64, __int64, __int64, _DWORD *); // rax
  int Bounds; // eax
  CSparseStorage::AllocatedStorage *v11; // rcx
  __m128 v12; // xmm0
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  struct CDropShadow *DropShadow; // rax
  int v18; // eax
  float v19[4]; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  v7 = (CSurfaceBrush *)*((_QWORD *)this + 31);
  if ( v7 )
  {
    v8 = (struct D2D_SIZE_F *)((char *)this + 132);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _DWORD *))(*(_QWORD *)v7 + 168LL);
    if ( (char *)v9 == (char *)CSpriteVisualContent::GetBounds )
    {
      Bounds = CSpriteVisualContent::GetBounds((__int64)v7, a2, v8, a3);
    }
    else if ( (char *)v9 == (char *)CMaskBrush::GetBounds )
    {
      Bounds = CMaskBrush::GetBounds((__int64)v7, a2, (__int64)v8, (float *)a3);
    }
    else if ( (char *)v9 == (char *)CSurfaceBrush::GetBounds )
    {
      Bounds = CSurfaceBrush::GetBounds(v7, a2, v8, (_DWORD *)a3);
    }
    else
    {
      Bounds = v9 == CNineGridBrush::GetBounds
             ? CNineGridBrush::GetBounds((__int64)v7, a2, (__int64)v8, (_DWORD *)a3)
             : v9((__int64)v7, a2, (__int64)v8, (_DWORD *)a3);
    }
    v3 = Bounds;
    if ( Bounds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0xD46u);
  }
  if ( (*(unsigned __int8 (__fastcall **)(CSpriteVisual *))(*(_QWORD *)this + 248LL))(this) )
  {
    v11 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)this + 27);
    if ( (*((_BYTE *)v11 + 4) & 0x20) != 0 )
    {
      v12 = *(__m128 *)((char *)CSparseStorage::AllocatedStorage::FindSlot(v11, 27) + 4);
      LODWORD(v13) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
      LODWORD(v14) = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
      LODWORD(v15) = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
    }
    else
    {
      v12.m128_i32[0] = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v13 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
      v14 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 2);
      v15 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 3);
    }
    v19[3] = v15;
    v19[2] = v14;
    v19[1] = v13;
    v19[0] = v12.m128_f32[0];
    if ( v14 > v12.m128_f32[0] && v15 > v13 )
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, v19);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xACu);
  }
  else if ( (*(_DWORD *)(*((_QWORD *)this + 27) + 4LL) & 0x100) != 0 )
  {
    DropShadow = CSpriteVisual::GetDropShadow(this);
    v18 = (*(__int64 (__fastcall **)(struct CDropShadow *, __int64, char *, float *))(*(_QWORD *)DropShadow + 168LL))(
            DropShadow,
            a2,
            (char *)this + 132,
            v19);
    v3 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xB3u);
    else
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, v19);
  }
  return (unsigned int)v3;
}
