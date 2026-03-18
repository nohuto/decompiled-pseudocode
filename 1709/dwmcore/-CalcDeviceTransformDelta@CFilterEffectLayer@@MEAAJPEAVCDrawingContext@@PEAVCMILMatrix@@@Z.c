/*
 * XREFs of ?CalcDeviceTransformDelta@CFilterEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18014C7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005B0B8 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@_ea_18005B0B8.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CFilterEffectLayer::CalcDeviceTransformDelta(
        CFilterEffectLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  __m128i v3; // xmm4
  __m128i v4; // xmm1
  __m128i v5; // xmm3
  __m128i v6; // xmm2
  __int128 v7; // xmm1
  int v8; // eax
  __int64 v9; // r10
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _OWORD v13[4]; // [rsp+20h] [rbp-29h] BYREF
  int v14; // [rsp+60h] [rbp+17h]
  float v15[2]; // [rsp+70h] [rbp+27h] BYREF
  float v16; // [rsp+78h] [rbp+2Fh]
  float v17; // [rsp+7Ch] [rbp+33h]
  float v18; // [rsp+80h] [rbp+37h] BYREF
  float v19; // [rsp+84h] [rbp+3Bh]
  float v20; // [rsp+88h] [rbp+3Fh]
  float v21; // [rsp+8Ch] [rbp+43h]

  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
  v14 = 0;
  v15[0] = 0.0;
  v15[1] = 0.0;
  v18 = _mm_cvtepi32_ps(v4).m128_f32[0];
  v19 = _mm_cvtepi32_ps(v6).m128_f32[0];
  v16 = _mm_cvtepi32_ps(v3).m128_f32[0];
  v17 = _mm_cvtepi32_ps(v5).m128_f32[0];
  v20 = v16 + v18;
  v21 = v17 + v19;
  CMILMatrix::InferAffineMatrix((__int64)v13, &v18, v15);
  v7 = v13[1];
  v8 = v14;
  *(_OWORD *)v9 = v13[0];
  v10 = v13[2];
  *(_OWORD *)(v9 + 16) = v7;
  v11 = v13[3];
  *(_OWORD *)(v9 + 32) = v10;
  *(_OWORD *)(v9 + 48) = v11;
  *(_DWORD *)(v9 + 64) = v8;
  return 0LL;
}
