/*
 * XREFs of ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAVCShapePtr@@@Z @ 0x180162730
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180051D10 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180052120 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x1800112AC (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801625F4 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?ClipWithRect@CShape@@SAJPEBV1@PEBUMilRectF@@PEAPEAV1@@Z @ 0x1801B00F4 (-ClipWithRect@CShape@@SAJPEBV1@PEBUMilRectF@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::GetLastKnownGoodDxClipShape(CWindowNode *this, CRectanglesShape **a2)
{
  _DWORD *v3; // rcx
  int v5; // eax
  float v6; // xmm0_4
  int v7; // eax
  float v8; // xmm1_4
  __m128i v9; // xmm2
  const struct CShape **DxClipShape; // rax
  int v11; // ebx
  struct CShape *v13; // [rsp+30h] [rbp-39h] BYREF
  _OWORD v14[4]; // [rsp+40h] [rbp-29h] BYREF
  __int16 v15; // [rsp+80h] [rbp+17h]
  CRectanglesShape *v16; // [rsp+90h] [rbp+27h] BYREF
  float v17; // [rsp+98h] [rbp+2Fh]
  float v18; // [rsp+9Ch] [rbp+33h]
  float v19[4]; // [rsp+A0h] [rbp+37h] BYREF

  v3 = (_DWORD *)*((_QWORD *)this + 113);
  v5 = v3[18] - v3[25];
  v13 = 0LL;
  v14[0] = _xmm;
  v15 = 32085;
  v14[1] = _xmm;
  v6 = (float)v5;
  v7 = v3[19] - v3[27];
  v8 = (float)(int)v3[24];
  v14[2] = _xmm;
  v9 = _mm_cvtsi32_si128(v3[26]);
  *(float *)&v16 = v8;
  v14[3] = _xmm;
  HIDWORD(v16) = _mm_cvtepi32_ps(v9).m128_u32[0];
  v17 = fmaxf(v8, v6);
  v18 = fmaxf(*((float *)&v16 + 1), (float)v7);
  CMILMatrix::SetTranslation(
    (CMILMatrix *)v14,
    COERCE_FLOAT(LODWORD(v8) ^ _xmm),
    COERCE_FLOAT(HIDWORD(v16) ^ _xmm),
    0.0);
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v14, (__int64)&v16, v19);
  DxClipShape = (const struct CShape **)CWindowNode::GetDxClipShape((__int64)this, (struct CShapePtr *)&v16);
  v11 = CShape::ClipWithRect(*DxClipShape, (const struct MilRectF *)v19, &v13);
  CShapePtr::Release(&v16);
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC1Du);
  }
  else
  {
    CShapePtr::Release(a2);
    *a2 = v13;
    *((_BYTE *)a2 + 8) = 1;
  }
  return (unsigned int)v11;
}
