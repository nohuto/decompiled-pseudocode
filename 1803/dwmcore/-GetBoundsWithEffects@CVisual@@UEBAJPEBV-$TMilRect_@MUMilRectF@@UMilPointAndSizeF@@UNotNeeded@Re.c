/*
 * XREFs of ?GetBoundsWithEffects@CVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180049FD0
 * Callers:
 *     ?GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000A140 (-GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x18004DC40 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 * Callees:
 *     ?HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ @ 0x180009D60 (-HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ.c)
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18000A570 (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18004F714 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180064E8C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009F390 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18018DF28 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 */

__int64 __fastcall CVisual::GetBoundsWithEffects(CVisual *this, _OWORD *a2, _OWORD *a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  bool (__fastcall *v8)(CLayerVisual *); // rax
  bool HasNonDefaultTreeEffectInternal; // al
  unsigned int *i; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64, __int64, __int64); // rax
  char v15; // al
  __int64 (*v16)(void); // rax
  __int64 v17; // rcx
  int Bounds; // eax
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  float v20; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v5 + 4) & 0x8000000) != 0 )
  {
    for ( i = (unsigned int *)(v5 + 12); ; i = (unsigned int *)((char *)i + (v12 & 0xFFFFFF) + 4) )
    {
      v12 = *i;
      if ( (*i & 0x7F000000) == 0x5000000 )
        break;
    }
    v19 = *(_QWORD *)(i + 1);
    v13 = v19;
    v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v19 + 48LL);
    if ( (char *)v14 == (char *)CEffectGroup::IsOfType )
      v15 = CEffectGroup::IsOfType(v19, 55LL);
    else
      v15 = v14(v19, 55LL, v12, 83886080LL);
    if ( v15 )
    {
      Bounds = CFilterEffect::GetBounds(v13, a2, a3);
      v4 = Bounds;
      if ( Bounds < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0x17B2u);
    }
  }
  else
  {
    v8 = *(bool (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 176LL);
    if ( v8 == CLayerVisual::HasNonDefaultTreeEffectInternal )
      HasNonDefaultTreeEffectInternal = CLayerVisual::HasNonDefaultTreeEffectInternal(this);
    else
      HasNonDefaultTreeEffectInternal = v8(this);
    if ( HasNonDefaultTreeEffectInternal )
    {
      if ( !CVisual::GetEffectiveSize(this, (float *)&v19, &v20) && !*((_BYTE *)this + 536) )
        goto LABEL_28;
      v16 = *(__int64 (**)(void))(*(_QWORD *)this + 184LL);
      *((float *)&v19 + 1) = v20;
      v17 = *(_QWORD *)v16();
      if ( v17 )
        v4 = CEffectBrush::GetBounds(v17, a2, (__int64)&v19, a3);
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x17C8u);
      }
      else
      {
LABEL_28:
        if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a3) )
          *a3 = *a2;
      }
    }
  }
  return (unsigned int)v4;
}
