/*
 * XREFs of InitBootProcessor @ 0x14082FD94
 * Callers:
 *     KiInitializeKernel @ 0x140425860 (KiInitializeKernel.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400AE570 (RtlInitAnsiString.c)
 *     DbgLoadImageSymbols @ 0x1400F9770 (DbgLoadImageSymbols.c)
 *     MmMapIoSpaceEx @ 0x1401199B0 (MmMapIoSpaceEx.c)
 *     RtlInitString @ 0x140120030 (RtlInitString.c)
 *     HviIsAnyHypervisorPresent @ 0x140134970 (HviIsAnyHypervisorPresent.c)
 *     RtlStringCbPrintfA @ 0x140139C5C (RtlStringCbPrintfA.c)
 *     VslGetNestedPageProtectionFlags @ 0x140143BC0 (VslGetNestedPageProtectionFlags.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14014B6D0 (KeRegisterBugCheckReasonCallback.c)
 *     RtlStringCbCopyExA @ 0x14015B70C (RtlStringCbCopyExA.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _strupr @ 0x14015DE20 (_strupr.c)
 *     strstr @ 0x14015E110 (strstr.c)
 *     atol @ 0x14015E1C0 (atol.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x140188EF0 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlStringCbCatExA @ 0x1401DFD40 (RtlStringCbCatExA.c)
 *     __report_rangecheckfailure @ 0x1401E00DC (__report_rangecheckfailure.c)
 *     HvlpMapStatisticsPage @ 0x1401EAAFC (HvlpMapStatisticsPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401EB48C (HvlpSetupCachedHypercallPages.c)
 *     HvlpInitializePowerStatistics @ 0x1401EE9CC (HvlpInitializePowerStatistics.c)
 *     HvlpInitializeHvCrashdump @ 0x1401F0038 (HvlpInitializeHvCrashdump.c)
 *     KeAdjustInterruptTime @ 0x14020358C (KeAdjustInterruptTime.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     RtlFindMessage @ 0x140516150 (RtlFindMessage.c)
 *     LdrAccessResource @ 0x1405BBF50 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x1405BBF70 (LdrFindResource_U.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1405C3454 (RtlCreateUnicodeStringFromAsciiz.c)
 *     RtlInitNlsTables @ 0x1405EA758 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1405ECD74 (RtlResetRtlTranslations.c)
 *     RtlGetHostNtSystemRoot @ 0x1405F2E80 (RtlGetHostNtSystemRoot.c)
 *     RtlpInitializeStackTraceDatabase @ 0x14071FD10 (RtlpInitializeStackTraceDatabase.c)
 *     MmInitSystem @ 0x140828DC4 (MmInitSystem.c)
 *     InbvDriverInitialize @ 0x140832D94 (InbvDriverInitialize.c)
 *     CmGetSystemControlValues @ 0x140836B78 (CmGetSystemControlValues.c)
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 *     DbgkInitialize @ 0x14083EDD4 (DbgkInitialize.c)
 *     PspInitPhase0 @ 0x1408413C0 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140843034 (ObInitSystem.c)
 *     VerifierInitSystem @ 0x14084819C (VerifierInitSystem.c)
 *     KeInitializeClock @ 0x140848FF0 (KeInitializeClock.c)
 *     InitializeDynamicPartitioningPolicy @ 0x14084A22C (InitializeDynamicPartitioningPolicy.c)
 *     SeInitSystem @ 0x14084AA38 (SeInitSystem.c)
 *     ExInitSystem @ 0x14084F864 (ExInitSystem.c)
 *     PsInitializeQuotaSystem @ 0x140850CF8 (PsInitializeQuotaSystem.c)
 *     BootApplicationPersistentDataInitialize @ 0x140851D40 (BootApplicationPersistentDataInitialize.c)
 *     WheaInitializeServices @ 0x1408520B4 (WheaInitializeServices.c)
 *     ExComputeTickCountMultiplier @ 0x140853034 (ExComputeTickCountMultiplier.c)
 *     PpInitSystem @ 0x1408567D4 (PpInitSystem.c)
 *     KeNumaInitialize @ 0x140857A00 (KeNumaInitialize.c)
 *     HeadlessInit @ 0x1408581E4 (HeadlessInit.c)
 *     ExBurnMemory @ 0x140868864 (ExBurnMemory.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x1408688E8 (ExpRevokeBootLoaderPagePrivileges.c)
 *     VslpIumPhase0Initialize @ 0x140869934 (VslpIumPhase0Initialize.c)
 */

