/*
 * XREFs of IoReportDetectedDevice @ 0x1405DF730
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfExW @ 0x1400DEF40 (RtlStringCchPrintfExW.c)
 *     PipIsDevNodeDNStarted @ 0x1400DF750 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoaded @ 0x1400DF77C (PipAreDriversLoaded.c)
 *     PipSetDevNodeState @ 0x1400E0004 (PipSetDevNodeState.c)
 *     RtlStringCbLengthW @ 0x1400E0214 (RtlStringCbLengthW.c)
 *     IoDeleteDevice @ 0x1400FAC00 (IoDeleteDevice.c)
 *     PpDevNodeInsertIntoTree @ 0x1400FCAC8 (PpDevNodeInsertIntoTree.c)
 *     PpDevNodeRemoveFromTree @ 0x1401590B4 (PpDevNodeRemoveFromTree.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwDeleteKey @ 0x14017F240 (ZwDeleteKey.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140526314 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 *     PnpUnicodeStringToWstrFree @ 0x140527F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140527F48 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     _PnpSetObjectProperty @ 0x14052F8B4 (_PnpSetObjectProperty.c)
 *     IoCreateDevice @ 0x140549C50 (IoCreateDevice.c)
 *     RtlUpcaseUnicodeString @ 0x14054A990 (RtlUpcaseUnicodeString.c)
 *     _CmSetDeviceRegProp @ 0x140551244 (_CmSetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1405513AC (PnpDeviceObjectToDeviceInstance.c)
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     PipAllocateDeviceNode @ 0x140553840 (PipAllocateDeviceNode.c)
 *     PpDeviceRegistration @ 0x140555454 (PpDeviceRegistration.c)
 *     IopDoDeferredSetInterfaceState @ 0x140555F3C (IopDoDeferredSetInterfaceState.c)
 *     PnpDetermineResourceListSize @ 0x14055808C (PnpDetermineResourceListSize.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14055A85C (IopWriteAllocatedResourcesToRegistry.c)
 *     PipSetDevNodeProblem @ 0x14055DCFC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x14055DF68 (PipClearDevNodeProblem.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140588AC8 (PnpCleanupDeviceRegistryValues.c)
 *     _CmCreateDevice @ 0x14058A7FC (_CmCreateDevice.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140595710 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpAllocateDeviceInstancePath @ 0x1405BA8E4 (PnpAllocateDeviceInstancePath.c)
 *     IopIsReportedAlready @ 0x1405DFBE0 (IopIsReportedAlready.c)
 *     PnpSetRegistryDword @ 0x1405DFE2C (PnpSetRegistryDword.c)
 *     IopDuplicateDetection @ 0x1405DFE78 (IopDuplicateDetection.c)
 *     IoReportResourceUsageInternal @ 0x1406C0368 (IoReportResourceUsageInternal.c)
 *     PnpSetRegistryRequirementsList @ 0x1406C13C4 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x1406C1424 (PnpSetRegistryResourceList.c)
 *     IopCreateLegacyDeviceIds @ 0x1406D1FE0 (IopCreateLegacyDeviceIds.c)
 */

