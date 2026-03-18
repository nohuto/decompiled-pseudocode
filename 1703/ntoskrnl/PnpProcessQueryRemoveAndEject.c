/*
 * XREFs of PnpProcessQueryRemoveAndEject @ 0x14056E6B4
 * Callers:
 *     PnpProcessTargetDeviceEvent @ 0x1404DA3D8 (PnpProcessTargetDeviceEvent.c)
 *     PnpShutdownDevices @ 0x140691F78 (PnpShutdownDevices.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14003CFA4 (PnpRequestDeviceAction.c)
 *     PipAreDriversLoaded @ 0x14004D54C (PipAreDriversLoaded.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     PnpIsChainDereferenced @ 0x140132070 (PnpIsChainDereferenced.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PipClearDevNodeProblem @ 0x14045D5E8 (PipClearDevNodeProblem.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 *     IopQueryDeviceState @ 0x1404A792C (IopQueryDeviceState.c)
 *     IoGetLegacyVetoList @ 0x1404C5C84 (IoGetLegacyVetoList.c)
 *     PipSetDevNodeFlags @ 0x1404E2E9C (PipSetDevNodeFlags.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x14056D8E4 (PiEventRemovalPostSurpriseRemove.c)
 *     PnpInvalidateRelationsInList @ 0x14056DCF8 (PnpInvalidateRelationsInList.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x14056E020 (PnpBuildUnsafeRemovalDeviceList.c)
 *     IopRemoveDeviceRelationsFromList @ 0x14056E174 (IopRemoveDeviceRelationsFromList.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x14056F120 (PnpNotifyUserModeDeviceRemoval.c)
 *     PiEventRemovalCompleteNotifyKernel @ 0x14056F260 (PiEventRemovalCompleteNotifyKernel.c)
 *     PnpBuildRemovalRelationList @ 0x14056F2D8 (PnpBuildRemovalRelationList.c)
 *     PiEventAllocateVetoBuffer @ 0x14056FA20 (PiEventAllocateVetoBuffer.c)
 *     PnpResizeTargetDeviceBlock @ 0x14056FA7C (PnpResizeTargetDeviceBlock.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14056FB58 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiEventBuildPdoList @ 0x14056FCD8 (PiEventBuildPdoList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14056FE2C (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x14056FF2C (PnpCompileDeviceInstancePaths.c)
 *     IopEnumerateRelations @ 0x1405700DC (IopEnumerateRelations.c)
 *     IopFreeRelationList @ 0x1405702D8 (IopFreeRelationList.c)
 *     PiEventRemovalGetDeleteType @ 0x140570414 (PiEventRemovalGetDeleteType.c)
 *     PiEventQueryRemoveDevices @ 0x14059A3AC (PiEventQueryRemoveDevices.c)
 *     PnpTrackQueryRemoveDevices @ 0x14059AC5C (PnpTrackQueryRemoveDevices.c)
 *     PiEventQueryRemoveNotifyKernel @ 0x14059B004 (PiEventQueryRemoveNotifyKernel.c)
 *     PiEventRestartRemovalRelations @ 0x14059B460 (PiEventRestartRemovalRelations.c)
 *     PnpRestartDeviceNode @ 0x140695D4C (PnpRestartDeviceNode.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140695E4C (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x140696080 (PnpProcessCompletedEject.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14069FDD0 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14069FE00 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1406A0184 (PpProfileQueryHardwareProfileChange.c)
 *     PnpFinalizeVetoedRemove @ 0x1406A053C (PnpFinalizeVetoedRemove.c)
 *     IopEjectDevice @ 0x1406A792C (IopEjectDevice.c)
 *     IopQueryDockRemovalInterface @ 0x1406A7AE8 (IopQueryDockRemovalInterface.c)
 *     PiEventQueryRemoveNoFdo @ 0x1406AA2D0 (PiEventQueryRemoveNoFdo.c)
 *     PiEventRemovalCanceledNotifyKernel @ 0x1406AA370 (PiEventRemovalCanceledNotifyKernel.c)
 *     PoGetLightestSystemStateForEject @ 0x1406C5224 (PoGetLightestSystemStateForEject.c)
 */

