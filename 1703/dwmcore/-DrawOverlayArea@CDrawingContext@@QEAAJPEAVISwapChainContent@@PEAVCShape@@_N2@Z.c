/*
 * XREFs of ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x18014BA88
 * Callers:
 *     ?DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000AE6C (-DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180038C00 (-DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18000CC78 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x1800112AC (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x18001217C (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180072544 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800A0FE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x1800A90E4 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x18014B124 (-CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18014B514 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawOverlayArea(
        struct CComposition **this,
        struct ISwapChainContent *a2,
        struct CShape *a3,
        char a4,
        bool a5)
{
  unsigned int v8; // ebx
  CMILCOMBase *v9; // rsi
  bool v11; // r13
  CMILMatrix *TopByReference; // rax
  unsigned int Rotation; // eax
  int v14; // eax
  struct _D3DCOLORVALUE v15; // xmm0
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  char v22; // [rsp+30h] [rbp-81h]
  struct D2D_SIZE_F v23; // [rsp+38h] [rbp-79h] BYREF
  struct _D3DCOLORVALUE v24; // [rsp+40h] [rbp-71h] BYREF
  struct _D3DCOLORVALUE v25; // [rsp+50h] [rbp-61h] BYREF
  __int128 v26; // [rsp+60h] [rbp-51h] BYREF
  __int128 v27; // [rsp+70h] [rbp-41h]
  __int128 v28; // [rsp+80h] [rbp-31h]
  __int128 v29; // [rsp+90h] [rbp-21h]
  __int16 v30; // [rsp+A0h] [rbp-11h]
  float v31; // [rsp+B0h] [rbp-1h] BYREF
  float v32; // [rsp+B4h] [rbp+3h]
  float v33; // [rsp+B8h] [rbp+7h]
  float v34; // [rsp+BCh] [rbp+Bh]

  v8 = 0;
  v9 = 0LL;
  v23 = 0LL;
  *(struct _D3DCOLORVALUE *)&v24.r = 0LL;
  memset_0(&v26, 0, 0x28uLL);
  v22 = 0;
  v11 = CCommonRegistryData::m_dwOverlayTestMode != 0;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 59));
  Rotation = CMILMatrix::GetRotation(TopByReference);
  (*(void (__fastcall **)(struct ISwapChainContent *, _QWORD))(*(_QWORD *)a2 + 168LL))(a2, Rotation);
  if ( a4 )
  {
    if ( !a5 )
    {
      LODWORD(v26) = 20;
      HIDWORD(v26) = 1;
      DWORD1(v27) = 1;
      v14 = CDrawingContext::PushRenderOptionsInternal(
              (CDrawingContext *)this,
              0LL,
              (const struct MilRenderOptions *)&v26,
              1);
      v8 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x20BDu);
        return v8;
      }
      v22 = 1;
      goto LABEL_9;
    }
  }
  else if ( !a5 )
  {
    goto LABEL_9;
  }
  if ( v11 )
    goto LABEL_10;
  if ( a4 )
    return v8;
LABEL_9:
  if ( v11 )
  {
LABEL_10:
    if ( a4 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 136LL))(a2) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 144LL))(a2) )
          *(struct _D3DCOLORVALUE *)&v15.r = (struct _D3DCOLORVALUE)_xmm;
        else
          *(struct _D3DCOLORVALUE *)&v15.r = (struct _D3DCOLORVALUE)_xmm;
      }
      else
      {
        *(struct _D3DCOLORVALUE *)&v15.r = (struct _D3DCOLORVALUE)_xmm;
      }
      *(struct _D3DCOLORVALUE *)&v24.r = *(struct _D3DCOLORVALUE *)&v15.r;
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if ( !a4 )
LABEL_18:
    v24.a = FLOAT_1_0;
LABEL_19:
  if ( CShape::IsAxisAlignedRectangle(a3) )
  {
    v16 = (*(__int64 (__fastcall **)(struct CShape *, float *, _QWORD))(*(_QWORD *)a3 + 32LL))(a3, &v31, 0LL);
    v8 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x20F5u);
    }
    else
    {
      v23.width = v33 - v31;
      v23.height = v34 - v32;
      v27 = _xmm;
      v30 = 32085;
      v26 = _xmm;
      v28 = _xmm;
      v29 = _xmm;
      CMILMatrix::SetTranslation((CMILMatrix *)&v26, v31, v32, 0.0);
      v17 = CDrawingContext::PushTransformInternal((CDrawingContext *)this, 0LL, (const struct CMILMatrix *)&v26, 1, 1);
      v8 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x20FAu);
      }
      else
      {
        *(struct _D3DCOLORVALUE *)&v25.r = *(struct _D3DCOLORVALUE *)&v24.r;
        v18 = CDrawingContext::DrawColorRectangle((CDrawingContext *)this, &v25, &v23);
        v8 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x20FEu);
        CDrawingContext::PopTransformInternal((CDrawingContext *)this, 1);
      }
    }
  }
  else
  {
    v19 = CSolidColorLegacyMilBrush::CreateFromColor((struct CSolidColorLegacyMilBrush **)&v23, this[4], &v24);
    v8 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x2104u);
      v9 = (CMILCOMBase *)v23;
    }
    else
    {
      v9 = (CMILCOMBase *)v23;
      v20 = CDrawingContext::DrawShape((CDrawingContext *)this, a3, *(struct CLegacyMilBrush **)&v23);
      v8 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x2106u);
    }
  }
  if ( v22 )
    CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)this, 1);
  if ( v9 )
    CMILCOMBase::InternalRelease(v9);
  return v8;
}
