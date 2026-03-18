/*
 * XREFs of ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x180003030
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180008624 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ??4?$ComPtr@VCCachedWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCachedWindowBackgroundTreatment@@@Z @ 0x180003138 (--4-$ComPtr@VCCachedWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCachedWindowBack.c)
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18000673C (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@.c)
 *     ??0CCachedWindowBackgroundTreatment@@AEAA@PEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180006994 (--0CCachedWindowBackgroundTreatment@@AEAA@PEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBV.c)
 *     ??$emplace_back@AEBQEAVCCachedWindowBackgroundTreatment@@@?$vector@PEAVCCachedWindowBackgroundTreatment@@V?$allocator@PEAVCCachedWindowBackgroundTreatment@@@std@@@std@@QEAAXAEBQEAVCCachedWindowBackgroundTreatment@@@Z @ 0x18001B14C (--$emplace_back@AEBQEAVCCachedWindowBackgroundTreatment@@@-$vector@PEAVCCachedWindowBackgroundTr.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCachedWindowBackgroundTreatment::Create(
        __int64 a1,
        __int64 a2,
        int a3,
        float *a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned int v6; // edi
  int v9; // ebp
  float v11; // xmm0_4
  int v12; // ecx
  unsigned int v13; // eax
  LPVOID v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-28h]
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v20 = 0LL;
  v9 = a2;
  if ( a2 )
  {
    v11 = a4[5];
    v12 = (v11 <= a4[4]) + 1;
    if ( a4[2] > *a4 )
      v12 = v11 <= a4[4];
    v13 = v12 + 1;
    if ( a4[3] > a4[1] )
      v13 = v12;
    if ( v13 > 1
      || (unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a4) )
    {
      v18 = -2147024809;
      v19 = 489;
LABEL_18:
      v6 = v18;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, v19);
      return v6;
    }
  }
  v14 = HeapAlloc(WPF::g_processHeap, 0, 0x90uLL);
  if ( v14 )
    v15 = CCachedWindowBackgroundTreatment::CCachedWindowBackgroundTreatment((_DWORD)v14, a1, v9, a3, (__int64)a4, a5);
  else
    v15 = 0LL;
  Microsoft::WRL::ComPtr<CCachedWindowBackgroundTreatment>::operator=(&v20, v15);
  v16 = v20;
  if ( !v20 )
  {
    v18 = -2147024882;
    v19 = 493;
    goto LABEL_18;
  }
  if ( a1 )
    std::vector<CCachedWindowBackgroundTreatment *>::emplace_back<CCachedWindowBackgroundTreatment * const &>(
      a1 + 384,
      &v20);
  *a6 = v16;
  return v6;
}
