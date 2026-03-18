/*
 * XREFs of ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1800C48F4
 * Callers:
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800B611C (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     ?InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z @ 0x1801F5CD4 (-InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z.c)
 *     ?GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x180203950 (-GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 *     ?Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x180204D04 (-Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z @ 0x180204ED8 (-Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z.c)
 *     ??$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolationMode@@PEAI@Z @ 0x1802207DC (--$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolati.c)
 * Callees:
 *     floor @ 0x1800DB784 (floor.c)
 */

unsigned __int8 __fastcall Convert_scRGB_Channel_To_sRGB_Byte(float a1)
{
  if ( a1 <= 0.0 )
    return 0;
  if ( a1 >= 1.0 )
    return -1;
  return GammaLUT_scRGB_to_sRGB[(int)floor((float)(a1 * 3354.0) + 0.5)];
}
