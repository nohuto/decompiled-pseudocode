/*
 * XREFs of PnpProcessQueryRemoveAndEject @ 0x1405C79A8
 * Callers:
 *     PnpProcessTargetDeviceEvent @ 0x1405CB290 (PnpProcessTargetDeviceEvent.c)
 *     PnpShutdownDevices @ 0x140722CB0 (PnpShutdownDevices.c)
 * Callees:
 *     PipAreDriversLoaded @ 0x14006EB44 (PipAreDriversLoaded.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     PnpIsChainDereferenced @ 0x140145630 (PnpIsChainDereferenced.c)
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 *     IoGetLegacyVetoList @ 0x14051CFCC (IoGetLegacyVetoList.c)
 *     PipClearDevNodeProblem @ 0x1405C73B4 (PipClearDevNodeProblem.c)
 *     PiEventAreDeviceRelationsExcluded @ 0x1405C7918 (PiEventAreDeviceRelationsExcluded.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x1405C7938 (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1405C7CF4 (PnpRecordBlackboxPnpEventInformation.c)
 *     PiGetTargetDeviceNode @ 0x1405C7E50 (PiGetTargetDeviceNode.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1405C7E70 (PnpNotifyUserModeDeviceRemoval.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x1405C7FB4 (PiEventRemovalPostSurpriseRemove.c)
 *     PnpBuildRemovalRelationList @ 0x1405C8040 (PnpBuildRemovalRelationList.c)
 *     IopRemoveDeviceRelationsFromList @ 0x1405C831C (IopRemoveDeviceRelationsFromList.c)
 *     PnpResizeTargetDeviceBlock @ 0x1405C8378 (PnpResizeTargetDeviceBlock.c)
 *     IopFreeRelationList @ 0x1405C8518 (IopFreeRelationList.c)
 *     PiEventAllocateVetoBuffer @ 0x1405C85C4 (PiEventAllocateVetoBuffer.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1405C9074 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiEventBuildPdoList @ 0x1405C9370 (PiEventBuildPdoList.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1405C94B4 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpInvalidateRelationsInList @ 0x1405C95F8 (PnpInvalidateRelationsInList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1405C9760 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x1405C9874 (PnpCompileDeviceInstancePaths.c)
 *     IopEnumerateRelations @ 0x1405C99FC (IopEnumerateRelations.c)
 *     PiDetermineDeleteType @ 0x1405CA46C (PiDetermineDeleteType.c)
 *     PipSetDevNodeFlags @ 0x1405D1BFC (PipSetDevNodeFlags.c)
 *     PnpRestartDeviceNode @ 0x140651E64 (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140727B00 (PnpProcessCompletedEject.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x140731D34 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x140731D64 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1407320E4 (PpProfileQueryHardwareProfileChange.c)
 *     PnpFinalizeVetoedRemove @ 0x14073254C (PnpFinalizeVetoedRemove.c)
 *     PnpTrackQueryRemoveDevices @ 0x140732CC0 (PnpTrackQueryRemoveDevices.c)
 *     IopEjectDevice @ 0x14073A03C (IopEjectDevice.c)
 *     IopQueryDockRemovalInterface @ 0x14073A1F8 (IopQueryDockRemovalInterface.c)
 *     PiEventAllocatePendingEjectRelations @ 0x14073EA1C (PiEventAllocatePendingEjectRelations.c)
 *     PiProcessCanceledRemoveForReset @ 0x14073EAB4 (PiProcessCanceledRemoveForReset.c)
 *     PiProcessQueryAndCancelRemoval @ 0x14073EC0C (PiProcessQueryAndCancelRemoval.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14073ED10 (PiProcessQueryRemoveNoFdo.c)
 *     PiRestartRemovalRelations @ 0x14073EDBC (PiRestartRemovalRelations.c)
 *     PoGetLightestSystemStateForEject @ 0x14075D0AC (PoGetLightestSystemStateForEject.c)
 */

