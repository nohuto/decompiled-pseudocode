/*
 * XREFs of PnpRequestDeviceAction @ 0x1400FF444
 * Callers:
 *     IoInvalidateDeviceRelations @ 0x1400FF390 (IoInvalidateDeviceRelations.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140127C98 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoInvalidateDeviceState @ 0x140156E10 (IoInvalidateDeviceState.c)
 *     PnpInitializeProcessor @ 0x1401FD6EC (PnpInitializeProcessor.c)
 *     PiQueueDeviceRequest @ 0x14044E618 (PiQueueDeviceRequest.c)
 *     PiControlGetSetDeviceStatus @ 0x140526EE0 (PiControlGetSetDeviceStatus.c)
 *     PiProcessQueryDeviceState @ 0x140552C70 (PiProcessQueryDeviceState.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 *     IopReleaseDeviceResources @ 0x14055E154 (IopReleaseDeviceResources.c)
 *     IopReleaseFilteredBootResources @ 0x14055ECB0 (IopReleaseFilteredBootResources.c)
 *     PiResetProblemDevicesWorker @ 0x14055F510 (PiResetProblemDevicesWorker.c)
 *     IopDeleteDriver @ 0x14059DED0 (IopDeleteDriver.c)
 *     PnpBootPhaseComplete @ 0x1405C4A2C (PnpBootPhaseComplete.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405D62D0 (PiDevCfgProcessDeviceCallback.c)
 *     IoReportRootDevice @ 0x1405E3820 (IoReportRootDevice.c)
 *     PnpInvalidateRelationsInList @ 0x1405E42E4 (PnpInvalidateRelationsInList.c)
 *     PipAttemptDependentStart @ 0x1406BE920 (PipAttemptDependentStart.c)
 *     PpSystemHiveLimitCallback @ 0x1406C14A0 (PpSystemHiveLimitCallback.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1406C3200 (PipDmgRequestRestartOnBlockedDevice.c)
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 *     PipInitializeCoreDriversByGroup @ 0x140845614 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140845AEC (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1400FB2D4 (PnpIsSafeToExamineUserModeTeb.c)
 *     PnpDeviceActionWorker @ 0x1400FF730 (PnpDeviceActionWorker.c)
 *     PnpLogActionQueueEvent @ 0x1400FFBFC (PnpLogActionQueueEvent.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
    goto LABEL_34;
  if ( a2 != 6 )
  {
    if ( a2 <= 8 )
    {
LABEL_8:
      v13 = 1;
LABEL_9:
      if ( v13 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        SparePtr = (GUID *)KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
        if ( SparePtr )
        {
          v19 = *SparePtr;
        }
        else if ( PnpIsSafeToExamineUserModeTeb()
               && KeGetPcr()->NtTib.$166D8ABE2A92F8472FE720CEE456C2DC::$8D6405090912A04D7DAC26580625742B::Self )
        {
          v19 = *(GUID *)&KeGetPcr()->NtTib.$166D8ABE2A92F8472FE720CEE456C2DC::$8D6405090912A04D7DAC26580625742B::Self[105].SubSystemTib;
        }
      }
      goto LABEL_13;
    }
    if ( a2 > 10 && a2 != 14 )
    {
      if ( a2 <= 16 || a2 > 18 )
        goto LABEL_8;
LABEL_34:
      v13 = 0;
      goto LABEL_9;
    }
  }
LABEL_13:
  *(GUID *)(PoolWithTag + 56) = v19;
  if ( Object )
    v15 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v15 = 0LL;
  PnpLogActionQueueEvent(v15, (unsigned int)a2, 0LL, 0LL, 0, PoolWithTag);
  v16 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v17 = (_QWORD *)qword_140382A78;
  if ( *(__int64 **)qword_140382A78 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *(_QWORD *)PoolWithTag = &PnpEnumerationRequestList;
  *((_QWORD *)PoolWithTag + 1) = v17;
  *v17 = PoolWithTag;
  qword_140382A78 = (__int64)PoolWithTag;
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
  else if ( PnPBootDriversLoaded && !PnpEnumerationInProgress )
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
  else
  {
    KxReleaseSpinLock(&PnpSpinLock);
    __writecr8(v16);
  }
  return v11;
}
