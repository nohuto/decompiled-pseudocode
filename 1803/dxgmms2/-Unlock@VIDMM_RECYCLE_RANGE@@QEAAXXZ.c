/*
 * XREFs of ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0071B1C
 * Callers:
 *     ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z @ 0x1C006FDEC (-Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006FEE0 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 * Callees:
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D9EC (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00714B0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::Unlock(VIDMM_RECYCLE_RANGE *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v6; // rax

  v3 = *((int *)this + 16);
  if ( (_DWORD)v3 == 2 )
  {
    if ( (*((_DWORD *)this + 23))-- == 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        this);
      VIDMM_RECYCLE_RANGE::Transition((__int64)this, 3LL);
    }
  }
  else
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v6[7] = 0LL;
    v6[3] = 270LL;
    v6[4] = 52LL;
    v6[5] = 3LL;
    v6[6] = v3;
    WdLogEvent5_WdCriticalError(v6);
  }
}
