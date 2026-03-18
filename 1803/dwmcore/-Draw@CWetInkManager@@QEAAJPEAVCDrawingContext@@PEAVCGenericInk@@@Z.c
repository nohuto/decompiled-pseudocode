/*
 * XREFs of ?Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z @ 0x180171320
 * Callers:
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018F090 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18006BB20 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?InflateRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAUMilPointAndSizeL@@@Z @ 0x1800C314C (-InflateRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x18015FFB0 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x180162198 (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x180171614 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V?$com_ptr_t@UIDCompositionDirectInkWetStrokePartner@@Uerr_returncode_policy@wil@@@wil@@_NPEA_N@Z @ 0x18017165C (-TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V-$com_ptr_t@UI.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x18018F3FC (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStroke.c)
 */

__int64 __fastcall CWetInkManager::Draw(CWetInkManager *this, struct ID2DContext **a2, struct CGenericInk *a3)
{
  int DirectInkWetStroke; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  struct IDCompositionDirectInkWetStrokePartner *v7; // rbx
  char v8; // di
  int v9; // esi
  __int64 v10; // r8
  float v11; // xmm4_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  int v15; // eax
  bool v17; // [rsp+30h] [rbp-79h] BYREF
  char v18; // [rsp+31h] [rbp-78h]
  CDrawingContext *v19; // [rsp+38h] [rbp-71h]
  int v20; // [rsp+40h] [rbp-69h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v21; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v22[64]; // [rsp+50h] [rbp-59h] BYREF
  int v23; // [rsp+90h] [rbp-19h]
  struct IDCompositionDirectInkWetStrokePartner *v24; // [rsp+A0h] [rbp-9h] BYREF
  float v25; // [rsp+A8h] [rbp-1h]
  float v26; // [rsp+ACh] [rbp+3h]
  __int128 v27; // [rsp+B0h] [rbp+7h] BYREF
  __int128 v28; // [rsp+C0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v21 = 0LL;
  v19 = (CDrawingContext *)a2;
  DirectInkWetStroke = CGenericInk::GetDirectInkWetStroke(a3, a2[48], &v21);
  v5 = DirectInkWetStroke;
  if ( DirectInkWetStroke < 0 )
  {
    v6 = 63LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
      (const char *)(unsigned int)DirectInkWetStroke);
    goto LABEL_42;
  }
  v7 = v21;
  v8 = 0;
  v17 = 0;
  v18 = 0;
  if ( CCommonRegistryData::m_fGammaBlendPencil )
  {
    DirectInkWetStroke = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, int *))(*(_QWORD *)v21 + 64LL))(
                           v21,
                           &v20);
    v5 = DirectInkWetStroke;
    if ( DirectInkWetStroke < 0 )
    {
      v6 = 73LL;
      goto LABEL_33;
    }
    v8 = v20
      && CDrawingContext::IsHDRTarget(v19)
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v19 + 110) - 1.0)) & _xmm) < 0.0000011920929;
  }
  v24 = v7;
  if ( v7 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v7 + 8LL))(v7);
  v9 = CWetInkManager::TryDrawWetAsSuperWet(this, v8, &v17);
  if ( v8 )
  {
    v28 = 0uLL;
    DirectInkWetStroke = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, __int128 *))(*(_QWORD *)v7 + 32LL))(
                           v7,
                           &v28);
    v5 = DirectInkWetStroke;
    if ( DirectInkWetStroke < 0 )
    {
      v6 = 86LL;
      goto LABEL_33;
    }
    v23 = 0;
    v27 = v28;
    CMatrixStack::Top((CDrawingContext *)((char *)v19 + 480), (struct CMILMatrix *)v22);
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v22, (__int64)&v27, (float *)&v24);
    CScopedClipStack::GetTopGpuClipInScope((__int64 *)v19 + 126, 1, (__int64)&v27);
    v11 = *(float *)&v24;
    if ( *(float *)&v27 > *(float *)&v24 )
    {
      LODWORD(v24) = v27;
      v11 = *(float *)&v27;
    }
    v12 = *((float *)&v24 + 1);
    if ( *((float *)&v27 + 1) > *((float *)&v24 + 1) )
    {
      HIDWORD(v24) = DWORD1(v27);
      v12 = *((float *)&v27 + 1);
    }
    v13 = v25;
    if ( v25 > *((float *)&v27 + 2) )
    {
      v25 = *((float *)&v27 + 2);
      v13 = *((float *)&v27 + 2);
    }
    v14 = v26;
    if ( v26 > *((float *)&v27 + 3) )
    {
      v26 = *((float *)&v27 + 3);
      v14 = *((float *)&v27 + 3);
    }
    if ( v13 <= v11 || v14 <= v12 )
    {
      v26 = 0.0;
      v25 = 0.0;
      v24 = 0LL;
    }
    DirectInkWetStroke = InflateRectFToPointAndSizeL(
                           (float *)&v24,
                           (__int64)&v27,
                           v10,
                           COERCE_DOUBLE((unsigned __int64)HIDWORD(v27)));
    v5 = DirectInkWetStroke;
    if ( DirectInkWetStroke < 0 )
    {
      v6 = 105LL;
      goto LABEL_33;
    }
    if ( SDWORD2(v27) > 0 && SHIDWORD(v27) > 0 )
    {
      DirectInkWetStroke = CDrawingContext::PushGammaBlendLayer(
                             (struct IRenderTarget **)v19,
                             (const struct MilPointAndSizeL *)&v27);
      v5 = DirectInkWetStroke;
      if ( DirectInkWetStroke < 0 )
      {
        v6 = 109LL;
        goto LABEL_33;
      }
      v18 = 1;
    }
  }
  dword_1802D6244 |= 1u;
  v15 = CDrawingContext::DrawGenericInk(v19, v7, !v17);
  v5 = v15;
  if ( v15 >= 0 )
  {
    if ( v9 >= 0 )
    {
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
        (const char *)(unsigned int)v9);
      v5 = v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
      (const char *)(unsigned int)v15);
  }
  if ( v18 )
    CDrawingContext::PopLayerInternal((__int64)v19);
LABEL_42:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v21);
  return v5;
}
