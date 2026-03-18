/*
 * XREFs of ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140264EC0
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140005AC8 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     SmFpCleanup @ 0x14000653C (SmFpCleanup.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140262D20 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1402659AC (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     SmKmCleanup @ 0x140739EBC (SmKmCleanup.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCleanup(__int64 a1)
{
  char *v2; // rdx
  KIRQL v3; // al
  unsigned __int64 v4; // rbx

  SmKmCleanup();
  v2 = *(char **)(a1 + 448);
  if ( v2 )
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNodeFree(
      a1 + 448,
      v2);
  SmFpCleanup(a1 + 1424);
  SmFpCleanup(a1 + 1536);
  SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(a1 + 1248, 1LL);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1264));
  *(_DWORD *)(a1 + 1352) = 0;
  v4 = v3;
  KeSetEvent((PRKEVENT)(a1 + 1288), 0, 0);
  KeSetEvent((PRKEVENT)(a1 + 1312), 0, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1264));
  __writecr8(v4);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 1384));
  return SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(a1 + 1408, 1LL);
}
