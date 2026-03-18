/*
 * XREFs of ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x1800A84D0
 * Callers:
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x1800A79A4 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18004F904 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180093F90 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800941B0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800986A8 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@_ea_1800986A8.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x1800A76A8 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@PEAVCShape@@.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x1800A781C (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapSourceWithPartialOcclusion(
        CDrawingContext *this,
        __int64 a2,
        __int128 *a3,
        __int128 *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        char *a8)
{
  CRegionShape *v8; // rsi
  unsigned int v13; // r14d
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  char v16; // bl
  char *v17; // rax
  char *v18; // rcx
  __int64 v19; // rdx
  CRegionShape *v20; // r9
  _BYTE *v21; // r8
  int v22; // eax
  const struct CMILMatrix *TopByReference; // rax
  int v25; // eax
  int v26; // [rsp+30h] [rbp-D0h]
  unsigned int v27; // [rsp+50h] [rbp-B0h] BYREF
  CRegionShape *v28; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v29[64]; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+A0h] [rbp-60h]
  _BYTE v31[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v32; // [rsp+F0h] [rbp-10h]
  __int128 v33; // [rsp+100h] [rbp+0h] BYREF
  __int128 v34; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v35[3]; // [rsp+120h] [rbp+20h] BYREF
  int v36; // [rsp+138h] [rbp+38h]
  int v37; // [rsp+13Ch] [rbp+3Ch]
  int v38; // [rsp+140h] [rbp+40h]
  _BYTE v39[16]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v40; // [rsp+158h] [rbp+58h]
  _QWORD v41[2]; // [rsp+160h] [rbp+60h] BYREF
  char v42; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v43[16]; // [rsp+180h] [rbp+80h] BYREF
  char v44; // [rsp+190h] [rbp+90h] BYREF
  char v45; // [rsp+1A0h] [rbp+A0h] BYREF

  v8 = 0LL;
  v35[0] = &CRectanglesShape::`vftable';
  v38 = 0;
  v40 = 0LL;
  v35[1] = v39;
  v28 = 0LL;
  v35[2] = v39;
  v36 = 1;
  v37 = 1;
  v13 = 0;
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v43,
    0x10uLL,
    4uLL,
    (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  v14 = *a4;
  v27 = 0;
  v33 = v14;
  v15 = *a3;
  v30 = 0;
  v16 = 0;
  v34 = v15;
  v32 = 0;
  CMILMatrix::InferAffineMatrix((__int64)v29, (float *)&v34, (float *)&v33);
  v41[1] = &v44;
  v41[0] = v43;
  v17 = &v42;
  v18 = &v45;
  v19 = 2LL;
  do
  {
    *(_QWORD *)v17 = v18;
    v18 += 16;
    v17 += 8;
    --v19;
  }
  while ( v19 );
  if ( !CDrawingContext::CalcPartiallyVisibleRectangleSet((__int64)this, (__int64)&v33, a5, (__int64)v41, &v27) )
    goto LABEL_4;
  v16 = 1;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 472));
  CMILMatrix::Multiply((const struct CMILMatrix *)v29, TopByReference, (struct CMILMatrix *)v31);
  if ( !v27 )
    goto LABEL_6;
  v25 = CShape::BuildFromRectFs((__int64)v43, v27, &v28);
  v13 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x746u);
    v8 = v28;
    goto LABEL_8;
  }
  v8 = v28;
  v21 = v31;
  v20 = v28;
  if ( !v28 )
  {
LABEL_4:
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v35, (const struct MilRectF *)&v33);
    v20 = (CRegionShape *)v35;
    v21 = v29;
  }
  v22 = CDrawingContext::FillShapeWithBitmapSource(this, a2, (__int64)v21, (__int64)v20, a6, 0LL, v26, a7, v16);
  v13 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x76Fu);
    goto LABEL_8;
  }
LABEL_6:
  if ( a8 )
    *a8 = v16;
LABEL_8:
  if ( v8 )
    (**(void (__fastcall ***)(CRegionShape *, __int64))v8)(v8, 1LL);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v35);
  return v13;
}
