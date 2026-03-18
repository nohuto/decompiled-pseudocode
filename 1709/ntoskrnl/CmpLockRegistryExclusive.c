/*
 * XREFs of CmpLockRegistryExclusive @ 0x1404E3BCC
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmpCommitLightWeightTransaction @ 0x14044B9BC (CmpCommitLightWeightTransaction.c)
 *     CmFreezeRegistry @ 0x14044E168 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14044F478 (CmThawRegistry.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmEnumerateKey @ 0x140482020 (CmEnumerateKey.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1404E3B7C (CmpLockRegistryFreezeAware.c)
 *     CmpCleanupLightWeightTransaction @ 0x1405689D4 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 *     CmpDelayFreeRMWorker @ 0x14059C380 (CmpDelayFreeRMWorker.c)
 *     CmpSaveBootControlSet @ 0x1405A4B40 (CmpSaveBootControlSet.c)
 *     CmpTransMgrCommitUoW @ 0x1405A5398 (CmpTransMgrCommitUoW.c)
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     CmpFinishSystemHivesLoad @ 0x1405C09E0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1405C2F10 (CmpMountPreloadedHives.c)
 *     CmpMarkCurrentProfileDirty @ 0x1405C3490 (CmpMarkCurrentProfileDirty.c)
 *     CmpCleanupTransactionState @ 0x1405E31E8 (CmpCleanupTransactionState.c)
 *     NtCompactKeys @ 0x1406876C0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140687910 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140687BF0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140687E00 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x14068812C (NtRenameKey.c)
 *     CmEtwRunDown @ 0x140689AF4 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCloneHwProfile @ 0x140698898 (CmpCloneHwProfile.c)
 *     CmpLoadHiveVolatile @ 0x14069DCAC (CmpLoadHiveVolatile.c)
 *     CmGetSystemDriverList @ 0x140835884 (CmGetSystemDriverList.c)
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite((PERESOURCE)&CmpRegistryLock, 1u);
}
