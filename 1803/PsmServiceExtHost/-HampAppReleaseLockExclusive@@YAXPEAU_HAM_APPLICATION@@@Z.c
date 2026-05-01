/*
 * XREFs of ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009928
 * Callers:
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180007800 (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z @ 0x180007F28 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z.c)
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009680 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000B204 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 *     ?HampAppCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_HAM_APPLICATION@@K@Z @ 0x18004069C (-HampAppCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_HAM_APPLICATION@@K@Z.c)
 *     ?HampAppInterruptiveUIChangeWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180040780 (-HampAppInterruptiveUIChangeWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180014260 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampAppReleaseLockExclusive(struct _HAM_APPLICATION *a1, __int64 a2)
{
  CempLockTrackerMarkReleased(a1, a2, 5LL);
  *((_DWORD *)a1 + 146) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 576);
}
