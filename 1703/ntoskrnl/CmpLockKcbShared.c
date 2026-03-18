/*
 * XREFs of CmpLockKcbShared @ 0x1404FF9AC
 * Callers:
 *     NtFlushKey @ 0x140455BC8 (NtFlushKey.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140459E68 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     NtNotifyChangeMultipleKeys @ 0x14048E630 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x14048FF38 (CmQueryMultipleValueKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1404917CC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpCloseKeyObject @ 0x1404CDE90 (CmpCloseKeyObject.c)
 *     CmpQueryKeyName @ 0x1404FC190 (CmpQueryKeyName.c)
 *     CmpLockTwoKcbsShared @ 0x1404FDFB4 (CmpLockTwoKcbsShared.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateValueKey @ 0x1404FF740 (CmEnumerateValueKey.c)
 *     CmpLockKcbStackShared @ 0x1404FF968 (CmpLockKcbStackShared.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14056C82C (CmKeyBodyNeedsVirtualImage.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140572568 (CmpFindSubkeyInHashByChildCell.c)
 *     CmKeyBodyRemapToVirtual @ 0x140666A94 (CmKeyBodyRemapToVirtual.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14066D79C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmDumpKey @ 0x140671674 (CmDumpKey.c)
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140672300 (CmSaveKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     CmpLockTableAdd @ 0x1401DFA5C (CmpLockTableAdd.c)
 */

__int64 __fastcall CmpLockKcbShared(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 4) & 0x100000) != 0 )
    *(_DWORD *)(a1 + 60) = CmpLockTableAdd(a1, 0);
  result = ExAcquirePushLockSharedEx(a1 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
  return result;
}
