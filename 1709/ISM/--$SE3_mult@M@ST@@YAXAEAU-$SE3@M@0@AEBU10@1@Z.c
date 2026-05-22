/*
 * XREFs of ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x1800C8F90
 * Callers:
 *     Windows::Internal::Holographic::PosePredictionHelpers::InterpolatePoses @ 0x1800AE4F4 (Windows--Internal--Holographic--PosePredictionHelpers--InterpolatePoses.c)
 *     Windows::Internal::Holographic::PosePredictionHelpers::CreatePredictionNode @ 0x1800AEA78 (Windows--Internal--Holographic--PosePredictionHelpers--CreatePredictionNode.c)
 *     ??$SE3_interpolate@M@ST@@YA?AU?$SE3@M@0@AEBU10@0M@Z @ 0x1800C9488 (--$SE3_interpolate@M@ST@@YA-AU-$SE3@M@0@AEBU10@0M@Z.c)
 * Callees:
 *     ST::mult_Ax_3x3_float_ @ 0x1800C9568 (ST--mult_Ax_3x3_float_.c)
 *     ST::mult_Atx_3x3_float_ @ 0x1800C95F0 (ST--mult_Atx_3x3_float_.c)
 */

__int64 __fastcall ST::SE3_mult<float>(__int64 a1, __int64 a2, __int64 a3)
{
  float *v3; // rdx
  float v4; // xmm1_4
  float *v5; // r9
  float v6; // xmm0_4
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  float v15[6]; // [rsp+20h] [rbp-18h] BYREF

  ST::mult_Ax_3x3_float_(v15, a2, a3 + 36);
  v4 = v15[1];
  v5[9] = v15[0] + v3[9];
  v6 = v15[2];
  v5[10] = v4 + v3[10];
  v5[11] = v6 + v3[11];
  v8 = ST::mult_Atx_3x3_float_(v5, v7, v3);
  v11 = ST::mult_Atx_3x3_float_(v9 + 12, v10, v8 + 12);
  return ST::mult_Atx_3x3_float_(v12 + 24, v13, v11 + 24);
}
