/*
 * XREFs of ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0068E20
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C00645F0 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0065324 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     Template_qpxp @ 0x1C0021384 (Template_qpxp.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0065EA4 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C0068964 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069408 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::DebouncedDecommit(
        VIDMM_RECYCLE_RANGE *this,
        enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  PVOID *v7; // rdi
  _DWORD *v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID v14; // rdx
  ULONG_PTR v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((int *)this + 16);
  if ( (_DWORD)v3 == 5 )
  {
    v6 = *((_QWORD *)this + 9);
    v7 = (PVOID *)((char *)this + 32);
    v15 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
    v8 = *(_DWORD **)(v6 + 32);
    if ( (unsigned int)(*v8 - 3) <= 3 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, a2, a3);
      v11[7] = 0LL;
      v11[3] = 270LL;
      v11[4] = 52LL;
      v11[5] = 4LL;
      v11[6] = 5LL;
      WdLogEvent5_WdCriticalError(v11);
    }
    else
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7, &v15, 0x4000u);
    }
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
      *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
      this);
    if ( bTracingEnabled )
    {
      v12 = *((_QWORD *)this + 9);
      v13 = *(_QWORD *)(v12 + 32);
      if ( (unsigned int)(*(_DWORD *)v13 - 3) > 3 )
        v14 = *v7;
      else
        v14 = *(PVOID *)(v12 + 56);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        Template_qpxp(
          *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL),
          &EventDestroyProcessAllocationDetails,
          v9,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) + 8LL),
          (char)this,
          v15,
          (char)v14);
    }
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, 0LL);
    *(_DWORD *)a2 = VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD *)this + 9));
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v10[7] = 0LL;
    v10[3] = 270LL;
    v10[4] = 52LL;
    v10[5] = 5LL;
    v10[6] = v3;
    WdLogEvent5_WdCriticalError(v10);
  }
}