__int64 __fastcall InitBootProcessor(_DWORD *StartContext)
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
  _QWORD *i; // r8
  unsigned __int64 v13; // kr00_8
  __int64 v14; // rcx
  PNLSTABLEINFO v15; // rcx
  NTSTATUS v16; // eax
  UNICODE_STRING *HostNtSystemRoot; // r13
  NTSTATUS v18; // eax
  int v19; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  ULONG v21; // r14d
  PVOID PoolWithTag; // rax
  void *v23; // rsi
  const char *v24; // rcx
  unsigned int v25; // r15d
  unsigned __int16 *j; // rsi
  char *v27; // r8
  unsigned int v28; // r9d
  __int64 v29; // rdx
  char v30; // al
  NTSTATUS v31; // eax
  __int64 v32; // rsi
  size_t v33; // rdx
  const char *v34; // r8
  NTSTRSAFE_PSTR *v35; // r9
  NTSTATUS Message; // eax
  NTSTATUS v37; // eax
  size_t v38; // rdx
  const char *v39; // r8
  NTSTATUS v40; // eax
  NTSTATUS v41; // eax
  NTSTATUS v42; // eax
  NTSTATUS v43; // eax
  NTSTATUS v44; // eax
  PVOID v45; // rax
  void *v46; // rdi
  PVOID v47; // rax
  __int64 result; // rax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  int dwFlagsa; // [rsp+30h] [rbp-D8h]
  ULONG Size; // [rsp+38h] [rbp-D0h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  size_t pcbRemaining; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Resource; // [rsp+58h] [rbp-B0h] BYREF
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+68h] [rbp-A0h] BYREF
  PMESSAGE_RESOURCE_ENTRY v58; // [rsp+70h] [rbp-98h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+78h] [rbp-90h] BYREF
  __int128 v60; // [rsp+80h] [rbp-88h] BYREF
  __int64 v61; // [rsp+90h] [rbp-78h]
  STRING Name; // [rsp+98h] [rbp-70h] BYREF
  _LDR_RESOURCE_INFO ResourceInfo; // [rsp+A8h] [rbp-60h] BYREF
  CHAR pszDest[256]; // [rsp+C8h] [rbp-40h] BYREF
  CHAR Source[64]; // [rsp+1C8h] [rbp+C0h] BYREF

  v1 = (unsigned int)*StartContext;
  if ( *(_QWORD *)StartContext != 10LL || StartContext[2] != 328 )
  {
    v4 = 0;
    goto LABEL_127;
  }
  v3 = (unsigned int *)*((_QWORD *)StartContext + 30);
  v4 = *v3;
  if ( *v3 != 3152 || v3[656] != 167772164 )
