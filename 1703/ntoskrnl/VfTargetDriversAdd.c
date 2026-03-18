/*
 * XREFs of VfTargetDriversAdd @ 0x14006E474
 * Callers:
 *     VfDriverLoadImage @ 0x140761DB4 (VfDriverLoadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x14077B740 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlReserveNode @ 0x14006E078 (VfAvlReserveNode.c)
 *     VfAvlCleanupLockContext @ 0x14006E550 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x14006E620 (VfAvlInsertReservedTreeNode.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VfThunkAddTargetNotify @ 0x140761E3C (VfThunkAddTargetNotify.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140775274 (ViTargetDriversAllocateVerifiedData.c)
 */

__int64 __fastcall VfTargetDriversAdd(__int64 a1, unsigned int a2, __int64 a3)
{
  void *VerifiedData; // rdi
  __int64 v4; // rsi
  unsigned int v6; // ebx
  char *v7; // rax
  char *v8; // rsi
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  VerifiedData = 0LL;
  v4 = a2;
  v6 = 1;
  if ( VfSafeMode )
    return 0;
  if ( !ViTargetInitialized )
    return 0;
  if ( a3 && (VerifiedData = (void *)ViTargetDriversAllocateVerifiedData(a3)) == 0LL )
  {
    return 0;
  }
  else
  {
    v7 = VfAvlReserveNode((__int64 *)&ViTargetDriversAvl, a1, v4);
    v8 = v7;
    if ( v7 )
    {
      *((_QWORD *)v7 + 7) = VerifiedData;
      memset(v7 + 24, 0, 0x20uLL);
      VfThunkAddTargetNotify(v8);
      v10[1] = 1024LL;
      v10[0] = 0LL;
      VfAvlInsertReservedTreeNode(&ViTargetDriversAvl, v10, v8);
      if ( VerifiedData )
        ++dword_140348588;
      VfAvlCleanupLockContext(v10);
    }
    else
    {
      _InterlockedExchange(&ViTargetAllocationFailures, 1);
      v6 = 0;
      if ( VerifiedData )
        ExFreePoolWithTag(VerifiedData, 0x44566656u);
    }
  }
  return v6;
}
