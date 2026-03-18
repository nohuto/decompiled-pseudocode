/*
 * XREFs of CmpTransSearchAddTransFromRm @ 0x14042D8CC
 * Callers:
 *     CmpTransSearchAddTransFromHive @ 0x14042DBD4 (CmpTransSearchAddTransFromHive.c)
 *     CmpTransInitializeTransaction @ 0x14042E514 (CmpTransInitializeTransaction.c)
 *     CmpRecoverEnlistment @ 0x14066B97C (CmpRecoverEnlistment.c)
 *     CmpRmAnalysisPhase @ 0x14066C028 (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x14066C234 (CmpRmReDoPhase.c)
 * Callees:
 *     CmpTransSearchAddTrans @ 0x14042D944 (CmpTransSearchAddTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromRm(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // r9
  __int64 result; // rax

  if ( !a1 || a1 != CmRmSystem && !a1[10] )
    return 3222863877LL;
  if ( !a2 && !a3 )
    return 3222863874LL;
  LODWORD(v6) = qword_14033BE70;
  if ( a1 != CmRmSystem )
    v6 = a1[10];
  result = CmpTransSearchAddTrans(a2, a3, (_DWORD)a1, v6, a4, a5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
