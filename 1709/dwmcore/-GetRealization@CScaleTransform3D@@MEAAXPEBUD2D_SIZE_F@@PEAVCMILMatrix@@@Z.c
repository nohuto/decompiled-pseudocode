/*
 * XREFs of ?GetRealization@CScaleTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180182A80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800593F0 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

void __fastcall CScaleTransform3D::GetRealization(
        CScaleTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v3; // xmm4_4
  float v4; // xmm5_4

  v3 = *((double *)this + 23);
  v4 = *((double *)this + 22);
  CMILMatrix::SetScale(
    a3,
    *((double *)this + 19),
    *((double *)this + 20),
    *((double *)this + 21),
    v4,
    v3,
    *((double *)this + 24));
}
