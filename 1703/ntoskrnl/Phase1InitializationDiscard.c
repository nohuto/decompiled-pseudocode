/*
 * XREFs of Phase1InitializationDiscard @ 0x14080AC64
 * Callers:
 *     Phase1Initialization @ 0x1405A8000 (Phase1Initialization.c)
 * Callees:
 *     FsRtlSendModernAppTermination @ 0x140019CF0 (FsRtlSendModernAppTermination.c)
 *     KeGenericCallDpc @ 0x1400229D0 (KeGenericCallDpc.c)
 *     RtlTimeFieldsToTime @ 0x140026E40 (RtlTimeFieldsToTime.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     RtlStringCbCopyA @ 0x140062428 (RtlStringCbCopyA.c)
 *     RtlInitAnsiString @ 0x1400852C0 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140134F20 (ExInitializeNPagedLookasideListInternal.c)
 *     RtlTimeToTimeFields @ 0x140144710 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x14014B7EC (PoNotifySystemTimeSet.c)
 *     KiCommitNodeAssignment @ 0x140155268 (KiCommitNodeAssignment.c)
 *     RtlStringCbPrintfA @ 0x1401556EC (RtlStringCbPrintfA.c)
 *     InbvDisplayString @ 0x140155990 (InbvDisplayString.c)
 *     DisplayBootBitmap @ 0x140158E58 (DisplayBootBitmap.c)
 *     MakeGdtReadOnly @ 0x140164E58 (MakeGdtReadOnly.c)
 *     KeSetAffinityProcess @ 0x140165A2C (KeSetAffinityProcess.c)
 *     HvlDebuggerSupportInitialize @ 0x1401685F0 (HvlDebuggerSupportInitialize.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _strupr @ 0x1401694E0 (_strupr.c)
 *     strncmp @ 0x140169710 (strncmp.c)
 *     strstr @ 0x1401697D0 (strstr.c)
 *     atol @ 0x140169880 (atol.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateSection @ 0x14017E880 (ZwCreateSection.c)
 *     ZwQueryLicenseValue @ 0x140180800 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x140181320 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x140181870 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlStringCbPrintfExA @ 0x1401DD15C (RtlStringCbPrintfExA.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlFindMessage @ 0x140429F70 (RtlFindMessage.c)
 *     MmMapViewInSystemSpace @ 0x1404B0180 (MmMapViewInSystemSpace.c)
 *     ExCreateCallback @ 0x1404CC7B0 (ExCreateCallback.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExInitializePagedLookasideList @ 0x1405681D0 (ExInitializePagedLookasideList.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A588C (ExpRefreshTimeZoneInformation.c)
 *     AlpcpInitSystem @ 0x1405D0188 (AlpcpInitSystem.c)
 *     RtlInitNlsTables @ 0x1405D09A4 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1405D2938 (RtlResetRtlTranslations.c)
 *     IopInitializeBootLogging @ 0x140689284 (IopInitializeBootLogging.c)
 *     BgGetDisplayContext @ 0x140755024 (BgGetDisplayContext.c)
 *     BgDisplayProgressIndicator @ 0x14075777C (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x140758E08 (BgDisplayBackgroundUpdate.c)
 *     KdInitSystem @ 0x140789150 (KdInitSystem.c)
 *     IoCreateObjectTypes @ 0x1407FCED4 (IoCreateObjectTypes.c)
 *     CcInitializeCacheManager @ 0x1407FE20C (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1407FE634 (ObInitSystem.c)
 *     MmInitSystem @ 0x140803254 (MmInitSystem.c)
 *     EmInitSystem @ 0x140804CF0 (EmInitSystem.c)
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 *     KeStartAllProcessors @ 0x140808F4C (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x1408099B0 (KiPerformGroupConfiguration.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 *     ExInitSystemPhase2 @ 0x140811750 (ExInitSystemPhase2.c)
 *     GetBootSystemTime @ 0x140811A90 (GetBootSystemTime.c)
 *     VerifierInitSystem @ 0x140812904 (VerifierInitSystem.c)
 *     KeInitSystem @ 0x140817034 (KeInitSystem.c)
 *     InbvDriverInitialize @ 0x140818F1C (InbvDriverInitialize.c)
 *     FsRtlInitSystem @ 0x140819368 (FsRtlInitSystem.c)
 *     KeInitializeClock @ 0x140819AAC (KeInitializeClock.c)
 *     PspInitPhase1 @ 0x14081A1E8 (PspInitPhase1.c)
 *     SeInitSystem @ 0x14081A260 (SeInitSystem.c)
 *     PfInitializeSuperfetch @ 0x14081DA88 (PfInitializeSuperfetch.c)
 *     ExInitSystem @ 0x14081EF74 (ExInitSystem.c)
 *     SmInitSystem @ 0x14081FACC (SmInitSystem.c)
 *     DbgkInitialize @ 0x140821008 (DbgkInitialize.c)
 *     CreateSystemRootLink @ 0x140821624 (CreateSystemRootLink.c)
 *     SeCodeIntegrityInitializePolicy @ 0x1408233B0 (SeCodeIntegrityInitializePolicy.c)
 *     InitSkuSessionParameters @ 0x140824A20 (InitSkuSessionParameters.c)
 *     PpInitSystem @ 0x1408253B4 (PpInitSystem.c)
 *     BcdInitializeBcdSyncMutant @ 0x140826428 (BcdInitializeBcdSyncMutant.c)
 *     ExInitializeExternalBootSupport @ 0x14082649C (ExInitializeExternalBootSupport.c)
 *     ExInitializeNls @ 0x14082652C (ExInitializeNls.c)
 *     MfgInitSystem @ 0x140826610 (MfgInitSystem.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1408268D8 (ExInitializeUtcTimeZoneBias.c)
 *     CreateMiniNtBootKey @ 0x1408317D0 (CreateMiniNtBootKey.c)
 */

