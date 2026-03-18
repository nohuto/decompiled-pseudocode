/*
 * XREFs of Phase1InitializationDiscard @ 0x1408A6E00
 * Callers:
 *     Phase1Initialization @ 0x140627590 (Phase1Initialization.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140004B40 (KeGenericCallDpc.c)
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     RtlStringCbCopyA @ 0x14008BC44 (RtlStringCbCopyA.c)
 *     RtlTimeFieldsToTime @ 0x1400C0BA0 (RtlTimeFieldsToTime.c)
 *     FsRtlSendModernAppTermination @ 0x1400CC890 (FsRtlSendModernAppTermination.c)
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlTimeToTimeFields @ 0x1401457D0 (RtlTimeToTimeFields.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14014B690 (ExInitializeNPagedLookasideListInternal.c)
 *     PoNotifySystemTimeSet @ 0x14016E698 (PoNotifySystemTimeSet.c)
 *     RtlStringCbPrintfA @ 0x140171A78 (RtlStringCbPrintfA.c)
 *     InbvDisplayString @ 0x140171F30 (InbvDisplayString.c)
 *     MakeGdtReadOnly @ 0x140175E58 (MakeGdtReadOnly.c)
 *     KiCommitNodeAssignment @ 0x1401766D4 (KiCommitNodeAssignment.c)
 *     DisplayBootBitmap @ 0x140183118 (DisplayBootBitmap.c)
 *     KeSetAffinityProcess @ 0x140183BE0 (KeSetAffinityProcess.c)
 *     HvlDebuggerSupportInitialize @ 0x140187348 (HvlDebuggerSupportInitialize.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _strupr @ 0x140187B20 (_strupr.c)
 *     strncmp @ 0x140187D50 (strncmp.c)
 *     strstr @ 0x140187E10 (strstr.c)
 *     atol @ 0x140187EC0 (atol.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateSection @ 0x1401A7E00 (ZwCreateSection.c)
 *     ZwQueryLicenseValue @ 0x1401A9E20 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x1401AA940 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x1401AAEB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlStringCbPrintfExA @ 0x14021F608 (RtlStringCbPrintfExA.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MmMapViewInSystemSpace @ 0x14054B620 (MmMapViewInSystemSpace.c)
 *     ExCreateCallback @ 0x140557360 (ExCreateCallback.c)
 *     ExInitializePagedLookasideList @ 0x140576040 (ExInitializePagedLookasideList.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     RtlFindMessage @ 0x1405BB760 (RtlFindMessage.c)
 *     ExpRefreshTimeZoneInformation @ 0x14062FA98 (ExpRefreshTimeZoneInformation.c)
 *     AlpcpInitSystem @ 0x14064F384 (AlpcpInitSystem.c)
 *     RtlInitNlsTables @ 0x14064F8E8 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x14065129C (RtlResetRtlTranslations.c)
 *     IopInitializeBootLogging @ 0x140719F14 (IopInitializeBootLogging.c)
 *     KdInitSystem @ 0x140803140 (KdInitSystem.c)
 *     BgGetDisplayContext @ 0x14083B024 (BgGetDisplayContext.c)
 *     BgDisplayProgressIndicator @ 0x14083D014 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x14083D8D4 (BgDisplayBackgroundUpdate.c)
 *     MmInitSystem @ 0x14089C070 (MmInitSystem.c)
 *     ExInitSystem @ 0x14089E868 (ExInitSystem.c)
 *     DbgkInitialize @ 0x14089F260 (DbgkInitialize.c)
 *     CcInitializeCacheManager @ 0x1408A0410 (CcInitializeCacheManager.c)
 *     IoCreateObjectTypes @ 0x1408A0A1C (IoCreateObjectTypes.c)
 *     ObInitSystem @ 0x1408A15F4 (ObInitSystem.c)
 *     GetBootSystemTime @ 0x1408A5360 (GetBootSystemTime.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     EmInitSystem @ 0x1408A92A4 (EmInitSystem.c)
 *     KeStartAllProcessors @ 0x1408AB748 (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x1408AC1C8 (KiPerformGroupConfiguration.c)
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 *     InbvDriverInitialize @ 0x1408BA654 (InbvDriverInitialize.c)
 *     ExInitSystemPhase2 @ 0x1408BAC8C (ExInitSystemPhase2.c)
 *     PspInitPhase1 @ 0x1408BC630 (PspInitPhase1.c)
 *     SeInitSystem @ 0x1408BC6C0 (SeInitSystem.c)
 *     VmInitSystem @ 0x1408BCAA4 (VmInitSystem.c)
 *     PfInitializeSuperfetch @ 0x1408C032C (PfInitializeSuperfetch.c)
 *     SmInitSystem @ 0x1408C16B8 (SmInitSystem.c)
 *     FsRtlInitSystem @ 0x1408C1C40 (FsRtlInitSystem.c)
 *     KeInitializeClock @ 0x1408C3688 (KeInitializeClock.c)
 *     CreateSystemRootLink @ 0x1408C5094 (CreateSystemRootLink.c)
 *     VerifierInitSystem @ 0x1408C5854 (VerifierInitSystem.c)
 *     SeCodeIntegrityInitializePolicy @ 0x1408C6BB0 (SeCodeIntegrityInitializePolicy.c)
 *     InitSkuSessionParameters @ 0x1408C8134 (InitSkuSessionParameters.c)
 *     PpInitSystem @ 0x1408C8AC4 (PpInitSystem.c)
 *     BcdInitializeBcdSyncMutant @ 0x1408C9CD4 (BcdInitializeBcdSyncMutant.c)
 *     ExInitializeExternalBootSupport @ 0x1408C9D48 (ExInitializeExternalBootSupport.c)
 *     ExInitializeNls @ 0x1408C9DD8 (ExInitializeNls.c)
 *     MfgInitSystem @ 0x1408C9EE8 (MfgInitSystem.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1408CA254 (ExInitializeUtcTimeZoneBias.c)
 *     CreateMiniNtBootKey @ 0x1408DCEA0 (CreateMiniNtBootKey.c)
 */

