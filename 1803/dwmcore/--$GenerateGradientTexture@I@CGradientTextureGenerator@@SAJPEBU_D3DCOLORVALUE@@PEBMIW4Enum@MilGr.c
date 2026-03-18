/*
 * XREFs of ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x180220648
 * Callers:
 *     ?FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradientWrapMode@@W43MilColorInterpolationMode@@@Z @ 0x1801F7314 (-FillGradientTexture@CHwLinearGradientColorSource@@AEAAJAEBVCGradientColorData@@W4Enum@MilGradie.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??$FillTexture@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBU_D3DCOLORVALUE@@3PEBVCGradientSpanInfo@@IPEAI@Z @ 0x18022056C (--$FillTexture@I@CGradientTextureGenerator@@CAXPEBV-$DynArray@UMILGradientStop@@$0A@@@W4Enum@Mil.c)
 *     ?CopyStops@CGradientTextureGenerator@@CAJPEBU_D3DCOLORVALUE@@PEBMIPEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x180221004 (-CopyStops@CGradientTextureGenerator@@CAJPEBU_D3DCOLORVALUE@@PEBMIPEAV-$DynArray@UMILGradientSto.c)
 *     ?CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@_NPEAU_D3DCOLORVALUE@@4@Z @ 0x180221150 (-CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV-$DynArr.c)
 *     ?PrepareStopsForInterpolation@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@@Z @ 0x1802213DC (-PrepareStopsForInterpolation@CGradientTextureGenerator@@CAXPEAV-$DynArray@UMILGradientStop@@$0A.c)
 *     ?RepositionStopsForSmallGradientSpans@CGradientTextureGenerator@@CAJPEBVCGradientSpanInfo@@PEBU_D3DCOLORVALUE@@1PEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x180221438 (-RepositionStopsForSmallGradientSpans@CGradientTextureGenerator@@CAJPEBVCGradientSpanInfo@@PEBU_.c)
 */

__int64 __fastcall CGradientTextureGenerator::GenerateGradientTexture<unsigned int>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // r9d
  int v13; // ecx
  int v14; // r8d
  float v15; // xmm2_4
  int v16; // ecx
  int v17; // r8d
  unsigned int v19; // [rsp+20h] [rbp-59h]
  int v20; // [rsp+30h] [rbp-49h]
  __int128 v21; // [rsp+40h] [rbp-39h] BYREF
  int v22; // [rsp+50h] [rbp-29h]
  int v23; // [rsp+54h] [rbp-25h]
  int v24; // [rsp+58h] [rbp-21h]
  _BYTE v25[16]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v26[16]; // [rsp+70h] [rbp-9h] BYREF

  v22 = 0;
  v23 = 0;
  v24 = 0;
  v9 = *(_DWORD *)a6;
  v21 = 0LL;
  if ( a7 >= v9 )
  {
    if ( (unsigned int)a3 > 0x7FFFFFFB )
    {
      v10 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(
        5u,
        &`CGradientTextureGenerator::GenerateGradientTexture<unsigned int>'::`2'::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147024809,
        0x240u);
      goto LABEL_15;
    }
    v11 = CGradientTextureGenerator::CopyStops(a1, a2, a3, &v21);
    v10 = v11;
    if ( v11 < 0 )
    {
      v19 = 587;
    }
    else
    {
      CGradientTextureGenerator::PrepareStopsForInterpolation(&v21, a5);
      LOBYTE(v12) = 1;
      CGradientTextureGenerator::CreateWellFormedGradientArray(
        v13,
        (unsigned int)&v21,
        v14,
        v12,
        (__int64)v26,
        (__int64)v25);
      v15 = *(float *)(a6 + 12);
      if ( v15 >= 1.0 || v15 == 0.0 || *(float *)(a6 + 4) == 0.0 )
        goto LABEL_11;
      v11 = CGradientTextureGenerator::RepositionStopsForSmallGradientSpans(a6, v26, v25, &v21);
      v10 = v11;
      if ( v11 >= 0 )
      {
        CGradientTextureGenerator::CreateWellFormedGradientArray(
          v16,
          (unsigned int)&v21,
          v17,
          0,
          (__int64)v26,
          (__int64)v25);
LABEL_11:
        CGradientTextureGenerator::FillTexture<unsigned int>(
          (__int64 *)&v21,
          a4,
          a5,
          (__int64)v26,
          (__int64)v25,
          (unsigned int *)a6,
          v20,
          a8);
        goto LABEL_15;
      }
      v19 = 615;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      5u,
      &`CGradientTextureGenerator::GenerateGradientTexture<unsigned int>'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v11,
      v19);
    goto LABEL_15;
  }
  v10 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(
    5u,
    &`CGradientTextureGenerator::GenerateGradientTexture<unsigned int>'::`2'::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147024809,
    0x23Au);
LABEL_15:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v21);
  return v10;
}
