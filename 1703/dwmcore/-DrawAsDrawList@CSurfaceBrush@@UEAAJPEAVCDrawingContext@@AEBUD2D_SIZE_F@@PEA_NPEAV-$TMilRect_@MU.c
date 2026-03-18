/*
 * XREFs of ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180038C00
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18000CD80 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x18000CE14 (-IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x180038180 (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008CCE0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800A9920 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x18014BA88 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 */

__int64 __fastcall CSurfaceBrush::DrawAsDrawList(
        CSurfaceBrush *this,
        COverlayContext **a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char v9; // si
  int v10; // eax
  int v11; // ebx
  struct ISwapChainContent *v12; // rcx
  const struct CVisual *CurrentVisual; // rax
  char IsOverlayAssigned; // al
  __int64 v16; // rcx
  bool v17; // r15
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // r9
  CRectanglesShape **v22; // rdi
  struct CShape *v23; // rsi
  CRectanglesShape *v24; // rcx
  void *(__fastcall *v25)(CRectanglesShape *__hidden, unsigned int); // rax
  int v26; // eax
  void *(__fastcall *v27)(CRectanglesShape *__hidden, unsigned int); // rax
  struct ISwapChainContent *v28; // [rsp+30h] [rbp-50h] BYREF
  CRectanglesShape *v29; // [rsp+38h] [rbp-48h] BYREF
  CRectanglesShape **v30; // [rsp+40h] [rbp-40h]
  struct CShape *v31; // [rsp+48h] [rbp-38h] BYREF
  char v32; // [rsp+50h] [rbp-30h]
  _BYTE v33[40]; // [rsp+58h] [rbp-28h] BYREF
  bool v34; // [rsp+B0h] [rbp+30h] BYREF

  v9 = 0;
  v34 = 0;
  v28 = 0LL;
  if ( !*((_QWORD *)this + 13)
    || (***((int (__fastcall ****)(_QWORD, GUID *, struct ISwapChainContent **))this + 13))(
         *((_QWORD *)this + 13),
         &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
         &v28) < 0 )
  {
    goto LABEL_3;
  }
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(a2 + 1));
  IsOverlayAssigned = CDrawingContext::IsOverlayAssigned(a2, CurrentVisual, v28, &v34);
  v16 = *((_QWORD *)this + 13);
  v17 = IsOverlayAssigned;
  v29 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64, CRectanglesShape **))(*(_QWORD *)v16 + 72LL))(v16, &v29);
  v11 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x17Bu);
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v29);
    goto LABEL_5;
  }
  if ( !v17 && !(*(unsigned __int8 (__fastcall **)(CRectanglesShape *))(*(_QWORD *)v29 + 80LL))(v29) || (v9 = 1, !v17) )
  {
    LOBYTE(v19) = CDrawingContext::IsNormalDesktopRender((CDrawingContext *)a2);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(v20 + 160))(v21, 0LL, v19);
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v29);
  if ( v9 )
  {
    v29 = 0LL;
    v31 = 0LL;
    v30 = &v29;
    v32 = 1;
    v11 = CSurfaceBrush::ComputeLayout(this, a3, 0LL, (struct CSurfaceBrush::LayoutData *)v33, &v31);
    if ( v32 )
    {
      v22 = v30;
      v23 = v31;
      v24 = *v30;
      if ( v31 != *v30 )
      {
        if ( v24 )
        {
          v25 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v24;
          if ( v25 == CRectanglesShape::`scalar deleting destructor' )
            CRectanglesShape::`scalar deleting destructor'(v24, 1u);
          else
            v25(v24, 1u);
        }
        *v22 = v23;
      }
    }
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x196u);
    }
    else
    {
      v26 = CDrawingContext::DrawOverlayArea((CDrawingContext *)a2, v28, v29, v17, v34);
      v11 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x19Cu);
    }
    if ( v29 )
    {
      v27 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v29;
      if ( v27 == CRectanglesShape::`scalar deleting destructor' )
        CRectanglesShape::`scalar deleting destructor'(v29, 1u);
      else
        v27(v29, 1u);
    }
  }
  else
  {
LABEL_3:
    v10 = CSpriteVisualContent::DrawAsDrawList(this, (struct CDrawingContext *)a2, a5, a6);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1A0u);
  }
LABEL_5:
  v12 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v11;
}
