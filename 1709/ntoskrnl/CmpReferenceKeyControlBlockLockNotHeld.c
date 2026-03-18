/*
 * XREFs of CmpReferenceKeyControlBlockLockNotHeld @ 0x1405979A8
 * Callers:
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x140563480 (CmpReferenceKeyControlBlock.c)
 */

char __fastcall CmpReferenceKeyControlBlockLockNotHeld(volatile signed __int32 *BugCheckParameter2)
{
  signed __int32 v1; // eax
  signed __int32 v3; // ett
  char v4; // bl

  v1 = *BugCheckParameter2;
  while ( v1 )
  {
    if ( v1 == -1 )
      return 0;
    v3 = v1;
    v1 = _InterlockedCompareExchange(BugCheckParameter2, v1 + 1, v1);
    if ( v3 == v1 )
      return 1;
  }
  ExAcquirePushLockSharedEx((ULONG_PTR)(BugCheckParameter2 + 10), 0LL);
  _InterlockedAdd(BugCheckParameter2 + 12, 1u);
  v4 = CmpReferenceKeyControlBlock((ULONG_PTR)BugCheckParameter2);
  CmpUnlockKcb((ULONG_PTR)BugCheckParameter2);
  return v4;
}
