/*
 * XREFs of ?GetLocalToLightAsCameraMatrix@CProjectedShadow@@AEAA?AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@@Z @ 0x1801B5528
 * Callers:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAA_NPEBVCDrawingContext@@@Z @ 0x1801B5EDC (-IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAA_NPEBVCDrawingContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x18013F044 (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     ?GetLightPosition@CProjectedShadow@@CA?AUD2D_VECTOR_3F@@PEBVCDrawingContext@@PEBVCCompositionLight@@PEAVCVisual@@@Z @ 0x1801B5348 (-GetLightPosition@CProjectedShadow@@CA-AUD2D_VECTOR_3F@@PEBVCDrawingContext@@PEBVCCompositionLig.c)
 *     ?GetVisualToAnotherVisual@CProjectedShadow@@CA?AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@1@Z @ 0x1801B5DC8 (-GetVisualToAnotherVisual@CProjectedShadow@@CA-AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@1.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x1801C7500 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 */

__int64 __fastcall CProjectedShadow::GetLocalToLightAsCameraMatrix(
        __int64 a1,
        __int64 a2,
        const struct CDrawingContext *a3,
        struct CVisual *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  struct D2D_VECTOR_3F *LightPosition; // rax
  __int64 v11; // xmm0_8
  float v12; // xmm14_4
  float v13; // xmm10_4
  float v14; // xmm15_4
  float v15; // xmm12_4
  float v16; // xmm13_4
  float v17; // xmm11_4
  float v18; // xmm7_4
  float v19; // xmm2_4
  float v20; // xmm9_4
  float v21; // xmm8_4
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  struct D2D_VECTOR_3F v26; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-D0h]
  float v28; // [rsp+40h] [rbp-C8h]
  struct D2D_VECTOR_4F v29; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_VECTOR_4F v30; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v31[240]; // [rsp+68h] [rbp-A0h] BYREF

  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 80LL) + 168LL))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 80LL));
  CProjectedShadow::GetVisualToAnotherVisual(v31, a3, a4, v8);
  v9 = *(_QWORD *)(a1 + 88);
  v30 = (struct D2D_VECTOR_4F)_xmm;
  LightPosition = CProjectedShadow::GetLightPosition(&v26, a3, *(const struct CCompositionLight **)(v9 + 80), a4);
  v11 = *(_QWORD *)&LightPosition->x;
  *(FLOAT *)&LightPosition = LightPosition->z;
  v27 = v11;
  v28 = *(float *)&LightPosition;
  CMILMatrix::Transform4DVector((CMILMatrix *)v31, &v29, &v30);
  v12 = *((float *)&v27 + 1);
  v13 = v29.y - *((float *)&v27 + 1);
  v14 = *(float *)&v27;
  v15 = v28;
  v16 = v29.x - *(float *)&v27;
  v17 = v29.z - v28;
  v18 = (float)(v29.x - *(float *)&v27) - (float)((float)(v29.y - *((float *)&v27 + 1)) * 0.0);
  v19 = *((float *)&v27 + 1);
  v20 = (float)((float)(v29.y - *((float *)&v27 + 1)) * 0.0) - (float)(v29.z - v28);
  v21 = (float)((float)(v29.z - v28) * 0.0) - (float)((float)(v29.x - *(float *)&v27) * 0.0);
  *(float *)(a2 + 8) = v18;
  *(float *)a2 = v20;
  *(float *)(a2 + 4) = v21;
  v22 = (float)(v21 * v17) - (float)(v18 * v13);
  v23 = (float)(v18 * v16) - (float)(v20 * v17);
  v24 = (float)(v20 * v13) - (float)(v21 * v16);
  *(float *)(a2 + 20) = v23;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(float *)(a2 + 16) = v22;
  *(_QWORD *)(a2 + 60) = 1065353216LL;
  *(_DWORD *)(a2 + 32) = LODWORD(v16) ^ _xmm;
  *(float *)(a2 + 24) = v24;
  *(_DWORD *)(a2 + 12) = COERCE_UNSIGNED_INT((float)((float)(v19 * v21) + (float)(v14 * v20)) + (float)(v15 * v18)) ^ _xmm;
  *(_DWORD *)(a2 + 36) = LODWORD(v13) ^ _xmm;
  *(_DWORD *)(a2 + 40) = LODWORD(v17) ^ _xmm;
  *(_DWORD *)(a2 + 28) = COERCE_UNSIGNED_INT((float)((float)(v23 * v12) + (float)(v22 * v14)) + (float)(v24 * v15)) ^ _xmm;
  *(float *)(a2 + 44) = (float)((float)(v12 * v13) + (float)(v14 * v16)) + (float)(v15 * v17);
  CMILMatrix::Transpose((CMILMatrix *)a2);
  return a2;
}
