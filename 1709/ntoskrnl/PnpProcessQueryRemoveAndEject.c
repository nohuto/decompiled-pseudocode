/*
 * XREFs of PnpProcessQueryRemoveAndEject @ 0x14055CA4C
 * Callers:
 *     PnpProcessTargetDeviceEvent @ 0x14054DF70 (PnpProcessTargetDeviceEvent.c)
 *     PnpShutdownDevices @ 0x1406BDC40 (PnpShutdownDevices.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     PipAreDriversLoaded @ 0x1400DF77C (PipAreDriversLoaded.c)
 *     PnpIsChainDereferenced @ 0x1400FEC08 (PnpIsChainDereferenced.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1400FEDA4 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpRestartDeviceNode @ 0x14045077C (PnpRestartDeviceNode.c)
 *     IoGetLegacyVetoList @ 0x1404E8A2C (IoGetLegacyVetoList.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     PiProcessQueryAndCancelRemoval @ 0x14055BA6C (PiProcessQueryAndCancelRemoval.c)
 *     PnpBuildRemovalRelationList @ 0x14055C134 (PnpBuildRemovalRelationList.c)
 *     PnpResizeTargetDeviceBlock @ 0x14055C91C (PnpResizeTargetDeviceBlock.c)
 *     PiCheckRemovalPreconditions @ 0x14055C9F8 (PiCheckRemovalPreconditions.c)
 *     PiRestartRemovalRelations @ 0x14055CEE8 (PiRestartRemovalRelations.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14055CF88 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiEventBuildPdoList @ 0x14055D108 (PiEventBuildPdoList.c)
 *     PnpTrackQueryRemoveDevices @ 0x14055D26C (PnpTrackQueryRemoveDevices.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14055D2E8 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x14055D404 (PnpCompileDeviceInstancePaths.c)
 *     IopEnumerateRelations @ 0x14055D5A0 (IopEnumerateRelations.c)
 *     IopFreeRelationList @ 0x14055D79C (IopFreeRelationList.c)
 *     PiEventAllocateVetoBuffer @ 0x14055D848 (PiEventAllocateVetoBuffer.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x14055D964 (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x14055D9DC (PnpNotifyUserModeDeviceRemoval.c)
 *     PiEventAreDeviceRelationsExcluded @ 0x14055DB20 (PiEventAreDeviceRelationsExcluded.c)
 *     PiDetermineDeleteType @ 0x14055DB3C (PiDetermineDeleteType.c)
 *     PipClearDevNodeProblem @ 0x14055DF68 (PipClearDevNodeProblem.c)
 *     PnpInvalidateRelationsInList @ 0x1405E42E4 (PnpInvalidateRelationsInList.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x1405EA9BC (PiEventRemovalPostSurpriseRemove.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1405EF9D4 (PnpBuildUnsafeRemovalDeviceList.c)
 *     IopRemoveDeviceRelationsFromList @ 0x1405F0738 (IopRemoveDeviceRelationsFromList.c)
 *     PnpProcessCompletedEject @ 0x1406C1CC0 (PnpProcessCompletedEject.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1406CA6F4 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1406CA724 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1406CAAA8 (PpProfileQueryHardwareProfileChange.c)
 *     PnpFinalizeVetoedRemove @ 0x1406CAE6C (PnpFinalizeVetoedRemove.c)
 *     IopEjectDevice @ 0x1406D25EC (IopEjectDevice.c)
 *     IopQueryDockRemovalInterface @ 0x1406D27A8 (IopQueryDockRemovalInterface.c)
 *     PiEventAllocatePendingEjectRelations @ 0x1406D51B0 (PiEventAllocatePendingEjectRelations.c)
 *     PiProcessCanceledRemoveForReset @ 0x1406D5248 (PiProcessCanceledRemoveForReset.c)
 *     PiProcessQueryRemoveNoFdo @ 0x1406D53A0 (PiProcessQueryRemoveNoFdo.c)
 *     PoGetLightestSystemStateForEject @ 0x1406F4D3C (PoGetLightestSystemStateForEject.c)
 */

