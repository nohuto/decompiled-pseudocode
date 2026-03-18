/*
 * XREFs of IopInitializePlugPlayServices @ 0x14083F81C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     PipSetDevNodeState @ 0x1400E0004 (PipSetDevNodeState.c)
 *     IoDeleteDevice @ 0x1400FAC00 (IoDeleteDevice.c)
 *     PnpDiagnosticTrace @ 0x1400FCD14 (PnpDiagnosticTrace.c)
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwCreateKey @ 0x14017DC60 (ZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14052210C (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
 *     IoCreateDevice @ 0x140549C50 (IoCreateDevice.c)
 *     _CmAddDeviceToContainer @ 0x14054E3A8 (_CmAddDeviceToContainer.c)
 *     _CmSetDeviceRegProp @ 0x140551244 (_CmSetDeviceRegProp.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14055226C (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     PipAllocateDeviceNode @ 0x140553840 (PipAllocateDeviceNode.c)
 *     IopCreateRegistryKeyEx @ 0x14055A49C (IopCreateRegistryKeyEx.c)
 *     PipSetDevNodeUserFlags @ 0x14055E900 (PipSetDevNodeUserFlags.c)
 *     EtwUnregister @ 0x1405726E0 (EtwUnregister.c)
 *     _CmCreateDevice @ 0x14058A7FC (_CmCreateDevice.c)
 *     PsDereferencePrimaryToken @ 0x14058C9C0 (PsDereferencePrimaryToken.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140595710 (PnpMapDeviceObjectToDeviceInstance.c)
 *     TlgRegisterAggregateProvider @ 0x1405ABC7C (TlgRegisterAggregateProvider.c)
 *     PnpAllocateDeviceInstancePath @ 0x1405BA8E4 (PnpAllocateDeviceInstancePath.c)
 *     PnpCopyDeviceInstancePath @ 0x1405C45C8 (PnpCopyDeviceInstancePath.c)
 *     PiPnpRtlInit @ 0x1405C620C (PiPnpRtlInit.c)
 *     IoCreateDriver @ 0x1405C7780 (IoCreateDriver.c)
 *     IopOpenRegistryKeyEx @ 0x1405C9264 (IopOpenRegistryKeyEx.c)
 *     IopPortInitialize @ 0x1405CE61C (IopPortInitialize.c)
 *     IopMemInitialize @ 0x1405CE6B4 (IopMemInitialize.c)
 *     IopDmaInitialize @ 0x1405CE798 (IopDmaInitialize.c)
 *     IopIrqInitialize @ 0x1405CE80C (IopIrqInitialize.c)
 *     IopBusNumberInitialize @ 0x1405CE874 (IopBusNumberInitialize.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x1405F1DD0 (CmRegisterSystemHiveLimitCallback.c)
 *     PnpLogEvent @ 0x1406C1888 (PnpLogEvent.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x1406C33CC (PiDcHandleSystemFirmwareUpdate.c)
 *     PipHardwareConfigInit @ 0x1408275F0 (PipHardwareConfigInit.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x14083E2D4 (IopQueryDeviceResetRegistrySettings.c)
 *     PiDqInit @ 0x14083E364 (PiDqInit.c)
 *     PpProfileInit @ 0x14083E3D8 (PpProfileInit.c)
 *     PnpInitializeDeviceEvents @ 0x14083E46C (PnpInitializeDeviceEvents.c)
 *     PnpInitializeNotification @ 0x14083E564 (PnpInitializeNotification.c)
 *     PnpBusTypeGuidInitialize @ 0x14083E6A4 (PnpBusTypeGuidInitialize.c)
 *     PiSwInit @ 0x14083E730 (PiSwInit.c)
 *     PiUEventInit @ 0x14083E7C4 (PiUEventInit.c)
 *     PnpDiagInitialize @ 0x14083E960 (PnpDiagInitialize.c)
 *     PipMigratePnpState @ 0x14083E9C4 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x14083EAA8 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x14083EB34 (PipProcessPendingOsExtensionResources.c)
 *     PpDevCfgInit @ 0x14083EBC0 (PpDevCfgInit.c)
 *     PiDmaGuardInitialize @ 0x140840328 (PiDmaGuardInitialize.c)
 *     PiDcInit @ 0x140840394 (PiDcInit.c)
 *     PpInitializeBootDDB @ 0x1408403F4 (PpInitializeBootDDB.c)
 *     PiInitCacheGroupInformation @ 0x140844C14 (PiInitCacheGroupInformation.c)
 *     PipInitDeviceOverrideCache @ 0x140844E5C (PipInitDeviceOverrideCache.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140845294 (PipCheckSystemFirmwareUpdated.c)
 *     PiDmInit @ 0x140849880 (PiDmInit.c)
 *     PiDeviceDependencyInit @ 0x140849EFC (PiDeviceDependencyInit.c)
 *     IopInitializeResourceMap @ 0x14084DD34 (IopInitializeResourceMap.c)
 *     PiAuCreateSecurityObjects @ 0x14084E53C (PiAuCreateSecurityObjects.c)
 *     ArbInitializeOsInaccessibleRange @ 0x140855808 (ArbInitializeOsInaccessibleRange.c)
 *     PiInitFirmwareResources @ 0x140857E90 (PiInitFirmwareResources.c)
 *     PiDmaGuardProcessRegistry @ 0x140857F90 (PiDmaGuardProcessRegistry.c)
 */

