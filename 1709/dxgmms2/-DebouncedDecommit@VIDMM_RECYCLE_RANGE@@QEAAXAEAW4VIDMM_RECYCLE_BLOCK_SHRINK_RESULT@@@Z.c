/*
 * XREFs of ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C006CAB0
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0068030 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0068D94 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     McTemplateK0qpxp @ 0x1C0023408 (McTemplateK0qpxp.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069870 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C006C5D8 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D1C4 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::DebouncedDecommit(
        VIDMM_RECYCLE_RANGE *this,
        enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  PVOID *v7; // rsi
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
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
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, a2, a3);
      v14[7] = 0LL;
      v14[3] = 270LL;
      v14[4] = 52LL;
      v14[5] = 4LL;
      v14[6] = v3;
      WdLogEvent5_WdCriticalError(v14);
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
      v10 = *((_QWORD *)this + 9);
      v11 = *(_QWORD *)(v10 + 32);
      if ( (unsigned int)(*(_DWORD *)v11 - 3) <= 3 )
        v12 = *(PVOID *)(v10 + 56);
      else
        v12 = *v7;
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0qpxp(
          *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL),
          &EventDestroyProcessAllocationDetails,
          v9,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 8LL),
          (char)this,
          v15,
          (char)v12);
    }
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, 0LL);
    *(_DWORD *)a2 = VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD *)this + 9));
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v13[7] = 0LL;
    v13[3] = 270LL;
    v13[4] = 52LL;
    v13[5] = 5LL;
    v13[6] = v3;
    WdLogEvent5_WdCriticalError(v13);
  }
}
