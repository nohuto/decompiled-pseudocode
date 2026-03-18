/*
 * XREFs of ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0002AB8
 * Callers:
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C004D180 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall VIDMM_GLOBAL::InsertToPenaltyBox(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 v6; // rdx
  __int64 *result; // rax
  __int64 **v8; // rcx
  __int64 v9; // rdi
  _QWORD *v10; // rax

  v3 = a3;
  if ( (_DWORD)a3 == 4 )
  {
    v9 = *(unsigned int *)(a2 + 64);
    if ( (_DWORD)v9 )
    {
      if ( *(_DWORD *)(a1 + 8) != 213 )
      {
        v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
        v10[7] = 0LL;
        v10[3] = 270LL;
        v10[4] = 57LL;
        v10[5] = a2;
        v10[6] = v9;
        WdLogEvent5_WdCriticalError(v10);
      }
    }
  }
  v6 = 16LL * (unsigned int)(v3 - 1) + a1 + 41560;
  result = (__int64 *)(a2 + 176);
  v8 = *(__int64 ***)(v6 + 8);
  if ( *v8 != (__int64 *)v6 )
    __fastfail(3u);
  *result = v6;
  *(_QWORD *)(a2 + 184) = v8;
  *v8 = result;
  *(_QWORD *)(v6 + 8) = result;
  return result;
}
