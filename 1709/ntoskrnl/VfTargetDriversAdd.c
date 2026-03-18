/*
 * XREFs of VfTargetDriversAdd @ 0x1400F9990
 * Callers:
 *     VfDriverLoadImage @ 0x1407A2174 (VfDriverLoadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x1407BD64C (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400F9A6C (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1400F9AA4 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1400F9C0C (VfAvlReserveNode.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VfThunkAddTargetNotify @ 0x1407A1FC4 (VfThunkAddTargetNotify.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1407B7034 (ViTargetDriversAllocateVerifiedData.c)
 */

__int64 __fastcall VfTargetDriversAdd(__int64 a1, unsigned int a2, __int64 a3)
{
  void *VerifiedData; // rdi
  __int64 v4; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rsi
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
    v7 = VfAvlReserveNode(&ViTargetDriversAvl, a1, v4);
    v8 = v7;
    if ( v7 )
    {
      *(_QWORD *)(v7 + 56) = VerifiedData;
      memset((void *)(v7 + 24), 0, 0x20uLL);
      VfThunkAddTargetNotify(v8);
      v10[1] = 1024LL;
      v10[0] = 0LL;
      VfAvlInsertReservedTreeNode(&ViTargetDriversAvl, v10, v8);
      if ( VerifiedData )
        ++dword_140362008;
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
