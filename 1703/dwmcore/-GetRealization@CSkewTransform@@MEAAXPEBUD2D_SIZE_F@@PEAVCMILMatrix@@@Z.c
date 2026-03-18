/*
 * XREFs of ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180022AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x1800121E8 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 *     fmod_0 @ 0x1800D5372 (fmod_0.c)
 *     tan_0 @ 0x1800D53C6 (tan_0.c)
 */

void __fastcall CSkewTransform::GetRealization(
        CSkewTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  double v5; // xmm0_8
  float v6; // xmm8_4
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm5_8
  double v10; // xmm4_8
  float v11; // xmm1_4
  CMILMatrix *v12; // rcx
  float v13; // xmm4_4
  float v14; // xmm5_4

  v5 = fmod_0(*((double *)this + 19), 360.0);
  v6 = tan_0(v5 * 0.01745329238474369);
  v7 = fmod_0(*((double *)this + 20), 360.0);
  v8 = tan_0(v7 * 0.01745329238474369);
  v9 = *((double *)this + 21);
  v10 = *((double *)this + 22);
  *(_DWORD *)a3 = 1065353216;
  v11 = v8;
  *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *(_QWORD *)((char *)a3 + 60) = 1065353216LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)((char *)a3 + 28) = 0LL;
  *((_DWORD *)a3 + 9) = 0;
  *((_QWORD *)a3 + 6) = 0LL;
  *((_DWORD *)a3 + 14) = 0;
  *((float *)a3 + 1) = v11;
  *((float *)a3 + 4) = v6;
  CMILMatrix::PrependTranslate(
    a3,
    COERCE_FLOAT(COERCE_UNSIGNED_INT(v9) ^ _xmm),
    COERCE_FLOAT(COERCE_UNSIGNED_INT(v10) ^ _xmm));
  CMILMatrix::Translate(v12, v14, v13);
}
