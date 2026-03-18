/*
 * XREFs of CmpUnlockTwoKcbs @ 0x1404ACE30
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1404A26F0 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x1404A3418 (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x1404ACAA0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405E2080 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1406F3B38 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x1407025D4 (CmSaveMergedKeys.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x1404A82B0 (CmpFreeKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpGetCorrectKcbLockOrder @ 0x14057FA1C (CmpGetCorrectKcbLockOrder.c)
 */

void __fastcall CmpUnlockTwoKcbs(ULONG_PTR a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  bool v5; // di
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v10; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    if ( a2 && a1 != a2 )
    {
      CmpGetCorrectKcbLockOrder(a1, a2, &v10, &BugCheckParameter2);
      CmpUnlockKcb(BugCheckParameter2, v6, v7, v8);
      a1 = v10;
    }
    CmpUnlockKcb(a1, a2, a3, a4);
  }
  else if ( a2 )
  {
    v5 = (*(_DWORD *)(a2 + 4) & 0x80000) != 0;
    if ( *(struct _KTHREAD **)(a2 + 48) == KeGetCurrentThread() )
      *(_QWORD *)(a2 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 48));
    ExReleasePushLockEx(a2 + 40, 0LL, a3, a4);
    if ( v5 && (*(_DWORD *)(a2 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(a2);
  }
}
