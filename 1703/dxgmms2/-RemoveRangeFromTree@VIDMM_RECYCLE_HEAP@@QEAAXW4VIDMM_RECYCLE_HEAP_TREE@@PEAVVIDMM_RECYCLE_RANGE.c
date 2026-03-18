/*
 * XREFs of ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009EA28
 * Callers:
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0065EA4 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0066A48 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C00689B8 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069408 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ebx
  _QWORD *v12; // rax
  __int64 result; // rax
  __int64 v14; // rcx

  v4 = (int)a2;
  v6 = WdLogNewEntry5_WdWarning(a1, a2);
  v7 = v4;
  *(_QWORD *)(v6 + 24) = a3;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdWarning(v6);
  if ( !(_DWORD)v4 )
  {
    v14 = a1 + 48;
    goto LABEL_8;
  }
  v11 = v4 - 1;
  if ( !v11 )
  {
    v14 = a1 + 56;
    goto LABEL_8;
  }
  if ( v11 == 1 )
  {
    v14 = a1 + 64;
LABEL_8:
    result = RtlAvlRemoveNode(v14, a3);
    goto LABEL_9;
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10);
  v12[7] = 0LL;
  v12[3] = 270LL;
  v12[4] = 52LL;
  v12[5] = 14LL;
  v12[6] = v7;
  result = WdLogEvent5_WdCriticalError(v12);
LABEL_9:
  *(_DWORD *)(a3 + 88) = 3;
  return result;
}
