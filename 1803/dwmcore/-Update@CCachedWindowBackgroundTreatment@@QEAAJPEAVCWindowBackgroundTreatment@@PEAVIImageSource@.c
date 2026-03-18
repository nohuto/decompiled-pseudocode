/*
 * XREFs of ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180006860
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180008624 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18000673C (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@.c)
 *     ?RemoveDependentCachedTreatment@CWindowBackgroundTreatment@@QEAAXPEBVCCachedWindowBackgroundTreatment@@@Z @ 0x18000BC5C (-RemoveDependentCachedTreatment@CWindowBackgroundTreatment@@QEAAXPEBVCCachedWindowBackgroundTrea.c)
 *     ??$emplace_back@AEBQEAVCCachedWindowBackgroundTreatment@@@?$vector@PEAVCCachedWindowBackgroundTreatment@@V?$allocator@PEAVCCachedWindowBackgroundTreatment@@@std@@@std@@QEAAXAEBQEAVCCachedWindowBackgroundTreatment@@@Z @ 0x18001B14C (--$emplace_back@AEBQEAVCCachedWindowBackgroundTreatment@@@-$vector@PEAVCCachedWindowBackgroundTr.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVIImageSource@@@Z @ 0x180089E84 (--4-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVIImageSource@@@Z.c)
 *     ??4?$ComPtr@VCWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatment@@@Z @ 0x1800B8D34 (--4-$ComPtr@VCWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatm.c)
 */

__int64 __fastcall CCachedWindowBackgroundTreatment::Update(
        struct CCachedWindowBackgroundTreatment *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        float *a5,
        _OWORD *a6)
{
  float *v6; // rbp
  unsigned int v7; // ebx
  float v12; // xmm0_4
  int v13; // ecx
  unsigned int v14; // eax
  CWindowBackgroundTreatment **v15; // r14
  __int128 v16; // xmm0
  int v17; // ecx
  __int64 v18; // xmm1_8
  _OWORD *v19; // rcx
  struct CCachedWindowBackgroundTreatment *v21; // [rsp+70h] [rbp+18h] BYREF

  v6 = a5;
  v7 = 0;
  if ( !a3 )
    goto LABEL_8;
  v12 = a5[5];
  v13 = (v12 <= a5[4]) + 1;
  if ( a5[2] > *a5 )
    v13 = v12 <= a5[4];
  v14 = v13 + 1;
  if ( a5[3] > a5[1] )
    v14 = v13;
  if ( v14 > 1
    || TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a5) )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x206u);
  }
  else
  {
LABEL_8:
    v15 = (CWindowBackgroundTreatment **)((char *)a1 + 16);
    if ( a2 != *((_QWORD *)a1 + 2) )
    {
      if ( *v15 )
        CWindowBackgroundTreatment::RemoveDependentCachedTreatment(*v15, a1);
      if ( a2 )
      {
        v21 = a1;
        std::vector<CCachedWindowBackgroundTreatment *>::emplace_back<CCachedWindowBackgroundTreatment * const &>(
          a2 + 384,
          &v21);
      }
      Microsoft::WRL::ComPtr<CWindowBackgroundTreatment>::operator=((char *)a1 + 16, a2);
    }
    Microsoft::WRL::ComPtr<IImageSource>::operator=((char *)a1 + 24, a3);
    *((_OWORD *)a1 + 2) = *(_OWORD *)a4;
    *((_OWORD *)a1 + 3) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)a1 + 4) = *(_OWORD *)(a4 + 32);
    v16 = *(_OWORD *)v6;
    *((_OWORD *)a1 + 5) = *(_OWORD *)(a4 + 48);
    v17 = *(_DWORD *)(a4 + 64);
    v18 = *((_QWORD *)v6 + 2);
    *(_OWORD *)((char *)a1 + 100) = v16;
    *((_DWORD *)a1 + 24) = v17;
    v19 = a6;
    *(_QWORD *)((char *)a1 + 116) = v18;
    *((_BYTE *)a1 + 140) = 0;
    *(_OWORD *)((char *)a1 + 124) = *v19;
  }
  return v7;
}
