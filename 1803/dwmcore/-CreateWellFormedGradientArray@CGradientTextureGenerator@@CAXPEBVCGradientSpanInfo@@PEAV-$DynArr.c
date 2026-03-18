/*
 * XREFs of ?CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@_NPEAU_D3DCOLORVALUE@@4@Z @ 0x180221150
 * Callers:
 *     ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x180220648 (--$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGr.c)
 * Callees:
 *     ??$ArrayInsertionSort@UMILGradientStop@@@@YAXPEAUMILGradientStop@@I@Z @ 0x180220264 (--$ArrayInsertionSort@UMILGradientStop@@@@YAXPEAUMILGradientStop@@I@Z.c)
 *     ?SetFirstStop@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@PEAIPEAU_D3DCOLORVALUE@@@Z @ 0x1802216A0 (-SetFirstStop@CGradientTextureGenerator@@CAXPEAV-$DynArray@UMILGradientStop@@$0A@@@PEAIPEAU_D3DC.c)
 *     ?SetLastStop@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@IIPEAU_D3DCOLORVALUE@@@Z @ 0x180221844 (-SetLastStop@CGradientTextureGenerator@@CAXPEAV-$DynArray@UMILGradientStop@@$0A@@@IIPEAU_D3DCOLO.c)
 *     ?SetMiddleStops@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@PEAI1@Z @ 0x180221978 (-SetMiddleStops@CGradientTextureGenerator@@CAXPEAV-$DynArray@UMILGradientStop@@$0A@@@PEAI1@Z.c)
 */

__int64 __fastcall CGradientTextureGenerator::CreateWellFormedGradientArray(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 result; // rax
  int v10; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = a3;
  if ( a4 )
    ArrayInsertionSort<MILGradientStop>(*(_QWORD *)a2, *(_DWORD *)(a2 + 24));
  CGradientTextureGenerator::SetFirstStop(a2, &v11, a5);
  v7 = v11;
  v8 = 1;
  v10 = 1;
  if ( v11 < *(_DWORD *)(a2 + 24) )
  {
    CGradientTextureGenerator::SetMiddleStops(a2, &v11, &v10);
    v7 = v11;
    v8 = v10;
  }
  result = CGradientTextureGenerator::SetLastStop(a2, v7, v8, a6);
  *(_DWORD *)(a2 + 24) = v8 + 1;
  return result;
}
