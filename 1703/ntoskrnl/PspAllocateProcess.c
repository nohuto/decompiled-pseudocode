/*
 * XREFs of PspAllocateProcess @ 0x14049E8B8
 * Callers:
 *     PspCreateProcess @ 0x14045D9C0 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x1405D991C (PsCreateMinimalProcess.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     KeFirstGroupAffinityEx @ 0x14002FE30 (KeFirstGroupAffinityEx.c)
 *     MmGetDefaultPagePriority @ 0x1400448EC (MmGetDefaultPagePriority.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     MmDetachSession @ 0x140073870 (MmDetachSession.c)
 *     KeQueryAffinityProcess @ 0x140084ED0 (KeQueryAffinityProcess.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     KeQuerySystemTimeUnsafe @ 0x1401104F8 (KeQuerySystemTimeUnsafe.c)
 *     KeQueryMaximumGroupCount @ 0x140110530 (KeQueryMaximumGroupCount.c)
 *     PoEnergyEstimationEnabled @ 0x140110540 (PoEnergyEstimationEnabled.c)
 *     KeQuerySystemTimePrecise @ 0x140110600 (KeQuerySystemTimePrecise.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeQueryActiveGroupCount @ 0x14012E4F0 (KeQueryActiveGroupCount.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KeSecureProcess @ 0x1401FD19C (KeSecureProcess.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PspWow64GetSharedInformation @ 0x1404267A8 (PspWow64GetSharedInformation.c)
 *     MmSecureVirtualMemory @ 0x14043F030 (MmSecureVirtualMemory.c)
 *     SeIsTokenAssignableToProcess @ 0x14043FBC0 (SeIsTokenAssignableToProcess.c)
 *     SeQuerySessionIdToken @ 0x140442230 (SeQuerySessionIdToken.c)
 *     RtlpOpenImageFileOptionsKey @ 0x140443B68 (RtlpOpenImageFileOptionsKey.c)
 *     PspAssignProcessQuotaBlock @ 0x140448638 (PspAssignProcessQuotaBlock.c)
 *     PspDetectComplusILImage @ 0x1404494A4 (PspDetectComplusILImage.c)
 *     PspReadIFEONodeOptions @ 0x140449578 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x1404495D0 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1404497B8 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x14044BAB8 (RtlAcquirePrivilege.c)
 *     PspSelectNodeForProcess @ 0x14044D364 (PspSelectNodeForProcess.c)
 *     PspSetupReservedUserMappings @ 0x14044ED4C (PspSetupReservedUserMappings.c)
 *     PspInheritQuota @ 0x140451158 (PspInheritQuota.c)
 *     PspHardenMitigationOptions @ 0x140452338 (PspHardenMitigationOptions.c)
 *     PspApplyWin32kFilterOptions @ 0x140454534 (PspApplyWin32kFilterOptions.c)
 *     RtlReleasePrivilege @ 0x140455794 (RtlReleasePrivilege.c)
 *     PspApplyIFEOPerfOptions @ 0x140459300 (PspApplyIFEOPerfOptions.c)
 *     MmCreatePeb @ 0x14049B450 (MmCreatePeb.c)
 *     PspSetupUserProcessAddressSpace @ 0x14049BA50 (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x14049BCB0 (PspPrepareSystemDllInitBlock.c)
 *     PspMapSiloSharedDataView @ 0x14049BEE0 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14049BF18 (MmMapApiSetView.c)
 *     PspInitializeFullProcessImageName @ 0x14049C5B4 (PspInitializeFullProcessImageName.c)
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 *     ObInitProcess @ 0x14049CA68 (ObInitProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x14049DBB4 (MmInitializeProcessAddressSpace.c)
 *     PspApplyMitigationOptions @ 0x1404A0710 (PspApplyMitigationOptions.c)
 *     PspInheritMitigationOptions @ 0x1404A0C50 (PspInheritMitigationOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x1404A0D20 (PspReadIFEOMitigationOptions.c)
 *     PspComputeQuantumAndPriority @ 0x1404A0F18 (PspComputeQuantumAndPriority.c)
 *     PspInitializeProcessSecurity @ 0x1404A1020 (PspInitializeProcessSecurity.c)
 *     KeInitializeProcess @ 0x1404A1214 (KeInitializeProcess.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x1404A1364 (MmGetSessionSchedulingGroupByProcess.c)
 *     PspSetProcessPriorityClass @ 0x1404A5834 (PspSetProcessPriorityClass.c)
 *     PspAttachSession @ 0x1404C814C (PspAttachSession.c)
 *     MmGetSectionInformation @ 0x1404ECBAC (MmGetSectionInformation.c)
 *     PspWritePebAffinityInfo @ 0x1404ED074 (PspWritePebAffinityInfo.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     PsQueryProcessAttributes @ 0x1404F7258 (PsQueryProcessAttributes.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ExCreateHandleEx @ 0x140517CF0 (ExCreateHandleEx.c)
 *     PsWow64GetProcessMachine @ 0x14053B210 (PsWow64GetProcessMachine.c)
 *     PspUpdateCreateInfo @ 0x140544DD0 (PspUpdateCreateInfo.c)
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 *     SmpKeyedStoreCreate @ 0x14056849C (SmpKeyedStoreCreate.c)
 *     MmIsSessionLeaderProcess @ 0x14057F330 (MmIsSessionLeaderProcess.c)
 *     MmInitializeHandBuiltProcess @ 0x1405D1CE0 (MmInitializeHandBuiltProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1405D36C0 (MmInitializeHandBuiltProcess2.c)
 *     MmGetSectionStrongImageReference @ 0x1406BF1BC (MmGetSectionStrongImageReference.c)
 *     PspSetProcessAffinitySafe @ 0x1406E0848 (PspSetProcessAffinitySafe.c)
 */

