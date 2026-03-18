/*
 * XREFs of CmInitSystem1 @ 0x1408B04E0
 * Callers:
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializePushLock @ 0x1400BA070 (ExInitializePushLock.c)
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpCleanupParseContext @ 0x14049FF18 (CmpCleanupParseContext.c)
 *     CmpDetachFromRegistryProcess @ 0x1404A80D8 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpHashUnicodeComponent @ 0x1405132A0 (CmpHashUnicodeComponent.c)
 *     CmpLinkHiveToMaster @ 0x140557540 (CmpLinkHiveToMaster.c)
 *     ObOpenObjectByName @ 0x140557B60 (ObOpenObjectByName.c)
 *     CmpInitializeKcbCache @ 0x140557BD8 (CmpInitializeKcbCache.c)
 *     CmpAddToHiveFileList @ 0x140581F48 (CmpAddToHiveFileList.c)
 *     CmpInitializeParseContext @ 0x140584CB8 (CmpInitializeParseContext.c)
 *     CmpInitSiloSupport @ 0x1406209D4 (CmpInitSiloSupport.c)
 *     CmpInitializeLightWeightTransactionType @ 0x140620AD0 (CmpInitializeLightWeightTransactionType.c)
 *     CmpVolumeManagerInitialize @ 0x14062C3AC (CmpVolumeManagerInitialize.c)
 *     CmpInitializeRegistryProcess @ 0x14062C3D8 (CmpInitializeRegistryProcess.c)
 *     CmpMarkCurrentProfileDirty @ 0x14062CC34 (CmpMarkCurrentProfileDirty.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14062F244 (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitializeNameCache @ 0x14063D908 (CmpInitializeNameCache.c)
 *     CmpInitDelayDerefKCBEngine @ 0x140654188 (CmpInitDelayDerefKCBEngine.c)
 *     CmpInitCallbacks @ 0x140654DE0 (CmpInitCallbacks.c)
 *     CmpInitializeDelayedCloseTable @ 0x140655684 (CmpInitializeDelayedCloseTable.c)
 *     HvInitializeHashLibrary @ 0x140655718 (HvInitializeHashLibrary.c)
 *     CmpInitializeGlobalKeyLockTracker @ 0x1406558FC (CmpInitializeGlobalKeyLockTracker.c)
 *     CmpInitializeFreezeThaw @ 0x140655928 (CmpInitializeFreezeThaw.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x140655BD8 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpInitSIDToHiveMapping @ 0x140655C0C (CmpInitSIDToHiveMapping.c)
 *     CmpCreateObjectTypes @ 0x14089F16C (CmpCreateObjectTypes.c)
 *     CmpCreateControlSet @ 0x1408AE63C (CmpCreateControlSet.c)
 *     CmpCreateHardwareProfiles @ 0x1408AE8A8 (CmpCreateHardwareProfiles.c)
 *     CmpInitializeHardwareConfiguration @ 0x1408AEDBC (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1408AEF00 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpInitializeSystemHive @ 0x1408B02A4 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHives @ 0x1408B0BEC (CmpInitializePreloadedHives.c)
 *     CmpCreateRegistryRoot @ 0x1408B0FCC (CmpCreateRegistryRoot.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x1408B13A8 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetSystemValues @ 0x1408B1414 (CmpSetSystemValues.c)
 *     CmpCreateExtendedControlSets @ 0x1408B1638 (CmpCreateExtendedControlSets.c)
 *     CmpInitializeDriverStores @ 0x1408B1698 (CmpInitializeDriverStores.c)
 *     CmpInitializeRegistryNames @ 0x1408C230C (CmpInitializeRegistryNames.c)
 *     CmpInitializeTransactions @ 0x1408C66D4 (CmpInitializeTransactions.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1408C7C8C (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitGlobalQuotaAllowed @ 0x1408C83DC (CmpInitGlobalQuotaAllowed.c)
 *     CmpSetNetworkValue @ 0x1408DD978 (CmpSetNetworkValue.c)
 */

