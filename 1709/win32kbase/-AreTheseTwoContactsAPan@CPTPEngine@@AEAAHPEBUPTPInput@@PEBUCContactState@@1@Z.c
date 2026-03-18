/*
 * XREFs of ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C0132468
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C0134880 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C01378D0 (-UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z.c)
 * Callees:
 *     ?ndotprod@@YA_NHHHHPEAN@Z @ 0x1C0138328 (-ndotprod@@YA_NHHHHPEAN@Z.c)
 */

__int64 __fastcall CPTPEngine::AreTheseTwoContactsAPan(
        CPTPEngine *this,
        const struct PTPInput *a2,
        const struct CContactState *a3,
        const struct CContactState *a4)
{
  __int64 v5; // r10
  __int64 v6; // r9
  int v8; // edx
  unsigned int v10; // ebx
  int v11; // ecx
  int v12; // r10d
  int v13; // r8d
  int v14; // r9d
  const struct PTPInput *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  v5 = *(_QWORD *)((char *)a3 + 20);
  v6 = *(_QWORD *)((char *)a4 + 20);
  v8 = *(_QWORD *)((char *)a3 + 36) - *(_QWORD *)((char *)a4 + 36);
  if ( (int)((HIDWORD(*(_QWORD *)((char *)a3 + 36)) - HIDWORD(*(_QWORD *)((char *)a4 + 36)))
           * (HIDWORD(*(_QWORD *)((char *)a3 + 36)) - HIDWORD(*(_QWORD *)((char *)a4 + 36)))
           + v8 * v8) > (unsigned __int64)*((unsigned int *)this + 73) )
    return 0LL;
  v10 = 0;
  v11 = v5 - *((_DWORD *)a3 + 9);
  v12 = HIDWORD(v5) - *((_DWORD *)a3 + 10);
  v13 = v6 - *((_DWORD *)a4 + 9);
  v14 = HIDWORD(v6) - *((_DWORD *)a4 + 10);
  if ( !v11 && !v12 )
    return 0LL;
  if ( !v13 && !v14 )
    return 0LL;
  if ( ndotprod(v11, v12, v13, v14, (double *)&v15) && *(double *)&v15 >= *((double *)this + 394) )
    return 1;
  return v10;
}
