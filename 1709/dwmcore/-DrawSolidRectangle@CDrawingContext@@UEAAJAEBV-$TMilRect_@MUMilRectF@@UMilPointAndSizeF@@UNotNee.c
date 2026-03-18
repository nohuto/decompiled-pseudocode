/*
 * XREFs of ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180040290
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800231D0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180027B58 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800293F0 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z @ 0x18003E988 (-EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18003EAB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18013EEC0 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800352C4 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180035570 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180036C7C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180036CA0 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18003D5F8 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041BF8 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18013D2E4 (-DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?Transform2DBoundsWithBorderMode@CMILMatrix@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilBitmapBorderMode@@PEAV2@@Z @ 0x18018FF34 (-Transform2DBoundsWithBorderMode@CMILMatrix@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 */

__int64 __fastcall CDrawingContext::DrawSolidRectangle(CDrawingContext *this, struct MilRectF *a2, _OWORD *a3)
{
  int v3; // eax
  char v4; // r14
  float v7; // xmm2_4
  float v8; // xmm1_4
  int v9; // eax
  int v10; // eax
  const struct CMILMatrix *TopByReference; // rax
  int *v13; // rcx
  __int64 v14; // rdx
  char *v15; // rax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  int v20; // eax
  unsigned int v21; // [rsp+50h] [rbp-59h] BYREF
  float v22[6]; // [rsp+58h] [rbp-51h] BYREF
  _QWORD v23[2]; // [rsp+70h] [rbp-39h] BYREF
  _BYTE *v24; // [rsp+80h] [rbp-29h] BYREF
  int v25; // [rsp+88h] [rbp-21h]
  int v26; // [rsp+8Ch] [rbp-1Dh]
  int v27; // [rsp+90h] [rbp-19h] BYREF
  _BYTE v28[16]; // [rsp+98h] [rbp-11h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-1h]
  _QWORD v30[2]; // [rsp+B0h] [rbp+7h] BYREF
  char v31; // [rsp+C0h] [rbp+17h] BYREF

  v3 = *((_DWORD *)this + 776);
  v4 = 0;
  *(_OWORD *)v22 = *a3;
  if ( v3 )
    v7 = *(float *)(*((_QWORD *)this + 390) + 4LL * (unsigned int)(v3 - 1));
  else
    v7 = FLOAT_1_0;
  v22[0] = v22[0] * v7;
  v22[1] = v22[1] * v7;
  v22[2] = v22[2] * v7;
  v22[3] = v22[3] * v7;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v22[3]) & _xmm);
  if ( v8 >= 0.0000011920929 && !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)a2) )
  {
    if ( CDrawingContext::IsBounding(this) )
    {
      v27 = 0;
      v29 = 0LL;
      v23[0] = &CRectanglesShape::`vftable';
      v25 = 1;
      v23[1] = v28;
      v24 = v28;
      v26 = 1;
      if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8)) )
      {
        TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
        CMILMatrix::Transform2DBoundsWithBorderMode(TopByReference, a2, *((unsigned int *)this + 64), v30);
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v23, (const struct MilRectF *)v30);
        CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
        v4 = 1;
      }
      else
      {
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v23, a2);
      }
      v9 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x42Eu);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *, char *, _QWORD *, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 45) + 64LL))(
                *((_QWORD *)this + 45),
                *((_QWORD *)this + 48),
                ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
                (char *)this + 72,
                (char *)this + 3552,
                v23,
                0LL,
                *((_QWORD *)this + 393),
                *((_DWORD *)this + 70));
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x439u);
      }
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v23);
    }
    else
    {
      `vector constructor iterator'(
        (CInputSinkStruct::InputQueueInfo *)v23,
        16LL,
        4LL,
        COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
      v21 = 0;
      v30[0] = v23;
      v13 = &v27;
      v14 = 2LL;
      v30[1] = &v24;
      v15 = &v31;
      do
      {
        *(_QWORD *)v15 = v13;
        v13 += 4;
        v15 += 8;
        --v14;
      }
      while ( v14 );
      if ( CDrawingContext::CalcPartiallyVisibleRectangleSet(
             (__int64)this,
             (__int64)a2,
             *((_DWORD *)this + 1690),
             (__int64)v30,
             &v21) )
      {
        if ( !v21 )
          return 0LL;
        v16 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x454u);
          return 0LL;
        }
        v17 = CDrawingContext::ApplyRenderStateInternal(this, 0);
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x457u);
        }
        else
        {
          v18 = 0;
          if ( v21 )
          {
            while ( 1 )
            {
              v19 = CDrawingContext::DrawSolidRectangleInternal(this, &v23[2 * v18], v22);
              if ( v19 < 0 )
                break;
              if ( ++v18 >= v21 )
                goto LABEL_26;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x45Bu);
          }
        }
        goto LABEL_26;
      }
      v20 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      if ( v20 >= 0 )
      {
        CDrawingContext::DrawSolidRectangleInternal(this, a2, v22);
        return 0LL;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x461u);
    }
    if ( !v4 )
      return 0LL;
LABEL_26:
    CDrawingContext::PopTransformInternal(this, 1);
  }
  return 0LL;
}
