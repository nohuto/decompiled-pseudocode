/*
 * XREFs of KeReleaseMutex @ 0x1400760B0
 * Callers:
 *     WmipFindRegEntryByProviderId @ 0x1400DEAE4 (WmipFindRegEntryByProviderId.c)
 *     WmipReceiveNotifications @ 0x14011FCA4 (WmipReceiveNotifications.c)
 *     WmipAllocRegEntry @ 0x140123F48 (WmipAllocRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x14012402C (WmipFindRegEntryByDevice.c)
 *     WmipDeregisterRegEntry @ 0x1401240E0 (WmipDeregisterRegEntry.c)
 *     WmiQueryTraceProviderCount @ 0x140279EB0 (WmiQueryTraceProviderCount.c)
 *     WmipBuildTraceDeviceList @ 0x140279F5C (WmipBuildTraceDeviceList.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpDisableTraceProviders @ 0x1404EF090 (EtwpDisableTraceProviders.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1404F2400 (EtwpCrimsonProvEnableCallback.c)
 *     WmipEnableCollectionForNewGuid @ 0x14051C2C4 (WmipEnableCollectionForNewGuid.c)
 *     WmipIsQuerySetGuid @ 0x14051EA94 (WmipIsQuerySetGuid.c)
 *     WmipDeleteMethod @ 0x14051EB00 (WmipDeleteMethod.c)
 *     WmipEnableCollectOrEvent @ 0x14051EBF8 (WmipEnableCollectOrEvent.c)
 *     WmipUnreferenceEntry @ 0x14051EF80 (WmipUnreferenceEntry.c)
 *     WmipPrepareWnodeSI @ 0x14051F40C (WmipPrepareWnodeSI.c)
 *     WmipOpenBlock @ 0x14051FDE8 (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x14051FFE0 (WmipFindGEByGuid.c)
 *     SPCallServerHandleQueryPolicy @ 0x140536700 (SPCallServerHandleQueryPolicy.c)
 *     WmipAddDataSource @ 0x140545304 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140545978 (WmipDetermineInstanceBaseIndex.c)
 *     WmipFindISinGEbyName @ 0x140545B38 (WmipFindISinGEbyName.c)
 *     PnpDeviceEventWorker @ 0x14054B420 (PnpDeviceEventWorker.c)
 *     WmipProcessEvent @ 0x140567EA4 (WmipProcessEvent.c)
 *     WmipEnumerateMofResources @ 0x14057A510 (WmipEnumerateMofResources.c)
 *     WmipDeregisterDevice @ 0x14057F230 (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x14057F320 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14057F3F8 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x14057F56C (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14057F644 (WmipUpdateDeviceStackSize.c)
 *     WmipPrepareForWnodeAD @ 0x140588B24 (WmipPrepareForWnodeAD.c)
 *     WmipRegistrationWorker @ 0x14058E000 (WmipRegistrationWorker.c)
 *     WmipDSCleanup @ 0x1405905A0 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140593B58 (WmipDisableCollectionForRemovedGuid.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140596CD8 (EtwpUpdateGlobalGroupMasks.c)
 *     WmipDisableCollectOrEvent @ 0x14059D448 (WmipDisableCollectOrEvent.c)
 *     EtwpStartTrace @ 0x14059D5E4 (EtwpStartTrace.c)
 *     WmipAddMofResource @ 0x1405C7E4C (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x1405C808C (WmipFindMRByNames.c)
 *     WmipSendEnableDisableRequest @ 0x1405D5EF0 (WmipSendEnableDisableRequest.c)
 *     WmipSetTraceNotify @ 0x1405DF154 (WmipSetTraceNotify.c)
 *     WmipLegacyEtwWorker @ 0x1405E1EA0 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1405E1FB8 (WmipProcessLegacyEtwRegister.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1405E5038 (WmipGetGuidObjectInstanceInfo.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x1405EB240 (SPCallServerHandleWaitForDisplayWindow.c)
 *     IoWMISetNotificationCallback @ 0x1405F1540 (IoWMISetNotificationCallback.c)
 *     PopDiagNextCsSleepStudySession @ 0x1407014E4 (PopDiagNextCsSleepStudySession.c)
 *     PopDiagStopCsSleepStudySession @ 0x1407016F4 (PopDiagStopCsSleepStudySession.c)
 *     PopSleepStudyTaskClientTimerWorker @ 0x140706190 (PopSleepStudyTaskClientTimerWorker.c)
 *     IoWMIAllocateInstanceIds @ 0x140740400 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x14074107C (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x140741814 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x140741A38 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x140741BCC (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x140742174 (WmipQueryGuidInfo.c)
 *     WmipLegacyEtwCallback @ 0x140742AF0 (WmipLegacyEtwCallback.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140742D38 (WmipSendWmiIrpToTraceDeviceList.c)
 *     WmipUpdateDataSource @ 0x14074326C (WmipUpdateDataSource.c)
 *     WmipWaitForCollectionEnabled @ 0x1407437D8 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x140743D7C (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x140743FB4 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x14074764C (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x140748538 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x14074AD54 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x14074ADB0 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x14074E9E4 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x140751C2C (EtwpUpdateDisallowedGuids.c)
 *     NtStartProfile @ 0x140760AE4 (NtStartProfile.c)
 *     NtStopProfile @ 0x140760D44 (NtStopProfile.c)
 *     sub_140765BFC @ 0x140765BFC (sub_140765BFC.c)
 *     sub_14076B714 @ 0x14076B714 (sub_14076B714.c)
 *     sub_14076D484 @ 0x14076D484 (sub_14076D484.c)
 *     MmIsDriverSuspectForVerifier @ 0x1407A24A0 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x1407A8C08 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1407A8D88 (VfDriverEnableVerifierForAll.c)
 *     VfDriverUnlock @ 0x1407A8EB0 (VfDriverUnlock.c)
 *     ViDriverReApplyVerifierForAll @ 0x1407A8FD8 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x1407B5CF8 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1407B5D7C (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1407BD404 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x1407BD64C (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x1407BD9C8 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x1407BDA54 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x1407CA2F4 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1407CA500 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x1407CA600 (VfSetVerifierInformationEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseMutex(PRKMUTEX Mutex, BOOLEAN Wait)
{
  _KTHREAD *CurrentThread; // r14
  unsigned int v3; // edi
  int ApcDisable; // r12d
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r15
  int SignalState; // ebp
  _KTHREAD *OwnerThread; // rsi
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v12; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char v17; // al
  bool v18; // zf
  NTSTATUS v19; // ecx
  unsigned __int8 IsThreadRunning; // al
  __int64 v21; // rdx
  __int64 v22; // r9
  _QWORD *v23; // r8
  __int64 v24; // rcx
  char v25; // al
  int v26; // r10d
  _QWORD *v27; // r9
  _QWORD *v28; // [rsp+30h] [rbp-88h]
  struct _KPRCB *v29; // [rsp+38h] [rbp-80h]
  _KTHREAD *v30; // [rsp+40h] [rbp-78h]
  unsigned __int8 v31; // [rsp+48h] [rbp-70h]
  __int64 v32; // [rsp+50h] [rbp-68h] BYREF
  LONG LockNV; // [rsp+58h] [rbp-60h]
  int v34; // [rsp+C0h] [rbp+8h] BYREF
  BOOLEAN v35; // [rsp+C8h] [rbp+10h]
  __int64 v36; // [rsp+D0h] [rbp+18h]
  _QWORD *v37; // [rsp+D8h] [rbp+20h]

  v35 = Wait;
  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  ApcDisable = 0;
  CurrentIrql = KeGetCurrentIrql();
  v31 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(Mutex);
  SignalState = Mutex->Header.SignalState;
  if ( Mutex->OwnerThread != CurrentThread || Mutex->Header.Size != CurrentPrcb->DpcRoutineActive )
  {
    _InterlockedAnd(&Mutex->Header.Lock, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    v19 = 128;
    if ( !Mutex->Abandoned )
      v19 = -1073741754;
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
      v14 = (__int64)v12;
      v12 = v12->Flink;
      v28 = (_QWORD *)v14;
      v15 = *(_QWORD *)v14;
      v16 = *(_QWORD **)(v14 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || *v16 != v14 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      v17 = *(_BYTE *)(v14 + 16);
      if ( v17 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), &v32) )
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
          *(_BYTE *)(v14 + 17) = 5;
          v36 = *(_QWORD *)(v14 + 24);
          v37 = (_QWORD *)(v36 + 8);
          *(_QWORD *)v14 = 0LL;
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
          if ( (_QWORD *)*v23 == v23
            || *(_DWORD *)(v36 + 40) >= *(_DWORD *)(v36 + 44)
            || v30->Queue == (_DISPATCHER_HEADER *volatile)v36 && v30->WaitReason == 15 )
          {
LABEL_36:
            v26 = *(_DWORD *)(v24 + 4);
            *(_DWORD *)(v24 + 4) = v26 + 1;
            v27 = *(_QWORD **)(v24 + 32);
            if ( *v27 != v24 + 24 )
              __fastfail(3u);
            *v28 = v24 + 24;
            v28[1] = v27;
            *v27 = v28;
            *(_QWORD *)(v24 + 32) = v28;
            if ( !v26 && (_QWORD *)*v23 != v23 )
            {
              KiWakeOtherQueueWaiters((__int64)v29, v24);
              v24 = v36;
            }
          }
          else
          {
            v25 = KiWakeQueueWaiter((__int64)v29, v36, (__int64)v28);
            v24 = v36;
            if ( !v25 )
            {
              v23 = v37;
              goto LABEL_36;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v24, 0xFFFFFF7F);
          v18 = Mutex->Header.SignalState-- == 1;
          if ( v18 )
            goto LABEL_10;
          goto LABEL_43;
        }
        KiTryUnwaitThread((__int64)CurrentPrcb, v14, 256LL, 0LL);
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
  KiExitDispatcher((__int64)CurrentPrcb, v3, 1u, 1u, CurrentIrql);
  if ( ApcDisable )
    KeLeaveCriticalRegionThread(CurrentThread);
  return SignalState;
}
