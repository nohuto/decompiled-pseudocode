/*
 * XREFs of CmpReferenceKeyControlBlockLockNotHeld @ 0x140581A64
 * Callers:
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x1404AB0E0 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x14052AA50 (CmpReferenceKeyControlBlock.c)
 */

char __fastcall CmpReferenceKeyControlBlockLockNotHeld(volatile signed __int32 *BugCheckParameter2)
{
  signed __int32 v1; // eax
  signed __int32 v3; // ett
  char v4; // bl
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

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
  CmpUnlockKcb((ULONG_PTR)BugCheckParameter2, v6, v7, v8);
  return v4;
}
