/*
 * XREFs of ?GetBoundsWithEffects@CVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180086400
 * Callers:
 *     ?GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180014040 (-GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 * Callees:
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800034B0 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x180010AC0 (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180012FCC (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x1800136BC (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FFCC (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800931E0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C1AC0 (-IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetBoundsWithEffects(CVisual *this, __int128 *a2, __int128 *a3)
{
  __int64 v3; // r9
  unsigned int Bounds; // ebx
  int v8; // eax
  __int64 result; // rax
  int v10; // ecx
  int *v11; // r9
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  char v14; // al
  char v15; // r14
  __int64 (__fastcall *v16)(CVisual *, __int64); // rax
  char v17; // al
  CVisual *v18; // rcx
  __int64 v19; // rcx
  bool v20; // zf
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF
  float v22; // [rsp+68h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 26);
  Bounds = 0;
  v8 = *(_DWORD *)(v3 + 4);
  if ( (v8 & 0x8000000) != 0 )
  {
    v10 = *(_DWORD *)(v3 + 12);
    v11 = (int *)(v3 + 12);
    if ( (v10 & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v11 = (int *)((char *)v11 + (v10 & 0xFFFFFF) + 4);
        v10 = *v11;
      }
      while ( (*v11 & 0x7F000000) != 0x5000000 );
    }
    v21 = *(_QWORD *)(v11 + 1);
    v12 = v21;
    v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 48LL);
    if ( v13 == CEffectGroup::IsOfType )
      v14 = CEffectGroup::IsOfType(v21, 8LL);
    else
      v14 = v13(v21, 8LL);
    if ( !v14 )
      return Bounds;
    result = CFilterEffect::GetBounds(v12, a2, (__int64)a3);
    Bounds = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x1528u);
      return Bounds;
    }
  }
  else
  {
    if ( (v8 & 0x10000) == 0 )
      return Bounds;
    v15 = 0;
    v16 = *(__int64 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL);
    if ( (char *)v16 == (char *)CLayerVisual::IsOfType )
      v17 = CLayerVisual::IsOfType(this, 33LL);
    else
      v17 = v16(this, 33LL);
    if ( v17 )
      v15 = *((_BYTE *)this + 504);
    if ( !CVisual::GetEffectiveSize(this, (float *)&v21, &v22) && !v15 )
      goto LABEL_20;
    *((float *)&v21 + 1) = v22;
    v19 = *(_QWORD *)CVisual::GetTreeEffectInternal(v18);
    if ( v19 )
      Bounds = CEffectBrush::GetBounds(v19, a2, (__int64)&v21, a3);
    if ( (Bounds & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x153Eu);
      return Bounds;
    }
    else
    {
LABEL_20:
      v20 = !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)a3);
      result = Bounds;
      if ( !v20 )
        *a3 = *a2;
    }
  }
  return result;
}
