/*
 * XREFs of PnpRequestDeviceAction @ 0x140145AE4
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400C8670 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoInvalidateDeviceRelations @ 0x140145A30 (IoInvalidateDeviceRelations.c)
 *     IoInvalidateDeviceState @ 0x14016C7D0 (IoInvalidateDeviceState.c)
 *     PnpInitializeProcessor @ 0x14023A4E8 (PnpInitializeProcessor.c)
 *     PiControlGetSetDeviceStatus @ 0x14050BD60 (PiControlGetSetDeviceStatus.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405C79A8 (PnpProcessQueryRemoveAndEject.c)
 *     IopReleaseDeviceResources @ 0x1405C8A58 (IopReleaseDeviceResources.c)
 *     PnpInvalidateRelationsInList @ 0x1405C95F8 (PnpInvalidateRelationsInList.c)
 *     PiProcessQueryDeviceState @ 0x1405D4790 (PiProcessQueryDeviceState.c)
 *     PiResetProblemDevicesWorker @ 0x140604690 (PiResetProblemDevicesWorker.c)
 *     IopDeleteDriver @ 0x140605830 (IopDeleteDriver.c)
 *     PnpBootPhaseComplete @ 0x14062461C (PnpBootPhaseComplete.c)
 *     PpDevCfgProcessDevices @ 0x1406246C4 (PpDevCfgProcessDevices.c)
 *     IopReleaseFilteredBootResources @ 0x14062BE68 (IopReleaseFilteredBootResources.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1406433E0 (PiDevCfgProcessDeviceCallback.c)
 *     IoReportRootDevice @ 0x14064B860 (IoReportRootDevice.c)
 *     PipAttemptDependentStart @ 0x140723984 (PipAttemptDependentStart.c)
 *     PpSystemHiveLimitCallback @ 0x140727180 (PpSystemHiveLimitCallback.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1407292E0 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PiQueueDeviceRequest @ 0x14073B9A0 (PiQueueDeviceRequest.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 *     PipInitializeCoreDriversByGroup @ 0x1408B5658 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1408B5994 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1400750E4 (PnpIsSafeToExamineUserModeTeb.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     PnpDeviceActionWorker @ 0x140145DC0 (PnpDeviceActionWorker.c)
 *     PnpLogActionQueueEvent @ 0x14014624C (PnpLogActionQueueEvent.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpRequestDeviceAction(
        PVOID Object,
        int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  unsigned int v11; // r15d
  char *PoolWithTag; // rdi
  char v13; // al
  GUID *SparePtr; // rcx
  __int64 v15; // rcx
  KIRQL v16; // r14
  _QWORD *v17; // rax
  GUID v19; // [rsp+30h] [rbp-38h]

  v19 = NullGuid;
  v11 = 0;
  if ( PnpShutdownEvent.Header.SignalState )
    return (unsigned int)-1073741431;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x32706E50u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  if ( !Object )
    Object = *(PVOID *)(IopRootDeviceNode + 32);
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  *((_QWORD *)PoolWithTag + 2) = Object;
  *((_DWORD *)PoolWithTag + 6) = a2;
  PoolWithTag[28] = a3;
  *((_QWORD *)PoolWithTag + 4) = a4;
  *((_QWORD *)PoolWithTag + 5) = a5;
  *((_QWORD *)PoolWithTag + 6) = a6;
  *((_DWORD *)PoolWithTag + 18) = 1;
  PoolWithTag[76] = 0;
  PoolWithTag[88] = 0;
  *((_QWORD *)PoolWithTag + 10) = 0LL;
  if ( !a2 )
    goto LABEL_33;
  if ( a2 != 6 )
  {
    if ( a2 <= 8 )
      goto LABEL_11;
    if ( a2 > 10 && a2 != 14 )
    {
      if ( a2 > 16 && a2 <= 18 )
      {
LABEL_33:
        v13 = 0;
        goto LABEL_12;
      }
LABEL_11:
      v13 = 1;
LABEL_12:
      if ( v13 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        SparePtr = (GUID *)KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
        if ( SparePtr )
        {
          v19 = *SparePtr;
        }
        else if ( PnpIsSafeToExamineUserModeTeb()
               && KeGetPcr()->NtTib.$E75840294B8B6CDB220941BF8BA011B2::$95891DD37A8D0C15AC204BC06A86484B::Self )
        {
          v19 = *(GUID *)&KeGetPcr()->NtTib.$E75840294B8B6CDB220941BF8BA011B2::$95891DD37A8D0C15AC204BC06A86484B::Self[105].SubSystemTib;
        }
      }
    }
  }
  *(GUID *)(PoolWithTag + 56) = v19;
  if ( Object )
    v15 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v15 = 0LL;
  PnpLogActionQueueEvent(v15, (unsigned int)a2, 0LL, 0LL, 0, PoolWithTag);
  v16 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v17 = (_QWORD *)qword_1403C5CE8;
  if ( *(__int64 **)qword_1403C5CE8 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *(_QWORD *)PoolWithTag = &PnpEnumerationRequestList;
  *((_QWORD *)PoolWithTag + 1) = v17;
  *v17 = PoolWithTag;
  qword_1403C5CE8 = (__int64)PoolWithTag;
  if ( a7 )
  {
    ++*((_DWORD *)PoolWithTag + 18);
    *a7 = PoolWithTag;
  }
  if ( a2 == 7 || a2 == 10 )
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    KxReleaseSpinLock(&PnpSpinLock);
    __writecr8(v16);
    PnpDeviceActionWorker(0LL);
  }
  else if ( PnpEnumerationInProgress || !PnPBootDriversLoaded )
  {
    KxReleaseSpinLock(&PnpSpinLock);
    __writecr8(v16);
  }
  else
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    KxReleaseSpinLock(&PnpSpinLock);
    __writecr8(v16);
    PnpDeviceEnumerationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceActionWorker;
    PnpDeviceEnumerationWorkItem.Parameter = 0LL;
    PnpDeviceEnumerationWorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&PnpDeviceEnumerationWorkItem, DelayedWorkQueue);
  }
  return v11;
}
