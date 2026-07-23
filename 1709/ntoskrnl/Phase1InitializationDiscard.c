/*
 * XREFs of Phase1InitializationDiscard @ 0x140830A1C
 * Callers:
 *     Phase1Initialization @ 0x1405B7F90 (Phase1Initialization.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x1400134F0 (RtlTimeToTimeFields.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     RtlInitAnsiString @ 0x1400AE570 (RtlInitAnsiString.c)
 *     RtlStringCbCopyA @ 0x1400B9B10 (RtlStringCbCopyA.c)
 *     RtlTimeFieldsToTime @ 0x14011C830 (RtlTimeFieldsToTime.c)
 *     FsRtlSendModernAppTermination @ 0x1401283C0 (FsRtlSendModernAppTermination.c)
 *     KeGenericCallDpc @ 0x14012F0C0 (KeGenericCallDpc.c)
 *     KiCommitNodeAssignment @ 0x1401394E4 (KiCommitNodeAssignment.c)
 *     MakeGdtReadOnly @ 0x14013959C (MakeGdtReadOnly.c)
 *     RtlStringCbPrintfA @ 0x140139C5C (RtlStringCbPrintfA.c)
 *     InbvDisplayString @ 0x140139F20 (InbvDisplayString.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140146390 (ExInitializeNPagedLookasideListInternal.c)
 *     DisplayBootBitmap @ 0x140156EF4 (DisplayBootBitmap.c)
 *     KeSetAffinityProcess @ 0x1401580FC (KeSetAffinityProcess.c)
 *     PoNotifySystemTimeSet @ 0x14015D400 (PoNotifySystemTimeSet.c)
 *     HvlDebuggerSupportInitialize @ 0x14015D5D8 (HvlDebuggerSupportInitialize.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _strupr @ 0x14015DE20 (_strupr.c)
 *     strncmp @ 0x14015E050 (strncmp.c)
 *     strstr @ 0x14015E110 (strstr.c)
 *     atol @ 0x14015E1C0 (atol.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwCreateSection @ 0x14017E200 (ZwCreateSection.c)
 *     ZwQueryLicenseValue @ 0x1401801E0 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x140180D00 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlStringCbPrintfExA @ 0x1401DFDF8 (RtlStringCbPrintfExA.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ExInitializePagedLookasideList @ 0x1404EC840 (ExInitializePagedLookasideList.c)
 *     MmMapViewInSystemSpace @ 0x1404F6020 (MmMapViewInSystemSpace.c)
 *     RtlFindMessage @ 0x140516150 (RtlFindMessage.c)
 *     ExCreateCallback @ 0x140593970 (ExCreateCallback.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405C1FB4 (ExpRefreshTimeZoneInformation.c)
 *     AlpcpInitSystem @ 0x1405E99C8 (AlpcpInitSystem.c)
 *     RtlInitNlsTables @ 0x1405EA758 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1405ECD74 (RtlResetRtlTranslations.c)
 *     IopInitializeBootLogging @ 0x1406B5264 (IopInitializeBootLogging.c)
 *     KdInitSystem @ 0x140796140 (KdInitSystem.c)
 *     BgGetDisplayContext @ 0x1407CE024 (BgGetDisplayContext.c)
 *     BgDisplayProgressIndicator @ 0x1407CE034 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x1407CE2B8 (BgDisplayBackgroundUpdate.c)
 *     GetBootSystemTime @ 0x140828B94 (GetBootSystemTime.c)
 *     MmInitSystem @ 0x140828DC4 (MmInitSystem.c)
 *     KeStartAllProcessors @ 0x14082E140 (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x14082F088 (KiPerformGroupConfiguration.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     InbvDriverInitialize @ 0x140832D94 (InbvDriverInitialize.c)
 *     EmInitSystem @ 0x14083306C (EmInitSystem.c)
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 *     ExInitSystemPhase2 @ 0x1408390F8 (ExInitSystemPhase2.c)
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 *     DbgkInitialize @ 0x14083EDD4 (DbgkInitialize.c)
 *     IoCreateObjectTypes @ 0x140841088 (IoCreateObjectTypes.c)
 *     CcInitializeCacheManager @ 0x140842C3C (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140843034 (ObInitSystem.c)
 *     VerifierInitSystem @ 0x14084819C (VerifierInitSystem.c)
 *     KeInitializeClock @ 0x140848FF0 (KeInitializeClock.c)
 *     PspInitPhase1 @ 0x14084A9B0 (PspInitPhase1.c)
 *     SeInitSystem @ 0x14084AA38 (SeInitSystem.c)
 *     VmInitSystem @ 0x14084AE3C (VmInitSystem.c)
 *     PfInitializeSuperfetch @ 0x14084EEE8 (PfInitializeSuperfetch.c)
 *     ExInitSystem @ 0x14084F864 (ExInitSystem.c)
 *     SmInitSystem @ 0x14085032C (SmInitSystem.c)
 *     FsRtlInitSystem @ 0x140851150 (FsRtlInitSystem.c)
 *     SeCodeIntegrityInitializePolicy @ 0x1408548A8 (SeCodeIntegrityInitializePolicy.c)
 *     CreateSystemRootLink @ 0x140854AC8 (CreateSystemRootLink.c)
 *     InitSkuSessionParameters @ 0x140855DEC (InitSkuSessionParameters.c)
 *     PpInitSystem @ 0x1408567D4 (PpInitSystem.c)
 *     BcdInitializeBcdSyncMutant @ 0x140857B08 (BcdInitializeBcdSyncMutant.c)
 *     ExInitializeExternalBootSupport @ 0x140857B90 (ExInitializeExternalBootSupport.c)
 *     ExInitializeNls @ 0x140857C6C (ExInitializeNls.c)
 *     MfgInitSystem @ 0x140857D7C (MfgInitSystem.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140858074 (ExInitializeUtcTimeZoneBias.c)
 *     CreateMiniNtBootKey @ 0x1408686C8 (CreateMiniNtBootKey.c)
 */

