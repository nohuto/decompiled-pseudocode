/*
 * XREFs of CmpRecheckHiveVolumePolicy @ 0x140006AD0
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400070F8 (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     CmpFinishSystemHivesLoad @ 0x14062E4B0 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x1406329A0 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     HvUnlockHiveFilePages @ 0x140495980 (HvUnlockHiveFilePages.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140496614 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140496644 (HvLockHiveFlusherExclusive.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140496660 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpRecheckHiveVolumePolicy(__int64 a1)
{
  CmpLockRegistry();
  HvLockHiveFlusherExclusive(a1);
  if ( *(_QWORD *)(a1 + 4848) && !(unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal() )
    HvUnlockHiveFilePages(a1);
  HvUnlockHiveFlusherExclusive(a1);
  return CmpUnlockRegistry();
}
