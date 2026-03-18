/*
 * XREFs of InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___ @ 0x18018A698
 * Callers:
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18006A394 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800B5C60 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 * Callees:
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800BABA0 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1801C84C8 (-Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1801C85D4 (-Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 */

const __m128i *__fastcall InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17_(
        struct _D3DCOLORVALUE *a1,
        struct _D3DCOLORVALUE *a2,
        struct _D3DCOLORVALUE *a3,
        double *a4)
{
  struct _D3DCOLORVALUE *v8; // rax
  struct _D3DCOLORVALUE *v9; // rax
  __int64 v10; // rdx
  const __m128i *result; // rax
  __m128i v12; // xmm0
  struct _D3DCOLORVALUE v13; // [rsp+30h] [rbp-79h] BYREF
  _OWORD v14[4]; // [rsp+40h] [rbp-69h] BYREF
  int v15; // [rsp+80h] [rbp-29h]
  char v16; // [rsp+84h] [rbp-25h]
  _OWORD v17[4]; // [rsp+90h] [rbp-19h] BYREF
  int v18; // [rsp+D0h] [rbp+27h]
  char v19; // [rsp+D4h] [rbp+2Bh]

  memset_0(v17, 0, sizeof(v17));
  memset_0(v14, 0, sizeof(v14));
  v8 = Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB(&v13, a1);
  v19 = 1;
  v18 = 70;
  v17[0] = *(struct _D3DCOLORVALUE *)&v8->r;
  v9 = Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB(&v13, a2);
  v15 = 70;
  v16 = 1;
  v14[0] = *(struct _D3DCOLORVALUE *)&v9->r;
  KeyframeInterpolation::InterpolateHsl(*a4, v10, (float *)v17, (float *)v14, (__int64)a3);
  result = (const __m128i *)Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB(&v13, a3);
  v12 = _mm_loadu_si128(result);
  LODWORD(a3[4].r) = 70;
  LOBYTE(a3[4].g) = 1;
  *(__m128i *)&a3->r = v12;
  return result;
}
