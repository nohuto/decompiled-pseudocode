/*
 * XREFs of ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00714B0
 * Callers:
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00717D0 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C00718B4 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0071A10 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0071B1C (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0071B6C (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0071C60 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0071CF0 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C00244A0 (McTemplateK0pqq.c)
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
