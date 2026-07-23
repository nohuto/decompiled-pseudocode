/*
 * XREFs of CmInitSystem1 @ 0x140807ADC
 * Callers:
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     NtCreateKey @ 0x14042DEB0 (NtCreateKey.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     CmpInitializeParseContext @ 0x14045EF4C (CmpInitializeParseContext.c)
 *     CmpAddToHiveFileList @ 0x1404CBF94 (CmpAddToHiveFileList.c)
 *     CmpLinkHiveToMaster @ 0x1404CCCAC (CmpLinkHiveToMaster.c)
 *     ObOpenObjectByName @ 0x1404CD2A0 (ObOpenObjectByName.c)
 *     CmpInitializeKcbCache @ 0x1404CD318 (CmpInitializeKcbCache.c)
 *     CmpHashUnicodeComponent @ 0x1404D2F10 (CmpHashUnicodeComponent.c)
 *     CmpCleanupParseContext @ 0x1404D5440 (CmpCleanupParseContext.c)
 *     CmpGetNextActiveHive @ 0x1404D8480 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     CmpInitSiloSupport @ 0x1405A3780 (CmpInitSiloSupport.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A4DF0 (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitializeNameCache @ 0x1405C140C (CmpInitializeNameCache.c)
 *     CmpMarkCurrentProfileDirty @ 0x1405D2B18 (CmpMarkCurrentProfileDirty.c)
 *     CmpInitDelayDerefKCBEngine @ 0x1405D4A90 (CmpInitDelayDerefKCBEngine.c)
 *     CmpInitializeLightWeightTransactionType @ 0x1405D4D60 (CmpInitializeLightWeightTransactionType.c)
 *     CmpInitCallbacks @ 0x1405D54DC (CmpInitCallbacks.c)
 *     CmpInitializeDelayedCloseTable @ 0x1405D5F54 (CmpInitializeDelayedCloseTable.c)
 *     HvInitializeHashLibrary @ 0x1405D5FA4 (HvInitializeHashLibrary.c)
 *     CmpInitializeGlobalKeyLockTracker @ 0x1405D6158 (CmpInitializeGlobalKeyLockTracker.c)
 *     CmpInitializeFreezeThaw @ 0x1405D6184 (CmpInitializeFreezeThaw.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x1405D6508 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpInitSIDToHiveMapping @ 0x1405D6534 (CmpInitSIDToHiveMapping.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140807090 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemValues @ 0x1408075C8 (CmpSetSystemValues.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140807834 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpInitializeSystemHive @ 0x1408078A0 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHives @ 0x1408081C0 (CmpInitializePreloadedHives.c)
 *     CmpCreateRegistryRoot @ 0x140808574 (CmpCreateRegistryRoot.c)
 *     CmpCreateControlSet @ 0x14081E0AC (CmpCreateControlSet.c)
 *     CmpInitializeHardwareConfiguration @ 0x14081E6D8 (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeRegistryNames @ 0x14082058C (CmpInitializeRegistryNames.c)
 *     CmpInitializeTransactions @ 0x140823094 (CmpInitializeTransactions.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140824620 (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140824C74 (CmpInitGlobalQuotaAllowed.c)
 *     CmpCreateObjectTypes @ 0x140825550 (CmpCreateObjectTypes.c)
 *     CmpSetNetworkValue @ 0x140832250 (CmpSetNetworkValue.c)
 */

