/*
 * XREFs of IoReportDetectedDevice @ 0x1405AFEA0
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x1400058A0 (IoDeleteDevice.c)
 *     RtlStringCbLengthW @ 0x14003D760 (RtlStringCbLengthW.c)
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfExW @ 0x14004C0E0 (RtlStringCchPrintfExW.c)
 *     PipAreDriversLoaded @ 0x14004D54C (PipAreDriversLoaded.c)
 *     PipIsDevNodeDNStarted @ 0x14004FB44 (PipIsDevNodeDNStarted.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     PipSetDevNodeState @ 0x1400810C0 (PipSetDevNodeState.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PpDevNodeInsertIntoTree @ 0x14012281C (PpDevNodeInsertIntoTree.c)
 *     PpDevNodeRemoveFromTree @ 0x140131A0C (PpDevNodeRemoveFromTree.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwDeleteKey @ 0x14017F8A0 (ZwDeleteKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _CmCreateDevice @ 0x14044CE10 (_CmCreateDevice.c)
 *     IopDoDeferredSetInterfaceState @ 0x14044FA88 (IopDoDeferredSetInterfaceState.c)
 *     PipClearDevNodeProblem @ 0x14045D5E8 (PipClearDevNodeProblem.c)
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 *     PiPnpRtlBeginOperation @ 0x14048823C (PiPnpRtlBeginOperation.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140488390 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 *     PnpUnicodeStringToWstrFree @ 0x14048AF14 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14048AF4C (PnpUnicodeStringToWstr.c)
 *     RtlUpcaseUnicodeString @ 0x1404971A0 (RtlUpcaseUnicodeString.c)
 *     IoCreateDevice @ 0x1404A1F50 (IoCreateDevice.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404B8088 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PpDeviceRegistration @ 0x1404D9BDC (PpDeviceRegistration.c)
 *     _PnpSetObjectProperty @ 0x1404DDABC (_PnpSetObjectProperty.c)
 *     _CmSetDeviceRegProp @ 0x1404DE39C (_CmSetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1404DE504 (PnpDeviceObjectToDeviceInstance.c)
 *     PipSetDevNodeFlags @ 0x1404E2E9C (PipSetDevNodeFlags.c)
 *     PipAllocateDeviceNode @ 0x140559210 (PipAllocateDeviceNode.c)
 *     PnpDetermineResourceListSize @ 0x14055BF98 (PnpDetermineResourceListSize.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14056E118 (PnpCleanupDeviceRegistryValues.c)
 *     PipSetDevNodeProblem @ 0x140570490 (PipSetDevNodeProblem.c)
 *     IopIsReportedAlready @ 0x1405B0350 (IopIsReportedAlready.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x1405B0EE4 (IopWriteAllocatedResourcesToRegistry.c)
 *     PnpAllocateDeviceInstancePath @ 0x1405D061C (PnpAllocateDeviceInstancePath.c)
 *     IopDuplicateDetection @ 0x1405D4F5C (IopDuplicateDetection.c)
 *     PnpSetRegistryDword @ 0x1405D5804 (PnpSetRegistryDword.c)
 *     IoReportResourceUsageInternal @ 0x1406945A8 (IoReportResourceUsageInternal.c)
 *     PnpSetRegistryRequirementsList @ 0x140695604 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x140695664 (PnpSetRegistryResourceList.c)
 *     IopCreateLegacyDeviceIds @ 0x1406A7358 (IopCreateLegacyDeviceIds.c)
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
  unsigned int v30; // eax
  char v31; // r13
  wchar_t *Buffer; // rdx
  wchar_t *i; // rcx
  struct _DEVICE_OBJECT *v34; // r12
  PDEVICE_OBJECT v35; // rcx
  int v36; // eax
  PVOID v37; // rax
  NTSTATUS DeviceInstancePath; // eax
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
  _BYTE v65[13]; // [rsp+53h] [rbp-ADh] BYREF
  BOOL v66; // [rsp+60h] [rbp-A0h] BYREF
  char *v67; // [rsp+68h] [rbp-98h] BYREF
  ULONG v68; // [rsp+70h] [rbp-90h]
  UNICODE_STRING Destination; // [rsp+78h] [rbp-88h] BYREF
  PDEVICE_OBJECT v70; // [rsp+88h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v72; // [rsp+98h] [rbp-68h] BYREF
  int v73; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int cbMax[3]; // [rsp+A4h] [rbp-5Ch] BYREF
  _WORD *v75; // [rsp+B0h] [rbp-50h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B8h] [rbp-48h] BYREF
  PDRIVER_OBJECT v77; // [rsp+C0h] [rbp-40h]
  PIO_RESOURCE_REQUIREMENTS_LIST v78; // [rsp+C8h] [rbp-38h]
  PVOID P; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t *j; // [rsp+D8h] [rbp-28h]
  STRSAFE_PCNZWCH psz; // [rsp+E0h] [rbp-20h] BYREF
  size_t pcbLength; // [rsp+E8h] [rbp-18h] BYREF
  PDEVICE_OBJECT *v83; // [rsp+F0h] [rbp-10h]
  wchar_t pszDest[200]; // [rsp+100h] [rbp+0h] BYREF

  v78 = ResourceRequirements;
  DeviceNode = 0LL;
  v77 = DriverObject;
  DriverExtension = DriverObject->DriverExtension;
  v83 = DeviceObject;
  p_ServiceKeyName = &DriverExtension->ServiceKeyName;
  v14 = *DeviceObject;
  *(_QWORD *)&cbMax[1] = 0LL;
  v75 = 0LL;
  v68 = SlotNumber;
  v72 = 0LL;
  v63 = 0;
  v67 = 0LL;
  v66 = 0;
  *(_QWORD *)&v65[5] = 0LL;
  Destination.Buffer = pszDest;
  *(_DWORD *)&Destination.Length = 26214400;
  KeyHandle = 0LL;
  v62 = 0;
  v70 = 0LL;
  P = 0LL;
  if ( v14 )
  {
    DeviceNode = (char *)v14->DeviceObjectExtension->DeviceNode;
    v67 = DeviceNode;
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
        v75 = i + 1;
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
          v18 = IopDuplicateDetection((unsigned int)LegacyBusType, BusNumber, v68, &v67);
          v19 = 0;
          appended = v18;
          if ( v18 >= 0 )
            v66 = v67 != 0LL;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        v21 = v67;
        if ( v67 )
        {
LABEL_25:
          if ( v66 )
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
          if ( !*(_QWORD *)&v65[5] )
          {
            appended = PnpDeviceObjectToDeviceInstance(*((_QWORD *)v21 + 4), (__int64)&v65[5], 983103);
            if ( appended < 0 )
            {
LABEL_71:
              if ( v63 )
              {
                if ( KeyHandle )
                  ZwDeleteKey(KeyHandle);
                if ( v72 )
                  ZwDeleteKey(v72);
                if ( *(_QWORD *)&v65[5] )
                  ZwDeleteKey(*(HANDLE *)&v65[5]);
                PnpCleanupDeviceRegistryValues((__int64)(v21 + 40));
                PpDevNodeRemoveFromTree((__int64)v21);
                IoDeleteDevice(*((PDEVICE_OBJECT *)v21 + 4));
                ObfDereferenceObject(*((PVOID *)v21 + 4));
              }
              goto LABEL_40;
            }
          }
LABEL_31:
          v29 = v78;
          if ( !ResourceList && !v78
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
              PnpSetRegistryDword(*(HANDLE *)&v65[5]);
              v30 = PnpDetermineResourceListSize(ResourceList);
              IopWriteAllocatedResourcesToRegistry(v21, ResourceList, v30);
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
              *v83 = (PDEVICE_OBJECT)*((_QWORD *)v21 + 4);
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
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          PpDevNodeUnlockTree(1);
          if ( KeyHandle )
            ZwClose(KeyHandle);
          if ( v72 )
            ZwClose(v72);
          if ( *(_QWORD *)&v65[5] )
            ZwClose(*(HANDLE *)&v65[5]);
          if ( P )
            PiPnpRtlEndOperation((char *)P);
          return appended;
        }
        Length = Destination.Length;
        v68 = Destination.Length;
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
          appended = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Destination.Buffer, 983103, &v65[5], &v63, 0);
          if ( appended < 0 )
            goto LABEL_71;
          if ( v63 )
            goto LABEL_23;
          v66 = 0;
          if ( (unsigned __int8)IopIsReportedAlready(
                                  (unsigned int)&Destination,
                                  *(_DWORD *)&v65[5],
                                  (_DWORD)p_ServiceKeyName,
                                  (_DWORD)ResourceList,
                                  (__int64)&v66) )
            break;
          ZwClose(*(HANDLE *)&v65[5]);
          Length = v68;
          ++v19;
        }
        v27 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&Destination, 0x746C6644u);
        v70 = v27;
        if ( v27 )
        {
          v21 = (char *)v27->DeviceObjectExtension->DeviceNode;
        }
        else
        {
          appended = -1073741823;
          v21 = 0LL;
        }
        v67 = v21;
LABEL_23:
        if ( appended < 0 )
          goto LABEL_71;
        if ( v21 )
          goto LABEL_25;
        appended = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &v70);
        if ( appended < 0 )
          goto LABEL_71;
        v34 = v70;
        v35 = v70;
        v31 = 1;
        v62 = 1;
        v70->Flags |= 0x1000u;
        v36 = PipAllocateDeviceNode((__int64)v35, (void **)&v67);
        v21 = v67;
        if ( v36 == -1073740946 || !v67 )
        {
          IoDeleteDevice(v34);
          appended = -1073741670;
          goto LABEL_71;
        }
        if ( (v77->Flags & 4) == 0 )
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
        DeviceInstancePath = PnpAllocateDeviceInstancePath(v21, (unsigned int)Destination.Length + 2);
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
          v73 = 32;
          v40 = CmSetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  *(__int64 *)&v65[5],
                  0xBu,
                  4u,
                  (__int64)&v73,
                  4u,
                  0);
          appended = v40;
          if ( v40 < 0 )
            goto LABEL_90;
          v65[0] = -1;
          v40 = PnpSetObjectProperty(
                  *(__int64 **)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  1u,
                  *(__int64 *)&v65[5],
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
                       *(__int64 *)&v65[5],
                       5u,
                       1u,
                       (__int64)v41,
                       (int)pcbLength + 2,
                       0);
          PnpUnicodeStringToWstrFree(v41, (__int64)p_ServiceKeyName);
          if ( appended < 0 )
            goto LABEL_88;
          v72 = 0LL;
          v40 = CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  0x13u,
                  0,
                  983103,
                  1,
                  (__int64)&v72,
                  0LL);
          appended = v40;
          if ( v40 < 0 || (v40 = PnpSetRegistryDword(v72), appended = v40, v40 < 0) )
          {
LABEL_90:
            v42 = v40;
LABEL_91:
            v43 = 19;
            goto LABEL_92;
          }
          v46 = v77;
          if ( (v77->Flags & 4) == 0 )
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
