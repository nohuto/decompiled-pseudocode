/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0071C60
 * Callers:
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006FFE8 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C0070168 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D968 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D9EC (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006DA8C (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00714B0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::Decommit(VIDMM_RECYCLE_RANGE *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v6; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax

  v3 = *((int *)this + 16);
  v5 = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( !(_DWORD)v5 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
    if ( (unsigned int)(*(_DWORD *)v9 - 3) <= 3 || (unsigned int)(*(_DWORD *)v9 - 9) <= 1 )
    {
      v8 = 0LL;
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(v9 + 8), this);
      v8 = 5LL;
    }
    goto LABEL_4;
  }
  if ( (_DWORD)v5 == 2 )
  {
    v6 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 9) + 32LL);
    v7 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v6 + 1);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v6, this);
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v7, this);
    v8 = 4LL;
LABEL_4:
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, v8);
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
