/*
 * XREFs of PnpDeviceActionWorker @ 0x140145DC0
 * Callers:
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1400751F0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PnpLogActionQueueEvent @ 0x14014624C (PnpLogActionQueueEvent.c)
 *     PnpDeleteDeviceActionRequest @ 0x140146378 (PnpDeleteDeviceActionRequest.c)
 *     PpProcessClearProblem @ 0x140163F9C (PpProcessClearProblem.c)
 *     PnpCompleteSystemStartProcess @ 0x14018047C (PnpCompleteSystemStartProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PnpProcessRebalance @ 0x14023E0DC (PnpProcessRebalance.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 *     PiProcessReenumeration @ 0x1405CA710 (PiProcessReenumeration.c)
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 *     PiQueryPowerRelations @ 0x140603784 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140603978 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PiProcessRequeryDeviceState @ 0x140612980 (PiProcessRequeryDeviceState.c)
 *     PiProcessClearDeviceProblem @ 0x140651D94 (PiProcessClearDeviceProblem.c)
 *     PiRestartDevice @ 0x1406548E4 (PiRestartDevice.c)
 *     PiProcessStartSystemDevices @ 0x140654EEC (PiProcessStartSystemDevices.c)
 *     PiConfigureDevice @ 0x140739518 (PiConfigureDevice.c)
 *     PiProcessHaltDevice @ 0x1407395D4 (PiProcessHaltDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x140739660 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x1407397B8 (PiProcessSetDeviceProblem.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // ecx
  int started; // eax
  int restarted; // eax
  int v20; // r15d
  __int64 *v21; // rbx
  __int64 v22; // rax
  int *v23; // rax
  struct _KEVENT *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // [rsp+28h] [rbp-39h]
  __int64 v35; // [rsp+30h] [rbp-31h]
  char v36; // [rsp+48h] [rbp-19h]
  char v37; // [rsp+49h] [rbp-18h]
  char v38; // [rsp+4Ah] [rbp-17h]
  int v39; // [rsp+50h] [rbp-11h] BYREF
  char v40; // [rsp+54h] [rbp-Dh]
  _QWORD NotificationStructure[5]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v42; // [rsp+80h] [rbp+1Fh] BYREF

  _InterlockedExchange64(&PnpDeviceActionThread, (__int64)KeGetCurrentThread());
  v0 = 0;
  v36 = 0;
  v1 = 0;
  v2 = 0;
  PpDevNodeLockTree(1LL);
  while ( 1 )
  {
    v38 = 0;
    v3 = 0;
    v37 = 1;
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
        v38 = 1;
        v42 = *(_OWORD *)(v5 + 56);
        KeGetCurrentThread()[1].WaitBlock[0].SparePtr = &v42;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v5 + 80, 0LL);
      v10 = *(_BYTE *)(v5 + 88);
      ExReleasePushLockEx(v5 + 80, 0LL, v11, v12);
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
      v13 = *(_QWORD **)(v5 + 16);
      if ( v13 )
        v14 = *(_QWORD *)(v13[39] + 40LL);
      else
        v14 = 0LL;
      if ( *(_DWORD *)(v14 + 300) == 788 )
      {
        v3 = -1073741823;
        goto LABEL_36;
      }
      if ( v13 )
        v15 = *(_QWORD *)(v13[39] + 40LL);
      else
        v15 = 0LL;
      if ( v15 )
      {
        ObfReferenceObjectWithTag(v13, 0x65706E50u);
        PnpLogActionQueueEvent(v15, *(unsigned int *)(v5 + 24), 1LL, 0LL, v34, v35);
      }
      v16 = *(_DWORD *)(v5 + 24);
      if ( v16 > 12 )
      {
        if ( v16 == 18 )
        {
          v36 = 1;
          goto LABEL_34;
        }
        if ( v16 <= 18 )
        {
          v29 = v16 - 13;
          if ( !v29 )
          {
            v3 = PiProcessResourceRequirementsChanged(v5);
            if ( v3 < 0 )
            {
              v0 = 1;
              v3 = 0;
            }
            goto LABEL_34;
          }
          v30 = v29 - 1;
          if ( !v30 )
          {
LABEL_26:
            started = PiProcessReenumeration(v5);
LABEL_27:
            v3 = started;
            v37 = 0;
            goto LABEL_34;
          }
          v31 = v30 - 1;
          if ( !v31 )
          {
            restarted = PiProcessSetDeviceProblem(v5);
            goto LABEL_33;
          }
          v32 = v31 - 1;
          if ( !v32 )
          {
LABEL_69:
            restarted = PiRestartDevice(v5);
            goto LABEL_33;
          }
          if ( v32 == 1 )
          {
            started = PiProcessStartSystemDevices(v5);
            goto LABEL_27;
          }
          goto LABEL_93;
        }
        if ( v16 == 19 )
        {
          memset(NotificationStructure, 0, sizeof(NotificationStructure));
          LODWORD(NotificationStructure[0]) = 2359297;
          NotificationStructure[3] = 0LL;
          *(GUID *)((char *)NotificationStructure + 4) = GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED;
          LODWORD(NotificationStructure[4]) = -1;
          IoReportTargetDeviceChangeAsynchronous(*(PDEVICE_OBJECT *)(v5 + 16), NotificationStructure, 0LL, 0LL);
        }
        else if ( v16 != 20 )
        {
          if ( v16 <= 24 )
          {
            restarted = PiConfigureDevice(v5);
            goto LABEL_33;
          }
          if ( v16 == 25 )
          {
LABEL_74:
            restarted = PiProcessClearDeviceProblem(v5);
            goto LABEL_33;
          }
LABEL_93:
          v3 = -1073741823;
          goto LABEL_34;
        }
        PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(*(_QWORD *)(v5 + 16));
      }
      else
      {
        if ( v16 == 12 )
          goto LABEL_69;
        if ( v16 <= 5 )
        {
          if ( v16 == 5 )
          {
            v25 = *(_QWORD *)(v5 + 16);
            if ( v25 )
              v26 = *(_QWORD *)(*(_QWORD *)(v25 + 312) + 40LL);
            else
              v26 = 0LL;
            restarted = PiQueryPowerRelations(v26, 0LL);
            goto LABEL_33;
          }
          if ( !v16 )
          {
            v0 = 1;
            goto LABEL_34;
          }
          v27 = v16 - 1;
          if ( !v27 )
            goto LABEL_74;
          v28 = v27 - 1;
          if ( !v28 )
          {
            restarted = PpProcessClearProblem(v5);
LABEL_33:
            v3 = restarted;
            goto LABEL_34;
          }
          v33 = v28 - 1;
          if ( !v33 )
            goto LABEL_74;
          if ( v33 == 1 )
          {
            restarted = PiProcessHaltDevice(v5);
            goto LABEL_33;
          }
          goto LABEL_93;
        }
        if ( v16 == 6 )
        {
          restarted = PnpProcessRebalance(v5);
          goto LABEL_33;
        }
        if ( v16 != 7 )
        {
          if ( v16 <= 10 )
            goto LABEL_26;
          restarted = PiProcessRequeryDeviceState(v5);
          goto LABEL_33;
        }
        v1 = 1;
      }
LABEL_34:
      if ( v15 )
      {
        PnpLogActionQueueEvent(v15, *(unsigned int *)(v5 + 24), 2LL, (unsigned int)v3, v34, v35);
        ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 16), 0x65706E50u);
      }
LABEL_36:
      v20 = 1;
      do
      {
        v21 = *(__int64 **)v5;
        if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v22 = *v21, *(__int64 **)(*v21 + 8) != v21) )
          __fastfail(3u);
        *(_QWORD *)v5 = v22;
        *(_QWORD *)(v22 + 8) = v5;
        v23 = (int *)v21[6];
        if ( v23 )
          *v23 = v3;
        v24 = (struct _KEVENT *)v21[5];
        if ( v24 )
          KeSetEvent(v24, 0, 0);
        if ( v21 == (__int64 *)v5 )
        {
          v20 = 0;
          if ( v37 )
            ObfDereferenceObjectWithTag((PVOID)v21[2], 0x746C6644u);
        }
        PnpDeleteDeviceActionRequest(v21);
      }
      while ( v20 );
      v2 = v36;
      if ( v38 )
      {
        v2 = v36;
        KeGetCurrentThread()[1].WaitBlock[0].SparePtr = 0LL;
      }
    }
    else if ( v0 || v1 )
    {
      v39 = 3;
      v40 = PnPBootDriversInitialized;
      ObfReferenceObjectWithTag(*(PVOID *)(IopRootDeviceNode + 32), 0x746C6644u);
      PipProcessDevNodeTree(IopRootDeviceNode, 0, (unsigned int)&v39, v1 == 0 ? 3 : 0, v0, 0, 0);
      v0 = 0;
      v1 = 0;
    }
    else
    {
      PnpCompleteSystemStartProcess();
      v2 = 0;
      v36 = 0;
    }
  }
  PnpEnumerationInProgress = 0;
  KeSetEvent(&PnpEnumerationLock, 0, 0);
  KxReleaseSpinLock(&PnpSpinLock);
  __writecr8(v6);
  _InterlockedExchange64(&PnpDeviceActionThread, 0LL);
  return PpDevNodeUnlockTree(1LL);
}
