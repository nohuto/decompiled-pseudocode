/*
 * XREFs of ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x180080C60
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180081A04 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180095758 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1800957B0 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeEffectLayer::GetDestToTexSpaceTransform(__int64 a1, __int64 a2, unsigned int a3)
{
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm12_4
  float v11; // xmm13_4
  __int64 v12; // rax
  float v13; // xmm15_4
  float v14; // xmm2_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm12_4
  float v20; // xmm13_4
  float v21; // xmm10_4
  float v22; // xmm11_4
  float v23; // xmm5_4
  float v24; // xmm6_4
  float v25; // xmm10_4
  float v26; // xmm8_4
  float v27; // xmm7_4
  float v28; // xmm11_4
  float v29; // xmm6_4
  float v30; // xmm9_4
  __int64 v32; // [rsp+28h] [rbp-89h] BYREF
  __int128 v33; // [rsp+30h] [rbp-81h] BYREF
  __int64 v34; // [rsp+40h] [rbp-71h]

  v32 = 0LL;
  v6 = 0.0;
  v7 = 0.0;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 200LL))(*(_QWORD *)(a1 + 8), &v32) >= 0 )
  {
    v6 = (float)*(int *)(v32 + 128);
    v7 = (float)*(int *)(v32 + 132);
  }
  v8 = (float)*(int *)(a1 + 16);
  v9 = (float)*(int *)(a1 + 20);
  v10 = (float)(*(float *)(a1 + 188) - v8) * *(float *)(a1 + 272);
  v11 = (float)(*(float *)(a1 + 192) - v9) * *(float *)(a1 + 276);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 248) + 528LL) )
  {
    v10 = *(float *)(a1 + 220) - v8;
    v11 = *(float *)(a1 + 224) - v9;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 240) + 104LL) + 24LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 240) + 104LL),
          a3);
  v33 = *(_OWORD *)v12;
  v34 = *(_QWORD *)(v12 + 16);
  if ( D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v33) )
  {
    v13 = *(float *)&v34;
  }
  else
  {
    D2D1::Matrix3x2F::Invert((D2D1::Matrix3x2F *)&v33);
    v10 = v10 + *(float *)&v34;
    v11 = v11 + *((float *)&v34 + 1);
    v13 = 0.0;
    v34 = 0LL;
  }
  v14 = *(float *)&v33;
  v15 = *((float *)&v33 + 2);
  v16 = *((float *)&v33 + 3);
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  v17 = 1.0 / v6;
  *(_DWORD *)(a2 + 32) = 1065353216;
  v18 = 1.0 / v7;
  v19 = v10 / v6;
  v20 = v11 / v7;
  v21 = (float)(1.0 / v6) * v14;
  v22 = 0.0 - (float)((float)(1.0 / v6) * 0.0);
  v23 = 0.0 - (float)((float)(1.0 / v7) * 0.0);
  v24 = v22 * v14;
  v25 = v21 + (float)(v15 * 0.0);
  v26 = (float)(v17 * *((float *)&v33 + 1)) + (float)(v16 * 0.0);
  v27 = (float)((float)(1.0 / v7) * v15) + (float)(v14 * 0.0);
  v28 = (float)((float)(v22 * *((float *)&v33 + 1)) + (float)(v16 * v23)) + *((float *)&v34 + 1);
  v29 = (float)(v24 + (float)(v15 * v23)) + v13;
  v30 = (float)(v18 * v16) + (float)(*((float *)&v33 + 1) * 0.0);
  *(float *)a2 = (float)(v26 * 0.0) + v25;
  *(float *)(a2 + 4) = (float)(v25 * 0.0) + v26;
  *(float *)(a2 + 24) = (float)((float)(v28 * 0.0) + v29) + v19;
  *(float *)(a2 + 12) = (float)(v30 * 0.0) + v27;
  *(float *)(a2 + 28) = (float)((float)(v29 * 0.0) + v28) + v20;
  *(float *)(a2 + 16) = (float)(v27 * 0.0) + v30;
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v32);
  return a2;
}