bool __fastcall Phase1InitializationDiscard(__int64 BugCheckParameter3)
{
  bool v2; // r12
  char *PoolWithTag; // r13
  struct _KTHREAD *CurrentThread; // rcx
  char *v5; // rcx
  char *v6; // rsi
  char v7; // al
  char v8; // cl
  int v9; // eax
  char v10; // cl
  bool v11; // sf
  int v12; // eax
  char v13; // cl
  NTSTATUS Message; // eax
  NTSTRSAFE_PSTR v15; // rbx
  int v16; // r15d
  size_t v17; // rdi
  char *v18; // rbx
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  int v21; // edi
  _OWORD *v22; // rax
  char *v23; // rcx
  __int64 v24; // rdx
  __int128 v25; // xmm1
  int v26; // eax
  char *v27; // rax
  LONGLONG QuadPart; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  const CHAR *Text; // rbx
  ULONG v35; // r9d
  NTSTATUS v36; // eax
  __int64 v37; // r9
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  NTSTATUS v40; // eax
  int inited; // eax
  int v42; // eax
  int SystemRootLink; // eax
  NTSTATUS v44; // eax
  NTSTATUS v45; // eax
  ULONG_PTR v46; // rbx
  NTSTATUS v47; // eax
  char *v48; // rbx
  PNLSTABLEINFO v49; // r9
  PNLSTABLEINFO v50; // rcx
  __int128 *DisplayContext; // rax
  ULONG_PTR v52; // rbx
  int v53; // eax
  int v54; // eax
  int v55; // ebx
  char *v56; // rbx
  int v57; // eax
  int v58; // eax
  int v59; // eax
  NTSTATUS v61; // eax
  NTSTATUS v62; // eax
  char *v63; // rax
  __int16 v64; // bx
  char *v65; // rax
  char *v66; // rax
  char *v67; // rax
  char *v68; // rax
  char *v69; // rax
  const char *v70; // rbx
  int v71; // eax
  ULONG v72; // r9d
  int v73; // edi
  int v74; // edi
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+20h] [rbp-E0h]
  char v76; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER Time; // [rsp+48h] [rbp-B8h] BYREF
  PMESSAGE_RESOURCE_ENTRY v78; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultDataSize; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Type; // [rsp+5Ch] [rbp-A4h] BYREF
  int Buffer; // [rsp+60h] [rbp-A0h] BYREF
  size_t pcbRemaining; // [rsp+68h] [rbp-98h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER CurrentTime; // [rsp+78h] [rbp-88h] BYREF
  HANDLE SectionHandle; // [rsp+80h] [rbp-80h] BYREF
  PVOID MappedBase; // [rsp+88h] [rbp-78h] BYREF
  char v87; // [rsp+90h] [rbp-70h] BYREF
  PMESSAGE_RESOURCE_ENTRY v88; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A0h] [rbp-60h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR ViewSize; // [rsp+B0h] [rbp-50h] BYREF
  PMESSAGE_RESOURCE_ENTRY v92; // [rsp+B8h] [rbp-48h] BYREF
  _STRING v93; // [rsp+C0h] [rbp-40h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v95[4]; // [rsp+E0h] [rbp-20h] BYREF
  char v96[4]; // [rsp+100h] [rbp+0h] BYREF
  int v97; // [rsp+104h] [rbp+4h]
  LARGE_INTEGER *p_Time; // [rsp+108h] [rbp+8h]
  char *v99; // [rsp+110h] [rbp+10h]
  char v100; // [rsp+120h] [rbp+20h]
  char v101[4]; // [rsp+128h] [rbp+28h] BYREF
  int v102; // [rsp+12Ch] [rbp+2Ch]
  LARGE_INTEGER *v103; // [rsp+130h] [rbp+30h]
  char *v104; // [rsp+138h] [rbp+38h]
  char v105; // [rsp+148h] [rbp+48h]
  UNICODE_STRING DestinationString; // [rsp+150h] [rbp+50h] BYREF
  char pszDest[24]; // [rsp+160h] [rbp+60h] BYREF

  v2 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x200uLL, 0x74696E49u);
  if ( !PoolWithTag )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  LODWORD(InitializationPhase) = 1;
  v76 = 0;
  KeSetPriorityThread(CurrentThread, 31);
  byte_1403FB2AD &= 0xF9u;
  byte_1403FB2AC = 0;
  word_14036E620 = 0;
  KiPerformGroupConfiguration(BugCheckParameter3);
  KiCommitNodeAssignment((__int64)&ExNode0);
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, BugCheckParameter3) )
    KeBugCheck(0x61u);
  KeInitializeClock((unsigned int)InitializationPhase);
  v5 = *(char **)(BugCheckParameter3 + 216);
  if ( v5 )
    v6 = strupr(v5);
  else
    v6 = 0LL;
  if ( !v6 || !strstr(v6, "NOGUIBOOT") )
  {
    v7 = byte_14036E49C;
    byte_14036B898 = 0;
    if ( byte_14036E49C )
    {
      v8 = byte_14036E49D;
      if ( byte_14036E49D )
      {
        v9 = BgDisplayProgressIndicator(1);
        v10 = byte_14036E351;
        v11 = v9 < 0;
        v7 = byte_14036E49C;
        if ( !v11 )
          v10 = 1;
        byte_14036E351 = v10;
        v8 = byte_14036E49D;
      }
      if ( v7 && v8 )
      {
        v12 = BgDisplayBackgroundUpdate(1);
        v13 = byte_14036E350;
        if ( v12 >= 0 )
          v13 = 1;
        byte_14036E350 = v13;
      }
    }
    qword_14036B8A0 = (__int64 (__fastcall *)(_QWORD))DisplayFilter;
    InbvDriverInitialize(1LL, BugCheckParameter3, 7LL);
    DisplayBootBitmap(0);
  }
  if ( v6 && strstr(v6, "MININT") )
  {
    InitIsWinPEMode = 1;
    if ( strstr(v6, "INRAM") )
      InitWinPEModeType |= 0x80000000;
    else
      InitWinPEModeType |= 1u;
  }
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v78);
  v15 = PoolWithTag;
  ppszDestEnd = PoolWithTag;
  v16 = Message;
  pcbRemaining = 256LL;
  if ( CmCSDVersionString.Length )
  {
    v61 = RtlStringCbPrintfExA(PoolWithTag, 0xFFuLL, &ppszDestEnd, &pcbRemaining, 0, ": %wZ", &CmCSDVersionString);
    if ( v61 < 0 )
      KeBugCheckEx(0x32u, v61, 7uLL, 0LL, 0LL);
    v15 = ppszDestEnd;
    v17 = pcbRemaining;
  }
  else
  {
    v17 = 255LL;
    pcbRemaining = 255LL;
  }
  *v15 = 0;
  v18 = v15 + 1;
  ppszDestEnd = v18;
  v19 = RtlStringCbPrintfA(pszDest, 0x18uLL, "%u.%u", 10, 0);
  if ( v19 < 0 )
    KeBugCheckEx(0x32u, v19, 7uLL, 1uLL, 0LL);
  if ( v16 < 0 )
  {
    v62 = RtlStringCbCopyA(v18, v17, "MICROSOFT (R) WINDOWS (TM)\n");
    if ( v62 < 0 )
      KeBugCheckEx(0x32u, v62, 7uLL, 3uLL, 0LL);
  }
  else
  {
    LODWORD(MessageResourceEntry) = 15063;
    v20 = RtlStringCbPrintfA(v18, v17, (NTSTRSAFE_PCSTR)v78->Text, pszDest, MessageResourceEntry, PoolWithTag);
    if ( v20 < 0 )
      KeBugCheckEx(0x32u, v20, 7uLL, 2uLL, 0LL);
  }
  InbvDisplayString((__int64)v18);
  v21 = 2;
  v22 = PoolWithTag + 256;
  v23 = PoolWithTag;
  v24 = 2LL;
  do
  {
    *v22 = *(_OWORD *)v23;
    v22[1] = *((_OWORD *)v23 + 1);
    v22[2] = *((_OWORD *)v23 + 2);
    v22[3] = *((_OWORD *)v23 + 3);
    v22[4] = *((_OWORD *)v23 + 4);
    v22[5] = *((_OWORD *)v23 + 5);
    v22[6] = *((_OWORD *)v23 + 6);
    v22 += 8;
    v25 = *((_OWORD *)v23 + 7);
    v23 += 128;
    *(v22 - 1) = v25;
    --v24;
  }
  while ( v24 );
  if ( !(unsigned __int8)PoInitSystem(0LL, BugCheckParameter3) )
    KeBugCheck(0xA0u);
  if ( !ExpRealTimeIsUniversal )
  {
    v26 = ExpLastTimeZoneBias;
    if ( ExpLastTimeZoneBias == -1 )
    {
      v26 = ExpAltTimeZoneBias;
      ExpLastTimeZoneBias = ExpAltTimeZoneBias;
      v76 = 1;
    }
    ExpTimeZoneBias = 600000000LL * v26;
    MEMORY[0xFFFFF7800000025C] = 0;
    MEMORY[0xFFFFF78000000028] = (unsigned __int64)(600000000LL * v26) >> 32;
    MEMORY[0xFFFFF78000000020] = 600000000LL * v26;
  }
  GetBootSystemTime(*(_QWORD *)(BugCheckParameter3 + 240), &Time);
  if ( v6 )
  {
    v27 = strstr(v6, "YEAR");
    if ( v27 )
    {
      v63 = strstr(v27, "=");
      if ( v63 )
      {
        v64 = atol(v63 + 1);
        RtlTimeToTimeFields(&Time, &TimeFields);
        TimeFields.Year = v64;
        RtlTimeFieldsToTime(&TimeFields, &Time);
      }
    }
  }
  QuadPart = Time.QuadPart;
  if ( !ExpRealTimeIsUniversal )
    QuadPart = Time.QuadPart - ExpTimeZoneBias;
  CurrentTime.QuadPart = QuadPart;
  v96[0] = 0;
  p_Time = &Time;
  v100 = 0;
  v99 = &v87;
  v97 = 4;
  KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v96);
  PoNotifySystemTimeSet();
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( ZwQueryLicenseValue(&DestinationString, &Type, &KeRegisteredProcessors, 4u, &ResultDataSize) < 0
    || ResultDataSize != 4
    || Type != 4 )
  {
    KeRegisteredProcessors = 1;
  }
  if ( v6 )
  {
    v29 = strstr(v6, " BOOTPROC=");
    if ( v29 )
    {
      v65 = strstr(v29, "=");
      if ( v65 )
        KeBootprocSpecified = atol(v65 + 1);
    }
    v30 = strstr(v6, " NUMPROC=");
    if ( v30 )
    {
      v66 = strstr(v30, "=");
      if ( v66 )
        KeNumprocSpecified = atol(v66 + 1);
    }
    v31 = strstr(v6, " HYPERVISORNUMPROC=");
    if ( v31 )
    {
      v67 = strstr(v31, "=");
      if ( v67 )
        KeHypervisorNumprocSpecified = atol(v67 + 1);
    }
    v32 = strstr(v6, " HYPERVISORROOTPROC=");
    if ( v32 )
    {
      v68 = strstr(v32, "=");
      if ( v68 )
        KeRootProcSpecified = atol(v68 + 1);
    }
    v33 = strstr(v6, " HYPERVISORROOTPROCPERNODE=");
    if ( v33 )
    {
      v69 = strstr(v33, "=");
      if ( v69 )
        KeRootProcPerNodeSpecified = atol(v69 + 1);
    }
    if ( strstr(v6, " MAXPROC") )
      KeMaximumProcessors = 640;
  }
  qword_1407C55E8 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors();
  qword_1407C55F0 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (unsigned __int16 *)KeActiveProcessors);
  MakeGdtReadOnly();
  if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v88) < 0 )
    Text = "MultiProcessor Kernel\r\n";
  else
    Text = (const CHAR *)v88->Text;
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v93, Text);
  if ( v93.Length >= 2u )
    v93.Length -= 2;
  v35 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v35 = 1073741981;
  v36 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v35, &v78);
  v37 = 0LL;
  v38 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v38 )
  {
    v39 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v37 += *v39;
      v39 += 2;
      --v38;
    }
    while ( v38 );
  }
  if ( v36 < 0 )
    v40 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v37 + 255) >> 8,
            &v93);
  else
    v40 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v78->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v37 + 255) >> 8,
            &v93);
  if ( v40 < 0 )
    KeBugCheckEx(0x32u, v40, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)PoolWithTag);
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( !ObInitSystem() )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)ExInitSystem() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  if ( !IoCreateObjectTypes() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 4uLL, 0LL);
  if ( !(unsigned __int8)KeInitSystem(1LL) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  if ( !KdInitSystem(InitializationPhase, 0LL) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem(
             &TmResourceManagerObjectType,
             &TmEnlistmentObjectType,
             &TmTransactionManagerObjectType,
             &TmTransactionObjectType);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v42 = DbgkInitialize();
  if ( v42 < 0 )
    KeBugCheckEx(0x32u, v42, 0LL, 0LL, 0LL);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x63u);
  PspInitPhase1();
  if ( ExCreateCallback((PCALLBACK_OBJECT *)&CallbackObject, (POBJECT_ATTRIBUTES)&stru_14074B328, 1u, 1u) < 0 )
    CallbackObject = 0LL;
  SystemRootLink = CreateSystemRootLink(BugCheckParameter3);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  if ( !MmInitSystem(1, BugCheckParameter3) )
    KeBugCheck(0x65u);
  MaximumSize.QuadPart = InitNlsTableSize;
  v44 = ZwCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v44 < 0 )
    KeBugCheckEx(0x32u, v44, 1uLL, 0LL, 0LL);
  v45 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
  InitNlsSectionPointer = Object;
  v46 = v45;
  ZwClose(SectionHandle);
  if ( (v46 & 0x80000000) != 0LL )
    KeBugCheckEx(0x32u, v46, 2uLL, 0LL, 0LL);
  MappedBase = 0LL;
  ViewSize = 0LL;
  v47 = MmMapViewInSystemSpace(InitNlsSectionPointer, &MappedBase, &ViewSize);
  if ( v47 < 0 )
    KeBugCheckEx(0x32u, v47, 3uLL, 0LL, 0LL);
  v48 = (char *)MappedBase;
  memmove(MappedBase, InitNlsTableBase, InitNlsTableSize);
  InitNlsTableBase = v48;
  RtlInitNlsTables(
    (PUSHORT)&v48[InitAnsiCodePageDataOffset],
    (PUSHORT)&v48[InitOemCodePageDataOffset],
    (PUSHORT)&v48[InitUnicodeCaseTableDataOffset],
    v49);
  RtlResetRtlTranslations(v50);
  if ( !CcInitializeCacheManager() )
    KeBugCheck(0x66u);
  if ( !CmInitSystem1(BugCheckParameter3) )
    KeBugCheck(0x67u);
  InitSkuSessionParameters();
  qword_1407C55D8 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset(v95, 0, sizeof(v95));
  v95[1] = MmMapLockedRestartPages;
  v95[2] = MmUnmapLockedRestartPages;
  v95[3] = KeRemoveEnclavePage;
  LODWORD(v95[0]) = 32;
  if ( VslVsmEnabled )
  {
    VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
    qword_1407C55B8 = (__int64)VslpRegisterKsrCallback;
  }
  DisplayContext = BgGetDisplayContext();
  v52 = (int)KsrInitSystem(BugCheckParameter3, v95, DisplayContext);
  qword_1407C55E0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v52 + 0x80000000) >= 0 && (_DWORD)v52 != -1073741637 )
    KeBugCheckEx(0x32u, v52, 0LL, 1uLL, 0LL);
  v53 = EmInitSystem(0, BugCheckParameter3);
  if ( v53 < 0 )
    KeBugCheckEx(0x32u, v53, 8uLL, 0LL, 0LL);
  v54 = MfgInitSystem(BugCheckParameter3);
  if ( v54 < 0 )
    KeBugCheckEx(0x32u, v54, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  SmInitSystem(0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2304LL) & 2) == 0 || strstr(v6, "FORCETIMESYNC") )
    ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( (HvlpFlags & 2) != 0 )
    ZwUpdateWnfStateData(&WNF_HVL_CPU_MGMT_PARTITION, 0LL, 0, 0LL, 0LL, 0, 0);
  Buffer = 0;
  FsRtlSendModernAppTermination(&Buffer, 1u, 1);
  ExInitializeUtcTimeZoneBias(&CurrentTime);
  v55 = ExpLastTimeZoneBias;
  ExpRefreshTimeZoneInformation();
  if ( v76 )
  {
    v103 = &Time;
    Time.QuadPart = ExpTimeZoneBias + CurrentTime.QuadPart;
    v104 = &v87;
    v101[0] = 0;
    v105 = 0;
    v102 = 4;
    KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v101);
  }
  else if ( v55 != ExpLastTimeZoneBias )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem() )
    KeBugCheck(0x68u);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&RtlLznt1DecompressChunkLookaside,
    0LL,
    0LL,
    512,
    88,
    1667529324,
    0,
    0);
  ExInitializePagedLookasideList(&RtlpRangeListEntryLookasideList, 0LL, 0LL, 0, 0x38uLL, 0x656C5252u, 0x10u);
  HvlDebuggerSupportInitialize(BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, &KdpContext);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  LpcLegacyMaxMessageLength = 648;
  if ( (int)AlpcpInitSystem() < 0 )
    KeBugCheck(0x6Au);
  LpcPortObjectType = AlpcPortObjectType;
  LpcWaitablePortObjectType = (__int64)AlpcPortObjectType;
  if ( v6 )
    v56 = strstr(v6, "SAFEBOOT:");
  else
    v56 = 0LL;
  if ( v56 )
  {
    v70 = v56 + 9;
    if ( !strncmp(v70, "MINIMAL", 7uLL) )
    {
      v21 = 1;
    }
    else if ( strncmp(v70, "NETWORK", 7uLL) )
    {
      if ( !strncmp(v70, "DSREPAIR", 8uLL) )
      {
        v21 = 3;
        v70 += 8;
        InitSafeBootMode = 3;
      }
      else
      {
        v21 = 0;
        InitSafeBootMode = 0;
      }
      goto LABEL_166;
    }
    InitSafeBootMode = v21;
    v70 += 7;
LABEL_166:
    if ( *v70 )
    {
      v71 = strncmp(v70, "(ALTERNATESHELL)", 0x10uLL);
      v21 = InitSafeBootMode;
      v2 = v71 == 0;
    }
    if ( v21 )
    {
      v72 = 0;
      v73 = v21 - 1;
      if ( v73 )
      {
        v74 = v73 - 1;
        if ( v74 )
        {
          if ( v74 == 1 )
            v72 = 170;
        }
        else
        {
          v72 = 169;
        }
      }
      else
      {
        v72 = 168;
      }
      if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v72, &v92) >= 0 )
        InbvDisplayString((__int64)v92->Text);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 240) + 116LL) & 0x800) != 0 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v78) >= 0 )
      InbvDisplayString((__int64)v78->Text);
    IopInitializeBootLogging(BugCheckParameter3, (__int64)(PoolWithTag + 256));
  }
  ExInitSystemPhase2();
  if ( InitIsWinPEMode )
    CreateMiniNtBootKey();
  v57 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v57 < 0 )
    KeBugCheckEx(0x32u, v57, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  v58 = ExInitializeNls();
  if ( v58 < 0 )
    KeBugCheckEx(0x32u, v58, 7uLL, 0LL, 0LL);
  v59 = ExInitializeExternalBootSupport();
  if ( v59 < 0 )
    KeBugCheckEx(0x32u, v59, 8uLL, 0LL, 0LL);
  if ( !(unsigned __int8)PoInitSystem(1LL, BugCheckParameter3) )
    KeBugCheck(0xA0u);
  return v2;
}
