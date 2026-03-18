/*
 * XREFs of ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001BEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x18000F1E8 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 *     _o_fmod_0 @ 0x1800DB78A (_o_fmod_0.c)
 *     _o_tan_0 @ 0x1800DB7AE (_o_tan_0.c)
 */

void __fastcall CSkewTransform::GetRealization(
        CSkewTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  double v5; // xmm0_8
  float v6; // xmm8_4
  __int64 v7; // rdx
  __int64 v8; // rcx
  double v9; // xmm0_8
  double v10; // xmm0_8
  double v11; // xmm5_8
  double v12; // xmm4_8
  float v13; // xmm1_4
  CMILMatrix *v14; // rcx
  float v15; // xmm4_4
  float v16; // xmm5_4

  v5 = o_fmod_0(this, a2);
  v6 = o_tan_0(v5 * 0.01745329238474369);
  v9 = o_fmod_0(v8, v7);
  v10 = o_tan_0(v9 * 0.01745329238474369);
  v11 = *((double *)this + 21);
  v12 = *((double *)this + 22);
  *(_DWORD *)a3 = 1065353216;
  v13 = v10;
  *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *(_QWORD *)((char *)a3 + 60) = 1065353216LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((float *)a3 + 1) = v13;
  *(_QWORD *)((char *)a3 + 28) = 0LL;
  *((_DWORD *)a3 + 9) = 0;
  *((_QWORD *)a3 + 6) = 0LL;
  *((_DWORD *)a3 + 14) = 0;
  *((float *)a3 + 4) = v6;
  CMILMatrix::PrependTranslate(
    a3,
    COERCE_FLOAT(COERCE_UNSIGNED_INT(v11) ^ _xmm),
    COERCE_FLOAT(COERCE_UNSIGNED_INT(v12) ^ _xmm));
  CMILMatrix::Translate(v14, v16, v15);
}
