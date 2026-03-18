/*
 * XREFs of CmpTransSearchAddTransFromRm @ 0x1405D6DD0
 * Callers:
 *     CmpTransSearchAddTransFromHive @ 0x140568D24 (CmpTransSearchAddTransFromHive.c)
 *     CmpTransInitializeTransaction @ 0x1405D70D4 (CmpTransInitializeTransaction.c)
 *     CmpRecoverEnlistment @ 0x140695FE8 (CmpRecoverEnlistment.c)
 *     CmpRmAnalysisPhase @ 0x140696694 (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x1406968A8 (CmpRmReDoPhase.c)
 * Callees:
 *     CmpTransSearchAddTrans @ 0x1405D6E48 (CmpTransSearchAddTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromRm(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // r9
  __int64 result; // rax

  if ( !a1 || a1 != CmRmSystem && !a1[10] )
    return 3222863877LL;
  if ( !a2 && !a3 )
    return 3222863874LL;
  LODWORD(v6) = qword_140353EA0;
  if ( a1 != CmRmSystem )
    v6 = a1[10];
  result = CmpTransSearchAddTrans(a2, a3, (_DWORD)a1, v6, a4, a5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
