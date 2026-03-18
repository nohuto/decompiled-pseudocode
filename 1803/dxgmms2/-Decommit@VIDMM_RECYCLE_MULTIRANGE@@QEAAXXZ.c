/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006FFE8
 * Callers:
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006DE80 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0070970 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0071C60 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0071E9C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::Decommit(PSLIST_ENTRY ListEntry)
{
  VIDMM_RECYCLE_RANGE *i; // rdi
  struct _SLIST_ENTRY *Next; // rdx
  struct _SLIST_ENTRY *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdi

  for ( i = (VIDMM_RECYCLE_RANGE *)ListEntry[4].Next; ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    VIDMM_RECYCLE_RANGE::Decommit(i);
    if ( i == *((VIDMM_RECYCLE_RANGE **)&ListEntry[4].Next + 1) )
      break;
  }
  if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
          (VIDMM_RECYCLE_HEAP *)ListEntry[5].Next[2].Next,
          (struct VIDMM_RECYCLE_MULTIRANGE *)ListEntry) )
  {
    Next = ListEntry[5].Next;
    v4 = ListEntry[6].Next;
    v5 = *((_QWORD *)&Next[2].Next->Next + 1);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      ListEntry[6].Next = 0LL;
      Next = ListEntry[5].Next;
    }
    --*((_QWORD *)&Next->Next + 1);
    v6 = *(_QWORD *)(v5 + 1320);
    ++*(_DWORD *)(v6 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v6) >= *(_WORD *)(v6 + 16) )
    {
      ++*(_DWORD *)(v6 + 32);
      (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v6 + 56))(ListEntry, v6);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v6, ListEntry);
    }
  }
}
