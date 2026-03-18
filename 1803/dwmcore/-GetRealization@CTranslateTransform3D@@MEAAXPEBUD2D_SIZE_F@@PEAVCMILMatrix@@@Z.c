/*
 * XREFs of ?GetRealization@CTranslateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801B6EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTranslateTransform3D::GetRealization(
        CTranslateTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  CMILMatrix::SetTranslation(a3, *((double *)this + 19), *((double *)this + 20), *((double *)this + 21));
}
