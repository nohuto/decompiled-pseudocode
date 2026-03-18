/*
 * XREFs of ?Integrate@CScalarForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x18019315C
 * Callers:
 *     ?AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x180192DA8 (-AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Evaluate@CScalarForceEvaluator@@AEAA?AUDerivative@@AEAUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x1801930AC (-Evaluate@CScalarForceEvaluator@@AEAA-AUDerivative@@AEAUIntegrationState@@AEAU2@PEAUIAccelerator.c)
 */

__int64 __fastcall CScalarForceEvaluator::Integrate(__int64 a1, __int64 a2, float *a3, __int64 *a4, int a5, float a6)
{
  float v8; // xmm6_4
  int v9; // xmm7_4
  float v12; // xmm0_4
  float v13; // xmm8_4
  float v14; // xmm6_4
  float *v15; // rax
  float *v16; // rax
  float *v17; // rax
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  __int64 result; // rax
  __int64 v22; // [rsp+28h] [rbp-48h]
  __int64 v23; // [rsp+28h] [rbp-48h]
  __int64 v24; // [rsp+28h] [rbp-48h]
  float v25; // [rsp+A0h] [rbp+30h] BYREF
  float v26; // [rsp+A4h] [rbp+34h]
  __int64 v27; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+40h] BYREF
  float v29; // [rsp+B8h] [rbp+48h] BYREF

  v8 = a3[2];
  v9 = a5;
  v12 = (*(float (__fastcall **)(__int64 *, float *))(*a4 + 16))(a4, a3);
  v13 = a6;
  v25 = v8;
  v26 = v12;
  v14 = a6 * 0.5;
  LODWORD(v22) = v9;
  v15 = CScalarForceEvaluator::Evaluate(a1, (float *)&v27, a3, &v25, a4, v22, a6 * 0.5);
  LODWORD(v23) = v9;
  v28 = *(_QWORD *)v15;
  v16 = CScalarForceEvaluator::Evaluate(a1, (float *)&v27, a3, (float *)&v28, a4, v23, v14);
  LODWORD(v24) = v9;
  v27 = *(_QWORD *)v16;
  v17 = CScalarForceEvaluator::Evaluate(a1, &v29, a3, (float *)&v27, a4, v24, v13);
  v18 = *(float *)&v27 + *(float *)&v28;
  v19 = v17[1];
  *(float *)a2 = v19;
  v20 = (float)((float)(v18 + v18) + v25) + *v17;
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 60);
  result = a2;
  *(float *)(a2 + 4) = (float)((float)(v20 * 0.16666667) * v13) + a3[1];
  *(float *)(a2 + 8) = (float)((float)((float)((float)((float)((float)(*((float *)&v27 + 1) + *((float *)&v28 + 1))
                                                             + (float)(*((float *)&v27 + 1) + *((float *)&v28 + 1)))
                                                     + v26)
                                             + v19)
                                     * 0.16666667)
                             * v13)
                     + a3[2];
  return result;
}
