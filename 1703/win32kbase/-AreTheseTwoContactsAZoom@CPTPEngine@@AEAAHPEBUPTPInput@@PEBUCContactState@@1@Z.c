/*
 * XREFs of ?AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C0132F2C
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C01358D8 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 * Callees:
 *     ?ndotprod@@YA_NHHHHPEAN@Z @ 0x1C0139000 (-ndotprod@@YA_NHHHHPEAN@Z.c)
 */

__int64 __fastcall CPTPEngine::AreTheseTwoContactsAZoom(
        CPTPEngine *this,
        const struct PTPInput *a2,
        const struct CContactState *a3,
        const struct CContactState *a4)
{
  __int64 v5; // rcx
  int v7; // r15d
  int v8; // r11d
  int v9; // ebp
  int v10; // r14d
  int v11; // esi
  int v12; // ebp
  unsigned __int64 v13; // r10
  int v14; // r9d
  unsigned __int64 v15; // r10
  int v16; // ebx
  int v17; // r14d
  unsigned int v18; // edi
  double v19; // xmm1_8
  double v21; // [rsp+60h] [rbp+8h] BYREF
  double v22; // [rsp+68h] [rbp+10h] BYREF

  v5 = *((unsigned int *)this + 94);
  v7 = *(_QWORD *)((char *)a3 + 20) - *((_DWORD *)a3 + 11);
  v8 = (unsigned __int64)(v5 * (*(_QWORD *)a2 - *((_QWORD *)a3 + 16))) / *((_QWORD *)this + 12);
  v9 = *((_DWORD *)a4 + 11);
  v10 = *((_DWORD *)a4 + 12);
  v11 = *(_QWORD *)((char *)a4 + 20) - v9;
  v12 = v9 - *((_DWORD *)a3 + 11);
  v13 = v5 * (*(_QWORD *)a2 - *((_QWORD *)a4 + 16));
  v14 = HIDWORD(*(_QWORD *)((char *)a3 + 20)) - *((_DWORD *)a3 + 12);
  v15 = v13 / *((_QWORD *)this + 12);
  v16 = HIDWORD(*(_QWORD *)((char *)a4 + 20)) - v10;
  v17 = v10 - *((_DWORD *)a3 + 12);
  if ( v7 * v7 + v14 * v14 < v8 * v8 || v11 * v11 + v16 * v16 < (int)v15 * (int)v15 )
    return 0LL;
  v18 = 0;
  if ( ndotprod(v12, v17, v7, v14, &v21) && ndotprod(v12, v17, v11, v16, &v22) )
  {
    v19 = *((double *)this + 386);
    if ( COERCE_DOUBLE(*(_QWORD *)&v21 & _xmm) >= v19 && COERCE_DOUBLE(*(_QWORD *)&v22 & _xmm) >= v19 )
      return v21 > 0.0 != v22 > 0.0;
  }
  return v18;
}
