/*
 * XREFs of ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18000FB20
 * Callers:
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x18000D0B0 (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18000D2D0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 * Callees:
 *     ?PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800100C0 (-PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qqqq @ 0x18013BCF4 (Template_qqqq.c)
 */

__int64 __fastcall CD2DLayer::ApplyState(CD2DLayer *this, struct CDrawingContext *a2)
{
  struct ID2D1Geometry *v4; // r9
  const struct ID2DContextOwner *v5; // rdx
  void (__usercall *v6)(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, const struct D2D_RECT_F *@<r8>, struct ID2D1Geometry *@<r9>, struct D2D_MATRIX_3X2_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_LAYER_OPTIONS1, enum D2D1_PRIMITIVE_BLEND); // rax
  CD2DContext *v7; // rcx
  const struct D2D_RECT_F *v8; // r8
  struct D2D_MATRIX_3X2_F *v10; // [rsp+20h] [rbp-38h]
  float v11; // [rsp+28h] [rbp-30h]
  enum D2D1_ANTIALIAS_MODE v12; // [rsp+30h] [rbp-28h]
  enum D2D1_LAYER_OPTIONS1 v13; // [rsp+38h] [rbp-20h]
  enum D2D1_PRIMITIVE_BLEND v14; // [rsp+40h] [rbp-18h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qqqq(
      (_DWORD)this,
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start,
      (int)*((float *)this + 2),
      (int)*((float *)this + 3),
      (int)*((float *)this + 4),
      (int)*((float *)this + 5));
  v4 = (struct ID2D1Geometry *)*((_QWORD *)this + 3);
  v5 = (const struct ID2DContextOwner *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  v14 = *((_DWORD *)this + 18);
  v13 = *((_DWORD *)this + 17);
  v12 = *((_DWORD *)this + 16);
  v11 = *((float *)this + 15);
  v6 = *(void (__usercall **)(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, const struct D2D_RECT_F *@<r8>, struct ID2D1Geometry *@<r9>, struct D2D_MATRIX_3X2_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_LAYER_OPTIONS1, enum D2D1_PRIMITIVE_BLEND))(**((_QWORD **)a2 + 49) + 56LL);
  v10 = (struct D2D_MATRIX_3X2_F *)(((unsigned __int64)this + 32) & -(__int64)(*((_BYTE *)this + 56) != 0));
  v7 = (CD2DContext *)*((_QWORD *)a2 + 49);
  v8 = (const struct D2D_RECT_F *)((char *)this + 8);
  if ( v6 == CD2DContext::PushLayer )
    CD2DContext::PushLayer(v7, v5, v8, v4, v10, v11, v12, v13, v14);
  else
    ((void (__fastcall *)(CD2DContext *, const struct ID2DContextOwner *, const struct D2D_RECT_F *, struct ID2D1Geometry *, struct D2D_MATRIX_3X2_F *, _DWORD, enum D2D1_ANTIALIAS_MODE, enum D2D1_LAYER_OPTIONS1, enum D2D1_PRIMITIVE_BLEND))v6)(
      v7,
      v5,
      v8,
      v4,
      v10,
      LODWORD(v11),
      v12,
      v13,
      v14);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qqqq(
      (int)*((float *)this + 4),
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Stop,
      (int)*((float *)this + 2),
      (int)*((float *)this + 3),
      (int)*((float *)this + 4),
      (int)*((float *)this + 5));
  return 0LL;
}
