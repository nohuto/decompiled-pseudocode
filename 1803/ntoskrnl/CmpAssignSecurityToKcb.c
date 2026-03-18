/*
 * XREFs of CmpAssignSecurityToKcb @ 0x140516C04
 * Callers:
 *     CmpAssignKeySecurity @ 0x140184F70 (CmpAssignKeySecurity.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404E1604 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140516AA4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCommitAddKeyUoW @ 0x1405DF9A8 (CmpCommitAddKeyUoW.c)
 *     CmpCommitSetSecurityUoW @ 0x1405F3504 (CmpCommitSetSecurityUoW.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140703F80 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x1407045D4 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404A9B50 (CmpFindSecurityCellCacheIndex.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

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
      ExAcquirePushLockSharedEx(v10 + 1776, 0LL);
    if ( CmpFindSecurityCellCacheIndex(v10, v5, &v14) )
    {
      if ( !a3 )
        *(_QWORD *)(BugCheckParameter3 + 80) = *(_QWORD *)(*(_QWORD *)(v10 + 1880) + 16LL * v14 + 8);
    }
    else
    {
      *(_QWORD *)(BugCheckParameter3 + 80) = 0LL;
      if ( !a5 )
        KeBugCheckEx(0x51u, 4uLL, 1uLL, BugCheckParameter3, v5);
      v9 = 0;
    }
    if ( !a4 )
      ExReleasePushLockEx(v10 + 1776, 0LL, v11, v12);
  }
  return v9;
}
