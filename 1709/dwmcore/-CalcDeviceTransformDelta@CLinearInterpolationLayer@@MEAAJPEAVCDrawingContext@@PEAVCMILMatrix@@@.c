/*
 * XREFs of ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18014CDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800407C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005B0B8 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@_ea_18005B0B8.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CLinearInterpolationLayer::CalcDeviceTransformDelta(
        CLinearInterpolationLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  __int128 v6; // xmm0
  __int64 v7; // r8
  __int64 v8; // r9
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  __int128 v11; // xmm1
  int v12; // eax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _OWORD v16[4]; // [rsp+20h] [rbp-89h] BYREF
  int v17; // [rsp+60h] [rbp-49h]
  _BYTE v18[64]; // [rsp+70h] [rbp-39h] BYREF
  int v19; // [rsp+B0h] [rbp+7h]
  __int128 v20; // [rsp+C0h] [rbp+17h] BYREF
  float v21[4]; // [rsp+D0h] [rbp+27h] BYREF

  v17 = 0;
  v19 = 0;
  v6 = *(_OWORD *)((char *)CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8)) + 140);
  *(_OWORD *)((char *)this + 120) = v6;
  v20 = v6;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)v18, v7, v8);
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v18, (__int64)&v20, v21);
  v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v10 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  *(_QWORD *)&v20 = 0LL;
  DWORD2(v20) = _mm_cvtepi32_ps(v9).m128_u32[0];
  HIDWORD(v20) = _mm_cvtepi32_ps(v10).m128_u32[0];
  CMILMatrix::InferAffineMatrix((__int64)v16, v21, (float *)&v20);
  v11 = v16[1];
  v12 = v17;
  *(_OWORD *)a3 = v16[0];
  v13 = v16[2];
  *((_OWORD *)a3 + 1) = v11;
  v14 = v16[3];
  *((_OWORD *)a3 + 2) = v13;
  *((_OWORD *)a3 + 3) = v14;
  *((_DWORD *)a3 + 16) = v12;
  return 0LL;
}