NTSTATUS __stdcall IoReportDetectedDevice(
        PDRIVER_OBJECT DriverObject,
        INTERFACE_TYPE LegacyBusType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PCM_RESOURCE_LIST ResourceList,
        PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements,
        BOOLEAN ResourceAssigned,
        PDEVICE_OBJECT *DeviceObject)
{
  char *DeviceNode; // rbx
  PDRIVER_EXTENSION DriverExtension; // r15
  UNICODE_STRING *p_ServiceKeyName; // r15
  PDEVICE_OBJECT v14; // rax
  NTSTATUS result; // eax
  const UNICODE_STRING *v16; // rdx
  int appended; // edi
  int v18; // eax
  int v19; // r13d
  struct _KTHREAD *CurrentThread; // rax
  char *v21; // rbx
  unsigned __int16 Length; // cx
  size_t v23; // r12
  wchar_t *v24; // rax
  signed __int64 v25; // rcx
  __int16 v26; // ax
  struct _DEVICE_OBJECT *v27; // rax
  __int64 v28; // r8
  PIO_RESOURCE_REQUIREMENTS_LIST v29; // r15
  ULONG v30; // eax
  char v31; // r13
  wchar_t *Buffer; // rdx
  wchar_t *i; // rcx
  struct _DEVICE_OBJECT *v34; // r12
  PDEVICE_OBJECT v35; // rcx
  int v36; // eax
  PVOID v37; // rax
  int DeviceInstancePath; // eax
  int v39; // eax
  int v40; // eax
  wchar_t *v41; // r13
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rdx
  PDRIVER_OBJECT v46; // rdi
  unsigned int *p_Length; // rdx
  int LegacyDeviceIds; // eax
  unsigned int v49; // eax
  int v50; // ecx
  SIZE_T v51; // rdi
  PVOID PoolWithTag; // rax
  void *v53; // rsi
  __int64 v54; // r8
  int v55; // edx
  __int64 v56; // rcx
  int dwFlags; // [rsp+20h] [rbp-E0h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-D8h]
  PDEVICE_OBJECT *v59; // [rsp+30h] [rbp-D0h]
  int v60; // [rsp+38h] [rbp-C8h]
  int v61; // [rsp+40h] [rbp-C0h]
  char v62; // [rsp+50h] [rbp-B0h]
  char v63; // [rsp+51h] [rbp-AFh] BYREF
  char v64; // [rsp+52h] [rbp-AEh] BYREF
  char v65[5]; // [rsp+53h] [rbp-ADh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v67; // [rsp+60h] [rbp-A0h] BYREF
  char *v68; // [rsp+68h] [rbp-98h] BYREF
  ULONG v69; // [rsp+70h] [rbp-90h]
  UNICODE_STRING Destination; // [rsp+78h] [rbp-88h] BYREF
  PDEVICE_OBJECT v71; // [rsp+88h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v73; // [rsp+98h] [rbp-68h] BYREF
  int v74; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int cbMax[3]; // [rsp+A4h] [rbp-5Ch] BYREF
  _WORD *v76; // [rsp+B0h] [rbp-50h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B8h] [rbp-48h] BYREF
  PDRIVER_OBJECT v78; // [rsp+C0h] [rbp-40h]
  PIO_RESOURCE_REQUIREMENTS_LIST v79; // [rsp+C8h] [rbp-38h]
  PVOID P; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t *j; // [rsp+D8h] [rbp-28h]
  STRSAFE_PCNZWCH psz; // [rsp+E0h] [rbp-20h] BYREF
  size_t pcbLength; // [rsp+E8h] [rbp-18h] BYREF
  PDEVICE_OBJECT *v84; // [rsp+F0h] [rbp-10h]
  wchar_t pszDest[200]; // [rsp+100h] [rbp+0h] BYREF

  v79 = ResourceRequirements;
  DeviceNode = 0LL;
  v78 = DriverObject;
  DriverExtension = DriverObject->DriverExtension;
  v84 = DeviceObject;
  p_ServiceKeyName = &DriverExtension->ServiceKeyName;
  v14 = *DeviceObject;
  *(_QWORD *)&cbMax[1] = 0LL;
  v76 = 0LL;
  v69 = SlotNumber;
  v73 = 0LL;
  v63 = 0;
  v68 = 0LL;
  v67 = 0;
  Handle = 0LL;
  Destination.Buffer = pszDest;
  *(_DWORD *)&Destination.Length = 26214400;
  KeyHandle = 0LL;
  v62 = 0;
  v71 = 0LL;
  P = 0LL;
  if ( v14 )
  {
    DeviceNode = (char *)v14->DeviceObjectExtension->DeviceNode;
    v68 = DeviceNode;
    if ( !DeviceNode )
      return -1073741578;
    goto LABEL_7;
  }
  if ( (DriverObject->Flags & 4) != 0 )
  {
    Buffer = p_ServiceKeyName->Buffer;
    for ( i = &Buffer[((unsigned __int64)p_ServiceKeyName->Length >> 1) - 1]; i != Buffer; --i )
    {
      if ( *i == 92 )
      {
        v76 = i + 1;
        LOWORD(cbMax[1]) = p_ServiceKeyName->Length
                         - 2 * ((__int64)(unsigned int)((_DWORD)i + 2 - LODWORD(p_ServiceKeyName->Buffer)) >> 1);
        HIWORD(cbMax[1]) = cbMax[1];
        goto LABEL_3;
      }
    }
    return -1073741585;
  }
  else
  {
LABEL_3:
    result = RtlAppendUnicodeToString(&Destination, L"ROOT\\");
    if ( result >= 0 )
    {
      v16 = (const UNICODE_STRING *)&cbMax[1];
      if ( (DriverObject->Flags & 4) == 0 )
        v16 = p_ServiceKeyName;
      result = RtlAppendUnicodeStringToString(&Destination, v16);
      if ( result >= 0 )
      {
LABEL_7:
        appended = PiPnpRtlBeginOperation((__int64 **)&P);
        if ( appended < 0 )
          goto LABEL_40;
        PpDevNodeLockTree(1);
        if ( DeviceNode || (DriverObject->Flags & 4) != 0 )
        {
          v19 = 0;
        }
        else
        {
          v18 = IopDuplicateDetection((unsigned int)LegacyBusType, BusNumber, v69, &v68);
          v19 = 0;
          appended = v18;
          if ( v18 >= 0 )
            v67 = v68 != 0LL;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        v21 = v68;
        if ( v68 )
        {
LABEL_25:
          if ( v67 )
          {
            if ( (unsigned int)PipAreDriversLoaded((__int64)v21)
              || (*((_DWORD *)v21 + 99) & 0x6000) != 0
              && ((v49 = *((_DWORD *)v21 + 101), v49 > 0x1C) || (v50 = 268697602, !_bittest(&v50, v49))) )
            {
              ObfDereferenceObject(*((PVOID *)v21 + 4));
              appended = -1073741810;
              goto LABEL_71;
            }
            if ( !v28 )
              PipClearDevNodeProblem((__int64)v21);
          }
          if ( !Handle )
          {
            appended = PnpDeviceObjectToDeviceInstance(*((_QWORD *)v21 + 4), (__int64)&Handle, 983103);
            if ( appended < 0 )
            {
LABEL_71:
              if ( v63 )
              {
                if ( KeyHandle )
                  ZwDeleteKey(KeyHandle);
                if ( v73 )
                  ZwDeleteKey(v73);
                if ( Handle )
                  ZwDeleteKey(Handle);
                PnpCleanupDeviceRegistryValues((__int64)(v21 + 40));
                PpDevNodeRemoveFromTree((__int64)v21);
                IoDeleteDevice(*((PDEVICE_OBJECT *)v21 + 4));
                ObfDereferenceObject(*((PVOID *)v21 + 4));
              }
              goto LABEL_40;
            }
          }
LABEL_31:
          v29 = v79;
          if ( !ResourceList && !v79
            || (v40 = CmOpenDeviceRegKey(
                        *(__int64 *)&PiPnpRtlCtx,
                        *((_QWORD *)v21 + 6),
                        0x14u,
                        0,
                        983103,
                        1,
                        (__int64)&KeyHandle,
                        0LL),
                appended = v40,
                v40 >= 0)
            && (!ResourceList || (v40 = PnpSetRegistryResourceList(KeyHandle), appended = v40, v40 >= 0))
            && (!v29 || (v40 = PnpSetRegistryRequirementsList(KeyHandle), appended = v40, v40 >= 0)) )
          {
            if ( ResourceAssigned )
            {
              PipSetDevNodeFlags((__int64)v21, 256);
              PnpSetRegistryDword(Handle);
              v30 = PnpDetermineResourceListSize(ResourceList);
              IopWriteAllocatedResourcesToRegistry((__int64)v21, ResourceList, v30);
            }
            else if ( ResourceList && ResourceList->Count && ResourceList->List[0].PartialResourceList.Count )
            {
              v51 = (unsigned int)PnpDetermineResourceListSize(ResourceList);
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v51, 0x47706E50u);
              v53 = PoolWithTag;
              if ( !PoolWithTag )
              {
LABEL_70:
                appended = -1073741670;
                PipSetDevNodeProblem((__int64)v21, 3, -1073741670);
                goto LABEL_71;
              }
              memmove(PoolWithTag, ResourceList, v51);
              pszFormat = (NTSTRSAFE_PCWSTR)*((_QWORD *)v21 + 4);
              v54 = *((_QWORD *)pszFormat + 1);
              v64 = 0;
              appended = IoReportResourceUsageInternal(
                           0,
                           v55,
                           v54,
                           0,
                           dwFlags,
                           (__int64)pszFormat,
                           (__int64)v53,
                           v60,
                           v61,
                           (__int64)&v64);
              ExFreePoolWithTag(v53, 0x47706E50u);
              if ( appended < 0 || v64 )
              {
                if ( !PipIsDevNodeDNStarted((__int64)v21) )
                  PipSetDevNodeProblem(v56, 12, appended);
                appended = -1073741800;
              }
            }
            else
            {
              PipSetDevNodeFlags((__int64)v21, 256);
            }
LABEL_35:
            v31 = v62;
LABEL_36:
            if ( appended >= 0 )
            {
              *((_DWORD *)v21 + 165) = *(_DWORD *)(*((_QWORD *)v21 + 2) + 660LL);
              IopDoDeferredSetInterfaceState((__int64)v21);
              PipSetDevNodeState((__int64)v21, 775);
              if ( v31 )
                PipSetDevNodeFlags((__int64)v21, 0x80000000);
              *v84 = (PDEVICE_OBJECT)*((_QWORD *)v21 + 4);
              goto LABEL_40;
            }
            goto LABEL_71;
          }
          goto LABEL_90;
        }
        appended = RtlAppendUnicodeToString(&Destination, L"\\");
        if ( appended < 0 )
        {
LABEL_40:
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          PpDevNodeUnlockTree(1);
          if ( KeyHandle )
            ZwClose(KeyHandle);
          if ( v73 )
            ZwClose(v73);
          if ( Handle )
            ZwClose(Handle);
          if ( P )
            PiPnpRtlEndOperation((PVOID **)P);
          return appended;
        }
        Length = Destination.Length;
        v69 = Destination.Length;
        v23 = (400 - (unsigned __int64)Destination.Length) >> 1;
        v24 = &pszDest[(unsigned __int64)Destination.Length >> 1];
        for ( j = v24; ; v24 = j )
        {
          Destination.Length = Length;
          LODWORD(v59) = v19;
          ppszDestEnd = v24;
          RtlStringCchPrintfExW(v24, v23, &ppszDestEnd, 0LL, 0, L"%04u", v59);
          v25 = &ppszDestEnd[-((unsigned __int64)Destination.Length >> 1)] - pszDest;
          if ( (_DWORD)v25 == -1 )
            v26 = 400 - Destination.Length;
          else
            v26 = 2 * v25;
          Destination.Length += v26;
          appended = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Destination.Buffer, 983103, &Handle, &v63, 0);
          if ( appended < 0 )
            goto LABEL_71;
          if ( v63 )
            goto LABEL_23;
          v67 = 0;
          if ( (unsigned __int8)IopIsReportedAlready(
                                  (unsigned int)&Destination,
                                  (_DWORD)Handle,
                                  (_DWORD)p_ServiceKeyName,
                                  (_DWORD)ResourceList,
                                  (__int64)&v67) )
            break;
          ZwClose(Handle);
          Length = v69;
          ++v19;
        }
        v27 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&Destination, 0x746C6644u);
        v71 = v27;
        if ( v27 )
        {
          v21 = (char *)v27->DeviceObjectExtension->DeviceNode;
        }
        else
        {
          appended = -1073741823;
          v21 = 0LL;
        }
        v68 = v21;
LABEL_23:
        if ( appended < 0 )
          goto LABEL_71;
        if ( v21 )
          goto LABEL_25;
        appended = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &v71);
        if ( appended < 0 )
          goto LABEL_71;
        v34 = v71;
        v35 = v71;
        v31 = 1;
        v62 = 1;
        v71->Flags |= 0x1000u;
        v36 = PipAllocateDeviceNode((__int64)v35, (void **)&v68);
        v21 = v68;
        if ( v36 == -1073740946 || !v68 )
        {
          IoDeleteDevice(v34);
          appended = -1073741670;
          goto LABEL_71;
        }
        if ( (v78->Flags & 4) == 0 )
        {
          v37 = ExAllocatePoolWithTag(PagedPool, p_ServiceKeyName->Length, 0x48706E50u);
          *((_QWORD *)v21 + 8) = v37;
          if ( !v37 )
            goto LABEL_70;
          *((_WORD *)v21 + 29) = p_ServiceKeyName->Length;
          DeviceInstancePath = RtlUpcaseUnicodeString((PUNICODE_STRING)(v21 + 56), p_ServiceKeyName, 0);
          appended = DeviceInstancePath;
          if ( DeviceInstancePath < 0 )
            goto LABEL_80;
        }
        DeviceInstancePath = PnpAllocateDeviceInstancePath((__int64)v21, (unsigned int)Destination.Length + 2);
        appended = DeviceInstancePath;
        if ( DeviceInstancePath < 0 )
        {
LABEL_80:
          PipSetDevNodeProblem((__int64)v21, 3, DeviceInstancePath);
          goto LABEL_36;
        }
        v39 = RtlUpcaseUnicodeString((PUNICODE_STRING)(v21 + 40), &Destination, 0);
        appended = v39;
        if ( v39 >= 0 )
        {
          *(_WORD *)(*((_QWORD *)v21 + 6) + 2 * ((unsigned __int64)*((unsigned __int16 *)v21 + 20) >> 1)) = 0;
          v74 = 32;
          v40 = CmSetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  (__int64)Handle,
                  0xBu,
                  4u,
                  (__int64)&v74,
                  4u,
                  0);
          appended = v40;
          if ( v40 < 0 )
            goto LABEL_90;
          v65[0] = -1;
          v40 = PnpSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  1u,
                  (__int64)Handle,
                  0LL,
                  (__int64)&DEVPKEY_Device_Reported,
                  17,
                  (__int64)v65,
                  1u,
                  0);
          appended = v40;
          if ( v40 < 0 )
            goto LABEL_90;
          v40 = PnpUnicodeStringToWstr(&psz, cbMax, &p_ServiceKeyName->Length);
          appended = v40;
          if ( v40 < 0 )
            goto LABEL_90;
          v41 = (wchar_t *)psz;
          appended = RtlStringCbLengthW(psz, cbMax[0], &pcbLength);
          if ( appended < 0 )
          {
            PnpUnicodeStringToWstrFree(v41, (__int64)p_ServiceKeyName);
LABEL_88:
            v42 = appended;
            goto LABEL_91;
          }
          appended = CmSetDeviceRegProp(
                       *(__int64 *)&PiPnpRtlCtx,
                       *((_QWORD *)v21 + 6),
                       (__int64)Handle,
                       5u,
                       1u,
                       (__int64)v41,
                       (int)pcbLength + 2,
                       0);
          PnpUnicodeStringToWstrFree(v41, (__int64)p_ServiceKeyName);
          if ( appended < 0 )
            goto LABEL_88;
          v73 = 0LL;
          v40 = CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  0x13u,
                  0,
                  983103,
                  1,
                  (__int64)&v73,
                  0LL);
          appended = v40;
          if ( v40 < 0 || (v40 = PnpSetRegistryDword(v73), appended = v40, v40 < 0) )
          {
LABEL_90:
            v42 = v40;
LABEL_91:
            v43 = 19;
            goto LABEL_92;
          }
          v46 = v78;
          if ( (v78->Flags & 4) == 0 )
          {
            LOBYTE(v45) = 1;
            PpDeviceRegistration((__int64)&Destination, v45, (__int64)(v21 + 56), 1);
          }
          p_Length = &cbMax[1];
          if ( (v46->Flags & 4) == 0 )
            p_Length = (unsigned int *)&p_ServiceKeyName->Length;
          LegacyDeviceIds = IopCreateLegacyDeviceIds(v34, p_Length, ResourceList);
          appended = LegacyDeviceIds;
          v44 = (__int64)v21;
          if ( LegacyDeviceIds < 0 )
          {
            v42 = LegacyDeviceIds;
            v43 = 19;
            goto LABEL_94;
          }
          PipSetDevNodeFlags((__int64)v21, 17);
          *((_DWORD *)v21 + 165) = *(_DWORD *)(IopRootDeviceNode + 660);
          PipSetDevNodeState((__int64)v21, 770);
          PpDevNodeInsertIntoTree(IopRootDeviceNode, (__int64)v21);
          v39 = PnpMapDeviceObjectToDeviceInstance((__int64)v34, (__int64)(v21 + 40));
          appended = v39;
          if ( v39 >= 0 )
          {
            ObfReferenceObject(v34);
            goto LABEL_31;
          }
        }
        v42 = v39;
        v43 = 3;
LABEL_92:
        v44 = (__int64)v21;
LABEL_94:
        PipSetDevNodeProblem(v44, v43, v42);
        goto LABEL_35;
      }
    }
  }
  return result;
}
