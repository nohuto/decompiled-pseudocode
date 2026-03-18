/*
 * XREFs of ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C006C5D8
 * Callers:
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006C8E4 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C006C9B4 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C006CAB0 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006CB90 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C006CBE0 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006CCB0 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C006CD38 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C0021B54 (McTemplateK0pqq.c)
 */

NTSTATUS __fastcall VIDMM_RECYCLE_RANGE::Transition(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 v7; // r8

  v2 = (int)a2;
  v4 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v4[3] = a1;
  v4[4] = *(int *)(a1 + 64);
  v4[5] = v2;
  result = WdLogEvent5_WdEvent(v4);
  if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    result = McTemplateK0pqq(v6, &EventRecycleRangeTransition, v7, a1, *(_DWORD *)(a1 + 64), v2);
  *(_DWORD *)(a1 + 64) = v2;
  return result;
}
