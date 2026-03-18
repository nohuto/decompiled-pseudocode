/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18004BD70
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180009F90 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ @ 0x180009D60 (-HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3@Z @ 0x18000A3DC (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV-$TMil3DRect@M.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18004F714 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004FC80 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009F390 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A46B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18018B350 (-GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 */

__int64 __fastcall CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        CVisual *this,
        CMILMatrix *a2,
        __int128 *a3,
        __int64 a4,
        __int128 *a5,
        __int128 *a6)
{
  __int64 v6; // rax
  unsigned int v7; // r12d
  bool v11; // zf
  bool (__fastcall *v12)(CLayerVisual *); // rax
  bool HasNonDefaultTreeEffectInternal; // al
  __int128 v14; // xmm1
  __int64 (*v16)(void); // rax
  __int64 *v17; // r13
  CMILMatrix *v18; // rsi
  bool v19; // al
  struct CEffect *EffectInternal; // rdi
  __int64 (__fastcall *v21)(struct CEffect *, __int64); // rax
  char v22; // al
  int v23; // eax
  void (__fastcall *v24)(CVisual *, CMILMatrix **, CMILMatrix **); // rax
  int v25; // xmm3_4
  int v26; // xmm2_4
  __int64 v27; // [rsp+20h] [rbp-89h]
  float v28[2]; // [rsp+40h] [rbp-69h] BYREF
  CMILMatrix *v29[2]; // [rsp+48h] [rbp-61h] BYREF
  __int128 v30; // [rsp+58h] [rbp-51h] BYREF
  int v31; // [rsp+68h] [rbp-41h]
  int v32; // [rsp+6Ch] [rbp-3Dh]
  __int128 v33; // [rsp+70h] [rbp-39h]
  int v34; // [rsp+80h] [rbp-29h]
  int v35; // [rsp+84h] [rbp-25h]
  __int128 v36; // [rsp+88h] [rbp-21h]

  v6 = *((_QWORD *)this + 27);
  v7 = 0;
  *(_QWORD *)&v30 = a4;
  v11 = (*(_DWORD *)(v6 + 4) & 0x8000000) == 0;
  v29[0] = a2;
  if ( v11
    || ((EffectInternal = CVisual::GetEffectInternal(this),
         v21 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL),
         (char *)v21 != (char *)CEffectGroup::IsOfType)
      ? (v22 = v21(EffectInternal, 55LL))
      : (v22 = CEffectGroup::IsOfType(EffectInternal, 55LL)),
        !v22) )
  {
    v12 = *(bool (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 176LL);
    if ( v12 == CLayerVisual::HasNonDefaultTreeEffectInternal )
      HasNonDefaultTreeEffectInternal = CLayerVisual::HasNonDefaultTreeEffectInternal(this);
    else
      HasNonDefaultTreeEffectInternal = v12(this);
    if ( HasNonDefaultTreeEffectInternal )
    {
      if ( CVisual::GetEffectiveSize(this, v28, (float *)&v30) || *((_BYTE *)this + 536) )
      {
        v16 = *(__int64 (**)(void))(*(_QWORD *)this + 184LL);
        LODWORD(v28[1]) = v30;
        v17 = (__int64 *)v16();
        if ( *v17 )
        {
          v27 = (__int64)a3;
          v18 = v29[0];
          v19 = CEffectBrush::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
                  *v17,
                  (__int64)this + 164,
                  (__int64)v28,
                  v29[0],
                  v27,
                  (__int64)a5,
                  (__int64)a6);
        }
        else
        {
          v18 = v29[0];
          v19 = 0;
        }
        if ( v19 )
          return v7;
        if ( *v17 )
          CEffectBrush::GetSourceInputBoundsUnion(*v17, (char *)this + 164, v28, &v30);
        v24 = *(void (__fastcall **)(CVisual *, CMILMatrix **, CMILMatrix **))(*(_QWORD *)this + 288LL);
        *(_OWORD *)v29 = *(_OWORD *)((char *)this + 164);
        v24(this, v29, v29);
        v25 = *((_DWORD *)this + 46);
        v26 = *((_DWORD *)this + 45);
        v33 = v30;
        v35 = v25;
        v30 = *(_OWORD *)v29;
        v34 = v26;
        v32 = v25;
        v31 = v26;
        CMILMatrix::Transform3DBoundsHelper<1>(v18);
        CMILMatrix::Transform3DBoundsHelper<1>(v18);
        v14 = v33;
        *a5 = v36;
      }
      else
      {
        *a5 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v14 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *(_OWORD *)v29 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      }
    }
    else
    {
      *a5 = *a3;
      v14 = *a3;
    }
    *a6 = v14;
    return v7;
  }
  v23 = (*(__int64 (__fastcall **)(struct CEffect *, CMILMatrix *, __int128 *, _QWORD, __int128 *, __int128 *))(*(_QWORD *)EffectInternal + 200LL))(
          EffectInternal,
          a2,
          a3,
          v30,
          a5,
          a6);
  v7 = v23;
  if ( v23 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xD7Du);
  return v7;
}
