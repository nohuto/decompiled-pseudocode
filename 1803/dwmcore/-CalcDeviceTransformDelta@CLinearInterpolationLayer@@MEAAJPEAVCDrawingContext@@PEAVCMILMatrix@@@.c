/*
 * XREFs of ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801760A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006E480 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800A36D8 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@_ea_1800A36D8.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CLinearInterpolationLayer::CalcDeviceTransformDelta(
        CLinearInterpolationLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  __int128 v6; // xmm0
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  __int128 v9; // xmm1
  int v10; // eax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _OWORD v14[4]; // [rsp+20h] [rbp-89h] BYREF
  int v15; // [rsp+60h] [rbp-49h]
  _BYTE v16[64]; // [rsp+70h] [rbp-39h] BYREF
  int v17; // [rsp+B0h] [rbp+7h]
  __int128 v18; // [rsp+C0h] [rbp+17h] BYREF
  float v19[4]; // [rsp+D0h] [rbp+27h] BYREF

  v15 = 0;
  v17 = 0;
  v6 = *(_OWORD *)((char *)CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8)) + 140);
  *(_OWORD *)((char *)this + 120) = v6;
  v18 = v6;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)v16);
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v16, (__int64)&v18, v19);
  v7 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  *(_QWORD *)&v18 = 0LL;
  DWORD2(v18) = _mm_cvtepi32_ps(v7).m128_u32[0];
  HIDWORD(v18) = _mm_cvtepi32_ps(v8).m128_u32[0];
  CMILMatrix::InferAffineMatrix((__int64)v14, v19, (float *)&v18);
  v9 = v14[1];
  v10 = v15;
  *(_OWORD *)a3 = v14[0];
  v11 = v14[2];
  *((_OWORD *)a3 + 1) = v9;
  v12 = v14[3];
  *((_OWORD *)a3 + 2) = v11;
  *((_OWORD *)a3 + 3) = v12;
  *((_DWORD *)a3 + 16) = v10;
  return 0LL;
}
