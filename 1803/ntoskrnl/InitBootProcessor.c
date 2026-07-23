/*
 * XREFs of InitBootProcessor @ 0x1408A6138
 * Callers:
 *     KiInitializeKernel @ 0x14047A5D0 (KiInitializeKernel.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     RtlInitString @ 0x140076840 (RtlInitString.c)
 *     MmMapIoSpaceEx @ 0x14013A010 (MmMapIoSpaceEx.c)
 *     KeAdjustInterruptTime @ 0x140156098 (KeAdjustInterruptTime.c)
 *     DbgLoadImageSymbols @ 0x140161260 (DbgLoadImageSymbols.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140169850 (KeRegisterBugCheckReasonCallback.c)
 *     HviIsAnyHypervisorPresent @ 0x14016D110 (HviIsAnyHypervisorPresent.c)
 *     RtlStringCbPrintfA @ 0x140171A78 (RtlStringCbPrintfA.c)
 *     VslGetNestedPageProtectionFlags @ 0x14017D610 (VslGetNestedPageProtectionFlags.c)
 *     RtlStringCbCopyExA @ 0x140185BE8 (RtlStringCbCopyExA.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _strupr @ 0x140187B20 (_strupr.c)
 *     strstr @ 0x140187E10 (strstr.c)
 *     atol @ 0x140187EC0 (atol.c)
 *     KeBugCheck @ 0x1401AAEB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1401B2B50 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlStringCbCatExA @ 0x14021F550 (RtlStringCbCatExA.c)
 *     __report_rangecheckfailure @ 0x14021F8EC (__report_rangecheckfailure.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1402267F8 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlpMapStatisticsPage @ 0x140227B9C (HvlpMapStatisticsPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x140228500 (HvlpSetupCachedHypercallPages.c)
 *     HvlpInitializePowerStatistics @ 0x14022C268 (HvlpInitializePowerStatistics.c)
 *     HvlpInitializeHvCrashdump @ 0x14022D040 (HvlpInitializeHvCrashdump.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     RtlFindMessage @ 0x1405BB760 (RtlFindMessage.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140630F30 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrAccessResource @ 0x140639130 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x140639150 (LdrFindResource_U.c)
 *     RtlInitNlsTables @ 0x14064F8E8 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x14065129C (RtlResetRtlTranslations.c)
 *     RtlGetHostNtSystemRoot @ 0x140655BB4 (RtlGetHostNtSystemRoot.c)
 *     RtlpInitializeStackTraceDatabase @ 0x1407833F8 (RtlpInitializeStackTraceDatabase.c)
 *     MmInitSystem @ 0x14089C070 (MmInitSystem.c)
 *     ExInitSystem @ 0x14089E868 (ExInitSystem.c)
 *     DbgkInitialize @ 0x14089F260 (DbgkInitialize.c)
 *     PspInitPhase0 @ 0x1408A0D54 (PspInitPhase0.c)
 *     ObInitSystem @ 0x1408A15F4 (ObInitSystem.c)
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 *     CmInitSystem0 @ 0x1408B8234 (CmInitSystem0.c)
 *     InbvDriverInitialize @ 0x1408BA654 (InbvDriverInitialize.c)
 *     SeInitSystem @ 0x1408BC6C0 (SeInitSystem.c)
 *     PsInitializeQuotaSystem @ 0x1408C1AAC (PsInitializeQuotaSystem.c)
 *     BootApplicationPersistentDataInitialize @ 0x1408C2CF0 (BootApplicationPersistentDataInitialize.c)
 *     WheaInitializeServices @ 0x1408C3020 (WheaInitializeServices.c)
 *     KeInitializeClock @ 0x1408C3688 (KeInitializeClock.c)
 *     ExComputeTickCountMultiplier @ 0x1408C458C (ExComputeTickCountMultiplier.c)
 *     VerifierInitSystem @ 0x1408C5854 (VerifierInitSystem.c)
 *     PpInitSystem @ 0x1408C8AC4 (PpInitSystem.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1408C98F4 (InitializeDynamicPartitioningPolicy.c)
 *     KeNumaInitialize @ 0x1408C9AF4 (KeNumaInitialize.c)
 *     HeadlessInit @ 0x1408CA344 (HeadlessInit.c)
 *     ExBurnMemory @ 0x1408DD03C (ExBurnMemory.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x1408DD0C0 (ExpRevokeBootLoaderPagePrivileges.c)
 *     VslpIumPhase0Initialize @ 0x1408DE2A4 (VslpIumPhase0Initialize.c)
 */

