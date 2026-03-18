/*
 * XREFs of CmpLockTwoKcbsShared @ 0x1404FDFB4
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14048E630 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x14048FF38 (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x1404FD790 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140572568 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14066668C (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x1406725A8 (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     CmpLockTableAdd @ 0x1401DFA5C (CmpLockTableAdd.c)
 *     CmpGetCorrectKcbLockOrder @ 0x140458A20 (CmpGetCorrectKcbLockOrder.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 */

void __fastcall CmpLockTwoKcbsShared(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    if ( !a2 || a1 == a2 )
    {
      CmpLockKcbShared(a1);
    }
    else
    {
      CmpGetCorrectKcbLockOrder(a1, a2, &v3, &v4);
      CmpLockKcbShared(v3);
      CmpLockKcbShared(v4);
    }
  }
  else if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 4) & 0x100000) != 0 )
      *(_DWORD *)(a2 + 60) = CmpLockTableAdd(a2, 0);
    ExAcquirePushLockSharedEx(a2 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
  }
}
