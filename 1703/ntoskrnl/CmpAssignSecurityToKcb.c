/*
 * XREFs of CmpAssignSecurityToKcb @ 0x1404D0F50
 * Callers:
 *     CmpAssignKeySecurity @ 0x140165FEC (CmpAssignKeySecurity.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404BF12C (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404D0DFC (CmpRebuildKcbCacheFromNode.c)
 *     CmpCommitAddKeyUoW @ 0x140571D00 (CmpCommitAddKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x14059B280 (CmpCommitSetSecurityUoW.c)
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14067309C (CmpRefreshHive.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140673D30 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14067433C (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     CmpFindSecurityCellCacheIndex @ 0x14048E4D4 (CmpFindSecurityCellCacheIndex.c)
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
    if ( CmpFindSecurityCellCacheIndex(v10, v5, &v12) )
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
