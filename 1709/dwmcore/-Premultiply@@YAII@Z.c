/*
 * XREFs of ?Premultiply@@YAII@Z @ 0x1801C8908
 * Callers:
 *     ??$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolationMode@@PEAI@Z @ 0x1801D935C (--$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolati.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Premultiply(unsigned int a1)
{
  unsigned int v1; // r8d

  v1 = HIBYTE(a1);
  if ( HIBYTE(a1) == 255 )
    return a1;
  if ( v1 )
    return (v1 << 24) | ((_WORD)v1 * BYTE1(a1) + 128 + (unsigned __int16)((v1 * BYTE1(a1) + 128) >> 8)) & 0xFF00 | ((v1 * (a1 & 0xFF00FF) + 8388736 + (((v1 * (a1 & 0xFF00FF) + 8388736) >> 8) & 0xFF00FF)) >> 8) & 0xFF00FF;
  return 0LL;
}