char __fastcall Phase1InitializationDiscard(ULONG_PTR BugCheckParameter3)
{
  char *PoolWithTag; // r13
  struct _KTHREAD *CurrentThread; // rcx
  char v4; // r12
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
  __int64 v45; // rcx
  const char *Text; // rbx
  ULONG v47; // r9d
  NTSTATUS v48; // eax
  __int64 v49; // r9
  __int64 v50; // rdx
  _QWORD *v51; // rcx
  NTSTATUS v52; // eax
  int inited; // eax
  int v54; // eax
  int SystemRootLink; // eax
  NTSTATUS v56; // eax
  NTSTATUS v57; // eax
  ULONG_PTR v58; // rbx
  NTSTATUS v59; // eax
  char *v60; // rbx
  PNLSTABLEINFO v61; // r9
  PNLSTABLEINFO v62; // rcx
  __int128 *DisplayContext; // rax
  ULONG_PTR v64; // rbx
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // ebx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  char *v72; // rbx
  char *v73; // r12
  __int64 v74; // rdi
  const char *v75; // rbx
  int v76; // eax
  int v77; // eax
  int v78; // ecx
  ULONG v79; // r9d
  int v80; // eax
  int v81; // eax
  int v82; // eax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+28h] [rbp-E0h]
  LARGE_INTEGER Time; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v86; // [rsp+50h] [rbp-B8h]
  PMESSAGE_RESOURCE_ENTRY v87; // [rsp+58h] [rbp-B0h] BYREF
  int v88; // [rsp+60h] [rbp-A8h]
  int v89; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v90; // [rsp+68h] [rbp-A0h] BYREF
  size_t pcbRemaining; // [rsp+70h] [rbp-98h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER CurrentTime; // [rsp+80h] [rbp-88h] BYREF
  HANDLE SectionHandle; // [rsp+88h] [rbp-80h] BYREF
  PVOID MappedBase; // [rsp+90h] [rbp-78h] BYREF
  __int64 v96; // [rsp+98h] [rbp-70h] BYREF
  PMESSAGE_RESOURCE_ENTRY v97; // [rsp+A0h] [rbp-68h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp-60h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-58h] BYREF
  ULONG_PTR ViewSize; // [rsp+B8h] [rbp-50h] BYREF
  PMESSAGE_RESOURCE_ENTRY v101; // [rsp+C0h] [rbp-48h] BYREF
  STRING v102; // [rsp+C8h] [rbp-40h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v104[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v105; // [rsp+ECh] [rbp-1Ch]
  LARGE_INTEGER *p_Time; // [rsp+F0h] [rbp-18h]
  __int64 *v107; // [rsp+F8h] [rbp-10h]
  char v108; // [rsp+108h] [rbp+0h]
  _BYTE v109[4]; // [rsp+110h] [rbp+8h] BYREF
  int v110; // [rsp+114h] [rbp+Ch]
  LARGE_INTEGER *v111; // [rsp+118h] [rbp+10h]
  __int64 *v112; // [rsp+120h] [rbp+18h]
  char v113; // [rsp+130h] [rbp+28h]
  UNICODE_STRING DestinationString; // [rsp+138h] [rbp+30h] BYREF
  _OWORD v115[4]; // [rsp+148h] [rbp+40h] BYREF
  char pszDest[24]; // [rsp+188h] [rbp+80h] BYREF

  LOBYTE(v86) = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x200uLL, 0x74696E49u);
  if ( !PoolWithTag )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  LODWORD(InitializationPhase) = 1;
  v4 = 0;
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
  byte_1404672ED &= 0xF9u;
  byte_1404672EC = 0;
  word_1403CDEC4 = 0;
  KiPerformGroupConfiguration(BugCheckParameter3);
  KiCommitNodeAssignment((__int64)&ExNode0);
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, BugCheckParameter3) )
    KeBugCheck(0x61u);
  KeInitializeClock((unsigned int)InitializationPhase);
  if ( !v6 || !strstr(v6, "NOGUIBOOT") )
  {
    v9 = byte_1403CDD5C;
    byte_1403CAD30 = 0;
    if ( byte_1403CDD5C )
    {
      v10 = byte_1403CDD5D;
      if ( byte_1403CDD5D )
      {
        v11 = BgDisplayProgressIndicator(1);
        v12 = byte_1403CDC2D;
        v13 = v11 < 0;
        v9 = byte_1403CDD5C;
        if ( !v13 )
          v12 = 1;
        byte_1403CDC2D = v12;
        v10 = byte_1403CDD5D;
      }
      if ( v9 && v10 )
      {
        v14 = BgDisplayBackgroundUpdate(1);
        v15 = byte_1403CDC2C;
        if ( v14 >= 0 )
          v15 = 1;
        byte_1403CDC2C = v15;
      }
    }
    qword_1403CAD38 = (__int64 (__fastcall *)(_QWORD))DisplayFilter;
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
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v87);
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
    LODWORD(MessageResourceEntry) = 17134;
    v23 = RtlStringCbPrintfA(v21, v20, (NTSTRSAFE_PCSTR)v87->Text, pszDest, MessageResourceEntry, PoolWithTag);
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
      v4 = 1;
      ExpLastTimeZoneBias = ExpAltTimeZoneBias;
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
  v104[0] = 0;
  p_Time = &Time;
  v108 = 0;
  v107 = &v96;
  v105 = 4;
  KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v104);
  PoNotifySystemTimeSet((__int64 *)&Time, &v96);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( (int)ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v89, (__int64)&KeRegisteredProcessors) < 0
    || v88 != 4
    || v89 != 4 )
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
  qword_1408F2678 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors(v45);
  qword_1408F2680 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (unsigned __int16 *)KeActiveProcessors);
  MakeGdtReadOnly();
  if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v97) < 0 )
    Text = "MultiProcessor Kernel\r\n";
  else
    Text = (const char *)v97->Text;
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v102, Text);
  if ( v102.Length >= 2u )
    v102.Length -= 2;
  v47 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v47 = 1073741981;
  v48 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v47, &v87);
  v49 = 0LL;
  v50 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v50 )
  {
    v51 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v49 += *v51;
      v51 += 2;
      --v50;
    }
    while ( v50 );
  }
  if ( v48 < 0 )
    v52 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v49 + 255) >> 8,
            &v102);
  else
    v52 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v87->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v49 + 255) >> 8,
            &v102);
  if ( v52 < 0 )
    KeBugCheckEx(0x32u, v52, 7uLL, 4uLL, 0LL);
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
  v54 = DbgkInitialize();
  if ( v54 < 0 )
    KeBugCheckEx(0x32u, v54, 0LL, 0LL, 0LL);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x63u);
  PspInitPhase1();
  if ( ExCreateCallback((PCALLBACK_OBJECT *)&CallbackObject, (POBJECT_ATTRIBUTES)&stru_1407FA150, 1u, 1u) < 0 )
    CallbackObject = 0LL;
  SystemRootLink = CreateSystemRootLink(BugCheckParameter3);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  if ( !MmInitSystem(1LL, BugCheckParameter3) )
    KeBugCheck(0x65u);
  MaximumSize.QuadPart = InitNlsTableSize;
  v56 = ZwCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v56 < 0 )
    KeBugCheckEx(0x32u, v56, 1uLL, 0LL, 0LL);
  v57 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
  InitNlsSectionPointer = Object;
  v58 = v57;
  ZwClose(SectionHandle);
  if ( (v58 & 0x80000000) != 0LL )
    KeBugCheckEx(0x32u, v58, 2uLL, 0LL, 0LL);
  MappedBase = 0LL;
  ViewSize = 0LL;
  v59 = MmMapViewInSystemSpace(InitNlsSectionPointer, &MappedBase, &ViewSize);
  if ( v59 < 0 )
    KeBugCheckEx(0x32u, v59, 3uLL, 0LL, 0LL);
  v60 = (char *)MappedBase;
  memmove(MappedBase, InitNlsTableBase, InitNlsTableSize);
  InitNlsTableBase = v60;
  RtlInitNlsTables(
    (PUSHORT)&v60[InitAnsiCodePageDataOffset],
    (PUSHORT)&v60[InitOemCodePageDataOffset],
    (PUSHORT)&v60[InitUnicodeCaseTableDataOffset],
    v61);
  RtlResetRtlTranslations(v62);
  if ( !CcInitializeCacheManager() )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1(BugCheckParameter3) )
    KeBugCheck(0x67u);
  InitSkuSessionParameters();
  qword_1408F2668 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset(v115, 0, sizeof(v115));
  *((_QWORD *)&v115[0] + 1) = MmMapLockedRestartPages;
  *(_QWORD *)&v115[1] = MmUnmapLockedRestartPages;
  *((_QWORD *)&v115[1] + 1) = KeRemoveEnclavePage;
  LODWORD(v115[0]) = 64;
  if ( VslVsmEnabled )
  {
    VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
    qword_1408F2648 = (__int64)VslpRegisterKsrCallback;
  }
  DisplayContext = BgGetDisplayContext();
  v64 = (int)KsrInitSystem(BugCheckParameter3, v115, DisplayContext);
  qword_1408F2670 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v64 + 0x80000000) >= 0 && (_DWORD)v64 != -1073741637 )
    KeBugCheckEx(0x32u, v64, 0LL, 1uLL, 0LL);
  ExKsrInterface = v115[2];
  *(_OWORD *)&xmmword_1403A1710 = v115[3];
  v65 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v65 < 0 )
    KeBugCheckEx(0x32u, v65, 8uLL, 0LL, 0LL);
  v66 = MfgInitSystem(BugCheckParameter3);
  if ( v66 < 0 )
    KeBugCheckEx(0x32u, v66, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  SmInitSystem(0LL);
  v67 = VmInitSystem();
  if ( v67 < 0 )
    KeBugCheckEx(0x32u, v67, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2304LL) & 2) == 0 || strstr(v6, "FORCETIMESYNC") )
    ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0LL);
  if ( (HvlpFlags & 2) != 0 )
    ZwUpdateWnfStateData((__int64)&WNF_HVL_CPU_MGMT_PARTITION, 0LL, 0LL);
  LODWORD(v90) = 0;
  FsRtlSendModernAppTermination(&v90, 1u, 1);
  ExInitializeUtcTimeZoneBias(&CurrentTime);
  v68 = ExpLastTimeZoneBias;
  ExpRefreshTimeZoneInformation();
  if ( v4 )
  {
    v111 = &Time;
    Time.QuadPart = CurrentTime.QuadPart + ExpTimeZoneBias;
    v112 = &v96;
    v109[0] = 0;
    v113 = 0;
    v110 = 4;
    KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v109);
  }
  else if ( v68 != ExpLastTimeZoneBias )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem(v70, v69, v71) )
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
    v72 = strstr(v6, "SAFEBOOT:");
  else
    v72 = 0LL;
  v73 = v72;
  if ( v72 )
  {
    v74 = 9LL;
    v75 = v72 + 9;
    if ( !strncmp(v75, "MINIMAL", 7uLL) )
    {
      v25 = 1;
    }
    else if ( strncmp(v75, "NETWORK", 7uLL) )
    {
      v76 = strncmp(v75, "DSREPAIR", 8uLL);
      v72 = 0LL;
      if ( v76 )
      {
        InitSafeBootMode = 0;
      }
      else
      {
        InitSafeBootMode = 3;
        v74 = 17LL;
      }
      goto LABEL_135;
    }
    InitSafeBootMode = v25;
    v74 = 16LL;
    v72 = 0LL;
LABEL_135:
    if ( v73[v74] )
    {
      v77 = strncmp(&v73[v74], "(ALTERNATESHELL)", 0x10uLL);
      v78 = (unsigned __int8)v86;
      if ( !v77 )
        v78 = 1;
      LODWORD(v86) = v78;
    }
    if ( InitSafeBootMode )
    {
      v79 = 0;
      switch ( InitSafeBootMode )
      {
        case 1:
          v79 = 168;
          break;
        case 2:
          v79 = 169;
          break;
        case 3:
          v79 = 170;
          break;
      }
      if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v79, &v101) >= 0 )
        InbvDisplayString((__int64)v101->Text);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 240) + 116LL) & 0x800) != 0 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v87) >= 0 )
      InbvDisplayString((__int64)v87->Text);
    IopInitializeBootLogging(BugCheckParameter3, (__int64)(PoolWithTag + 256));
  }
  ExInitSystemPhase2();
  if ( InitIsWinPEMode != (_BYTE)v72 )
    CreateMiniNtBootKey();
  v80 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v80 < 0 )
    KeBugCheckEx(0x32u, v80, 0x69436553uLL, 0LL, (ULONG_PTR)v72);
  KdpTimeSlipPending = (int)v72;
  v81 = ExInitializeNls();
  if ( v81 < 0 )
    KeBugCheckEx(0x32u, v81, 7uLL, 0LL, (ULONG_PTR)v72);
  v82 = ExInitializeExternalBootSupport();
  if ( v82 < 0 )
    KeBugCheckEx(0x32u, v82, 8uLL, 0LL, (ULONG_PTR)v72);
  if ( !(unsigned __int8)PoInitSystem(1LL, BugCheckParameter3) )
    KeBugCheck(0xA0u);
  return v86;
}
