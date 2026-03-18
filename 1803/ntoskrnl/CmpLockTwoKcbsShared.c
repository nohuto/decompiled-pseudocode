/*
 * XREFs of CmpLockTwoKcbsShared @ 0x1404ACECC
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1404A26F0 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x1404A3418 (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x1404ACAA0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405E2080 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1406F3B38 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x1407025D4 (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     CmpGetCorrectKcbLockOrder @ 0x14057FA1C (CmpGetCorrectKcbLockOrder.c)
 */

__int64 __fastcall CmpLockTwoKcbsShared(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  ULONG_PTR v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != a2 )
      {
        CmpGetCorrectKcbLockOrder(a1, a2, &v7, &v8);
        v6 = v7;
        ExAcquirePushLockSharedEx(v7 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 48));
        v3 = v8;
      }
      v5 = v3 + 40;
    }
    else
    {
      v5 = a1 + 40;
    }
    result = ExAcquirePushLockSharedEx(v5, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 48));
  }
  else if ( a2 )
  {
    result = ExAcquirePushLockSharedEx(a2 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
  }
  return result;
}
