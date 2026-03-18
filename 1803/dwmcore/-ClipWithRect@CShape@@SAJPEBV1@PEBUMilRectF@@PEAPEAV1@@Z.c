/*
 * XREFs of ?ClipWithRect@CShape@@SAJPEBV1@PEBUMilRectF@@PEAPEAV1@@Z @ 0x18020A00C
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180064114 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180064350 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800C2BE4 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CShape::ClipWithRect(const struct CShape *a1, const struct MilRectF *a2, struct CShape **a3)
{
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD v9[4]; // [rsp+30h] [rbp-19h] BYREF
  int v10; // [rsp+50h] [rbp+7h]
  int v11; // [rsp+54h] [rbp+Bh]
  int v12; // [rsp+58h] [rbp+Fh]
  _BYTE v13[16]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v14; // [rsp+70h] [rbp+27h]

  v9[1] = 0LL;
  v12 = 0;
  v14 = 0LL;
  v9[0] = &CRectanglesShape::`vftable';
  v10 = 1;
  v9[2] = v13;
  v9[3] = v13;
  v11 = 1;
  CRectanglesShape::SetSingleRect((CRectanglesShape *)v9, a2);
  v6 = CShape::Combine(a1, v5, (CShape *)v9, 0LL, 1, a3);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xF4u);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v9);
  return v7;
}
