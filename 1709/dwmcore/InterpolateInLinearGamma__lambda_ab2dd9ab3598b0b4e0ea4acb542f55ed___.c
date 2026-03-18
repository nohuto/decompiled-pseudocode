/*
 * XREFs of InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___ @ 0x18018A780
 * Callers:
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18006A394 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800B5C60 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 * Callees:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800B5550 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1801C84C8 (-Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1801C85D4 (-Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 */

const __m128i *__fastcall InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed_(
        struct _D3DCOLORVALUE *a1,
        struct _D3DCOLORVALUE *a2,
        struct _D3DCOLORVALUE *a3,
        __int64 a4)
{
  struct _D3DCOLORVALUE *v8; // rax
  struct _D3DCOLORVALUE *v9; // rax
  int v10; // ecx
  float v11; // xmm1_4
  const __m128i *result; // rax
  __m128i v13; // xmm0
  struct _D3DCOLORVALUE v14; // [rsp+30h] [rbp-79h] BYREF
  _OWORD v15[4]; // [rsp+40h] [rbp-69h] BYREF
  int v16; // [rsp+80h] [rbp-29h]
  char v17; // [rsp+84h] [rbp-25h]
  _OWORD v18[4]; // [rsp+90h] [rbp-19h] BYREF
  int v19; // [rsp+D0h] [rbp+27h]
  char v20; // [rsp+D4h] [rbp+2Bh]

  memset_0(v18, 0, sizeof(v18));
  memset_0(v15, 0, sizeof(v15));
  v8 = Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB(&v14, a1);
  v20 = 1;
  v19 = 70;
  v18[0] = *(struct _D3DCOLORVALUE *)&v8->r;
  v9 = Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB(&v14, a2);
  v10 = *(_DWORD *)(a4 + 8);
  v11 = *(double *)a4;
  v16 = 70;
  v17 = 1;
  v15[0] = *(struct _D3DCOLORVALUE *)&v9->r;
  KeyframeInterpolation::ExpressionValueLerp(v10, v11, (__int64)v18, (float *)v15, (__int64)a3);
  result = (const __m128i *)Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB(&v14, a3);
  v13 = _mm_loadu_si128(result);
  LODWORD(a3[4].r) = 70;
  LOBYTE(a3[4].g) = 1;
  *(__m128i *)&a3->r = v13;
  return result;
}
