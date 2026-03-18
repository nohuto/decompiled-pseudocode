/*
 * XREFs of ?SetFirstStop@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@PEAIPEAU_D3DCOLORVALUE@@@Z @ 0x1802216A0
 * Callers:
 *     ?CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@_NPEAU_D3DCOLORVALUE@@4@Z @ 0x180221150 (-CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV-$DynArr.c)
 * Callees:
 *     ?InterpolateColors@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@0MMMPEAU2@@Z @ 0x180221294 (-InterpolateColors@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@0MMMPEAU2@@Z.c)
 *     ?IsPositionLessThan@CGradientTextureGenerator@@CAHMM@Z @ 0x180221334 (-IsPositionLessThan@CGradientTextureGenerator@@CAHMM@Z.c)
 *     ?IsPositionLessThanOrEqual@CGradientTextureGenerator@@CAHMM@Z @ 0x180221368 (-IsPositionLessThanOrEqual@CGradientTextureGenerator@@CAHMM@Z.c)
 */

void __fastcall CGradientTextureGenerator::SetFirstStop(float **a1, _DWORD *a2)
{
  __int64 v3; // rcx
  _OWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  _OWORD *v7; // r11
  __int64 v8; // r8
  float *v9; // rcx
  __int64 v10; // rcx
  const struct _D3DCOLORVALUE *v11; // rdx
  float v12; // xmm0_4
  __int64 v13; // r8
  float *v14; // rax
  float v15; // xmm1_4
  __int128 v16; // xmm0
  int v17; // r8d
  _OWORD *v18; // r11
  __int64 v19; // rdx
  int v20; // eax
  struct _D3DCOLORVALUE v21; // [rsp+30h] [rbp-18h] BYREF

  if ( !CGradientTextureGenerator::IsPositionLessThanOrEqual(**a1, 0.0) )
  {
    *(_DWORD *)(v3 + 24) = v5 + 1;
    if ( (_DWORD)v5 )
    {
      v19 = v6 + 20 * v5;
      do
      {
        LODWORD(v5) = v5 - 1;
        v20 = *(_DWORD *)(v6 + 20LL * (unsigned int)v5 + 16);
        *(_OWORD *)v19 = *(_OWORD *)(v6 + 20LL * (unsigned int)v5);
        *(_DWORD *)(v19 + 16) = v20;
        v19 -= 20LL;
      }
      while ( (_DWORD)v5 );
    }
    LODWORD(v5) = 1;
    *v4 = *(_OWORD *)(v6 + 4);
    goto LABEL_19;
  }
  v8 = 0LL;
  if ( (_DWORD)v5 )
  {
    v9 = (float *)v6;
    do
    {
      if ( !CGradientTextureGenerator::IsPositionLessThan(*v9, 0.0) )
        break;
      v8 = (unsigned int)(v8 + 1);
      v9 = (float *)(v10 + 20);
    }
    while ( (unsigned int)v8 < (unsigned int)v5 );
  }
  if ( (_DWORD)v8 == (_DWORD)v5 )
  {
    *(_DWORD *)v6 = 0;
    *(_OWORD *)(v6 + 4) = *(_OWORD *)(v6 + 20LL * (unsigned int)(v5 - 1) + 4);
    *v7 = *(_OWORD *)(v6 + 20LL * (unsigned int)(v5 - 1) + 4);
    goto LABEL_20;
  }
  v11 = (const struct _D3DCOLORVALUE *)(v6 + 4 + 20 * v8);
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v6 + 20 * v8) - 0.0)) & _xmm);
  if ( v12 > 0.0000011920929 )
  {
    CGradientTextureGenerator::InterpolateColors(
      (const struct _D3DCOLORVALUE *)(v6 + 4 * (5LL * (unsigned int)(v8 - 1) + 1)),
      v11,
      0.0,
      *(float *)(v6 + 20 * v8) - *(float *)(v6 + 20LL * (unsigned int)(v8 - 1)),
      *(float *)(v6 + 20LL * (unsigned int)(v8 - 1)),
      &v21);
    v16 = *(__int128 *)&v21.r;
    LODWORD(v5) = v17;
    *(struct _D3DCOLORVALUE *)(v6 + 4) = *(struct _D3DCOLORVALUE *)&v21.r;
    *v18 = v16;
LABEL_19:
    *(_DWORD *)v6 = 0;
    goto LABEL_20;
  }
  v13 = (unsigned int)(v8 + 1);
  *v7 = *(_OWORD *)&v11->r;
  if ( (unsigned int)v13 < (unsigned int)v5 )
  {
    v14 = (float *)(v6 + 20 * v13);
    do
    {
      v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*v14 - 0.0)) & _xmm);
      if ( v15 > 0.0000011920929 )
        break;
      LODWORD(v13) = v13 + 1;
      v14 += 5;
    }
    while ( (unsigned int)v13 < (unsigned int)v5 );
  }
  *(_DWORD *)v6 = 0;
  LODWORD(v5) = v13;
  *(_OWORD *)(v6 + 4) = *(_OWORD *)(v6 + 20LL * (unsigned int)(v13 - 1) + 4);
LABEL_20:
  *a2 = v5;
}