__int64 __fastcall PspAllocateProcess(
        ULONG_PTR a1,
        KPROCESSOR_MODE a2,
        volatile signed __int32 *a3,
        char a4,
        char a5,
        char a6,
        void *a7,
        void *a8,
        int a9,
        __int64 a10,
        int a11,
        ULONG_PTR **a12,
        __int64 a13,
        _QWORD *a14)
{
  int v15; // r15d
  __int64 v16; // r13
  unsigned int v17; // edi
  __int64 result; // rax
  unsigned int v19; // esi
  int MaximumGroupCount; // eax
  int v21; // ecx
  int v22; // r9d
  unsigned int v23; // r12d
  char *v24; // r15
  int v25; // r9d
  char *v26; // rcx
  unsigned __int64 Flink; // rax
  int v28; // r12d
  char *v29; // rcx
  int v30; // eax
  ULONG_PTR v31; // rsi
  int v32; // edx
  int DefaultPagePriority; // r8d
  PVOID v34; // rbx
  int SectionInformation; // esi
  void *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // edi
  unsigned __int16 v40; // bx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // r9d
  HANDLE *v44; // r12
  NTSTATUS v45; // eax
  bool v46; // zf
  int v47; // ebx
  int v48; // eax
  NTSTATUS v49; // eax
  int v50; // r12d
  _WORD *PoolWithTag; // rax
  __int64 v52; // rax
  __int16 v53; // cx
  ULONG v54; // ebx
  KPROCESSOR_MODE v55; // al
  __int16 v56; // si
  bool v57; // sf
  volatile signed __int32 *v58; // rbx
  ULONG_PTR v59; // r12
  void *v60; // rbx
  ULONG v61; // esi
  PACCESS_TOKEN v62; // r12
  int v63; // eax
  __int64 v64; // rdx
  struct _KPROCESS *v65; // rdx
  unsigned __int64 v66; // r8
  unsigned __int16 v67; // bx
  __int64 SessionSchedulingGroupByProcess; // rax
  char v69; // dl
  int v70; // ecx
  _BYTE *v71; // r9
  unsigned int v72; // r8d
  int inited; // eax
  __int64 v74; // rdx
  __int64 v75; // r9
  __int64 v76; // rdx
  int v77; // ebx
  int v78; // eax
  int v79; // eax
  int v80; // edx
  ULONG_PTR v81; // r12
  unsigned int v82; // ebx
  PVOID v83; // rax
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rax
  int v87; // ecx
  int v88; // eax
  _OWORD *v89; // r12
  __int64 v90; // rax
  __int16 v91; // cx
  __int16 v92; // cx
  unsigned __int64 *v93; // r12
  __int16 v94; // cx
  __int64 v95; // r8
  __int64 v96; // r8
  unsigned int v97; // eax
  struct _KTHREAD *v98; // rsi
  volatile signed __int64 *v99; // r12
  __int64 v100; // rax
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v102; // rcx
  unsigned __int8 PreviousModea; // [rsp+60h] [rbp-408h]
  char v105[3]; // [rsp+61h] [rbp-407h] BYREF
  int v106; // [rsp+64h] [rbp-404h]
  int v107; // [rsp+68h] [rbp-400h]
  __int16 v108; // [rsp+6Ch] [rbp-3FCh]
  int v109; // [rsp+70h] [rbp-3F8h]
  char v110; // [rsp+74h] [rbp-3F4h] BYREF
  char v111[3]; // [rsp+75h] [rbp-3F3h] BYREF
  unsigned int v112; // [rsp+78h] [rbp-3F0h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-3E8h]
  ULONG v114; // [rsp+88h] [rbp-3E0h] BYREF
  int v115; // [rsp+8Ch] [rbp-3DCh]
  PVOID Object; // [rsp+90h] [rbp-3D8h]
  int v117; // [rsp+98h] [rbp-3D0h]
  ULONG SessionId; // [rsp+9Ch] [rbp-3CCh] BYREF
  PVOID TokenInformation; // [rsp+A0h] [rbp-3C8h] BYREF
  __int64 v120; // [rsp+A8h] [rbp-3C0h] BYREF
  volatile signed __int32 *v121; // [rsp+B0h] [rbp-3B8h]
  ULONG v122; // [rsp+B8h] [rbp-3B0h] BYREF
  PVOID v123; // [rsp+C0h] [rbp-3A8h]
  struct _KPROCESS *Process; // [rsp+C8h] [rbp-3A0h]
  PVOID v125; // [rsp+D0h] [rbp-398h]
  ULONG v126; // [rsp+D8h] [rbp-390h] BYREF
  int v127; // [rsp+DCh] [rbp-38Ch]
  int v128; // [rsp+E0h] [rbp-388h]
  int v129; // [rsp+E4h] [rbp-384h]
  int v130; // [rsp+E8h] [rbp-380h]
  ULONG_PTR v131; // [rsp+F0h] [rbp-378h]
  __int64 v132; // [rsp+F8h] [rbp-370h]
  unsigned __int64 v133; // [rsp+100h] [rbp-368h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp-360h]
  __int64 v135; // [rsp+110h] [rbp-358h] BYREF
  __int64 v136; // [rsp+118h] [rbp-350h]
  __int64 v137; // [rsp+120h] [rbp-348h]
  PACCESS_TOKEN Token; // [rsp+128h] [rbp-340h]
  __int64 v139; // [rsp+130h] [rbp-338h] BYREF
  PVOID ReturnedState; // [rsp+138h] [rbp-330h] BYREF
  void *v141; // [rsp+140h] [rbp-328h] BYREF
  __int128 v142; // [rsp+148h] [rbp-320h] BYREF
  __int64 v143; // [rsp+158h] [rbp-310h]
  ULONG_PTR v144; // [rsp+160h] [rbp-308h]
  __int64 v145; // [rsp+170h] [rbp-2F8h]
  HANDLE KeyHandle; // [rsp+180h] [rbp-2E8h] BYREF
  HANDLE Handle; // [rsp+188h] [rbp-2E0h] BYREF
  __int64 v148; // [rsp+190h] [rbp-2D8h]
  char v149[8]; // [rsp+198h] [rbp-2D0h] BYREF
  ULONG_PTR **v150; // [rsp+1A0h] [rbp-2C8h]
  char *v151; // [rsp+1A8h] [rbp-2C0h]
  __int64 v152; // [rsp+1B0h] [rbp-2B8h]
  _QWORD *v153; // [rsp+1B8h] [rbp-2B0h]
  _BYTE *v154; // [rsp+1C0h] [rbp-2A8h]
  __int64 v155; // [rsp+1C8h] [rbp-2A0h] BYREF
  _QWORD *v156; // [rsp+1D0h] [rbp-298h]
  int v157; // [rsp+1D8h] [rbp-290h]
  int v158; // [rsp+1DCh] [rbp-28Ch]
  __m128i v159; // [rsp+1E0h] [rbp-288h] BYREF
  __int128 v160; // [rsp+1F0h] [rbp-278h] BYREF
  __int128 v161; // [rsp+200h] [rbp-268h] BYREF
  __m128i v162; // [rsp+210h] [rbp-258h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+220h] [rbp-248h] BYREF
  OBJECT_ATTRIBUTES v164; // [rsp+250h] [rbp-218h] BYREF
  char v165[46]; // [rsp+280h] [rbp-1E8h] BYREF
  __int16 v166; // [rsp+2AEh] [rbp-1BAh]
  char v167; // [rsp+2B3h] [rbp-1B5h]
  int v168; // [rsp+2C0h] [rbp-1A8h]
  __m128i v169; // [rsp+2D0h] [rbp-198h] BYREF
  _QWORD v170[4]; // [rsp+2E0h] [rbp-188h] BYREF
  $5BC46E0569261879018906DEC3127961 v171; // [rsp+300h] [rbp-168h] BYREF
  _WORD v172[88]; // [rsp+330h] [rbp-138h] BYREF
  ULONG Privilege[6]; // [rsp+3E0h] [rbp-88h] BYREF
  _WORD v174[20]; // [rsp+3F8h] [rbp-70h] BYREF

  v15 = (int)a3;
  v121 = a3;
  BugCheckParameter1 = a1;
  v144 = a1;
  v123 = a7;
  Token = a8;
  v16 = a10;
  v145 = a10;
  v150 = a12;
  v152 = a13;
  v156 = a14;
  v17 = 0;
  v106 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v137 = 0LL;
  v120 = 0LL;
  v127 = 0;
  v117 = 0;
  v125 = 0LL;
  v109 = 0;
  v108 = 0;
  v115 = 0;
  v130 = 0;
  v143 = 0LL;
  v129 = 0;
  v148 = 0LL;
  v128 = 0;
  v107 = a9;
  if ( (a9 & 0x800) != 0 )
  {
    v17 = 1024;
    v106 = 1024;
    if ( (a9 & 0x2000) != 0 )
    {
      v17 = 66560;
      if ( (a9 & 0x4000) != 0 )
        v17 = 197632;
      v106 = v17;
    }
  }
  v131 = a1 & -(__int64)((a9 & 0x100) != 0);
  if ( a10 && (*(_DWORD *)(a10 + 4) & 0x2000) != 0 )
  {
    if ( (a1 & -(__int64)((a9 & 0x100) != 0)) != 0 )
      return 3221225520LL;
    v137 = KeNodeBlock[*(unsigned __int16 *)(a10 + 250)];
    v120 = v137;
    v131 = 0LL;
  }
  else if ( a1 )
  {
    v131 = a1 & -(__int64)((a9 & 0x100) != 0);
    if ( (*(_DWORD *)(a1 + 768) & 0x200000) != 0 )
    {
      v131 = a1;
      v117 = 0x200000;
    }
  }
  if ( a10 && (*(_DWORD *)(a10 + 4) & 0x40000) != 0 )
  {
    v17 |= 0x1000u;
    v106 = v17;
  }
  memset(v170, 0, sizeof(v170));
  ReturnedState = 0LL;
  v19 = 2080;
  v112 = 0;
  v132 = 0LL;
  if ( !PsDisableDiskCounters )
  {
    v19 = 2120;
    v17 |= 0x200u;
    v106 = v17;
    v132 = 2080LL;
  }
  if ( PoEnergyEstimationEnabled() )
  {
    v157 = 384;
    v158 = 8;
    v112 = (v19 + 7) & 0xFFFFFFF8;
    v19 = v112 + 384;
    v17 |= 0x2000u;
    v106 = v17;
    v15 = (int)v121;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LODWORD(v121) = MaximumGroupCount;
  v23 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v23 = (v19 + 7) & 0xFFFFFFF8;
    v19 = 16 * (unsigned __int16)MaximumGroupCount + v23;
  }
  LOBYTE(v22) = a2;
  LOBYTE(v21) = a2;
  result = ObCreateObjectEx(v21, (_DWORD)PsProcessType, v15, v22);
  if ( (int)result < 0 )
    return result;
  v24 = (char *)Object;
  ObfReferenceObjectWithTag(Object, 0x72437350u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  memset(Object, 0, v19);
  memset((char *)Object + 1616, 0, 0x20uLL);
  *((_QWORD *)Object + 202) = 0LL;
  *((_QWORD *)v24 + 204) = v24 + 1624;
  *((_QWORD *)v24 + 203) = v24 + 1624;
  ExInitializePushLock((PKSPIN_LOCK)v24 + 95);
  *((_QWORD *)v24 + 91) = 0LL;
  *((_QWORD *)v24 + 146) = v24 + 1160;
  *((_QWORD *)v24 + 145) = v24 + 1160;
  *((_QWORD *)v24 + 223) = v24 + 1776;
  *((_QWORD *)v24 + 222) = v24 + 1776;
  *((_QWORD *)v24 + 251) = v24 + 2000;
  *((_QWORD *)v24 + 250) = v24 + 2000;
  v154 = v24 + 1738;
  v24[1738] = a4;
  v24[1736] = a5;
  v24[1737] = a6;
  v25 = v17 & 0x400;
  if ( (v17 & 0x400) != 0 )
    *((_DWORD *)v24 + 435) |= 1u;
  if ( (v107 & 0x8000) != 0 )
    *((_DWORD *)v24 + 435) |= 0x80u;
  if ( v23 )
  {
    *((_DWORD *)v24 + 435) |= 0x200u;
    v26 = &v24[v23];
    *((_QWORD *)v24 + 241) = v26;
    *((_QWORD *)v24 + 242) = &v26[8 * (unsigned int)v121];
  }
  Flink = (unsigned __int64)Process[1].Header.WaitListHead.Flink;
  v28 = v107;
  if ( (v107 & 0x200) == 0 )
    Flink |= 2uLL;
  *((_QWORD *)v24 + 126) = Flink;
  if ( (v17 & 0x200) != 0 )
    *((_QWORD *)v24 + 225) = &v24[v132];
  if ( (v17 & 0x2000) != 0 )
  {
    v29 = &v24[v112];
    *((_QWORD *)v24 + 229) = v29;
    *((_QWORD *)v29 + 44) = 0LL;
    *((_QWORD *)v29 + 43) = 0LL;
    if ( PopEtGlobals )
      *((_QWORD *)v29 + 45) = PopEtGlobals + 208;
  }
  if ( v16 && (*(_DWORD *)(v16 + 4) & 0x200) != 0 )
  {
    v30 = *(_DWORD *)(v16 + 316);
    v31 = BugCheckParameter1;
  }
  else
  {
    v31 = BugCheckParameter1;
    if ( BugCheckParameter1 )
      v30 = *(_DWORD *)(BugCheckParameter1 + 1184);
    else
      v30 = 5;
  }
  v151 = v24 + 1184;
  *((_DWORD *)v24 + 296) = v30;
  *((_DWORD *)v24 + 393) = 259;
  if ( v31 )
  {
    v32 = (*(_DWORD *)(v31 + 772) >> 27) & 7;
    DefaultPagePriority = (*(_DWORD *)(v31 + 768) >> 12) & 7;
    *((_QWORD *)v24 + 124) = *(_QWORD *)(v31 + 736);
  }
  else
  {
    DefaultPagePriority = MmGetDefaultPagePriority();
  }
  v132 = (__int64)(v24 + 772);
  *((_DWORD *)v24 + 193) = *((_DWORD *)v24 + 193) & 0xC7FFFFFF | (v32 << 27);
  v121 = (volatile signed __int32 *)(v24 + 768);
  *((_DWORD *)v24 + 192) = (DefaultPagePriority << 12) | *((_DWORD *)v24 + 192) & 0xFFFF8FFF;
  v34 = v123;
  if ( !v25 )
  {
    v125 = v123;
    if ( v123 )
    {
      if ( (v28 & 0x1000) != 0 )
      {
LABEL_49:
        SectionInformation = -1073741776;
LABEL_351:
        PspRundownSingleProcess((ULONG_PTR)v24);
        ObfDereferenceObjectWithTag(v24, 0x72437350u);
        return (unsigned int)SectionInformation;
      }
      ObfReferenceObject(v123);
    }
    else if ( v31 )
    {
      if ( a11 )
        goto LABEL_49;
      if ( (PEPROCESS)v31 == PsInitialSystemProcess )
      {
        SectionInformation = -1073741811;
        goto LABEL_351;
      }
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v31 + 760)) )
      {
        v36 = *(void **)(v31 + 952);
        v123 = v36;
        if ( v36 )
          ObfReferenceObject(v36);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v31 + 760));
      }
      v34 = v123;
      if ( !v123 )
      {
        SectionInformation = -1073741558;
        goto LABEL_351;
      }
      v37 = *(_QWORD *)(v31 + 1064);
      if ( v37 )
      {
        v17 |= 0x4000u;
        v106 = v17;
        v109 = *(unsigned __int16 *)(v37 + 8);
        v108 = v109;
      }
      if ( (*(_DWORD *)(v31 + 772) & 0x20000) != 0 )
      {
        v107 = v28 | 8;
        a9 = v28 | 8;
      }
    }
  }
  v153 = v24 + 952;
  *((_QWORD *)v24 + 119) = v34;
  LOWORD(v112) = 0;
  if ( !v16 )
  {
    if ( v34 )
    {
      SectionInformation = MmGetSectionInformation(v34, 4LL, v165);
      if ( SectionInformation < 0 )
        goto LABEL_351;
      v17 |= 32 * (v167 & 4 | (4 * (v167 & 2 | ((v168 & 4) << 9))));
      v106 = v17;
      LOWORD(v112) = v166;
      LOBYTE(v47) = v107;
      if ( !v125 )
      {
        v127 = 8;
        v17 |= 0x800u;
        v106 = v17;
      }
      goto LABEL_127;
    }
LABEL_126:
    LOBYTE(v47) = v107;
    goto LABEL_127;
  }
  *((_QWORD *)v24 + 216) = *(_QWORD *)(v16 + 456);
  SectionInformation = MmGetSectionInformation(v34, 4LL, v16 + 48);
  if ( SectionInformation < 0 )
    goto LABEL_351;
  v38 = *(unsigned __int8 *)(v16 + 99);
  v39 = v17 | (32 * (*(_BYTE *)(v16 + 99) & 4 | (4 * (*(_BYTE *)(v16 + 99) & 2 | ((*(_DWORD *)(v16 + 112) & 4) << 9)))));
  v40 = *(_WORD *)(v16 + 96);
  if ( (v39 & 0x100) != 0 && v40 == 332 && (v38 & 1) != 0 )
    v41 = 0x8000;
  else
    v41 = 0;
  v17 = v41 | v39;
  v106 = v17;
  if ( v40 == 14948 )
    v40 = 332;
  if ( (*(_WORD *)(v16 + 92) & *(_WORD *)(v16 + 10)) != 0 )
  {
    SectionInformation = -1073741701;
LABEL_76:
    v42 = 3LL;
LABEL_77:
    PspUpdateCreateInfo(v42, v16, 0LL);
    goto LABEL_351;
  }
  if ( (v17 & 0x8000) == 0 )
  {
    if ( PspWow64GetSharedInformation(v40, 6) )
    {
      v17 |= 0x4000u;
      v106 = v17;
      v109 = v40;
      v108 = v40;
    }
    if ( (v17 & v43) == 0
      && (v40 < MEMORY[0xFFFFF7800000002C] || v40 > MEMORY[0xFFFFF7800000002E])
      && (v17 & 0x4000) == 0 )
    {
      SectionInformation = -1073741701;
      v42 = 4LL;
      goto LABEL_77;
    }
  }
  if ( !v125 )
    goto LABEL_126;
  LOWORD(v112) = *(_WORD *)(v16 + 94);
  v44 = (HANDLE *)(v16 + 192);
  v45 = RtlpOpenImageFileOptionsKey((unsigned __int16 *)(v16 + 232), v38, (HANDLE *)(v16 + 192));
  if ( v45 < 0 )
  {
    if ( v45 == -1073741772 )
      *(_BYTE *)(v16 + 8) |= 0x40u;
    *v44 = 0LL;
  }
  ObfReferenceObjectWithTag(*(PVOID *)(v16 + 176), 0x72437350u);
  *((_QWORD *)v24 + 137) = *(_QWORD *)(v16 + 176);
  if ( (v17 & 0x4000) != 0 )
  {
    v47 = v107;
  }
  else
  {
    SectionInformation = PspDetectComplusILImage(v16, &a9);
    if ( SectionInformation < 0 )
      goto LABEL_351;
    v46 = v40 == 332;
    v47 = a9;
    v107 = a9;
    if ( v46 && (a9 & 8) == 0 )
    {
      v17 |= 0x4000u;
      v106 = v17;
      if ( PspWow64GetSharedInformation(0x14Cu, 6) )
        v48 = 332;
      else
        v48 = 452;
      v109 = v48;
      v108 = v48;
    }
  }
  if ( *v44 )
  {
    if ( *(_BYTE *)(v16 + 8) < 0x80u )
    {
      v49 = RtlQueryImageFileKeyOption(*v44, L"Debugger", 1, &v122, 2u, (unsigned int *)&v139);
      if ( v49 == -2147483643 || v49 >= 0 && (_DWORD)v139 == 2 && (_WORD)v122 )
      {
        SectionInformation = -1073741767;
        v42 = 5LL;
        goto LABEL_77;
      }
    }
    v114 = 0;
    if ( RtlQueryImageFileKeyOption(*v44, L"UseLargePages", 4, &v114, 4u, 0LL) >= 0 )
    {
      if ( v114 )
      {
        v47 |= 0x10u;
        v107 = v47;
        a9 = v47;
        if ( (v17 & 0x4000) == 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = *v44;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
          {
            v114 = 0;
            if ( RtlQueryImageFileKeyOption(KeyHandle, L"ntdll.dll", 4, &v114, 4u, 0LL) >= 0 && v114 )
            {
              v47 |= 0x20u;
              v107 = v47;
              a9 = v47;
            }
            ObCloseHandle(KeyHandle, 0);
          }
        }
      }
    }
    if ( !v131 )
    {
      PspReadIFEONodeOptions((__int64)v24, *v44, &v120);
      v137 = v120;
    }
    v126 = 0;
    if ( RtlQueryImageFileKeyOption(*v44, L"ForceWakeCharge", 4, &v126, 4u, 0LL) >= 0 && v126 )
      v117 |= 0x40u;
    v164.Length = 48;
    v164.RootDirectory = *v44;
    v164.Attributes = 576;
    v164.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
    *(_OWORD *)&v164.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 1u, &v164) >= 0 )
    {
      PspReadIFEOPerfOptions(Handle, (__int64)v170);
      ObCloseHandle(Handle, 0);
    }
  }
