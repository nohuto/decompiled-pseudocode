/*
 * XREFs of ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C644
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004DD80 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C004E2FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C005E3A4 (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C005E8B8 (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C005E970 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  VIDMM_GLOBAL *v6; // rcx
  int v7; // edi
  unsigned __int8 v8; // r8
  __int64 v9; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx
  _QWORD *v19; // rax

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_QWORD *)a2 + 33) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v11);
      v12[3] = *((_QWORD *)a2 + 33);
      v12[4] = *((unsigned int *)a2 + 64);
      v12[5] = *((int *)a2 + 65);
    }
    v13 = (_QWORD *)((char *)a2 + 232);
    v14 = *((_QWORD *)a2 + 29);
    if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v14 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 232)
      || (v15 = (_QWORD *)*((_QWORD *)a2 + 30), (_QWORD *)*v15 != v13) )
    {
      __fastfail(3u);
    }
    *v15 = v14;
    v7 = 0;
    *(_QWORD *)(v14 + 8) = v15;
    *v13 = 0LL;
    v16 = *((_QWORD *)a2 + 33);
    *((_QWORD *)a2 + 30) = 0LL;
    (*(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)v16 + 56LL))(v16, a2);
  }
  else
  {
    LOBYTE(a4) = 1;
    v7 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(this, a2, 0LL, a4);
    if ( v7 >= 0 )
      goto LABEL_5;
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v6);
    VIDMM_GLOBAL::EvictTemporaryAllocations(this, 1u, *((_DWORD *)a2 + 19) & 0x3F);
    LOBYTE(v17) = 1;
    v7 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(this, a2, 0LL, v17);
    if ( v7 >= 0 )
    {
LABEL_5:
      VIDMM_GLOBAL::EvictAllAllocationInList(v6, (struct _LIST_ENTRY *)((char *)this + 3736), v8);
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v9);
        v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v18);
        v19[3] = *((_QWORD *)a2 + 33);
        v19[4] = *((unsigned int *)a2 + 64);
        v19[5] = *((int *)a2 + 65);
      }
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v6);
    }
  }
  return (unsigned int)v7;
}
