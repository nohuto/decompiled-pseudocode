/*
 * XREFs of CmpDestroyHive @ 0x1406F76D8
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400070F8 (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140497D1C (CmpReorganizeHive.c)
 *     CmLoadKey @ 0x14057F140 (CmLoadKey.c)
 *     CmpFreeAllMemory @ 0x1406F052C (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x1406F1CD8 (CmReplaceKey.c)
 *     CmpCreateEmptyHiveClone @ 0x1406F753C (CmpCreateEmptyHiveClone.c)
 *     CmpFlushBackupHive @ 0x1406F9154 (CmpFlushBackupHive.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 *     CmSaveKey @ 0x1407022E4 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407025D4 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140702BD0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14070306C (CmpRefreshHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     HvHiveCleanup @ 0x140513E70 (HvHiveCleanup.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 *     CmpCmdHiveClose @ 0x14054DC44 (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x14054DD80 (CmpDestroySecurityCache.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14054E060 (CmpVolumeContextDecrementRefCount.c)
 *     CmpRemoveHiveFromMapping @ 0x1405EEB4C (CmpRemoveHiveFromMapping.c)
 */

void __fastcall CmpDestroyHive(char *P)
{
  char *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  char **v6; // rax
  struct _PRIVILEGE_SET *v7; // rcx

  CmpDestroySecurityCache((__int64)P);
  v2 = P + 4160;
  if ( *(char **)v2 != v2 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    v5 = *(_QWORD *)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v6 = (char **)*((_QWORD *)P + 521), *v6 != v2) )
      __fastfail(3u);
    *v6 = (char *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL, v3, v4);
  }
  if ( (*((_DWORD *)P + 1038) & 2) != 0 )
    CmpRemoveHiveFromMapping((__int64)P);
  HvHiveCleanup((__int64)P);
  CmpCmdHiveClose((__int64)P);
  v7 = (struct _PRIVILEGE_SET *)*((_QWORD *)P + 606);
  if ( v7 )
    CmpVolumeContextDecrementRefCount(v7);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1072, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
}
