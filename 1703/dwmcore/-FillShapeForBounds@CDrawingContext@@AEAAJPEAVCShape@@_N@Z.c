/*
 * XREFs of ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x1800A8E40
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@_N@Z @ 0x18000E2FC (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U-$TMIL.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000F7A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x1800A79A4 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x1800A90E4 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 * Callees:
 *     ?Transform2DBoundsWithBorderMode@CMILMatrix@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilBitmapBorderMode@@PEAV2@@Z @ 0x18001206C (-Transform2DBoundsWithBorderMode@CMILMatrix@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18003DE10 (-DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180093F90 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800941B0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800A1D90 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillShapeForBounds(CDrawingContext *this, struct CShape *a2)
{
  char v4; // r14
  int v5; // eax
  unsigned int v6; // ebx
  char *v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rax
  int v12; // eax
  const struct CMILMatrix *TopByReference; // r14
  int v15; // eax
  int v16; // eax
  _QWORD v17[3]; // [rsp+50h] [rbp-39h] BYREF
  int v18; // [rsp+68h] [rbp-21h]
  int v19; // [rsp+6Ch] [rbp-1Dh]
  int v20; // [rsp+70h] [rbp-19h]
  _BYTE v21[16]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v22; // [rsp+88h] [rbp-1h]
  _BYTE v23[16]; // [rsp+90h] [rbp+7h] BYREF
  _BYTE v24[16]; // [rsp+A0h] [rbp+17h] BYREF

  v20 = 0;
  v22 = 0LL;
  v17[0] = &CRectanglesShape::`vftable';
  v18 = 1;
  v17[1] = v21;
  v19 = 1;
  v17[2] = v21;
  v4 = 0;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8)) )
  {
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 472));
    v15 = (*(__int64 (__fastcall **)(struct CShape *, _BYTE *, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, v23, 0LL);
    v6 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x5ADu);
      goto LABEL_9;
    }
    CMILMatrix::Transform2DBoundsWithBorderMode((__int64)TopByReference, (__int64)v23);
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v17, (const struct MilRectF *)v24);
    a2 = (struct CShape *)v17;
    v16 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v6 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x5C4u);
      goto LABEL_9;
    }
    v4 = 1;
  }
  v5 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x5C8u);
  }
  else
  {
    v7 = (char *)this + 80;
    v8 = *((_QWORD *)this + 49);
    v9 = ((unsigned __int64)this + 8) & -(__int64)(this != 0LL);
    v10 = *((_QWORD *)this + 46);
    v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v10 + 80LL);
    if ( v11 == CSwRenderTargetGetBounds::DrawPath )
      v12 = CSwRenderTargetGetBounds::DrawPath(
              v10,
              v8,
              v9,
              (__int64)v7,
              (__int64)this + 3456,
              (__int64)a2,
              0LL,
              *((_QWORD *)this + 381));
    else
      v12 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, char *))v11)(v10, v8, v9, v7);
    v6 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x5D5u);
  }
  if ( v4 )
    CDrawingContext::PopTransformInternal(this, 1);
LABEL_9:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v17);
  return v6;
}