bool __fastcall Phase1InitializationDiscard(ULONG_PTR BugCheckParameter3)
{
  bool v2; // r12
  char *PoolWithTag; // r13
  struct _KTHREAD *CurrentThread; // rcx
  char *v5; // rcx
  char *v6; // rdi
  char *v7; // rax
  char *v8; // rax
  char v9; // al
  char v10; // cl
  int v11; // eax
  char v12; // cl
  bool v13; // sf
  int v14; // eax
  char v15; // cl
  NTSTATUS Message; // eax
  NTSTRSAFE_PSTR v17; // rbx
  int v18; // r15d
  NTSTATUS v19; // eax
  size_t v20; // rsi
  char *v21; // rbx
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  int v25; // esi
  _OWORD *v26; // rax
  char *v27; // rcx
  __int64 v28; // rdx
  __int128 v29; // xmm1
  int v30; // eax
  char *v31; // rax
  char *v32; // rax
  __int16 v33; // bx
  LONGLONG QuadPart; // rax
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  char *v41; // rax
  char *v42; // rax
  char *v43; // rax
  char *v44; // rax
  const CHAR *Text; // rbx
  ULONG v46; // r9d
  NTSTATUS v47; // eax
  __int64 v48; // r9
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  NTSTATUS v51; // eax
  int inited; // eax
  int v53; // eax
  int SystemRootLink; // eax
  NTSTATUS v55; // eax
  NTSTATUS v56; // eax
  ULONG_PTR v57; // rbx
  NTSTATUS v58; // eax
  char *v59; // rbx
  PNLSTABLEINFO v60; // r9
  PNLSTABLEINFO v61; // rcx
  __int128 *DisplayContext; // rax
  ULONG_PTR v63; // rbx
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // ebx
  char *v68; // rbx
  const char *v69; // rbx
  ULONG v70; // r9d
  int v71; // eax
  int v72; // eax
  int v73; // eax
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
  __int64 v87; // [rsp+90h] [rbp-70h] BYREF
  PMESSAGE_RESOURCE_ENTRY v88; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A0h] [rbp-60h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR ViewSize; // [rsp+B0h] [rbp-50h] BYREF
  PMESSAGE_RESOURCE_ENTRY v92; // [rsp+B8h] [rbp-48h] BYREF
  _STRING v93; // [rsp+C0h] [rbp-40h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v95[4]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v96[4]; // [rsp+100h] [rbp+0h] BYREF
  int v97; // [rsp+104h] [rbp+4h]
  LARGE_INTEGER *p_Time; // [rsp+108h] [rbp+8h]
  __int64 *v99; // [rsp+110h] [rbp+10h]
  char v100; // [rsp+120h] [rbp+20h]
  _BYTE v101[4]; // [rsp+128h] [rbp+28h] BYREF
  int v102; // [rsp+12Ch] [rbp+2Ch]
  LARGE_INTEGER *v103; // [rsp+130h] [rbp+30h]
  __int64 *v104; // [rsp+138h] [rbp+38h]
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
  v5 = *(char **)(BugCheckParameter3 + 216);
  if ( v5 )
    v6 = strupr(v5);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = strstr(v6, " HYPERVISORROOTPROC=");
    if ( v7 )
    {
      v8 = strstr(v7, "=");
      if ( v8 )
        KeRootProcSpecified = atol(v8 + 1);
    }
  }
  byte_14041C2AD &= 0xF9u;
  byte_14041C2AC = 0;
  word_14038A084 = 0;
  KiPerformGroupConfiguration(BugCheckParameter3);
  KiCommitNodeAssignment((__int64)&ExNode0);
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, BugCheckParameter3) )
    KeBugCheck(0x61u);
  KeInitializeClock((unsigned int)InitializationPhase);
  if ( !v6 || !strstr(v6, "NOGUIBOOT") )
  {
    v9 = byte_140389F20;
    byte_140387808 = 0;
    if ( byte_140389F20 )
    {
      v10 = byte_140389F22;
      if ( byte_140389F22 )
      {
        v11 = BgDisplayProgressIndicator(1);
        v12 = byte_140389F21;
        v13 = v11 < 0;
        v9 = byte_140389F20;
        if ( !v13 )
          v12 = 1;
        byte_140389F21 = v12;
        v10 = byte_140389F22;
      }
      if ( v9 && v10 )
      {
        v14 = BgDisplayBackgroundUpdate(1);
        v15 = byte_140389F18;
        if ( v14 >= 0 )
          v15 = 1;
        byte_140389F18 = v15;
      }
    }
    qword_140387810 = (__int64 (__fastcall *)(_QWORD))DisplayFilter;
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
  v17 = PoolWithTag;
  ppszDestEnd = PoolWithTag;
  v18 = Message;
  pcbRemaining = 256LL;
  if ( CmCSDVersionString.Length )
  {
    v19 = RtlStringCbPrintfExA(PoolWithTag, 0xFFuLL, &ppszDestEnd, &pcbRemaining, 0, ": %wZ", &CmCSDVersionString);
    if ( v19 < 0 )
      KeBugCheckEx(0x32u, v19, 7uLL, 0LL, 0LL);
    v17 = ppszDestEnd;
    v20 = pcbRemaining;
  }
  else
  {
    v20 = 255LL;
    pcbRemaining = 255LL;
  }
  *v17 = 0;
  v21 = v17 + 1;
  ppszDestEnd = v21;
  v22 = RtlStringCbPrintfA(pszDest, 0x18uLL, "%u.%u", 10, 0);
  if ( v22 < 0 )
    KeBugCheckEx(0x32u, v22, 7uLL, 1uLL, 0LL);
  if ( v18 < 0 )
  {
    v24 = RtlStringCbCopyA(v21, v20, "MICROSOFT (R) WINDOWS (TM)\n");
    if ( v24 < 0 )
      KeBugCheckEx(0x32u, v24, 7uLL, 3uLL, 0LL);
  }
  else
  {
    LODWORD(MessageResourceEntry) = 16299;
    v23 = RtlStringCbPrintfA(v21, v20, (NTSTRSAFE_PCSTR)v78->Text, pszDest, MessageResourceEntry, PoolWithTag);
    if ( v23 < 0 )
      KeBugCheckEx(0x32u, v23, 7uLL, 2uLL, 0LL);
  }
  InbvDisplayString((__int64)v21);
  v25 = 2;
  v26 = PoolWithTag + 256;
  v27 = PoolWithTag;
  v28 = 2LL;
  do
  {
    *v26 = *(_OWORD *)v27;
    v26[1] = *((_OWORD *)v27 + 1);
    v26[2] = *((_OWORD *)v27 + 2);
    v26[3] = *((_OWORD *)v27 + 3);
    v26[4] = *((_OWORD *)v27 + 4);
    v26[5] = *((_OWORD *)v27 + 5);
    v26[6] = *((_OWORD *)v27 + 6);
    v26 += 8;
    v29 = *((_OWORD *)v27 + 7);
    v27 += 128;
    *(v26 - 1) = v29;
    --v28;
  }
  while ( v28 );
  if ( !(unsigned __int8)PoInitSystem(0LL, BugCheckParameter3) )
    KeBugCheck(0xA0u);
  if ( !ExpRealTimeIsUniversal )
  {
    v30 = ExpLastTimeZoneBias;
    if ( ExpLastTimeZoneBias == -1 )
    {
      v30 = ExpAltTimeZoneBias;
      ExpLastTimeZoneBias = ExpAltTimeZoneBias;
      v76 = 1;
    }
    ExpTimeZoneBias = 600000000LL * v30;
    MEMORY[0xFFFFF7800000025C] = 0;
    MEMORY[0xFFFFF78000000028] = (unsigned __int64)(600000000LL * v30) >> 32;
    MEMORY[0xFFFFF78000000020] = 600000000LL * v30;
  }
  GetBootSystemTime(*(_QWORD *)(BugCheckParameter3 + 240), (__int64 *)&Time);
  if ( v6 )
  {
    v31 = strstr(v6, "YEAR");
    if ( v31 )
    {
      v32 = strstr(v31, "=");
      if ( v32 )
      {
        v33 = atol(v32 + 1);
        RtlTimeToTimeFields(&Time, &TimeFields);
        TimeFields.Year = v33;
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
  PoNotifySystemTimeSet(&Time, &v87, 0);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( ZwQueryLicenseValue(&DestinationString, &Type, &KeRegisteredProcessors, 4u, &ResultDataSize) < 0
    || ResultDataSize != 4
    || Type != 4 )
  {
    KeRegisteredProcessors = 1;
  }
  if ( v6 )
  {
    v35 = strstr(v6, " BOOTPROC=");
    if ( v35 )
    {
      v36 = strstr(v35, "=");
      if ( v36 )
        KeBootprocSpecified = atol(v36 + 1);
    }
    v37 = strstr(v6, " NUMPROC=");
    if ( v37 )
    {
      v38 = strstr(v37, "=");
      if ( v38 )
        KeNumprocSpecified = atol(v38 + 1);
    }
    v39 = strstr(v6, " HYPERVISORNUMPROC=");
    if ( v39 )
    {
      v40 = strstr(v39, "=");
      if ( v40 )
        KeHypervisorNumprocSpecified = atol(v40 + 1);
    }
    v41 = strstr(v6, " HYPERVISORROOTPROCPERNODE=");
    if ( v41 )
    {
      v42 = strstr(v41, "=");
      if ( v42 )
        KeRootProcPerNodeSpecified = atol(v42 + 1);
    }
    v43 = strstr(v6, " HYPERVISORROOTPROCPERCORE=");
    if ( v43 )
    {
      v44 = strstr(v43, "=");
      if ( v44 )
        KeRootProcPerCoreSpecified = atol(v44 + 1);
    }
    if ( strstr(v6, " MAXPROC") )
      KeMaximumProcessors = 1280;
  }
  qword_14087C678 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors();
  qword_14087C680 = KeQueryPerformanceCounter(0LL).QuadPart;
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
  v46 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v46 = 1073741981;
  v47 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v46, &v78);
  v48 = 0LL;
  v49 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v49 )
  {
    v50 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v48 += *v50;
      v50 += 2;
      --v49;
    }
    while ( v49 );
  }
  if ( v47 < 0 )
    v51 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v48 + 255) >> 8,
            &v93);
  else
    v51 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v78->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v48 + 255) >> 8,
            &v93);
  if ( v51 < 0 )
    KeBugCheckEx(0x32u, v51, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)PoolWithTag);
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( !(unsigned __int8)ObInitSystem() )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)ExInitSystem() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  if ( !(unsigned __int8)IoCreateObjectTypes() )
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
  v53 = DbgkInitialize();
  if ( v53 < 0 )
    KeBugCheckEx(0x32u, v53, 0LL, 0LL, 0LL);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x63u);
  PspInitPhase1();
  if ( ExCreateCallback((PCALLBACK_OBJECT *)&CallbackObject, (POBJECT_ATTRIBUTES)&stru_14078DB98, 1u, 1u) < 0 )
    CallbackObject = 0LL;
  SystemRootLink = CreateSystemRootLink(BugCheckParameter3);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  if ( !MmInitSystem(1, BugCheckParameter3) )
    KeBugCheck(0x65u);
  MaximumSize.QuadPart = InitNlsTableSize;
  v55 = ZwCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v55 < 0 )
    KeBugCheckEx(0x32u, v55, 1uLL, 0LL, 0LL);
  v56 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
  InitNlsSectionPointer = Object;
  v57 = v56;
  ZwClose(SectionHandle);
  if ( (v57 & 0x80000000) != 0LL )
    KeBugCheckEx(0x32u, v57, 2uLL, 0LL, 0LL);
  MappedBase = 0LL;
  ViewSize = 0LL;
  v58 = MmMapViewInSystemSpace(InitNlsSectionPointer, &MappedBase, &ViewSize);
  if ( v58 < 0 )
    KeBugCheckEx(0x32u, v58, 3uLL, 0LL, 0LL);
  v59 = (char *)MappedBase;
  memmove(MappedBase, InitNlsTableBase, InitNlsTableSize);
  InitNlsTableBase = v59;
  RtlInitNlsTables(
    (PUSHORT)&v59[InitAnsiCodePageDataOffset],
    (PUSHORT)&v59[InitOemCodePageDataOffset],
    (PUSHORT)&v59[InitUnicodeCaseTableDataOffset],
    v60);
  RtlResetRtlTranslations(v61);
  if ( !(unsigned __int8)CcInitializeCacheManager() )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1(BugCheckParameter3) )
    KeBugCheck(0x67u);
  InitSkuSessionParameters();
  qword_14087C668 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset(v95, 0, sizeof(v95));
  v95[1] = MmMapLockedRestartPages;
  v95[2] = MmUnmapLockedRestartPages;
  v95[3] = KeRemoveEnclavePage;
  LODWORD(v95[0]) = 32;
  if ( VslVsmEnabled )
  {
    VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
    qword_14087C648 = (__int64)VslpRegisterKsrCallback;
  }
  DisplayContext = BgGetDisplayContext();
  v63 = (int)KsrInitSystem(BugCheckParameter3, v95, DisplayContext);
  qword_14087C670 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v63 + 0x80000000) >= 0 && (_DWORD)v63 != -1073741637 )
    KeBugCheckEx(0x32u, v63, 0LL, 1uLL, 0LL);
  v64 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v64 < 0 )
    KeBugCheckEx(0x32u, v64, 8uLL, 0LL, 0LL);
  v65 = MfgInitSystem(BugCheckParameter3);
  if ( v65 < 0 )
    KeBugCheckEx(0x32u, v65, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  SmInitSystem(0LL);
  v66 = VmInitSystem();
  if ( v66 < 0 )
    KeBugCheckEx(0x32u, v66, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2304LL) & 2) == 0 || strstr(v6, "FORCETIMESYNC") )
    ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( (HvlpFlags & 2) != 0 )
    ZwUpdateWnfStateData(&WNF_HVL_CPU_MGMT_PARTITION, 0LL, 0, 0LL, 0LL, 0, 0);
  Buffer = 0;
  FsRtlSendModernAppTermination(&Buffer, 1u, 1);
  ExInitializeUtcTimeZoneBias(&CurrentTime);
  v67 = ExpLastTimeZoneBias;
  ExpRefreshTimeZoneInformation();
  if ( v76 )
  {
    v103 = &Time;
    Time.QuadPart = CurrentTime.QuadPart + ExpTimeZoneBias;
    v104 = &v87;
    v101[0] = 0;
    v105 = 0;
    v102 = 4;
    KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v101);
  }
  else if ( v67 != ExpLastTimeZoneBias )
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
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)&RtlpRangeListEntryLookasideList,
    0LL,
    0LL,
    0,
    0x38uLL,
    0x656C5252u,
    0x10u);
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
    v68 = strstr(v6, "SAFEBOOT:");
  else
    v68 = 0LL;
  if ( v68 )
  {
    v69 = v68 + 9;
    if ( !strncmp(v69, "MINIMAL", 7uLL) )
    {
      v25 = 1;
    }
    else if ( strncmp(v69, "NETWORK", 7uLL) )
    {
      if ( !strncmp(v69, "DSREPAIR", 8uLL) )
      {
        v69 += 8;
        InitSafeBootMode = 3;
      }
      else
      {
        InitSafeBootMode = 0;
      }
      goto LABEL_135;
    }
    InitSafeBootMode = v25;
    v69 += 7;
LABEL_135:
    if ( *v69 )
      v2 = strncmp(v69, "(ALTERNATESHELL)", 0x10uLL) == 0;
    if ( InitSafeBootMode )
    {
      v70 = 0;
      switch ( InitSafeBootMode )
      {
        case 1:
          v70 = 168;
          break;
        case 2:
          v70 = 169;
          break;
        case 3:
          v70 = 170;
          break;
      }
      if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v70, &v92) >= 0 )
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
  v71 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v71 < 0 )
    KeBugCheckEx(0x32u, v71, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  v72 = ExInitializeNls();
  if ( v72 < 0 )
    KeBugCheckEx(0x32u, v72, 7uLL, 0LL, 0LL);
  v73 = ExInitializeExternalBootSupport();
  if ( v73 < 0 )
    KeBugCheckEx(0x32u, v73, 8uLL, 0LL, 0LL);
  if ( !(unsigned __int8)PoInitSystem(1LL, BugCheckParameter3) )
    KeBugCheck(0xA0u);
  return v2;
}
