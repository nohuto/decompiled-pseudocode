/*
 * XREFs of ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180009E58
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180009F90 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180198470 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 * Callees:
 *     ?HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ @ 0x180009D60 (-HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ.c)
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x18000A32C (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18004F714 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180064E8C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithLayerEffect(CLayerVisual *this, _OWORD *a2)
{
  _OWORD *v2; // r14
  int v5; // ebx
  _BYTE *v6; // rcx
  bool (__fastcall *v7)(CLayerVisual *); // rax
  __int64 (__fastcall *v9)(CLayerVisual *); // rax
  __int64 v10; // rdi
  int SourceInputBounds; // eax
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF
  int v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+44h] [rbp-Ch]
  unsigned int v16; // [rsp+48h] [rbp-8h]
  float v17; // [rsp+70h] [rbp+20h] BYREF
  float v18; // [rsp+74h] [rbp+24h]
  float v19; // [rsp+78h] [rbp+28h] BYREF

  v2 = (_OWORD *)((char *)this + 164);
  v5 = 0;
  *a2 = *(_OWORD *)((char *)this + 164);
  if ( CVisual::GetEffectiveSize(this, &v17, &v19) || v6[536] )
  {
    v7 = *(bool (__fastcall **)(CLayerVisual *))(*(_QWORD *)v6 + 176LL);
    if ( v7 == CLayerVisual::HasNonDefaultTreeEffectInternal
       ? CLayerVisual::HasNonDefaultTreeEffectInternal(this)
       : v7(this) )
    {
      v9 = *(__int64 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 184LL);
      v18 = v19;
      v10 = *(_QWORD *)v9(this);
      if ( v10 )
      {
        *a2 = *v2;
        if ( *(_QWORD *)(v10 + 96) )
        {
          v14 = 0;
          v15 = 0;
          v16 = 0;
          v13 = 0LL;
          SourceInputBounds = CEffectBrush::GetSourceInputBounds(v10, v2, &v17, &v13);
          v5 = SourceInputBounds;
          if ( SourceInputBounds < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SourceInputBounds, 0x271u);
          else
            v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _OWORD *))(**(_QWORD **)(v10 + 96) + 88LL))(
                   *(_QWORD *)(v10 + 96),
                   v13,
                   v16,
                   a2);
          DynArrayImpl<0>::~DynArrayImpl<0>(&v13);
        }
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x13Au);
      }
      else if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a2) )
      {
        *a2 = *v2;
      }
    }
  }
  return (unsigned int)v5;
}
