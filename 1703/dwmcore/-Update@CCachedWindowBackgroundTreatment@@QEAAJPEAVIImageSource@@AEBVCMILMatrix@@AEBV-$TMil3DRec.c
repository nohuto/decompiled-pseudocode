/*
 * XREFs of ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801787B0
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18014C8F8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B4250 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ??4?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVIImageSource@@@Z @ 0x1800C1CD0 (--4-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVIImageSource@@@Z.c)
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180178754 (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@.c)
 */

__int64 __fastcall CCachedWindowBackgroundTreatment::Update(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5)
{
  unsigned int v5; // ebx
  __int64 v8; // r9
  float *v10; // rcx
  __int128 v11; // xmm0

  v5 = 0;
  v8 = a2;
  if ( a2
    && (TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)a4)
     || TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(v10)) )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x10Bu);
  }
  else
  {
    Microsoft::WRL::ComPtr<IImageSource>::operator=((__int64 *)(a1 + 16), v8);
    *(_OWORD *)(a1 + 24) = *(_OWORD *)a3;
    *(_OWORD *)(a1 + 40) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(a1 + 56) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(a1 + 72) = *(_OWORD *)(a3 + 48);
    *(_DWORD *)(a1 + 88) = *(_DWORD *)(a3 + 64);
    *(_OWORD *)(a1 + 92) = *(_OWORD *)a4;
    v11 = *a5;
    *(_QWORD *)(a1 + 108) = *(_QWORD *)(a4 + 16);
    *(_OWORD *)(a1 + 116) = v11;
  }
  return v5;
}