__int64 __fastcall PnpProcessQueryRemoveAndEject(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // r12
  PVOID *v3; // r15
  PDEVICE_OBJECT v4; // rbx
  unsigned int v5; // r14d
  __int64 DeviceNode; // r13
  unsigned int v7; // eax
  __int64 v8; // r9
  __int64 TargetDeviceNode; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 VetoBuffer; // rax
  PVOID v14; // rsi
  int v15; // ebx
  int v16; // eax
  int v17; // r8d
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  PVOID v22; // rbx
  GUID *v23; // r8
  _QWORD *v24; // rbx
  __int64 v25; // r8
  int v26; // r9d
  PVOID *v27; // r8
  unsigned int *v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  _DWORD *v38; // rcx
  PDEVICE_OBJECT v39; // rbx
  __int64 v40; // rcx
  char v41; // al
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 PendingEjectRelations; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *v52; // rbx
  int LightestSystemStateForEject; // eax
  PVOID v54; // [rsp+40h] [rbp-49h] BYREF
  PVOID P; // [rsp+48h] [rbp-41h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-39h]
  PCWSTR SourceString; // [rsp+58h] [rbp-31h] BYREF
  PVOID v58; // [rsp+60h] [rbp-29h] BYREF
  __int64 v59; // [rsp+68h] [rbp-21h] BYREF
  PVOID v60; // [rsp+70h] [rbp-19h] BYREF
  _DWORD v61[2]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v62; // [rsp+80h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-1h] BYREF
  char v65; // [rsp+F0h] [rbp+67h]
  int v66; // [rsp+F8h] [rbp+6Fh] BYREF
  ULONG_PTR v67; // [rsp+100h] [rbp+77h] BYREF
  __int64 v68; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *a1;
  v2 = 0LL;
  v54 = 0LL;
  v3 = 0LL;
  P = 0LL;
  v60 = 0LL;
  v4 = *(PDEVICE_OBJECT *)(v1 + 152);
  v5 = 7;
  v59 = 0LL;
  LOBYTE(v66) = 0;
  LOBYTE(v67) = 0;
  DeviceObject = v4;
  if ( v4 )
    DeviceNode = (__int64)v4->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  PpDevNodeLockTree(1);
  if ( (unsigned int)(*(_DWORD *)(DeviceNode + 300) - 787) <= 1 )
  {
    v15 = -1073741738;
    goto LABEL_135;
  }
  v7 = PiDetermineDeleteType(v1);
  LOBYTE(v8) = 1;
  v5 = v7;
  PnpRecordBlackboxPnpEventInformation(v1, v7, 0LL, v8);
  TargetDeviceNode = PiGetTargetDeviceNode(v1);
  v12 = TargetDeviceNode;
  if ( (v5 & 0xFFFFFFFB) == 0 && (*(_DWORD *)(TargetDeviceNode + 396) & 0x1000) != 0 )
  {
    v29 = (unsigned int *)(TargetDeviceNode + 40);
    v30 = 1LL;
LABEL_61:
    PnpFinalizeVetoedRemove(v11, v30, v29);
LABEL_65:
    v15 = -2147483608;
    goto LABEL_135;
  }
  if ( !v5 && *(_DWORD *)(v1 + 16) == 22 && *(_DWORD *)(TargetDeviceNode + 600) )
  {
    v29 = (unsigned int *)(TargetDeviceNode + 40);
    v30 = 10LL;
    goto LABEL_61;
  }
  if ( v5 == 4 )
  {
    if ( (*(_DWORD *)(DeviceNode + 396) & 0x80000) != 0 )
    {
LABEL_116:
      v15 = 0;
      goto LABEL_135;
    }
    if ( (unsigned int)(*(_DWORD *)(DeviceNode + 568) - 3) <= 1 )
    {
      v33 = 0;
    }
    else
    {
      if ( (*(_DWORD *)(DeviceNode + 560) & 0x10) == 0 )
      {
        v15 = -2147483608;
        v31 = DeviceNode + 40;
        v32 = 8LL;
        goto LABEL_134;
      }
      v33 = 1;
    }
    v15 = 0;
    if ( v33 )
    {
      v4 = DeviceObject;
      goto LABEL_7;
    }
LABEL_135:
    PpDevNodeUnlockTree(1);
LABEL_136:
    if ( v15 == -1073741738 )
      goto LABEL_31;
    goto LABEL_28;
  }
LABEL_7:
  if ( !v5 && !(unsigned int)PipAreDriversLoaded(DeviceNode) )
  {
    v15 = PiProcessQueryRemoveNoFdo(v1);
    goto LABEL_135;
  }
  VetoBuffer = PiEventAllocateVetoBuffer(v5, v10, v12);
  v3 = (PVOID *)VetoBuffer;
  if ( !VetoBuffer )
  {
LABEL_57:
    v29 = 0LL;
    v30 = 0LL;
LABEL_60:
    v11 = v1;
    goto LABEL_61;
  }
  if ( (int)PnpBuildRemovalRelationList(v4, v5, VetoBuffer, &v58) < 0 )
    goto LABEL_59;
  v14 = v58;
  v15 = PiEventBuildPdoList((_DWORD)v58, v5, v1, (unsigned int)&v68, (__int64)&v54, (__int64)&v66, (__int64)&v67);
  if ( v15 < 0 )
    goto LABEL_132;
  v16 = PnpResizeTargetDeviceBlock(a1, v5);
  v1 = *a1;
  v15 = v16;
  if ( v16 < 0 )
    goto LABEL_132;
  LOBYTE(v17) = PiEventAreDeviceRelationsExcluded(v5);
  v15 = PnpCompileDeviceInstancePaths(v18, (_DWORD)v14, v17, 0, (__int64)&P);
  if ( v5 == 3 )
    PnpBuildUnsafeRemovalDeviceList(v20, v14, &v60);
  if ( v15 < 0 )
  {
LABEL_132:
    IopFreeRelationList(v14);
    if ( v15 == -2147483608 )
      goto LABEL_135;
    v31 = 0LL;
    v11 = v1;
    v32 = 0LL;
LABEL_134:
    PnpFinalizeVetoedRemove(v11, v32, v31);
    goto LABEL_135;
  }
  if ( !(_BYTE)v66 )
  {
    v21 = v54;
    goto LABEL_17;
  }
  LOBYTE(v20) = v67;
  PpProfileBeginHardwareProfileTransition(v20);
  v21 = v54;
  if ( (int)v68 - 1 >= 0 )
  {
    v19 = (int)v68 - 1;
    do
    {
      v35 = v21[v19];
      if ( v35 )
        v36 = *(_QWORD *)(*(_QWORD *)(v35 + 312) + 40LL);
      else
        v36 = 0LL;
      if ( *(_DWORD *)(v36 + 568) == 1 )
      {
        _InterlockedIncrement(&PiProfileDevicesInTransition);
        v21 = v54;
        *(_DWORD *)(v36 + 568) = 3;
      }
      --v19;
    }
    while ( v19 >= 0 );
    v2 = v59;
    v14 = v58;
  }
  if ( v5 == 4 )
  {
    if ( (int)IoGetLegacyVetoList((PVOID *)&SourceString, v3) >= 0 && *(_DWORD *)v3 )
    {
      PpProfileCancelHardwareProfileTransition();
      IopFreeRelationList(v14);
      v38 = *(_DWORD **)(v1 + 48);
      if ( v38 )
        *v38 = *(_DWORD *)v3;
      if ( *(_QWORD *)(v1 + 56) )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        RtlCopyUnicodeString(*(PUNICODE_STRING *)(v1 + 56), &DestinationString);
      }
      ExFreePoolWithTag((PVOID)SourceString, 0);
      SourceString = 0LL;
      goto LABEL_65;
    }
    LOBYTE(v37) = v67;
    if ( (int)PpProfileQueryHardwareProfileChange(v37, 0LL, v3, v3 + 1) >= 0 )
      goto LABEL_84;
    PpProfileCancelHardwareProfileTransition();
    IopFreeRelationList(v14);
LABEL_59:
    v30 = *(unsigned int *)v3;
    v29 = (unsigned int *)(v3 + 1);
    goto LABEL_60;
  }
