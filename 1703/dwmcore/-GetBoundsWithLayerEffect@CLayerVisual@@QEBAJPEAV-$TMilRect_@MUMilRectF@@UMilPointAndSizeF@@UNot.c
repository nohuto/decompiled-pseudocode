/*
 * XREFs of ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180013F24
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180013C90 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180161930 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 * Callees:
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x18001071C (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180012FCC (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x1800136BC (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FFCC (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithLayerEffect(_OWORD *a1, _OWORD *a2)
{
  _OWORD *v2; // rsi
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // r14
  int SourceInputBounds; // eax
  __int128 v9; // [rsp+30h] [rbp-20h] BYREF
  int v10; // [rsp+40h] [rbp-10h]
  int v11; // [rsp+44h] [rbp-Ch]
  unsigned int v12; // [rsp+48h] [rbp-8h]
  float v13; // [rsp+70h] [rbp+20h] BYREF
  float v14; // [rsp+74h] [rbp+24h]
  float v15; // [rsp+78h] [rbp+28h] BYREF

  v2 = a1 + 10;
  v4 = 0;
  *a2 = a1[10];
  if ( (CVisual::GetEffectiveSize((CVisual *)a1, &v13, &v15) || *(_BYTE *)(v5 + 504))
    && (*(_DWORD *)(*(_QWORD *)(v5 + 208) + 4LL) & 0x10000) != 0 )
  {
    v14 = v15;
    v6 = *(_QWORD *)CVisual::GetTreeEffectInternal((CVisual *)v5);
    if ( v6 )
    {
      *a2 = *v2;
      if ( *(_QWORD *)(v6 + 104) )
      {
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v9 = 0LL;
        SourceInputBounds = CEffectBrush::GetSourceInputBounds(v6, v2, (__int64)&v13, (__int64)&v9);
        v4 = SourceInputBounds;
        if ( SourceInputBounds < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, SourceInputBounds, 0x22Du);
        else
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _OWORD *))(**(_QWORD **)(v6 + 104) + 88LL))(
                 *(_QWORD *)(v6 + 104),
                 v9,
                 v12,
                 a2);
        DynArrayImpl<1>::~DynArrayImpl<1>(&v9);
      }
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x118u);
    }
    else if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a2) )
    {
      *a2 = *v2;
    }
  }
  return (unsigned int)v4;
}
