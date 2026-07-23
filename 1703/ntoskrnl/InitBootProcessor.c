/*
 * XREFs of InitBootProcessor @ 0x140809FC8
 * Callers:
 *     KiInitializeKernel @ 0x140411030 (KiInitializeKernel.c)
 * Callees:
 *     RtlInitString @ 0x14002A170 (RtlInitString.c)
 *     DbgLoadImageSymbols @ 0x1400700F0 (DbgLoadImageSymbols.c)
 *     RtlInitAnsiString @ 0x1400852C0 (RtlInitAnsiString.c)
 *     MmMapIoSpaceEx @ 0x1401243A0 (MmMapIoSpaceEx.c)
 *     KeAdjustInterruptTime @ 0x14013DE70 (KeAdjustInterruptTime.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140144210 (KeRegisterBugCheckReasonCallback.c)
 *     HviIsAnyHypervisorPresent @ 0x14014A450 (HviIsAnyHypervisorPresent.c)
 *     RtlStringCbPrintfA @ 0x1401556EC (RtlStringCbPrintfA.c)
 *     VslGetNestedPageProtectionFlags @ 0x140159240 (VslGetNestedPageProtectionFlags.c)
 *     RtlStringCbCopyExA @ 0x140167408 (RtlStringCbCopyExA.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _strupr @ 0x1401694E0 (_strupr.c)
 *     strstr @ 0x1401697D0 (strstr.c)
 *     atol @ 0x140169880 (atol.c)
 *     KeBugCheck @ 0x140181870 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1401893F0 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlStringCbCatExA @ 0x1401DD0A4 (RtlStringCbCatExA.c)
 *     __report_rangecheckfailure @ 0x1401DD43C (__report_rangecheckfailure.c)
 *     HvlpMapStatisticsPage @ 0x1401E5C54 (HvlpMapStatisticsPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401E668C (HvlpSetupCachedHypercallPages.c)
 *     HvlpInitializePowerStatistics @ 0x1401E98DC (HvlpInitializePowerStatistics.c)
 *     HvlpInitializeHvCrashdump @ 0x1401EAE7C (HvlpInitializeHvCrashdump.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlFindMessage @ 0x140429F70 (RtlFindMessage.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1405A3744 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrAccessResource @ 0x1405BD870 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x1405BD880 (LdrFindResource_U.c)
 *     RtlInitNlsTables @ 0x1405D09A4 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1405D2938 (RtlResetRtlTranslations.c)
 *     RtlGetHostNtSystemRoot @ 0x1405D64E4 (RtlGetHostNtSystemRoot.c)
 *     RtlpInitializeStackTraceDatabase @ 0x1406E7F30 (RtlpInitializeStackTraceDatabase.c)
 *     ObInitSystem @ 0x1407FE634 (ObInitSystem.c)
 *     MmInitSystem @ 0x140803254 (MmInitSystem.c)
 *     PsInitSystem @ 0x140809E88 (PsInitSystem.c)
 *     CmGetSystemControlValues @ 0x14080E8DC (CmGetSystemControlValues.c)
 *     VerifierInitSystem @ 0x140812904 (VerifierInitSystem.c)
 *     KeInitSystem @ 0x140817034 (KeInitSystem.c)
 *     InbvDriverInitialize @ 0x140818F1C (InbvDriverInitialize.c)
 *     KeInitializeClock @ 0x140819AAC (KeInitializeClock.c)
 *     SeInitSystem @ 0x14081A260 (SeInitSystem.c)
 *     ExInitSystem @ 0x14081EF74 (ExInitSystem.c)
 *     PsInitializeQuotaSystem @ 0x14081FDD4 (PsInitializeQuotaSystem.c)
 *     BootApplicationPersistentDataInitialize @ 0x1408207B8 (BootApplicationPersistentDataInitialize.c)
 *     WheaInitializeServices @ 0x140820954 (WheaInitializeServices.c)
 *     DbgkInitialize @ 0x140821008 (DbgkInitialize.c)
 *     ExComputeTickCountMultiplier @ 0x140821DBC (ExComputeTickCountMultiplier.c)
 *     PpInitSystem @ 0x1408253B4 (PpInitSystem.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1408259C0 (InitializeDynamicPartitioningPolicy.c)
 *     KeNumaInitialize @ 0x1408263AC (KeNumaInitialize.c)
 *     HeadlessInit @ 0x140826A2C (HeadlessInit.c)
 *     ExBurnMemory @ 0x14083196C (ExBurnMemory.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x1408319F4 (ExpRevokeBootLoaderPagePrivileges.c)
 *     VslpIumPhase0Initialize @ 0x140832A48 (VslpIumPhase0Initialize.c)
 */

