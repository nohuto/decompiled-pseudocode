/*
 * XREFs of ?GetRealization@CScaleTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800B4E00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800593F0 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

void __fastcall CScaleTransform::GetRealization(
        CScaleTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v3; // xmm3_4
  float v4; // xmm4_4

  v3 = *((double *)this + 22);
  v4 = *((double *)this + 21);
  CMILMatrix::SetScale(a3, *((double *)this + 19), *((double *)this + 20), 1.0, v4, v3, 0.0);
}
