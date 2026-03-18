/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006CCB0
 * Callers:
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006C188 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C006C2E4 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00684B0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068534 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00685D4 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C006C5D8 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::Decommit(VIDMM_RECYCLE_RANGE *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v8; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v9; // rbx
  _QWORD *v10; // rax

  v3 = *((int *)this + 16);
  v5 = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( !(_DWORD)v5 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
    if ( (unsigned int)(*(_DWORD *)v6 - 3) <= 3 )
    {
      v7 = 0LL;
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(v6 + 8), this);
      v7 = 5LL;
    }
    goto LABEL_4;
  }
  if ( (_DWORD)v5 == 2 )
  {
    v8 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 9) + 32LL);
    v9 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v8 + 1);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v8, this);
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v9, this);
    v7 = 4LL;
LABEL_4:
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, v7);
    return;
  }
  v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2, a3);
  v10[7] = 0LL;
  v10[3] = 270LL;
  v10[4] = 52LL;
  v10[5] = 1LL;
  v10[6] = v3;
  WdLogEvent5_WdCriticalError(v10);
}
