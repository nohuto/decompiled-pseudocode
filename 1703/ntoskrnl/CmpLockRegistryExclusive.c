/*
 * XREFs of CmpLockRegistryExclusive @ 0x1404D85A8
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     CmpCleanupTransactionState @ 0x14042D17C (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x14042D494 (CmpCleanupLightWeightTransaction.c)
 *     CmpDelayFreeRMWorker @ 0x14045BFA0 (CmpDelayFreeRMWorker.c)
 *     CmpTransMgrCommitUoW @ 0x1404CDAB8 (CmpTransMgrCommitUoW.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404CE2D0 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     CmEnumerateKey @ 0x1404FD790 (CmEnumerateKey.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14056AABC (CmKeyBodyReplicateToVirtual.c)
 *     NtInitializeRegistry @ 0x140585198 (NtInitializeRegistry.c)
 *     CmpSaveBootControlSet @ 0x14058D508 (CmpSaveBootControlSet.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3DE0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x1405D2B18 (CmpMarkCurrentProfileDirty.c)
 *     NtCompactKeys @ 0x14065E844 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14065EA94 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x14065EDDC (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14065EFBC (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x14065F2B4 (NtRenameKey.c)
 *     CmEtwRunDown @ 0x140660B64 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x140664FCC (CmpEnumerateLayeredKey.c)
 *     CmFreezeRegistry @ 0x1406689BC (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140668BE4 (CmThawRegistry.c)
 *     CmpCommitLightWeightTransaction @ 0x140669900 (CmpCommitLightWeightTransaction.c)
 *     CmpCloneHwProfile @ 0x14066E3A0 (CmpCloneHwProfile.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 *     CmGetSystemDriverList @ 0x1407F67B8 (CmGetSystemDriverList.c)
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 * Callees:
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite((PERESOURCE)&CmpRegistryLock, 1u);
}