__int64 __fastcall PnpProcessQueryRemoveAndEject(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // r13
  PVOID v3; // r12
  _QWORD *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r15
  int v7; // eax
  ULONG_PTR v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ebx
  PUNICODE_STRING v12; // rbx
  unsigned int *v13; // r12
  _DWORD **BugCheckParameter4; // rsi
  __int64 *v15; // rdi
  int v16; // eax
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // r8
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  int v24; // r8d
  __int64 v25; // rcx
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rdx
  GUID *v29; // r8
  PVOID v30; // rbx
  int v31; // ebx
  int v32; // r9d
  PVOID v33; // rbx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // r14
  __int64 v40; // rcx
  _BYTE *PoolWithTag; // rbx
  struct _DEVICE_OBJECT *v42; // r14
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  bool v46; // al
  int LightestSystemStateForEject; // eax
  __int64 v48; // rdx
  PVOID v49; // rdi
  PVOID v51; // [rsp+50h] [rbp-79h] BYREF
  int v52; // [rsp+58h] [rbp-71h] BYREF
  int v53; // [rsp+60h] [rbp-69h] BYREF
  int v54; // [rsp+64h] [rbp-65h]
  PVOID v55; // [rsp+68h] [rbp-61h] BYREF
  __int64 v56; // [rsp+70h] [rbp-59h] BYREF
  PUNICODE_STRING v57; // [rsp+78h] [rbp-51h] BYREF
  PVOID Object; // [rsp+80h] [rbp-49h]
  int v59; // [rsp+88h] [rbp-41h] BYREF
  __int64 v60; // [rsp+90h] [rbp-39h] BYREF
  ULONG_PTR v61; // [rsp+98h] [rbp-31h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-29h] BYREF
  PCWSTR SourceString; // [rsp+A8h] [rbp-21h] BYREF
  PVOID P; // [rsp+B0h] [rbp-19h] BYREF
  PVOID v65; // [rsp+B8h] [rbp-11h]
  int v66[2]; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp+7h] BYREF
  __int64 *v69; // [rsp+130h] [rbp+67h] BYREF
  char v70; // [rsp+138h] [rbp+6Fh] BYREF
  ULONG_PTR v71; // [rsp+140h] [rbp+77h] BYREF
  char v72; // [rsp+148h] [rbp+7Fh]

  v69 = a1;
  v1 = *a1;
  v2 = 0LL;
  v65 = 0LL;
  v3 = 0LL;
  v55 = 0LL;
  v67 = 0LL;
  v4 = *(_QWORD **)(v1 + 144);
  *(_QWORD *)v66 = 0LL;
  P = 0LL;
  v60 = 0LL;
  v5 = v4[39];
  v70 = 0;
  LOBYTE(v71) = 0;
  v51 = 0LL;
  v6 = *(_QWORD *)(v5 + 40);
  Object = v4;
  PpDevNodeLockTree(1);
  if ( (unsigned int)(*(_DWORD *)(v6 + 300) - 787) <= 1 )
  {
    v11 = -1073741738;
    goto LABEL_146;
  }
  v7 = PiEventRemovalGetDeleteType(v6, v1);
  v8 = v7;
  if ( v7 == 4 || v7 <= 1 || (v72 = 1, v7 >= 7) )
    v72 = 0;
  if ( (v7 & 0xFFFFFFFB) == 0 && (*(_DWORD *)(v6 + 396) & 0x1000) != 0 )
  {
    v9 = 1LL;
LABEL_9:
    v10 = v6 + 40;
LABEL_10:
    PnpFinalizeVetoedRemove(v1, v9, v10);
LABEL_11:
    v11 = -2147483608;
LABEL_146:
    PpDevNodeUnlockTree(1);
    goto LABEL_147;
  }
  if ( !v7 && *(_DWORD *)(v1 + 16) == 22 && *(_DWORD *)(v6 + 600) )
  {
    v9 = 10LL;
    goto LABEL_9;
  }
  v65 = (PVOID)PiEventAllocateVetoBuffer((unsigned int)v7, &v62, &v57);
  if ( !v65 )
  {
LABEL_17:
    v10 = 0LL;
    v9 = 0LL;
    goto LABEL_10;
  }
  if ( (_DWORD)v8 == 4 )
  {
    if ( (*(_DWORD *)(v6 + 396) & 0x80000) != 0 || (unsigned int)(*(_DWORD *)(v6 + 568) - 3) <= 1 )
    {
LABEL_20:
      v11 = 0;
      goto LABEL_146;
    }
    if ( (*(_DWORD *)(v6 + 560) & 0x10) == 0 )
    {
      v9 = 8LL;
      goto LABEL_9;
    }
  }
  else if ( !(_DWORD)v8 && !(unsigned int)PipAreDriversLoaded(v6) )
  {
    v11 = PiEventQueryRemoveNoFdo(v6, v1);
    goto LABEL_146;
  }
  v12 = v57;
  v13 = (unsigned int *)v62;
  if ( (int)PnpBuildRemovalRelationList(v4, (unsigned int)v8, v62, v57, &v61) < 0 )
  {
LABEL_28:
    PnpFinalizeVetoedRemove(v1, *v13, v12);
LABEL_29:
    v11 = -2147483608;
LABEL_30:
    v3 = v51;
    goto LABEL_146;
  }
  BugCheckParameter4 = (_DWORD **)v61;
  v11 = PiEventBuildPdoList(v61, v8, v1, (unsigned int)&v52, (__int64)&v55, (__int64)&v70, (__int64)&v71);
  if ( v11 < 0 )
    goto LABEL_143;
  v15 = v69;
  v16 = PnpResizeTargetDeviceBlock(v69, (unsigned int)v8);
  v1 = *v15;
  v11 = v16;
  if ( v16 < 0 )
    goto LABEL_143;
  LOBYTE(v17) = v72;
  v11 = PnpCompileDeviceInstancePaths(v8, (_DWORD)BugCheckParameter4, v17, 0, (__int64)&v51);
  if ( (_DWORD)v8 == 3 )
    PnpBuildUnsafeRemovalDeviceList(v19, (__int64)BugCheckParameter4, &P);
  if ( v11 < 0 )
  {
LABEL_143:
    IopFreeRelationList(BugCheckParameter4);
    if ( v11 != -2147483608 )
      PnpFinalizeVetoedRemove(v1, 0LL, 0LL);
    goto LABEL_30;
  }
  if ( !v70 )
    goto LABEL_53;
  LOBYTE(v19) = v71;
  PpProfileBeginHardwareProfileTransition(v19);
  v20 = v52 - 1;
  if ( v52 - 1 >= 0 )
  {
    v21 = v55;
    do
    {
      v56 = v21[v20];
      v18 = *(_QWORD *)(*(_QWORD *)(v56 + 312) + 40LL);
      if ( *(_DWORD *)(v18 + 568) == 1 )
      {
        _InterlockedIncrement(&PiProfileDevicesInTransition);
        v21 = v55;
        *(_DWORD *)(v18 + 568) = 3;
      }
      --v20;
    }
    while ( v20 >= 0 );
    v2 = v60;
    v13 = (unsigned int *)v62;
    BugCheckParameter4 = (_DWORD **)v61;
  }
  if ( (_DWORD)v8 == 4 )
  {
    if ( (int)IoGetLegacyVetoList((PVOID *)&SourceString, v13) >= 0 && *v13 )
    {
      PpProfileCancelHardwareProfileTransition();
      IopFreeRelationList(BugCheckParameter4);
      v23 = *(_DWORD **)(v1 + 48);
      if ( v23 )
        *v23 = *v13;
      if ( *(_QWORD *)(v1 + 56) )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        RtlCopyUnicodeString(*(PUNICODE_STRING *)(v1 + 56), &DestinationString);
      }
      ExFreePoolWithTag((PVOID)SourceString, 0);
      goto LABEL_29;
    }
    v12 = v57;
    LOBYTE(v22) = v71;
    if ( (int)PpProfileQueryHardwareProfileChange(v22, 0LL, v13, v57) < 0 )
    {
      PpProfileCancelHardwareProfileTransition();
      IopFreeRelationList(BugCheckParameter4);
      goto LABEL_28;
    }
  }
  else
  {
LABEL_53:
    if ( (v8 & 0xFFFFFFFB) != 0 )
    {
      if ( (((_DWORD)v8 - 3) & 0xFFFFFFFD) == 0 )
        PnpDeleteLockedDeviceNodes((int)Object, (int)BugCheckParameter4, 3, 0, 0, 0, 0LL, 0LL);
      goto LABEL_92;
    }
    v12 = v57;
  }
  LOBYTE(v18) = 1;
  PnpTrackQueryRemoveDevices(BugCheckParameter4, v18);
  v11 = PnpNotifyUserModeDeviceRemoval(v1, v51, &GUID_TARGET_DEVICE_QUERY_REMOVE, v13, v12);
  if ( v11 < 0 )
  {
    PnpFinalizeVetoedRemove(v1, *v13, v57);
  }
  else
  {
    v11 = PiEventQueryRemoveNotifyKernel(v1, (int)v55, v52, (int)v66, (__int64)v13, v57);
    if ( v11 < 0 )
    {
LABEL_61:
      PnpFinalizeVetoedRemove(v1, *v13, v57);
      PnpNotifyUserModeDeviceRemoval(v1, v51, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0LL, 0LL);
      goto LABEL_65;
    }
    v11 = PiEventQueryRemoveDevices((unsigned int)v8, v1, Object, BugCheckParameter4, v52, v55, v13, v57, &v67);
    if ( v11 < 0 )
    {
      PiEventRemovalCanceledNotifyKernel(v55, (unsigned int)v52);
      goto LABEL_61;
    }
    if ( *(_DWORD *)(v1 + 16) == 54 )
    {
      LOBYTE(v24) = v72;
      v11 = PnpCancelRemoveOnHungDevices(v1, v8, v24, (_DWORD)BugCheckParameter4, (__int64)&v51);
    }
  }
