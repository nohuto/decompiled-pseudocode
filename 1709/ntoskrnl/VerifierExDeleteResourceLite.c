/*
 * XREFs of VerifierExDeleteResourceLite @ 0x1407BF520
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x1400F9080 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlLookupTreeNode @ 0x1400F90E8 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x1400F91F8 (VfAvlDeleteTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1400F9A6C (VfAvlCleanupLockContext.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfAvlInitializeLockContext @ 0x14027812C (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierExDeleteResourceLite(PVOID *BugCheckParameter2)
{
  unsigned __int64 v1; // rbx
  _SLIST_ENTRY *v3; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0LL;
  if ( ViResourceInitialized && qword_1407D51E8 )
  {
    v3 = 0LL;
    VfAvlInitializeLockContext((__int64)v6, 0);
    if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)v6, (unsigned __int64)BugCheckParameter2, 0LL) )
    {
      v3 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)v6, (__int64)BugCheckParameter2, 0LL);
    }
    else if ( !ViResourceNotTracked && !ViResourcesAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xD1uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
    }
    VfAvlCleanupLockContext((__int64)v6);
    if ( v3 )
    {
      if ( dword_1407D5200 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v3);
      else
        VfUtilFreePoolCheckIRQL(v3);
    }
  }
  LODWORD(result) = ((__int64 (__fastcall *)(PVOID *))pXdvExDeleteResourceLite)(BugCheckParameter2);
  if ( (MmVerifierData & 0x800) != 0 && (int)result >= 0 )
  {
    v5 = BugCheckParameter2 + 13 >= BugCheckParameter2 ? 0xD : 0;
    if ( (BugCheckParameter2 + 13 >= BugCheckParameter2 ? 0xD : 0) != 0 )
    {
      do
      {
        ++v1;
        *BugCheckParameter2++ = MmBadPointer;
      }
      while ( v1 < v5 );
    }
  }
  return (unsigned int)result;
}
