/*
 * XREFs of ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00593BC
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049C70 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004A470 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C005B03C (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C005B53C (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C005B5E8 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  _BYTE *v4; // rax
  VIDMM_GLOBAL *v7; // rcx
  int v8; // edi
  unsigned __int8 v9; // r8
  __int64 v10; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD *v20; // rax

  v4 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    v4 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  }
  if ( *((_QWORD *)a2 + 33) )
  {
    if ( *v4 )
    {
      WdLogNewEntry5_WdTrace(this);
      if ( g_IsInternalReleaseOrDbg )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
        v13[3] = *((_QWORD *)a2 + 33);
        v13[4] = *((unsigned int *)a2 + 64);
        v13[5] = *((int *)a2 + 65);
      }
    }
    v14 = (_QWORD *)((char *)a2 + 232);
    v15 = *((_QWORD *)a2 + 29);
    v16 = (_QWORD *)*((_QWORD *)a2 + 30);
    if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v15 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 232)
      || (_QWORD *)*v16 != v14 )
    {
      __fastfail(3u);
    }
    *v16 = v15;
    v8 = 0;
    *(_QWORD *)(v15 + 8) = v16;
    *v14 = 0LL;
    v17 = *((_QWORD *)a2 + 33);
    *((_QWORD *)a2 + 30) = 0LL;
    (*(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)v17 + 56LL))(v17, a2);
  }
  else
  {
    LOBYTE(a4) = 1;
    v8 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(this, a2, 0LL, a4);
    if ( v8 >= 0 )
      goto LABEL_5;
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v7);
    VIDMM_GLOBAL::EvictTemporaryAllocations(this, 1u, *((_DWORD *)a2 + 19) & 0x3F);
    LOBYTE(v18) = 1;
    v8 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(this, a2, 0LL, v18);
    if ( v8 >= 0 )
    {
LABEL_5:
      VIDMM_GLOBAL::EvictAllAllocationInList(v7, (struct _LIST_ENTRY *)((char *)this + 3736), v9);
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v10);
        v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v19);
        v20[3] = *((_QWORD *)a2 + 33);
        v20[4] = *((unsigned int *)a2 + 64);
        v20[5] = *((int *)a2 + 65);
      }
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v7);
    }
  }
  return (unsigned int)v8;
}
