/*
 * XREFs of ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800847E0
 * Callers:
 *     ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180087A80 (-GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z @ 0x18001E284 (--$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800846C0 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B4E20 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B4EA8 (-Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800CA50C (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::GetBounds(CRenderData *this, struct CComposition **a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  struct CComposition **v6; // r13
  int v8; // edi
  _BOOL8 (__fastcall *v9)(__int64, int); // rax
  bool v10; // al
  struct CDrawingContext **v11; // r14
  CMILCOMBase **v12; // r12
  int v13; // eax
  int v14; // eax
  struct CComposition *v15; // rax
  struct CComposition *v17; // r13
  int v18; // eax
  int v19; // eax

  v4 = 0;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)a4 = 0LL;
  v6 = a2;
  v8 = 0;
  if ( !this )
    goto LABEL_13;
  v9 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)this + 48LL);
  if ( v9 == CRenderData::IsOfType )
    v10 = CRenderData::IsOfType((__int64)this, 35);
  else
    v10 = v9((__int64)this, 35);
  if ( !v10 )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD1u);
    goto LABEL_13;
  }
  v11 = v6 + 1;
  if ( v6[1] )
    goto LABEL_6;
  v17 = *v6;
  v12 = a2 + 2;
  v18 = CSwRenderTargetGetBounds::Create(v17, a2 + 2);
  v8 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x71u);
  }
  else
  {
    v19 = CDrawingContext::Create(v17, v11);
    v8 = v19;
    if ( v19 >= 0 )
      goto LABEL_22;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x72u);
  }
  ReleaseInterface<CDrawingContext>(v11);
  ReleaseInterface<CSwRenderTargetGetBounds>(v12);
LABEL_22:
  if ( v8 >= 0 )
  {
    v6 = a2;
LABEL_6:
    v12 = v6 + 2;
    v13 = CDrawingContext::BeginFrame(
            *v11,
            (CSwRenderTargetGetBounds *)(((unsigned __int64)v6[2] + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v6[2] >> 64)),
            0LL,
            0LL,
            0,
            0LL);
    v8 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xA0u);
    goto LABEL_8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x94u);
  v6 = a2;
LABEL_8:
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC6u);
  }
  else
  {
    v14 = CRenderData::Draw(this, *v11);
    v8 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC9u);
    }
    else
    {
      v8 = 0;
      *(_OWORD *)a4 = *(_OWORD *)((char *)*v12 + 52);
      if ( *(float *)(a4 + 8) < *(float *)a4 || *(float *)(a4 + 12) < *(float *)(a4 + 4) )
        *(_OWORD *)a4 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    CDrawingContext::EndFrame(*v11);
  }
LABEL_13:
  v15 = v6[2];
  if ( v15 )
    *(_OWORD *)((char *)v15 + 52) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( *(float *)(a4 + 8) <= *(float *)a4 || *(float *)(a4 + 12) <= *(float *)(a4 + 4) )
    v4 = 1;
  *((_BYTE *)this + 138) = v4;
  return (unsigned int)v8;
}
