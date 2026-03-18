/*
 * XREFs of ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C000200C
 * Callers:
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0051688 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VIDMM_GLOBAL::InsertToPenaltyBox(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 v6; // rdi
  _QWORD *result; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax

  v3 = a3;
  if ( (_DWORD)a3 == 4 )
  {
    v6 = *(unsigned int *)(a2 + 64);
    if ( (_DWORD)v6 )
    {
      if ( *(_DWORD *)(a1 + 8) != 213 )
      {
        v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
        v10[7] = 0LL;
        v10[3] = 270LL;
        v10[4] = 57LL;
        v10[5] = a2;
        v10[6] = v6;
        WdLogEvent5_WdCriticalError(v10);
      }
    }
  }
  result = (_QWORD *)(a2 + 176);
  v8 = a1 + 16 * ((unsigned int)(v3 - 1) + 2579LL);
  v9 = *(_QWORD **)(v8 + 8);
  if ( *v9 != v8 )
    __fastfail(3u);
  *result = v8;
  *(_QWORD *)(a2 + 184) = v9;
  *v9 = result;
  *(_QWORD *)(v8 + 8) = result;
  return result;
}