__int64 __fastcall InitBootProcessor(char *StartContext)
{
  ULONG_PTR v1; // r10
  unsigned int v3; // ecx
  unsigned int v4; // edx
  unsigned int *v5; // r8
  ULONG_PTR v6; // rax
  char *v7; // rdi
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rdx
  char *v11; // rax
  char *v12; // rax
  __int64 v13; // rdx
  ULONG_PTR v14; // r9
  char *v15; // r10
  unsigned __int64 v16; // kr00_8
  ULONG_PTR v17; // r8
  ULONG_PTR v18; // rax
  __int64 v19; // r8
  __int64 v20; // r8
  PNLSTABLEINFO v21; // rcx
  NTSTATUS v22; // eax
  UNICODE_STRING *HostNtSystemRoot; // r13
  NTSTATUS v24; // eax
  int v25; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  ULONG v27; // r14d
  PVOID PoolWithTag; // rax
  void *v29; // rsi
  const char *v30; // rcx
  unsigned int v31; // r15d
  char *i; // rsi
  char *v33; // r8
  unsigned int v34; // r9d
  __int64 v35; // rdx
  char v36; // al
  NTSTATUS v37; // eax
  size_t v38; // rdx
  const char *v39; // r8
  NTSTRSAFE_PSTR *v40; // r9
  NTSTATUS Message; // eax
  NTSTATUS v42; // eax
  size_t v43; // rdx
  const char *v44; // r8
  NTSTATUS v45; // eax
  NTSTATUS v46; // eax
  NTSTATUS v47; // eax
  NTSTATUS v48; // eax
  NTSTATUS v49; // eax
  PVOID v50; // rax
  void *v51; // rdi
  PVOID v52; // rax
  __int64 result; // rax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  int dwFlagsa; // [rsp+30h] [rbp-D8h]
  ULONG Size; // [rsp+38h] [rbp-D0h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  size_t pcbRemaining; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Resource; // [rsp+58h] [rbp-B0h] BYREF
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+68h] [rbp-A0h] BYREF
  PMESSAGE_RESOURCE_ENTRY v63; // [rsp+70h] [rbp-98h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+78h] [rbp-90h] BYREF
  __int128 v65; // [rsp+80h] [rbp-88h] BYREF
  __int64 v66; // [rsp+90h] [rbp-78h]
  STRING Name; // [rsp+98h] [rbp-70h] BYREF
  _LDR_RESOURCE_INFO ResourceInfo; // [rsp+A8h] [rbp-60h] BYREF
  CHAR pszDest[256]; // [rsp+C8h] [rbp-40h] BYREF
  CHAR Source[64]; // [rsp+1C8h] [rbp+C0h] BYREF

  v1 = *(unsigned int *)StartContext;
  if ( (_DWORD)v1 != 10 || (v3 = *((_DWORD *)StartContext + 1)) != 0 || (v4 = *((_DWORD *)StartContext + 2), v4 != 352) )
  {
    v4 = *((_DWORD *)StartContext + 2);
    v3 = *((_DWORD *)StartContext + 1);
    v6 = 0LL;
    goto LABEL_131;
  }
  v5 = (unsigned int *)*((_QWORD *)StartContext + 30);
  v6 = *v5;
  if ( (_DWORD)v6 != 3152 || v5[656] != 167772165 )