__int64 __fastcall PnpProcessQueryRemoveAndEject(const void **a1)
{
  const void *v1; // rdi
  __int64 v2; // r13
  unsigned int *v3; // r12
  struct _DEVICE_OBJECT *v4; // rsi
  unsigned int v5; // r14d
  __int64 DeviceNode; // r15
  int v7; // ebx
  __int64 VetoBuffer; // rax
  PVOID v9; // rsi
  int v10; // eax
  int v11; // r8d
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  GUID *v16; // r8
  _QWORD *v17; // rbx
  __int64 v18; // r8
  int v19; // r9d
  PDEVICE_OBJECT v20; // rbx
  __int64 v21; // rcx
  char v22; // al
  __int64 v23; // rcx
  PVOID v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rdx
  char v28; // al
  unsigned int *v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  _DWORD *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 PendingEjectRelations; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _QWORD *v44; // rbx
  int LightestSystemStateForEject; // eax
  __int64 v46; // rdx
  PVOID v47; // [rsp+40h] [rbp-49h] BYREF
  PVOID P; // [rsp+48h] [rbp-41h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-39h]
  PCWSTR SourceString; // [rsp+58h] [rbp-31h] BYREF
  PVOID v51; // [rsp+60h] [rbp-29h] BYREF
  __int64 v52; // [rsp+68h] [rbp-21h] BYREF
  PVOID v53; // [rsp+70h] [rbp-19h] BYREF
  _DWORD v54[2]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v55; // [rsp+80h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-1h] BYREF
  char v58; // [rsp+F0h] [rbp+67h]
  int v59; // [rsp+F8h] [rbp+6Fh] BYREF
  ULONG_PTR v60; // [rsp+100h] [rbp+77h] BYREF
  __int64 v61; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *a1;
  v2 = 0LL;
  v52 = 0LL;
  v47 = 0LL;
  v3 = 0LL;
  LOBYTE(v59) = 0;
  v4 = (struct _DEVICE_OBJECT *)*((_QWORD *)v1 + 18);
  v5 = 7;
  LOBYTE(v60) = 0;
  P = 0LL;
  v53 = 0LL;
  DeviceObject = v4;
  if ( v4 )
    DeviceNode = (__int64)v4->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  PpDevNodeLockTree(1);
  if ( (unsigned int)(*(_DWORD *)(DeviceNode + 300) - 787) <= 1 )
  {
    v7 = -1073741738;
    goto LABEL_37;
  }
  v5 = PiDetermineDeleteType(v1);
  PnpRecordBlackboxPnpEventInformation((__int64)v1, v5, 1);
  v7 = PiCheckRemovalPreconditions(v5, (__int64)v1);
  if ( v7 < 0 )
  {
LABEL_37:
    PpDevNodeUnlockTree(1);
    goto LABEL_38;
  }
  if ( v5 == 4 )
  {
    if ( (*(_DWORD *)(DeviceNode + 396) & 0x80000) != 0 )
    {
LABEL_36:
      v7 = 0;
      goto LABEL_37;
    }
    if ( (unsigned int)(*(_DWORD *)(DeviceNode + 568) - 3) <= 1 )
    {
      v28 = 0;
    }
    else
    {
      if ( (*(_DWORD *)(DeviceNode + 560) & 0x10) == 0 )
      {
        v7 = -2147483608;
        v26 = DeviceNode + 40;
        v27 = 8LL;
        goto LABEL_127;
      }
      v28 = 1;
    }
    v7 = 0;
    if ( !v28 )
      goto LABEL_37;
  }
  if ( !v5 && !(unsigned int)PipAreDriversLoaded(DeviceNode) )
  {
    v7 = PiProcessQueryRemoveNoFdo(v1);
    goto LABEL_37;
  }
  VetoBuffer = PiEventAllocateVetoBuffer(v5);
  v3 = (unsigned int *)VetoBuffer;
  if ( !VetoBuffer )
    goto LABEL_72;
  if ( (int)PnpBuildRemovalRelationList((__int64)v4, v5, VetoBuffer, &v51) < 0 )
    goto LABEL_73;
  v9 = v51;
  v7 = PiEventBuildPdoList((_DWORD)v51, v5, (_DWORD)v1, (unsigned int)&v61, (__int64)&v47, (__int64)&v59, (__int64)&v60);
  if ( v7 < 0 )
    goto LABEL_125;
  v10 = PnpResizeTargetDeviceBlock(a1, v5);
  v1 = *a1;
  v7 = v10;
  if ( v10 < 0 )
    goto LABEL_125;
  LOBYTE(v11) = PiEventAreDeviceRelationsExcluded(v5);
  v7 = PnpCompileDeviceInstancePaths(v12, (_DWORD)v9, v11, 0, (__int64)&P);
  if ( v5 == 3 )
    PnpBuildUnsafeRemovalDeviceList(v14, v9, &v53);
  if ( v7 < 0 )
  {
LABEL_125:
    IopFreeRelationList(v9);
    if ( v7 == -2147483608 )
      goto LABEL_37;
    v26 = 0LL;
    v27 = 0LL;
LABEL_127:
    PnpFinalizeVetoedRemove(v1, v27, v26);
    goto LABEL_37;
  }
  if ( !(_BYTE)v59 )
  {
    v15 = v47;
    goto LABEL_17;
  }
  LOBYTE(v14) = v60;
  PpProfileBeginHardwareProfileTransition(v14);
  v15 = v47;
  if ( (int)v61 - 1 >= 0 )
  {
    v13 = (int)v61 - 1;
    do
    {
      v31 = v15[v13];
      if ( v31 )
        v32 = *(_QWORD *)(*(_QWORD *)(v31 + 312) + 40LL);
      else
        v32 = 0LL;
      if ( *(_DWORD *)(v32 + 568) == 1 )
      {
        _InterlockedIncrement(&PiProfileDevicesInTransition);
        v15 = v47;
        *(_DWORD *)(v32 + 568) = 3;
      }
      --v13;
    }
    while ( v13 >= 0 );
    v2 = v52;
    v9 = v51;
  }
  if ( v5 == 4 )
  {
    if ( (int)IoGetLegacyVetoList((PVOID *)&SourceString, v3) >= 0 && *v3 )
    {
      PpProfileCancelHardwareProfileTransition();
      IopFreeRelationList(v9);
      v34 = (_DWORD *)*((_QWORD *)v1 + 6);
      if ( v34 )
        *v34 = *v3;
      if ( *((_QWORD *)v1 + 7) )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        RtlCopyUnicodeString(*((PUNICODE_STRING *)v1 + 7), &DestinationString);
      }
      ExFreePoolWithTag((PVOID)SourceString, 0);
      SourceString = 0LL;
      goto LABEL_59;
    }
    LOBYTE(v33) = v60;
    if ( (int)PpProfileQueryHardwareProfileChange(v33, 0LL, v3, v3 + 2) >= 0 )
      goto LABEL_18;
    PpProfileCancelHardwareProfileTransition();
    IopFreeRelationList(v9);
LABEL_73:
    v30 = *v3;
    v29 = v3 + 2;
    goto LABEL_58;
  }
