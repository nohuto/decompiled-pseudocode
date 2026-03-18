/*
 * XREFs of ?Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x180204BDC
 * Callers:
 *     InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___ @ 0x1801BFDA0 (InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___.c)
 *     InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___ @ 0x1801BFE80 (InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___.c)
 * Callees:
 *     floor @ 0x1800DB784 (floor.c)
 */

struct _D3DCOLORVALUE *__fastcall Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB(
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct _D3DCOLORVALUE *a2)
{
  int v4; // r8d
  unsigned __int8 v5; // bl
  unsigned __int8 v6; // di
  unsigned __int8 v7; // cl
  float g; // xmm1_4
  int v9; // edx
  unsigned __int8 v10; // cl
  float b; // xmm1_4
  int v12; // ecx
  float v13; // xmm0_4
  struct _D3DCOLORVALUE *result; // rax

  v4 = (int)floor((float)(a2->r * 255.0) + 0.5);
  v5 = 0;
  v6 = -1;
  if ( v4 <= 255 )
  {
    v7 = 0;
    if ( v4 >= 0 )
      v7 = v4;
  }
  else
  {
    v7 = -1;
  }
  g = a2->g;
  retstr->r = GammaLUT_sRGB_to_scRGB[v7] / 255.0;
  v9 = (int)floor((float)(g * 255.0) + 0.5);
  if ( v9 <= 255 )
  {
    v10 = 0;
    if ( v9 >= 0 )
      v10 = v9;
  }
  else
  {
    v10 = -1;
  }
  b = a2->b;
  retstr->g = GammaLUT_sRGB_to_scRGB[v10] / 255.0;
  v12 = (int)floor((float)(b * 255.0) + 0.5);
  if ( v12 <= 255 )
  {
    if ( v12 >= 0 )
      v5 = v12;
    v6 = v5;
  }
  v13 = GammaLUT_sRGB_to_scRGB[v6];
  retstr->a = a2->a;
  result = retstr;
  retstr->b = v13 / 255.0;
  return result;
}