LABEL_65:
  if ( v11 < 0 )
  {
    if ( v70 )
      PpProfileCancelHardwareProfileTransition();
    if ( *(_DWORD *)(v1 + 16) != 54 )
      goto LABEL_91;
    v54 = 0;
    v53 = 1;
    while ( (unsigned __int8)IopEnumerateRelations(
                               (_DWORD)BugCheckParameter4,
                               (unsigned int)&v53,
                               (unsigned int)&v56,
                               0,
                               0LL) )
    {
      if ( v56 )
        v25 = *(_QWORD *)(*(_QWORD *)(v56 + 312) + 40LL);
      else
        v25 = 0LL;
      if ( v25 )
        *(_DWORD *)(v25 + 704) &= ~2u;
    }
    if ( **BugCheckParameter4 == 1 )
    {
      if ( *(_DWORD *)(v6 + 300) == 788 )
        KeBugCheckEx(0xCAu, 0xEuLL, v8, (int)*v13, (ULONG_PTR)BugCheckParameter4);
      v26 = (int)Object;
      *((_DWORD *)Object + 12) |= 0x4000000u;
      IopQueryDeviceState(v26, &v59);
    }
    else
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 216LL) & 1) == 0 || *v13 != 5 )
      {
        v11 = -2147483608;
        goto LABEL_91;
      }
      v54 = 0;
      v53 = 1;
      while ( (unsigned __int8)IopEnumerateRelations(
                                 (_DWORD)BugCheckParameter4,
                                 (unsigned int)&v53,
                                 (unsigned int)&v56,
                                 (unsigned int)&v69,
                                 0LL) )
      {
        v27 = v56;
        if ( v56 )
          v28 = *(_QWORD *)(*(_QWORD *)(v56 + 312) + 40LL);
        else
          v28 = 0LL;
        if ( (_DWORD)v69 != 1 && *(_DWORD *)(v28 + 300) != 788 )
        {
          *(_DWORD *)(v56 + 48) |= 0x4000000u;
          IopQueryDeviceState(v27, &v59);
        }
      }
    }
    v11 = 0;
