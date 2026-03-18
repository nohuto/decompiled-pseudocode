/*
 * XREFs of MmIsSessionAddress @ 0x140083FA0
 * Callers:
 *     FsRtlAcquireHeaderMutex @ 0x140083FE0 (FsRtlAcquireHeaderMutex.c)
 *     KiAbFindWakeupLockEntry @ 0x1400A82C0 (KiAbFindWakeupLockEntry.c)
 *     KeAcquireGuardedMutex @ 0x1400BA8B0 (KeAcquireGuardedMutex.c)
 *     ViAvlNodeInitializeSessionId @ 0x1400F9C94 (ViAvlNodeInitializeSessionId.c)
 *     KiLockExtendedServiceTable @ 0x1401687E8 (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 *     EtwpAddKmRegEntry @ 0x1404F0DD8 (EtwpAddKmRegEntry.c)
 *     KseDriverLoadImage @ 0x140546568 (KseDriverLoadImage.c)
 *     PnpInitializeNotifyEntry @ 0x140586388 (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x140586518 (PnpNotifyDriverCallback.c)
 *     KseDriverUnloadImage @ 0x14059E4D8 (KseDriverUnloadImage.c)
 *     MmEnumerateSystemImages @ 0x1406E2040 (MmEnumerateSystemImages.c)
 *     ExpDebuggerWorker @ 0x140796030 (ExpDebuggerWorker.c)
 *     KdpSendWaitContinue @ 0x140797EA0 (KdpSendWaitContinue.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407A70A4 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDriverEnableVerifierForAll @ 0x1407A8D88 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoInitializeWorkItem @ 0x1407A9970 (VerifierIoInitializeWorkItem.c)
 *     VfThunkApplyMandatoryThunks @ 0x1407B6038 (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1407B610C (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsSessionAddress(unsigned __int64 a1)
{
  return a1 >= 0xFFFF800000000000uLL && byte_1403899D0[((a1 >> 39) & 0x1FF) - 256] == 1;
}
