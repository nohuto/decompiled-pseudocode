/*
 * XREFs of ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x180014DC8
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180015208 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z @ 0x1800168A0 (-GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x18001ED6C (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180041464 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeEffectLayer::GetDestToTexSpaceTransform(__int64 a1, __int64 a2, unsigned int a3)
{
  CHwTextureRenderTarget *v5; // rcx
  float v7; // xmm6_4
  float v8; // xmm7_4
  __int64 (__fastcall *v9)(CHwTextureRenderTarget *__hidden, struct CD3DTexture **); // rax
  int BitmapTexture; // eax
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm13_4
  float v14; // xmm14_4
  __int64 v15; // rax
  float v16; // xmm9_4
  float v17; // xmm3_4
  float v18; // xmm5_4
  float v19; // xmm12_4
  float v20; // xmm2_4
  float v21; // xmm8_4
  float v22; // xmm10_4
  float v23; // xmm5_4
  float v24; // xmm14_4
  float v25; // xmm11_4
  float v26; // xmm13_4
  float v27; // xmm6_4
  float v28; // xmm7_4
  float v29; // xmm10_4
  float v30; // xmm5_4
  float v31; // xmm9_4
  float v32; // xmm9_4
  float v33; // xmm12_4
  struct CD3DTexture *v35; // [rsp+28h] [rbp-89h] BYREF
  struct CD3DTexture *v36[2]; // [rsp+30h] [rbp-81h] BYREF
  __int64 v37; // [rsp+40h] [rbp-71h]

  v35 = 0LL;
  v5 = *(CHwTextureRenderTarget **)(a1 + 8);
  v7 = 0.0;
  v8 = 0.0;
  v9 = *(__int64 (__fastcall **)(CHwTextureRenderTarget *__hidden, struct CD3DTexture **))(*(_QWORD *)v5 + 192LL);
  if ( v9 == CHwTextureRenderTarget::GetBitmapTexture )
    BitmapTexture = CHwTextureRenderTarget::GetBitmapTexture(v5, &v35);
  else
    BitmapTexture = v9(v5, &v35);
  if ( BitmapTexture >= 0 )
  {
    v7 = (float)*((int *)v35 + 34);
    v8 = (float)*((int *)v35 + 35);
  }
  v11 = (float)*(int *)(a1 + 16);
  v12 = (float)*(int *)(a1 + 20);
  v13 = (float)(*(float *)(a1 + 184) - v11) * *(float *)(a1 + 264);
  v14 = (float)(*(float *)(a1 + 188) - v12) * *(float *)(a1 + 268);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 240) + 504LL) )
  {
    v13 = *(float *)(a1 + 216) - v11;
    v14 = *(float *)(a1 + 220) - v12;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 232) + 104LL) + 24LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 232) + 104LL),
          a3);
  *(_OWORD *)v36 = *(_OWORD *)v15;
  v37 = *(_QWORD *)(v15 + 16);
  if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)v36) )
  {
    D2D1::Matrix3x2F::Invert((D2D1::Matrix3x2F *)v36);
    v13 = v13 + *(float *)&v37;
    v14 = v14 + *((float *)&v37 + 1);
    v37 = 0LL;
  }
  v16 = *((float *)&v36[1] + 1);
  v17 = *(float *)v36;
  v18 = *((float *)&v36[1] + 1);
  v19 = *(float *)&v36[1];
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  v20 = 1.0 / v7;
  *(_DWORD *)(a2 + 32) = 1065353216;
  v21 = 0.0 - (float)((float)(1.0 / v7) * 0.0);
  v22 = v19 * (float)(1.0 / v8);
  v23 = v18 * (float)(1.0 / v8);
  v24 = v14 / v8;
  v25 = (float)(v17 * (float)(1.0 / v7)) + (float)(v19 * 0.0);
  v26 = v13 / v7;
  v27 = 0.0 - (float)((float)(1.0 / v8) * 0.0);
  v28 = (float)(*((float *)v36 + 1) * v20) + (float)(v16 * 0.0);
  v29 = v22 + (float)(v17 * 0.0);
  v30 = v23 + (float)(*((float *)v36 + 1) * 0.0);
  v31 = (float)(v16 * v27) + (float)(*((float *)v36 + 1) * v21);
  *(float *)a2 = (float)(v28 * 0.0) + v25;
  v32 = v31 + *((float *)&v37 + 1);
  *(float *)(a2 + 4) = (float)(v25 * 0.0) + v28;
  v33 = (float)((float)(v19 * v27) + (float)(v21 * v17)) + *(float *)&v37;
  *(float *)(a2 + 12) = (float)(v30 * 0.0) + v29;
  *(float *)(a2 + 16) = (float)(v29 * 0.0) + v30;
  *(float *)(a2 + 24) = (float)((float)(v32 * 0.0) + v33) + v26;
  *(float *)(a2 + 28) = (float)((float)(v33 * 0.0) + v32) + v24;
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v35);
  return a2;
}