LABEL_91:
    PnpTrackQueryRemoveDevices(BugCheckParameter4, 0LL);
    IopFreeRelationList(BugCheckParameter4);
    goto LABEL_30;
  }
LABEL_92:
  if ( (_DWORD)v8 == 3 )
  {
    v30 = P;
    if ( P )
    {
      PnpNotifyUserModeDeviceRemoval(v1, P, &GUID_DEVICE_SURPRISE_REMOVAL, 0LL, 0LL);
      ExFreePoolWithTag(v30, 0x4B706E50u);
    }
    v29 = &GUID_TARGET_DEVICE_REMOVE_COMPLETE;
  }
  else
  {
    v29 = &GUID_DEVICE_REMOVE_PENDING;
  }
  v3 = v51;
  PnpNotifyUserModeDeviceRemoval(v1, v51, v29, 0LL, 0LL);
  v31 = v52;
  PiEventRemovalCompleteNotifyKernel((unsigned int)v8, v55, (unsigned int)v52);
  if ( (((_DWORD)v8 - 2) & 0xFFFFFFFC) == 0 && (_DWORD)v8 != 4 )
  {
    PnpInvalidateRelationsInList(BugCheckParameter4, v8, 1, 0);
    IopRemoveDeviceRelationsFromList(BugCheckParameter4);
  }
  if ( (((_DWORD)v8 - 3) & 0xFFFFFFFD) != 0 )
  {
    v33 = Object;
    if ( *(_DWORD *)(v6 + 568) )
    {
      IopQueryDockRemovalInterface(Object, &v60);
      v2 = v60;
      if ( v60 )
        (*(void (__fastcall **)(_QWORD, __int64))(v60 + 32))(*(_QWORD *)(v60 + 8), 3LL);
    }
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 != 4 )
      {
        v32 = 0;
LABEL_107:
        PnpDeleteLockedDeviceNodes(
          (int)v33,
          (int)BugCheckParameter4,
          2,
          v32,
          *(_DWORD *)(v1 + 16),
          *(_DWORD *)(v1 + 20),
          0LL,
          0LL);
        v34 = *(_DWORD *)(v6 + 560) >> 3;
        v35 = HIWORD(*(_DWORD *)(v6 + 560));
        LOBYTE(v34) = (*(_DWORD *)(v6 + 560) & 8) != 0;
        LOBYTE(v35) = HIWORD(*(_DWORD *)(v6 + 560)) & 1;
        LODWORD(v71) = v34;
        LODWORD(v69) = v35;
        if ( (_DWORD)v8 == 4 )
        {
          if ( (_BYTE)v34 || (_BYTE)v35 )
          {
            v54 = 0;
            v53 = 1;
            while ( (unsigned __int8)IopEnumerateRelations(
                                       (_DWORD)BugCheckParameter4,
                                       (unsigned int)&v53,
                                       (unsigned int)&v56,
                                       0,
                                       0LL) )
            {
              v37 = *(_QWORD *)(v56 + 312);
              v38 = *(_QWORD *)(v37 + 40);
              if ( v38 )
              {
                PipSetDevNodeFlags(*(_QWORD *)(v37 + 40), 0x80000);
                v39 = *(_QWORD *)(v38 + 696);
                if ( v39 )
                {
                  IopFreeRelationList(*(PVOID *)(v39 + 64));
                  *(_QWORD *)(v39 + 64) = 0LL;
                  *(_QWORD *)(v38 + 696) = 0LL;
                }
              }
            }
            PnpUnlinkDeviceRemovalRelations(v40, BugCheckParameter4);
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x20207050u);
            if ( PoolWithTag )
            {
              v42 = (struct _DEVICE_OBJECT *)Object;
              ObfReferenceObject(Object);
              LOBYTE(v43) = v70;
              LOBYTE(v44) = (_BYTE)v69;
              LOBYTE(v45) = v71;
              PoolWithTag[88] = v70;
              *((_QWORD *)PoolWithTag + 6) = v1;
              *((_QWORD *)PoolWithTag + 7) = v42;
              *((_QWORD *)PoolWithTag + 8) = BugCheckParameter4;
              v46 = (*(_DWORD *)(v1 + 136) & 8) != 0;
              *((_QWORD *)PoolWithTag + 12) = v2;
              PoolWithTag[89] = v46;
              *(_QWORD *)(v6 + 696) = PoolWithTag;
              LightestSystemStateForEject = PoGetLightestSystemStateForEject(v43, v45, v44, PoolWithTag + 92);
              if ( LightestSystemStateForEject >= 0 )
              {
                PpDevNodeUnlockTree(1);
                IopEjectDevice(v42);
                v11 = 259;
LABEL_147:
                v49 = v55;
                goto LABEL_148;
              }
              if ( LightestSystemStateForEject == -1073741090 )
                v48 = 9LL;
              else
                v48 = 0LL;
              PnpFinalizeVetoedRemove(v1, v48, 0LL);
              *((_QWORD *)PoolWithTag + 6) = 0LL;
              PoolWithTag[89] = 0;
              *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
              *(_QWORD *)PoolWithTag = PoolWithTag;
              PnpProcessCompletedEject(PoolWithTag);
              goto LABEL_11;
            }
            if ( v2 )
            {
              (*(void (__fastcall **)(_QWORD, __int64))(v2 + 32))(*(_QWORD *)(v2 + 8), 1LL);
              (*(void (__fastcall **)(_QWORD))(v2 + 24))(*(_QWORD *)(v2 + 8));
            }
            if ( v70 )
              PpProfileCancelHardwareProfileTransition();
            PnpInvalidateRelationsInList(BugCheckParameter4, 4u, 0, 1);
            PnpTrackQueryRemoveDevices(BugCheckParameter4, 0LL);
            IopFreeRelationList(BugCheckParameter4);
            goto LABEL_17;
          }
          PnpUnlinkDeviceRemovalRelations(v34, BugCheckParameter4);
        }
        else
        {
          PiEventRestartRemovalRelations(v1, BugCheckParameter4, v33);
          PnpUnlinkDeviceRemovalRelations(v36, BugCheckParameter4);
          if ( (_DWORD)v8 )
          {
LABEL_116:
            IopFreeRelationList(BugCheckParameter4);
            if ( (_DWORD)v8 == 2 )
              PnpNotifyUserModeDeviceRemoval(v1, v3, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL);
            if ( !(_DWORD)v8
              && (*(_DWORD *)(v1 + 136) & 2) == 0
              && (*(_DWORD *)(v6 + 396) & 0x2000) != 0
              && *(_DWORD *)(v6 + 404) == 18 )
            {
              PipClearDevNodeProblem(v6);
              PnpRestartDeviceNode(v6);
              PnpRequestDeviceAction(*(PVOID *)(v6 + 32), 16, 1, 0LL, 0LL, 0LL, 0LL);
            }
            if ( v2 )
            {
              (*(void (__fastcall **)(_QWORD, __int64))(v2 + 32))(*(_QWORD *)(v2 + 8), 1LL);
              (*(void (__fastcall **)(_QWORD))(v2 + 24))(*(_QWORD *)(v2 + 8));
            }
            goto LABEL_20;
          }
        }
        PnpTrackQueryRemoveDevices(BugCheckParameter4, 0LL);
        goto LABEL_116;
      }
    }
    else
    {
      PipSetDevNodeFlags(v6, 0x2000000);
    }
    LOBYTE(v32) = 1;
    goto LABEL_107;
  }
  PiEventRemovalPostSurpriseRemove((_QWORD *)v6, v1, v8, &v61);
  PpDevNodeUnlockTree(1);
  v49 = v55;
  PnpIsChainDereferenced(v55, v31, 0, 1u, 0LL);
  v11 = 0;
LABEL_148:
  if ( v65 && !PnpShutdownEvent.Header.SignalState )
    ExFreePoolWithTag(v65, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v49 )
    ExFreePoolWithTag(v49, 0);
  return (unsigned int)v11;
}
