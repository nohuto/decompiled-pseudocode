/*
 * XREFs of VerifierExDeleteResourceLite @ 0x14077D5C0
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14006E550 (VfAvlCleanupLockContext.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140148980 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x1401489E0 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140148A98 (VfAvlLookupTreeNode.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfAvlInitializeLockContext @ 0x1402518BC (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierExDeleteResourceLite(PVOID *a1)
{
  unsigned __int64 v1; // rbx
  _SLIST_ENTRY *v3; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0LL;
  if ( ViResourceInitialized && qword_1407901E8 )
  {
    v3 = 0LL;
    VfAvlInitializeLockContext((__int64)v6, 0);
    if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)v6, (unsigned __int64)a1, 0LL) )
    {
      v3 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViResourceAvl, (__int64)v6, (unsigned __int64)a1, 0LL);
    }
    else if ( !ViResourceNotTracked && !ViResourcesAlreadyLoadedDrivers )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xD1uLL, (ULONG_PTR)a1, 0LL, 0LL);
    }
    VfAvlCleanupLockContext((__int64)v6);
    if ( v3 )
    {
      if ( dword_140790200 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v3);
      else
        VfUtilFreePoolCheckIRQL(v3);
    }
  }
  LODWORD(result) = ((__int64 (__fastcall *)(PVOID *))pXdvExDeleteResourceLite)(a1);
  if ( (MmVerifierData & 0x800) != 0 && (int)result >= 0 )
  {
    v5 = a1 + 13 >= a1 ? 0xD : 0;
    if ( (a1 + 13 >= a1 ? 0xD : 0) != 0 )
    {
      do
      {
        ++v1;
        *a1++ = MmBadPointer;
      }
      while ( v1 < v5 );
    }
  }
  return (unsigned int)result;
}
