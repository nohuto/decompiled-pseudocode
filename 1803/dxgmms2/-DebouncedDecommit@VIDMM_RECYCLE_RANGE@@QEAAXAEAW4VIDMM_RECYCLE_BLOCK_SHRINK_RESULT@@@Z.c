/*
 * XREFs of ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0071A10
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C006D4EC (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C006E1C0 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     McTemplateK0qpxp @ 0x1C0025DB8 (McTemplateK0qpxp.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0055A58 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0070738 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00714B0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::DebouncedDecommit(
        VIDMM_RECYCLE_RANGE *this,
        enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  PVOID *v7; // r14
  unsigned int *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // ecx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  ULONG_PTR v21; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((int *)this + 16);
  if ( (_DWORD)v3 == 5 )
  {
    v6 = *((_QWORD *)this + 9);
    v7 = (PVOID *)((char *)this + 32);
    v21 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
    v8 = *(unsigned int **)(v6 + 32);
    v9 = *v8;
    if ( (unsigned int)(v9 - 3) <= 3 || (unsigned int)(v9 - 9) <= 1 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v9, a3);
      v19[7] = 0LL;
      v19[3] = 270LL;
      v19[4] = 52LL;
      v19[5] = 4LL;
      v19[6] = v3;
      WdLogEvent5_WdCriticalError(v19);
    }
    else
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7, &v21, 0x4000u);
    }
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
      *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
      this);
    if ( bTracingEnabled )
    {
      v11 = *((_QWORD *)this + 9);
      v12 = *(_QWORD *)(v11 + 32);
      v13 = (unsigned int)(*(_DWORD *)v12 - 3) <= 3 ? *(PVOID *)(v11 + 56) : *v7;
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0qpxp(
          *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL),
          &EventDestroyProcessAllocationDetails,
          v10,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 8LL),
          (char)this,
          v21,
          (char)v13);
    }
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, 0LL);
    v16 = *((unsigned int *)this + 21);
    if ( (_DWORD)v16 )
    {
      v17 = v16 - 1;
      if ( !v17 || (unsigned int)(v17 - 1) <= 1 )
        *((_DWORD *)this + 21) = 0;
    }
    else if ( g_IsInternalRelease )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v14, v15);
      v20[5] = 0LL;
      v20[6] = 0LL;
      v20[7] = 0LL;
      v20[3] = 270LL;
      v20[4] = 9LL;
      WdLogEvent5_WdCriticalError(v20);
    }
    *(_DWORD *)a2 = VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD **)this + 9), (__int64)this);
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v18[7] = 0LL;
    v18[3] = 270LL;
    v18[4] = 52LL;
    v18[5] = 5LL;
    v18[6] = v3;
    WdLogEvent5_WdCriticalError(v18);
  }
}
