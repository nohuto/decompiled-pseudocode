/*
 * XREFs of ViTargetTrackContiguousMemory @ 0x1408224E8
 * Callers:
 *     VerifierMmAllocateContiguousMemory @ 0x140830D40 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140830E30 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140830F50 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140831070 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x1408312F0 (VerifierMmAllocateNonCachedMemory.c)
 * Callees:
 *     VfUtilFreePoolCheckIRQL @ 0x140160970 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlLookupTreeNode @ 0x1401609D8 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140161524 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1402AB23C (VfAvlInitializeLockContext.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ViTargetUpdateTreeAllowed @ 0x1408225F8 (ViTargetUpdateTreeAllowed.c)
 */

char __fastcall ViTargetTrackContiguousMemory(unsigned __int64 a1, _SLIST_ENTRY *a2, __int64 a3)
{
  _SLIST_ENTRY *PoolWithTag; // rax
  _SLIST_ENTRY *v7; // rbx
  int v8; // esi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  _SLIST_ENTRY **v13; // rax
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  LODWORD(PoolWithTag) = ViTargetUpdateTreeAllowed(a1, a2, a3);
  if ( (_DWORD)PoolWithTag )
  {
    PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x61436656u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[1].Next = a2;
      *((_QWORD *)&PoolWithTag[1].Next + 1) = a3;
      v8 = 0;
      PoolWithTag[2].Next = (_SLIST_ENTRY *)a1;
      VfAvlInitializeLockContext((__int64)v15, 0);
      v9 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v15, a1, 1LL);
      if ( v9 )
      {
        v10 = v9[7];
        if ( v10 )
        {
          qword_1403A5650 += a3;
          v11 = a3 + *(_QWORD *)(v10 + 232);
          *(_QWORD *)(v10 + 232) = v11;
          if ( *(_QWORD *)(v10 + 240) < v11 )
            *(_QWORD *)(v10 + 240) = v11;
          v12 = v10 + 248;
          v13 = *(_SLIST_ENTRY ***)(v12 + 8);
          if ( *v13 != (_SLIST_ENTRY *)v12 )
            __fastfail(3u);
          v7->Next = (_SLIST_ENTRY *)v12;
          v8 = 1;
          *((_QWORD *)&v7->Next + 1) = v13;
          *v13 = v7;
          *(_QWORD *)(v12 + 8) = v7;
        }
      }
      LOBYTE(PoolWithTag) = VfAvlCleanupLockContext((__int64)v15);
      if ( !v8 )
        LOBYTE(PoolWithTag) = VfUtilFreePoolCheckIRQL(v7);
    }
  }
  return (char)PoolWithTag;
}
