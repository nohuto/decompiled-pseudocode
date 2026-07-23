/*
 * XREFs of ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140249864
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14012E500 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     SmFpCleanup @ 0x14001FE68 (SmFpCleanup.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     RtlpInterlockedFlushSList @ 0x1401894F0 (RtlpInterlockedFlushSList.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1402491D0 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SmKmCleanup @ 0x140701BC0 (SmKmCleanup.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCleanup(_SLIST_HEADER *a1)
{
  char *Alignment; // rdx
  PSLIST_ENTRY v3; // rbx
  PSLIST_ENTRY v4; // rcx
  _SLIST_HEADER *v5; // rdi
  KIRQL v6; // al
  unsigned __int64 v7; // rbx

  SmKmCleanup();
  Alignment = (char *)a1[28].Alignment;
  if ( Alignment )
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNodeFree(
      (__int64)&a1[28],
      Alignment);
  SmFpCleanup((__int64)&a1[87].Region);
  SmFpCleanup((__int64)&a1[94].Region);
  v3 = RtlpInterlockedFlushSList(a1 + 78);
  while ( v3 )
  {
    v4 = v3;
    v3 = v3->Next;
    ExFreePoolWithTag(v4, 0);
  }
  v5 = a1 + 79;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v5);
  *((_DWORD *)&v5[5].HeaderX64 + 2) = 0;
  v7 = v6;
  KeSetEvent((PRKEVENT)((char *)&v5[1].HeaderX64 + 8), 0, 0);
  KeSetEvent((PRKEVENT)&v5[3], 0, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v5);
  __writecr8(v7);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&v5[7].HeaderX64 + 1);
}
