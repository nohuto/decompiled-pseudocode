/*
 * XREFs of KeReleaseMutex @ 0x1400DDCF0
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x140020014 (WmipBuildTraceDeviceList.c)
 *     WmipFindRegEntryByProviderId @ 0x14006E798 (WmipFindRegEntryByProviderId.c)
 *     WmipReceiveNotifications @ 0x1401223D4 (WmipReceiveNotifications.c)
 *     WmiQueryTraceProviderCount @ 0x14013FF40 (WmiQueryTraceProviderCount.c)
 *     WmipDeregisterRegEntry @ 0x1401530D4 (WmipDeregisterRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x14015420C (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x140154290 (WmipAllocRegEntry.c)
 *     WmipDeleteMethod @ 0x140433520 (WmipDeleteMethod.c)
 *     WmipDisableCollectOrEvent @ 0x140433618 (WmipDisableCollectOrEvent.c)
 *     EtwpUpdateKernelGroupMasks @ 0x1404350C0 (EtwpUpdateKernelGroupMasks.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14043C110 (WmipSendWmiIrpToTraceDeviceList.c)
 *     WmipEnumerateMofResources @ 0x140457450 (WmipEnumerateMofResources.c)
 *     EtwpStartTrace @ 0x14045C080 (EtwpStartTrace.c)
 *     PnpDeviceEventWorker @ 0x1404A58F0 (PnpDeviceEventWorker.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     WmipUnreferenceEntry @ 0x1404BECD0 (WmipUnreferenceEntry.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpDisableTraceProviders @ 0x140552644 (EtwpDisableTraceProviders.c)
 *     WmipOpenBlock @ 0x140554E90 (WmipOpenBlock.c)
 *     WmipPrepareForWnodeAD @ 0x140555088 (WmipPrepareForWnodeAD.c)
 *     WmipFindGEByGuid @ 0x140555288 (WmipFindGEByGuid.c)
 *     WmipEnableCollectOrEvent @ 0x140557544 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x140557884 (WmipIsQuerySetGuid.c)
 *     WmipPrepareWnodeSI @ 0x140580A10 (WmipPrepareWnodeSI.c)
 *     WmipProcessEvent @ 0x140580EBC (WmipProcessEvent.c)
 *     WmipSendEnableDisableRequest @ 0x140581C7C (WmipSendEnableDisableRequest.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1405840F8 (WmipGetGuidObjectInstanceInfo.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140594C60 (EtwpCrimsonProvEnableCallback.c)
 *     WmipDSCleanup @ 0x140595880 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140595CB0 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDeregisterDevice @ 0x14059962C (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x14059FCD0 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14059FDA8 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x14059FF10 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14059FFE8 (WmipUpdateDeviceStackSize.c)
 *     WmipSetTraceNotify @ 0x1405A0034 (WmipSetTraceNotify.c)
 *     WmipAddDataSource @ 0x1405A03B8 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1405A0A10 (WmipDetermineInstanceBaseIndex.c)
 *     WmipFindISinGEbyName @ 0x1405A0BD0 (WmipFindISinGEbyName.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405A0E6C (WmipEnableCollectionForNewGuid.c)
 *     WmipAddMofResource @ 0x1405A12B0 (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x1405A14F4 (WmipFindMRByNames.c)
 *     WmipRegistrationWorker @ 0x1405C6890 (WmipRegistrationWorker.c)
 *     EtwpUpdateDisallowedGuids @ 0x1405C7CC4 (EtwpUpdateDisallowedGuids.c)
 *     WmipLegacyEtwWorker @ 0x1405CC580 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1405CC6B4 (WmipProcessLegacyEtwRegister.c)
 *     IoWMISetNotificationCallback @ 0x1405D50A0 (IoWMISetNotificationCallback.c)
 *     WmipLegacyEtwCallback @ 0x1405D9150 (WmipLegacyEtwCallback.c)
 *     PopDiagNextCsSleepStudySession @ 0x1406CC0BC (PopDiagNextCsSleepStudySession.c)
 *     PopDiagStopCsSleepStudySession @ 0x1406CC424 (PopDiagStopCsSleepStudySession.c)
 *     PopSleepStudyTaskClientTimerWorker @ 0x1406CEBC0 (PopSleepStudyTaskClientTimerWorker.c)
 *     IoWMIAllocateInstanceIds @ 0x140706870 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x140707490 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x140707C28 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x140707E48 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x140707FDC (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x140708584 (WmipQueryGuidInfo.c)
 *     WmipUpdateDataSource @ 0x14070924C (WmipUpdateDataSource.c)
 *     WmipWaitForCollectionEnabled @ 0x1407097B8 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x140709BD0 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x140709DA0 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x14070C004 (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x14070CEA0 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x14070F108 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x14070F15C (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x140711320 (EtwpSampledProfileRunDown.c)
 *     NtStartProfile @ 0x140720BEC (NtStartProfile.c)
 *     NtStopProfile @ 0x140720E4C (NtStopProfile.c)
 *     sub_140726100 @ 0x140726100 (sub_140726100.c)
 *     MmIsDriverSuspectForVerifier @ 0x1407624C0 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x140767064 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1407671E4 (VfDriverEnableVerifierForAll.c)
 *     VfDriverUnlock @ 0x14076730C (VfDriverUnlock.c)
 *     ViDriverReApplyVerifierForAll @ 0x14076742C (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x140773F3C (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140773FC0 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x14077B4F8 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x14077B740 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x14077BABC (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x14077BB48 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x140787E8C (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x14078808C (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x14078818C (VfSetVerifierInformationEx.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseMutex(PRKMUTEX Mutex, BOOLEAN Wait)
{
  _KTHREAD *CurrentThread; // r14
  int v3; // edi
  int ApcDisable; // r12d
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r15
  int SignalState; // ebp
  _KTHREAD *OwnerThread; // rsi
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v12; // r13
  struct _LIST_ENTRY *v14; // rdx
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // rax
  char v17; // al
  bool v18; // zf
  NTSTATUS v19; // ecx
  unsigned __int8 IsThreadRunning; // al
  __int64 v21; // rdx
  __int64 v22; // r9
  volatile signed __int32 *v23; // r8
  volatile signed __int32 *v24; // rcx
  char v25; // al
  int v26; // r10d
  volatile signed __int32 **v27; // r9
  struct _LIST_ENTRY *v28; // [rsp+30h] [rbp-88h]
  struct _KPRCB *v29; // [rsp+38h] [rbp-80h]
  _KTHREAD *v30; // [rsp+40h] [rbp-78h]
  unsigned __int8 v31; // [rsp+48h] [rbp-70h]
  char v32[8]; // [rsp+50h] [rbp-68h] BYREF
  LONG LockNV; // [rsp+58h] [rbp-60h]
  int v34; // [rsp+C0h] [rbp+8h] BYREF
  BOOLEAN v35; // [rsp+C8h] [rbp+10h]
  volatile signed __int32 *v36; // [rsp+D0h] [rbp+18h]
  volatile signed __int32 *v37; // [rsp+D8h] [rbp+20h]

  v35 = Wait;
  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  ApcDisable = 0;
  CurrentIrql = KeGetCurrentIrql();
  v31 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&Mutex->Header.Lock);
  SignalState = Mutex->Header.SignalState;
  if ( Mutex->OwnerThread != CurrentThread || Mutex->Header.Size != CurrentPrcb->DpcRoutineActive )
  {
    _InterlockedAnd(&Mutex->Header.Lock, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    v19 = -1073741754;
    if ( Mutex->Abandoned )
      v19 = 128;
    RtlRaiseStatus(v19);
  }
  if ( ++Mutex->Header.SignalState == 1 && SignalState <= 0 )
  {
    LockNV = Mutex->Header.LockNV;
    BYTE2(LockNV) = 0;
    Mutex->Header.LockNV = LockNV;
    ApcDisable = Mutex->ApcDisable;
    OwnerThread = Mutex->OwnerThread;
    v34 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v34);
      while ( OwnerThread->ThreadLock );
    }
    Flink = Mutex->MutantListEntry.Flink;
    Blink = Mutex->MutantListEntry.Blink;
    if ( Flink->Blink != &Mutex->MutantListEntry || Blink->Flink != &Mutex->MutantListEntry )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    OwnerThread->ThreadLock = 0LL;
    v12 = Mutex->Header.WaitListHead.Flink;
    Mutex->OwnerThread = 0LL;
    if ( v12 == &Mutex->Header.WaitListHead )
    {
LABEL_10:
      CurrentIrql = v31;
      goto LABEL_11;
    }
    while ( 1 )
    {
      v14 = v12;
      v12 = v12->Flink;
      v28 = v14;
      v15 = v14->Flink;
      v16 = v14->Blink;
      if ( v14->Flink->Blink != v14 || v16->Flink != v14 )
        __fastfail(3u);
      v16->Flink = v15;
      v15->Blink = v16;
      v17 = (char)v14[1].Flink;
      if ( v17 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v14, WORD1(v14[1].Flink), v32) )
        {
          v18 = Mutex->Header.SignalState-- == 1;
          if ( v18 )
            goto LABEL_10;
        }
      }
      else
      {
        if ( v17 == 2 )
        {
          BYTE1(v14[1].Flink) = 5;
          v36 = (volatile signed __int32 *)v14[1].Blink;
          v37 = v36 + 2;
          v14->Flink = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v29 = KeGetCurrentPrcb();
          v30 = v29->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v29->CurrentThread);
            EtwTraceEnqueueWork(v22, v21, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v36);
          v23 = v37;
          v24 = v36;
          if ( *(volatile signed __int32 **)v23 == v23
            || *((_DWORD *)v36 + 10) >= *((_DWORD *)v36 + 11)
            || (volatile signed __int32 *)v30->Queue == v36 && v30->WaitReason == 15 )
          {
LABEL_36:
            v26 = *((_DWORD *)v24 + 1);
            *((_DWORD *)v24 + 1) = v26 + 1;
            v27 = (volatile signed __int32 **)*((_QWORD *)v24 + 4);
            if ( *v27 != v24 + 6 )
              __fastfail(3u);
            v28->Flink = (struct _LIST_ENTRY *)(v24 + 6);
            v28->Blink = (struct _LIST_ENTRY *)v27;
            *v27 = (volatile signed __int32 *)v28;
            *((_QWORD *)v24 + 4) = v28;
            if ( !v26 && *(volatile signed __int32 **)v23 != v23 )
            {
              KiWakeOtherQueueWaiters((__int64)v29, (__int64)v24);
              v24 = v36;
            }
          }
          else
          {
            v25 = KiWakeQueueWaiter((__int64)v29, (__int64)v36, (__int64)v28);
            v24 = v36;
            if ( !v25 )
            {
              v23 = v37;
              goto LABEL_36;
            }
          }
          _InterlockedAnd(v24, 0xFFFFFF7F);
          v18 = Mutex->Header.SignalState-- == 1;
          if ( v18 )
            goto LABEL_10;
          goto LABEL_43;
        }
        KiTryUnwaitThread(CurrentPrcb, v14, 256LL, 0LL);
      }
LABEL_43:
      if ( v12 == &Mutex->Header.WaitListHead )
        goto LABEL_10;
    }
  }
LABEL_11:
  _InterlockedAnd(&Mutex->Header.Lock, 0xFFFFFF7F);
  if ( v35 )
    v3 = 3;
  KiExitDispatcher((_DWORD)CurrentPrcb, v3, 1, 1, CurrentIrql);
  if ( ApcDisable )
    KiLeaveCriticalRegionUnsafe(CurrentThread);
  return SignalState;
}
