/*
 * XREFs of ?AreTheseTwoContactsAGesture@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEBUtagTPCONTACTSTATE@@2@Z @ 0x1C01AD57C
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@@Z @ 0x1C01AE350 (-FindGestureAndMarkGesturingContactsAsNonResting@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AreTheseTwoContactsAGesture(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2,
        const struct tagTPCONTACTSTATE *a3,
        const struct tagTPCONTACTSTATE *a4)
{
  __int64 v4; // r10
  __int64 v5; // r11
  int v6; // eax
  int v7; // r15d
  int v8; // ebx
  int v9; // edi
  int v10; // r12d
  int v11; // r8d
  int v12; // esi
  int v13; // r9d
  BOOL v14; // ebp
  signed int v15; // r13d
  int v16; // r14d
  int v17; // ecx
  __int64 result; // rax
  double v19; // xmm2_8
  int v20; // [rsp+48h] [rbp+8h]

  v4 = *((_QWORD *)a3 + 1);
  v5 = *((_QWORD *)a4 + 1);
  if ( (int)((HIDWORD(*((_QWORD *)a3 + 6)) - HIDWORD(*((_QWORD *)a4 + 6)))
           * (HIDWORD(*((_QWORD *)a3 + 6)) - HIDWORD(*((_QWORD *)a4 + 6)))
           + (*((_QWORD *)a3 + 6) - *((_QWORD *)a4 + 6)) * (*((_QWORD *)a3 + 6) - *((_QWORD *)a4 + 6))) > (unsigned __int64)(unsigned int)gTPThresholds[46] )
    return 0LL;
  v6 = *((_DWORD *)a3 + 12);
  v7 = *((_DWORD *)a3 + 13);
  v8 = v4 - v6;
  v9 = *((_DWORD *)a4 + 12);
  v10 = *((_DWORD *)a4 + 13);
  v11 = v5 - v9;
  v20 = v6;
  v12 = HIDWORD(v4) - v7;
  v13 = HIDWORD(v5) - v10;
  if ( (_DWORD)v4 == v6 && !v12 )
    return 0LL;
  if ( !v11 && !v13 )
    return 0LL;
  v14 = 0;
  v15 = abs32(v12);
  v16 = abs32(v8);
  if ( v15 <= v16 )
  {
    if ( (int)abs32(v11) >= (int)abs32(v13) )
      v14 = v8 * v11 > 0;
    if ( v15 < v16 )
      goto LABEL_16;
  }
  v17 = abs32(v11);
  if ( (int)abs32(v13) < v17 || v12 * v13 <= 0 )
  {
LABEL_16:
    LODWORD(result) = 0;
LABEL_17:
    if ( v14 || (_DWORD)result )
    {
      if ( v8 )
      {
        if ( v11 )
        {
          v19 = (double)v11;
          if ( (double)v8 != 0.0
            && v19 != 0.0
            && COERCE_DOUBLE(COERCE_UNSIGNED_INT64((double)(v7 - HIDWORD(v4)) / (double)v8 - (double)(v10 - HIDWORD(v5))
                                                                                           / v19) & _xmm) < 0.25 )
          {
            return 1LL;
          }
        }
      }
    }
    return 0LL;
  }
  LODWORD(result) = 1;
  if ( v16 > 100 )
    goto LABEL_17;
  if ( v17 > 100 )
    goto LABEL_17;
  result = 1LL;
  if ( (int)abs32(v4 + v9 - v20 - v5) >= 100 )
    goto LABEL_17;
  return result;
}
