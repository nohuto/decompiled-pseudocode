/*
 * XREFs of IopInitializePlugPlayServices @ 0x1407FAEC0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     IoDeleteDevice @ 0x1400058A0 (IoDeleteDevice.c)
 *     PnpDiagnosticTrace @ 0x140033764 (PnpDiagnosticTrace.c)
 *     PnpRequestDeviceAction @ 0x14003CFA4 (PnpRequestDeviceAction.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     PipSetDevNodeState @ 0x1400810C0 (PipSetDevNodeState.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateKey @ 0x14017E2E0 (ZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _CmCreateDevice @ 0x14044CE10 (_CmCreateDevice.c)
 *     PsDereferencePrimaryToken @ 0x1404501D0 (PsDereferencePrimaryToken.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
 *     IoCreateDevice @ 0x1404A1F50 (IoCreateDevice.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1404A6FC0 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404B8088 (PnpMapDeviceObjectToDeviceInstance.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     _CmAddDeviceToContainer @ 0x1404DA8FC (_CmAddDeviceToContainer.c)
 *     _CmSetDeviceRegProp @ 0x1404DE39C (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x1404E2E9C (PipSetDevNodeFlags.c)
 *     PipAllocateDeviceNode @ 0x140559210 (PipAllocateDeviceNode.c)
 *     EtwUnregister @ 0x140589010 (EtwUnregister.c)
 *     IopOpenRegistryKeyEx @ 0x14059C8A8 (IopOpenRegistryKeyEx.c)
 *     PiPnpRtlInit @ 0x14059DDFC (PiPnpRtlInit.c)
 *     IoCreateDriver @ 0x14059F550 (IoCreateDriver.c)
 *     IopCreateRegistryKeyEx @ 0x1405B27F4 (IopCreateRegistryKeyEx.c)
 *     PipSetDevNodeUserFlags @ 0x1405CC2B8 (PipSetDevNodeUserFlags.c)
 *     TlgRegisterAggregateProvider @ 0x1405CDEE8 (TlgRegisterAggregateProvider.c)
 *     PnpAllocateDeviceInstancePath @ 0x1405D061C (PnpAllocateDeviceInstancePath.c)
 *     IopMemInitialize @ 0x1405D0F08 (IopMemInitialize.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x1405D577C (CmRegisterSystemHiveLimitCallback.c)
 *     IopPortInitialize @ 0x1405D5850 (IopPortInitialize.c)
 *     IopDmaInitialize @ 0x1405D5A9C (IopDmaInitialize.c)
 *     IopBusNumberInitialize @ 0x1405D5BF8 (IopBusNumberInitialize.c)
 *     IopIrqInitialize @ 0x1405D5C60 (IopIrqInitialize.c)
 *     PnpCopyDeviceInstancePath @ 0x1405D6524 (PnpCopyDeviceInstancePath.c)
 *     PnpLogEvent @ 0x140695B4C (PnpLogEvent.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x140697954 (PiDcHandleSystemFirmwareUpdate.c)
 *     PiInitCacheGroupInformation @ 0x1407F7F14 (PiInitCacheGroupInformation.c)
 *     PipInitDeviceOverrideCache @ 0x1407F8168 (PipInitDeviceOverrideCache.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1407F84FC (PipCheckSystemFirmwareUpdated.c)
 *     PiDcInit @ 0x1407FBA58 (PiDcInit.c)
 *     PpInitializeBootDDB @ 0x1407FBAB8 (PpInitializeBootDDB.c)
 *     PiUEventInit @ 0x14080CA34 (PiUEventInit.c)
 *     PipHardwareConfigInit @ 0x14080CF9C (PipHardwareConfigInit.c)
 *     IopInitializeResourceMap @ 0x14080D3D8 (IopInitializeResourceMap.c)
 *     PiDmInit @ 0x14081929C (PiDmInit.c)
 *     PiDeviceDependencyInit @ 0x140819A3C (PiDeviceDependencyInit.c)
 *     PiAuCreateSecurityObjects @ 0x14081D098 (PiAuCreateSecurityObjects.c)
 *     PpDevCfgInit @ 0x14081D8E4 (PpDevCfgInit.c)
 *     PnpInitializeNotification @ 0x140821FEC (PnpInitializeNotification.c)
 *     PiDqInit @ 0x140822590 (PiDqInit.c)
 *     PipMigratePnpState @ 0x140822604 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x1408226E8 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140822774 (PipProcessPendingOsExtensionResources.c)
 *     ArbInitializeOsInaccessibleRange @ 0x1408242C4 (ArbInitializeOsInaccessibleRange.c)
 *     PnpInitializeDeviceEvents @ 0x140824F44 (PnpInitializeDeviceEvents.c)
 *     PpProfileInit @ 0x140825A70 (PpProfileInit.c)
 *     PiSwInit @ 0x140825FEC (PiSwInit.c)
 *     PnpBusTypeGuidInitialize @ 0x140826080 (PnpBusTypeGuidInitialize.c)
 *     PnpDiagInitialize @ 0x1408261A8 (PnpDiagInitialize.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x140826290 (IopQueryDeviceResetRegistrySettings.c)
 *     PiInitFirmwareResources @ 0x140826724 (PiInitFirmwareResources.c)
 */