LABEL_127:
    KeBugCheckEx(0x100u, v1, (unsigned int)StartContext[1], (unsigned int)StartContext[2], v4);
  MEMORY[0xFFFFF780000002C4] = v3[637];
  if ( (VslGetNestedPageProtectionFlags() & 6) == 6 )
    ExpRevokeBootLoaderPagePrivileges(StartContext);
  v5 = (char *)*((_QWORD *)StartContext + 27);
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
        if ( *(_QWORD *)(*((_QWORD *)StartContext + 30) + 2504LL) )
        {
          BBTPagesToReserve = v8;
        }
        else if ( v8 )
        {
          BBTPagesToReserve = ExBurnMemory(StartContext, v8, 23LL, &BBTMemoryDescriptor);
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
          ExBurnMemory(StartContext, v11, 6LL, &BurnMemoryDescriptor);
      }
    }
    if ( strstr(v5, "FORCEGROUPAWARE") )
      KeForceGroupAwareness = 1;
  }
  for ( i = (_QWORD *)*((_QWORD *)StartContext + 4); i != (_QWORD *)(StartContext + 8); i = (_QWORD *)*i )
  {
    if ( *((_DWORD *)i + 4) == 21 )
    {
      v13 = i[4];
      v61 = (v13 * (unsigned __int128)0x1000uLL) >> 64;
      if ( !is_mul_ok(v13, 0x1000uLL) )
        goto LABEL_103;
      if ( InitNlsTableSize + (v13 << 12) < InitNlsTableSize )
      {
        InitNlsTableSize = -1LL;
LABEL_103:
        KeBugCheck(0x31u);
      }
      InitNlsTableSize += v13 << 12;
    }
  }
  v14 = *((_QWORD *)StartContext + 28);
  InitNlsTableBase = *(void **)v14;
  InitAnsiCodePageDataOffset = 0;
  InitOemCodePageDataOffset = *(_DWORD *)(v14 + 8) - *(_DWORD *)v14;
  InitUnicodeCaseTableDataOffset = *(_DWORD *)(v14 + 16) - *(_DWORD *)v14;
  RtlInitNlsTables(
    (PUSHORT)InitNlsTableBase,
    (PUSHORT)((char *)InitNlsTableBase + (unsigned int)InitOemCodePageDataOffset),
    (PUSHORT)((char *)InitNlsTableBase + (unsigned int)InitUnicodeCaseTableDataOffset),
    (PNLSTABLEINFO)InitNlsTableBase);
  RtlResetRtlTranslations(v15);
  WheaInitializeServices();
  ((void (__fastcall *)(__int64 (__fastcall **)()))off_1403535F0[0])(HalIommuDispatch);
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, StartContext) )
    KeBugCheck(0x5Cu);
  KeInitializeClock((unsigned int)InitializationPhase);
  PsInitializeQuotaSystem(1LL);
  CmGetSystemControlValues(*((_QWORD *)StartContext + 21));
  if ( !PopEnergyEstimationEnabled )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  if ( !(unsigned __int8)KeInitSystem(0LL) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  ExpTickCountMultiplier = ExComputeTickCountMultiplier();
  MEMORY[0xFFFFF78000000004] = ExpTickCountMultiplier;
  MEMORY[0xFFFFF7800000023C] = 0;
  v16 = RtlStringCbPrintfA(pszDest, 0x100uLL, "C:%s", *((const char **)StartContext + 25));
  if ( v16 < 0 )
    KeBugCheckEx(0x6Eu, v16, 0LL, 0LL, 0LL);
  RtlInitString(&DestinationString, pszDest);
  DestinationString.Buffer[--DestinationString.Length] = 0;
  HostNtSystemRoot = (UNICODE_STRING *)RtlGetHostNtSystemRoot();
  HostNtSystemRoot->Buffer = (wchar_t *)0xFFFFF78000000030LL;
  *(_DWORD *)&HostNtSystemRoot->Length = 34078720;
  v18 = RtlAnsiStringToUnicodeString(HostNtSystemRoot, &DestinationString, 0);
  if ( v18 < 0 )
    KeBugCheckEx(0x6Eu, v18, 1uLL, 0LL, 0LL);
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
  v19 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v19;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v19 << 16;
  if ( InitTickRolloverDelayLength != 4 || InitTickRolloverDelayType != 4 )
    InitTickRolloverDelay = 0;
  if ( InitTickRolloverDelay )
  {
    KeAdjustInterruptTime(10000LL * (unsigned int)-InitTickRolloverDelay, 1);
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
  VerifierInitSystem(StartContext);
  InitializeDynamicPartitioningPolicy();
  EtwBootPerfData = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !MmInitSystem(0, (ULONG_PTR)StartContext) )
    KeBugCheck(0x31u);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  KiHwPolicyDriverImageBase = 0LL;
  qword_14087C658 = PerformanceCounter.QuadPart;
  HalInitializeBios(0LL, StartContext);
  InbvDriverInitialize(0LL, StartContext, 0LL);
  if ( KiBugCodeMessages )
  {
    v21 = Size;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6342694Bu);
    v23 = PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheck(0x7Du);
    memmove(PoolWithTag, KiBugCodeMessages, v21);
    KiBugCodeMessages = v23;
  }
  if ( StartContext[3] != 1 )
  {
    v24 = (const char *)*((_QWORD *)StartContext + 27);
    if ( v24 )
    {
      if ( strstr(v24, "DEBUG") )
      {
        IopAutoReboot = 0;
        KeBugCheckEx(0x196u, (unsigned int)StartContext[3], 1uLL, 0LL, 0LL);
      }
    }
  }
  v25 = 0;
  for ( j = (unsigned __int16 *)*((_QWORD *)StartContext + 2); j != (unsigned __int16 *)(StartContext + 4); ++v25 )
  {
    if ( v25 >= 3 )
    {
      v27 = (char *)*((_QWORD *)j + 10);
      if ( *(_WORD *)v27 == 92 )
      {
        v28 = j[36] >> 1;
        if ( (unsigned __int64)v28 + 1 <= 0x100 )
        {
          v29 = 0LL;
          do
          {
            v30 = *v27;
            v27 += 2;
            pszDest[v29] = v30;
            v29 = (unsigned int)(v29 + 1);
          }
          while ( (unsigned int)v29 < v28 );
          if ( (unsigned int)v29 >= 0x100uLL )
            _report_rangecheckfailure();
          pszDest[v29] = 0;
LABEL_61:
          RtlInitString(&Name, pszDest);
          DbgLoadImageSymbols(&Name, *((PVOID *)j + 6), 0xFFFFFFFFuLL);
        }
      }
      else if ( ((unsigned __int64)HostNtSystemRoot->Length >> 1) + 17 + ((unsigned __int64)j[44] >> 1) <= 0x100 )
      {
        v31 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%ws\\System32\\Drivers\\%wZ", HostNtSystemRoot->Buffer + 2, j + 44);
        if ( v31 < 0 )
          KeBugCheckEx(0x31u, v31, 3uLL, 0LL, 0LL);
        goto LABEL_61;
      }
    }
    j = *(unsigned __int16 **)j;
  }
  if ( KdBreakAfterSymbolLoad )
    DbgBreakPointWithStatus(1u);
  dword_14035E690 = ((StartContext[66] & 1) != 0) + 1;
  ExpBootEnvironmentInformation = *(_OWORD *)(*((_QWORD *)StartContext + 30) + 152LL);
  qword_14035E698 = *(_QWORD *)(*((_QWORD *)StartContext + 30) + 2296LL);
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
      v60 = 0uLL;
      if ( (int)HvlpMapStatisticsPage(1, &v60, &v57) >= 0 )
        HvlpHypervisorStatsPage = MmMapIoSpaceEx(v57, 4096LL, 2u);
    }
    v32 = *((_QWORD *)StartContext + 30);
    HvlpFlags |= 8u;
    VslpIumPhase0Initialize(StartContext);
    if ( (HvlpRootFlags & 4) != 0 || VslVsmEnabled )
      HvlpInitializeHvCrashdump(*(_QWORD *)(v32 + 2200), *(_DWORD *)(v32 + 2192));
  }
  if ( **((_DWORD **)StartContext + 30) >= 0xC50u )
    HeadlessInit(StartContext);
  BootApplicationPersistentDataInitialize(StartContext);
  MEMORY[0xFFFFF780000002B4] = 2147418111;
  MEMORY[0xFFFFF780000002B8] = 0x80000000;
  if ( CmNtCSDVersion )
  {
    Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000087u, &v58);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString(&DestinationString, (PCSZ)v58->Text);
    DestinationString.Length -= 2;
    dwFlagsa = (unsigned __int8)CmNtCSDVersion != 0 ? (unsigned __int8)CmNtCSDVersion + 64 : 0;
    LODWORD(MessageResourceEntry) = BYTE1(CmNtCSDVersion);
    v37 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString, MessageResourceEntry);
    if ( v37 < 0 )
      KeBugCheckEx(0x31u, v37, 5uLL, 0LL, 0LL);
    if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      v40 = RtlStringCbCatExA(pszDest, v38, v39, &ppszDestEnd, &pcbRemaining, dwFlagsa);
      if ( v40 < 0 )
        KeBugCheckEx(0x31u, v40, 6uLL, 0LL, 0LL);
      v41 = RtlStringCbPrintfA(ppszDestEnd, pcbRemaining, "v.%u", HIWORD(CmNtCSDVersion));
      if ( v41 < 0 )
        KeBugCheckEx(0x31u, v41, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v42 = RtlStringCbCopyExA(pszDest, v33, v34, v35, &pcbRemaining, dwFlags);
    if ( v42 < 0 )
      KeBugCheckEx(0x31u, v42, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - pcbRemaining;
  }
  RtlInitAnsiString(&DestinationString, pszDest);
  v43 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, &DestinationString, 1u);
  if ( v43 < 0 )
    KeBugCheckEx(0x31u, v43, 9uLL, 0LL, 0LL);
  v44 = RtlStringCbPrintfA(Source, 0x40uLL, "%u.%u", 6, 3);
  if ( v44 < 0 )
    KeBugCheckEx(0x31u, v44, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, Source) )
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v45 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x800000uLL, 0x63617453u);
    v46 = v45;
    if ( v45 )
    {
      if ( (int)RtlpInitializeStackTraceDatabase((__int64)v45, 0x800000LL, 0x800000uLL) < 0 )
        ExFreePoolWithTag(v46, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v47 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x11620uLL, 0x67626445u);
    RtlpExceptionLog2 = (__int64)v47;
    if ( v47 )
      memset(v47, 0, 0x11620uLL);
  }
  HandleTableListLock = 0LL;
  qword_1407F4020 = (__int64)&HandleTableListHead;
  HandleTableListHead = (__int64)&HandleTableListHead;
  ExpFreeListCount = HalQueryMaximumProcessorCount();
  if ( !(unsigned __int8)ObInitSystem() )
    KeBugCheck(0x5Eu);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x5Fu);
  if ( !(unsigned __int8)PspInitPhase0(StartContext) )
    KeBugCheck(0x60u);
  if ( (int)DbgkInitialize() < 0 )
    KeBugCheck(0x60u);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x8Fu);
  MEMORY[0xFFFFF7800000026C] = 10;
  MEMORY[0xFFFFF78000000270] = 0;
  MEMORY[0xFFFFF78000000260] = 16299;
  MEMORY[0xFFFFF7800000026A] = KeProcessorArchitecture;
  MEMORY[0xFFFFF7800000002C] = -31132;
  MEMORY[0xFFFFF7800000002E] = -31132;
  result = 0LL;
  MEMORY[0xFFFFF780000003A4] = 0;
  return result;
}