LABEL_17:
  if ( (v5 & 0xFFFFFFFB) != 0 )
  {
    if ( ((v5 - 3) & 0xFFFFFFFD) == 0 )
      PnpDeleteLockedDeviceNodes((int)DeviceObject, (int)v9, 3, 0, 0, 0, 0LL, 0LL);
    goto LABEL_19;
  }
LABEL_18:
  LOBYTE(v13) = 1;
  PnpTrackQueryRemoveDevices(v9, v13);
  v7 = PiProcessQueryAndCancelRemoval(v5, (__int64)v1, (int)v9, v61, (__int64)v15, v3, &P);
  if ( v7 < 0 )
  {
    if ( (_BYTE)v59 )
      PpProfileCancelHardwareProfileTransition();
    if ( *((_DWORD *)v1 + 4) == 54 )
      v7 = PiProcessCanceledRemoveForReset(v5, v1, v9, v3);
    PnpTrackQueryRemoveDevices(v9, 0LL);
    IopFreeRelationList(v9);
    goto LABEL_37;
  }
LABEL_19:
  if ( v5 == 3 )
  {
    v25 = v53;
    if ( v53 )
    {
      PnpNotifyUserModeDeviceRemoval(v1, v53, &GUID_DEVICE_SURPRISE_REMOVAL, 0LL, 0LL);
      ExFreePoolWithTag(v25, 0x4B706E50u);
    }
    v16 = &GUID_TARGET_DEVICE_REMOVE_COMPLETE;
  }
  else
  {
    v16 = &GUID_DEVICE_REMOVE_PENDING;
  }
  PnpNotifyUserModeDeviceRemoval(v1, P, v16, 0LL, 0LL);
  v17 = v47;
  PiSendTargetDeviceRemoveCompleteNotification(v5, v47, (unsigned int)v61);
  if ( ((v5 - 2) & 0xFFFFFFFC) == 0
    && v5 != 4
    && (LOBYTE(v18) = 1, PnpInvalidateRelationsInList(v9, v5, v18, 0LL), IopRemoveDeviceRelationsFromList(v9), v5 == 3)
    || v5 == 5 )
  {
    PiEventRemovalPostSurpriseRemove(v1, v5, &v51);
    PpDevNodeUnlockTree(1);
    PnpIsChainDereferenced(v17, v61, 0, 1u, 0LL);
    v7 = 0;
    goto LABEL_39;
  }
  v20 = DeviceObject;
  if ( *(_DWORD *)(DeviceNode + 568) )
  {
    IopQueryDockRemovalInterface(DeviceObject, &v52);
    v2 = v52;
    if ( v52 )
      (*(void (__fastcall **)(_QWORD, __int64))(v52 + 32))(*(_QWORD *)(v52 + 8), 3LL);
  }
  if ( !v5 )
  {
    PipSetDevNodeFlags(DeviceNode, 0x2000000);
LABEL_26:
    LOBYTE(v19) = 1;
    goto LABEL_27;
  }
  if ( v5 == 4 )
    goto LABEL_26;
  v19 = 0;
