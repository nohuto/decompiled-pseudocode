/*
 * XREFs of PnpRequestDeviceAction @ 0x14003CFA4
 * Callers:
 *     IoInvalidateDeviceRelations @ 0x14003CEF0 (IoInvalidateDeviceRelations.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140071B54 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoInvalidateDeviceState @ 0x140149710 (IoInvalidateDeviceState.c)
 *     PnpInitializeProcessor @ 0x1401F7808 (PnpInitializeProcessor.c)
 *     PiControlGetSetDeviceStatus @ 0x14048A0B0 (PiControlGetSetDeviceStatus.c)
 *     PiProcessQueryDeviceState @ 0x1404A79A4 (PiProcessQueryDeviceState.c)
 *     PnpInvalidateRelationsInList @ 0x14056DCF8 (PnpInvalidateRelationsInList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 *     IopReleaseDeviceResources @ 0x1405705A0 (IopReleaseDeviceResources.c)
 *     IoReportRootDevice @ 0x1405AFC40 (IoReportRootDevice.c)
 *     IopReleaseFilteredBootResources @ 0x1405B6134 (IopReleaseFilteredBootResources.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405C1710 (PiDevCfgProcessDeviceCallback.c)
 *     PiResetProblemDevicesWorker @ 0x1405C6220 (PiResetProblemDevicesWorker.c)
 *     IopDeleteDriver @ 0x1405CFCE0 (IopDeleteDriver.c)
 *     PnpBootPhaseComplete @ 0x1405D518C (PnpBootPhaseComplete.c)
 *     PipAttemptDependentStart @ 0x140692C70 (PipAttemptDependentStart.c)
 *     PpSystemHiveLimitCallback @ 0x1406956E0 (PpSystemHiveLimitCallback.c)
 *     PiQueueDeviceRequest @ 0x1406A8DFC (PiQueueDeviceRequest.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407F887C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1407F8D84 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     PnpLogActionQueueEvent @ 0x14003D290 (PnpLogActionQueueEvent.c)
 *     PnpDeviceActionWorker @ 0x14003D340 (PnpDeviceActionWorker.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140080268 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwActivityIdControlKernel @ 0x1400802C0 (EtwActivityIdControlKernel.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
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
  __int64 v14; // rcx
  __int64 v15; // rcx
  KIRQL v16; // r14
  _QWORD *v17; // rax
  _QWORD v19[2]; // [rsp+28h] [rbp-50h] BYREF
  GUID v20; // [rsp+38h] [rbp-40h]

  v20 = NullGuid;
  v11 = 0;
  if ( PnpShutdownEvent.Header.SignalState )
    return (unsigned int)-1073741431;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x32706E50u);
  v19[1] = PoolWithTag;
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
        v19[0] = 0LL;
        EtwActivityIdControlKernel(1LL, v19);
        if ( v19[0] )
        {
          v20 = *(GUID *)v19[0];
        }
        else if ( (unsigned __int8)PnpIsSafeToExamineUserModeTeb(v14)
               && KeGetPcr()->NtTib.$FD99E398B9CE9653B759FFC9FDEDD739::$F77F79717011C0370B4D23A77E221CBE::Self )
        {
          v20 = *(GUID *)&KeGetPcr()->NtTib.$FD99E398B9CE9653B759FFC9FDEDD739::$F77F79717011C0370B4D23A77E221CBE::Self[105].SubSystemTib;
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
  *(GUID *)(PoolWithTag + 56) = v20;
  if ( Object )
    v15 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v15 = 0LL;
  PnpLogActionQueueEvent(v15, (unsigned int)a2, 0LL);
  v16 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v17 = (_QWORD *)qword_140366AA8;
  if ( *(__int64 **)qword_140366AA8 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *(_QWORD *)PoolWithTag = &PnpEnumerationRequestList;
  *((_QWORD *)PoolWithTag + 1) = v17;
  *v17 = PoolWithTag;
  qword_140366AA8 = (__int64)PoolWithTag;
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
