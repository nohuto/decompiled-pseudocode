/*
 * XREFs of ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x1800B1894
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18003DDEC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800879C4 (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180087AC0 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ??0CCachedWindowBackgroundTreatment@@AEAA@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800B19A0 (--0CCachedWindowBackgroundTreatment@@AEAA@PEAVIImageSource@@AEBVCMILMatrix@@AEBV-$TMil3DRect@MV-.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedWindowBackgroundTreatment::Create(__int64 a1, int a2, float *a3, __int64 a4, _QWORD *a5)
{
  DWORD v5; // ebx
  int v7; // edi
  int v9; // esi
  float *v10; // rcx
  LPVOID v11; // rax
  void (__fastcall ***v12)(_QWORD); // rdi
  DWORD v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v7 = (int)a3;
  v9 = a1;
  if ( a1
    && (TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a3)
     || TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(v10)) )
  {
    v14 = -2147024809;
    v15 = 267;
LABEL_12:
    v5 = v14;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, v15);
    return v5;
  }
  v11 = HeapAlloc(WPF::g_processHeap, 0, 0x88uLL);
  if ( v11 )
    v12 = (void (__fastcall ***)(_QWORD))CCachedWindowBackgroundTreatment::CCachedWindowBackgroundTreatment(
                                           (_DWORD)v11,
                                           v9,
                                           a2,
                                           v7,
                                           a4);
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v14 = -2147024882;
    v15 = 271;
    goto LABEL_12;
  }
  (**v12)(v12);
  *a5 = v12;
  return v5;
}
