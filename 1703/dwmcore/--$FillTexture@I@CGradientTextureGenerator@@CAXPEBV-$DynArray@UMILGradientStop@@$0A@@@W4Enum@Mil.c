/*
 * XREFs of ??$FillTexture@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBU_D3DCOLORVALUE@@3PEBVCGradientSpanInfo@@IPEAI@Z @ 0x1801C0480
 * Callers:
 *     ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x1801C0558 (--$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGr.c)
 * Callees:
 *     ??$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@IPEAI@Z @ 0x1801C020C (--$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV-$DynArray@UMILGradientStop@@$0A@@@W4Enu.c)
 *     ??$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolationMode@@PEAI@Z @ 0x1801C06EC (--$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolati.c)
 */

__int64 __fastcall CGradientTextureGenerator::FillTexture<unsigned int>(
        __int64 *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        int a7,
        __int64 a8)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  int v12; // r15d
  unsigned int v13; // ebp
  unsigned int v14; // edi
  __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned int v17; // eax

  result = (__int64)a6;
  v9 = 0;
  v12 = 0;
  v13 = *a6;
  v14 = *a6;
  if ( a2 == 1 )
  {
    if ( v13 > 1 )
    {
      v12 = 1;
      v14 >>= 1;
    }
    v15 = 0LL;
  }
  else
  {
    v15 = 0LL;
    if ( !a2 )
    {
      if ( v13 > 1 )
      {
        CGradientTextureGenerator::SetOutputTexel<unsigned int>(a4, a3, a8);
        --v14;
        v15 = 1LL;
      }
      result = CGradientTextureGenerator::SetOutputTexel<unsigned int>(a5, a3, a8 + 4LL * (v13 - 1));
      --v14;
    }
  }
  if ( v14 )
    result = CGradientTextureGenerator::FillGradientSpan<unsigned int>(a1, a3, v14, a8 + 4 * v15);
  if ( v12 && v14 )
  {
    do
    {
      v16 = v9 + v14;
      v17 = v14 - v9++;
      result = *(unsigned int *)(a8 + 4LL * (v17 - 1));
      *(_DWORD *)(a8 + 4 * v16) = result;
    }
    while ( v9 < v14 );
  }
  return result;
}
