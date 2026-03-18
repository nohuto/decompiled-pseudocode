/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0068420
 * Callers:
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0064FD0 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00660D0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0068FEC (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00691D0 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::Decommit(struct _SLIST_ENTRY *this)
{
  VIDMM_RECYCLE_RANGE *i; // rdi
  __int64 v3; // rdi
  struct _SLIST_ENTRY *Next; // rcx
  __int64 v5; // rdi

  for ( i = (VIDMM_RECYCLE_RANGE *)this[4].Next; ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    VIDMM_RECYCLE_RANGE::Decommit(i);
    if ( i == *((VIDMM_RECYCLE_RANGE **)&this[4].Next + 1) )
      break;
  }
  if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
          (VIDMM_RECYCLE_HEAP *)this[5].Next[2].Next,
          (struct VIDMM_RECYCLE_MULTIRANGE *)this) )
  {
    v3 = *((_QWORD *)&this[5].Next[2].Next->Next + 1);
    Next = this[6].Next;
    if ( Next )
    {
      ExFreePoolWithTag(Next, 0);
      this[6].Next = 0LL;
    }
    --*((_QWORD *)&this[5].Next->Next + 1);
    v5 = *(_QWORD *)(v3 + 1176);
    ++*(_DWORD *)(v5 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v5) >= *(_WORD *)(v5 + 16) )
    {
      ++*(_DWORD *)(v5 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v5 + 56))(this, v5);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v5, this);
    }
  }
}
