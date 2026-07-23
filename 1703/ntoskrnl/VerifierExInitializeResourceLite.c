/*
 * XREFs of VerifierExInitializeResourceLite @ 0x14077D900
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlReserveNode @ 0x14006E078 (VfAvlReserveNode.c)
 *     VfAvlCleanupLockContext @ 0x14006E550 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x14006E620 (VfAvlInsertReservedTreeNode.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140148980 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x1401489E0 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140148A98 (VfAvlLookupTreeNode.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfAvlInitializeLockContext @ 0x1402518BC (VfAvlInitializeLockContext.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407654D0 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierExInitializeResourceLite(void *a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  unsigned __int64 *v4; // r14
  _SLIST_ENTRY *v5; // rbp
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  VfUtilSynchronizationObjectSanityChecks(a1, 104LL);
  result = ((__int64 (__fastcall *)(void *))pXdvExInitializeResourceLite)(a1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    if ( (MmVerifierData & 0x800) != 0 )
    {
      if ( !ViResourceInitialized )
        return v3;
      v4 = (unsigned __int64 *)VfAvlReserveNode(&ViResourceAvl, (__int64)a1, 0LL);
      if ( v4 )
      {
        v5 = 0LL;
        VfAvlInitializeLockContext((__int64)v6, 0);
        if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)v6, (unsigned __int64)a1, 0LL) )
        {
          if ( !ViResourcesAlreadyLoadedDrivers )
            VerifierBugCheckIfAppropriate(0xC4u, 0xD0uLL, (ULONG_PTR)a1, 0LL, 0LL);
          _InterlockedAdd(&ViResourceStaleNodes, 1u);
          v5 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViResourceAvl, (__int64)v6, (unsigned __int64)a1, 0LL);
        }
        VfAvlInsertReservedTreeNode((__int64)&ViResourceAvl, (__int64)v6, v4);
        VfAvlCleanupLockContext((__int64)v6);
        if ( v5 )
        {
          if ( dword_140790200 == 1 )
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