LABEL_131:
    KeBugCheckEx(0x100u, v1, v3, v4, v6);
  MEMORY[0xFFFFF780000002C4] = v5[637];
  if ( (VslGetNestedPageProtectionFlags() & 6) == 6 )
    ExpRevokeBootLoaderPagePrivileges(StartContext);
  v7 = (char *)*((_QWORD *)StartContext + 27);
  LODWORD(InitializationPhase) = 0;
  if ( v7 )
  {
    strupr(v7);
    v8 = strstr(v7, "PERFMEM");
    if ( v8 )
    {
      v9 = strstr(v8, "=");
      if ( v9 )
      {
        v10 = (__int64)atol(v9 + 1) << 8;
        if ( *(_QWORD *)(*((_QWORD *)StartContext + 30) + 2504LL) )
        {
          BBTPagesToReserve = v10;
        }
        else if ( v10 )
        {
          BBTPagesToReserve = ExBurnMemory(StartContext, v10, 23LL, &BBTMemoryDescriptor);
        }
      }
    }
    v11 = strstr(v7, "BURNMEMORY");
    if ( v11 )
    {
      v12 = strstr(v11, "=");
      if ( v12 )
      {
        v13 = (__int64)atol(v12 + 1) << 8;
        if ( v13 )
          ExBurnMemory(StartContext, v13, 6LL, &BurnMemoryDescriptor);
      }
    }
    if ( strstr(v7, "FORCEGROUPAWARE") )
      KeForceGroupAwareness = 1;
  }
  v14 = 0LL;
  v15 = (char *)*((_QWORD *)StartContext + 4);
  while ( v15 != StartContext + 32 )
  {
    if ( *((_DWORD *)v15 + 4) == 21 )
    {
      v16 = *((_QWORD *)v15 + 4);
      v66 = (v16 * (unsigned __int128)0x1000uLL) >> 64;
      if ( !is_mul_ok(v16, 0x1000uLL) )
        goto LABEL_105;
      if ( InitNlsTableSize + (v16 << 12) < InitNlsTableSize )
      {
        InitNlsTableSize = -1LL;
LABEL_105:
        KeBugCheck(0x31u);
      }
      InitNlsTableSize += v16 << 12;
    }
    v17 = *((_QWORD *)v15 + 3);
    v18 = *((_QWORD *)v15 + 4);
    if ( v17 < v14 )
      KeBugCheckEx(0x31u, (ULONG_PTR)v15, v17, v18, v14);
    v15 = *(char **)v15;
    v14 = v17 + v18;
  }
  v19 = *((_QWORD *)StartContext + 28);
  InitNlsTableBase = *(void **)v19;
  InitAnsiCodePageDataOffset = 0;
  InitOemCodePageDataOffset = *(_DWORD *)(v19 + 8) - *(_DWORD *)v19;
  v20 = (unsigned int)(*(_DWORD *)(v19 + 16) - *(_DWORD *)v19);
  InitUnicodeCaseTableDataOffset = v20;
  RtlInitNlsTables(
    (PUSHORT)InitNlsTableBase,
    (PUSHORT)((char *)InitNlsTableBase + (unsigned int)InitOemCodePageDataOffset),
    (PUSHORT)((char *)InitNlsTableBase + v20),
    (PNLSTABLEINFO)InitNlsTableBase);
  RtlResetRtlTranslations(v21);
  WheaInitializeServices();
  ((void (__fastcall *)(__int64 (__fastcall **)()))off_140398990[0])(HalIommuDispatch);
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, StartContext) )
    KeBugCheck(0x5Cu);
  KeInitializeClock((unsigned int)InitializationPhase);
  PsInitializeQuotaSystem(1LL);
  CmInitSystem0(StartContext);
  if ( !PopEnergyEstimationEnabled )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  if ( !(unsigned __int8)KeInitSystem(0LL) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  ExpTickCountMultiplier = ExComputeTickCountMultiplier();
  MEMORY[0xFFFFF78000000004] = ExpTickCountMultiplier;
  MEMORY[0xFFFFF7800000023C] = 0;
  v22 = RtlStringCbPrintfA(pszDest, 0x100uLL, "C:%s", *((const char **)StartContext + 25));
  if ( v22 < 0 )
    KeBugCheckEx(0x6Eu, v22, 0LL, 0LL, 0LL);
  RtlInitString(&DestinationString, pszDest);
  DestinationString.Buffer[--DestinationString.Length] = 0;
  HostNtSystemRoot = (UNICODE_STRING *)RtlGetHostNtSystemRoot();
  HostNtSystemRoot->Buffer = (wchar_t *)0xFFFFF78000000030LL;
  *(_DWORD *)&HostNtSystemRoot->Length = 34078720;
  v24 = RtlAnsiStringToUnicodeString(HostNtSystemRoot, &DestinationString, 0);
  if ( v24 < 0 )
    KeBugCheckEx(0x6Eu, v24, 1uLL, 0LL, 0LL);
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
  v25 = CmNtSpBuildNumber & 0xFFF;
  word_1403CAACA = 0;
  CmNtSpBuildNumber = v25;
  if ( CmNtCSDReleaseType )
    *(_DWORD *)&CmNtCSDVersion |= v25 << 16;
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
  if ( !MmInitSystem(0LL, (ULONG_PTR)StartContext) )
    KeBugCheck(0x31u);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  KiHwPolicyDriverImageBase = 0LL;
  qword_1408F2658 = PerformanceCounter.QuadPart;
  HalInitializeBios(0LL, StartContext);
  InbvDriverInitialize(0LL, StartContext, 0LL);
  if ( KiBugCodeMessages )
  {
    v27 = Size;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6342694Bu);
    v29 = PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheck(0x7Du);
    memmove(PoolWithTag, KiBugCodeMessages, v27);
    KiBugCodeMessages = v29;
  }
  if ( *((_DWORD *)StartContext + 3) != 1 )
  {
    v30 = (const char *)*((_QWORD *)StartContext + 27);
    if ( v30 )
    {
      if ( strstr(v30, "DEBUG") )
      {
        IopAutoReboot = 0;
        KeBugCheckEx(0x196u, *((unsigned int *)StartContext + 3), 1uLL, 0LL, 0LL);
      }
    }
  }
  v31 = 0;
  for ( i = (char *)*((_QWORD *)StartContext + 2); i != StartContext + 16; ++v31 )
  {
    if ( v31 >= 3 )
    {
      v33 = (char *)*((_QWORD *)i + 10);
      if ( *(_WORD *)v33 == 92 )
      {
        v34 = *((unsigned __int16 *)i + 36) >> 1;
        if ( (unsigned __int64)v34 + 1 <= 0x100 )
        {
          v35 = 0LL;
          do
          {
            v36 = *v33;
            v33 += 2;
            pszDest[v35] = v36;
            v35 = (unsigned int)(v35 + 1);
          }
          while ( (unsigned int)v35 < v34 );
          if ( (unsigned int)v35 >= 0x100uLL )
            _report_rangecheckfailure();
          pszDest[v35] = 0;
LABEL_63:
          RtlInitString(&Name, pszDest);
          DbgLoadImageSymbols(&Name, *((PVOID *)i + 6), 0xFFFFFFFFuLL);
        }
      }
      else if ( ((unsigned __int64)*((unsigned __int16 *)i + 44) >> 1)
              + ((unsigned __int64)HostNtSystemRoot->Length >> 1)
              + 17 <= 0x100 )
      {
        v37 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%ws\\System32\\Drivers\\%wZ", HostNtSystemRoot->Buffer + 2, i + 88);
        if ( v37 < 0 )
          KeBugCheckEx(0x31u, v37, 3uLL, 0LL, 0LL);
        goto LABEL_63;
      }
    }
    i = *(char **)i;
  }
  if ( KdBreakAfterSymbolLoad )
    DbgBreakPointWithStatus(1u);
  dword_1403A1C50 = ((StartContext[264] & 1) != 0) + 1;
  ExpBootEnvironmentInformation = *(_OWORD *)(*((_QWORD *)StartContext + 30) + 152LL);
  qword_1403A1C58 = *(_QWORD *)(*((_QWORD *)StartContext + 30) + 2296LL);
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
      v65 = 0uLL;
      if ( (int)HvlpMapStatisticsPage(1, &v65, &v62) >= 0 )
        HvlpHypervisorStatsPage = MmMapIoSpaceEx(v62, 4096LL, 2u);
    }
    HvlConfigureMemoryZeroingOnReset(1);
    HvlpFlags |= 8u;
    VslpIumPhase0Initialize(StartContext);
    if ( (HvlpRootFlags & 4) != 0 || VslVsmEnabled )
      HvlpInitializeHvCrashdump(
        *(_QWORD *)(*((_QWORD *)StartContext + 30) + 2200LL),
        *(_DWORD *)(*((_QWORD *)StartContext + 30) + 2192LL));
  }
  if ( **((_DWORD **)StartContext + 30) >= 0xC50u )
    HeadlessInit(StartContext);
  BootApplicationPersistentDataInitialize(StartContext);
  MEMORY[0xFFFFF780000002B4] = 2147418111;
  MEMORY[0xFFFFF780000002B8] = 0x80000000;
  if ( *(_DWORD *)&CmNtCSDVersion )
  {
    Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000087u, &v63);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString(&DestinationString, (PCSZ)v63->Text);
    DestinationString.Length -= 2;
    dwFlagsa = (unsigned __int8)CmNtCSDVersion != 0 ? (unsigned __int8)CmNtCSDVersion + 64 : 0;
    LODWORD(MessageResourceEntry) = HIBYTE(CmNtCSDVersion);
    v42 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString, MessageResourceEntry);
    if ( v42 < 0 )
      KeBugCheckEx(0x31u, v42, 5uLL, 0LL, 0LL);
    if ( (*(_DWORD *)&CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      v45 = RtlStringCbCatExA(pszDest, v43, v44, &ppszDestEnd, &pcbRemaining, dwFlagsa);
      if ( v45 < 0 )
        KeBugCheckEx(0x31u, v45, 6uLL, 0LL, 0LL);
      v46 = RtlStringCbPrintfA(ppszDestEnd, pcbRemaining, "v.%u", (unsigned __int16)word_1403CAACA);
      if ( v46 < 0 )
        KeBugCheckEx(0x31u, v46, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v47 = RtlStringCbCopyExA(pszDest, v38, v39, v40, &pcbRemaining, dwFlags);
    if ( v47 < 0 )
      KeBugCheckEx(0x31u, v47, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - pcbRemaining;
  }
  RtlInitAnsiString(&DestinationString, pszDest);
  v48 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, &DestinationString, 1u);
  if ( v48 < 0 )
    KeBugCheckEx(0x31u, v48, 9uLL, 0LL, 0LL);
  v49 = RtlStringCbPrintfA(Source, 0x40uLL, "%u.%u", 6, 3);
  if ( v49 < 0 )
    KeBugCheckEx(0x31u, v49, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, Source) )
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v50 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x800000uLL, 0x63617453u);
    v51 = v50;
    if ( v50 )
    {
      if ( (int)RtlpInitializeStackTraceDatabase((__int64)v50, 0x800000LL, 0x800000uLL) < 0 )
        ExFreePoolWithTag(v51, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v52 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x11620uLL, 0x67626445u);
    RtlpExceptionLog2 = (__int64)v52;
    if ( v52 )
      memset(v52, 0, 0x11620uLL);
  }
  HandleTableListLock = 0LL;
  qword_140862970 = (__int64)&HandleTableListHead;
  HandleTableListHead = (__int64)&HandleTableListHead;
  ExpFreeListCount = HalQueryMaximumProcessorCount();
  if ( !ObInitSystem() )
    KeBugCheck(0x5Eu);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x5Fu);
  if ( !PspInitPhase0(StartContext) )
    KeBugCheck(0x60u);
  if ( (int)DbgkInitialize() < 0 )
    KeBugCheck(0x60u);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x8Fu);
  MEMORY[0xFFFFF7800000026C] = 10;
  MEMORY[0xFFFFF78000000270] = 0;
  MEMORY[0xFFFFF78000000260] = 17134;
  MEMORY[0xFFFFF7800000026A] = KeProcessorArchitecture;
  MEMORY[0xFFFFF7800000002C] = -31132;
  MEMORY[0xFFFFF7800000002E] = -31132;
  result = 0LL;
  MEMORY[0xFFFFF780000003A4] = 0;
  return result;
}
