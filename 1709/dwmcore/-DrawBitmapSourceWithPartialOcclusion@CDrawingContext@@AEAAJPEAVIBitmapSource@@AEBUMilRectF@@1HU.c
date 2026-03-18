/*
 * XREFs of ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18003F694
 * Callers:
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18003DA1C (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800352C4 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180035570 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@_N@Z @ 0x18003D474 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18003D5F8 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005B0B8 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@_ea_18005B0B8.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007B590 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1801CAFC4 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapSourceWithPartialOcclusion(
        CDrawingContext *this,
        int a2,
        __int128 *a3,
        __int128 *a4,
        unsigned int a5,
        int a6)
{
  void (__fastcall ***v6)(_QWORD, __int64); // rsi
  unsigned int v11; // r14d
  __int128 v12; // xmm0
  char v13; // bl
  char *v14; // rax
  char *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // r9
  _BYTE *v18; // r8
  int v19; // eax
  const struct CMILMatrix *TopByReference; // rax
  int v22; // eax
  int v23; // [rsp+28h] [rbp-D8h]
  unsigned int v24; // [rsp+40h] [rbp-C0h] BYREF
  void (__fastcall ***v25)(_QWORD, __int64); // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v26[64]; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+90h] [rbp-70h]
  _BYTE v28[64]; // [rsp+A0h] [rbp-60h] BYREF
  int v29; // [rsp+E0h] [rbp-20h]
  __int128 v30; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v31; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v32[3]; // [rsp+110h] [rbp+10h] BYREF
  int v33; // [rsp+128h] [rbp+28h]
  int v34; // [rsp+12Ch] [rbp+2Ch]
  int v35; // [rsp+130h] [rbp+30h]
  _BYTE v36[16]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v37; // [rsp+148h] [rbp+48h]
  _QWORD v38[2]; // [rsp+150h] [rbp+50h] BYREF
  char v39; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v40[16]; // [rsp+170h] [rbp+70h] BYREF
  char v41; // [rsp+180h] [rbp+80h] BYREF
  char v42; // [rsp+190h] [rbp+90h] BYREF

  v6 = 0LL;
  v33 = 1;
  v35 = 0;
  v37 = 0LL;
  v32[0] = &CRectanglesShape::`vftable';
  v25 = 0LL;
  v32[1] = v36;
  v34 = 1;
  v32[2] = v36;
  v11 = 0;
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v40,
    16LL,
    4LL,
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  v12 = *a4;
  v24 = 0;
  v27 = 0;
  v29 = 0;
  v30 = v12;
  v13 = 0;
  v31 = *a3;
  CMILMatrix::InferAffineMatrix(v26, &v31, &v30);
  v38[1] = &v41;
  v38[0] = v40;
  v14 = &v39;
  v15 = &v42;
  v16 = 2LL;
  do
  {
    *(_QWORD *)v14 = v15;
    v15 += 16;
    v14 += 8;
    --v16;
  }
  while ( v16 );
  if ( !CDrawingContext::CalcPartiallyVisibleRectangleSet((__int64)this, (__int64)&v30, a5, (__int64)v38, &v24) )
    goto LABEL_4;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
  CMILMatrix::Multiply((const struct CMILMatrix *)v26, TopByReference, (struct CMILMatrix *)v28);
  if ( !v24 )
    goto LABEL_9;
  v22 = CShape::BuildFromRectFs(v40, v24, &v25);
  v11 = v22;
  if ( v22 >= 0 )
  {
    v6 = v25;
    v18 = v28;
    v13 = 1;
    v17 = v25;
    if ( v25 )
    {
LABEL_5:
      v19 = CDrawingContext::FillShapeWithBitmapSource(this, a2, (__int64)v18, (__int64)v17, a6, v23, v13);
      v11 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x746u);
      goto LABEL_7;
    }
LABEL_4:
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v32, (const struct MilRectF *)&v30);
    v17 = v32;
    v18 = v26;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x71Fu);
  v6 = v25;
LABEL_7:
  if ( v6 )
    (**v6)(v6, 1LL);
LABEL_9:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v32);
  return v11;
}