LABEL_17:
  if ( (v5 & 0xFFFFFFFB) != 0 )
  {
    if ( ((v5 - 3) & 0xFFFFFFFD) == 0 )
      PnpDeleteLockedDeviceNodes((int)DeviceObject, (int)v14, 3, 0, 0, 0, 0LL, 0LL);
    goto LABEL_20;
  }
LABEL_84:
  LOBYTE(v19) = 1;
  PnpTrackQueryRemoveDevices(v14, v19);
  v15 = PiProcessQueryAndCancelRemoval(v5, v1, (_DWORD)v14, v68, (__int64)v21, (__int64)v3, (__int64)&P);
  if ( v15 < 0 )
  {
    if ( (_BYTE)v66 )
      PpProfileCancelHardwareProfileTransition();
    if ( *(_DWORD *)(v1 + 16) == 54 )
      v15 = PiProcessCanceledRemoveForReset(v5, v1, v14, v3);
    PnpTrackQueryRemoveDevices(v14, 0LL);
    IopFreeRelationList(v14);
    goto LABEL_135;
  }
LABEL_20:
  if ( v5 == 3 )
  {
    v22 = v60;
    if ( v60 )
    {
      PnpNotifyUserModeDeviceRemoval(v1, v60, &GUID_DEVICE_SURPRISE_REMOVAL, 0LL, 0LL);
      ExFreePoolWithTag(v22, 0x4B706E50u);
    }
    v23 = &GUID_TARGET_DEVICE_REMOVE_COMPLETE;
  }
  else
  {
    v23 = &GUID_DEVICE_REMOVE_PENDING;
  }
  PnpNotifyUserModeDeviceRemoval(v1, P, v23, 0LL, 0LL);
  v24 = v54;
  PiSendTargetDeviceRemoveCompleteNotification(v5, (_QWORD **)v54, v68);
  if ( ((v5 - 2) & 0xFFFFFFFC) != 0
    || v5 == 4
    || (LOBYTE(v25) = 1, PnpInvalidateRelationsInList(v14, v5, v25, 0LL), IopRemoveDeviceRelationsFromList(v14), v5 != 3) )
  {
    if ( v5 != 5 )
    {
      v39 = DeviceObject;
      if ( *(_DWORD *)(DeviceNode + 568) )
      {
        IopQueryDockRemovalInterface(DeviceObject, &v59);
        v2 = v59;
        if ( v59 )
          (*(void (__fastcall **)(_QWORD, __int64))(v59 + 32))(*(_QWORD *)(v59 + 8), 3LL);
      }
      if ( v5 )
      {
        if ( v5 != 4 )
        {
          LOBYTE(v26) = 0;
          goto LABEL_98;
        }
      }
      else
      {
        PipSetDevNodeFlags(DeviceNode, 0x2000000LL);
      }
      LOBYTE(v26) = 1;
LABEL_98:
      PnpDeleteLockedDeviceNodes((int)v39, (int)v14, 2, v26, *(_DWORD *)(v1 + 16), *(_DWORD *)(v1 + 20), 0LL, 0LL);
      v40 = *(_DWORD *)(DeviceNode + 560) >> 3;
      LOBYTE(v40) = (*(_DWORD *)(DeviceNode + 560) & 8) != 0;
      v41 = HIWORD(*(_DWORD *)(DeviceNode + 560)) & 1;
      LODWORD(v67) = v40;
      v65 = v41;
      if ( v5 != 4 )
      {
        PiRestartRemovalRelations(v1, v14, v39);
        PnpUnlinkDeviceRemovalRelations(v42, v14);
        if ( v5 )
          goto LABEL_107;
        goto LABEL_106;
      }
      if ( !(_BYTE)v40 && !v41 )
      {
        PnpUnlinkDeviceRemovalRelations(v40, v14);
LABEL_106:
        PnpTrackQueryRemoveDevices(v14, 0LL);
LABEL_107:
        IopFreeRelationList(v14);
        if ( v5 == 2 )
          PnpNotifyUserModeDeviceRemoval(v1, P, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL);
        if ( !v5
          && (*(_DWORD *)(v1 + 144) & 2) == 0
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
        goto LABEL_116;
      }
      v61[1] = 0;
      v61[0] = 1;
      while ( (unsigned __int8)IopEnumerateRelations((_DWORD)v14, (unsigned int)v61, (unsigned int)&v62, 0, 0LL) )
      {
        if ( v62 )
          v44 = *(_QWORD *)(*(_QWORD *)(v62 + 312) + 40LL);
        else
          v44 = 0LL;
        if ( v44 )
        {
          PipSetDevNodeFlags(v44, 0x80000LL);
          v45 = *(_QWORD *)(v44 + 696);
          v68 = v45;
          if ( v45 )
          {
            IopFreeRelationList(*(PVOID *)(v45 + 64));
            *(_QWORD *)(v68 + 64) = 0LL;
            *(_QWORD *)(v44 + 696) = 0LL;
          }
        }
      }
      PnpUnlinkDeviceRemovalRelations(v43, v14);
      LOBYTE(v46) = v66;
      PendingEjectRelations = PiEventAllocatePendingEjectRelations(v1, v14, v46, v2);
      v52 = (_QWORD *)PendingEjectRelations;
      if ( PendingEjectRelations )
      {
        LOBYTE(v50) = v65;
        LOBYTE(v48) = v67;
        LOBYTE(v49) = v66;
        *(_QWORD *)(DeviceNode + 696) = PendingEjectRelations;
        LightestSystemStateForEject = PoGetLightestSystemStateForEject(v49, v48, v50, PendingEjectRelations + 92);
        if ( LightestSystemStateForEject >= 0 )
        {
          PpDevNodeUnlockTree(1);
          IopEjectDevice(DeviceObject);
          v15 = 259;
          goto LABEL_136;
        }
        v34 = 0LL;
        if ( LightestSystemStateForEject == -1073741090 )
          v34 = 9LL;
        PnpFinalizeVetoedRemove(v1, v34, 0LL);
        v52[6] = 0LL;
        *((_BYTE *)v52 + 89) = 0;
        v52[1] = v52;
        *v52 = v52;
        PnpProcessCompletedEject(v52);
        goto LABEL_65;
      }
      if ( v2 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(v2 + 32))(*(_QWORD *)(v2 + 8), 1LL);
        (*(void (__fastcall **)(_QWORD))(v2 + 24))(*(_QWORD *)(v2 + 8));
      }
      if ( (_BYTE)v66 )
        PpProfileCancelHardwareProfileTransition();
      LOBYTE(v51) = 1;
      PnpInvalidateRelationsInList(v14, 4LL, 0LL, v51);
      PnpTrackQueryRemoveDevices(v14, 0LL);
      IopFreeRelationList(v14);
      goto LABEL_57;
    }
  }
  PiEventRemovalPostSurpriseRemove(v1, v5, &v58);
  PpDevNodeUnlockTree(1);
  PnpIsChainDereferenced(v24, v68, 0, 1u, 0LL);
  v15 = 0;
LABEL_28:
  if ( v3 )
    v27 = v3;
  else
    v27 = 0LL;
  PnpRecordBlackboxPnpEventInformation(v1, v5, v27, 0LL);
LABEL_31:
  if ( v3 && !PnpShutdownEvent.Header.SignalState )
  {
    ExFreePoolWithTag(v3[2], 0x4D706E50u);
    v3[2] = 0LL;
    ExFreePoolWithTag(v3, 0x4D706E50u);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v54 )
    ExFreePoolWithTag(v54, 0);
  return (unsigned int)v15;
}
