/*
 * XREFs of CmpUnlockTwoKcbs @ 0x140482410
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140478DFC (CmQueryMultipleValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14047A598 (NtNotifyChangeMultipleKeys.c)
 *     CmEnumerateKey @ 0x140482020 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1404A7650 (CmQueryKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140562984 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14068FF9C (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x14069D67C (CmSaveMergedKeys.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpGetCorrectKcbLockOrder @ 0x140562948 (CmpGetCorrectKcbLockOrder.c)
 */

void __fastcall CmpUnlockTwoKcbs(ULONG_PTR a1, ULONG_PTR a2)
{
  bool v3; // di
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v5; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    if ( a2 && a1 != a2 )
    {
      CmpGetCorrectKcbLockOrder(a1, a2, &v5, &BugCheckParameter2);
      CmpUnlockKcb(BugCheckParameter2);
      a1 = v5;
    }
    CmpUnlockKcb(a1);
  }
  else if ( a2 )
  {
    v3 = (*(_DWORD *)(a2 + 4) & 0x80000) != 0;
    if ( *(struct _KTHREAD **)(a2 + 48) == KeGetCurrentThread() )
      *(_QWORD *)(a2 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 48));
    ExReleasePushLockEx(a2 + 40, 0LL);
    if ( v3 && (*(_DWORD *)(a2 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(a2);
  }
}
