/*
 * XREFs of ?SetLastStop@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@IIPEAU_D3DCOLORVALUE@@@Z @ 0x180221844
 * Callers:
 *     ?CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@_NPEAU_D3DCOLORVALUE@@4@Z @ 0x180221150 (-CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV-$DynArr.c)
 * Callees:
 *     ?InterpolateColors@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@0MMMPEAU2@@Z @ 0x180221294 (-InterpolateColors@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@0MMMPEAU2@@Z.c)
 */

void __fastcall CGradientTextureGenerator::SetLastStop(__int64 *a1, unsigned int a2, unsigned int a3, _OWORD *a4)
{
  unsigned int v4; // r11d
  __int64 v5; // r10
  __int64 v6; // r8
  __int64 v7; // rbx
  float v8; // xmm0_4
  __int64 v9; // rdx
  float *v10; // rax
  float v11; // xmm2_4
  __int128 v12; // xmm0
  float v13; // xmm0_4
  __int64 v14; // r8
  __int64 v15; // r10
  struct _D3DCOLORVALUE v16; // [rsp+30h] [rbp-28h] BYREF

  v4 = *((_DWORD *)a1 + 6);
  v5 = *a1;
  v6 = 5LL * a3;
  if ( a2 == v4 )
  {
    *(_DWORD *)(v5 + 4 * v6) = 1065353216;
    *(_OWORD *)(v5 + 4 * v6 + 4) = *(_OWORD *)(v5 + 20LL * (v4 - 1) + 4);
    *a4 = *(_OWORD *)(v5 + 20LL * (v4 - 1) + 4);
  }
  else
  {
    v7 = v5 + 20LL * a2;
    v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)v7 - 1.0)) & _xmm);
    if ( v8 > 0.0000011920929 )
    {
      v13 = *(float *)(v5 + 20LL * (a2 - 1));
      CGradientTextureGenerator::InterpolateColors(
        (const struct _D3DCOLORVALUE *)(v5 + 4 * (5LL * (a2 - 1) + 1)),
        (const struct _D3DCOLORVALUE *)(v7 + 4),
        1.0,
        *(float *)(v5 + 20LL * a2) - v13,
        v13,
        &v16);
      v12 = *(__int128 *)&v16.r;
      *(_DWORD *)(v15 + 4 * v14) = 1065353216;
      *(_OWORD *)(v15 + 4 * v14 + 4) = v12;
    }
    else
    {
      *(_DWORD *)(v5 + 4 * v6) = 1065353216;
      v9 = a2 + 1;
      *(_OWORD *)(v5 + 4 * v6 + 4) = *(_OWORD *)(v7 + 4);
      if ( (unsigned int)v9 < v4 )
      {
        v10 = (float *)(v5 + 20 * v9);
        do
        {
          v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*v10 - 1.0)) & _xmm);
          if ( v11 > 0.0000011920929 )
            break;
          LODWORD(v9) = v9 + 1;
          v10 += 5;
        }
        while ( (unsigned int)v9 < v4 );
      }
      v12 = *(_OWORD *)(v5 + 20LL * (unsigned int)(v9 - 1) + 4);
    }
    *a4 = v12;
  }
}
