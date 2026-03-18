/*
 * XREFs of CmpLockTwoKcbsShared @ 0x1404827AC
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140478DFC (CmQueryMultipleValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14047A598 (NtNotifyChangeMultipleKeys.c)
 *     CmEnumerateKey @ 0x140482020 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1404A7650 (CmQueryKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140562984 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14068FF9C (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x14069D67C (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     CmpGetCorrectKcbLockOrder @ 0x140562948 (CmpGetCorrectKcbLockOrder.c)
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
    if ( !a2 || a1 == a2 )
    {
      v5 = a1 + 40;
    }
    else
    {
      CmpGetCorrectKcbLockOrder(a1, a2, &v7, &v8);
      v6 = v7;
      ExAcquirePushLockSharedEx(v7 + 40, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 48));
      v3 = v8;
      v5 = v8 + 40;
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