LABEL_27:
  PnpDeleteLockedDeviceNodes((int)v20, (int)v9, 2, v19, *((_DWORD *)v1 + 4), *((_DWORD *)v1 + 5), 0LL, 0LL);
  v21 = *(_DWORD *)(DeviceNode + 560) >> 3;
  LOBYTE(v21) = (*(_DWORD *)(DeviceNode + 560) & 8) != 0;
  v22 = HIWORD(*(_DWORD *)(DeviceNode + 560)) & 1;
  LODWORD(v60) = v21;
  v58 = v22;
  if ( v5 != 4 )
  {
    PiRestartRemovalRelations(v1, v9, v20);
    PnpUnlinkDeviceRemovalRelations(v23, v9);
    if ( v5 )
    {
LABEL_30:
      IopFreeRelationList(v9);
      if ( v5 == 2 )
        PnpNotifyUserModeDeviceRemoval(v1, P, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL);
      if ( !v5
        && (*((_DWORD *)v1 + 34) & 2) == 0
        && (*(_DWORD *)(DeviceNode + 396) & 0x2000) != 0
        && *(_DWORD *)(DeviceNode + 404) == 18 )
      {
        PipClearDevNodeProblem(DeviceNode);
        PnpRestartDeviceNode(DeviceNode);
        PnpRequestDeviceAction(*(PVOID *)(DeviceNode + 32), 16, 1, 0LL, 0LL, 0LL, 0LL);
      }
      if ( v2 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(v2 + 32))(*(_QWORD *)(v2 + 8), 1LL);
        (*(void (__fastcall **)(_QWORD))(v2 + 24))(*(_QWORD *)(v2 + 8));
      }
      goto LABEL_36;
    }