char __fastcall CmInitSystem1(ULONG_PTR BugCheckParameter3)
{
  int ObjectTypes; // eax
  int v3; // eax
  int v4; // eax
  int *v5; // rdi
  __int64 v6; // rsi
  int Hive; // eax
  int v8; // eax
  int inited; // eax
  ACL *v10; // rdi
  NTSTATUS v11; // eax
  ULONG_PTR v12; // rsi
  NTSTATUS v13; // eax
  ULONG_PTR v14; // rsi
  int v15; // eax
  ULONG_PTR v16; // rsi
  NTSTATUS v17; // eax
  ULONG_PTR v18; // rsi
  int ControlSet; // eax
  int v20; // eax
  ULONG_PTR v21; // rsi
  __int64 v22; // rsi
  int v23; // eax
  NTSTATUS v24; // eax
  int v25; // eax
  int v26; // eax
  int ExtendedControlSets; // eax
  __int64 v28; // rcx
  NTSTATUS v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  int v33; // eax
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v37[56]; // [rsp+B0h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter4[44]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v39[38]; // [rsp+248h] [rbp+140h] BYREF

  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  CmpInitializeParseContext(v39);
  CmIoFileObjectType = (__int64)&IoFileObjectType;
  if ( InitIsWinPEMode )
  {
    CmpMiniNTBoot = InitIsWinPEMode;
    CmpShareSystemHives = 1;
    CmpForceSynchronousMachineHiveLoad = 1;
  }
  if ( CmpVolatileBoot )
    CmpShareSystemHives = 1;
  CmpInitializeRegistryNames();
  CmpInitGlobalQuotaAllowed();
  CmpHiveListHeadLock = 0LL;
  qword_140862710 = (__int64)&CmpHiveListHead;
  CmpHiveListHead = (__int64)&CmpHiveListHead;
  CmpLoadHiveLock = 0LL;
  CmpShutdownLock = 0LL;
  ExInitializePushLock(&CmpShutdownRundown);
  CmpActiveHiveRundownEvent = 0LL;
  qword_1403CA798 = (__int64)&CmpAppHiveLoadList;
  CmpAppHiveLoadList = (__int64)&CmpAppHiveLoadList;
  CmpActiveAppHiveUnloadEvent = 0LL;
  CmpAppHiveLoadListLock = 0LL;
  ExInitializeResourceLite((PERESOURCE)&CmpRegistryLock);
  CmpPostLock.Count = 1;
  CmpPostLock.Event.Header.WaitListHead.Blink = &CmpPostLock.Event.Header.WaitListHead;
  CmpPostLock.Event.Header.WaitListHead.Flink = &CmpPostLock.Event.Header.WaitListHead;
  qword_140861640 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  CmpWorkerEngineWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpWorkerEngineWorker;
  CmpWorkerEngineLock.Event.Header.WaitListHead.Blink = &CmpWorkerEngineLock.Event.Header.WaitListHead;
  CmpWorkerEngineLock.Event.Header.WaitListHead.Flink = &CmpWorkerEngineLock.Event.Header.WaitListHead;
  qword_1403CA828 = (__int64)&CmpWorkerEngineListHead;
  CmpWorkerEngineListHead = &CmpWorkerEngineListHead;
  CmpPostLock.Owner = 0LL;
  CmpPostLock.Contention = 0;
  LOWORD(CmpPostLock.Event.Header.Lock) = 1;
  CmpPostLock.Event.Header.Size = 6;
  CmpPostLock.Event.Header.SignalState = 0;
  CmpWorkerEngineWorkItem.Parameter = 0LL;
  CmpWorkerEngineWorkItem.List.Flink = 0LL;
  CmpWorkerEngineLock.Count = 1;
  CmpWorkerEngineLock.Owner = 0LL;
  CmpWorkerEngineLock.Contention = 0;
  LOWORD(CmpWorkerEngineLock.Event.Header.Lock) = 1;
  CmpWorkerEngineLock.Event.Header.Size = 6;
  CmpWorkerEngineLock.Event.Header.SignalState = 0;
  CmpWorkerEngineFinishedEvent = 0LL;
  CmpInitializeNameCache();
  if ( !CmpAllocInited )
  {
    LODWORD(CmpAllocBucketLock) = 1;
    qword_1403CA6E8 = (__int64)&CmpFreeKCBListHead;
    CmpFreeKCBListHead = (__int64)&CmpFreeKCBListHead;
    *(&CmpAllocBucketLock + 5) = (ULONG_PTR)(&CmpAllocBucketLock + 4);
    *(&CmpAllocBucketLock + 4) = (ULONG_PTR)(&CmpAllocBucketLock + 4);
    *(&CmpAllocBucketLock + 1) = 0LL;
    *((_DWORD *)&CmpAllocBucketLock + 4) = 0;
    *((_WORD *)&CmpAllocBucketLock + 12) = 1;
    *((_BYTE *)&CmpAllocBucketLock + 26) = 6;
    *((_DWORD *)&CmpAllocBucketLock + 7) = 0;
    CmpAllocInited = 1;
  }
  CmpInitSIDToHiveMapping();
  CmpInitializeTrustedInstallerSid();
  CmpInitializeDelayedCloseTable();
  CmpInitDelayDerefKCBEngine();
  CmpInitCallbacks();
  CmpInitializeFreezeThaw();
  HvInitializeHashLibrary();
  CmpValidateGlobalFlushControlFlags();
  CmpInitializeGlobalKeyLockTracker();
  CmpInitializeTransactions();
  CmpVolumeManagerInitialize();
  ObjectTypes = CmpCreateObjectTypes();
  if ( ObjectTypes < 0 )
    KeBugCheckEx(0x67u, 1uLL, 1uLL, ObjectTypes, 0LL);
  v3 = CmpInitializeLightWeightTransactionType();
  if ( v3 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x18uLL, v3, 0LL);
  v4 = CmpInitializeRegistryProcess();
  if ( v4 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x19uLL, v4, 0LL);
  CmpAttachToRegistryProcess((__int64)v37);
  v5 = dword_140396D6C;
  v6 = 8LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v5 - 3));
    *v5 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
    v5 += 6;
    --v6;
  }
  while ( v6 );
  CmpLockRegistryExclusive();
  CmpInitializePreloadedHives(BugCheckParameter3, 0LL);
  Hive = CmpCreateHive(
           (ULONG_PTR *)&CmpMasterHive,
           0,
           1u,
           0,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL,
           0LL,
           (__int64)BugCheckParameter4);
  if ( Hive < 0 )
    KeBugCheckEx(0x67u, 1uLL, 2uLL, Hive, (ULONG_PTR)BugCheckParameter4);
  v8 = CmpInitializeKcbCache((__int64)CmpMasterHive, 0x80u);
  if ( v8 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 3uLL, v8, 0LL);
  if ( !(unsigned __int8)CmpCreateRegistryRoot() )
    KeBugCheckEx(0x67u, 1uLL, 4uLL, 0LL, 0LL);
  inited = CmpInitSiloSupport(0LL);
  if ( inited < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, inited, 0LL);
  v10 = CmpHiveRootSecurityDescriptor();
  ObjectAttributes.ObjectName = &CmRegistryMachineName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v10;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v11 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v12, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryUserName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v10;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v13 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v14 = v13;
  if ( v13 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v14, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryAppName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v10;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  LODWORD(v39[0]) = 65;
  v15 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (__int64)CmKeyObjectType,
          0,
          0LL,
          131103,
          (__int64)v39,
          (__int64)&KeyHandle);
  v16 = v15;
  if ( v15 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    CmpCleanupParseContext((__int64)v39, 0);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v16, 0LL);
  }
  CmpCleanupParseContext((__int64)v39, 0);
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryContainersName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v10;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v17 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v18 = v17;
  if ( v17 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v18, 0LL);
  }
  ZwClose(KeyHandle);
  if ( !CmpInitializeSystemHive(BugCheckParameter3) )
  {
    ExFreePoolWithTag(v10, 0);
    KeBugCheckEx(0x67u, 1uLL, 0xCuLL, 0LL, 0LL);
  }
  ControlSet = CmpCreateControlSet((__int64)L"SYSTEM", 0);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, ControlSet, 0LL);
  if ( CmpLKGEnabled )
    MEMORY[0xFFFFF780000002F0] |= 0x10u;
  if ( CmStateSeparationEnabled )
  {
    byte_140396974 = 0;
    if ( !CmStateSeparationDevMode )
    {
      dword_1403969F0 |= 0x8000u;
      dword_140396A88 |= 0x8000u;
    }
    byte_140396BD4 = 0;
    byte_140396C6B = 1;
  }
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  v20 = CmpCreateHive(
          (ULONG_PTR *)&DestinationString.Length,
          0,
          1u,
          0,
          0LL,
          0LL,
          0LL,
          0,
          0LL,
          0LL,
          0LL,
          (__int64)BugCheckParameter4);
  v21 = v20;
  if ( v20 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v21, (ULONG_PTR)BugCheckParameter4);
  }
  v22 = *(_QWORD *)&DestinationString.Length;
  v23 = CmpLinkHiveToMaster(
          (__int64)&CmRegistryMachineHardwareName,
          0LL,
          *(__int64 *)&DestinationString.Length,
          1,
          dword_1403968C8,
          0,
          0LL,
          (__int64)v10,
          0LL,
          0LL,
          1);
  if ( v23 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v23, 0LL);
  CmpAddToHiveFileList(v22);
  ExFreePoolWithTag(v10, 0);
  qword_1403968B8 = v22;
  v24 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v24 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v24, 0LL);
  v25 = CmpInitializeDriverStores(BugCheckParameter3);
  if ( v25 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v25, 0LL);
  CmpNoMasterCreates = 1;
  v26 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v26 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x14uLL, v26, 0LL);
  ExtendedControlSets = CmpCreateExtendedControlSets(BugCheckParameter3);
  if ( ExtendedControlSets < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1BuLL, ExtendedControlSets, 0LL);
  CmpCreateHardwareProfiles(BugCheckParameter3);
  CmSetInitMachineConfig(BugCheckParameter3);
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty(v28);
  v29 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v29 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v29, 0LL);
  v30 = CmpSetSystemValues(BugCheckParameter3);
  if ( v30 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v30, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v31 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v31 >= 0x58u )
  {
    if ( *(_QWORD *)(v31 + 80) )
    {
      v33 = CmpSetNetworkValue();
      if ( v33 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v33, 0LL);
    }
  }
  CmpDetachFromRegistryProcess((__int64)v37);
  return 1;
}
