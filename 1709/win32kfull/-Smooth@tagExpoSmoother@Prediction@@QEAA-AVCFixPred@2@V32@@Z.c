/*
 * XREFs of ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x1C01C9118
 * Callers:
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01C9284 (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Prediction::tagExpoSmoother::Smooth(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3)
{
  __int64 v3; // rdi
  char *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v9; // rbx
  __int64 v10; // r9
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r9
  int v23; // ebx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  char v27; // [rsp+20h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = (char *)(a1 + 1);
  v5 = a1[1];
  v6 = 0x100000000LL - v3;
  v7 = ((0x100000000LL - v3) ^ v5) >> 63;
  if ( v5 < 0 )
    v5 = -v5;
  if ( v6 < 0 )
    v6 = v3 - 0x100000000LL;
  v9 = (unsigned int)v6 * (unsigned __int64)(unsigned int)v5;
  v10 = (unsigned int)v5;
  v11 = HIDWORD(v5);
  v12 = HIDWORD(v9) + (unsigned int)v6 * HIDWORD(v5);
  v13 = v7 ^ ((unsigned int)(v12 + v10 * HIDWORD(v6)) | ((unsigned __int64)(unsigned int)(((unsigned __int64)((unsigned int)v12 + v10 * HIDWORD(v6)) >> 32)
                                                                                        + v11 * HIDWORD(v6)
                                                                                        + HIDWORD(v12)) << 32));
  v14 = v13 - v7;
  if ( (_DWORD)v9 )
    v14 = v13;
  v15 = *a3;
  v16 = (__int64)(v3 ^ *a3) >> 63;
  if ( (*a3 & 0x8000000000000000uLL) != 0LL )
    v15 = -(__int64)v15;
  if ( v3 < 0 )
    v3 = -v3;
  v17 = (unsigned int)v3;
  v18 = v3;
  v19 = (unsigned int)v3 * (unsigned __int64)(unsigned int)v15;
  v18 >>= 32;
  v20 = (unsigned int)v15 * v18;
  LODWORD(v18) = HIDWORD(v15) * v18;
  v21 = HIDWORD(v19) + v17 * HIDWORD(v15);
  v22 = (unsigned int)v21 + v20;
  v23 = HIDWORD(v21) + v18;
  v24 = (v16 ^ ((unsigned int)v22 | ((unsigned __int64)(unsigned int)(v23 + HIDWORD(v22)) << 32))) - v16;
  if ( (_DWORD)v19 )
    v24 = v16 ^ ((unsigned int)v22 | ((unsigned __int64)(unsigned int)(v23 + HIDWORD(v22)) << 32));
  v25 = v14 + v24;
  if ( v4 != &v27 )
    *(_QWORD *)v4 = v25;
  *a2 = *(_QWORD *)v4;
  return a2;
}