LABEL_127:
  v50 = v127 | 0x20000;
  if ( (v47 & 8) == 0 )
    v50 = v127;
  if ( (v17 & 0x4000) != 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50776F57u);
    *((_QWORD *)v24 + 133) = PoolWithTag;
    if ( !PoolWithTag )
    {
      SectionInformation = -1073741801;
      goto LABEL_351;
    }
    PoolWithTag[4] = v109;
    v52 = *((_QWORD *)v24 + 133);
    if ( v52 )
    {
      v53 = *(_WORD *)(v52 + 8);
      if ( v53 == 332 || v53 == 452 )
        *(_QWORD *)v52 = 1LL;
    }
  }
  SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
  if ( SectionInformation < 0 )
    goto LABEL_351;
  if ( (v112 & 0x1000) != 0 && !(_DWORD)TokenInformation )
  {
    SectionInformation = -1073741790;
    if ( !v16 )
      goto LABEL_351;
    goto LABEL_76;
  }
  v54 = 0;
  v55 = a2;
  if ( a2 )
  {
    if ( v16 && (*(_DWORD *)(v16 + 4) & 0x100) != 0 && *(_BYTE *)(v16 + 248) == 4 )
    {
      Privilege[0] = 14;
      v54 = 1;
    }
    if ( a11 )
      Privilege[v54++] = 3;
    v56 = v107;
    if ( (v107 & 0x30) != 0 )
      Privilege[v54++] = 4;
    if ( (v56 & 0x80u) != 0 && !(unsigned int)MmIsSessionLeaderProcess(Process) )
      Privilege[v54++] = 10;
    if ( (v56 & 0x8400) != 0 )
      Privilege[v54++] = 7;
    if ( v54 )
    {
      v57 = RtlAcquirePrivilege(Privilege, v54, a11 != 0, &ReturnedState) < 0;
      v55 = a2;
      if ( !v57 )
      {
        v17 |= 0x10u;
        v106 = v17;
      }
    }
    else
    {
      v55 = a2;
    }
  }
  else
  {
    v56 = v107;
  }
  if ( (v56 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v55) )
    goto LABEL_162;
  *(_DWORD *)v132 |= v50;
  v58 = v121;
  *v121 |= v117;
  v59 = BugCheckParameter1;
  if ( BugCheckParameter1 )
  {
    v60 = 0LL;
    v141 = 0LL;
    v61 = 0;
    SessionId = 0;
    v105[0] = 0;
    if ( (*(_DWORD *)(BugCheckParameter1 + 1740) & 0x80000) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)v24 + 435, 0x80000u);
      v107 = a9;
      v137 = v120;
      v24 = (char *)Object;
      v60 = v141;
      v61 = SessionId;
    }
    if ( a11 )
    {
      if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2) )
        v17 |= 4u;
      v62 = Token;
      SectionInformation = SeIsTokenAssignableToProcess((__int64)Token, v105);
      if ( SectionInformation < 0 )
        goto LABEL_349;
      if ( !v105[0] && (v17 & 4) == 0 )
        goto LABEL_162;
      SectionInformation = SeQuerySessionIdToken(v62, &SessionId);
      if ( SectionInformation < 0 )
        goto LABEL_349;
      v63 = MmGetSessionIdEx(Process);
      v61 = SessionId;
      if ( SessionId != v63 )
      {
        if ( (v17 & 4) == 0 )
        {
LABEL_162:
          SectionInformation = -1073741727;
          goto LABEL_349;
        }
        if ( (v107 & 0x80u) != 0 )
        {
          SectionInformation = -1073741811;
          goto LABEL_349;
        }
        v17 |= 1u;
      }
    }
    else if ( !v125 )
    {
      v61 = MmGetSessionIdEx((struct _KPROCESS *)BugCheckParameter1);
      SessionId = v61;
      v17 |= v61 != (unsigned int)MmGetSessionIdEx(Process);
    }
    if ( (v17 & 1) != 0 )
    {
      SectionInformation = PspAttachSession(v61, &v171, &v141);
      if ( SectionInformation < 0 )
      {
        LOBYTE(v17) = v17 & 0xFE;
        goto LABEL_349;
      }
      *v121 |= 0x80u;
      v60 = v141;
    }
    if ( !a11 || v105[0] )
    {
      v59 = BugCheckParameter1;
      v65 = (struct _KPROCESS *)BugCheckParameter1;
      if ( v105[0] )
        v65 = Process;
      PspInheritQuota((__int64)v24, (__int64)v65);
    }
    else
    {
      SectionInformation = PspAssignProcessQuotaBlock(0LL, (__int64)v24, (__int64)Token);
      if ( SectionInformation < 0 )
      {
        if ( (v17 & 1) != 0 )
        {
          MmDetachSession((__int64)v60, (__int64)&v171);
          ObfDereferenceObject(v60);
        }
        goto LABEL_349;
      }
      v59 = BugCheckParameter1;
    }
    v66 = PspMaximumWorkingSet;
    if ( (v170[0] & 0x100000000LL) != 0 )
      v66 = v170[3];
    v17 |= 32 * (MmCreateProcessAddressSpace(v150, v64, v66, BYTE4(v170[0]) & 1, (__int64)v24) & 1);
    v106 = v17;
    if ( (v17 & 1) != 0 )
    {
      MmDetachSession((__int64)v60, (__int64)&v171);
      ObfDereferenceObject(v60);
    }
    if ( (v17 & 0x20) == 0 )
      goto LABEL_198;
    v58 = v121;
  }
  else
  {
    PspInheritQuota((__int64)v24, 0LL);
    v24[640] = 1;
    SectionInformation = MmInitializeHandBuiltProcess();
    if ( SectionInformation < 0 )
      goto LABEL_349;
  }
  if ( v131 )
  {
    KeQueryAffinityProcess(v131, (__int64)v172, 0LL, (__int64)v174);
    KeFirstGroupAffinityEx(&v135, v172);
    v120 = KeNodeBlock[(unsigned __int16)v174[(unsigned __int16)v136]];
  }
  else
  {
    if ( v137 )
    {
      v67 = *(_WORD *)(v137 + 144);
    }
    else if ( v59 )
    {
      if ( (*(_DWORD *)(v59 + 768) & 0x100000) != 0 )
      {
        _InterlockedOr(v58, 0x100000u);
        v120 = KeNodeBlock[*(unsigned __int16 *)(v59 + 568)];
        v67 = *(_WORD *)(v120 + 144);
      }
      else
      {
        v120 = PspSelectNodeForProcess();
        v67 = *(_WORD *)(v120 + 144);
        if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v67 )
        {
          v120 = 0LL;
          v67 = 1;
        }
      }
    }
    else
    {
      v67 = 0;
    }
    v136 = v67;
    v135 = qword_1403E42B8[v67];
  }
  _InterlockedOr((volatile signed __int32 *)v132, 0x40000u);
  v24 = (char *)Object;
  SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess(Object);
  SectionInformation = KeInitializeProcess(v70, 8, (unsigned int)&v135, v120, SessionSchedulingGroupByProcess, v69);
  if ( SectionInformation < 0 )
    goto LABEL_349;
  if ( v16 )
  {
    v115 = *(_DWORD *)(v16 + 408);
    v130 = *(_DWORD *)(v16 + 412);
    v143 = *(_QWORD *)(v16 + 416);
    v129 = *(_DWORD *)(v16 + 424);
    v148 = *(_QWORD *)(v16 + 432);
    v128 = *(_DWORD *)(v16 + 440);
  }
  SectionInformation = PspInitializeProcessSecurity(
                         (PEPROCESS)v59,
                         v115,
                         (v17 >> 11) & 1,
                         v130,
                         v143,
                         v129,
                         v148,
                         v128,
                         v152);
  if ( SectionInformation < 0 )
    goto LABEL_349;
  v24[1119] = 2;
  if ( v59 )
  {
    if ( ((*(_BYTE *)(v59 + 1119) - 1) & 0xFB) == 0 )
      v24[1119] = *(_BYTE *)(v59 + 1119);
    v71 = v16 ? *(_BYTE **)(v16 + 296) : 0LL;
    v72 = v16 ? *(_DWORD *)(v16 + 292) : 0;
    inited = ObInitProcess((struct _EX_RUNDOWN_REF *)(v59 & -(__int64)((a9 & 4) != 0)), (_KPROCESS *)v24, v72, v71);
  }
  else
  {
    *((_QWORD *)v24 + 131) = Process[1].ActiveProcessors.Bitmap[5];
    inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v24);
  }
  SectionInformation = inited;
  if ( inited < 0 )
    goto LABEL_349;
  if ( (v170[0] & 7) != 0 )
    PspApplyIFEOPerfOptions((__int64)v24, (unsigned int *)v170, a2, v75);
  if ( v16 )
  {
    if ( (*(_DWORD *)(v16 + 4) & 0x100) != 0 )
    {
      LOBYTE(v75) = a2;
      LOBYTE(v74) = *(_BYTE *)(v16 + 248);
      SectionInformation = PspSetProcessPriorityClass(v24, v74, 0LL, v75);
      if ( SectionInformation < 0 )
        goto LABEL_349;
    }
  }
  v24[444] = PspComputeQuantumAndPriority((_DWORD)v24, 0, (unsigned int)&v110, 0, 0LL);
  v24[445] = v110;
  SectionInformation = 0;
  v115 = 0;
  v169 = 0uLL;
  PspReadIFEOMitigationOptions(v16, &v169);
  v159 = v169;
  v160 = PspSystemMitigationOptions;
  PspInheritMitigationOptions(&v160, &v159, &v169);
  v76 = v169.m128i_i64[0];
  v77 = (v169.m128i_i8[6] & 3) << 16;
  if ( v16 && (*(_DWORD *)(v16 + 4) & 0x10000) != 0 )
  {
    v161 = *(_OWORD *)(v16 + 360);
    v162 = v169;
    PspInheritMitigationOptions(&v162, &v161, &v169);
    v76 = v169.m128i_i64[0];
  }
  if ( (_DWORD)TokenInformation )
    v77 |= 4u;
  if ( (v77 & 4) != 0 )
    v77 |= 0x100u;
  if ( (v77 & 0xFF00) != 0 )
  {
    v78 = PspHardenMitigationOptions(&v169);
    SectionInformation = v78;
    if ( v16 && (*(_DWORD *)(v16 + 4) & 0x10000) != 0 )
    {
      if ( v78 < 0 )
        goto LABEL_351;
      v76 = v169.m128i_i64[0];
    }
    else
    {
      v76 = v169.m128i_i64[0];
      if ( *(_OWORD *)&v169 == PspMitigationOptionsEmptyMap )
      {
        v169 = (__m128i)PspHardenedMitigationOptionsMap;
        v76 = PspHardenedMitigationOptionsMap;
      }
      SectionInformation = 0;
    }
  }
  if ( (v112 & 0x4000) != 0 && v17 >= 0x40000 )
    v79 = 32;
  else
    v79 = 0;
  if ( (v17 & 0x400) != 0 )
  {
    v169.m128i_i64[0] = v76 & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
    v169.m128i_i64[1] &= 0xFFFFFFFFFFFFFFFCuLL;
    v169.m128i_i64[1] |= 2uLL;
  }
  PspApplyMitigationOptions(
    v24,
    BugCheckParameter1,
    &v169,
    v79 | ((v112 & 0x4000) != 0 ? 8 : 0) | v77 | ((v17 & 0x180) != 0) | (2 * (((unsigned __int16)v112 >> 5) & 1u)));
  if ( v16 )
  {
    PspApplyWin32kFilterOptions((__int64)v24, v16);
    *(__m128i *)(v16 + 360) = v169;
  }
  PsQueryProcessAttributes(v24, 0LL, v111);
  v80 = ((_DWORD)TokenInformation != 0) | 2;
  if ( (a9 & 0x20000) == 0 )
    v80 = (_DWORD)TokenInformation != 0;
  if ( (dword_1403FA1A0 & 0xC) != 0 && !*((_WORD *)v24 + 726) && v80 )
    SmpKeyedStoreCreate((ULONG_PTR)&qword_1403FA1A8);
  if ( (a9 & 0x80u) != 0
    && !(unsigned int)MmIsSessionLeaderProcess(Process)
    && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
  {
    goto LABEL_162;
  }
  if ( (v17 & 0x400) != 0 || v125 )
  {
    SectionInformation = PspInitializeFullProcessImageName(v16, (__int64)v24);
    if ( SectionInformation < 0 )
      goto LABEL_349;
    if ( (v17 & 0x10000) != 0 )
    {
      v81 = BugCheckParameter1;
      v84 = MmInitializeProcessAddressSpace((__int64)v24, BugCheckParameter1, 0LL, (unsigned int *)&a9, (v17 >> 17) & 1);
    }
    else
    {
      v84 = MmInitializeProcessAddressSpace((__int64)v24, 0LL, (__int64)v123, (unsigned int *)&a9, 0);
      v81 = BugCheckParameter1;
    }
    SectionInformation = v84;
    if ( v84 < 0 )
      goto LABEL_349;
    if ( v16 )
    {
      v85 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)v123) + 32LL);
      v86 = *((_QWORD *)v24 + 120);
      if ( v85 != v86 )
        *(_QWORD *)(v16 + 48) += v86 - v85;
    }
    v115 = SectionInformation;
    v87 = v17 | 2;
    if ( (v17 & 0x400) != 0 )
      v87 = v17;
    v88 = 4 * (a9 & 0x10 | 2);
    LOWORD(v17) = v88 | v87;
    v106 = v88 | v87;
  }
  else
  {
    v81 = BugCheckParameter1;
    if ( BugCheckParameter1 )
    {
      *((_QWORD *)v24 + 120) = *(_QWORD *)(BugCheckParameter1 + 960);
      SectionInformation = MmInitializeProcessAddressSpace((__int64)v24, v81, 0LL, (unsigned int *)&a9, (v17 >> 11) & 1);
      if ( SectionInformation >= 0 )
      {
        v17 |= (4 * (a9 & 0x10)) | 2;
        v106 = v17;
        v82 = *(unsigned __int16 *)(*(_QWORD *)(v81 + 1128) + 2LL) + 16;
        v83 = ExAllocatePoolWithTag(NonPagedPoolNx, v82, 0x61506553u);
        *((_QWORD *)v24 + 141) = v83;
        if ( !v83 )
        {
LABEL_198:
          SectionInformation = -1073741670;
          goto LABEL_349;
        }
        memmove(v83, *(const void **)(v81 + 1128), v82);
        *(_QWORD *)(*((_QWORD *)v24 + 141) + 8LL) = *((_QWORD *)v24 + 141) + 16LL;
        *((_DWORD *)v24 + 242) = *(_DWORD *)(v81 + 968);
        if ( (a9 & 0x1000) != 0 )
        {
          *v153 = 0LL;
          ObfDereferenceObject(v123);
        }
        goto LABEL_286;
      }
LABEL_349:
      if ( (v17 & 0x10) != 0 )
        RtlReleasePrivilege(ReturnedState);
      goto LABEL_351;
    }
  }
