/*
 * XREFs of ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18015ECE0
 * Callers:
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18006C8C4 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180064114 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180064350 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800A36D8 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@_ea_1800A36D8.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800BE970 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18013D2C4 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@_N@Z @ 0x1801614AC (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x180209D10 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapSourceWithPartialOcclusion(
        CDrawingContext *this,
        __int64 a2,
        __int128 *a3,
        __int128 *a4,
        int a5,
        int a6)
{
  unsigned int v6; // esi
  void (__fastcall ***v10)(_QWORD, __int64); // r14
  __int128 v11; // xmm0
  char v12; // bl
  char *v13; // rax
  char *v14; // rcx
  __int64 v15; // rdx
  const struct CMILMatrix *TopByReference; // rax
  int v17; // eax
  int v18; // eax
  int v20; // [rsp+28h] [rbp-D8h]
  unsigned int v21; // [rsp+40h] [rbp-C0h] BYREF
  void (__fastcall ***v22)(_QWORD, __int64); // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v23[64]; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+90h] [rbp-70h]
  char v25[64]; // [rsp+A0h] [rbp-60h] BYREF
  int v26; // [rsp+E0h] [rbp-20h]
  __int128 v27; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v28; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v29[4]; // [rsp+110h] [rbp+10h] BYREF
  int v30; // [rsp+130h] [rbp+30h]
  int v31; // [rsp+134h] [rbp+34h]
  int v32; // [rsp+138h] [rbp+38h]
  _BYTE v33[16]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v34; // [rsp+150h] [rbp+50h]
  _QWORD v35[2]; // [rsp+160h] [rbp+60h] BYREF
  char v36; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v37[16]; // [rsp+180h] [rbp+80h] BYREF
  char v38; // [rsp+190h] [rbp+90h] BYREF
  char v39; // [rsp+1A0h] [rbp+A0h] BYREF

  v6 = 0;
  v30 = 1;
  v29[1] = 0LL;
  v32 = 0;
  v34 = 0LL;
  v29[0] = &CRectanglesShape::`vftable';
  v31 = 1;
  v29[2] = v33;
  v29[3] = v33;
  v10 = 0LL;
  v22 = 0LL;
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v37,
    16LL,
    4LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  v11 = *a4;
  v21 = 0;
  v24 = 0;
  v26 = 0;
  v27 = v11;
  v12 = 0;
  v28 = *a3;
  CMILMatrix::InferAffineMatrix((__int64)v23, (float *)&v28, (float *)&v27);
  v35[1] = &v38;
  v35[0] = v37;
  v13 = &v36;
  v14 = &v39;
  v15 = 2LL;
  do
  {
    *(_QWORD *)v13 = v14;
    v14 += 16;
    v13 += 8;
    --v15;
  }
  while ( v15 );
  if ( !CDrawingContext::CalcPartiallyVisibleRectangleSet((__int64)this, (__int64)&v27, a5, (__int64)v35, &v21) )
  {
LABEL_7:
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v29, (const struct MilRectF *)&v27);
LABEL_8:
    v18 = CDrawingContext::FillShapeWithBitmapSource(this, a6, v20, v12);
    v6 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x6CFu);
    goto LABEL_10;
  }
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
  CMILMatrix::Multiply((const struct CMILMatrix *)v23, TopByReference, (struct CMILMatrix *)v25);
  if ( !v21 )
    goto LABEL_12;
  v17 = CShape::BuildFromRectFs(v37, v21, &v22);
  v6 = v17;
  if ( v17 >= 0 )
  {
    v10 = v22;
    v12 = 1;
    if ( v22 )
      goto LABEL_8;
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x6A8u);
  v10 = v22;
LABEL_10:
  if ( v10 )
    (**v10)(v10, 1LL);
LABEL_12:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v29);
  return v6;
}