int __fastcall IopInitializePlugPlayServices(__int64 a1, ETWENABLECALLBACK *a2)
{
  int result; // eax
  __int64 *v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rcx
  int CachedContextBaseKey; // ebx
  int v10; // edx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  HANDLE v16; // rbx
  struct _DEVICE_OBJECT *v17; // rdi
  PDEVICE_OBJECT v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int *v21; // rbx
  unsigned int *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  __int128 v30; // [rsp+80h] [rbp-88h] BYREF
  void *v31; // [rsp+90h] [rbp-78h] BYREF
  ULONG Disposition; // [rsp+98h] [rbp-70h] BYREF
  PVOID v33; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v34; // [rsp+A8h] [rbp-60h] BYREF
  PVOID v35; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v36; // [rsp+B8h] [rbp-50h] BYREF
  HANDLE v37; // [rsp+C0h] [rbp-48h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING v42; // [rsp+E8h] [rbp-20h] BYREF
  UNICODE_STRING GuidString; // [rsp+F8h] [rbp-10h] BYREF
  UNICODE_STRING v44; // [rsp+108h] [rbp+0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+118h] [rbp+10h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+128h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+158h] [rbp+50h] BYREF
  __int64 v48; // [rsp+168h] [rbp+60h]
  __int64 v49; // [rsp+170h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v51; // [rsp+198h] [rbp+90h]
  __int64 v52; // [rsp+1A0h] [rbp+98h]
  __int64 *v53; // [rsp+1A8h] [rbp+A0h]
  __int64 v54; // [rsp+1B0h] [rbp+A8h]
  __int64 *v55; // [rsp+1B8h] [rbp+B0h]
  __int64 v56; // [rsp+1C0h] [rbp+B8h]

  v31 = 0LL;
  LOBYTE(v24) = 0;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      return -1073741584;
    result = PnpDiagInitialize(a1, a2);
    if ( result >= 0 )
    {
      TlgRegisterAggregateProvider(&stru_140354A70);
      result = PiDcInit(1LL);
      if ( result >= 0 )
      {
        v19 = *(_QWORD *)(a1 + 240);
        UserData.Ptr = *(_QWORD *)(v19 + 120);
        *(_QWORD *)&UserData.Size = 8LL;
        v20 = *(_QWORD *)(v19 + 120);
        v49 = 8LL;
        v48 = v20 + 8;
        PnpDiagnosticTrace(&KMPnPEvt_OsLoader_Time, 2u, &UserData);
        if ( stru_1403554B0.LevelPlus1 > 4 && TlgKeywordOn(&stru_1403554B0, 0x400000000000uLL) )
        {
          v23 = *(_QWORD *)(a1 + 240);
          v39 = **(_QWORD **)(v23 + 120);
          v40 = *(_QWORD *)(*(_QWORD *)(v23 + 120) + 8LL);
          v41 = *(_QWORD *)(v23 + 2184);
          v51 = &v39;
          v53 = &v40;
          v55 = &v41;
          v52 = 8LL;
          v54 = 8LL;
          v56 = 8LL;
          TlgWrite(&stru_1403554B0, &unk_1402CFBCA, 0LL, 0LL, 5u, &pData);
        }
        EtwUnregister(stru_1403554B0.RegHandle);
        stru_1403554B0.RegHandle = 0LL;
        stru_1403554B0.LevelPlus1 = 0;
        result = PiPnpRtlInit(1u);
        if ( result >= 0 )
        {
          CachedContextBaseKey = PiDmaGuardInitialize(1LL);
          if ( CachedContextBaseKey >= 0 )
          {
            PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 10, 0, 0LL, 0LL, 0LL, 0LL);
            LOWORD(PnpShutdownEvent.Header.Lock) = 0;
            PnpShutdownEvent.Header.WaitListHead.Blink = &PnpShutdownEvent.Header.WaitListHead;
            PnpShutdownEvent.Header.WaitListHead.Flink = &PnpShutdownEvent.Header.WaitListHead;
            PnpShutdownEvent.Header.Size = 6;
            PnpShutdownEvent.Header.SignalState = 0;
            if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 0x400) == 0 )
              PpInitializeBootDDB(a1, 1LL);
            return 0;
          }
          return CachedContextBaseKey;
        }
      }
    }
  }
  else
  {
    PnPInitialized = 0;
    PnpSystemHiveLimits = 80;
    dword_14038A04C = 90;
    CmRegisterSystemHiveLimitCallback(a1, (__int64)a2, (__int64)&PnpSystemHiveLimits);
    PnpSystemHiveTooLarge = 0;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition) >= 0 )
    {
      if ( IopGetRegistryValue(KeyHandle, L"OldSystemBiosDate", 0, &v33) >= 0 )
      {
        v21 = (unsigned int *)v33;
        if ( v33 )
        {
          if ( IopGetRegistryValue(KeyHandle, L"SystemBiosDate", 0, &P) >= 0 )
          {
            v22 = (unsigned int *)P;
            if ( P )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v21 + v21[2]));
              RtlInitUnicodeString(&v44, (PCWSTR)((char *)v22 + v22[2]));
              PnpLogEvent((const void **)&DestinationString, (const void **)&v44, 1073741868, 0LL, 0);
              ExFreePoolWithTag(v22, 0);
            }
          }
          ExFreePoolWithTag(v21, 0);
        }
      }
      ZwClose(KeyHandle);
    }
    qword_140383E68 = 0LL;
    qword_140383E28 = (__int64)&PnpDeviceCompletionQueue;
    PnpDeviceCompletionQueue = (__int64)&PnpDeviceCompletionQueue;
    qword_140383E58 = (__int64)&qword_140383E50;
    qword_140383E50 = (__int64)&qword_140383E50;
    qword_140383E40 = (__int64)&qword_140383E38;
    qword_140383E38 = (__int64)&qword_140383E38;
    dword_140383E30 = 0;
    byte_140383E48 = 5;
    byte_140383E4A = 8;
    dword_140383E4C = 0;
    dword_140383E60 = 0x7FFFFFFF;
    PiInitFirmwareResources(a1);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 0x400) == 0 )
      PpInitializeBootDDB(a1, 0LL);
    PipInitDeviceOverrideCache();
    LOWORD(PnpSystemDeviceEnumerationComplete.Header.Lock) = 0;
    PnpSystemDeviceEnumerationComplete.Header.WaitListHead.Blink = &PnpSystemDeviceEnumerationComplete.Header.WaitListHead;
    PnpSystemDeviceEnumerationComplete.Header.WaitListHead.Flink = &PnpSystemDeviceEnumerationComplete.Header.WaitListHead;
    PnpSystemDeviceEnumerationComplete.Header.Size = 6;
    PnpSystemDeviceEnumerationComplete.Header.SignalState = 0;
    result = PiInitCacheGroupInformation();
    if ( result >= 0 )
    {
      PpRegistrySemaphore.Header.Type = 5;
      PpRegistrySemaphore.Header.WaitListHead.Blink = &PpRegistrySemaphore.Header.WaitListHead;
      PpRegistrySemaphore.Header.WaitListHead.Flink = &PpRegistrySemaphore.Header.WaitListHead;
      v4 = (__int64 *)&IopLegacyBusInformationTable;
      PpRegistrySemaphore.Header.Size = 8;
      PpRegistrySemaphore.Header.SignalState = 1;
      PpRegistrySemaphore.Limit = 1;
      do
      {
        v4[1] = (__int64)v4;
        *v4 = (__int64)v4;
        v4 += 2;
      }
      while ( (__int64)v4 < (__int64)&IopLegacyDeviceNode );
      IopInitializeResourceMap(a1);
      IopAllocateBootResourcesRoutine = (__int64)&IopReportBootResources;
      IopInitReservedResourceList = 0LL;
      PnpDefaultInterfaceType = 1;
      ArbInitializeOsInaccessibleRange((unsigned int)dword_140388530);
      CachedContextBaseKey = IopPortInitialize(v6, v5);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopMemInitialize(v8, v7);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopDmaInitialize(v11, v10);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopIrqInitialize(v13, v12);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopBusNumberInitialize(v15, v14);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PiPnpRtlInit(0);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      PipMigratePnpState();
      CachedContextBaseKey = PiDmInit();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 4, &v31);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      v27.Buffer = L"Control\\Pnp";
      *(_DWORD *)&v27.Length = 1572886;
      if ( (int)IopCreateRegistryKeyEx(&Handle, v31, &v27, 0xF003Fu, 0, 0LL) >= 0 )
      {
        if ( IopGetRegistryValue(Handle, L"AsynchronousOptions", 0, &v34) >= 0 )
        {
          if ( *((_DWORD *)v34 + 1) == 4 && *((_DWORD *)v34 + 3) == 4 )
            PnpAsyncOptions = *(_DWORD *)((char *)v34 + *((unsigned int *)v34 + 2));
          ExFreePoolWithTag(v34, 0);
        }
        if ( IopGetRegistryValue(Handle, L"BootOptions", 0, &v35) >= 0 )
        {
          if ( *((_DWORD *)v35 + 1) == 4 && *((_DWORD *)v35 + 3) == 4 )
            PnpBootOptions = *(_DWORD *)((char *)v35 + *((unsigned int *)v35 + 2));
          ExFreePoolWithTag(v35, 0);
        }
        if ( IopGetRegistryValue(Handle, L"FindBestConfigurationTimeout", 0, &v36) >= 0 )
        {
          if ( *((_DWORD *)v36 + 1) == 4 && *((_DWORD *)v36 + 3) == 4 )
            PnpFindBestConfigurationTimeout = *(_DWORD *)((char *)v36 + *((unsigned int *)v36 + 2));
          ExFreePoolWithTag(v36, 0);
        }
        PiDmaGuardProcessRegistry(Handle);
        IopQueryDeviceResetRegistrySettings(Handle);
        ZwClose(Handle);
      }
      *(_DWORD *)&v27.Length = 4063292;
      v27.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\Setup";
      if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v27, 0x20019u) >= 0 )
      {
        if ( IopGetRegistryValue(Handle, L"SystemSetupInProgress", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PnpSetupInProgress = 1;
          ExFreePoolWithTag(P, 0);
        }
        if ( IopGetRegistryValue(Handle, L"SetupPhase", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PnpSetupPhaseInProgress = 1;
          ExFreePoolWithTag(P, 0);
        }
        if ( IopGetRegistryValue(Handle, L"SetupType", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PnpSetupTypeInProgress = 1;
          ExFreePoolWithTag(P, 0);
        }
        if ( IopGetRegistryValue(Handle, L"OOBEInProgress", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PnpSetupOOBEInProgress = 1;
          ExFreePoolWithTag(P, 0);
        }
        if ( IopGetRegistryValue(Handle, L"Upgrade", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PnpSetupUpgradeInProgress = 1;
          ExFreePoolWithTag(P, 0);
        }
        if ( IopGetRegistryValue(Handle, L"RollbackActive", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PnpSetupRollbackActiveInProgress = 1;
          ExFreePoolWithTag(P, 0);
        }
        ZwClose(Handle);
      }
      CachedContextBaseKey = PipHardwareConfigInit((GUID *)(*(_QWORD *)(a1 + 240) + 2248LL));
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      PipCheckSystemFirmwareUpdated(&v24);
      CachedContextBaseKey = PiDcInit(0LL);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PiAuCreateSecurityObjects();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PiDqInit();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PpDevCfgInit();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)L"HTREE\\ROOT\\0", 983103, &v37, 0LL, 0);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      v16 = v37;
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        (__int64)L"HTREE\\ROOT\\0",
        (__int64)v37,
        0x25u,
        1u,
        (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
        0x4Eu,
        0);
      LODWORD(v28) = 0;
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        (__int64)L"HTREE\\ROOT\\0",
        (__int64)v16,
        0xBu,
        4u,
        (__int64)&v28,
        4u,
        0);
      ZwClose(v16);
      qword_140383EA8 = (__int64)&IopPendingEjects;
      IopPendingEjects = (__int64)&IopPendingEjects;
      qword_140383EB8 = (__int64)&IopPendingSurpriseRemovals;
      IopPendingSurpriseRemovals = &IopPendingSurpriseRemovals;
      ExInitializeResourceLite(&IopDeviceTreeLock);
      ExInitializeResourceLite(&IopSurpriseRemoveListLock);
      ExInitializeResourceLite(&PnpDevicePropertyLock);
      ExInitializeResourceLite(&PiEngineLock);
      PnpSpinLock = 0LL;
      PiResourceListLock.Event.Header.WaitListHead.Blink = &PiResourceListLock.Event.Header.WaitListHead;
      PiResourceListLock.Event.Header.WaitListHead.Flink = &PiResourceListLock.Event.Header.WaitListHead;
      PiResourceListLock.Count = 1;
      PiResourceListLock.Owner = 0LL;
      PiResourceListLock.Contention = 0;
      LOWORD(PiResourceListLock.Event.Header.Lock) = 1;
      PiResourceListLock.Event.Header.Size = 6;
      PiResourceListLock.Event.Header.SignalState = 0;
      CachedContextBaseKey = PiDeviceDependencyInit();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, 0LL);
      PnpEnumerationInProgress = 0;
      PnpEnumerationLock.Header.WaitListHead.Blink = &PnpEnumerationLock.Header.WaitListHead;
      PnpEnumerationLock.Header.WaitListHead.Flink = &PnpEnumerationLock.Header.WaitListHead;
      qword_140382A78 = (__int64)&PnpEnumerationRequestList;
      PnpEnumerationRequestList = (__int64)&PnpEnumerationRequestList;
      LOWORD(PnpEnumerationLock.Header.Lock) = 0;
      PnpEnumerationLock.Header.Size = 6;
      PnpEnumerationLock.Header.SignalState = 1;
      PpProfileInit();
      IopWarmEjectPdo = 0LL;
      IopWarmEjectLock.Header.WaitListHead.Blink = &IopWarmEjectLock.Header.WaitListHead;
      IopWarmEjectLock.Header.WaitListHead.Flink = &IopWarmEjectLock.Header.WaitListHead;
      LOWORD(IopWarmEjectLock.Header.Lock) = 1;
      v27.Buffer = L"\\Driver\\PnpManager";
      IopWarmEjectLock.Header.Size = 6;
      IopWarmEjectLock.Header.SignalState = 1;
      *(_DWORD *)&v27.Length = 2490404;
      CachedContextBaseKey = IoCreateDriver(&v27, (__int64 (__fastcall *)(PVOID, _QWORD))PipPnPDriverEntry);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0, 0, &DeviceObject);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      v17 = DeviceObject;
      v18 = DeviceObject;
      DeviceObject->Flags |= 0x1000u;
      CachedContextBaseKey = PipAllocateDeviceNode((__int64)v18, (void **)&IopRootDeviceNode);
      if ( !IopRootDeviceNode )
      {
        IoDeleteDevice(v17);
        PsDereferencePrimaryToken(PnpDriverObject);
        goto LABEL_64;
      }
      PipSetDevNodeFlags(IopRootDeviceNode, 305);
      PipSetDevNodeUserFlags(IopRootDeviceNode, 10);
      *(_DWORD *)(IopRootDeviceNode + 660) = -2;
      CachedContextBaseKey = PnpAllocateDeviceInstancePath(IopRootDeviceNode, 0x1Au);
      if ( CachedContextBaseKey >= 0 )
      {
        *(_DWORD *)&v42.Length = 1703960;
        v42.Buffer = (wchar_t *)L"HTREE\\ROOT\\0";
        PnpCopyDeviceInstancePath(IopRootDeviceNode, &v42);
        CachedContextBaseKey = PnpMapDeviceObjectToDeviceInstance(
                                 *(_QWORD *)(IopRootDeviceNode + 32),
                                 IopRootDeviceNode + 40);
        if ( CachedContextBaseKey >= 0 )
        {
          *(_DWORD *)&GuidString.Length = 5111884;
          GuidString.Buffer = L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}";
          RtlGUIDFromString(&GuidString, (GUID *)(IopRootDeviceNode + 664));
          PnpQueryAndSaveDeviceNodeCapabilities(IopRootDeviceNode);
          PipSetDevNodeState(IopRootDeviceNode, 776);
LABEL_64:
          if ( CachedContextBaseKey >= 0 )
          {
            CachedContextBaseKey = CmAddDeviceToContainer(
                                     *(__int64 *)&PiPnpRtlCtx,
                                     (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                     (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                     (__int64)L"HTREE\\ROOT\\0",
                                     0LL);
            if ( CachedContextBaseKey >= 0 )
            {
              if ( (_BYTE)v24 )
                PiDcHandleSystemFirmwareUpdate();
              CachedContextBaseKey = PnpInitializeDeviceEvents();
              if ( CachedContextBaseKey >= 0 )
              {
                PnpInitializeNotification();
                CachedContextBaseKey = PnpBusTypeGuidInitialize();
                if ( CachedContextBaseKey >= 0 )
                {
                  LOWORD(PnpReplaceEvent.Header.Lock) = 1;
                  PnpReplaceEvent.Header.WaitListHead.Blink = &PnpReplaceEvent.Header.WaitListHead;
                  PnpReplaceEvent.Header.WaitListHead.Flink = &PnpReplaceEvent.Header.WaitListHead;
                  PnpReplaceEvent.Header.Size = 6;
                  PnpReplaceEvent.Header.SignalState = 1;
                  CachedContextBaseKey = PiSwInit();
                  if ( CachedContextBaseKey >= 0 )
                  {
                    CachedContextBaseKey = PiUEventInit(0);
                    if ( CachedContextBaseKey >= 0 )
                    {
                      *(_QWORD *)((char *)&v30 + 2) = 0LL;
                      LODWORD(v30) = 2359330;
                      *((_QWORD *)&v30 + 1) = L"\\Driver\\DeviceApi";
                      CachedContextBaseKey = IoCreateDriver(
                                               &v30,
                                               (__int64 (__fastcall *)(PVOID, _QWORD))PiDaDriverEntry);
                      if ( CachedContextBaseKey >= 0 )
                      {
                        CachedContextBaseKey = PiDmaGuardInitialize(0LL);
                        if ( CachedContextBaseKey >= 0 )
                        {
                          if ( (int)PipProcessPendingServices() >= 0 )
                            PipProcessPendingOsExtensionResources();
                          PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 10, 0, 0LL, 0LL, 0LL, 0LL);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return CachedContextBaseKey;
    }
  }
  return result;
}
