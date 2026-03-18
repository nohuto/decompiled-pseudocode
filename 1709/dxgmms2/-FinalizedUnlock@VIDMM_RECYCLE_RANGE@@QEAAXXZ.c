/*
 * XREFs of ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006C8E4
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0068D94 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1C004CF60 (-Unlock@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00685D4 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069870 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C006C5D8 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::FinalizedUnlock(VIDMM_RECYCLE_RANGE *this)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rsi
  _QWORD *v4; // rbp
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  VIDMM_RECYCLE_HEAP_MGR **v8; // rcx
  __int64 v9; // rdx

  v2 = (_QWORD **)(*((_QWORD *)this + 9) + 96LL);
  v3 = *v2;
  while ( v3 != v2 )
  {
    v4 = v3 - 3;
    VIDMM_MDL_RANGE::Unlock((PMDL *)v3 - 3);
    v3 = (_QWORD *)*v3;
    v5 = v4 + 3;
    v6 = v4[3];
    if ( *(_QWORD **)(v6 + 8) != v4 + 3 || (v7 = (_QWORD *)v4[4], (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = 0LL;
    v4[4] = 0LL;
    operator delete(v4);
  }
  v8 = *(VIDMM_RECYCLE_HEAP_MGR ***)(*((_QWORD *)this + 9) + 32LL);
  if ( (unsigned int)(*(_DWORD *)v8 - 3) <= 3 )
  {
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange((VIDMM_RECYCLE_HEAP *)v8, this);
    v9 = 0LL;
  }
  else
  {
    VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(v8[1], this);
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
      *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
      this);
    v9 = 5LL;
  }
  VIDMM_RECYCLE_RANGE::Transition((__int64)this, v9);
}
