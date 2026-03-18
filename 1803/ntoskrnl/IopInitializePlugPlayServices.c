/*
 * XREFs of IopInitializePlugPlayServices @ 0x1408A3B0C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     IoDeleteDevice @ 0x14009F890 (IoDeleteDevice.c)
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     PnpDiagnosticTrace @ 0x14014BFEC (PnpDiagnosticTrace.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140506374 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 *     IoCreateDevice @ 0x140541590 (IoCreateDevice.c)
 *     PsDereferencePrimaryToken @ 0x140579D90 (PsDereferencePrimaryToken.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1405CC244 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x1405CF5C8 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x1405D1BFC (PipSetDevNodeFlags.c)
 *     _CmAddDeviceToContainer @ 0x1405D5124 (_CmAddDeviceToContainer.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1405DC3A8 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PipAllocateDeviceNode @ 0x1405DC620 (PipAllocateDeviceNode.c)
 *     _CmCreateDevice @ 0x1405E3F20 (_CmCreateDevice.c)
 *     IopCreateRegistryKeyEx @ 0x1405F7BC4 (IopCreateRegistryKeyEx.c)
 *     EtwUnregister @ 0x140600D40 (EtwUnregister.c)
 *     PipSetDevNodeUserFlags @ 0x14060509C (PipSetDevNodeUserFlags.c)
 *     IopBusNumberInitialize @ 0x14061B758 (IopBusNumberInitialize.c)
 *     IopIrqInitialize @ 0x14061B7C0 (IopIrqInitialize.c)
 *     IopDmaInitialize @ 0x14061B828 (IopDmaInitialize.c)
 *     IopMemInitialize @ 0x14061B89C (IopMemInitialize.c)
 *     IopPortInitialize @ 0x14061B980 (IopPortInitialize.c)
 *     IoCreateDriver @ 0x140621240 (IoCreateDriver.c)
 *     PiPnpRtlInit @ 0x140622640 (PiPnpRtlInit.c)
 *     IopOpenRegistryKeyEx @ 0x1406343E4 (IopOpenRegistryKeyEx.c)
 *     TlgRegisterAggregateProvider @ 0x14064AEFC (TlgRegisterAggregateProvider.c)
 *     PnpAllocateDeviceInstancePath @ 0x14064F2B0 (PnpAllocateDeviceInstancePath.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x1406550A0 (CmRegisterSystemHiveLimitCallback.c)
 *     PnpCopyDeviceInstancePath @ 0x140655BF4 (PnpCopyDeviceInstancePath.c)
 *     PnpLogEvent @ 0x14072767C (PnpLogEvent.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x1407294AC (PiDcHandleSystemFirmwareUpdate.c)
 *     IopInitializeResourceMap @ 0x14089836C (IopInitializeResourceMap.c)
 *     PiSwInit @ 0x14089F42C (PiSwInit.c)
 *     PiDmaGuardInitialize @ 0x1408A4834 (PiDmaGuardInitialize.c)
 *     PiDcInit @ 0x1408A488C (PiDcInit.c)
 *     PpInitializeBootDDB @ 0x1408A48EC (PpInitializeBootDDB.c)
 *     PiDmInit @ 0x1408B1FB0 (PiDmInit.c)
 *     PipMigratePnpState @ 0x1408B3338 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x1408B341C (PpDevCfgInit.c)
 *     PipProcessPendingServices @ 0x1408B38F4 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1408B3980 (PipProcessPendingOsExtensionResources.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1408B4D64 (PipCheckSystemFirmwareUpdated.c)
 *     PipResetDevices @ 0x1408B4E90 (PipResetDevices.c)
 *     PiInitCacheGroupInformation @ 0x1408B50C8 (PiInitCacheGroupInformation.c)
 *     PipInitDeviceOverrideCache @ 0x1408B5318 (PipInitDeviceOverrideCache.c)
 *     PnpInitializePnpWatchdogs @ 0x1408B786C (PnpInitializePnpWatchdogs.c)
 *     PiDeviceDependencyInit @ 0x1408BBDBC (PiDeviceDependencyInit.c)
 *     PiUEventInit @ 0x1408BC494 (PiUEventInit.c)
 *     PiAuCreateSecurityObjects @ 0x1408BFA90 (PiAuCreateSecurityObjects.c)
 *     PipHardwareConfigInit @ 0x1408C395C (PipHardwareConfigInit.c)
 *     PnpInitializeNotification @ 0x1408C4B50 (PnpInitializeNotification.c)
 *     PiDqInit @ 0x1408C4FBC (PiDqInit.c)
 *     ArbInitializeOsInaccessibleRange @ 0x1408C79DC (ArbInitializeOsInaccessibleRange.c)
 *     PnpInitializeDeviceEvents @ 0x1408C84C4 (PnpInitializeDeviceEvents.c)
 *     PpProfileInit @ 0x1408C9354 (PpProfileInit.c)
 *     PnpBusTypeGuidInitialize @ 0x1408C9968 (PnpBusTypeGuidInitialize.c)
 *     PnpDiagInitialize @ 0x1408C9A90 (PnpDiagInitialize.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x1408C9C44 (IopQueryDeviceResetRegistrySettings.c)
 *     PiInitFirmwareResources @ 0x1408CA024 (PiInitFirmwareResources.c)
 *     PiDmaGuardProcessRegistry @ 0x1408CA168 (PiDmaGuardProcessRegistry.c)
 *     PiCslInitialize @ 0x1408DFDAC (PiCslInitialize.c)
 */

