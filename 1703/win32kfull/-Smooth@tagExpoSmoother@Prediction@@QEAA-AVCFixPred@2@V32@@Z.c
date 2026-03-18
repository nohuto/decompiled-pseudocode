/*
 * XREFs of ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x1C01A5C44
 * Callers:
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01A5CBC (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 * Callees:
 *     ?FastMul64by64@@YA_J_J0@Z @ 0x1C01A48E8 (-FastMul64by64@@YA_J_J0@Z.c)
 */

_QWORD *__fastcall Prediction::tagExpoSmoother::Smooth(__int64 *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rdi
  char *v4; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = (char *)(a1 + 1);
  v7 = FastMul64by64(a1[1], 0x100000000LL - *a1);
  v8 = FastMul64by64(*a3, v3) + v7;
  if ( v4 != &v10 )
    *(_QWORD *)v4 = v8;
  *a2 = *(_QWORD *)v4;
  return a2;
}
