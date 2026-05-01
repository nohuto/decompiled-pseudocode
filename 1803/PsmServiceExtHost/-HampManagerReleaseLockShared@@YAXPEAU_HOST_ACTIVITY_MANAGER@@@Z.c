/*
 * XREFs of ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180064540
 * Callers:
 *     ?HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU1@@Z @ 0x1800643BC (-HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180064564 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180065FE0 (-HampPdcWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAK@Z @ 0x180068534 (-HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAK@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180014260 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampManagerReleaseLockShared(struct _HOST_ACTIVITY_MANAGER *a1, __int64 a2)
{
  CempLockTrackerMarkReleased((__int64)a1, a2, 0xAu);
  RtlReleaseSRWLockShared(a1);
}
