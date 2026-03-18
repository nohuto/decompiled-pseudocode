/*
 * XREFs of KeReleaseMutex @ 0x1400FD530
 * Callers:
 *     WmipFindRegEntryByProviderId @ 0x1400739DC (WmipFindRegEntryByProviderId.c)
 *     WmipReceiveNotifications @ 0x1400CDDCC (WmipReceiveNotifications.c)
 *     WmipFindRegEntryByDevice @ 0x140161EC8 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x140161F7C (WmipAllocRegEntry.c)
 *     WmipDeregisterRegEntry @ 0x140162060 (WmipDeregisterRegEntry.c)
 *     WmipBuildTraceDeviceList @ 0x1401819A0 (WmipBuildTraceDeviceList.c)
 *     WmiQueryTraceProviderCount @ 0x1401826B4 (WmiQueryTraceProviderCount.c)
 *     SPCallServerHandleQueryPolicy @ 0x1404AFD24 (SPCallServerHandleQueryPolicy.c)
 *     WmipFindGEByGuid @ 0x140501D60 (WmipFindGEByGuid.c)
 *     WmipOpenBlock @ 0x140501E4C (WmipOpenBlock.c)
 *     WmipPrepareForWnodeAD @ 0x14051AB9C (WmipPrepareForWnodeAD.c)
 *     WmipDeleteMethod @ 0x14051B000 (WmipDeleteMethod.c)
 *     WmipUnreferenceEntry @ 0x14051B374 (WmipUnreferenceEntry.c)
 *     WmipPrepareWnodeSI @ 0x14051B448 (WmipPrepareWnodeSI.c)
 *     PnpDeviceEventWorker @ 0x14051FE70 (PnpDeviceEventWorker.c)
 *     WmipEnableCollectOrEvent @ 0x14056A0C4 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x140571D28 (WmipIsQuerySetGuid.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14057B938 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpCrimsonProvEnableCallback @ 0x14057D0A0 (EtwpCrimsonProvEnableCallback.c)
 *     WmipEnumerateMofResources @ 0x140580F50 (WmipEnumerateMofResources.c)
 *     WmipDisableCollectOrEvent @ 0x140582EB4 (WmipDisableCollectOrEvent.c)
 *     EtwpStartTrace @ 0x140588150 (EtwpStartTrace.c)
 *     EtwpDisableTraceProviders @ 0x14058EF9C (EtwpDisableTraceProviders.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     WmipAddDataSource @ 0x1405FE7D0 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1405FEF7C (WmipDetermineInstanceBaseIndex.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405FF1F0 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x1405FF418 (WmipProcessEvent.c)
 *     WmipFindISinGEbyName @ 0x1405FF918 (WmipFindISinGEbyName.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x14060002C (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDeregisterDevice @ 0x1406007DC (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x140600880 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x140600958 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x140600AC4 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x140600B9C (WmipUpdateDeviceStackSize.c)
 *     WmipSetTraceNotify @ 0x140600BEC (WmipSetTraceNotify.c)
 *     WmipSendEnableDisableRequest @ 0x140602608 (WmipSendEnableDisableRequest.c)
 *     WmipRegistrationWorker @ 0x1406045B0 (WmipRegistrationWorker.c)
 *     WmipDSCleanup @ 0x140604960 (WmipDSCleanup.c)
 *     IoWMISetNotificationCallback @ 0x140605FF0 (IoWMISetNotificationCallback.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x140612428 (SPCallServerHandleWaitForDisplayWindow.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1406130F8 (WmipGetGuidObjectInstanceInfo.c)
 *     WmipAddMofResource @ 0x140620EBC (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x1406210F4 (WmipFindMRByNames.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1406464B0 (WmipSendWmiIrpToTraceDeviceList.c)
 *     WmipLegacyEtwWorker @ 0x1406493E0 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x14064953C (WmipProcessLegacyEtwRegister.c)
 *     PopDiagNextCsSleepStudySession @ 0x1407658EC (PopDiagNextCsSleepStudySession.c)
 *     PopDiagStopCsSleepStudySession @ 0x140765B10 (PopDiagStopCsSleepStudySession.c)
 *     PopSleepStudyTaskClientTimerWorker @ 0x140769F90 (PopSleepStudyTaskClientTimerWorker.c)
 *     IoWMIAllocateInstanceIds @ 0x1407A22C0 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x1407A313C (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1407A38F0 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x1407A3B04 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x1407A3C9C (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x1407A4254 (WmipQueryGuidInfo.c)
 *     WmipLegacyEtwCallback @ 0x1407A4A70 (WmipLegacyEtwCallback.c)
 *     WmipUpdateDataSource @ 0x1407A4EA0 (WmipUpdateDataSource.c)
 *     WmipWaitForCollectionEnabled @ 0x1407A5400 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x1407A5A5C (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1407A5C94 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x1407A8D78 (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x1407A9CB0 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x1407AD204 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1407AD260 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x1407AFC84 (EtwpSampledProfileRunDown.c)
 *     EtwpUpdateDisallowedGuids @ 0x1407B2A2C (EtwpUpdateDisallowedGuids.c)
 *     NtStartProfile @ 0x1407C7D2C (NtStartProfile.c)
 *     NtStopProfile @ 0x1407C7F8C (NtStopProfile.c)
 *     sub_1407CD8F0 @ 0x1407CD8F0 (sub_1407CD8F0.c)
 *     sub_1407D2744 @ 0x1407D2744 (sub_1407D2744.c)
 *     sub_1407D4598 @ 0x1407D4598 (sub_1407D4598.c)
 *     MmIsDriverSuspectForVerifier @ 0x14080F4E0 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x140815C38 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140815DC0 (VfDriverEnableVerifierForAll.c)
 *     VfDriverUnlock @ 0x140815EE8 (VfDriverUnlock.c)
 *     ViDriverReApplyVerifierForAll @ 0x140816010 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x1408239EC (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140823A70 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x14082A7B0 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x14082A9EC (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x14082AD78 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x14082AE04 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x140837854 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140837A60 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140837B68 (VfSetVerifierInformationEx.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseMutex(PRKMUTEX Mutex, BOOLEAN Wait)
{
  _KTHREAD *CurrentThread; // r14
  char v3; // di
  int ApcDisable; // r12d
  __int64 CurrentIrql; // rbp
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v8; // rdx
  int SignalState; // esi
  struct _KPRCB *v10; // r15
  _KTHREAD *OwnerThread; // rbp
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v14; // rbp
  struct _LIST_ENTRY *v16; // rax
  __int64 v17; // rdx
  struct _LIST_ENTRY *v18; // rcx
  char v19; // al
  bool v20; // zf
  NTSTATUS v21; // ecx
  unsigned __int8 IsThreadRunning; // al
  __int64 v23; // rdx
  __int64 v24; // r9
  volatile signed __int32 *v25; // r8
  volatile signed __int32 *v26; // rcx
  char v27; // al
  int v28; // r10d
  volatile signed __int32 **v29; // r9
  volatile signed __int32 *v30; // [rsp+30h] [rbp-88h]
  struct _LIST_ENTRY *v31; // [rsp+38h] [rbp-80h]
  struct _KPRCB *v32; // [rsp+40h] [rbp-78h]
  _KTHREAD *v33; // [rsp+48h] [rbp-70h]
  __int64 v34; // [rsp+50h] [rbp-68h] BYREF
  LONG LockNV; // [rsp+58h] [rbp-60h]
  int v36; // [rsp+C0h] [rbp+8h] BYREF
  BOOLEAN v37; // [rsp+C8h] [rbp+10h]
  volatile signed __int32 *v38; // [rsp+D0h] [rbp+18h]
  __int64 v39; // [rsp+D8h] [rbp+20h]

  v37 = Wait;
  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  ApcDisable = 0;
  CurrentIrql = KeGetCurrentIrql();
  v39 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&Mutex->Header.Lock);
  SignalState = Mutex->Header.SignalState;
  if ( Mutex->OwnerThread != CurrentThread || Mutex->Header.Size != CurrentPrcb->DpcRoutineActive )
  {
    _InterlockedAnd(&Mutex->Header.Lock, 0xFFFFFF7F);
    __writecr8((unsigned __int8)CurrentIrql);
    v21 = 128;
    if ( !Mutex->Abandoned )
      v21 = -1073741754;
    RtlRaiseStatus(v21);
  }
  if ( ++Mutex->Header.SignalState == 1 && SignalState <= 0 )
  {
    LockNV = Mutex->Header.LockNV;
    BYTE2(LockNV) = 0;
    Mutex->Header.LockNV = LockNV;
    v10 = KeGetCurrentPrcb();
    ApcDisable = Mutex->ApcDisable;
    OwnerThread = Mutex->OwnerThread;
    v36 = 0;
    while ( 1 )
    {
      LOBYTE(v8) = 1;
      KiSetVpThreadSpinLockCount(v10, v8);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v10, 0LL);
      do
        KeYieldProcessorEx(&v36);
      while ( OwnerThread->ThreadLock );
    }
    Flink = Mutex->MutantListEntry.Flink;
    Blink = Mutex->MutantListEntry.Blink;
    if ( Flink->Blink != &Mutex->MutantListEntry || Blink->Flink != &Mutex->MutantListEntry )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    KiReleaseThreadLockSafe((__int64)OwnerThread);
    v14 = Mutex->Header.WaitListHead.Flink;
    Mutex->OwnerThread = 0LL;
    if ( v14 == &Mutex->Header.WaitListHead )
    {
LABEL_10:
      LOBYTE(CurrentIrql) = v39;
      goto LABEL_11;
    }
    while ( 1 )
    {
      v16 = v14->Flink;
      v17 = (__int64)v14;
      v31 = v14;
      v14 = v16;
      v18 = v31->Blink;
      if ( v16->Blink != v31 || v18->Flink != (struct _LIST_ENTRY *)v17 )
        __fastfail(3u);
      v18->Flink = v16;
      v16->Blink = v18;
      v19 = *(_BYTE *)(v17 + 16);
      if ( v19 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v17, *(unsigned __int16 *)(v17 + 18), &v34) )
        {
          v20 = Mutex->Header.SignalState-- == 1;
          if ( v20 )
            goto LABEL_10;
        }
      }
      else
      {
        if ( v19 == 2 )
        {
          *(_BYTE *)(v17 + 17) = 5;
          v38 = *(volatile signed __int32 **)(v17 + 24);
          v30 = v38 + 2;
          *(_QWORD *)v17 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v32 = KeGetCurrentPrcb();
          v33 = v32->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v32->CurrentThread);
            EtwTraceEnqueueWork(v24, v23, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v38);
          v25 = v30;
          v26 = v38;
          if ( *(volatile signed __int32 **)v25 == v25
            || *((_DWORD *)v38 + 10) >= *((_DWORD *)v38 + 11)
            || (volatile signed __int32 *)v33->Queue == v38 && v33->WaitReason == 15 )
          {
LABEL_37:
            v28 = *((_DWORD *)v26 + 1);
            *((_DWORD *)v26 + 1) = v28 + 1;
            v29 = (volatile signed __int32 **)*((_QWORD *)v26 + 4);
            if ( *v29 != v26 + 6 )
              __fastfail(3u);
            v31->Flink = (struct _LIST_ENTRY *)(v26 + 6);
            v31->Blink = (struct _LIST_ENTRY *)v29;
            *v29 = (volatile signed __int32 *)v31;
            *((_QWORD *)v26 + 4) = v31;
            if ( !v28 && *(volatile signed __int32 **)v25 != v25 )
            {
              KiWakeOtherQueueWaiters((__int64)v32, (__int64)v26);
              v26 = v38;
            }
          }
          else
          {
            v27 = KiWakeQueueWaiter((__int64)v32, (__int64)v38, (__int64)v31);
            v26 = v38;
            if ( !v27 )
            {
              v25 = v30;
              goto LABEL_37;
            }
          }
          _InterlockedAnd(v26, 0xFFFFFF7F);
          v20 = Mutex->Header.SignalState-- == 1;
          if ( v20 )
            goto LABEL_10;
          goto LABEL_44;
        }
        KiTryUnwaitThread((__int64)CurrentPrcb, v17, 256LL, 0LL);
      }
LABEL_44:
      if ( v14 == &Mutex->Header.WaitListHead )
        goto LABEL_10;
    }
  }
LABEL_11:
  _InterlockedAnd(&Mutex->Header.Lock, 0xFFFFFF7F);
  if ( v37 )
    v3 = 3;
  KiExitDispatcher((__int64)CurrentPrcb, v3, 1u, 1u, CurrentIrql);
  if ( ApcDisable )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return SignalState;
}
