/*
 * XREFs of ?TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z @ 0x1801CD97C
 * Callers:
 *     ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x1801CD088 (-CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PE.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180095758 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 */

void __fastcall CInteractionContextTransformHelper::TransformDirection(
        const struct D2D1::Matrix3x2F *a1,
        float a2,
        float a3,
        float *a4,
        float *a5)
{
  float *v5; // rcx
  float *v6; // r9
  float v7; // xmm5_4

  if ( D2D1::Matrix3x2F::IsIdentity(a1) )
  {
    *v6 = a2;
    *a5 = a3;
  }
  else
  {
    v7 = (float)((float)((float)(v5[1] * a2) + (float)(v5[3] * a3)) + v5[5])
       - (float)((float)((float)(v5[1] * 0.0) + (float)(v5[3] * 0.0)) + v5[5]);
    *v6 = (float)((float)((float)(*v5 * a2) + (float)(v5[2] * a3)) + v5[4])
        - (float)((float)((float)(*v5 * 0.0) + (float)(v5[2] * 0.0)) + v5[4]);
    *a5 = v7;
  }
}
