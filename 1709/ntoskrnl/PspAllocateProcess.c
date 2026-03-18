/*
 * XREFs of PspAllocateProcess @ 0x140489D0C
 * Callers:
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x140599DF0 (PspCreateProcess.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeQuerySystemTimePrecise @ 0x140025920 (KeQuerySystemTimePrecise.c)
 *     PoEnergyEstimationEnabled @ 0x140025A00 (PoEnergyEstimationEnabled.c)
 *     KeQueryMaximumGroupCount @ 0x140025A20 (KeQueryMaximumGroupCount.c)
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     KeQuerySystemTimeUnsafe @ 0x140025A60 (KeQuerySystemTimeUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KeQueryAffinityProcess @ 0x14008A7F0 (KeQueryAffinityProcess.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     RtlWow64GetEquivalentMachineCHPE @ 0x1400E5A10 (RtlWow64GetEquivalentMachineCHPE.c)
 *     KeQueryActiveGroupCount @ 0x1400FE430 (KeQueryActiveGroupCount.c)
 *     MmGetDefaultPagePriority @ 0x140126770 (MmGetDefaultPagePriority.c)
 *     KeFirstGroupAffinityEx @ 0x140126920 (KeFirstGroupAffinityEx.c)
 *     PspWow64PickBestNtdll @ 0x14012CFFC (PspWow64PickBestNtdll.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KeSecureProcess @ 0x140202FD4 (KeSecureProcess.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SmpKeyedStoreCreate @ 0x140444B98 (SmpKeyedStoreCreate.c)
 *     PoEnergyContextInitialize @ 0x1404495E0 (PoEnergyContextInitialize.c)
 *     PspReadIFEOPerfOptions @ 0x14044CA90 (PspReadIFEOPerfOptions.c)
 *     PspApplyIFEOPerfOptions @ 0x14044CC7C (PspApplyIFEOPerfOptions.c)
 *     MmInitializeProcessAddressSpace @ 0x14045E2B4 (MmInitializeProcessAddressSpace.c)
 *     PspWritePebAffinityInfo @ 0x14045F5C4 (PspWritePebAffinityInfo.c)
 *     PspSetupUserProcessAddressSpace @ 0x14045F718 (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x14045F94C (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x14045FB98 (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x14045FBB0 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14045FBE8 (MmMapApiSetView.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     PsQueryProcessAttributes @ 0x140486A80 (PsQueryProcessAttributes.c)
 *     PspInheritMitigationOptions @ 0x14048B748 (PspInheritMitigationOptions.c)
 *     PspApplyMitigationOptions @ 0x14048B80C (PspApplyMitigationOptions.c)
 *     PspInheritMitigationAuditOptions @ 0x14048C058 (PspInheritMitigationAuditOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x14048C128 (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x14048C19C (PspReadIFEOMitigationAuditOptions.c)
 *     PspComputeQuantumAndPriority @ 0x14048C29C (PspComputeQuantumAndPriority.c)
 *     PspInitializeProcessSecurity @ 0x14048C3A8 (PspInitializeProcessSecurity.c)
 *     KeInitializeProcess @ 0x14048C5AC (KeInitializeProcess.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x14048C704 (MmGetSessionSchedulingGroupByProcess.c)
 *     MmGetSectionInformation @ 0x14048C730 (MmGetSectionInformation.c)
 *     PsWow64GetProcessMachine @ 0x14049DA60 (PsWow64GetProcessMachine.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     PspRundownSingleProcess @ 0x1404DAA68 (PspRundownSingleProcess.c)
 *     MmCreatePeb @ 0x1404DAD28 (MmCreatePeb.c)
 *     PspAttachSession @ 0x1404F0128 (PspAttachSession.c)
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 *     ExCreateHandleEx @ 0x140507F60 (ExCreateHandleEx.c)
 *     ObInitProcess @ 0x14053923C (ObInitProcess.c)
 *     PspUpdateCreateInfo @ 0x14053B280 (PspUpdateCreateInfo.c)
 *     PsWow64IsMachineSupported @ 0x14053D92C (PsWow64IsMachineSupported.c)
 *     SeIsTokenAssignableToProcess @ 0x140573A88 (SeIsTokenAssignableToProcess.c)
 *     SeQuerySessionIdToken @ 0x140577340 (SeQuerySessionIdToken.c)
 *     MmSecureVirtualMemory @ 0x1405795A0 (MmSecureVirtualMemory.c)
 *     PspInitializeFullProcessImageName @ 0x14057B454 (PspInitializeFullProcessImageName.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x14057E328 (RtlpOpenImageFileOptionsKeyEx.c)
 *     PspAssignProcessQuotaBlock @ 0x140582A58 (PspAssignProcessQuotaBlock.c)
 *     PspReadIFEONodeOptions @ 0x140584B70 (PspReadIFEONodeOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x140584CF0 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x1405859DC (RtlAcquirePrivilege.c)
 *     PspSelectNodeForProcess @ 0x14058A4FC (PspSelectNodeForProcess.c)
 *     PspSetupReservedUserMappings @ 0x14058D2BC (PspSetupReservedUserMappings.c)
 *     PspDetectComplusILImage @ 0x14058F588 (PspDetectComplusILImage.c)
 *     PspHardenMitigationOptions @ 0x14058FD14 (PspHardenMitigationOptions.c)
 *     PspInheritQuota @ 0x1405907BC (PspInheritQuota.c)
 *     PspApplyWin32kFilterOptions @ 0x140591770 (PspApplyWin32kFilterOptions.c)
 *     RtlReleasePrivilege @ 0x140592024 (RtlReleasePrivilege.c)
 *     PspSetProcessPriorityClass @ 0x140595250 (PspSetProcessPriorityClass.c)
 *     MmIsSessionLeaderProcess @ 0x1405B3F40 (MmIsSessionLeaderProcess.c)
 *     MmInitializeHandBuiltProcess @ 0x1405EC234 (MmInitializeHandBuiltProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1405EF52C (MmInitializeHandBuiltProcess2.c)
 *     MmGetSectionStrongImageReference @ 0x1406EC4E0 (MmGetSectionStrongImageReference.c)
 *     PspSetProcessAffinitySafe @ 0x140716B3C (PspSetProcessAffinitySafe.c)
 */

