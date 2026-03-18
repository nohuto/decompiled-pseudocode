/*
 * XREFs of ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800296C0
 * Callers:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18002B258 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18009AEAC (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

void __fastcall CMatrixTransform::GetRealization(
        CMatrixTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v3; // xmm4_4
  float v4; // xmm5_4

  v3 = *((double *)this + 23);
  v4 = *((double *)this + 22);
  CMILMatrix::Set2DAffineMatrix(
    a3,
    *((double *)this + 19),
    *((double *)this + 20),
    *((double *)this + 21),
    v4,
    v3,
    *((double *)this + 24));
}
