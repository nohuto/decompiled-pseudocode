/*
 * XREFs of MmIsSessionAddress @ 0x140112130
 * Callers:
 *     ViAvlNodeInitializeSessionId @ 0x14006E100 (ViAvlNodeInitializeSessionId.c)
 *     KiAbFindWakeupLockEntry @ 0x140111C7C (KiAbFindWakeupLockEntry.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140111DC0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     KeAcquireGuardedMutex @ 0x140111ED0 (KeAcquireGuardedMutex.c)
 *     FsRtlAcquireHeaderMutex @ 0x140112010 (FsRtlAcquireHeaderMutex.c)
 *     KiLockExtendedServiceTable @ 0x140173EEC (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 *     MmEnumerateSystemImages @ 0x1404B0CF8 (MmEnumerateSystemImages.c)
 *     KseDriverLoadImage @ 0x1404B4B60 (KseDriverLoadImage.c)
 *     EtwpAddKmRegEntry @ 0x1405523C0 (EtwpAddKmRegEntry.c)
 *     PnpInitializeNotifyEntry @ 0x140571770 (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x140571900 (PnpNotifyDriverCallback.c)
 *     KseDriverUnloadImage @ 0x1405846F8 (KseDriverUnloadImage.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407654D0 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDriverEnableVerifierForAll @ 0x1407671E4 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoInitializeWorkItem @ 0x140767D60 (VerifierIoInitializeWorkItem.c)
 *     VfThunkApplyMandatoryThunks @ 0x14077427C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140774350 (VfThunkApplyThunks.c)
 *     ExpDebuggerWorker @ 0x140789040 (ExpDebuggerWorker.c)
 *     KdpSendWaitContinue @ 0x14078AC78 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsSessionAddress(unsigned __int64 a1)
{
  return a1 >= 0xFFFF800000000000uLL && byte_14036D700[((a1 >> 39) & 0x1FF) - 256] == 1;
}