__int64 __fastcall PspAllocateProcess(
        __int64 a1,
        KPROCESSOR_MODE a2,
        void *a3,
        char a4,
        char a5,
        char a6,
        void *a7,
        void *a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        char *a13,
        __int64 a14,
        _QWORD *a15)
{
  __int64 v16; // r13
  unsigned int v17; // ebx
  __int16 v18; // r15
  unsigned int v19; // esi
  unsigned int MaximumGroupCount; // eax
  int v21; // ecx
  unsigned int v22; // r12d
  __int64 result; // rax
  size_t v24; // r8
  _QWORD *v25; // rsi
  _QWORD *v26; // r10
  int v27; // r9d
  struct _LIST_ENTRY *Flink; // rax
  _QWORD *v29; // rcx
  PEPROCESS v30; // r12
  unsigned int v31; // eax
  int v32; // edx
  int DefaultPagePriority; // r8d
  PVOID v34; // rdx
  char *v35; // r15
  PVOID v36; // rdi
  int SectionInformation; // esi
  int v38; // ebx
  __int16 v39; // cx
  int v40; // eax
  unsigned __int16 EquivalentMachineCHPE; // ax
  __int64 v42; // rdx
  __int64 v43; // r8
  int v44; // r10d
  unsigned __int16 v45; // di
  int v46; // r10d
  HANDLE *v47; // r12
  int v48; // eax
  int v49; // r12d
  ULONG v50; // edi
  KPROCESSOR_MODE v51; // al
  _DWORD *v52; // rax
  PEPROCESS v53; // rdi
  void *v54; // rdi
  ULONG v55; // esi
  PEPROCESS v56; // rdx
  int v57; // edx
  int v58; // r12d
  int v59; // r8d
  unsigned __int16 v60; // di
  __int64 SessionSchedulingGroupByProcess; // rax
  int v62; // ecx
  char v63; // r8
  PEPROCESS v64; // rdi
  char v65; // al
  __int64 v66; // r9
  __int64 v67; // r8
  int inited; // eax
  __int64 v69; // rdx
  __int64 v70; // r9
  int v71; // edi
  char v72; // al
  int v73; // r12d
  int v74; // r12d
  int v75; // edx
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rax
  int v79; // ecx
  unsigned __int8 v80; // r12
  PEPROCESS v81; // rcx
  struct _KTHREAD *v82; // rsi
  volatile signed __int64 *v83; // r12
  __int64 Handle; // rax
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v86; // rcx
  PACCESS_TOKEN v87; // r12
  int v88; // eax
  bool v89; // sf
  int ImageFileKeyOption; // eax
  int v91; // eax
  _WORD *PoolWithTag; // r10
  int v93; // eax
  __int16 v94; // r11
  __int64 v95; // rax
  __int16 v96; // cx
  __int64 v97; // rax
  void *v98; // rax
  unsigned __int64 v99; // rax
  PEPROCESS v100; // rdi
  SIZE_T v101; // rdi
  PVOID v102; // rax
  size_t v103; // r8
  PEPROCESS v104; // rdi
  char *v105; // rcx
  int v106; // edx
  signed __int64 v107; // rax
  signed __int64 v108; // rtt
  __int64 v109; // rcx
  int v111; // r10d
  __int16 v112; // r10
  __int64 v113; // rcx
  __int16 v114; // ax
  __int64 v115; // r8
  unsigned int ProcessNtdllType; // eax
  __int64 v117; // r8
  char v119[3]; // [rsp+71h] [rbp-417h] BYREF
  int v120; // [rsp+74h] [rbp-414h]
  PEPROCESS Process; // [rsp+78h] [rbp-410h]
  char v122; // [rsp+80h] [rbp-408h] BYREF
  char v123[3]; // [rsp+81h] [rbp-407h] BYREF
  unsigned int v124; // [rsp+84h] [rbp-404h]
  int v125; // [rsp+88h] [rbp-400h]
  PVOID Object; // [rsp+90h] [rbp-3F8h]
  PVOID v127; // [rsp+98h] [rbp-3F0h]
  int v128; // [rsp+A0h] [rbp-3E8h]
  int v129; // [rsp+A4h] [rbp-3E4h]
  int v130; // [rsp+A8h] [rbp-3E0h]
  PVOID Address; // [rsp+B0h] [rbp-3D8h]
  __int64 v132; // [rsp+B8h] [rbp-3D0h] BYREF
  __int16 v133; // [rsp+C0h] [rbp-3C8h]
  ULONG SessionId; // [rsp+C4h] [rbp-3C4h] BYREF
  unsigned int v135; // [rsp+C8h] [rbp-3C0h]
  _KPROCESS *v136; // [rsp+D0h] [rbp-3B8h]
  PVOID v137; // [rsp+D8h] [rbp-3B0h]
  PVOID v138; // [rsp+E0h] [rbp-3A8h]
  int v139; // [rsp+E8h] [rbp-3A0h]
  int v140; // [rsp+ECh] [rbp-39Ch]
  int v141; // [rsp+F0h] [rbp-398h]
  int v142; // [rsp+F4h] [rbp-394h]
  int v143; // [rsp+F8h] [rbp-390h]
  int v144; // [rsp+FCh] [rbp-38Ch]
  PVOID TokenInformation; // [rsp+100h] [rbp-388h] BYREF
  __int64 v146; // [rsp+108h] [rbp-380h]
  _QWORD *v147; // [rsp+110h] [rbp-378h]
  __int64 v148; // [rsp+118h] [rbp-370h] BYREF
  __int64 v149; // [rsp+120h] [rbp-368h]
  PACCESS_TOKEN Token; // [rsp+128h] [rbp-360h]
  unsigned __int64 v151; // [rsp+130h] [rbp-358h]
  struct _KTHREAD *CurrentThread; // [rsp+138h] [rbp-350h]
  __int64 v153; // [rsp+140h] [rbp-348h] BYREF
  PVOID ReturnedState; // [rsp+148h] [rbp-340h] BYREF
  char *v155; // [rsp+150h] [rbp-338h]
  __int128 v156; // [rsp+158h] [rbp-330h] BYREF
  __int128 v157; // [rsp+170h] [rbp-318h] BYREF
  HANDLE KeyHandle; // [rsp+188h] [rbp-300h] BYREF
  void *v159; // [rsp+190h] [rbp-2F8h] BYREF
  __int64 v160; // [rsp+198h] [rbp-2F0h]
  __int64 v161; // [rsp+1A0h] [rbp-2E8h]
  __int64 v162; // [rsp+1A8h] [rbp-2E0h]
  __int64 v163; // [rsp+1B0h] [rbp-2D8h]
  char v164[8]; // [rsp+1C0h] [rbp-2C8h] BYREF
  __int64 v165; // [rsp+1C8h] [rbp-2C0h]
  __int64 v166; // [rsp+1D0h] [rbp-2B8h] BYREF
  _QWORD *v167; // [rsp+1D8h] [rbp-2B0h]
  __int128 v168; // [rsp+1E0h] [rbp-2A8h] BYREF
  __int128 v169; // [rsp+1F0h] [rbp-298h] BYREF
  __int128 v170; // [rsp+200h] [rbp-288h] BYREF
  __int128 v171; // [rsp+210h] [rbp-278h] BYREF
  __int128 v172; // [rsp+220h] [rbp-268h] BYREF
  __int128 v173; // [rsp+230h] [rbp-258h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+270h] [rbp-218h] BYREF
  char v175[46]; // [rsp+2A0h] [rbp-1E8h] BYREF
  __int16 v176; // [rsp+2CEh] [rbp-1BAh]
  char v177; // [rsp+2D3h] [rbp-1B5h]
  int v178; // [rsp+2E0h] [rbp-1A8h]
  __int128 v179; // [rsp+2F0h] [rbp-198h] BYREF
  _QWORD v180[4]; // [rsp+300h] [rbp-188h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v181; // [rsp+320h] [rbp-168h] BYREF
  _WORD v182[88]; // [rsp+350h] [rbp-138h] BYREF
  ULONG Privilege[6]; // [rsp+400h] [rbp-88h] BYREF
  _WORD v184[20]; // [rsp+418h] [rbp-70h] BYREF

  v127 = a3;
  Process = (PEPROCESS)a1;
  v162 = a1;
  v137 = a7;
  Token = a8;
  v16 = a11;
  v163 = a11;
  v155 = a13;
  v165 = a14;
  v167 = a15;
  v17 = 0;
  v120 = 0;
  CurrentThread = KeGetCurrentThread();
  v136 = CurrentThread->ApcState.Process;
  v132 = 0LL;
  v140 = 0;
  v130 = 0;
  v138 = 0LL;
  LOWORD(v125) = 0;
  v141 = 0;
  v129 = 0;
  v144 = 0;
  Address = 0LL;
  v143 = 0;
  v161 = 0LL;
  v142 = 0;
  v160 = 0LL;
  v18 = a9;
  if ( (a9 & 0x800) != 0 )
  {
    v17 = 1024;
    v120 = 1024;
    if ( (a9 & 0x2000) != 0 )
    {
      v17 = 66560;
      if ( (a9 & 0x4000) != 0 )
        v17 = 197632;
      v120 = v17;
    }
  }
  v146 = a1 & -(__int64)((a9 & 0x100) != 0);
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x2000) != 0 )
  {
    if ( (a1 & -(__int64)((a9 & 0x100) != 0)) != 0 )
      return 3221225520LL;
    v132 = KeNodeBlock[*(unsigned __int16 *)(a11 + 250)];
    v146 = 0LL;
  }
  else if ( a1 )
  {
    v146 = a1 & -(__int64)((a9 & 0x100) != 0);
    if ( (*(_DWORD *)(a1 + 768) & 0x200000) != 0 )
    {
      v146 = a1;
      v130 = 0x200000;
    }
  }
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x40000) != 0 )
  {
    v17 |= 0x1000u;
    v120 = v17;
  }
  memset(v180, 0, sizeof(v180));
  ReturnedState = 0LL;
  v19 = 2112;
  v124 = 0;
  LODWORD(v147) = 0;
  if ( !PsDisableDiskCounters )
  {
    v124 = 2112;
    v19 = 2152;
    v17 |= 0x200u;
    v120 = v17;
  }
  if ( PoEnergyEstimationEnabled() )
  {
    LODWORD(v147) = (v19 + 7) & 0xFFFFFFF8;
    v19 = (_DWORD)v147 + 480;
    v17 |= 0x2000u;
    v120 = v17;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v135 = MaximumGroupCount;
  v22 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v22 = (v19 + 7) & 0xFFFFFFF8;
    v19 = 16 * (unsigned __int16)MaximumGroupCount + v22;
  }
  LOBYTE(v21) = a2;
  result = ObCreateObjectEx(v21, (_DWORD)PsProcessType, (_DWORD)v127, a2);
  if ( (int)result >= 0 )
  {
    v127 = Object;
    ObfReferenceObjectWithTag(Object, 0x72437350u);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    v24 = v19;
    v25 = Object;
    memset(Object, 0, v24);
    memset((char *)Object + 1616, 0, 0x20uLL);
    *((_QWORD *)Object + 202) = 0LL;
    v25[204] = v25 + 203;
    v25[203] = v25 + 203;
    ExInitializePushLock(v25 + 95);
    v26 = v25;
    v25[91] = 0LL;
    v25[146] = v25 + 145;
    v25[145] = v25 + 145;
    v25[223] = v25 + 222;
    v25[222] = v25 + 222;
    v25[254] = v25 + 253;
    v25[253] = v25 + 253;
    *((_BYTE *)v25 + 1738) = a4;
    *((_BYTE *)v25 + 1736) = a5;
    *((_BYTE *)v25 + 1737) = a6;
    v25[230] = 0LL;
    v27 = v17 & 0x400;
    if ( (v17 & 0x400) != 0 )
      *((_DWORD *)v25 + 435) |= 1u;
    if ( v18 < 0 )
      *((_DWORD *)v25 + 435) |= 0x20u;
    if ( v22 )
    {
      *((_DWORD *)v25 + 435) |= 0x80u;
      v105 = (char *)v25 + v22;
      v25[244] = v105;
      v25[245] = &v105[8 * v135];
    }
    *((_DWORD *)v25 + 435) |= a10;
    Flink = v136[1].Header.WaitListHead.Flink;
    if ( (v18 & 0x200) == 0 )
      Flink = (struct _LIST_ENTRY *)((unsigned __int64)Flink | 2);
    v25[126] = Flink;
    if ( (v17 & 0x200) != 0 )
      v25[225] = (char *)v25 + v124;
    if ( (v17 & 0x2000) != 0 )
    {
      v29 = (_QWORD *)((char *)v25 + (unsigned int)v147);
      v25[232] = v29;
      PoEnergyContextInitialize(v29);
    }
    if ( v16 && (*(_DWORD *)(v16 + 4) & 0x200) != 0 )
    {
      v31 = *(_DWORD *)(v16 + 316);
      v30 = Process;
    }
    else
    {
      v30 = Process;
      if ( Process )
        v31 = Process[1].ThreadSeed[2];
      else
        v31 = 5;
    }
    *((_DWORD *)v26 + 296) = v31;
    *((_DWORD *)v26 + 393) = 259;
    if ( v30 )
    {
      v32 = (HIDWORD(v30[1].DirectoryTableBase) >> 27) & 7;
      DefaultPagePriority = (LODWORD(v30[1].DirectoryTableBase) >> 12) & 7;
      v26[124] = v30[1].Header.WaitListHead.Flink;
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    *((_DWORD *)v26 + 193) = *((_DWORD *)v26 + 193) & 0xC7FFFFFF | (v32 << 27);
    *((_DWORD *)v26 + 192) = (DefaultPagePriority << 12) | v26[96] & 0xFFFF8FFF;
    v34 = v155;
    if ( v155 )
    {
      _m_prefetchw(v155 + 24);
      v107 = *((_QWORD *)v155 + 3);
      while ( (unsigned __int64)(v107 + 1) > 1 )
      {
        v108 = v107;
        v107 = _InterlockedCompareExchange64((volatile signed __int64 *)v155 + 3, v107 + 1, v107);
        if ( v108 == v107 )
          goto LABEL_37;
      }
      if ( v107 )
        __fastfail(0xEu);
      SectionInformation = -1073740640;
LABEL_288:
      v35 = (char *)Object;
      goto LABEL_234;
    }
    v34 = PspSystemPartition;
    v155 = (char *)PspSystemPartition;
    if ( _InterlockedIncrement64((volatile signed __int64 *)PspSystemPartition + 3) <= 1 )
      __fastfail(0xEu);
LABEL_37:
    v35 = (char *)Object;
    *((_QWORD *)Object + 262) = v34;
    v36 = v137;
    if ( !v27 )
    {
      v138 = v137;
      if ( v137 )
      {
        if ( (a9 & 0x1000) == 0 )
        {
          ObfReferenceObject(v137);
          goto LABEL_41;
        }
LABEL_290:
        SectionInformation = -1073741776;
        goto LABEL_234;
      }
      if ( v30 )
      {
        if ( a12 )
          goto LABEL_290;
        if ( (v30[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
          SectionInformation = -1073741811;
          goto LABEL_234;
        }
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v30[1].ProfileListHead.Blink) )
        {
          v98 = (void *)v30[1].Affinity.Bitmap[17];
          v137 = v98;
          if ( v98 )
            ObfReferenceObject(v98);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v30[1].ProfileListHead.Blink);
        }
        v36 = v137;
        if ( !v137 )
        {
          SectionInformation = -1073741558;
          goto LABEL_234;
        }
        v99 = v30[1].ActiveProcessors.Bitmap[7];
        if ( v99 )
        {
          v17 |= 0x4000u;
          v120 = v17;
          v125 = *(unsigned __int16 *)(v99 + 8);
          v141 = *(_DWORD *)(v99 + 12);
        }
        if ( (v30[1].DirectoryTableBase & 0x2000000000000LL) != 0 )
          a9 |= 8u;
      }
    }
LABEL_41:
    v147 = v35 + 952;
    *((_QWORD *)v35 + 119) = v36;
    LOWORD(v124) = 0;
    if ( !v16 )
    {
      if ( v36 )
      {
        SectionInformation = MmGetSectionInformation(v36, 4LL, v175);
        if ( SectionInformation < 0 )
          goto LABEL_234;
        v17 |= 32 * (v177 & 4 | (4 * (v177 & 2 | ((v178 & 1) << 11))));
        v120 = v17;
        LOWORD(v124) = v176;
        if ( !v138 )
        {
          v140 = 8;
          v17 |= 0x800u;
          v120 = v17;
        }
      }
      goto LABEL_61;
    }
    *((_QWORD *)v35 + 216) = *(_QWORD *)(v16 + 456);
    SectionInformation = MmGetSectionInformation(v36, 4LL, v16 + 48);
    if ( SectionInformation < 0 )
      goto LABEL_234;
    v38 = v17 | (32
               * (*(_BYTE *)(v16 + 99) & 4 | (4 * (*(_BYTE *)(v16 + 99) & 2 | ((*(_DWORD *)(v16 + 112) & 1) << 11)))));
    v39 = *(_WORD *)(v16 + 96);
    if ( (v38 & 0x100) != 0 && v39 == 332 && (*(_BYTE *)(v16 + 99) & 1) != 0 )
      v40 = 0x8000;
    else
      v40 = 0;
    v17 = v40 | v38;
    v120 = v17;
    EquivalentMachineCHPE = RtlWow64GetEquivalentMachineCHPE(v39);
    v45 = EquivalentMachineCHPE;
    if ( (*(_WORD *)(v16 + 92) & *(_WORD *)(v16 + 10)) != 0 )
    {
      v109 = 3LL;
      goto LABEL_293;
    }
    if ( (v17 & v44) == 0 )
    {
      if ( (unsigned int)PsWow64IsMachineSupported(EquivalentMachineCHPE) )
      {
        v17 |= 0x4000u;
        v120 = v17;
        LOWORD(v125) = v45;
      }
      if ( (v17 & v46) == 0
        && (v45 < MEMORY[0xFFFFF7800000002C] || v45 > MEMORY[0xFFFFF7800000002E])
        && (v17 & 0x4000) == 0 )
      {
        v109 = 4LL;
LABEL_293:
        SectionInformation = -1073741701;
LABEL_295:
        PspUpdateCreateInfo(v109, v16, 0LL);
        goto LABEL_234;
      }
    }
    if ( !v138 )
    {
LABEL_61:
      v49 = v140 | 0x20000;
      if ( (a9 & 8) == 0 )
        v49 = v140;
      if ( (v17 & 0x4000) != 0 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50776F57u);
        *((_QWORD *)v35 + 133) = PoolWithTag;
        if ( !PoolWithTag )
        {
          SectionInformation = -1073741801;
          goto LABEL_234;
        }
        v93 = v141;
        v94 = v125;
        if ( !v141 )
          v93 = PspWow64PickBestNtdll(v16);
        PoolWithTag[4] = v94;
        *(_DWORD *)(*((_QWORD *)v35 + 133) + 12LL) = v93;
        v95 = *((_QWORD *)v35 + 133);
        if ( v95 )
        {
          v96 = *(_WORD *)(v95 + 8);
          if ( v96 == 332 || v96 == 452 )
            *(_QWORD *)v95 = 1LL;
        }
      }
      SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
      if ( SectionInformation >= 0 )
      {
        v50 = 0;
        v51 = a2;
        if ( a2 )
        {
          if ( v16 && (*(_DWORD *)(v16 + 4) & 0x100) != 0 && *(_BYTE *)(v16 + 248) == 4 )
          {
            Privilege[0] = 14;
            v50 = 1;
          }
          if ( a12 )
            Privilege[v50++] = 3;
          if ( (a9 & 0x30) != 0 )
            Privilege[v50++] = 4;
          if ( (a9 & 0x80u) != 0 && !(unsigned int)MmIsSessionLeaderProcess(v136) )
            Privilege[v50++] = 10;
          if ( (a9 & 0x8400) != 0 )
            Privilege[v50++] = 7;
          if ( v50 )
          {
            v89 = RtlAcquirePrivilege(Privilege, v50, a12 != 0, &ReturnedState) < 0;
            v51 = a2;
            if ( !v89 )
            {
              v17 |= 0x10u;
              v120 = v17;
            }
          }
          else
          {
            v51 = a2;
          }
        }
        if ( (a9 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v51) )
          goto LABEL_265;
        v52 = v127;
        *((_DWORD *)v127 + 193) |= v49;
        v52[192] |= v130;
        v53 = Process;
        if ( Process )
        {
          v54 = 0LL;
          v159 = 0LL;
          v55 = 0;
          SessionId = 0;
          v119[0] = 0;
          if ( a12 )
          {
            if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2) )
              v17 |= 4u;
            v87 = Token;
            SectionInformation = SeIsTokenAssignableToProcess(Token, v119);
            if ( SectionInformation < 0 )
              goto LABEL_266;
            if ( !v119[0] && (v17 & 4) == 0 )
              goto LABEL_265;
            SectionInformation = SeQuerySessionIdToken(v87, &SessionId);
            if ( SectionInformation < 0 )
              goto LABEL_266;
            v88 = MmGetSessionIdEx((__int64)v136);
            v55 = SessionId;
            if ( SessionId != v88 )
            {
              if ( (v17 & 4) == 0 )
              {
LABEL_265:
                SectionInformation = -1073741727;
                goto LABEL_266;
              }
              if ( (a9 & 0x80u) != 0 )
              {
                SectionInformation = -1073741811;
                goto LABEL_266;
              }
              v17 |= 1u;
            }
          }
          else if ( !v138 )
          {
            v55 = MmGetSessionIdEx((__int64)Process);
            SessionId = v55;
            v17 |= v55 != (unsigned int)MmGetSessionIdEx((__int64)v136);
          }
          if ( (v17 & 1) != 0 )
          {
            SectionInformation = PspAttachSession(v55, &v181, &v159);
            if ( SectionInformation < 0 )
            {
              LOBYTE(v17) = v17 & 0xFE;
              goto LABEL_266;
            }
            *((_DWORD *)v127 + 192) |= 0x80u;
            v54 = v159;
          }
          if ( !a12 || v119[0] )
          {
            v56 = Process;
            if ( v119[0] )
              v56 = v136;
            PspInheritQuota(v35, v56);
          }
          else
          {
            SectionInformation = PspAssignProcessQuotaBlock(0LL, v35, Token);
            if ( SectionInformation < 0 )
            {
              if ( (v17 & 1) != 0 )
              {
                MmDetachSession((__int64)v54, (__int64)&v181);
                ObfDereferenceObject(v54);
              }
              goto LABEL_266;
            }
          }
          v58 = 1;
          v59 = PspMaximumWorkingSet;
          if ( (v180[0] & 0x100000000LL) != 0 )
            v59 = v180[3];
          v17 |= 32 * (MmCreateProcessAddressSpace((_DWORD)v155, v57, v59, BYTE4(v180[0]) & 1, (__int64)v35) & 1);
          v120 = v17;
          if ( (v17 & 1) != 0 )
          {
            MmDetachSession((__int64)v54, (__int64)&v181);
            ObfDereferenceObject(v54);
          }
          if ( (v17 & 0x20) == 0 )
            goto LABEL_314;
          v53 = Process;
        }
        else
        {
          PspInheritQuota(v35, 0LL);
          v58 = v106 + 1;
          v35[640] = v106 + 1;
          SectionInformation = MmInitializeHandBuiltProcess();
          if ( SectionInformation < 0 )
          {
LABEL_266:
            if ( (v17 & 0x10) != 0 )
              RtlReleasePrivilege(ReturnedState);
            goto LABEL_234;
          }
        }
        v135 = v17;
        if ( v146 )
        {
          KeQueryAffinityProcess(v146, (__int64)v182, 0LL, (__int64)v184);
          KeFirstGroupAffinityEx(&v148, v182);
          v132 = KeNodeBlock[(unsigned __int16)v184[(unsigned __int16)v149]];
        }
        else
        {
          if ( v132 )
          {
            v60 = *(_WORD *)(v132 + 144);
          }
          else if ( v53 )
          {
            if ( (v53[1].DirectoryTableBase & 0x100000) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)v127 + 192, 0x100000u);
              v132 = KeNodeBlock[v53->IdealGlobalNode];
              v60 = *(_WORD *)(v132 + 144);
            }
            else
            {
              v132 = PspSelectNodeForProcess();
              v60 = *(_WORD *)(v132 + 144);
              if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > (unsigned __int16)v58 && !v60 )
              {
                v132 = 0LL;
                v60 = v58;
              }
            }
          }
          else
          {
            v60 = 0;
          }
          v149 = v60;
          v148 = qword_140401408[v60];
        }
        _InterlockedOr((volatile signed __int32 *)v127 + 193, 0x40000u);
        v35 = (char *)Object;
        SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess(Object);
        SectionInformation = KeInitializeProcess(
                               v62,
                               8,
                               (unsigned int)&v148,
                               v132,
                               SessionSchedulingGroupByProcess,
                               v63);
        if ( SectionInformation < 0 )
          goto LABEL_266;
        if ( v16 )
        {
          v129 = *(_DWORD *)(v16 + 408);
          v144 = *(_DWORD *)(v16 + 412);
          Address = *(PVOID *)(v16 + 416);
          v143 = *(_DWORD *)(v16 + 424);
          v161 = *(_QWORD *)(v16 + 432);
          v142 = *(_DWORD *)(v16 + 440);
          v160 = *(_QWORD *)(v16 + 208);
        }
        v64 = Process;
        SectionInformation = PspInitializeProcessSecurity(
                               Process,
                               v129,
                               v58 & (v17 >> 11),
                               v58 & (v17 >> 12),
                               v144,
                               (__int64)Address,
                               v143,
                               v161,
                               v142,
                               v160,
                               v165);
        if ( SectionInformation < 0 )
          goto LABEL_266;
        v35[1119] = 2;
        if ( v64 )
        {
          v65 = v35[1119];
          if ( ((HIBYTE(v64[1].ActiveProcessors.Bitmap[13]) - (_BYTE)v58) & 0xFB) == 0 )
            v65 = HIBYTE(v64[1].ActiveProcessors.Bitmap[13]);
          v35[1119] = v65;
          v66 = v16 ? *(_QWORD *)(v16 + 296) : 0LL;
          v67 = v16 ? *(unsigned int *)(v16 + 292) : 0LL;
          inited = ObInitProcess((unsigned __int64)v64 & -(__int64)((a9 & 4) != 0), v35, v67, v66);
        }
        else
        {
          *((_QWORD *)v35 + 131) = v136[1].ActiveProcessors.Bitmap[5];
          inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v35);
        }
        SectionInformation = inited;
        if ( inited < 0 )
          goto LABEL_266;
        if ( (v180[0] & 7) != 0 )
          PspApplyIFEOPerfOptions((__int64)v35, (unsigned int *)v180, a2, v70);
        if ( v16 )
        {
          if ( (*(_DWORD *)(v16 + 4) & 0x100) != 0 )
          {
            LOBYTE(v70) = a2;
            LOBYTE(v69) = *(_BYTE *)(v16 + 248);
            SectionInformation = PspSetProcessPriorityClass(v35, v69, 0LL, v70);
            if ( SectionInformation < 0 )
              goto LABEL_266;
          }
        }
        v35[444] = PspComputeQuantumAndPriority((_DWORD)v35, 0, (unsigned int)&v122, 0, 0LL);
        v35[445] = v122;
        SectionInformation = 0;
        v129 = 0;
        v179 = 0uLL;
        PspReadIFEOMitigationOptions(v16, &v179);
        v168 = v179;
        v169 = PspSystemMitigationOptions;
        PspInheritMitigationOptions(&v169, &v168, &v179);
        v157 = 0uLL;
        PspReadIFEOMitigationAuditOptions(v16, &v157);
        v170 = v157;
        v171 = PspSystemMitigationAuditOptions;
        PspInheritMitigationAuditOptions(&v171, &v170, &v157);
        v71 = (BYTE6(v179) & 3) << 16;
        if ( v16 && (*(_DWORD *)(v16 + 4) & 0x10000) != 0 )
        {
          v172 = *(_OWORD *)(v16 + 360);
          v173 = v179;
          PspInheritMitigationOptions(&v173, &v172, &v179);
        }
        if ( (_DWORD)TokenInformation )
          v71 |= 4u;
        v72 = v58 & ((v71 & 4) != 0);
        v73 = v71 | 0x100;
        if ( !v72 )
          v73 = v71;
        if ( (v73 & 0xFF00) != 0 )
        {
          v91 = PspHardenMitigationOptions(&v179);
          SectionInformation = v91;
          if ( v16 && (*(_DWORD *)(v16 + 4) & 0x10000) != 0 )
          {
            if ( v91 < 0 )
              goto LABEL_234;
          }
          else
          {
            v97 = v179 - PspMitigationOptionsEmptyMap;
            if ( (_QWORD)v179 == PspMitigationOptionsEmptyMap )
              v97 = *((_QWORD *)&v179 + 1);
            if ( !v97 )
              v179 = PspHardenedMitigationOptionsMap;
            SectionInformation = 0;
          }
        }
        if ( (v17 & 0x400) != 0 )
        {
          *(_QWORD *)&v179 = v179 & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
          *((_QWORD *)&v179 + 1) = *((_QWORD *)&v179 + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
        }
        PspApplyMitigationOptions(
          (_DWORD)v35,
          (_DWORD)Process,
          (unsigned int)&v179,
          (unsigned int)&v157,
          v73 | ((v17 & 0x180) != 0) | ((v17 & 0x40000) != 0 && (v124 & 0x4000) != 0 ? 0x20 : 0) | ((v124 & 0x20 | ((unsigned __int16)v124 >> 7) & 0x80) >> 4));
        if ( v16 )
        {
          PspApplyWin32kFilterOptions(v35, v16);
          *(_OWORD *)(v16 + 360) = v179;
          *(_OWORD *)(v16 + 472) = v157;
        }
        PsQueryProcessAttributes((struct _KPROCESS *)v35, 0LL, v123);
        v74 = (int)TokenInformation;
        v75 = ((_DWORD)TokenInformation != 0) | 2;
        if ( (a9 & 0x20000) == 0 )
          v75 = (_DWORD)TokenInformation != 0;
        if ( (dword_14041B170 & 0xC) != 0 && !*((_WORD *)v35 + 726) && v75 )
          SmpKeyedStoreCreate((ULONG_PTR)qword_14041B178, (__int64)&SmGlobals, (__int64)v35);
        if ( (a9 & 0x80u) != 0
          && !(unsigned int)MmIsSessionLeaderProcess(v136)
          && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
        {
          goto LABEL_265;
        }
        if ( (v17 & 0x400) != 0 || v138 )
        {
          SectionInformation = PspInitializeFullProcessImageName(v16, v35);
          if ( SectionInformation < 0 )
            goto LABEL_266;
          v76 = (v17 & 0x10000) != 0
              ? MmInitializeProcessAddressSpace((ULONG_PTR)v35, (ULONG_PTR)Process, 0LL, &a9, (v17 & 0x20000) != 0)
              : MmInitializeProcessAddressSpace((ULONG_PTR)v35, 0LL, (__int64)v137, &a9, 0);
          SectionInformation = v76;
          if ( v76 < 0 )
            goto LABEL_266;
          if ( v16 )
          {
            v77 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)v137) + 32LL);
            v78 = *((_QWORD *)v35 + 120);
            if ( v77 != v78 )
              *(_QWORD *)(v16 + 48) += v78 - v77;
          }
          v129 = SectionInformation;
          v79 = v17 | 2;
          if ( (v17 & 0x400) != 0 )
            v79 = v17;
          v17 = (4 * (a9 & 0x10 | 2)) | v79;
          v120 = v17;
