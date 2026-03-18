/*
 * XREFs of ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C0132D48
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C01358D8 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::AreTheseTwoContactsAPan(
        CPTPEngine *this,
        const struct PTPInput *a2,
        const struct CContactState *a3,
        const struct CContactState *a4)
{
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  int v7; // eax
  int v8; // r12d
  int v9; // ebx
  int v10; // edi
  int v11; // r13d
  int v12; // r8d
  int v13; // esi
  int v14; // r9d
  BOOL v15; // ebp
  signed int v16; // r15d
  int v17; // r14d
  int v18; // ecx
  __int64 result; // rax
  double v20; // xmm3_8
  int v21; // [rsp+48h] [rbp+8h]

  v4 = *(_QWORD *)((char *)a4 + 44);
  v5 = *(_QWORD *)((char *)a3 + 20);
  v6 = *(_QWORD *)((char *)a4 + 20);
  if ( (int)((*(_QWORD *)((char *)a3 + 44) - v4) * (*(_QWORD *)((char *)a3 + 44) - v4)
           + (HIDWORD(*(_QWORD *)((char *)a3 + 44)) - HIDWORD(v4))
           * (HIDWORD(*(_QWORD *)((char *)a3 + 44)) - HIDWORD(v4))) > (unsigned __int64)*((unsigned int *)this + 73) )
    return 0LL;
  v7 = *((_DWORD *)a3 + 11);
  v8 = *((_DWORD *)a3 + 12);
  v9 = v5 - v7;
  v10 = *((_DWORD *)a4 + 11);
  v11 = *((_DWORD *)a4 + 12);
  v12 = v6 - v10;
  v21 = v7;
  v13 = HIDWORD(v5) - v8;
  v14 = HIDWORD(v6) - v11;
  if ( (_DWORD)v5 == v7 && !v13 )
    return 0LL;
  if ( !v12 && !v14 )
    return 0LL;
  v15 = 0;
  v16 = abs32(v13);
  v17 = abs32(v9);
  if ( v16 <= v17 )
  {
    if ( (int)abs32(v12) >= (int)abs32(v14) )
      v15 = v9 * v12 > 0;
    if ( v16 < v17 )
      goto LABEL_16;
  }
  v18 = abs32(v12);
  if ( (int)abs32(v14) < v18 || v13 * v14 <= 0 )
  {
LABEL_16:
    LODWORD(result) = 0;
LABEL_17:
    if ( v15 || (_DWORD)result )
    {
      if ( v9 )
      {
        if ( v12 )
        {
          v20 = (double)v12;
          if ( (double)v9 != 0.0
            && v20 != 0.0
            && COERCE_DOUBLE(COERCE_UNSIGNED_INT64(
                               COERCE_DOUBLE(COERCE_UNSIGNED_INT64((double)(v8 - HIDWORD(v5)) / (double)v9) & _xmm)
                             - COERCE_DOUBLE(COERCE_UNSIGNED_INT64((double)(v11 - HIDWORD(v6)) / v20) & _xmm)) & _xmm) < 0.25 )
          {
            return 1LL;
          }
        }
      }
    }
    return 0LL;
  }
  LODWORD(result) = 1;
  if ( v17 > 100 )
    goto LABEL_17;
  if ( v18 > 100 )
    goto LABEL_17;
  result = 1LL;
  if ( (int)abs32(v5 + v10 - v21 - v6) >= 100 )
    goto LABEL_17;
  return result;
}
