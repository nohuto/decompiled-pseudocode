/*
 * XREFs of ?Update@CVector3Force@@QEAA?AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z @ 0x180193720
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801728A0 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     IsWithinThresholdF @ 0x180193664 (IsWithinThresholdF.c)
 *     ?AdvanceToTime@CVector3ForceEvaluator@@QEAA?AUD2DVector3@@MPEAUIAccelerator@@00@Z @ 0x180193918 (-AdvanceToTime@CVector3ForceEvaluator@@QEAA-AUD2DVector3@@MPEAUIAccelerator@@00@Z.c)
 *     ?Reset@CVector3ForceEvaluator@@QEAAXUD2DVector3@@0PEAUIAccelerator@@11@Z @ 0x180193A84 (-Reset@CVector3ForceEvaluator@@QEAAXUD2DVector3@@0PEAUIAccelerator@@11@Z.c)
 */

float *__fastcall CVector3Force::Update(__int64 a1, float *a2, __int64 a3)
{
  float v3; // xmm2_4
  __int64 v6; // xmm0_8
  __int64 v7; // r9
  __int64 v8; // rax
  float v9; // xmm1_4
  float v10; // xmm6_4
  __int64 v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+38h] [rbp-30h]
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  int v16; // [rsp+48h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 352) & 1) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 328);
    v7 = *(_QWORD *)(a1 + 288);
    v14 = *(_DWORD *)(a1 + 336);
    v16 = *(_DWORD *)(a1 + 324);
    v12 = *(_QWORD *)(a1 + 304);
    v8 = *(_QWORD *)(a1 + 296);
    v13 = v6;
    v15 = *(_QWORD *)(a1 + 316);
    ((void (__fastcall *)(__int64, __int64 *, __int64 *, __int64, __int64, __int64))CVector3ForceEvaluator::Reset)(
      a1 + 16,
      &v15,
      &v13,
      v7,
      v8,
      v12);
    *(_BYTE *)(a1 + 352) |= 1u;
  }
  CVector3ForceEvaluator::AdvanceToTime(
    a1 + 16,
    a2,
    a3,
    *(_QWORD *)(a1 + 288),
    *(_QWORD *)(a1 + 296),
    *(_QWORD *)(a1 + 304));
  if ( (*(_BYTE *)(a1 + 352) & 0xA) == 0xA )
  {
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v3 - *(float *)(a1 + 312))) & _xmm);
    if ( v9 >= 0.0000011920929 )
    {
      v10 = *(float *)(a1 + 356);
      if ( IsWithinThresholdF(*a2, *(float *)(a1 + 340), v10)
        && IsWithinThresholdF(a2[1], *(float *)(a1 + 344), v10)
        && IsWithinThresholdF(a2[2], *(float *)(a1 + 348), v10) )
      {
        *(_QWORD *)a2 = *(_QWORD *)(a1 + 340);
        a2[2] = *(float *)(a1 + 348);
        *(_BYTE *)(a1 + 352) |= 4u;
      }
    }
  }
  return a2;
}