LABEL_147:
          if ( (v17 & 0x10) != 0 )
            RtlReleasePrivilege(ReturnedState);
          if ( (unsigned __int16)PsWow64GetProcessMachine(v35) == 332 )
            *((_DWORD *)v35 + 110) |= 1u;
          if ( (v17 & 8) != 0 )
          {
            if ( v16 )
            {
              SectionInformation = PspSetupReservedUserMappings(v35, &v181, v16);
              if ( SectionInformation < 0 )
                goto LABEL_234;
            }
          }
          if ( (v17 & 2) != 0 )
          {
            *(_QWORD *)&v156 = 0LL;
            *((_QWORD *)&v156 + 1) = -1LL;
            v80 = (4 * (((*((_BYTE *)v127 + 1738) & 7) != 1 ? 0 : 0x10) | ((v17 & 0x80) != 0))) & 0xCF | ((*((_BYTE *)v127 + 1738) & 7) != 0 ? 2 : 0) | ((v17 & 0x40) != 0) | (16 * ((v74 != 0 ? 2 : 0) | v123[0] & 1));
            *(_DWORD *)((char *)&v156 + 3) = v80;
            if ( v138 )
            {
              SectionInformation = MmCreatePeb(v35, &v156, v35 + 1016, &v148);
              if ( SectionInformation < 0 )
              {
                *((_QWORD *)v35 + 127) = 0LL;
                goto LABEL_234;
              }
              if ( v148 )
              {
                _InterlockedAnd((volatile signed __int32 *)v127 + 192, 0xFFCFFFFF);
                v35 = (char *)Object;
                PspSetProcessAffinitySafe((_DWORD)Object, 1, 0, (unsigned int)&v148, (__int64)v164);
              }
            }
            else
            {
              v81 = Process;
              Address = (PVOID)Process[1].ActiveProcessors.Bitmap[1];
              *((_QWORD *)v35 + 127) = Address;
              if ( (v17 & 0x800) != 0 )
              {
LABEL_160:
                if ( ((v17 >> 3) & 1) != 0 && v16 )
                {
                  SectionInformation = PspSetupUserProcessAddressSpace((ULONG_PTR)v81, (_KPROCESS *)v35, &v181, v16);
                }
                else if ( (v17 & 0x802) == 2 )
                {
                  SectionInformation = 0;
                  KiStackAttachProcess((_KPROCESS *)v35, 0, (__int64)&v181);
                  PspWritePebAffinityInfo((__int64)CurrentThread, (__int64)v35);
                  if ( ((v17 >> 3) & 1) != 0 )
                  {
                    SectionInformation = MmMapApiSetView((__int64)v35);
                    if ( SectionInformation >= 0 )
                    {
                      SectionInformation = PspMapSiloSharedDataView((__int64)v35);
                      if ( SectionInformation >= 0 )
                      {
                        SectionInformation = PspPrepareSystemDllInitBlock(0LL, 0LL, v115);
                        if ( SectionInformation >= 0 )
                        {
                          if ( *((_QWORD *)v35 + 133) )
                          {
                            ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)v35);
                            SectionInformation = PspPrepareSystemDllInitBlock(ProcessNtdllType, 0LL, v117);
                          }
                        }
                      }
                    }
                  }
                  KiUnstackDetachProcess(&v181, 0LL);
                }
                if ( SectionInformation < 0 )
                  goto LABEL_234;
                v82 = CurrentThread;
                --CurrentThread->KernelApcDisable;
                v83 = (volatile signed __int64 *)(v35 + 728);
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v35 + 728), 0LL);
                Handle = ExCreateHandleEx(*(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5), (_DWORD)v35, 0, 0, 0LL);
                *((_QWORD *)v35 + 92) = Handle;
                if ( Handle )
                {
                  if ( (v17 & 0x1000) == 0
                    || (*((_QWORD *)v35 + 227) = **(_QWORD **)(v16 + 384),
                        SectionInformation = MmGetSectionStrongImageReference(0LL, 0LL, *((_QWORD *)v35 + 119), &v166),
                        SectionInformation >= 0)
                    && (SectionInformation = KeSecureProcess(
                                               (_KPROCESS *)v35,
                                               *((_QWORD *)v35 + 227),
                                               *((_QWORD *)v35 + 127),
                                               *((_QWORD *)v35 + 92),
                                               v166,
                                               *((_QWORD *)v35 + 120),
                                               *(_QWORD *)(v16 + 384),
                                               *(unsigned int *)(v16 + 400)),
                        SectionInformation >= 0) )
                  {
                    if ( KeQuerySystemTimeUnsafe() )
                    {
                      KeQuerySystemTimePrecise((_QWORD *)v35 + 97);
                    }
                    else
                    {
                      v35 = (char *)Object;
                      *((_QWORD *)Object + 97) = MEMORY[0xFFFFF78000000014];
                    }
                    *((_QWORD *)v35 + 235) = MEMORY[0xFFFFF78000000008];
                    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
                    v86 = Object;
                    *((_QWORD *)Object + 236) = UnbiasedInterruptTime;
                    v86[238] = *((_QWORD *)v35 + 235);
                    *v167 = v86;
                    return (unsigned int)v129;
                  }
                  if ( (_InterlockedExchangeAdd64(v83, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)v35 + 91);
                  KeAbPostRelease((ULONG_PTR)(v35 + 728));
                  KeLeaveCriticalRegionThread((__int64)CurrentThread);
                }
                else
                {
                  if ( (_InterlockedExchangeAdd64(v83, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)v35 + 91);
                  KeAbPostRelease((ULONG_PTR)(v35 + 728));
                  KeLeaveCriticalRegionThread((__int64)v82);
                  SectionInformation = -1073741670;
                }
                goto LABEL_288;
              }
              LOBYTE(v156) = 1;
              KiStackAttachProcess((_KPROCESS *)v35, 0, (__int64)&v181);
              if ( MmSecureVirtualMemory(Address, 0x7B0uLL, 4u) )
                *(_OWORD *)Address = v156;
              else
                SectionInformation = -1073741503;
              if ( SectionInformation >= 0 )
              {
                v113 = *((_QWORD *)v35 + 133);
                if ( v113 )
                {
                  v114 = *(_WORD *)(v113 + 8);
                  if ( v114 == 332 || v114 == 452 )
                  {
                    Address = 0LL;
                    Address = *(PVOID *)v113;
                    if ( MmSecureVirtualMemory(Address, 0x468uLL, 4u) )
                    {
                      v151 = 0xFFFFFFFF00000001uLL;
                      BYTE3(v151) = v80;
                      *(_QWORD *)Address = v151;
                    }
                    else
                    {
                      SectionInformation = -1073741503;
                    }
                  }
                }
              }
              KiUnstackDetachProcess(&v181, 0LL);
              if ( SectionInformation < 0 )
                goto LABEL_234;
            }
          }
          v81 = Process;
          goto LABEL_160;
        }
        v100 = Process;
        if ( !Process )
          goto LABEL_147;
        *((_QWORD *)v35 + 120) = Process[1].Affinity.Bitmap[18];
        SectionInformation = MmInitializeProcessAddressSpace(
                               (ULONG_PTR)v35,
                               (ULONG_PTR)v100,
                               0LL,
                               &a9,
                               (v17 & 0x800) != 0);
        if ( SectionInformation < 0 )
          goto LABEL_266;
        v17 = v135 | (4 * (a9 & 0x10)) | 2;
        v120 = v17;
        v101 = (unsigned int)*(unsigned __int16 *)(v100[1].ActiveProcessors.Bitmap[15] + 2) + 16;
        v102 = ExAllocatePoolWithTag(NonPagedPoolNx, v101, 0x61506553u);
        *((_QWORD *)v35 + 141) = v102;
        if ( v102 )
        {
          v103 = (unsigned int)v101;
          v104 = Process;
          memmove(v102, (const void *)Process[1].ActiveProcessors.Bitmap[15], v103);
          *(_QWORD *)(*((_QWORD *)v35 + 141) + 8LL) = *((_QWORD *)v35 + 141) + 16LL;
          *((_DWORD *)v35 + 242) = v104[1].Affinity.Bitmap[19];
          if ( (a9 & 0x1000) != 0 )
          {
            *v147 = 0LL;
            ObfDereferenceObject(v137);
          }
          goto LABEL_147;
        }
