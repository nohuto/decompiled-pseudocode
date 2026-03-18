/*
 * XREFs of ??$FillTexture@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBU_D3DCOLORVALUE@@3PEBVCGradientSpanInfo@@IPEAI@Z @ 0x1801D90F0
 * Callers:
 *     ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x1801D91C8 (--$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGr.c)
 * Callees:
 *     ??$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@IPEAI@Z @ 0x1801D8E7C (--$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV-$DynArray@UMILGradientStop@@$0A@@@W4Enu.c)
 *     ??$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolationMode@@PEAI@Z @ 0x1801D935C (--$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolati.c)
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
  unsigned int v8; // edi
  int v11; // r14d
  unsigned int v12; // r12d
  unsigned int v13; // ebp
  __int64 result; // rax
  unsigned int v15; // ebx
  __int64 v16; // rcx
  unsigned int v17; // eax

  v8 = 0;
  v11 = 0;
  v12 = 0;
  v13 = *a6;
  result = 1LL;
  v15 = *a6;
  if ( a2 == 1 )
  {
    if ( v13 > 1 )
    {
      v11 = 1;
      v15 >>= 1;
    }
  }
  else if ( !a2 )
  {
    if ( v13 > 1 )
    {
      CGradientTextureGenerator::SetOutputTexel<unsigned int>(a4, a3, a8);
      --v15;
      v12 = 1;
    }
    result = CGradientTextureGenerator::SetOutputTexel<unsigned int>(a5, a3, a8 + 4LL * (v13 - 1));
    --v15;
  }
  if ( v15 )
    result = CGradientTextureGenerator::FillGradientSpan<unsigned int>(a1, a3, v15, a8 + 4LL * v12);
  if ( v11 && v15 )
  {
    do
    {
      v16 = v8 + v15;
      v17 = v15 - v8++;
      result = *(unsigned int *)(a8 + 4LL * (v17 - 1));
      *(_DWORD *)(a8 + 4 * v16) = result;
    }
    while ( v8 < v15 );
  }
  return result;
}
