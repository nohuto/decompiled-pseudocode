/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x140030A90
 * Callers:
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x14002AE10 (MiFinishMdlForMappedFileFault.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiReturnPfnReferenceCount @ 0x1400B7758 (MiReturnPfnReferenceCount.c)
 *     MiProbeLockFrame @ 0x1400BDD10 (MiProbeLockFrame.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x1400CE138 (MiSwapStackPage.c)
 *     MiFinishLastForkPageTable @ 0x1400CED2C (MiFinishLastForkPageTable.c)
 *     MiJumpStackTarget @ 0x1400D00F0 (MiJumpStackTarget.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 *     MiInitializeImageProtos @ 0x1400ECF10 (MiInitializeImageProtos.c)
 *     MiLockProtoPage @ 0x14010C430 (MiLockProtoPage.c)
 *     MiLockDownWorkingSet @ 0x140120080 (MiLockDownWorkingSet.c)
 *     MiWaitForCollidedFaultComplete @ 0x140125424 (MiWaitForCollidedFaultComplete.c)
 *     MiUnlockPagedAddress @ 0x14012BF78 (MiUnlockPagedAddress.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140131C48 (MiUnlockNestedProtoPoolPage.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140156BE8 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeImagePageOk @ 0x14015AE38 (MiMakeImagePageOk.c)
 *     MiCaptureProtectionFromProto @ 0x1402292FC (MiCaptureProtectionFromProto.c)
 *     MiDeletePerSessionProtos @ 0x14022DCD4 (MiDeletePerSessionProtos.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 * Callees:
 *     MiRemoveLockedPageCharge @ 0x140030B80 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(__int64 a1)
{
  __int64 result; // rax

  result = MiRemoveLockedPageCharge(a1);
  if ( (_DWORD)result )
  {
    MiPfnReferenceCountIsZero(a1, (a1 + 0x58000000000LL) / 48);
    return 1LL;
  }
  return result;
}