LABEL_314:
        SectionInformation = -1073741670;
        goto LABEL_266;
      }
LABEL_234:
      PspRundownSingleProcess((ULONG_PTR)v35);
      ObfDereferenceObjectWithTag(v35, 0x72437350u);
      return (unsigned int)SectionInformation;
    }
    LOWORD(v124) = *(_WORD *)(v16 + 94);
    v47 = (HANDLE *)(v16 + 192);
    v48 = RtlpOpenImageFileOptionsKeyEx(v16 + 232, v42, v43, v16 + 192);
    if ( v48 < 0 )
    {
      if ( v48 == -1073741772 )
        *(_BYTE *)(v16 + 8) |= 0x40u;
      *v47 = 0LL;
    }
    ObfReferenceObjectWithTag(*(PVOID *)(v16 + 176), 0x72437350u);
    *((_QWORD *)v35 + 137) = *(_QWORD *)(v16 + 176);
    if ( (v17 & 0x4000) == 0 )
    {
      SectionInformation = PspDetectComplusILImage(v16, &a9);
      if ( SectionInformation < 0 )
        goto LABEL_234;
      if ( v45 == 332 && (a9 & 8) == 0 )
      {
        if ( (unsigned int)PsWow64IsMachineSupported(332LL) )
        {
          v125 = v111;
LABEL_300:
          v17 |= 0x4000u;
          v120 = v17;
          goto LABEL_60;
        }
        if ( (unsigned int)PsWow64IsMachineSupported(452LL) )
        {
          LOWORD(v125) = v112;
          goto LABEL_300;
        }
        a9 |= 8u;
      }
    }
LABEL_60:
    if ( *v47 )
    {
      if ( *(char *)(v16 + 8) >= 0 )
      {
        ImageFileKeyOption = RtlQueryImageFileKeyOption(*v47, 2, (__int64)&v153);
        if ( ImageFileKeyOption == -2147483643 || ImageFileKeyOption >= 0 && (_DWORD)v153 == 2 && v133 )
        {
          SectionInformation = -1073741767;
          v109 = 5LL;
          goto LABEL_295;
        }
      }
      v128 = 0;
      RtlQueryImageFileKeyOption(*v47, 4, 0LL);
      if ( !v146 )
        PspReadIFEONodeOptions(v35, *v47, &v132);
      v139 = 0;
      if ( (int)RtlQueryImageFileKeyOption(*v47, 4, 0LL) >= 0 && v139 )
        v130 |= 0x40u;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = *v47;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
      {
        PspReadIFEOPerfOptions(KeyHandle, (__int64)v180);
        ObCloseHandle(KeyHandle, 0);
      }
    }
    goto LABEL_61;
  }
  return result;
}