__int64 __fastcall InitBootProcessor(unsigned int *a1)
{
  ULONG_PTR v1; // rdx
  unsigned int *v3; // rax
  unsigned int v4; // ecx
  char *v5; // rdi
  char *v6; // rax
  char *v7; // rax
  __int64 v8; // rdx
  char *v9; // rax
  char *v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // r8
  size_t v13; // r9
  unsigned __int64 v14; // kr00_8
  size_t v15; // rcx
  __int64 v16; // rdx
  PNLSTABLEINFO v17; // rcx
  NTSTATUS v18; // eax
  UNICODE_STRING *HostNtSystemRoot; // r13
  NTSTATUS v20; // eax
  int v21; // eax
  int v22; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  ULONG v24; // r14d
  PVOID PoolWithTag; // rax
  void *v26; // rsi
  const char *v27; // rcx
  unsigned int v28; // r15d
  unsigned int *i; // rsi
  char *v30; // r8
  unsigned int v31; // r9d
  __int64 v32; // rdx
  char v33; // al
  NTSTATUS v34; // eax
  __int64 v35; // rsi
  size_t v36; // rdx
  const char *v37; // r8
  NTSTRSAFE_PSTR *v38; // r9
  NTSTATUS Message; // eax
  int v40; // ecx
  NTSTATUS v41; // eax
  size_t v42; // rdx
  const char *v43; // r8
  NTSTATUS v44; // eax
  NTSTATUS v45; // eax
  NTSTATUS v46; // eax
  NTSTATUS v47; // eax
  NTSTATUS v48; // eax
  PVOID v49; // rdi
  PVOID v50; // rax
  __int64 result; // rax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  ULONG dwFlagsa; // [rsp+30h] [rbp-D8h]
  ULONG Size; // [rsp+38h] [rbp-D0h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  size_t pcbRemaining; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Resource; // [rsp+58h] [rbp-B0h] BYREF
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+68h] [rbp-A0h] BYREF
  PMESSAGE_RESOURCE_ENTRY v61; // [rsp+70h] [rbp-98h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+78h] [rbp-90h] BYREF
  __int128 v63; // [rsp+80h] [rbp-88h] BYREF
  __int64 v64; // [rsp+90h] [rbp-78h]
  STRING Name; // [rsp+98h] [rbp-70h] BYREF
  char v66; // [rsp+A8h] [rbp-60h] BYREF
  _LDR_RESOURCE_INFO ResourceInfo; // [rsp+C0h] [rbp-48h] BYREF
  CHAR pszDest[256]; // [rsp+D8h] [rbp-30h] BYREF
  CHAR Source[64]; // [rsp+1D8h] [rbp+D0h] BYREF

  v1 = *a1;
  if ( *(_QWORD *)a1 != 10LL || a1[2] != 328 )
  {
    v4 = 0;
    goto LABEL_132;
  }
  v3 = (unsigned int *)*((_QWORD *)a1 + 30);
  v4 = *v3;
  if ( *v3 != 3144 || v3[656] != 167772163 )
