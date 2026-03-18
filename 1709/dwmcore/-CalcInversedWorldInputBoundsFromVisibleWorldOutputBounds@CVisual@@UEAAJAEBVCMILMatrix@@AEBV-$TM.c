/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180052720
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180083620 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180050EE8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180050F3C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@3PEAV2@4@Z @ 0x1800824F4 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAAXAEBV-$TMilRect_@MUMi.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180092A80 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        CVisual *this,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        _OWORD *a5,
        _OWORD *a6)
{
  unsigned int v6; // ebp
  struct CEffect *EffectInternal; // rsi
  __int64 (__fastcall *v13)(struct CEffect *, __int64); // rax
  char v14; // al
  __int64 (*v15)(void); // rax
  int v16; // eax
  int v17; // eax
  float v18[4]; // [rsp+40h] [rbp-28h] BYREF
  float v19; // [rsp+70h] [rbp+8h] BYREF
  float v20; // [rsp+74h] [rbp+Ch]

  v6 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x8000000) != 0
    && ((EffectInternal = CVisual::GetEffectInternal(this),
         v13 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL),
         (char *)v13 != (char *)CEffectGroup::IsOfType)
      ? (v14 = v13(EffectInternal, 49LL))
      : (v14 = CEffectGroup::IsOfType(EffectInternal, 49LL)),
        v14) )
  {
    v17 = (*(__int64 (__fastcall **)(struct CEffect *, __int64, _OWORD *, __int64, _OWORD *, _OWORD *))(*(_QWORD *)EffectInternal + 200LL))(
            EffectInternal,
            a2,
            a3,
            a4,
            a5,
            a6);
    v6 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC80u);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 176LL))(this)
         && (CVisual::GetEffectiveSize(this, &v19, v18) || *((_BYTE *)this + 528)) )
  {
    v15 = *(__int64 (**)(void))(*(_QWORD *)this + 184LL);
    v20 = v18[0];
    v16 = v15();
    CTreeEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
      v16,
      (_DWORD)this + 164,
      (unsigned int)&v19,
      a2,
      (__int64)a3,
      a4,
      (__int64)a5,
      (__int64)a6);
  }
  else
  {
    *a5 = *a3;
    *a6 = *a3;
  }
  return v6;
}
