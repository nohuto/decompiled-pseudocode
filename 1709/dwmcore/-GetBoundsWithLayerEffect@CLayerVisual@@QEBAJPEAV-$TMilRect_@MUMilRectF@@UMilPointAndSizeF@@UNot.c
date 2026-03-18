/*
 * XREFs of ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800834F8
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180083620 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016FDDC (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036B0C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180050F3C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x1800825D0 (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithLayerEffect(CVisual *a1, float *a2)
{
  _OWORD *v2; // r14
  signed int v5; // ebx
  _BYTE *v6; // rcx
  __int64 (__fastcall *v7)(CVisual *); // rax
  __int64 v8; // rdi
  signed int SourceInputBounds; // eax
  __int128 v11; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+40h] [rbp-10h]
  int v13; // [rsp+44h] [rbp-Ch]
  unsigned int v14; // [rsp+48h] [rbp-8h]
  float v15; // [rsp+70h] [rbp+20h] BYREF
  float v16; // [rsp+74h] [rbp+24h]
  float v17; // [rsp+78h] [rbp+28h] BYREF

  v2 = (_OWORD *)((char *)a1 + 164);
  v5 = 0;
  *(_OWORD *)a2 = *(_OWORD *)((char *)a1 + 164);
  if ( (CVisual::GetEffectiveSize(a1, &v15, &v17) || v6[528])
    && (*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v6 + 176LL))(v6) )
  {
    v7 = *(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)a1 + 184LL);
    v16 = v17;
    v8 = *(_QWORD *)v7(a1);
    if ( v8 )
    {
      *(_OWORD *)a2 = *v2;
      if ( *(_QWORD *)(v8 + 104) )
      {
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v11 = 0LL;
        SourceInputBounds = CEffectBrush::GetSourceInputBounds(v8, v2, (__int64)&v15, (__int64)&v11);
        v5 = SourceInputBounds;
        if ( SourceInputBounds < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, SourceInputBounds, 0x230u);
        else
          v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, float *))(**(_QWORD **)(v8 + 104) + 88LL))(
                 *(_QWORD *)(v8 + 104),
                 v11,
                 v14,
                 a2);
        DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v11);
      }
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x118u);
    }
    else if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a2) )
    {
      *(_OWORD *)a2 = *v2;
    }
  }
  return (unsigned int)v5;
}
