/*
 * XREFs of ?Integrate@CForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x180188EB0
 * Callers:
 *     ?AdvanceToTime@CForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x180188D20 (-AdvanceToTime@CForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Evaluate@CForceEvaluator@@AEAA?AUDerivative@@AEAUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x180188E24 (-Evaluate@CForceEvaluator@@AEAA-AUDerivative@@AEAUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z.c)
 */

__int64 __fastcall CForceEvaluator::Integrate(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        float a6)
{
  unsigned int v7; // xmm6_4
  int v8; // xmm7_4
  unsigned int v11; // xmm0_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  __int64 v14; // rcx
  float *v15; // rax
  __int64 v16; // rcx
  float *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // xmm0_8
  __int64 result; // rax
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm2_4
  __int64 v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+A0h] [rbp+28h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+30h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+40h] BYREF

  v27 = a1;
  v7 = *(_DWORD *)(a3 + 8);
  v8 = a5;
  *(float *)&v11 = (*(float (__fastcall **)(__int64 *, __int64))(*a4 + 16))(a4, a3);
  v12 = a6;
  v27 = __PAIR64__(v11, v7);
  v13 = a6 * 0.5;
  LODWORD(v24) = v8;
  v15 = CForceEvaluator::Evaluate(v14, (float *)&v28, a3, (float *)&v27, a4, v24, a6 * 0.5);
  LODWORD(v25) = v8;
  v29 = *(_QWORD *)v15;
  v17 = CForceEvaluator::Evaluate(v16, (float *)&v28, a3, (float *)&v29, a4, v25, v13);
  LODWORD(v26) = v8;
  v28 = *(_QWORD *)v17;
  v19 = *(_QWORD *)CForceEvaluator::Evaluate(v18, (float *)&v30, a3, (float *)&v28, a4, v26, v12);
  result = a2;
  v21 = (float)(*(float *)&v28 + *(float *)&v29) + (float)(*(float *)&v28 + *(float *)&v29);
  v30 = v19;
  v22 = (float)(*((float *)&v28 + 1) + *((float *)&v29 + 1)) + (float)(*((float *)&v28 + 1) + *((float *)&v29 + 1));
  *(_DWORD *)a2 = HIDWORD(v19);
  v23 = (float)((float)((float)((float)(v22 + *((float *)&v27 + 1)) + *((float *)&v19 + 1)) * 0.16666667) * v12)
      + *(float *)(a3 + 8);
  *(float *)(a2 + 4) = (float)((float)((float)((float)(v21 + *(float *)&v27) + *(float *)&v30) * 0.16666667) * v12)
                     + *(float *)(a3 + 4);
  *(float *)(a2 + 8) = v23;
  return result;
}
