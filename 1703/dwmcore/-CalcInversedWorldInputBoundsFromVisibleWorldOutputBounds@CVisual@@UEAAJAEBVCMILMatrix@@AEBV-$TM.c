/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800878D0
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180013C90 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180012FCC (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x1800136BC (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@3PEAV2@4@Z @ 0x180013C3C (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAAXAEBV-$TMilRect_@MUMi.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180085014 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800931E0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C1AC0 (-IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        CVisual *this,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        _OWORD *a5,
        _OWORD *a6)
{
  __int64 result; // rax
  struct CEffect *EffectInternal; // r14
  __int64 (__fastcall *v12)(struct CEffect *, __int64); // rax
  char v13; // al
  unsigned int v14; // ebx
  char v15; // r14
  __int64 (__fastcall *v16)(CVisual *, __int64); // rax
  char v17; // al
  CVisual *v18; // rcx
  __int64 *TreeEffectInternal; // rax
  float v20[10]; // [rsp+40h] [rbp-28h] BYREF
  float v21; // [rsp+70h] [rbp+8h] BYREF
  float v22; // [rsp+74h] [rbp+Ch]

  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x8000000) != 0
    && ((EffectInternal = CVisual::GetEffectInternal(this),
         v12 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL),
         (char *)v12 != (char *)CEffectGroup::IsOfType)
      ? (v13 = v12(EffectInternal, 8LL))
      : (v13 = CEffectGroup::IsOfType(EffectInternal, 8LL)),
        v13) )
  {
    result = (*(__int64 (__fastcall **)(struct CEffect *, __int64, _OWORD *, __int64, _OWORD *, _OWORD *))(*(_QWORD *)EffectInternal + 168LL))(
               EffectInternal,
               a2,
               a3,
               a4,
               a5,
               a6);
    v14 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0xC47u);
      return v14;
    }
  }
  else
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x10000) != 0 )
    {
      v15 = 0;
      v16 = *(__int64 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL);
      if ( (char *)v16 == (char *)CLayerVisual::IsOfType )
        v17 = CLayerVisual::IsOfType(this, 33LL);
      else
        v17 = v16(this, 33LL);
      if ( v17 )
        v15 = *((_BYTE *)this + 504);
      if ( CVisual::GetEffectiveSize(this, &v21, v20) || v15 )
      {
        v22 = v20[0];
        TreeEffectInternal = (__int64 *)CVisual::GetTreeEffectInternal(v18);
        CTreeEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
          TreeEffectInternal,
          (_OWORD *)this + 10,
          (__int64)&v21,
          a2,
          a3,
          a4,
          a5,
          a6);
      }
      else
      {
        *a5 = *a3;
        *a6 = *a3;
      }
    }
    else
    {
      *a5 = *a3;
      *a6 = *a3;
    }
    return 0LL;
  }
  return result;
}
