/*
 * XREFs of PnpDeviceActionWorker @ 0x1400FF730
 * Callers:
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1400FB110 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PnpLogActionQueueEvent @ 0x1400FFBFC (PnpLogActionQueueEvent.c)
 *     PnpDeleteDeviceActionRequest @ 0x1400FFD98 (PnpDeleteDeviceActionRequest.c)
 *     PpProcessClearProblem @ 0x1400FFDC0 (PpProcessClearProblem.c)
 *     PnpCompleteSystemStartProcess @ 0x1401518F0 (PnpCompleteSystemStartProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PnpProcessRebalance @ 0x140201004 (PnpProcessRebalance.c)
 *     PiConfigureDevice @ 0x14044EA84 (PiConfigureDevice.c)
 *     PiProcessClearDeviceProblem @ 0x14045069C (PiProcessClearDeviceProblem.c)
 *     PiRestartDevice @ 0x140451BE8 (PiRestartDevice.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 *     PiProcessReenumeration @ 0x14055EF24 (PiProcessReenumeration.c)
 *     PiQueryPowerRelations @ 0x14055EFD0 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14055F1C4 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PiProcessRequeryDeviceState @ 0x1405E7840 (PiProcessRequeryDeviceState.c)
 *     PiProcessStartSystemDevices @ 0x1405F1CAC (PiProcessStartSystemDevices.c)
 *     PiProcessHaltDevice @ 0x1406D1AC8 (PiProcessHaltDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406D1B54 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x1406D1CAC (PiProcessSetDeviceProblem.c)
 */

__int64 PnpDeviceActionWorker()
{
  unsigned __int8 v0; // r12
  char v1; // r13
  char v2; // r15
  int v3; // r14d
  KIRQL v4; // al
  __int64 v5; // rsi
  KIRQL v6; // bl
  __int64 v7; // rax
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v10; // r15
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // ecx
  int started; // eax
  int restarted; // eax
  int v18; // r15d
  __int64 *v19; // rbx
  __int64 v20; // rax
  int *v21; // rax
  struct _KEVENT *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // [rsp+28h] [rbp-39h]
  __int64 v33; // [rsp+30h] [rbp-31h]
  char v34; // [rsp+48h] [rbp-19h]
  char v35; // [rsp+49h] [rbp-18h]
  char v36; // [rsp+4Ah] [rbp-17h]
  int v37; // [rsp+50h] [rbp-11h] BYREF
  char v38; // [rsp+54h] [rbp-Dh]
  _QWORD NotificationStructure[5]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v40; // [rsp+80h] [rbp+1Fh] BYREF

  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, (__int64)KeGetCurrentThread());
  v0 = 0;
  v34 = 0;
  v1 = 0;
  v2 = 0;
  PpDevNodeLockTree(1LL);
  while ( 1 )
  {
    v36 = 0;
    v3 = 0;
    v35 = 1;
    v4 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
    v5 = PnpEnumerationRequestList;
    v6 = v4;
    if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
    {
      if ( *(__int64 **)(PnpEnumerationRequestList + 8) != &PnpEnumerationRequestList
        || (v7 = *(_QWORD *)PnpEnumerationRequestList,
            *(_QWORD *)(*(_QWORD *)PnpEnumerationRequestList + 8LL) != PnpEnumerationRequestList) )
      {
        __fastfail(3u);
      }
      PnpEnumerationRequestList = *(_QWORD *)PnpEnumerationRequestList;
      *(_QWORD *)(v7 + 8) = &PnpEnumerationRequestList;
      *(_BYTE *)(v5 + 76) = 1;
      goto LABEL_6;
    }
    if ( !v0 && !v1 && !v2 )
      break;
    v5 = 0LL;
LABEL_6:
    KxReleaseSpinLock(&PnpSpinLock);
    __writecr8(v6);
    if ( v5 )
    {
      v8 = *(_QWORD *)&NullGuid.Data1 - *(_QWORD *)(v5 + 56);
      if ( *(_QWORD *)&NullGuid.Data1 == *(_QWORD *)(v5 + 56) )
        v8 = *(_QWORD *)NullGuid.Data4 - *(_QWORD *)(v5 + 64);
      if ( v8 )
      {
        v36 = 1;
        v40 = *(_OWORD *)(v5 + 56);
        KeGetCurrentThread()[1].WaitBlock[0].SparePtr = &v40;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v5 + 80, 0LL);
      v10 = *(_BYTE *)(v5 + 88);
      ExReleasePushLockEx(v5 + 80, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      *(_QWORD *)(v5 + 8) = v5;
      *(_QWORD *)v5 = v5;
      if ( PnpShutdownEvent.Header.SignalState )
      {
        v3 = -1073741431;
        goto LABEL_36;
      }
      if ( v10 )
      {
        v3 = -1073741536;
        goto LABEL_36;
      }
      v11 = *(_QWORD **)(v5 + 16);
      if ( v11 )
        v12 = *(_QWORD *)(v11[39] + 40LL);
      else
        v12 = 0LL;
      if ( *(_DWORD *)(v12 + 300) == 788 )
      {
        v3 = -1073741823;
        goto LABEL_36;
      }
      if ( v11 )
        v13 = *(_QWORD *)(v11[39] + 40LL);
      else
        v13 = 0LL;
      if ( v13 )
      {
        ObfReferenceObjectWithTag(v11, 0x65706E50u);
        PnpLogActionQueueEvent(v13, *(unsigned int *)(v5 + 24), 1LL, 0LL, v32, v33);
      }
      v14 = *(_DWORD *)(v5 + 24);
      if ( v14 > 12 )
      {
        if ( v14 == 18 )
        {
          v34 = 1;
          goto LABEL_34;
        }
        if ( v14 <= 18 )
        {
          v27 = v14 - 13;
          if ( !v27 )
          {
            v3 = PiProcessResourceRequirementsChanged(v5);
            if ( v3 < 0 )
            {
              v0 = 1;
              v3 = 0;
            }
            goto LABEL_34;
          }
          v28 = v27 - 1;
          if ( !v28 )
          {
LABEL_26:
            started = PiProcessReenumeration(v5);
LABEL_27:
            v3 = started;
            v35 = 0;
            goto LABEL_34;
          }
          v29 = v28 - 1;
          if ( !v29 )
          {
            restarted = PiProcessSetDeviceProblem(v5);
            goto LABEL_33;
          }
          v30 = v29 - 1;
          if ( !v30 )
          {
LABEL_69:
            restarted = PiRestartDevice(v5);
            goto LABEL_33;
          }
          if ( v30 == 1 )
          {
            started = PiProcessStartSystemDevices(v5);
            goto LABEL_27;
          }
          goto LABEL_79;
        }
        if ( v14 == 19 )
        {
          memset(NotificationStructure, 0, sizeof(NotificationStructure));
          LODWORD(NotificationStructure[0]) = 2359297;
          NotificationStructure[3] = 0LL;
          *(GUID *)((char *)NotificationStructure + 4) = GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED;
          LODWORD(NotificationStructure[4]) = -1;
          IoReportTargetDeviceChangeAsynchronous(*(PDEVICE_OBJECT *)(v5 + 16), NotificationStructure, 0LL, 0LL);
        }
        else if ( v14 != 20 )
        {
          if ( v14 <= 24 )
          {
            restarted = PiConfigureDevice(v5);
            goto LABEL_33;
          }
          if ( v14 == 25 )
          {
LABEL_74:
            restarted = PiProcessClearDeviceProblem(v5);
            goto LABEL_33;
          }
LABEL_79:
          v3 = -1073741823;
          goto LABEL_34;
        }
        PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(*(_QWORD *)(v5 + 16));
      }
      else
      {
        if ( v14 == 12 )
          goto LABEL_69;
        if ( v14 <= 5 )
        {
          if ( v14 == 5 )
          {
            v23 = *(_QWORD *)(v5 + 16);
            if ( v23 )
              v24 = *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL);
            else
              v24 = 0LL;
            restarted = PiQueryPowerRelations(v24, 0LL);
            goto LABEL_33;
          }
          if ( !v14 )
          {
            v0 = 1;
            goto LABEL_34;
          }
          v25 = v14 - 1;
          if ( !v25 )
            goto LABEL_74;
          v26 = v25 - 1;
          if ( !v26 )
          {
            restarted = PpProcessClearProblem(v5);
LABEL_33:
            v3 = restarted;
            goto LABEL_34;
          }
          v31 = v26 - 1;
          if ( !v31 )
            goto LABEL_74;
          if ( v31 == 1 )
          {
            restarted = PiProcessHaltDevice(v5);
            goto LABEL_33;
          }
          goto LABEL_79;
        }
        if ( v14 == 6 )
        {
          restarted = PnpProcessRebalance(v5);
          goto LABEL_33;
        }
        if ( v14 != 7 )
        {
          if ( v14 <= 10 )
            goto LABEL_26;
          restarted = PiProcessRequeryDeviceState(v5);
          goto LABEL_33;
        }
        v1 = 1;
      }
LABEL_34:
      if ( v13 )
      {
        PnpLogActionQueueEvent(v13, *(unsigned int *)(v5 + 24), 2LL, (unsigned int)v3, v32, v33);
        ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 16), 0x65706E50u);
      }
