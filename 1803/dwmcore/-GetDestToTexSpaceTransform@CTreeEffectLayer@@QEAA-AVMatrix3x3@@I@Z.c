/*
 * XREFs of ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x180009A40
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x180019290 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180019928 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z @ 0x1800783E0 (-GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18009520C (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180095264 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

float *__fastcall CTreeEffectLayer::GetDestToTexSpaceTransform(__int64 a1, float *a2, unsigned int a3)
{
  CHwTextureRenderTarget *v5; // rcx
  float v7; // xmm9_4
  float v8; // xmm10_4
  __int64 (__fastcall *v9)(CHwTextureRenderTarget *__hidden, struct CD3DTexture **); // rax
  int BitmapTexture; // eax
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  __int64 v15; // rax
  int v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  int v19; // xmm4_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  struct CD3DTexture *v23; // [rsp+28h] [rbp-79h] BYREF
  _BYTE v24[24]; // [rsp+30h] [rbp-71h] BYREF
  float v25; // [rsp+48h] [rbp-59h] BYREF
  int v26; // [rsp+4Ch] [rbp-55h]
  int v27; // [rsp+50h] [rbp-51h]
  float v28; // [rsp+54h] [rbp-4Dh]
  float v29; // [rsp+58h] [rbp-49h]
  float v30; // [rsp+5Ch] [rbp-45h]
  __int128 v31; // [rsp+60h] [rbp-41h] BYREF
  __int64 v32; // [rsp+70h] [rbp-31h]
  __int128 v33; // [rsp+78h] [rbp-29h] BYREF
  float v34; // [rsp+88h] [rbp-19h]
  float v35; // [rsp+8Ch] [rbp-15h]

  v23 = 0LL;
  v5 = *(CHwTextureRenderTarget **)(a1 + 8);
  v7 = 0.0;
  v8 = 0.0;
  v9 = *(__int64 (__fastcall **)(CHwTextureRenderTarget *__hidden, struct CD3DTexture **))(*(_QWORD *)v5 + 240LL);
  if ( v9 == CHwTextureRenderTarget::GetBitmapTexture )
    BitmapTexture = CHwTextureRenderTarget::GetBitmapTexture(v5, &v23);
  else
    BitmapTexture = v9(v5, &v23);
  if ( BitmapTexture >= 0 )
  {
    v7 = (float)*((int *)v23 + 32);
    v8 = (float)*((int *)v23 + 33);
  }
  v11 = (float)*(int *)(a1 + 16);
  v12 = (float)*(int *)(a1 + 20);
  v13 = (float)(*(float *)(a1 + 188) - v11) * *(float *)(a1 + 272);
  v14 = (float)(*(float *)(a1 + 192) - v12) * *(float *)(a1 + 276);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 248) + 536LL) )
  {
    v13 = *(float *)(a1 + 220) - v11;
    v14 = *(float *)(a1 + 224) - v12;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 240) + 96LL) + 24LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 240) + 96LL),
          a3);
  v31 = *(_OWORD *)v15;
  v32 = *(_QWORD *)(v15 + 16);
  if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v31) )
  {
    D2D1::Matrix3x2F::Invert((D2D1::Matrix3x2F *)&v31);
    v13 = v13 + *(float *)&v32;
    v14 = v14 + *((float *)&v32 + 1);
    v32 = 0LL;
  }
  v26 = 0;
  v27 = 0;
  v33 = _xmm;
  v25 = 1.0 / v7;
  v28 = 1.0 / v8;
  v29 = 0.0 - (float)((float)(1.0 / v7) * 0.0);
  v34 = v13 / v7;
  v35 = v14 / v8;
  v30 = 0.0 - (float)((float)(1.0 / v8) * 0.0);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)v24,
    (const struct D2D1::Matrix3x2F *)&v25,
    (const struct D2D1::Matrix3x2F *)&v31);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v25,
    (const struct D2D1::Matrix3x2F *)v24,
    (const struct D2D1::Matrix3x2F *)&v33);
  v16 = v27;
  v17 = v28;
  v18 = v25;
  v19 = v26;
  a2[2] = 0.0;
  a2[5] = 0.0;
  *((_DWORD *)a2 + 3) = v16;
  v20 = v29;
  a2[4] = v17;
  v21 = v30;
  a2[6] = v20;
  a2[7] = v21;
  *a2 = v18;
  *((_DWORD *)a2 + 1) = v19;
  a2[8] = 1.0;
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v23);
  return a2;
}
