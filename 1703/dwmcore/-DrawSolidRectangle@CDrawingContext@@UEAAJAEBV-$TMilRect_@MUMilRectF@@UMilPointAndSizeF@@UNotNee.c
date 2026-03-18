/*
 * XREFs of ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A9330
 * Callers:
 *     ?DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000AE6C (-DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000C420 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18000EC78 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x18000EFFC (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?DrawAtlasedRects@CDrawingContext@@QEAAJPEAVCAtlasedRectsGroup@@@Z @ 0x1800A741C (-DrawAtlasedRects@CDrawingContext@@QEAAJPEAVCAtlasedRectsGroup@@@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800A7AC0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18014DF10 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 * Callees:
 *     ?Transform2DBoundsWithBorderMode@CMILMatrix@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilBitmapBorderMode@@PEAV2@@Z @ 0x18001206C (-Transform2DBoundsWithBorderMode@CMILMatrix@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18003DE10 (-DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180093F90 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800941B0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A1CBC (-DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800A1D6C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800A1D90 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x1800A781C (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawSolidRectangle(
        CDrawingContext *this,
        struct MilRectF *a2,
        const struct _D3DCOLORVALUE *a3)
{
  char v3; // r14
  int *v7; // rcx
  __int64 v8; // rdx
  char *v9; // rax
  int v10; // eax
  int v12; // eax
  __int64 v13; // rdx
  char *v14; // r9
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned int v21; // edi
  int v22; // eax
  const struct CMILMatrix *TopByReference; // rax
  unsigned int v24[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE *v26; // [rsp+70h] [rbp-29h] BYREF
  int v27; // [rsp+78h] [rbp-21h]
  int v28; // [rsp+7Ch] [rbp-1Dh]
  int v29; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v30[16]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v31; // [rsp+98h] [rbp-1h]
  _QWORD v32[2]; // [rsp+A0h] [rbp+7h] BYREF
  char v33; // [rsp+B0h] [rbp+17h] BYREF

  v3 = 0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a3->a) & _xmm) >= 0.0000011920929
    && !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)a2) )
  {
    if ( (unsigned __int8)CDrawingContext::IsBounding(this) )
    {
      v29 = 0;
      v31 = 0LL;
      v25[0] = &CRectanglesShape::`vftable';
      v25[1] = v30;
      v26 = v30;
      v27 = 1;
      v28 = 1;
      if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8)) )
      {
        TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 472));
        CMILMatrix::Transform2DBoundsWithBorderMode((__int64)TopByReference, (__int64)a2);
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v25, (const struct MilRectF *)v32);
        CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
        v3 = 1;
      }
      else
      {
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v25, a2);
      }
      v12 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x42Eu);
      }
      else
      {
        v13 = *((_QWORD *)this + 49);
        v14 = (char *)this + 80;
        v15 = ((unsigned __int64)this + 8) & -(__int64)(this != 0LL);
        v16 = *((_QWORD *)this + 46);
        v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v16 + 80LL);
        if ( v17 == CSwRenderTargetGetBounds::DrawPath )
          v18 = CSwRenderTargetGetBounds::DrawPath(
                  v16,
                  v13,
                  v15,
                  (__int64)v14,
                  (__int64)this + 3456,
                  (__int64)v25,
                  0LL,
                  *((_QWORD *)this + 381));
        else
          v18 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, char *, char *, _QWORD *))v17)(
                  v16,
                  v13,
                  v15,
                  v14,
                  (char *)this + 3456,
                  v25);
        if ( v18 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x43Bu);
      }
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v25);
    }
    else
    {
      v24[0] = 0;
      v32[0] = v25;
      v7 = &v29;
      v8 = 2LL;
      v32[1] = &v26;
      v9 = &v33;
      do
      {
        *(_QWORD *)v9 = v7;
        v7 += 4;
        v9 += 8;
        --v8;
      }
      while ( v8 );
      if ( CDrawingContext::CalcPartiallyVisibleRectangleSet(
             (__int64)this,
             (__int64)a2,
             *((_DWORD *)this + 1674),
             (__int64)v32,
             v24) )
      {
        if ( !v24[0] )
          return 0LL;
        v19 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x456u);
          return 0LL;
        }
        v20 = CDrawingContext::ApplyRenderStateInternal(this, 0);
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x459u);
        }
        else
        {
          v21 = 0;
          if ( v24[0] )
          {
            while ( 1 )
            {
              v22 = CDrawingContext::DrawSolidRectangleInternal((__int64)this, (struct D2D_RECT_F *)&v25[2 * v21], a3);
              if ( v22 < 0 )
                break;
              if ( ++v21 >= v24[0] )
                goto LABEL_26;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x45Du);
          }
        }
        goto LABEL_26;
      }
      v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      if ( v10 >= 0 )
      {
        CDrawingContext::DrawSolidRectangleInternal((__int64)this, (struct D2D_RECT_F *)a2, a3);
        return 0LL;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x463u);
    }
    if ( !v3 )
      return 0LL;
LABEL_26:
    CDrawingContext::PopTransformInternal(this, 1);
  }
  return 0LL;
}
