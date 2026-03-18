/*
 * XREFs of ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0069F8C
 * Callers:
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069870 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C006A168 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C006ACA0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C006B290 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D1C4 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // rcx
  __int64 result; // rax
  _QWORD *v14; // rax

  v4 = (int)a2;
  v6 = WdLogNewEntry5_WdEvent(a1, a2);
  v7 = v4;
  *(_QWORD *)(v6 + 24) = a3;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdEvent(v6);
  if ( (_DWORD)v4 )
  {
    v11 = v4 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10);
        v14[7] = 0LL;
        v14[3] = 270LL;
        v14[4] = 52LL;
        v14[5] = 16LL;
        v14[6] = v7;
        result = WdLogEvent5_WdCriticalError(v14);
        goto LABEL_6;
      }
      v12 = a1 + 64;
    }
    else
    {
      v12 = a1 + 56;
    }
  }
  else
  {
    v12 = a1 + 48;
  }
  result = RtlAvlRemoveNode(v12, a3);
LABEL_6:
  *(_DWORD *)(a3 + 88) = 3;
  return result;
}
