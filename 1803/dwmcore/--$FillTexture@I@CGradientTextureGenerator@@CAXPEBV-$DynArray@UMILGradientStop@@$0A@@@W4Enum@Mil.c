/*
 * XREFs of ??$FillTexture@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBU_D3DCOLORVALUE@@3PEBVCGradientSpanInfo@@IPEAI@Z @ 0x18022056C
 * Callers:
 *     ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x180220648 (--$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGr.c)
 * Callees:
 *     ??$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@IPEAI@Z @ 0x1802202F8 (--$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV-$DynArray@UMILGradientStop@@$0A@@@W4Enu.c)
 *     ??$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolationMode@@PEAI@Z @ 0x1802207DC (--$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolati.c)
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
  unsigned int v9; // edi
  int v12; // ebp
  unsigned int v13; // r12d
  unsigned int v14; // esi
  unsigned int v15; // ebx
  bool v16; // cf
  bool v17; // zf
  __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned int v20; // eax

  result = (__int64)a6;
  v9 = 0;
  v12 = 0;
  v13 = 0;
  v14 = *a6;
  v15 = *a6;
  if ( a2 == 1 )
  {
    v16 = v14 == 0;
    v17 = v14 == 1;
    if ( v14 > 1 )
    {
      v15 >>= 1;
      v16 = v14 == 0;
      v17 = v14 == 1;
    }
    LOBYTE(v12) = !v16 && !v17;
  }
  else if ( !a2 )
  {
    v18 = v15 - 1;
    if ( v14 > 1 )
    {
      CGradientTextureGenerator::SetOutputTexel<unsigned int>(a4, a3, a8);
      v13 = 1;
    }
    result = CGradientTextureGenerator::SetOutputTexel<unsigned int>(a5, a3, a8 + 4 * v18);
    if ( v14 <= 1 )
      LODWORD(v18) = v14;
    v15 = v18 - 1;
  }
  if ( v15 )
    result = CGradientTextureGenerator::FillGradientSpan<unsigned int>(a1, a3, v15, a8 + 4LL * v13);
  if ( v12 && v15 )
  {
    do
    {
      v19 = v9 + v15;
      v20 = v15 - v9++;
      result = *(unsigned int *)(a8 + 4LL * (v20 - 1));
      *(_DWORD *)(a8 + 4 * v19) = result;
    }
    while ( v9 < v15 );
  }
  return result;
}
