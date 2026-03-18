/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x140071350
 * Callers:
 *     MiLogPageAccess @ 0x1400112C0 (MiLogPageAccess.c)
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     MmFreeAccessPfnBuffer @ 0x140011CE0 (MmFreeAccessPfnBuffer.c)
 *     CcMapAndCopyInToCache @ 0x14001C320 (CcMapAndCopyInToCache.c)
 *     ExDeleteResourceLite @ 0x14001ED40 (ExDeleteResourceLite.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14002034C (CcDereferenceSharedCacheMapFileObject.c)
 *     IoReferenceIoAttributionFromThread @ 0x140020D8C (IoReferenceIoAttributionFromThread.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400668D0 (IoSetDiskIoAttributionFromThread.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     MiMakeSystemCacheRangeValid @ 0x140079590 (MiMakeSystemCacheRangeValid.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140083270 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400837A0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 *     ExpFreeOwnerEntry @ 0x140112FB0 (ExpFreeOwnerEntry.c)
 *     MmChangeSectionBackingFile @ 0x140127FAC (MmChangeSectionBackingFile.c)
 *     PfpServiceMainThreadUnboost @ 0x140239840 (PfpServiceMainThreadUnboost.c)
 *     PfpScenCtxScenarioSet @ 0x140429040 (PfpScenCtxScenarioSet.c)
 *     CmpFreePostBlock @ 0x14046FAD4 (CmpFreePostBlock.c)
 *     CmpDelayedDerefKeys @ 0x14047D8A8 (CmpDelayedDerefKeys.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140543848 (MiObtainSectionForDriver.c)
 *     ObpDeleteDirectoryObject @ 0x140592370 (ObpDeleteDirectoryObject.c)
 *     CmpRunDownCmRM @ 0x140597B4C (CmpRunDownCmRM.c)
 *     CmpCleanupTransactionState @ 0x1405E31E8 (CmpCleanupTransactionState.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406DC784 (NtAlpcImpersonateClientContainerOfPort.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1406F3658 (PfpServiceMainThreadBoostPrep.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 */

void __stdcall ObDereferenceObjectDeferDelete(PVOID Object)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  BugCheckParameter4 = v2 - 1;
  if ( v3 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion((char *)Object - 48);
  }
}
