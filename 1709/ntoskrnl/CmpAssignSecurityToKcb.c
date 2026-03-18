/*
 * XREFs of CmpAssignSecurityToKcb @ 0x1404765F8
 * Callers:
 *     CmpAssignKeySecurity @ 0x1401593C4 (CmpAssignKeySecurity.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404766A8 (CmpRebuildKcbCacheFromNode.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140476DE8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCommitAddKeyUoW @ 0x1405A590C (CmpCommitAddKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x1405A6FC8 (CmpCommitSetSecurityUoW.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14069E158 (CmpRefreshHive.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x14069ECA8 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14069F1D4 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404813C0 (CmpFindSecurityCellCacheIndex.c)
 */

char __fastcall CmpAssignSecurityToKcb(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        char a4,
        char a5)
{
  ULONG_PTR v5; // rbp
  char v9; // di
  __int64 v10; // rsi
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF

  v5 = (unsigned int)BugCheckParameter4;
  v9 = 1;
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(BugCheckParameter3 + 80) = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter3 + 24);
    if ( !a4 )
      ExAcquirePushLockSharedEx(v10 + 2952, 0LL);
    if ( (unsigned __int8)CmpFindSecurityCellCacheIndex(v10, (unsigned int)v5, &v12) )
    {
      if ( !a3 )
        *(_QWORD *)(BugCheckParameter3 + 80) = *(_QWORD *)(*(_QWORD *)(v10 + 3056) + 16LL * v12 + 8);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter3 + 80) = 0LL;
      if ( !a5 )
        KeBugCheckEx(0x51u, 4uLL, 1uLL, BugCheckParameter3, v5);
      v9 = 0;
    }
    if ( !a4 )
      ExReleasePushLockEx(v10 + 2952, 0LL);
  }
  return v9;
}
