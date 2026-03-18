/*
 * XREFs of ?GetBoundsWithEffects@CVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800525C0
 * Callers:
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x18004FDC0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800837C0 (-GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036B0C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180050F3C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x180082934 (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ @ 0x180083430 (-HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180092A80 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180163C20 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 */

__int64 __fastcall CVisual::GetBoundsWithEffects(CLayerVisual *this, _OWORD *a2, float *a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  bool (__fastcall *v8)(CLayerVisual *__hidden); // rax
  bool HasNonDefaultTreeEffectInternal; // al
  __int64 i; // rcx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64, __int64); // rax
  char v14; // al
  __int64 (*v15)(void); // rax
  __int64 v16; // rcx
  int Bounds; // eax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  float v19; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)this + 26);
  if ( (*(_DWORD *)(v5 + 4) & 0x8000000) != 0 )
  {
    for ( i = v5 + 12; (*(_DWORD *)i & 0x7F000000) != 0x5000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v18 = *(_QWORD *)(i + 4);
    v12 = v18;
    v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v18 + 48LL);
    if ( (char *)v13 == (char *)CEffectGroup::IsOfType )
      v14 = CEffectGroup::IsOfType(v18, 49LL);
    else
      v14 = v13(v18, 49LL, 83886080LL);
    if ( v14 )
    {
      Bounds = CFilterEffect::GetBounds(v12, a2, a3);
      v4 = Bounds;
      if ( Bounds < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0x15C5u);
    }
  }
  else
  {
    v8 = *(bool (__fastcall **)(CLayerVisual *__hidden))(*(_QWORD *)this + 176LL);
    if ( v8 == CLayerVisual::HasNonDefaultTreeEffectInternal )
      HasNonDefaultTreeEffectInternal = CLayerVisual::HasNonDefaultTreeEffectInternal(this);
    else
      HasNonDefaultTreeEffectInternal = v8(this);
    if ( HasNonDefaultTreeEffectInternal )
    {
      if ( !CVisual::GetEffectiveSize(this, (float *)&v18, &v19) && !*((_BYTE *)this + 528) )
        goto LABEL_28;
      v15 = *(__int64 (**)(void))(*(_QWORD *)this + 184LL);
      *((float *)&v18 + 1) = v19;
      v16 = *(_QWORD *)v15();
      if ( v16 )
        v4 = CEffectBrush::GetBounds(v16, a2, &v18, a3);
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x15DBu);
      }
      else
      {
LABEL_28:
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a3) )
          *(_OWORD *)a3 = *a2;
      }
    }
  }
  return (unsigned int)v4;
}