char __fastcall CmInitSystem1(ULONG_PTR BugCheckParameter3)
{
  int *v2; // rbx
  __int64 v3; // rsi
  int ObjectTypes; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  ACL *v8; // rbx
  NTSTATUS v9; // eax
  ULONG_PTR v10; // rsi
  NTSTATUS v11; // eax
  ULONG_PTR v12; // rsi
  int v13; // eax
  ULONG_PTR v14; // rsi
  NTSTATUS v15; // eax
  ULONG_PTR v16; // rsi
  int ControlSet; // eax
  int v18; // eax
  ULONG_PTR v19; // rsi
  void *v20; // rsi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  NTSTATUS v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  int inited; // eax
  int v29; // ebx
  unsigned int v30; // ebx
  _SLIST_HEADER *PoolWithTag; // rax
  _SLIST_HEADER *v32; // rsi
  unsigned int v33; // ebx
  struct _EX_RUNDOWN_REF *v34; // rcx
  unsigned int v35; // eax
  __int64 *v36; // r8
  __int64 v37; // r9
  __int64 i; // rdx
  __int64 *NextActiveHive; // rax
  int v40; // eax
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4[44]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v44[56]; // [rsp+200h] [rbp+100h] BYREF

  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  CmpInitializeParseContext(v44);
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
  qword_1407AD060 = (__int64)&CmpFailedUnloadListHead;
  CmpFailedUnloadListHead = (__int64)&CmpFailedUnloadListHead;
  qword_1407ACD50 = (__int64)&CmpHiveListHead;
  CmpHiveListHead = (__int64)&CmpHiveListHead;
  CmpLoadHiveLock = 0LL;
  CmpShutdownLock = 0LL;
  ExInitializePushLock(&CmpShutdownRundown);
  CmpActiveHiveRundownEvent = 0LL;
  qword_14036B2B8 = (__int64)&CmpAppHiveLoadList;
  CmpAppHiveLoadList = (__int64)&CmpAppHiveLoadList;
  CmpActiveAppHiveUnloadEvent = 0LL;
  CmpAppHiveLoadListLock = 0LL;
  ExInitializeResourceLite((PERESOURCE)&CmpRegistryLock);
  CmpPostLock.Count = 1;
  CmpPostLock.Event.Header.WaitListHead.Blink = &CmpPostLock.Event.Header.WaitListHead;
  CmpPostLock.Event.Header.WaitListHead.Flink = &CmpPostLock.Event.Header.WaitListHead;
  qword_1407AC630 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  CmpWorkerEngineWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpWorkerEngineWorker;
  CmpWorkerEngineLock.Event.Header.WaitListHead.Blink = &CmpWorkerEngineLock.Event.Header.WaitListHead;
  CmpWorkerEngineLock.Event.Header.WaitListHead.Flink = &CmpWorkerEngineLock.Event.Header.WaitListHead;
  qword_14036B348 = (__int64)&CmpWorkerEngineListHead;
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
    qword_14036B208 = (__int64)&CmpFreeKCBListHead;
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
  v2 = dword_14033C0CC;
  v3 = 7LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v2 - 3));
    *v2 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
    v2 += 6;
    --v3;
  }
  while ( v3 );
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
  v7 = CmpInitializeKcbCache(CmpMasterHive, 0x80u);
  if ( v7 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 3uLL, v7, 0LL);
  if ( !(unsigned __int8)CmpCreateRegistryRoot() )
    KeBugCheckEx(0x67u, 1uLL, 4uLL, 0LL, 0LL);
  v8 = CmpHiveRootSecurityDescriptor();
  ObjectAttributes.ObjectName = &CmRegistryMachineName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = v8;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v9 = NtCreateKey((PHANDLE)&DestinationString, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v10 = v9;
  if ( v9 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v10, 0LL);
  }
  NtClose(*(HANDLE *)&DestinationString.Length);
  ObjectAttributes.ObjectName = &CmRegistryUserName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = v8;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v11 = NtCreateKey((PHANDLE)&DestinationString, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v12, 0LL);
  }
  NtClose(*(HANDLE *)&DestinationString.Length);
  ObjectAttributes.ObjectName = &CmRegistryAppName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = v8;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v44[0] = 65;
  v13 = ObOpenObjectByName(
          (int)&ObjectAttributes,
          (int)CmKeyObjectType,
          0,
          0,
          131103,
          (__int64)v44,
          (__int64)&DestinationString);
  v14 = v13;
  if ( v13 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    CmpCleanupParseContext((__int64)v44, 0);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v14, 0LL);
  }
  CmpCleanupParseContext((__int64)v44, 0);
  NtClose(*(HANDLE *)&DestinationString.Length);
  ObjectAttributes.ObjectName = &CmRegistryContainersName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = v8;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v15 = NtCreateKey((PHANDLE)&DestinationString, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v16 = v15;
  if ( v15 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v16, 0LL);
  }
  NtClose(*(HANDLE *)&DestinationString.Length);
  if ( !CmpInitializeSystemHive(BugCheckParameter3) )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 0xCuLL, 0LL, 0LL);
  }
  ControlSet = CmpCreateControlSet(BugCheckParameter3);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, ControlSet, 0LL);
  if ( CmpLKGEnabled )
    MEMORY[0xFFFFF780000002F0] |= 0x10u;
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  v18 = CmpInitializeHive(
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
  v19 = v18;
  if ( v18 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v19, (ULONG_PTR)BugCheckParameter4);
  }
  v20 = *(void **)&DestinationString.Length;
  v21 = CmpLinkHiveToMaster(
          (__int64)&CmRegistryMachineHardwareName,
          0LL,
          *(__int64 *)&DestinationString.Length,
          1,
          dword_14033BCB8,
          0,
          0LL,
          (__int64)v8,
          0LL,
          0LL,
          1);
  if ( v21 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v21, 0LL);
  CmpAddToHiveFileList(v20);
  ExFreePoolWithTag(v8, 0);
  qword_14033BCA8 = (__int64)v20;
  v22 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v22 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v22, 0LL);
  CmpNoMasterCreates = 1;
  v23 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v23 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v23, 0LL);
  if ( CmRegistryLockTableLength == 4 && CmRegistryLockTableType == 4 )
  {
    v29 = CmRegistryLockTablePages;
    if ( CmRegistryLockTablePages )
    {
      if ( (unsigned int)CmRegistryLockTablePages <= 0x14 )
      {
        if ( (unsigned int)CmRegistryLockTablePages < 8 )
          v29 = 8;
      }
      else
      {
        v29 = 20;
      }
      v30 = v29 << 12;
      PoolWithTag = (_SLIST_HEADER *)ExAllocatePoolWithTag(NonPagedPoolNx, v30, 0x744C4D43u);
      CmpLockTable = PoolWithTag;
      v32 = PoolWithTag;
      if ( !PoolWithTag )
        KeBugCheckEx(0x67u, 1uLL, 0x14uLL, 0xFFFFFFFFC000009AuLL, 0LL);
      memset(PoolWithTag, 0, v30);
      *((_DWORD *)&v32[1].HeaderX64 + 1) = 0;
      v33 = (v30 - 32) >> 4;
      LODWORD(v32[1].Alignment) = v33;
      InitializeSListHead(v32);
      do
        RtlpInterlockedPushEntrySList(CmpLockTable, (PSLIST_ENTRY)&CmpLockTable[--v33 + 2]);
      while ( v33 );
      v34 = 0LL;
      while ( 1 )
      {
        NextActiveHive = CmpGetNextActiveHive(v34);
        v34 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
        if ( !NextActiveHive )
          break;
        v35 = *((_DWORD *)NextActiveHive + 702);
        if ( v35 )
        {
          v36 = (__int64 *)(v34[350].Count + 16);
          v37 = v35;
          do
          {
            for ( i = *v36; i; i = *(_QWORD *)(i + 8) )
              *(_DWORD *)(i - 4) |= 0x100000u;
            v36 += 3;
            --v37;
          }
          while ( v37 );
        }
      }
      CmpLockTablePresent = 1;
    }
  }
  CmSetInitMachineConfig(BugCheckParameter3);
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty();
  v24 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v24 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v24, 0LL);
  v25 = CmpSetSystemValues(BugCheckParameter3);
  if ( v25 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v25, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v26 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v26 >= 0x58u )
  {
    if ( *(_QWORD *)(v26 + 80) )
    {
      v40 = CmpSetNetworkValue();
      if ( v40 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v40, 0LL);
    }
  }
  inited = CmpInitSiloSupport(0LL);
  if ( inited < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x18uLL, inited, 0LL);
  return 1;
}
