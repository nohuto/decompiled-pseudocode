/*
 * XREFs of ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18017837C
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18014C8F8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B4250 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CCachedWindowBackgroundTreatment@@AEAA@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180178204 (--0CCachedWindowBackgroundTreatment@@AEAA@PEAVIImageSource@@AEBVCMILMatrix@@AEBV-$TMil3DRect@MV-.c)
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180178754 (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@.c)
 */

__int64 __fastcall CCachedWindowBackgroundTreatment::Create(__int64 a1, __int64 a2, float *a3, _OWORD *a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  int v10; // r9d
  LPVOID v11; // rax
  void (__fastcall ***v12)(_QWORD); // rdi
  unsigned int v14; // [rsp+20h] [rbp-18h]

  v5 = 0;
  if ( a1
    && (TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a3)
     || (unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite()) )
  {
    v10 = -2147024809;
    v14 = 245;
LABEL_11:
    v5 = v10;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v14);
    return v5;
  }
  v11 = HeapAlloc(WPF::g_processHeap, 0, 0x88uLL);
  if ( v11 )
    v12 = (void (__fastcall ***)(_QWORD))CCachedWindowBackgroundTreatment::CCachedWindowBackgroundTreatment(
                                           (__int64)v11,
                                           a1,
                                           a2,
                                           (__int128 *)a3,
                                           a4);
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v10 = -2147024882;
    v14 = 249;
    goto LABEL_11;
  }
  (**v12)(v12);
  *a5 = v12;
  return v5;
}