LABEL_29:
    PnpTrackQueryRemoveDevices(v9, 0LL);
    goto LABEL_30;
  }
  if ( !(_BYTE)v21 && !v22 )
  {
    PnpUnlinkDeviceRemovalRelations(v21, v9);
    goto LABEL_29;
  }
  v54[1] = 0;
  v54[0] = 1;
  while ( (unsigned __int8)IopEnumerateRelations((_DWORD)v9, (unsigned int)v54, (unsigned int)&v55, 0, 0LL) )
  {
    if ( v55 )
      v36 = *(_QWORD *)(*(_QWORD *)(v55 + 312) + 40LL);
    else
      v36 = 0LL;
    if ( v36 )
    {
      PipSetDevNodeFlags(v36, 0x80000);
      v37 = *(_QWORD *)(v36 + 696);
      v61 = v37;
      if ( v37 )
      {
        IopFreeRelationList(*(PVOID *)(v37 + 64));
        *(_QWORD *)(v61 + 64) = 0LL;
        *(_QWORD *)(v36 + 696) = 0LL;
      }
    }
  }
  PnpUnlinkDeviceRemovalRelations(v35, v9);
  LOBYTE(v38) = v59;
  PendingEjectRelations = PiEventAllocatePendingEjectRelations(v1, v9, v38, v2);
  v44 = (_QWORD *)PendingEjectRelations;
  if ( !PendingEjectRelations )
  {
    if ( v2 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(v2 + 32))(*(_QWORD *)(v2 + 8), 1LL);
      (*(void (__fastcall **)(_QWORD))(v2 + 24))(*(_QWORD *)(v2 + 8));
    }
    if ( (_BYTE)v59 )
      PpProfileCancelHardwareProfileTransition();
    LOBYTE(v43) = 1;
    PnpInvalidateRelationsInList(v9, 4LL, 0LL, v43);
    PnpTrackQueryRemoveDevices(v9, 0LL);
    IopFreeRelationList(v9);
LABEL_72:
    v29 = 0LL;
    v30 = 0LL;
LABEL_58:
    PnpFinalizeVetoedRemove(v1, v30, v29);
LABEL_59:
    v7 = -2147483608;
    goto LABEL_37;
  }
  LOBYTE(v42) = v58;
  LOBYTE(v40) = v60;
  LOBYTE(v41) = v59;
  *(_QWORD *)(DeviceNode + 696) = PendingEjectRelations;
  LightestSystemStateForEject = PoGetLightestSystemStateForEject(v41, v40, v42, PendingEjectRelations + 92);
  if ( LightestSystemStateForEject < 0 )
  {
    if ( LightestSystemStateForEject == -1073741090 )
      v46 = 9LL;
    else
      v46 = 0LL;
    PnpFinalizeVetoedRemove(v1, v46, 0LL);
    v44[6] = 0LL;
    *((_BYTE *)v44 + 89) = 0;
    v44[1] = v44;
    *v44 = v44;
    PnpProcessCompletedEject(v44);
    goto LABEL_59;
  }
  PpDevNodeUnlockTree(1);
  IopEjectDevice(DeviceObject);
  v7 = 259;
LABEL_38:
  if ( v7 != -1073741738 )
LABEL_39:
    PnpRecordBlackboxPnpEventInformation((__int64)v1, v5, 0);
  if ( v3 && !PnpShutdownEvent.Header.SignalState )
  {
    ExFreePoolWithTag(*((PVOID *)v3 + 2), 0x4D706E50u);
    *((_QWORD *)v3 + 2) = 0LL;
    ExFreePoolWithTag(v3, 0x4D706E50u);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v47 )
    ExFreePoolWithTag(v47, 0);
  return (unsigned int)v7;
}