int __fastcall IopInitializePlugPlayServices(__int64 a1, __int64 a2)
{
  int result; // eax
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int CachedContextBaseKey; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  HANDLE v16; // rbx
  struct _DEVICE_OBJECT *v17; // rdi
  PDEVICE_OBJECT v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int *v22; // rbx
  unsigned int *v23; // rdi
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
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
    result = PnpDiagInitialize();
    if ( result >= 0 )
    {
      TlgRegisterAggregateProvider(&stru_14033C440);
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
        if ( stru_14033C6D0.LevelPlus1 > 4 && TlgKeywordOn(&stru_14033C6D0, 0x400000000000uLL) )
        {
          v21 = *(_QWORD *)(a1 + 240);
          v39 = **(_QWORD **)(v21 + 120);
          v40 = *(_QWORD *)(*(_QWORD *)(v21 + 120) + 8LL);
          v41 = *(_QWORD *)(v21 + 2184);
          v51 = &v39;
          v53 = &v40;
          v55 = &v41;
          v52 = 8LL;
          v54 = 8LL;
          v56 = 8LL;
          TlgWrite(&stru_14033C6D0, &unk_1402ABDDA, 0LL, 0LL, 5u, &pData);
        }
        EtwUnregister(stru_14033C6D0.RegHandle);
        stru_14033C6D0.RegHandle = 0LL;
        stru_14033C6D0.LevelPlus1 = 0;
        result = PiPnpRtlInit(1u);
        if ( result >= 0 )
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
      }
    }
  }
  else
  {
    PnPInitialized = 0;
    PnpSystemHiveLimits = 80;
    dword_14036E5DC = 90;
    CmRegisterSystemHiveLimitCallback(a1, a2, (__int64)&PnpSystemHiveLimits);
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
        v22 = (unsigned int *)v33;
        if ( v33 )
        {
          if ( IopGetRegistryValue(KeyHandle, L"SystemBiosDate", 0, &P) >= 0 )
          {
            v23 = (unsigned int *)P;
            if ( P )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v22 + v22[2]));
              RtlInitUnicodeString(&v44, (PCWSTR)((char *)v23 + v23[2]));
              PnpLogEvent((const void **)&DestinationString, (const void **)&v44, 1073741868, 0LL, 0);
              ExFreePoolWithTag(v23, 0);
            }
          }
          ExFreePoolWithTag(v22, 0);
        }
      }
      ZwClose(KeyHandle);
    }
    qword_140367E88 = 0LL;
    qword_140367E48 = (__int64)&PnpDeviceCompletionQueue;
    PnpDeviceCompletionQueue = (__int64)&PnpDeviceCompletionQueue;
    qword_140367E78 = (__int64)&qword_140367E70;
    qword_140367E70 = (__int64)&qword_140367E70;
    qword_140367E60 = (__int64)&qword_140367E58;
    qword_140367E58 = (__int64)&qword_140367E58;
    dword_140367E50 = 0;
    byte_140367E68 = 5;
    byte_140367E6A = 8;
    dword_140367E6C = 0;
    dword_140367E80 = 0x7FFFFFFF;
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
      ArbInitializeOsInaccessibleRange((unsigned int)dword_14036C1E8);
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
      v27.Buffer = (wchar_t *)L"Control\\Pnp";
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
      qword_140367EC8 = (__int64)&IopPendingEjects;
      IopPendingEjects = (__int64)&IopPendingEjects;
      qword_140367ED8 = (__int64)&IopPendingSurpriseRemovals;
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
      qword_140366AA8 = (__int64)&PnpEnumerationRequestList;
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
          GuidString.Buffer = (wchar_t *)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}";
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
                    CachedContextBaseKey = PiUEventInit(0LL);
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
      return CachedContextBaseKey;
    }
  }
  return result;
}