__int64 __fastcall IopInitializePlugPlayServices(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rbx
  unsigned int *v4; // rdi
  __int64 result; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int CachedContextBaseKey; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  HANDLE v18; // rbx
  struct _DEVICE_OBJECT *v19; // rdi
  PDEVICE_OBJECT v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  void *v30; // [rsp+80h] [rbp-88h] BYREF
  __int128 v31; // [rsp+88h] [rbp-80h] BYREF
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

  v30 = 0LL;
  LOBYTE(v24) = 0;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      return (unsigned int)-1073741584;
    result = PnpDiagInitialize();
    if ( (int)result >= 0 )
    {
      TlgRegisterAggregateProvider(&stru_140397160);
      result = PiDcInit(1LL);
      if ( (int)result >= 0 )
      {
        v21 = *(_QWORD *)(a1 + 240);
        UserData.Ptr = *(_QWORD *)(v21 + 120);
        *(_QWORD *)&UserData.Size = 8LL;
        v22 = *(_QWORD *)(v21 + 120);
        v49 = 8LL;
        v48 = v22 + 8;
        PnpDiagnosticTrace(&KMPnPEvt_OsLoader_Time, 2u, &UserData);
        if ( stru_140397D50.LevelPlus1 > 4 && TlgKeywordOn(&stru_140397D50, 0x400000000000uLL) )
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
          TlgWrite(&stru_140397D50, &unk_140309596, 0LL, 0LL, 5u, &pData);
        }
        EtwUnregister(stru_140397D50.RegHandle);
        stru_140397D50.RegHandle = 0LL;
        stru_140397D50.LevelPlus1 = 0;
        result = PiPnpRtlInit(1u);
        if ( (int)result >= 0 )
        {
          result = PiCslInitialize();
          if ( (int)result >= 0 )
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
            return (unsigned int)CachedContextBaseKey;
          }
        }
      }
    }
  }
  else
  {
    PnPInitialized = 0;
    PnpSystemHiveLimits = 80;
    dword_1403CDE94 = 90;
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
        v3 = (unsigned int *)v33;
        if ( v33 )
        {
          if ( IopGetRegistryValue(KeyHandle, L"SystemBiosDate", 0, &P) >= 0 )
          {
            v4 = (unsigned int *)P;
            if ( P )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v3 + v3[2]));
              RtlInitUnicodeString(&v44, (PCWSTR)((char *)v4 + v4[2]));
              PnpLogEvent((const void **)&DestinationString, (const void **)&v44, 1073741868, 0LL, 0);
              ExFreePoolWithTag(v4, 0);
            }
          }
          ExFreePoolWithTag(v3, 0);
        }
      }
      ZwClose(KeyHandle);
    }
    qword_1403C72C8 = 0LL;
    qword_1403C7288 = (__int64)&PnpDeviceCompletionQueue;
    PnpDeviceCompletionQueue = (__int64)&PnpDeviceCompletionQueue;
    qword_1403C72B8 = (__int64)&qword_1403C72B0;
    qword_1403C72B0 = (__int64)&qword_1403C72B0;
    qword_1403C72A0 = (__int64)&qword_1403C7298;
    qword_1403C7298 = (__int64)&qword_1403C7298;
    dword_1403C7290 = 0;
    byte_1403C72A8 = 5;
    byte_1403C72AA = 8;
    dword_1403C72AC = 0;
    dword_1403C72C0 = 0x7FFFFFFF;
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
    if ( (int)result >= 0 )
    {
      PpRegistrySemaphore.Header.Type = 5;
      PpRegistrySemaphore.Header.WaitListHead.Blink = &PpRegistrySemaphore.Header.WaitListHead;
      PpRegistrySemaphore.Header.WaitListHead.Flink = &PpRegistrySemaphore.Header.WaitListHead;
      v6 = &IopLegacyBusInformationTable;
      PpRegistrySemaphore.Header.Size = 8;
      PpRegistrySemaphore.Header.SignalState = 1;
      PpRegistrySemaphore.Limit = 1;
      do
      {
        v6[1] = v6;
        *v6 = v6;
        v6 += 2;
      }
      while ( (__int64)v6 < (__int64)&PiDDBLock );
      IopInitializeResourceMap(a1);
      IopAllocateBootResourcesRoutine = (__int64)IopReportBootResources;
      IopInitReservedResourceList = 0LL;
      PnpDefaultInterfaceType = 1;
      ArbInitializeOsInaccessibleRange((unsigned int)dword_1403CB6C8);
      CachedContextBaseKey = IopPortInitialize(v8, v7);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = IopMemInitialize(v10, v9);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = IopDmaInitialize(v13, v12);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = IopIrqInitialize(v15, v14);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = IopBusNumberInitialize(v17, v16);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = PiPnpRtlInit(0);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      PipMigratePnpState();
      CachedContextBaseKey = PiDmInit();
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v30);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      v27.Buffer = L"Control\\Pnp";
      *(_DWORD *)&v27.Length = 1572886;
      if ( (int)IopCreateRegistryKeyEx(&Handle, v30, &v27, 0xF003Fu, 0, 0LL) >= 0 )
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
        return (unsigned int)CachedContextBaseKey;
      PipCheckSystemFirmwareUpdated(&v24);
      CachedContextBaseKey = PiDcInit(0LL);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = PiAuCreateSecurityObjects();
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = PiDqInit();
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = PpDevCfgInit();
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      PipResetDevices();
      CachedContextBaseKey = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)L"HTREE\\ROOT\\0", 983103, &v37, 0LL, 0);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      v18 = v37;
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
        (__int64)v18,
        0xBu,
        4u,
        (__int64)&v28,
        4u,
        0);
      ZwClose(v18);
      qword_1403C7318 = (__int64)&IopPendingEjects;
      IopPendingEjects = (__int64)&IopPendingEjects;
      qword_1403C7308 = (__int64)&IopPendingSurpriseRemovals;
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
        return (unsigned int)CachedContextBaseKey;
      _InterlockedExchange64(&PnpDeviceActionThread, 0LL);
      PnpEnumerationInProgress = 0;
      PnpEnumerationLock.Header.WaitListHead.Blink = &PnpEnumerationLock.Header.WaitListHead;
      PnpEnumerationLock.Header.WaitListHead.Flink = &PnpEnumerationLock.Header.WaitListHead;
      qword_1403C5CE8 = (__int64)&PnpEnumerationRequestList;
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
        return (unsigned int)CachedContextBaseKey;
      CachedContextBaseKey = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0, 0, &DeviceObject);
      if ( CachedContextBaseKey < 0 )
        return (unsigned int)CachedContextBaseKey;
      v19 = DeviceObject;
      v20 = DeviceObject;
      DeviceObject->Flags |= 0x1000u;
      CachedContextBaseKey = PipAllocateDeviceNode((__int64)v20, (void **)&IopRootDeviceNode);
      if ( !IopRootDeviceNode )
      {
        IoDeleteDevice(v19);
        PsDereferencePrimaryToken(PnpDriverObject);
LABEL_92:
        if ( CachedContextBaseKey >= 0 )
        {
          CachedContextBaseKey = CmAddDeviceToContainer(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                   (const WCHAR *)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                   L"HTREE\\ROOT\\0",
                                   0LL);
          if ( CachedContextBaseKey >= 0 )
          {
            if ( (_BYTE)v24 )
              PiDcHandleSystemFirmwareUpdate();
            PnpInitializePnpWatchdogs();
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
                    *(_QWORD *)&v31 = 2359330LL;
                    *((_QWORD *)&v31 + 1) = L"\\Driver\\DeviceApi";
                    CachedContextBaseKey = IoCreateDriver(&v31, (__int64 (__fastcall *)(PVOID, _QWORD))PiDaDriverEntry);
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
        return (unsigned int)CachedContextBaseKey;
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
          goto LABEL_92;
        }
      }
      return (unsigned int)CachedContextBaseKey;
    }
  }
  return result;
}