LABEL_36:
      v18 = 1;
      do
      {
        v19 = *(__int64 **)v5;
        if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v20 = *v19, *(__int64 **)(*v19 + 8) != v19) )
          __fastfail(3u);
        *(_QWORD *)v5 = v20;
        *(_QWORD *)(v20 + 8) = v5;
        v21 = (int *)v19[6];
        if ( v21 )
          *v21 = v3;
        v22 = (struct _KEVENT *)v19[5];
        if ( v22 )
          KeSetEvent(v22, 0, 0);
        if ( v19 == (__int64 *)v5 )
        {
          v18 = 0;
          if ( v35 )
            ObfDereferenceObjectWithTag((PVOID)v19[2], 0x746C6644u);
        }
        PnpDeleteDeviceActionRequest(v19);
      }
      while ( v18 );
      v2 = v34;
      if ( v36 )
      {
        v2 = v34;
        KeGetCurrentThread()[1].WaitBlock[0].SparePtr = 0LL;
      }
    }
    else if ( v0 || v1 )
    {
      v37 = 3;
      v38 = PnPBootDriversInitialized;
      ObfReferenceObjectWithTag(*(PVOID *)(IopRootDeviceNode + 32), 0x746C6644u);
      PipProcessDevNodeTree(IopRootDeviceNode, 0, (unsigned int)&v37, v1 == 0 ? 3 : 0, v0, 0, 0);
      v0 = 0;
      v1 = 0;
    }
    else
    {
      PnpCompleteSystemStartProcess();
      v2 = 0;
      v34 = 0;
    }
  }
  PnpEnumerationInProgress = 0;
  KeSetEvent(&PnpEnumerationLock, 0, 0);
  KxReleaseSpinLock(&PnpSpinLock);
  __writecr8(v6);
  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, 0LL);
  return PpDevNodeUnlockTree(1LL);
}
