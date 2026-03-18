/*
 * XREFs of CmpUnlockTwoKcbs @ 0x1404FDB60
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14048E630 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x14048FF38 (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x1404FD790 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140572568 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14066668C (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x1406725A8 (CmSaveMergedKeys.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     CmpLockTableRemove @ 0x1401DFB90 (CmpLockTableRemove.c)
 *     CmpGetCorrectKcbLockOrder @ 0x140458A20 (CmpGetCorrectKcbLockOrder.c)
 *     CmpFreeKeyControlBlock @ 0x140491410 (CmpFreeKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 */

void __fastcall CmpUnlockTwoKcbs(void *a1, unsigned __int64 a2)
{
  bool v3; // di
  PVOID P; // [rsp+30h] [rbp+8h] BYREF
  PVOID v5; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    if ( !a2 || a1 == (void *)a2 )
    {
      CmpUnlockKcb(a1);
    }
    else
    {
      CmpGetCorrectKcbLockOrder((unsigned __int64)a1, a2, (unsigned __int64 *)&v5, (unsigned __int64 *)&P);
      CmpUnlockKcb(P);
      CmpUnlockKcb(v5);
    }
  }
  else if ( a2 )
  {
    v3 = (*(_DWORD *)(a2 + 4) & 0x80000) != 0;
    if ( *(struct _KTHREAD **)(a2 + 48) == KeGetCurrentThread() )
      *(_QWORD *)(a2 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 48));
    ExReleasePushLockEx(a2 + 40, 0LL);
    if ( (*(_DWORD *)(a2 + 4) & 0x100000) != 0 )
      CmpLockTableRemove(a2, *(_DWORD *)(a2 + 60));
    if ( v3 && (*(_DWORD *)(a2 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(a2);
  }
}
