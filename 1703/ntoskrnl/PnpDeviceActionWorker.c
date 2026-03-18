/*
 * XREFs of PnpDeviceActionWorker @ 0x14003D340
 * Callers:
 *     PnpRequestDeviceAction @ 0x14003CFA4 (PnpRequestDeviceAction.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     PnpDeleteDeviceActionRequest @ 0x14003D738 (PnpDeleteDeviceActionRequest.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140067520 (IoReportTargetDeviceChangeAsynchronous.c)
 *     EtwActivityIdControlKernel @ 0x1400802C0 (EtwActivityIdControlKernel.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     PnpCompleteSystemStartProcess @ 0x140162DE4 (PnpCompleteSystemStartProcess.c)
 *     PpProcessClearProblem @ 0x14016632C (PpProcessClearProblem.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PnpProcessRebalance @ 0x1401FB2FC (PnpProcessRebalance.c)
 *     PiProcessReenumeration @ 0x140460088 (PiProcessReenumeration.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 *     PipProcessDevNodeTree @ 0x14048B768 (PipProcessDevNodeTree.c)
 *     PiProcessRequeryDeviceState @ 0x140584508 (PiProcessRequeryDeviceState.c)
 *     PiQueryPowerRelations @ 0x1405C27A4 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x1405C2994 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PiProcessStartSystemDevices @ 0x1405D5704 (PiProcessStartSystemDevices.c)
 *     PiConfigureDevice @ 0x1406A69EC (PiConfigureDevice.c)
 *     PiProcessClearDeviceProblem @ 0x1406A6AB4 (PiProcessClearDeviceProblem.c)
 *     PiProcessHaltDevice @ 0x1406A6BB4 (PiProcessHaltDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406A6C40 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x1406A6D98 (PiProcessSetDeviceProblem.c)
 *     PiRestartDevice @ 0x1406A6EE8 (PiRestartDevice.c)
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
  __int64 v12; // rcx
  int v13; // ecx
  int started; // eax
  int restarted; // eax
  int v17; // r15d
  __int64 *v18; // rbx
  __int64 v19; // rax
  int *v20; // rax
  struct _KEVENT *v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // ecx
  __int128 v25; // xmm0
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  ULONG_PTR v30; // rcx
  char v31; // [rsp+48h] [rbp-29h]
  char v32; // [rsp+49h] [rbp-28h]
  char v33; // [rsp+4Ah] [rbp-27h]
  __int128 *v34; // [rsp+50h] [rbp-21h] BYREF
  int v35; // [rsp+58h] [rbp-19h] BYREF
  char v36; // [rsp+5Ch] [rbp-15h]
  _QWORD NotificationStructure[5]; // [rsp+60h] [rbp-11h] BYREF
  __int128 v38; // [rsp+88h] [rbp+17h] BYREF

  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, (__int64)KeGetCurrentThread());
  v0 = 0;
  v31 = 0;
  v1 = 0;
  v2 = 0;
  PpDevNodeLockTree(1LL);
  while ( 1 )
  {
    v33 = 0;
    v3 = 0;
    v32 = 1;
    v4 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
    v5 = PnpEnumerationRequestList;
    v6 = v4;
    if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
    {
      v7 = *(_QWORD *)PnpEnumerationRequestList;
      if ( *(__int64 **)(PnpEnumerationRequestList + 8) != &PnpEnumerationRequestList
        || *(_QWORD *)(v7 + 8) != PnpEnumerationRequestList )
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
        v25 = *(_OWORD *)(v5 + 56);
        v34 = &v38;
        v38 = v25;
        EtwActivityIdControlKernel(2LL, &v34);
        v33 = 1;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v5 + 80, 0LL);
      v10 = *(_BYTE *)(v5 + 88);
      ExReleasePushLockEx(v5 + 80, 0LL);
      KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
      *(_QWORD *)(v5 + 8) = v5;
      *(_QWORD *)v5 = v5;
      if ( PnpShutdownEvent.Header.SignalState )
      {
        v3 = -1073741431;
        goto LABEL_30;
      }
      if ( v10 )
      {
        v3 = -1073741536;
        goto LABEL_30;
      }
      v11 = *(_QWORD *)(v5 + 16);
      if ( v11 )
        v12 = *(_QWORD *)(*(_QWORD *)(v11 + 312) + 40LL);
      else
        v12 = 0LL;
      if ( *(_DWORD *)(v12 + 300) == 788 )
        goto LABEL_67;
      v13 = *(_DWORD *)(v5 + 24);
      if ( v13 > 12 )
      {
        if ( v13 > 17 )
        {
          switch ( v13 )
          {
            case 18:
              v17 = 1;
              v31 = 1;
              goto LABEL_31;
            case 19:
              memset(NotificationStructure, 0, sizeof(NotificationStructure));
              LODWORD(NotificationStructure[0]) = 2359297;
              NotificationStructure[3] = 0LL;
              *(GUID *)((char *)NotificationStructure + 4) = GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED;
              LODWORD(NotificationStructure[4]) = -1;
              IoReportTargetDeviceChangeAsynchronous(*(PDEVICE_OBJECT *)(v5 + 16), NotificationStructure, 0LL, 0LL);
              v30 = *(_QWORD *)(v5 + 16);
              goto LABEL_87;
            case 20:
              v30 = *(_QWORD *)(v5 + 16);
LABEL_87:
              PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(v30);
              goto LABEL_30;
          }
          if ( (unsigned int)(v13 - 21) > 3 )
          {
LABEL_67:
            v3 = -1073741823;
            goto LABEL_30;
          }
          restarted = PiConfigureDevice(v5);
          goto LABEL_29;
        }
        if ( v13 == 17 )
        {
          started = PiProcessStartSystemDevices(v5);
          goto LABEL_23;
        }
        v27 = v13 - 13;
        if ( !v27 )
        {
          v3 = PiProcessResourceRequirementsChanged(v5);
          if ( v3 < 0 )
          {
            v17 = 1;
            v3 = 0;
            v0 = 1;
            goto LABEL_31;
          }
          goto LABEL_30;
        }
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            if ( v29 != 1 )
              goto LABEL_67;
LABEL_77:
            restarted = PiRestartDevice(v5);
          }
          else
          {
            restarted = PiProcessSetDeviceProblem(v5);
          }
LABEL_29:
          v3 = restarted;
          goto LABEL_30;
        }
      }
      else
      {
        if ( v13 == 12 )
          goto LABEL_77;
        if ( v13 <= 5 )
        {
          if ( v13 == 5 )
          {
            if ( v11 )
              v22 = *(_QWORD *)(*(_QWORD *)(v11 + 312) + 40LL);
            else
              v22 = 0LL;
            restarted = PiQueryPowerRelations(v22, 0LL);
            goto LABEL_29;
          }
          if ( !v13 )
          {
            v17 = 1;
            v0 = 1;
            goto LABEL_31;
          }
          v23 = v13 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( !v24 )
            {
              restarted = PpProcessClearProblem(v5);
              goto LABEL_29;
            }
            v26 = v24 - 1;
            if ( v26 )
            {
              if ( v26 != 1 )
                goto LABEL_67;
              restarted = PiProcessHaltDevice(v5);
              goto LABEL_29;
            }
          }
          restarted = PiProcessClearDeviceProblem(v5);
          goto LABEL_29;
        }
        if ( v13 == 6 )
        {
          restarted = PnpProcessRebalance(v5);
          goto LABEL_29;
        }
        if ( v13 == 7 )
        {
          v17 = 1;
          v1 = 1;
          goto LABEL_31;
        }
        if ( v13 > 10 )
        {
          restarted = PiProcessRequeryDeviceState(v5);
          goto LABEL_29;
        }
      }
      started = PiProcessReenumeration(v5);
LABEL_23:
      v3 = started;
      v32 = 0;
LABEL_30:
      v17 = 1;
      do
      {
LABEL_31:
        v18 = *(__int64 **)v5;
        v19 = **(_QWORD **)v5;
        if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *(__int64 **)(v19 + 8) != v18 )
          __fastfail(3u);
        *(_QWORD *)v5 = v19;
        *(_QWORD *)(v19 + 8) = v5;
        v20 = (int *)v18[6];
        if ( v20 )
          *v20 = v3;
        v21 = (struct _KEVENT *)v18[5];
        if ( v21 )
          KeSetEvent(v21, 0, 0);
        if ( v18 == (__int64 *)v5 )
        {
          v17 = 0;
          if ( v32 )
            ObfDereferenceObjectWithTag((PVOID)v18[2], 0x746C6644u);
        }
        PnpDeleteDeviceActionRequest(v18);
      }
      while ( v17 );
      v2 = v31;
      if ( v33 )
      {
        v34 = 0LL;
        EtwActivityIdControlKernel(2LL, &v34);
        v2 = v31;
      }
    }
    else if ( v0 || v1 )
    {
      v35 = 3;
      v36 = PnPBootDriversInitialized;
      ObfReferenceObjectWithTag(*(PVOID *)(IopRootDeviceNode + 32), 0x746C6644u);
      PipProcessDevNodeTree(IopRootDeviceNode, 0, (unsigned int)&v35, v1 == 0 ? 3 : 0, v0, 0, 0);
      v0 = 0;
      v1 = 0;
    }
    else
    {
      PnpCompleteSystemStartProcess();
      v2 = 0;
      v31 = 0;
    }
  }
  PnpEnumerationInProgress = 0;
  KeSetEvent(&PnpEnumerationLock, 0, 0);
  KxReleaseSpinLock(&PnpSpinLock);
  __writecr8(v6);
  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, 0LL);
  return PpDevNodeUnlockTree(1LL);
}
