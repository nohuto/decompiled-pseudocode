/*
 * XREFs of ?GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180022A60
 * Callers:
 *     <none>
 * Callees:
 *     fmod_0 @ 0x1800D5372 (fmod_0.c)
 */

void __fastcall CRotateTransform::GetRealization(
        CRotateTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v4; // xmm7_4
  float v5; // xmm6_4
  float v6; // xmm1_4

  v4 = *((double *)this + 20);
  v5 = *((double *)this + 21);
  v6 = fmod_0(*((double *)this + 19), 360.0) * 0.01745329238474369;
  CMILMatrix::Set2DRotation(a3, v6, v4, v5);
}
