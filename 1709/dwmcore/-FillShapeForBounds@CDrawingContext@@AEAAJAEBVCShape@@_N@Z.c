/*
 * XREFs of ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18003FE70
 * Callers:
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18003DA1C (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18003DB18 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18003DD0C (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawShape@CDrawingContext@@QEAAJAEBVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x1800400E8 (-DrawShape@CDrawingContext@@QEAAJAEBVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180041CEC (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180042E90 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@AEBVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18002C980 (-DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800352C4 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180035570 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180036CA0 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041BF8 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Transform2DBoundsWithBorderMode@CMILMatrix@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilBitmapBorderMode@@PEAV2@@Z @ 0x18018FF34 (-Transform2DBoundsWithBorderMode@CMILMatrix@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 */

__int64 __fastcall CDrawingContext::FillShapeForBounds(CDrawingContext *this, const struct CShape *a2)
{
  unsigned __int64 v2; // r15
  char v5; // r14
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  char *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rax
  int v13; // eax
  const struct CMILMatrix *TopByReference; // r14
  int v16; // eax
  int v17; // eax
  _QWORD v18[3]; // [rsp+50h] [rbp-39h] BYREF
  int v19; // [rsp+68h] [rbp-21h]
  int v20; // [rsp+6Ch] [rbp-1Dh]
  int v21; // [rsp+70h] [rbp-19h]
  _BYTE v22[16]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v23; // [rsp+88h] [rbp-1h]
  _BYTE v24[16]; // [rsp+90h] [rbp+7h] BYREF
  _BYTE v25[16]; // [rsp+A0h] [rbp+17h] BYREF

  v21 = 0;
  v23 = 0LL;
  v2 = (unsigned __int64)this + 8;
  v18[0] = &CRectanglesShape::`vftable';
  v19 = 1;
  v18[1] = v22;
  v20 = 1;
  v18[2] = v22;
  v5 = 0;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8)) )
  {
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    v16 = (*(__int64 (__fastcall **)(const struct CShape *, _BYTE *, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, v24, 0LL);
    v7 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x59Bu);
      goto LABEL_9;
    }
    CMILMatrix::Transform2DBoundsWithBorderMode(TopByReference, v24, *((unsigned int *)this + 64), v25);
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v18, (const struct MilRectF *)v25);
    a2 = (const struct CShape *)v18;
    v17 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v7 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x5AEu);
      goto LABEL_9;
    }
    v5 = 1;
  }
  v6 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x5B2u);
  }
  else
  {
    v8 = *((_QWORD *)this + 45);
    v9 = (char *)this + 72;
    v10 = *((_QWORD *)this + 48);
    v11 = v2 & -(__int64)(this != 0LL);
    v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 64LL);
    if ( v12 == CSwRenderTargetGetBounds::DrawPath )
      v13 = CSwRenderTargetGetBounds::DrawPath(
              v8,
              v10,
              v11,
              (__int64)v9,
              (__int64)this + 3552,
              (__int64)a2,
              0LL,
              *((_QWORD *)this + 393));
    else
      v13 = ((__int64 (__fastcall *)(__int64, __int64, __int64, char *))v12)(v8, v10, v11, v9);
    v7 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x5BDu);
  }
  if ( v5 )
    CDrawingContext::PopTransformInternal(this, 1);
LABEL_9:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v18);
  return v7;
}