LABEL_132:
    KeBugCheckEx(0x100u, v1, a1[1], a1[2], v4);
  MEMORY[0xFFFFF780000002C4] = v3[637];
  if ( (VslGetNestedPageProtectionFlags() & 6) == 6 )
    ExpRevokeBootLoaderPagePrivileges(a1);
  v5 = (char *)*((_QWORD *)a1 + 27);
  LODWORD(InitializationPhase) = 0;
  if ( v5 )
  {
    strupr(v5);
    v6 = strstr(v5, "PERFMEM");
    if ( v6 )
    {
      v7 = strstr(v6, "=");
      if ( v7 )
      {
        v8 = (__int64)atol(v7 + 1) << 8;
        if ( *(_QWORD *)(*((_QWORD *)a1 + 30) + 2504LL) )
        {
          BBTPagesToReserve = v8;
        }
        else if ( v8 )
        {
          BBTPagesToReserve = ExBurnMemory(a1, v8, 23LL, &BBTMemoryDescriptor);
        }
      }
    }
    v9 = strstr(v5, "BURNMEMORY");
    if ( v9 )
    {
      v10 = strstr(v9, "=");
      if ( v10 )
      {
        v11 = (__int64)atol(v10 + 1) << 8;
        if ( v11 )
          ExBurnMemory(a1, v11, 6LL, &BurnMemoryDescriptor);
      }
    }
    if ( strstr(v5, "FORCEGROUPAWARE") )
      KeForceGroupAwareness = 1;
  }
  v12 = (unsigned int *)*((_QWORD *)a1 + 4);
  if ( v12 != a1 + 8 )
  {
    v13 = InitNlsTableSize;
    do
    {
      if ( v12[4] == 21 )
      {
        v14 = *((_QWORD *)v12 + 4);
        v64 = (v14 * (unsigned __int128)0x1000uLL) >> 64;
        if ( !is_mul_ok(v14, 0x1000uLL) )
          goto LABEL_109;
        v15 = v13;
        v13 += v14 << 12;
        if ( v13 < v15 )
        {
          InitNlsTableSize = -1LL;
LABEL_109:
          KeBugCheck(0x31u);
        }
        InitNlsTableSize = v13;
      }
      v12 = *(unsigned int **)v12;
    }
    while ( v12 != a1 + 8 );
  }
  v16 = *((_QWORD *)a1 + 28);
  InitNlsTableBase = *(void **)v16;
  InitAnsiCodePageDataOffset = 0;
  InitOemCodePageDataOffset = *(_DWORD *)(v16 + 8) - *(_DWORD *)v16;
  InitUnicodeCaseTableDataOffset = *(_DWORD *)(v16 + 16) - *(_DWORD *)v16;
  RtlInitNlsTables(
    (PUSHORT)InitNlsTableBase,
    (PUSHORT)((char *)InitNlsTableBase + (unsigned int)InitOemCodePageDataOffset),
    (PUSHORT)((char *)InitNlsTableBase + (unsigned int)InitUnicodeCaseTableDataOffset),
    (PNLSTABLEINFO)(unsigned int)InitOemCodePageDataOffset);
  RtlResetRtlTranslations(v17);
  WheaInitializeServices();
  ((void (__fastcall *)(__int64 (__fastcall **)()))off_14033B5C0[0])(HalIommuDispatch);
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, a1) )
    KeBugCheck(0x5Cu);
  KeInitializeClock((unsigned int)InitializationPhase);
  PsInitializeQuotaSystem(1LL);
  CmGetSystemControlValues(*((_QWORD *)a1 + 21));
  if ( PopEnergyEstimationDisabled )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  if ( !(unsigned __int8)KeInitSystem(0LL) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  MEMORY[0xFFFFF7800000023C] = 0;
  v18 = RtlStringCbPrintfA(pszDest, 0x100uLL, "C:%s", *((const char **)a1 + 25));
  if ( v18 < 0 )
    KeBugCheckEx(0x6Eu, v18, 0LL, 0LL, 0LL);
  RtlInitString(&DestinationString, pszDest);
  DestinationString.Buffer[--DestinationString.Length] = 0;
  HostNtSystemRoot = (UNICODE_STRING *)RtlGetHostNtSystemRoot();
  HostNtSystemRoot->Buffer = (wchar_t *)0xFFFFF78000000030LL;
  *(_DWORD *)&HostNtSystemRoot->Length = 34078720;
  v20 = RtlAnsiStringToUnicodeString(HostNtSystemRoot, &DestinationString, 0);
  if ( v20 < 0 )
    KeBugCheckEx(0x6Eu, v20, 1uLL, 0LL, 0LL);
  ResourceInfo.Type = 11LL;
  ResourceInfo.Name = 1LL;
  ResourceInfo.Language = 0LL;
  Resource = 0LL;
  Size = 0;
  if ( LdrFindResource_U((PVOID)0x140000000LL, &ResourceInfo, 3u, &ResourceDataEntry) >= 0
    && LdrAccessResource((PVOID)0x140000000LL, ResourceDataEntry, &Resource, &Size) >= 0 )
  {
    KiBugCodeMessages = Resource;
  }
  MEMORY[0xFFFFF78000000258] = CmGlobalValidationRunlevel;
  MEMORY[0xFFFFF7800000028B] = 1;
  v21 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v21;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v21 << 16;
  if ( InitTickRolloverDelayLength == 4 && InitTickRolloverDelayType == 4 )
  {
    v22 = InitTickRolloverDelay;
  }
  else
  {
    v22 = 0;
    InitTickRolloverDelay = 0;
  }
  if ( v22 )
  {
    KeAdjustInterruptTime(10000LL * (unsigned int)-v22, 1);
    MEMORY[0xFFFFF78000000348] = KeQueryPerformanceCounter(0LL);
    KiSystemTimeErrorAccumulator = 0LL;
  }
  NtGlobalFlag |= CmNtGlobalFlag;
  MEMORY[0xFFFFF780000003C0] = 1;
  MEMORY[0xFFFFF780000003C4] = 1;
  MEMORY[0xFFFFF7800000036A] = 1;
  if ( !(unsigned __int8)ExInitSystem() )
    KeBugCheck(0x31u);
  KeNumaInitialize();
  VerifierInitSystem(a1);
  InitializeDynamicPartitioningPolicy();
  EtwBootPerfData = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !MmInitSystem(0, (ULONG_PTR)a1) )
    KeBugCheck(0x31u);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  KiHwPolicyDriverImageBase = 0LL;
  qword_1407C55C8 = PerformanceCounter.QuadPart;
  HalInitializeBios(0LL, a1);
  InbvDriverInitialize(0LL, a1, 0LL);
  if ( KiBugCodeMessages )
  {
    v24 = Size;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6342694Bu);
    v26 = PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheck(0x7Du);
    memmove(PoolWithTag, KiBugCodeMessages, v24);
    KiBugCodeMessages = v26;
  }
  if ( a1[3] != 1 )
  {
    v27 = (const char *)*((_QWORD *)a1 + 27);
    if ( v27 )
    {
      if ( strstr(v27, "DEBUG") )
      {
        IopAutoReboot = 0;
        KeBugCheckEx(0x196u, a1[3], 1uLL, 0LL, 0LL);
      }
    }
  }
  v28 = 0;
  for ( i = (unsigned int *)*((_QWORD *)a1 + 2); i != a1 + 4; ++v28 )
  {
    if ( v28 >= 3 )
    {
      v30 = (char *)*((_QWORD *)i + 10);
      if ( *(_WORD *)v30 == 92 )
      {
        v31 = *((unsigned __int16 *)i + 36) >> 1;
        if ( (unsigned __int64)v31 + 1 <= 0x100 )
        {
          v32 = 0LL;
          do
          {
            v33 = *v30;
            v30 += 2;
            pszDest[v32] = v33;
            v32 = (unsigned int)(v32 + 1);
          }
          while ( (unsigned int)v32 < v31 );
          if ( (unsigned int)v32 >= 0x100uLL )
            _report_rangecheckfailure();
          pszDest[v32] = 0;
LABEL_62:
          RtlInitString(&Name, pszDest);
          DbgLoadImageSymbols(&Name, *((PVOID *)i + 6), 0xFFFFFFFFuLL);
        }
      }
      else if ( ((unsigned __int64)HostNtSystemRoot->Length >> 1)
              + 17
              + ((unsigned __int64)*((unsigned __int16 *)i + 44) >> 1) <= 0x100 )
      {
        v34 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%ws\\System32\\Drivers\\%wZ", HostNtSystemRoot->Buffer + 2, i + 22);
        if ( v34 < 0 )
          KeBugCheckEx(0x31u, v34, 3uLL, 0LL, 0LL);
        goto LABEL_62;
      }
    }
    i = *(unsigned int **)i;
  }
  if ( KdBreakAfterSymbolLoad )
    DbgBreakPointWithStatus(1u);
  dword_140344B30 = ((a1[66] & 1) != 0) + 1;
  ExpBootEnvironmentInformation = *(_OWORD *)(*((_QWORD *)a1 + 30) + 152LL);
  qword_140344B38 = *(_QWORD *)(*((_QWORD *)a1 + 30) + 2296LL);
  if ( HviIsAnyHypervisorPresent() && (HvlpRootFlags & 4) == 0 )
  {
    HvlpHvIdentityInfoCallbackRecord.State = 0;
    KeRegisterBugCheckReasonCallback(
      &HvlpHvIdentityInfoCallbackRecord,
      (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlpHvIdentityInfoCallback,
      KbCallbackSecondaryDumpData,
      &HvlpComponentName);
  }
  if ( HvlHypervisorConnected )
  {
    HvlpSetupCachedHypercallPages((_SLIST_HEADER *)KeGetCurrentPrcb());
    HvlpInitializePowerStatistics();
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v63 = 0uLL;
      if ( (int)HvlpMapStatisticsPage(1, &v63, &v60) >= 0 )
        HvlpHypervisorStatsPage = MmMapIoSpaceEx(v60, 4096LL, 2u);
    }
    v35 = *((_QWORD *)a1 + 30);
    HvlpFlags |= 8u;
    VslpIumPhase0Initialize(a1);
    if ( (HvlpRootFlags & 4) != 0 || VslVsmEnabled )
      HvlpInitializeHvCrashdump(*(_QWORD *)(v35 + 2200), *(_DWORD *)(v35 + 2192));
  }
  if ( **((_DWORD **)a1 + 30) >= 0xC48u )
    HeadlessInit(a1);
  BootApplicationPersistentDataInitialize(a1);
  MEMORY[0xFFFFF780000002B4] = 2147418111;
  MEMORY[0xFFFFF780000002B8] = 0x80000000;
  if ( CmNtCSDVersion )
  {
    Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000087u, &v61);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString(&DestinationString, (PCSZ)v61->Text);
    DestinationString.Length -= 2;
    if ( (_BYTE)CmNtCSDVersion )
      v40 = (unsigned __int8)CmNtCSDVersion + 64;
    else
      v40 = 0;
    dwFlagsa = v40;
    LODWORD(MessageResourceEntry) = BYTE1(CmNtCSDVersion);
    v41 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString, MessageResourceEntry);
    if ( v41 < 0 )
      KeBugCheckEx(0x31u, v41, 5uLL, 0LL, 0LL);
    if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      v44 = RtlStringCbCatExA(pszDest, v42, v43, &ppszDestEnd, &pcbRemaining, dwFlagsa);
      if ( v44 < 0 )
        KeBugCheckEx(0x31u, v44, 6uLL, 0LL, 0LL);
      v45 = RtlStringCbPrintfA(ppszDestEnd, pcbRemaining, "v.%u", HIWORD(CmNtCSDVersion));
      if ( v45 < 0 )
        KeBugCheckEx(0x31u, v45, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v46 = RtlStringCbCopyExA(pszDest, v36, v37, v38, &pcbRemaining, dwFlags);
    if ( v46 < 0 )
      KeBugCheckEx(0x31u, v46, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - pcbRemaining;
  }
  RtlInitAnsiString(&DestinationString, pszDest);
  v47 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, &DestinationString, 1u);
  if ( v47 < 0 )
    KeBugCheckEx(0x31u, v47, 9uLL, 0LL, 0LL);
  v48 = RtlStringCbPrintfA(Source, 0x40uLL, "%u.%u", 6, 3);
  if ( v48 < 0 )
    KeBugCheckEx(0x31u, v48, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, Source) )
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v49 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x800000uLL, 0x63617453u);
    if ( v49 )
    {
      if ( !&v66 || (int)RtlpInitializeStackTraceDatabase((__int64)v49, 0x800000LL, 0x800000uLL) < 0 )
        ExFreePoolWithTag(v49, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v50 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x11620uLL, 0x67626445u);
    RtlpExceptionLog2 = (__int64)v50;
    if ( v50 )
      memset(v50, 0, 0x11620uLL);
  }
  HandleTableListLock = 0LL;
  qword_1407ACF98 = (__int64)&HandleTableListHead;
  HandleTableListHead = (__int64)&HandleTableListHead;
  ExpFreeListCount = HalQueryMaximumProcessorCount();
  if ( !ObInitSystem() )
    KeBugCheck(0x5Eu);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x5Fu);
  if ( !PsInitSystem(0, a1) )
    KeBugCheck(0x60u);
  if ( (int)DbgkInitialize() < 0 )
    KeBugCheck(0x60u);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x8Fu);
  ExpTickCountMultiplier = ExComputeTickCountMultiplier();
  MEMORY[0xFFFFF78000000004] = ExpTickCountMultiplier;
  MEMORY[0xFFFFF7800000026C] = 10;
  MEMORY[0xFFFFF78000000270] = 0;
  MEMORY[0xFFFFF78000000260] = 15063;
  MEMORY[0xFFFFF7800000026A] = KeProcessorArchitecture;
  MEMORY[0xFFFFF7800000002C] = -31132;
  MEMORY[0xFFFFF7800000002E] = -31132;
  result = 0LL;
  MEMORY[0xFFFFF780000003A4] = 0;
  return result;
}
