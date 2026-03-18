/*
 * XREFs of ?Reset@CVector3ForceEvaluator@@QEAAXUD2DVector3@@0PEAUIAccelerator@@11@Z @ 0x180193A84
 * Callers:
 *     ?Update@CVector3Force@@QEAA?AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z @ 0x180193720 (-Update@CVector3Force@@QEAA-AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z @ 0x18019332C (-Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z.c)
 */

char __fastcall CVector3ForceEvaluator::Reset(
        _BYTE *a1,
        float *a2,
        float *a3,
        struct IAccelerator *a4,
        struct IAccelerator *a5,
        struct IAccelerator *a6)
{
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  char result; // al
  int v16; // [rsp+30h] [rbp-20h] BYREF
  float v17; // [rsp+34h] [rbp-1Ch]
  float v18; // [rsp+38h] [rbp-18h]

  v6 = *a3;
  v7 = *a2;
  v16 = 2;
  v17 = 0.0;
  v18 = 0.0;
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)a1, v7, v6, a4, (const struct ForceThreshold *)&v16);
  v11 = a3[1];
  v12 = a2[1];
  v17 = 0.0;
  v18 = 0.0;
  v16 = 2;
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)(a1 + 68), v12, v11, a5, (const struct ForceThreshold *)&v16);
  v13 = a3[2];
  v14 = a2[2];
  v16 = 2;
  v17 = 0.0;
  v18 = 0.0;
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)(a1 + 136), v14, v13, a6, (const struct ForceThreshold *)&v16);
  result = -3;
  a1[64] &= ~2u;
  a1[132] &= ~2u;
  a1[200] &= ~2u;
  return result;
}
