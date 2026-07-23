/*
 * XREFs of VerifierExInitializeResourceLite @ 0x1407BF870
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x1400F9080 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlLookupTreeNode @ 0x1400F90E8 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x1400F91F8 (VfAvlDeleteTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1400F9A6C (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1400F9AA4 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1400F9C0C (VfAvlReserveNode.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfAvlInitializeLockContext @ 0x14027812C (VfAvlInitializeLockContext.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407A70A4 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierExInitializeResourceLite(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  unsigned int v3; // edi
  char *v4; // r14
  _SLIST_ENTRY *v5; // rbp
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  VfUtilSynchronizationObjectSanityChecks(BugCheckParameter2, 0x68uLL);
  result = ((__int64 (__fastcall *)(ULONG_PTR))pXdvExInitializeResourceLite)(BugCheckParameter2);
  v3 = result;
  if ( (int)result >= 0 )
  {
    if ( (MmVerifierData & 0x800) != 0 )
    {
      if ( !ViResourceInitialized )
        return v3;
      v4 = VfAvlReserveNode(&ViResourceAvl, BugCheckParameter2, 0LL);
      if ( v4 )
      {
        v5 = 0LL;
        VfAvlInitializeLockContext((__int64)v6, 0);
        if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)v6, BugCheckParameter2, 0LL) )
        {
          if ( !ViResourcesAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
            VerifierBugCheckIfAppropriate(0xC4u, 0xD0uLL, BugCheckParameter2, 0LL, 0LL);
          _InterlockedAdd(&ViResourceStaleNodes, 1u);
          v5 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)v6, BugCheckParameter2, 0LL);
        }
        VfAvlInsertReservedTreeNode((__int64)&ViResourceAvl, (__int64)v6, v4);
        VfAvlCleanupLockContext((__int64)v6);
        if ( v5 )
        {
          if ( dword_1407D5200 == 1 )
            ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v5);
          else
            VfUtilFreePoolCheckIRQL(v5);
        }
        return v3;
      }
    }
    else if ( ViResourceNotTracked )
    {
      return v3;
    }
    _InterlockedExchange(&ViResourceNotTracked, 1);
    return v3;
  }
  return result;
}
