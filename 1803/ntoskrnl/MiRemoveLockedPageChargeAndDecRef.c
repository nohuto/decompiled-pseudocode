/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8
 * Callers:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x140003FD0 (MiJumpStackTarget.c)
 *     MiProbeLockFrame @ 0x140020C00 (MiProbeLockFrame.c)
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiReturnPfnReferenceCount @ 0x14004CD68 (MiReturnPfnReferenceCount.c)
 *     MiInitializeImageProtos @ 0x14004DF48 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiFinishMdlForMappedFileFault @ 0x140057A28 (MiFinishMdlForMappedFileFault.c)
 *     MiResolveProtoCombine @ 0x140058068 (MiResolveProtoCombine.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007C9F8 (MiWaitForCollidedFaultComplete.c)
 *     MiLockProtoPage @ 0x1400B4D9C (MiLockProtoPage.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1400CB730 (MiUnlockNestedProtoPoolPage.c)
 *     MiUnlockPagedAddress @ 0x1400CEA8C (MiUnlockPagedAddress.c)
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 *     MiLockDownWorkingSet @ 0x140140AFC (MiLockDownWorkingSet.c)
 *     MiFinishLastForkPageTable @ 0x140142578 (MiFinishLastForkPageTable.c)
 *     MiMirrorPerformBrownWrites @ 0x14015649C (MiMirrorPerformBrownWrites.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1401830BC (MmDbgMarkPfnModifiedWorker.c)
 *     MiDeletePerSessionProtos @ 0x140267E68 (MiDeletePerSessionProtos.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x14026A8A4 (MiMakeImagePageOk.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageCharge @ 0x140031840 (MiRemoveLockedPageCharge.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = MiRemoveLockedPageCharge(a1, a2, a3, a4);
  if ( (_DWORD)result )
  {
    MiPfnReferenceCountIsZero(a1, (__int64)(a1 + 0x58000000000LL) / 48);
    return 1LL;
  }
  return result;
}
