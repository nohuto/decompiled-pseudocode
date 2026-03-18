/*
 * XREFs of MmIsSessionAddress @ 0x140103610
 * Callers:
 *     KeAcquireGuardedMutex @ 0x140007950 (KeAcquireGuardedMutex.c)
 *     KiAbFindWakeupLockEntry @ 0x140064594 (KiAbFindWakeupLockEntry.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1400A56E0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlAcquireHeaderMutex @ 0x140103650 (FsRtlAcquireHeaderMutex.c)
 *     ViAvlNodeInitializeSessionId @ 0x140161744 (ViAvlNodeInitializeSessionId.c)
 *     KiLockExtendedServiceTable @ 0x1401928C8 (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 *     CmpIsBufferGloballyVisible @ 0x1404A17C8 (CmpIsBufferGloballyVisible.c)
 *     PnpInitializeNotifyEntry @ 0x1405E2768 (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x1405E28F8 (PnpNotifyDriverCallback.c)
 *     KseDriverLoadImage @ 0x1405FE1AC (KseDriverLoadImage.c)
 *     KseDriverUnloadImage @ 0x140600748 (KseDriverUnloadImage.c)
 *     EtwpAddKmRegEntry @ 0x140602220 (EtwpAddKmRegEntry.c)
 *     MmEnumerateSystemImages @ 0x14062991C (MmEnumerateSystemImages.c)
 *     ExpDebuggerWorker @ 0x140803030 (ExpDebuggerWorker.c)
 *     KdpSendWaitContinue @ 0x140804F74 (KdpSendWaitContinue.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140814224 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDriverEnableVerifierForAll @ 0x140815DC0 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoInitializeWorkItem @ 0x1408169D0 (VerifierIoInitializeWorkItem.c)
 *     VfThunkApplyMandatoryThunks @ 0x140823D28 (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140823DFC (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

bool __fastcall MmIsSessionAddress(unsigned __int64 a1)
{
  int v1; // ecx

  if ( a1 < 0xFFFF800000000000uLL )
    v1 = 0;
  else
    v1 = (unsigned __int8)byte_1403CCF90[((a1 >> 39) & 0x1FF) - 256];
  return v1 == 1;
}