LABEL_286:
  if ( (v17 & 0x10) != 0 )
    RtlReleasePrivilege(ReturnedState);
  if ( (unsigned __int16)PsWow64GetProcessMachine(v24) == 332 )
    *((_DWORD *)v24 + 110) |= 1u;
  if ( (v17 & 8) != 0 )
  {
    if ( v16 )
    {
      SectionInformation = PspSetupReservedUserMappings((_KPROCESS *)v24, &v171, (_QWORD *)v16);
      if ( SectionInformation < 0 )
        goto LABEL_351;
    }
  }
  if ( (v17 & 2) != 0 )
  {
    *(_QWORD *)&v142 = 0LL;
    *((_QWORD *)&v142 + 1) = -1LL;
    PreviousModea = ((((v17 & 0x40) != 0) ^ (2 * ((*v154 & 7) != 0))) & 2 ^ ((v17 & 0x40) != 0)) & 0x8B | (4 * ((16 * ((*v154 & 7) == 1)) | ((v17 & 0x80) != 0))) & 0xCF | (16 * (((_DWORD)TokenInformation != 0 ? 2 : 0) | v111[0] & 1));
    *(_DWORD *)((char *)&v142 + 3) = PreviousModea;
    if ( v125 )
    {
      SectionInformation = MmCreatePeb((_KPROCESS *)v24, (char *)&v142, (_QWORD *)v24 + 127, &v135);
      if ( SectionInformation < 0 )
      {
        *((_QWORD *)v24 + 127) = 0LL;
        goto LABEL_351;
      }
      if ( v135 )
      {
        _InterlockedAnd(v121, 0xFFCFFFFF);
        v24 = (char *)Object;
        PspSetProcessAffinitySafe((_DWORD)Object, 1, 0, (unsigned int)&v135, (__int64)v149);
      }
    }
    else
    {
      v89 = *(_OWORD **)(v81 + 1016);
      *((_QWORD *)v24 + 127) = v89;
      if ( (v17 & 0x800) == 0 )
      {
        LOBYTE(v142) = 1;
        KiStackAttachProcess((_KPROCESS *)v24, 0, (__int64)&v171);
        if ( MmSecureVirtualMemory(v89, 0x7A0uLL, 4u) )
          *v89 = v142;
        else
          SectionInformation = -1073741503;
        if ( SectionInformation >= 0 )
        {
          v90 = *((_QWORD *)v24 + 133);
          if ( v90 )
          {
            v91 = *(_WORD *)(v90 + 8);
            if ( v91 == 332 || v91 == 452 )
            {
              v92 = *(_WORD *)(v90 + 8);
              if ( v92 == 332 || v92 == 452 )
              {
                v93 = 0LL;
                v94 = *(_WORD *)(v90 + 8);
                if ( v94 == 332 || v94 == 452 )
                  v93 = *(unsigned __int64 **)v90;
                if ( MmSecureVirtualMemory(v93, 0x460uLL, 4u) )
                {
                  v133 = 0xFFFFFFFF00000001uLL;
                  BYTE3(v133) = PreviousModea;
                  *v93 = v133;
                }
                else
                {
                  SectionInformation = -1073741503;
                }
              }
            }
          }
        }
        KiUnstackDetachProcess(&v171, 0LL);
        if ( SectionInformation < 0 )
          goto LABEL_351;
      }
    }
  }
  if ( (v17 & 8) != 0 && v16 )
  {
    SectionInformation = PspSetupUserProcessAddressSpace(BugCheckParameter1, (_KPROCESS *)v24, &v171, v16);
  }
  else if ( (v17 & 2) != 0 && (v17 & 0x800) == 0 )
  {
    SectionInformation = 0;
    KiStackAttachProcess((_KPROCESS *)v24, 0, (__int64)&v171);
    PspWritePebAffinityInfo(CurrentThread, v24);
    if ( (v17 & 8) != 0 )
    {
      SectionInformation = MmMapApiSetView((__int64)v24);
      if ( SectionInformation >= 0 )
      {
        SectionInformation = PspMapSiloSharedDataView((__int64)v24);
        if ( SectionInformation >= 0 )
        {
          SectionInformation = PspPrepareSystemDllInitBlock(0LL, 0LL, v95);
          if ( SectionInformation >= 0 )
          {
            if ( *((_QWORD *)v24 + 133) )
            {
              if ( (unsigned __int16)v109 == 452 )
              {
                v97 = 2;
              }
              else
              {
                v97 = 3;
                if ( (unsigned __int16)v109 != 34404 )
                  v97 = 1;
              }
              SectionInformation = PspPrepareSystemDllInitBlock(v97, 0LL, v96);
            }
          }
        }
      }
    }
    KiUnstackDetachProcess(&v171, 0LL);
  }
  if ( SectionInformation < 0 )
    goto LABEL_351;
  v98 = CurrentThread;
  --CurrentThread->KernelApcDisable;
  v99 = (volatile signed __int64 *)(v24 + 728);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v24 + 728), 0LL);
  v100 = ExCreateHandleEx(PspCidTable, (_DWORD)v24, 0, 0, 0LL);
  *((_QWORD *)v24 + 92) = v100;
  if ( !v100 )
  {
    if ( (_InterlockedExchangeAdd64(v99, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v24 + 91);
    KeAbPostRelease((ULONG_PTR)(v24 + 728));
    KeLeaveCriticalRegionThread((__int64)v98);
    SectionInformation = -1073741670;
LABEL_338:
    v24 = (char *)Object;
    goto LABEL_351;
  }
  if ( (v17 & 0x1000) != 0 )
  {
    *((_QWORD *)v24 + 227) = **(_QWORD **)(v16 + 384);
    SectionInformation = MmGetSectionStrongImageReference(0LL, 0LL, *((_QWORD *)v24 + 119), &v155);
    if ( SectionInformation < 0
      || (SectionInformation = KeSecureProcess(
                                 (_KPROCESS *)v24,
                                 *((_QWORD *)v24 + 227),
                                 *((_QWORD *)v24 + 127),
                                 *((_QWORD *)v24 + 92),
                                 v155,
                                 *((_QWORD *)v24 + 120),
                                 *(_QWORD *)(v16 + 384),
                                 *(unsigned int *)(v16 + 400)),
          SectionInformation < 0) )
    {
      if ( (_InterlockedExchangeAdd64(v99, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v24 + 91);
      KeAbPostRelease((ULONG_PTR)(v24 + 728));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      goto LABEL_338;
    }
  }
  if ( KeQuerySystemTimeUnsafe() )
  {
    KeQuerySystemTimePrecise((LARGE_INTEGER *)v24 + 97);
  }
  else
  {
    v24 = (char *)Object;
    *((_QWORD *)Object + 97) = MEMORY[0xFFFFF78000000014];
  }
  *((_QWORD *)v24 + 232) = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v102 = Object;
  *((_QWORD *)Object + 233) = UnbiasedInterruptTime;
  v102[235] = *((_QWORD *)v24 + 232);
  *v156 = v102;
  return (unsigned int)v115;
}
