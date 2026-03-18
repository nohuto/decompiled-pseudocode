/*
 * XREFs of CmInitSystem1 @ 0x14083BF10
 * Callers:
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     CmpHashUnicodeComponent @ 0x140474458 (CmpHashUnicodeComponent.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     NtCreateKey @ 0x1404E2C5C (NtCreateKey.c)
 *     CmpCleanupParseContext @ 0x1404E322C (CmpCleanupParseContext.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpLinkHiveToMaster @ 0x1404E46C4 (CmpLinkHiveToMaster.c)
 *     CmpInitializeKcbCache @ 0x1404E4A54 (CmpInitializeKcbCache.c)
 *     ObOpenObjectByName @ 0x14051AD00 (ObOpenObjectByName.c)
 *     CmpAddToHiveFileList @ 0x14059A274 (CmpAddToHiveFileList.c)
 *     CmpInitializeParseContext @ 0x14059F544 (CmpInitializeParseContext.c)
 *     CmpInitializeNameCache @ 0x1405BF73C (CmpInitializeNameCache.c)
 *     CmpInitSIDToHiveMapping @ 0x1405BF79C (CmpInitSIDToHiveMapping.c)
 *     CmpInitializeDelayedCloseTable @ 0x1405BF7B8 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitDelayDerefKCBEngine @ 0x1405BF808 (CmpInitDelayDerefKCBEngine.c)
 *     CmpInitCallbacks @ 0x1405BF9F0 (CmpInitCallbacks.c)
 *     CmpInitializeFreezeThaw @ 0x1405BFA78 (CmpInitializeFreezeThaw.c)
 *     HvInitializeHashLibrary @ 0x1405BFAAC (HvInitializeHashLibrary.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x1405BFAF0 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpInitializeGlobalKeyLockTracker @ 0x1405BFB0C (CmpInitializeGlobalKeyLockTracker.c)
 *     CmpInitializeLightWeightTransactionType @ 0x1405BFB38 (CmpInitializeLightWeightTransactionType.c)
 *     CmpInitSiloSupport @ 0x1405BFC08 (CmpInitSiloSupport.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405C1760 (CmpHiveRootSecurityDescriptor.c)
 *     CmpMarkCurrentProfileDirty @ 0x1405C3490 (CmpMarkCurrentProfileDirty.c)
 *     CmpInitializeRegistryNames @ 0x14083A2B8 (CmpInitializeRegistryNames.c)
 *     CmpInitGlobalQuotaAllowed @ 0x14083A4E4 (CmpInitGlobalQuotaAllowed.c)
 *     CmpInitializeTrustedInstallerSid @ 0x14083A5CC (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitializeTransactions @ 0x14083A650 (CmpInitializeTransactions.c)
 *     CmpCreateObjectTypes @ 0x14083A96C (CmpCreateObjectTypes.c)
 *     CmpInitializeHardwareConfiguration @ 0x14083AA64 (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x14083ACD8 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpInitializeSystemHive @ 0x14083BCC8 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHives @ 0x14083C5EC (CmpInitializePreloadedHives.c)
 *     CmpCreateRegistryRoot @ 0x14083C9A8 (CmpCreateRegistryRoot.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x14083CD84 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetSystemValues @ 0x14083CDF0 (CmpSetSystemValues.c)
 *     CmpCreateControlSet @ 0x14083D05C (CmpCreateControlSet.c)
 *     CmpSetNetworkValue @ 0x140869144 (CmpSetNetworkValue.c)
 */

char __fastcall CmInitSystem1(ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rsi
  int *v3; // rdi
  int ObjectTypes; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int inited; // eax
  ACL *v9; // rdi
  NTSTATUS v10; // eax
  ULONG_PTR v11; // rsi
  NTSTATUS v12; // eax
  ULONG_PTR v13; // rsi
  int v14; // eax
  ULONG_PTR v15; // rsi
  NTSTATUS v16; // eax
  ULONG_PTR v17; // rsi
  int ControlSet; // eax
  int v19; // eax
  ULONG_PTR v20; // rsi
  void *v21; // rsi
  int v22; // eax
  NTSTATUS v23; // eax
  int v24; // eax
  NTSTATUS v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  int v29; // eax
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4[44]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v33[30]; // [rsp+200h] [rbp+100h] BYREF

  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  CmpInitializeParseContext(v33);
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
  qword_1407F40F0 = (__int64)&CmpFailedUnloadListHead;
  CmpFailedUnloadListHead = (__int64)&CmpFailedUnloadListHead;
  qword_1407F3DD0 = (__int64)&CmpHiveListHead;
  CmpHiveListHead = (__int64)&CmpHiveListHead;
  CmpLoadHiveLock = 0LL;
  CmpShutdownLock = 0LL;
  ExInitializePushLock(&CmpShutdownRundown);
  CmpActiveHiveRundownEvent = 0LL;
  qword_140387258 = (__int64)&CmpAppHiveLoadList;
  CmpAppHiveLoadList = (__int64)&CmpAppHiveLoadList;
  CmpActiveAppHiveUnloadEvent = 0LL;
  CmpAppHiveLoadListLock = 0LL;
  ExInitializeResourceLite((PERESOURCE)&CmpRegistryLock);
  CmpPostLock.Count = 1;
  CmpPostLock.Event.Header.WaitListHead.Blink = &CmpPostLock.Event.Header.WaitListHead;
  CmpPostLock.Event.Header.WaitListHead.Flink = &CmpPostLock.Event.Header.WaitListHead;
  qword_1407F3620 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  CmpWorkerEngineWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpWorkerEngineWorker;
  CmpWorkerEngineLock.Event.Header.WaitListHead.Blink = &CmpWorkerEngineLock.Event.Header.WaitListHead;
  CmpWorkerEngineLock.Event.Header.WaitListHead.Flink = &CmpWorkerEngineLock.Event.Header.WaitListHead;
  qword_1403872E8 = (__int64)&CmpWorkerEngineListHead;
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
    qword_1403871A8 = (__int64)&CmpFreeKCBListHead;
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
  v2 = 8LL;
  v3 = dword_14035418C;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v3 - 3));
    *v3 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
    v3 += 6;
    --v2;
  }
  while ( v2 );
  CmpLockRegistryExclusive();
  CmpInitializePreloadedHives(BugCheckParameter3, 0LL);
  ObjectTypes = CmpCreateObjectTypes();
  if ( ObjectTypes < 0 )
    KeBugCheckEx(0x67u, 1uLL, 1uLL, ObjectTypes, 0LL);
  v5 = CmpInitializeLightWeightTransactionType();
  if ( v5 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x18uLL, v5, 0LL);
  v6 = CmpInitializeHive(
         (ULONG_PTR *)&CmpMasterHive,
         0,
         1,
         0,
         0LL,
         0LL,
         0LL,
         0,
         0LL,
         0LL,
         0LL,
         (__int64)BugCheckParameter4);
  if ( v6 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 2uLL, v6, (ULONG_PTR)BugCheckParameter4);
  v7 = CmpInitializeKcbCache((__int64)CmpMasterHive, 0x80u);
  if ( v7 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 3uLL, v7, 0LL);
  if ( !(unsigned __int8)CmpCreateRegistryRoot() )
    KeBugCheckEx(0x67u, 1uLL, 4uLL, 0LL, 0LL);
  inited = CmpInitSiloSupport(0LL);
  if ( inited < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x18uLL, inited, 0LL);
  v9 = CmpHiveRootSecurityDescriptor();
  ObjectAttributes.ObjectName = &CmRegistryMachineName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = v9;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v10 = NtCreateKey((PHANDLE)&DestinationString, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    ExFreePoolWithTag(v9, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v11, 0LL);
  }
  NtClose(*(HANDLE *)&DestinationString.Length);
  ObjectAttributes.ObjectName = &CmRegistryUserName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = v9;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v12 = NtCreateKey((PHANDLE)&DestinationString, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v13 = v12;
  if ( v12 < 0 )
  {
    ExFreePoolWithTag(v9, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v13, 0LL);
  }
  NtClose(*(HANDLE *)&DestinationString.Length);
  ObjectAttributes.ObjectName = &CmRegistryAppName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = v9;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  LODWORD(v33[0]) = 65;
  v14 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (__int64)CmKeyObjectType,
          0,
          0LL,
          0x2001Fu,
          (__int64)v33,
          &DestinationString);
  v15 = v14;
  if ( v14 < 0 )
  {
    ExFreePoolWithTag(v9, 0);
    CmpCleanupParseContext((__int64)v33, 0);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v15, 0LL);
  }
  CmpCleanupParseContext((__int64)v33, 0);
  NtClose(*(HANDLE *)&DestinationString.Length);
  ObjectAttributes.ObjectName = &CmRegistryContainersName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = v9;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v16 = NtCreateKey((PHANDLE)&DestinationString, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v17 = v16;
  if ( v16 < 0 )
  {
    ExFreePoolWithTag(v9, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v17, 0LL);
  }
  NtClose(*(HANDLE *)&DestinationString.Length);
  if ( !CmpInitializeSystemHive(BugCheckParameter3) )
  {
    ExFreePoolWithTag(v9, 0);
    KeBugCheckEx(0x67u, 1uLL, 0xCuLL, 0LL, 0LL);
  }
  ControlSet = CmpCreateControlSet(BugCheckParameter3);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, ControlSet, 0LL);
  if ( CmpLKGEnabled )
    MEMORY[0xFFFFF780000002F0] |= 0x10u;
  if ( CmStateSeparationEnabled )
  {
    dword_140353D78 &= ~0x20000u;
    byte_140353D94 = 0;
    byte_140353FF4 = 0;
    dword_140353E10 = dword_140353E10 & 0xFFFD7FFF | 0x8000;
    byte_14035408B = 1;
    dword_140353F40 &= ~0x20000u;
    dword_140353EA8 = dword_140353EA8 & 0xFFFD7FFF | 0x8000;
  }
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  v19 = CmpInitializeHive(
          (ULONG_PTR *)&DestinationString.Length,
          0,
          1,
          0,
          0LL,
          0LL,
          0LL,
          0,
          0LL,
          0LL,
          0LL,
          (__int64)BugCheckParameter4);
  v20 = v19;
  if ( v19 < 0 )
  {
    ExFreePoolWithTag(v9, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v20, (ULONG_PTR)BugCheckParameter4);
  }
  v21 = *(void **)&DestinationString.Length;
  v22 = CmpLinkHiveToMaster(
          (__int64)&CmRegistryMachineHardwareName,
          0LL,
          *(__int64 *)&DestinationString.Length,
          1,
          dword_140353CE8,
          0,
          0LL,
          (__int64)v9,
          0LL,
          0LL,
          1);
  if ( v22 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v22, 0LL);
  CmpAddToHiveFileList(v21);
  ExFreePoolWithTag(v9, 0);
  qword_140353CD8 = (__int64)v21;
  v23 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v23 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v23, 0LL);
  CmpNoMasterCreates = 1;
  v24 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v24 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v24, 0LL);
  CmSetInitMachineConfig(BugCheckParameter3);
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty();
  v25 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v25 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v25, 0LL);
  v26 = CmpSetSystemValues(BugCheckParameter3);
  if ( v26 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v26, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v27 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v27 >= 0x58u )
  {
    if ( *(_QWORD *)(v27 + 80) )
    {
      v29 = CmpSetNetworkValue();
      if ( v29 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v29, 0LL);
    }
  }
  return 1;
}
