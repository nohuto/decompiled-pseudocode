/*
 * XREFs of PspAllocateProcess @ 0x1404ED888
 * Callers:
 *     NtCreateUserProcess @ 0x1404F200C (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x1405E9350 (PspCreateProcess.c)
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 * Callees:
 *     MmGetDefaultPagePriority @ 0x140005EA0 (MmGetDefaultPagePriority.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     PoEnergyEstimationEnabled @ 0x140060580 (PoEnergyEstimationEnabled.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     KeQueryAffinityProcess @ 0x14006D000 (KeQueryAffinityProcess.c)
 *     PsReferencePartitionSafe @ 0x14006FF20 (PsReferencePartitionSafe.c)
 *     KeQueryActiveGroupCount @ 0x14007DAC0 (KeQueryActiveGroupCount.c)
 *     MmDetachSession @ 0x14008A5E0 (MmDetachSession.c)
 *     PspWow64PickBestNtdll @ 0x1400B9E4C (PspWow64PickBestNtdll.c)
 *     RtlWow64GetEquivalentMachineCHPE @ 0x1400BA024 (RtlWow64GetEquivalentMachineCHPE.c)
 *     ExInitializePushLock @ 0x1400BA070 (ExInitializePushLock.c)
 *     KeFirstGroupAffinityEx @ 0x1400C5EE0 (KeFirstGroupAffinityEx.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     KeQuerySystemTimeUnsafe @ 0x140132974 (KeQuerySystemTimeUnsafe.c)
 *     KeQueryMaximumGroupCount @ 0x1401329A0 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x140132A60 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KeSecureProcess @ 0x14024064C (KeSecureProcess.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PspApplyIFEOPerfOptions @ 0x14048CE04 (PspApplyIFEOPerfOptions.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     ExCreateHandleEx @ 0x1404B7560 (ExCreateHandleEx.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     MmCreatePeb @ 0x1404E97D4 (MmCreatePeb.c)
 *     PspSetupUserProcessAddressSpace @ 0x1404E9DD0 (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1404EA008 (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x1404EA258 (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x1404EA270 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1404EA2A8 (MmMapApiSetView.c)
 *     PspInitializeFullProcessImageName @ 0x1404EA924 (PspInitializeFullProcessImageName.c)
 *     ObInitProcess @ 0x1404EAAEC (ObInitProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x1404ECD04 (MmInitializeProcessAddressSpace.c)
 *     PspInheritMitigationOptions @ 0x1404EF3BC (PspInheritMitigationOptions.c)
 *     PspApplyMitigationOptions @ 0x1404EF46C (PspApplyMitigationOptions.c)
 *     PspInheritMitigationAuditOptions @ 0x1404EFD20 (PspInheritMitigationAuditOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x1404EFDF0 (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x1404EFE64 (PspReadIFEOMitigationAuditOptions.c)
 *     PspComputeQuantumAndPriority @ 0x1404F0094 (PspComputeQuantumAndPriority.c)
 *     PspInitializeProcessSecurity @ 0x1404F019C (PspInitializeProcessSecurity.c)
 *     KeInitializeProcess @ 0x1404F0384 (KeInitializeProcess.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x1404F04DC (MmGetSessionSchedulingGroupByProcess.c)
 *     PspUpdateCreateInfo @ 0x1404F3B54 (PspUpdateCreateInfo.c)
 *     PspWritePebAffinityInfo @ 0x1404F8C88 (PspWritePebAffinityInfo.c)
 *     PsQueryProcessAttributes @ 0x1404F8F34 (PsQueryProcessAttributes.c)
 *     MmGetSectionInformation @ 0x1404F91C0 (MmGetSectionInformation.c)
 *     MmCreateProcessAddressSpace @ 0x1405129E8 (MmCreateProcessAddressSpace.c)
 *     SmpKeyedStoreCreate @ 0x14052B6BC (SmpKeyedStoreCreate.c)
 *     PspRundownSingleProcess @ 0x1405322EC (PspRundownSingleProcess.c)
 *     MmSecureVirtualMemoryEx @ 0x140557158 (MmSecureVirtualMemoryEx.c)
 *     PsWow64IsMachineSupported @ 0x14055FEF0 (PsWow64IsMachineSupported.c)
 *     SeIsTokenAssignableToProcess @ 0x140562F14 (SeIsTokenAssignableToProcess.c)
 *     SeQuerySessionIdToken @ 0x140568610 (SeQuerySessionIdToken.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x14056CE78 (RtlpOpenImageFileOptionsKeyEx.c)
 *     PspAssignProcessQuotaBlock @ 0x140571E7C (PspAssignProcessQuotaBlock.c)
 *     PspDetectComplusILImage @ 0x1405741B4 (PspDetectComplusILImage.c)
 *     PspReadIFEONodeOptions @ 0x140574290 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x140574410 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x140574600 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x140574B08 (RtlAcquirePrivilege.c)
 *     PspSelectNodeForProcess @ 0x140576844 (PspSelectNodeForProcess.c)
 *     PoEnergyContextInitialize @ 0x140577B20 (PoEnergyContextInitialize.c)
 *     PspSetupReservedUserMappings @ 0x14057902C (PspSetupReservedUserMappings.c)
 *     PspHardenMitigationOptions @ 0x140579554 (PspHardenMitigationOptions.c)
 *     PspInheritQuota @ 0x14057A794 (PspInheritQuota.c)
 *     PspApplyWin32kFilterOptions @ 0x14057B1BC (PspApplyWin32kFilterOptions.c)
 *     RtlReleasePrivilege @ 0x14057CB88 (RtlReleasePrivilege.c)
 *     PspSetProcessPriorityClass @ 0x14057EB98 (PspSetProcessPriorityClass.c)
 *     PspAttachSession @ 0x140580258 (PspAttachSession.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 *     MmIsSessionLeaderProcess @ 0x14060B830 (MmIsSessionLeaderProcess.c)
 *     MmInitializeHandBuiltProcess @ 0x140650994 (MmInitializeHandBuiltProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140652748 (MmInitializeHandBuiltProcess2.c)
 *     MmGetSectionStrongImageReference @ 0x140755FFC (MmGetSectionStrongImageReference.c)
 *     PspSetProcessAffinitySafe @ 0x14077ACB8 (PspSetProcessAffinitySafe.c)
 */

__int64 __fastcall PspAllocateProcess(
        __int64 a1,
        char a2,
        char *a3,
        char a4,
        char a5,
        char a6,
        void *a7,
        void *a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        PVOID a13,
        __int64 a14,
        _QWORD *a15)
{
  __int64 v16; // r13
  unsigned int v17; // ebx
  unsigned int v18; // esi
  unsigned int v19; // r12d
  int MaximumGroupCount; // eax
  __int64 result; // rax
  char *v22; // r15
  int v23; // r9d
  __int64 v24; // rax
  int v25; // r8d
  __int64 Flink; // rcx
  PEPROCESS v27; // r10
  unsigned int v28; // eax
  int v29; // edx
  int DefaultPagePriority; // r8d
  PVOID v31; // rdx
  int v32; // r12d
  PVOID v33; // rdi
  int SectionInformation; // esi
  unsigned int v35; // ebx
  __int16 v36; // cx
  int v37; // eax
  unsigned __int16 EquivalentMachineCHPE; // ax
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int16 v41; // r12
  unsigned int v42; // edi
  int v43; // eax
  bool v44; // zf
  int v45; // r12d
  HANDLE *v46; // rdi
  void *v47; // rcx
  char v48; // al
  int v49; // r12d
  ULONG v50; // edi
  KPROCESSOR_MODE v51; // al
  __int16 v52; // cx
  PEPROCESS v53; // rdi
  void *v54; // r12
  ULONG v55; // esi
  PEPROCESS v56; // rdx
  int v57; // edx
  int v58; // r8d
  int v59; // eax
  int v60; // r12d
  unsigned __int16 v61; // bx
  __int64 SessionSchedulingGroupByProcess; // rax
  int v63; // ecx
  char v64; // r8
  PEPROCESS v65; // rdi
  char v66; // al
  __int64 v67; // r9
  int v68; // r8d
  int inited; // eax
  __int64 v70; // rdx
  __int64 v71; // r9
  int v72; // r11d
  int v73; // edi
  int v74; // r9d
  int v75; // ecx
  int v76; // eax
  int v77; // edi
  int v78; // edx
  PVOID v79; // r12
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned __int8 v84; // r12
  PEPROCESS v85; // r10
  struct _KTHREAD *v86; // rsi
  volatile signed __int64 *v87; // r12
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v93; // rcx
  int v94; // eax
  bool v95; // sf
  int ImageFileKeyOption; // eax
  int v97; // eax
  __int64 v98; // rax
  _WORD *PoolWithTag; // r10
  int v100; // eax
  __int16 v101; // r11
  __int64 v102; // rax
  __int16 v103; // cx
  int IsSessionLeaderProcess; // eax
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  void *v106; // rax
  unsigned __int64 v107; // rax
  PEPROCESS v108; // r12
  __int16 v109; // di
  SIZE_T v110; // r12
  PVOID v111; // rax
  size_t v112; // r8
  PEPROCESS v113; // r12
  int v114; // edx
  __int64 v115; // rcx
  __int64 v117; // rcx
  __int16 v118; // ax
  __int64 v119; // r8
  unsigned int ProcessNtdllType; // eax
  __int64 v121; // r8
  __int64 v122; // rdx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // [rsp+20h] [rbp-478h]
  unsigned int v127; // [rsp+74h] [rbp-424h]
  int v128; // [rsp+78h] [rbp-420h]
  char v129[4]; // [rsp+7Ch] [rbp-41Ch] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp-418h]
  char v131; // [rsp+88h] [rbp-410h] BYREF
  char v132[3]; // [rsp+89h] [rbp-40Fh] BYREF
  unsigned int v133; // [rsp+8Ch] [rbp-40Ch]
  int v134; // [rsp+90h] [rbp-408h]
  PVOID Object; // [rsp+98h] [rbp-400h] BYREF
  int v136; // [rsp+A0h] [rbp-3F8h]
  int v137; // [rsp+A4h] [rbp-3F4h]
  int v138; // [rsp+A8h] [rbp-3F0h]
  __int64 v139; // [rsp+B0h] [rbp-3E8h] BYREF
  __int64 v140; // [rsp+B8h] [rbp-3E0h]
  __int16 v141; // [rsp+C0h] [rbp-3D8h]
  ULONG SessionId; // [rsp+C4h] [rbp-3D4h] BYREF
  PVOID TokenInformation; // [rsp+C8h] [rbp-3D0h] BYREF
  volatile signed __int32 *v144; // [rsp+D0h] [rbp-3C8h]
  _KPROCESS *v145; // [rsp+D8h] [rbp-3C0h]
  PVOID v146; // [rsp+E0h] [rbp-3B8h]
  int v147[2]; // [rsp+E8h] [rbp-3B0h]
  PVOID v148; // [rsp+F0h] [rbp-3A8h]
  int v149; // [rsp+F8h] [rbp-3A0h]
  int v150; // [rsp+FCh] [rbp-39Ch]
  int v151; // [rsp+100h] [rbp-398h]
  int v152; // [rsp+104h] [rbp-394h]
  int v153; // [rsp+108h] [rbp-390h]
  int v154; // [rsp+10Ch] [rbp-38Ch]
  PACCESS_TOKEN Token; // [rsp+110h] [rbp-388h]
  __int64 v156; // [rsp+118h] [rbp-380h]
  __int64 v157; // [rsp+120h] [rbp-378h] BYREF
  __int64 v158; // [rsp+128h] [rbp-370h]
  PVOID v159; // [rsp+130h] [rbp-368h]
  unsigned __int64 v160; // [rsp+138h] [rbp-360h]
  struct _KTHREAD *CurrentThread; // [rsp+140h] [rbp-358h]
  __int64 v162; // [rsp+148h] [rbp-350h] BYREF
  PVOID ReturnedState; // [rsp+150h] [rbp-348h] BYREF
  __int128 v164; // [rsp+158h] [rbp-340h] BYREF
  char *v165; // [rsp+168h] [rbp-330h]
  __int128 v166; // [rsp+170h] [rbp-328h] BYREF
  HANDLE Handle; // [rsp+180h] [rbp-318h] BYREF
  HANDLE KeyHandle; // [rsp+188h] [rbp-310h] BYREF
  void *v169; // [rsp+190h] [rbp-308h] BYREF
  __int64 v170; // [rsp+198h] [rbp-300h]
  __int64 v171; // [rsp+1A0h] [rbp-2F8h]
  __int64 v172; // [rsp+1A8h] [rbp-2F0h]
  __int64 v173; // [rsp+1B0h] [rbp-2E8h]
  char v174[8]; // [rsp+1C0h] [rbp-2D8h] BYREF
  __int64 v175; // [rsp+1C8h] [rbp-2D0h]
  _QWORD *v176; // [rsp+1D0h] [rbp-2C8h]
  _BYTE *v177; // [rsp+1D8h] [rbp-2C0h]
  __int64 v178; // [rsp+1E0h] [rbp-2B8h] BYREF
  _QWORD *v179; // [rsp+1E8h] [rbp-2B0h]
  __int128 v180; // [rsp+1F0h] [rbp-2A8h] BYREF
  __int128 v181; // [rsp+200h] [rbp-298h] BYREF
  __int128 v182; // [rsp+210h] [rbp-288h] BYREF
  __int128 v183; // [rsp+220h] [rbp-278h] BYREF
  __int128 v184; // [rsp+230h] [rbp-268h] BYREF
  __int128 v185; // [rsp+240h] [rbp-258h] BYREF
  OBJECT_ATTRIBUTES v186; // [rsp+250h] [rbp-248h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+280h] [rbp-218h] BYREF
  char v188[46]; // [rsp+2B0h] [rbp-1E8h] BYREF
  __int16 v189; // [rsp+2DEh] [rbp-1BAh]
  char v190; // [rsp+2E3h] [rbp-1B5h]
  int v191; // [rsp+2F0h] [rbp-1A8h]
  __int128 v192; // [rsp+300h] [rbp-198h] BYREF
  _QWORD v193[4]; // [rsp+310h] [rbp-188h] BYREF
  _BYTE v194[48]; // [rsp+330h] [rbp-168h] BYREF
  _OWORD v195[11]; // [rsp+360h] [rbp-138h] BYREF
  ULONG Privilege[6]; // [rsp+410h] [rbp-88h] BYREF
  _WORD v197[20]; // [rsp+428h] [rbp-70h] BYREF

  v165 = a3;
  Process = (PEPROCESS)a1;
  v172 = a1;
  v146 = a7;
  Token = a8;
  v16 = a11;
  v173 = a11;
  v159 = a13;
  v175 = a14;
  v179 = a15;
  v127 = 0;
  CurrentThread = KeGetCurrentThread();
  v145 = CurrentThread->ApcState.Process;
  v139 = 0LL;
  v150 = 0;
  v138 = 0;
  v148 = 0LL;
  LOWORD(v134) = 0;
  v151 = 0;
  v137 = 0;
  v154 = 0;
  v140 = 0LL;
  v153 = 0;
  v171 = 0LL;
  v152 = 0;
  v170 = 0LL;
  v128 = a9;
  if ( (a9 & 0x800) != 0 )
  {
    v17 = 1024;
    v127 = 1024;
    if ( (a9 & 0x2000) != 0 )
    {
      v17 = 66560;
      if ( (a9 & 0x4000) != 0 )
        v17 = 197632;
      v127 = v17;
    }
  }
  else
  {
    v17 = 0;
  }
  v156 = a1 & -(__int64)((a9 & 0x100) != 0);
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x2000) != 0 )
  {
    if ( (a1 & -(__int64)((a9 & 0x100) != 0)) != 0 )
      return 3221225520LL;
    v139 = KeNodeBlock[*(unsigned __int16 *)(a11 + 250)];
    v156 = 0LL;
  }
  else if ( a1 )
  {
    v156 = a1 & -(__int64)((a9 & 0x100) != 0);
    if ( (*(_DWORD *)(a1 + 768) & 0x200000) != 0 )
    {
      v156 = a1;
      v138 = 0x200000;
    }
  }
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x40000) != 0 )
  {
    v17 |= 0x1000u;
    v127 = v17;
  }
  memset(v193, 0, sizeof(v193));
  ReturnedState = 0LL;
  v18 = 2120;
  LODWORD(v144) = 0;
  v19 = 0;
  if ( !PsDisableDiskCounters )
  {
    LODWORD(v144) = 2120;
    v18 = 2160;
    v17 |= 0x200u;
    v127 = v17;
  }
  if ( PoEnergyEstimationEnabled() )
  {
    v19 = (v18 + 7) & 0xFFFFFFF8;
    v18 = v19 + 480;
    v17 |= 0x2000u;
    v127 = v17;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v147[0] = MaximumGroupCount;
  v133 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v133 = (v18 + 7) & 0xFFFFFFF8;
    v18 = 16 * (unsigned __int16)MaximumGroupCount + v133;
  }
  result = ObCreateObjectEx(a2, PsProcessType, (int)v165, a2, v125, v18, 0, v18, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    v22 = (char *)Object;
    ObfReferenceObjectWithTag(Object, 0x72437350u);
    ObfDereferenceObjectWithTag(v22, 0x746C6644u);
    memset(v22, 0, v18);
    memset(v22 + 1616, 0, 0x20uLL);
    *((_QWORD *)v22 + 202) = 0LL;
    *((_QWORD *)v22 + 204) = v22 + 1624;
    *((_QWORD *)v22 + 203) = v22 + 1624;
    ExInitializePushLock((PKSPIN_LOCK)v22 + 95);
    *((_QWORD *)v22 + 91) = 0LL;
    *((_QWORD *)v22 + 146) = v22 + 1160;
    *((_QWORD *)v22 + 145) = v22 + 1160;
    *((_QWORD *)v22 + 223) = v22 + 1776;
    *((_QWORD *)v22 + 222) = v22 + 1776;
    *((_QWORD *)v22 + 254) = v22 + 2024;
    *((_QWORD *)v22 + 253) = v22 + 2024;
    v177 = v22 + 1738;
    v22[1738] = a4;
    v22[1736] = a5;
    v22[1737] = a6;
    *((_QWORD *)v22 + 230) = 0LL;
    v23 = (v17 >> 10) & 1;
    if ( v23 )
      *((_DWORD *)v22 + 435) |= 1u;
    if ( (v128 & 0x8000) != 0 )
      *((_DWORD *)v22 + 435) |= 0x20u;
    v24 = v133;
    if ( v133 )
    {
      *((_DWORD *)v22 + 435) |= 0x80u;
      *((_QWORD *)v22 + 244) = &v22[v24];
      *((_QWORD *)v22 + 245) = &v22[8 * (unsigned int)v147[0] + v24];
    }
    *((_DWORD *)v22 + 435) |= a10;
    v25 = 512;
    Flink = (__int64)v145[1].Header.WaitListHead.Flink | 2;
    if ( (v128 & 0x200) != 0 )
      Flink = (__int64)v145[1].Header.WaitListHead.Flink;
    *((_QWORD *)v22 + 126) = Flink;
    if ( (v17 & 0x200) != 0 )
      *((_QWORD *)v22 + 225) = &v22[(unsigned int)v144];
    if ( (v17 & 0x2000) != 0 )
    {
      *((_QWORD *)v22 + 232) = &v22[v19];
      PoEnergyContextInitialize();
    }
    if ( v16 && (v25 & *(_DWORD *)(v16 + 4)) != 0 )
    {
      v28 = *(_DWORD *)(v16 + 316);
      v27 = Process;
    }
    else
    {
      v27 = Process;
      if ( Process )
        v28 = Process[1].ThreadSeed[2];
      else
        v28 = 5;
    }
    v165 = v22 + 1184;
    *((_DWORD *)v22 + 296) = v28;
    *((_DWORD *)v22 + 393) = 259;
    if ( v27 )
    {
      v29 = (HIDWORD(v27[1].DirectoryTableBase) >> 27) & 7;
      DefaultPagePriority = (LODWORD(v27[1].DirectoryTableBase) >> 12) & 7;
      *((_QWORD *)v22 + 124) = v27[1].Header.WaitListHead.Flink;
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    *(_QWORD *)v147 = v22 + 772;
    *((_DWORD *)v22 + 193) = *((_DWORD *)v22 + 193) & 0xC7FFFFFF | (v29 << 27);
    v144 = (volatile signed __int32 *)(v22 + 768);
    *((_DWORD *)v22 + 192) = (DefaultPagePriority << 12) | *((_DWORD *)v22 + 192) & 0xFFFF8FFF;
    if ( v159 )
    {
      if ( !PsReferencePartitionSafe((__int64)v159) )
      {
        SectionInformation = -1073740640;
        goto LABEL_325;
      }
      v32 = v128;
      v31 = v159;
    }
    else
    {
      v31 = PspSystemPartition;
      v159 = PspSystemPartition;
      if ( _InterlockedIncrement64((volatile signed __int64 *)PspSystemPartition + 3) <= 1 )
        __fastfail(0xEu);
      v32 = a9;
      v22 = (char *)Object;
      v17 = v127;
      v128 = a9;
    }
    *((_QWORD *)v22 + 262) = v31;
    v33 = v146;
    if ( !v23 )
    {
      v148 = v146;
      if ( v146 )
      {
        if ( (v32 & 0x1000) == 0 )
        {
          ObfReferenceObject(v146);
          goto LABEL_43;
        }
LABEL_294:
        SectionInformation = -1073741776;
        goto LABEL_325;
      }
      if ( v27 )
      {
        if ( a12 )
          goto LABEL_294;
        if ( (v27[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
          SectionInformation = -1073741811;
          goto LABEL_325;
        }
        p_Blink = (struct _EX_RUNDOWN_REF *)&v27[1].ProfileListHead.Blink;
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&v27[1].ProfileListHead.Blink) )
        {
          v106 = (void *)Process[1].Affinity.Bitmap[17];
          v146 = v106;
          if ( v106 )
            ObfReferenceObject(v106);
          ExReleaseRundownProtection(p_Blink);
        }
        v33 = v146;
        if ( !v146 )
        {
          SectionInformation = -1073741558;
          goto LABEL_325;
        }
        v107 = Process[1].ActiveProcessors.Bitmap[7];
        if ( v107 )
        {
          v17 |= 0x4000u;
          v127 = v17;
          v134 = *(unsigned __int16 *)(v107 + 8);
          v151 = *(_DWORD *)(v107 + 12);
        }
        if ( (Process[1].DirectoryTableBase & 0x2000000000000LL) != 0 )
        {
          v128 = v32 | 8;
          a9 = v32 | 8;
        }
      }
    }
LABEL_43:
    v176 = v22 + 952;
    *((_QWORD *)v22 + 119) = v33;
    LOWORD(v133) = 0;
    if ( v16 )
    {
      *((_QWORD *)v22 + 216) = *(_QWORD *)(v16 + 456);
      SectionInformation = MmGetSectionInformation(v33, 4LL, v16 + 48);
      if ( SectionInformation < 0 )
        goto LABEL_325;
      v35 = v17 & 0xFFFBFE7F | (32
                              * (*(_BYTE *)(v16 + 99) & 4 | (4
                                                           * (*(_BYTE *)(v16 + 99) & 2 | ((*(_DWORD *)(v16 + 112) & 1) << 11)))));
      v36 = *(_WORD *)(v16 + 96);
      if ( (v35 & 0x100) == 0 || v36 != 332 || (v37 = 0x8000, (*(_BYTE *)(v16 + 99) & 1) == 0) )
        v37 = 0;
      v17 = v37 | v35 & 0xFFFF7FFF;
      v127 = v17;
      EquivalentMachineCHPE = RtlWow64GetEquivalentMachineCHPE(v36);
      v41 = EquivalentMachineCHPE;
      if ( (*(_WORD *)(v16 + 92) & *(_WORD *)(v16 + 10)) != 0 )
      {
        v115 = 3LL;
        goto LABEL_298;
      }
      v42 = v17;
      if ( (v17 & 0x8000) == 0 && (unsigned int)PsWow64IsMachineSupported(EquivalentMachineCHPE) )
      {
        v17 |= 0x4000u;
        v127 = v17;
        LOWORD(v134) = v41;
        v42 = v17;
      }
      if ( (v42 & 0x8000) == 0
        && (v41 < MEMORY[0xFFFFF7800000002C] || v41 > MEMORY[0xFFFFF7800000002E])
        && (v42 & 0x4000) == 0 )
      {
        v115 = 4LL;
LABEL_298:
        SectionInformation = -1073741701;
LABEL_300:
        PspUpdateCreateInfo(v115, v16, 0LL);
        goto LABEL_325;
      }
      if ( v148 )
      {
        LOWORD(v133) = *(_WORD *)(v16 + 94);
        v43 = RtlpOpenImageFileOptionsKeyEx(v16 + 232, v39, v40, v16 + 192);
        if ( v43 < 0 )
        {
          if ( v43 == -1073741772 )
            *(_BYTE *)(v16 + 8) |= 0x40u;
          *(_QWORD *)(v16 + 192) = 0LL;
        }
        ObfReferenceObjectWithTag(*(PVOID *)(v16 + 176), 0x72437350u);
        *((_QWORD *)v22 + 137) = *(_QWORD *)(v16 + 176);
        if ( (v42 & 0x4000) != 0 )
        {
          v45 = v128;
          goto LABEL_62;
        }
        SectionInformation = PspDetectComplusILImage(v16, &a9);
        if ( SectionInformation < 0 )
          goto LABEL_325;
        v44 = v41 == 332;
        v45 = a9;
        LOWORD(v128) = a9;
        if ( !v44 || (a9 & 8) != 0 )
          goto LABEL_62;
        if ( (unsigned int)PsWow64IsMachineSupported(332LL) )
        {
          v134 = 332;
        }
        else
        {
          if ( !(unsigned int)PsWow64IsMachineSupported(452LL) )
          {
            v45 |= 8u;
            LOWORD(v128) = v45;
            a9 = v45;
LABEL_62:
            v46 = (HANDLE *)(v16 + 192);
            v47 = *(void **)(v16 + 192);
            if ( v47 )
            {
              if ( *(char *)(v16 + 8) >= 0 )
              {
                ImageFileKeyOption = RtlQueryImageFileKeyOption(v47, 2, (__int64)&v162);
                if ( ImageFileKeyOption == -2147483643 || ImageFileKeyOption >= 0 && (_DWORD)v162 == 2 && v141 )
                {
                  SectionInformation = -1073741767;
                  v115 = 5LL;
                  goto LABEL_300;
                }
              }
              v136 = 0;
              if ( (int)RtlQueryImageFileKeyOption(*v46, 4, 0LL) >= 0 )
              {
                if ( v136 )
                {
                  v45 |= 0x10u;
                  LOWORD(v128) = v45;
                  a9 = v45;
                  if ( (v17 & 0x4000) == 0 )
                  {
                    v186.Length = 48;
                    v186.RootDirectory = *v46;
                    v186.Attributes = 576;
                    v186.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
                    *(_OWORD *)&v186.SecurityDescriptor = 0LL;
                    if ( ZwOpenKey(&Handle, 1u, &v186) >= 0 )
                    {
                      v136 = 0;
                      if ( (int)RtlQueryImageFileKeyOption(Handle, 4, 0LL) >= 0 && v136 )
                      {
                        v45 |= 0x20u;
                        LOWORD(v128) = v45;
                        a9 = v45;
                      }
                      ObCloseHandle(Handle, 0);
                    }
                  }
                }
              }
              if ( !v156 )
                PspReadIFEONodeOptions(v22, *v46, &v139);
              v149 = 0;
              if ( (int)RtlQueryImageFileKeyOption(*v46, 4, 0LL) >= 0 && v149 )
                v138 |= 0x40u;
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = *v46;
              ObjectAttributes.Attributes = 576;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
              {
                PspReadIFEOPerfOptions(KeyHandle);
                ObCloseHandle(KeyHandle, 0);
              }
            }
            goto LABEL_63;
          }
          LOWORD(v134) = 452;
        }
        v17 = v42 | 0x4000;
        v127 = v42 | 0x4000;
        goto LABEL_62;
      }
    }
    else if ( v33 )
    {
      SectionInformation = MmGetSectionInformation(v33, 4LL, v188);
      if ( SectionInformation < 0 )
        goto LABEL_325;
      v17 = v17 & 0xFFFBFE7F | (32 * (v190 & 4 | (4 * (v190 & 2 | ((v191 & 1) << 11)))));
      v127 = v17;
      LOWORD(v133) = v189;
      LOBYTE(v45) = v128;
      if ( !v148 )
      {
        v150 = 8;
        v17 |= 0x800u;
        v127 = v17;
      }
LABEL_63:
      v48 = v45;
      v49 = v150 | 0x20000;
      if ( (v48 & 8) == 0 )
        v49 = v150;
      if ( (v17 & 0x4000) != 0 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50776F57u);
        *((_QWORD *)v22 + 133) = PoolWithTag;
        if ( !PoolWithTag )
        {
          SectionInformation = -1073741801;
          goto LABEL_325;
        }
        v100 = v151;
        v101 = v134;
        if ( !v151 )
          v100 = PspWow64PickBestNtdll(v16);
        PoolWithTag[4] = v101;
        *(_DWORD *)(*((_QWORD *)v22 + 133) + 12LL) = v100;
        v102 = *((_QWORD *)v22 + 133);
        if ( v102 )
        {
          v103 = *(_WORD *)(v102 + 8);
          if ( v103 == 332 || v103 == 452 )
            *(_QWORD *)v102 = 1LL;
        }
      }
      SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
      if ( SectionInformation < 0 )
      {
LABEL_325:
        PspRundownSingleProcess((ULONG_PTR)v22);
        ObfDereferenceObjectWithTag(v22, 0x72437350u);
        return (unsigned int)SectionInformation;
      }
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
        v52 = v128;
        if ( (v128 & 0x30) != 0 )
          Privilege[v50++] = 4;
        if ( (v128 & 0x80u) != 0 )
        {
          IsSessionLeaderProcess = MmIsSessionLeaderProcess(v145);
          v52 = v128;
          if ( !IsSessionLeaderProcess )
            Privilege[v50++] = 10;
        }
        if ( (v52 & 0x8400) != 0 )
          Privilege[v50++] = 7;
        if ( v50 )
        {
          v95 = RtlAcquirePrivilege(Privilege, v50, a12 != 0, &ReturnedState) < 0;
          v51 = a2;
          if ( !v95 )
          {
            v17 |= 0x10u;
            v127 = v17;
          }
        }
        else
        {
          v51 = a2;
        }
      }
      if ( (v128 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v51) )
        goto LABEL_322;
      **(_DWORD **)v147 |= v49;
      *v144 |= v138;
      v53 = Process;
      if ( Process )
      {
        v54 = 0LL;
        v169 = 0LL;
        v55 = 0;
        SessionId = 0;
        v17 &= ~1u;
        v129[0] = 0;
        if ( a12 )
        {
          if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2) )
            v17 |= 4u;
          else
            v17 &= ~4u;
          SectionInformation = SeIsTokenAssignableToProcess(Token, v129);
          if ( SectionInformation < 0 )
            goto LABEL_323;
          if ( !v129[0] && (v17 & 4) == 0 )
            goto LABEL_322;
          SectionInformation = SeQuerySessionIdToken(Token, &SessionId);
          if ( SectionInformation < 0 )
            goto LABEL_323;
          v94 = MmGetSessionIdEx((__int64)v145);
          v55 = SessionId;
          if ( SessionId != v94 )
          {
            if ( (v17 & 4) == 0 )
            {
LABEL_322:
              SectionInformation = -1073741727;
              goto LABEL_323;
            }
            if ( (v128 & 0x80u) != 0 )
            {
              SectionInformation = -1073741811;
              goto LABEL_323;
            }
            v17 |= 1u;
          }
        }
        else if ( !v148 )
        {
          v55 = MmGetSessionIdEx((__int64)Process);
          SessionId = v55;
          v17 = v17 & 0xFFFFFFFE | (v55 != (unsigned int)MmGetSessionIdEx((__int64)v145));
        }
        if ( (v17 & 1) != 0 )
        {
          SectionInformation = PspAttachSession(v55, v194, &v169);
          if ( SectionInformation < 0 )
          {
            LOBYTE(v17) = v17 & 0xFE;
            goto LABEL_323;
          }
          *v144 |= 0x80u;
          v54 = v169;
        }
        if ( !a12 || v129[0] )
        {
          v56 = Process;
          if ( v129[0] )
            v56 = v145;
          PspInheritQuota(v22, v56);
        }
        else
        {
          SectionInformation = PspAssignProcessQuotaBlock(0LL, v22, Token);
          if ( SectionInformation < 0 )
          {
            if ( (v17 & 1) != 0 )
            {
              MmDetachSession((__int64)v54, (__int64)v194);
              ObfDereferenceObject(v54);
            }
            goto LABEL_323;
          }
        }
        v58 = PspMaximumWorkingSet;
        if ( (v193[0] & 0x100000000LL) != 0 )
          v58 = v193[3];
        v59 = v17 ^ (v17 ^ (32
                          * (unsigned __int8)MmCreateProcessAddressSpace(
                                               (_DWORD)v159,
                                               v57,
                                               v58,
                                               BYTE4(v193[0]) & 1,
                                               (__int64)v22))) & 0x20;
        LOBYTE(v17) = v59;
        v127 = v59;
        if ( (v59 & 1) != 0 )
        {
          MmDetachSession((__int64)v54, (__int64)v194);
          ObfDereferenceObject(v54);
        }
        if ( (v17 & 0x20) == 0 )
          goto LABEL_330;
        v60 = 1;
        v53 = Process;
      }
      else
      {
        PspInheritQuota(v22, 0LL);
        v60 = v114 + 1;
        v22[640] = v114 + 1;
        SectionInformation = MmInitializeHandBuiltProcess();
        if ( SectionInformation < 0 )
        {
LABEL_323:
          if ( (v17 & 0x10) != 0 )
            RtlReleasePrivilege(ReturnedState);
          goto LABEL_325;
        }
      }
      if ( v156 )
      {
        KeQueryAffinityProcess(v156, v195, 0LL, (__int64)v197);
        KeFirstGroupAffinityEx(&v157, v195);
        v139 = KeNodeBlock[(unsigned __int16)v197[(unsigned __int16)v158]];
      }
      else
      {
        if ( v139 )
        {
          v61 = *(_WORD *)(v139 + 144);
        }
        else if ( v53 )
        {
          if ( (v53[1].DirectoryTableBase & 0x100000) != 0 )
          {
            _InterlockedOr(v144, 0x100000u);
            v139 = KeNodeBlock[v53->IdealGlobalNode];
            v61 = *(_WORD *)(v139 + 144);
          }
          else
          {
            v139 = PspSelectNodeForProcess();
            v61 = *(_WORD *)(v139 + 144);
            if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > (unsigned __int16)v60 && !v61 )
            {
              v139 = 0LL;
              v61 = v60;
            }
          }
        }
        else
        {
          v61 = 0;
        }
        v158 = v61;
        v157 = qword_14044C5D8[v61];
      }
      _InterlockedOr(*(volatile signed __int32 **)v147, 0x40000u);
      v17 = v127;
      v22 = (char *)Object;
      SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess(Object);
      SectionInformation = KeInitializeProcess(v63, 8, (unsigned int)&v157, v139, SessionSchedulingGroupByProcess, v64);
      if ( SectionInformation < 0 )
        goto LABEL_323;
      if ( v16 )
      {
        v137 = *(_DWORD *)(v16 + 408);
        v154 = *(_DWORD *)(v16 + 412);
        v140 = *(_QWORD *)(v16 + 416);
        v153 = *(_DWORD *)(v16 + 424);
        v171 = *(_QWORD *)(v16 + 432);
        v152 = *(_DWORD *)(v16 + 440);
        v170 = *(_QWORD *)(v16 + 208);
      }
      v147[0] = v60 & (v127 >> 11);
      v65 = Process;
      SectionInformation = PspInitializeProcessSecurity(
                             Process,
                             v137,
                             v147[0],
                             v60 & (v127 >> 12),
                             v154,
                             v140,
                             v153,
                             v171,
                             v152,
                             v170,
                             v175);
      if ( SectionInformation < 0 )
        goto LABEL_323;
      v22[1119] = 2;
      if ( v65 )
      {
        v66 = v22[1119];
        if ( ((HIBYTE(v65[1].ActiveProcessors.Bitmap[13]) - (_BYTE)v60) & 0xFB) == 0 )
          v66 = HIBYTE(v65[1].ActiveProcessors.Bitmap[13]);
        v22[1119] = v66;
        if ( v16 )
          v67 = *(_QWORD *)(v16 + 296);
        else
          LODWORD(v67) = 0;
        v68 = v16 ? *(_DWORD *)(v16 + 292) : 0;
        inited = ObInitProcess(
                   (struct _EX_RUNDOWN_REF *)((unsigned __int64)v65 & -(__int64)((a9 & 4) != 0)),
                   (__int64)v22,
                   v68,
                   v67);
      }
      else
      {
        *((_QWORD *)v22 + 131) = v145[1].ActiveProcessors.Bitmap[5];
        inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v22);
      }
      SectionInformation = inited;
      if ( inited < 0 )
        goto LABEL_323;
      if ( (v193[0] & 7) != 0 )
        PspApplyIFEOPerfOptions((__int64)v22, (unsigned __int64)v193, a2, v71);
      if ( v16 )
      {
        if ( (*(_DWORD *)(v16 + 4) & 0x100) != 0 )
        {
          LOBYTE(v71) = a2;
          LOBYTE(v70) = *(_BYTE *)(v16 + 248);
          SectionInformation = PspSetProcessPriorityClass(v22, v70, 0LL, v71);
          if ( SectionInformation < 0 )
            goto LABEL_323;
        }
      }
      v22[444] = PspComputeQuantumAndPriority((_DWORD)v22, 0, (unsigned int)&v131, 0, 0LL);
      v22[445] = v131;
      SectionInformation = 0;
      v137 = 0;
      v192 = 0uLL;
      PspReadIFEOMitigationOptions(v16, &v192);
      v180 = v192;
      v181 = PspSystemMitigationOptions;
      PspInheritMitigationOptions(&v181, &v180, &v192);
      v166 = 0uLL;
      PspReadIFEOMitigationAuditOptions(v16, &v166);
      v182 = v166;
      v183 = PspSystemMitigationAuditOptions;
      PspInheritMitigationAuditOptions(&v183, &v182, &v166);
      v72 = (BYTE6(v192) & 3) << 16;
      if ( v16 && (*(_DWORD *)(v16 + 4) & 0x10000) != 0 )
      {
        v184 = *(_OWORD *)(v16 + 360);
        v185 = v192;
        PspInheritMitigationOptions(&v185, &v184, &v192);
      }
      if ( (_DWORD)TokenInformation )
        v72 |= 4u;
      v73 = v72 | 0x100;
      if ( (v72 & 4) == 0 )
        v73 = v72;
      if ( (v73 & 0xFF00) != 0 )
      {
        v97 = PspHardenMitigationOptions(&v192);
        SectionInformation = v97;
        if ( v16 && (*(_DWORD *)(v16 + 4) & 0x10000) != 0 )
        {
          if ( v97 < 0 )
            goto LABEL_325;
        }
        else
        {
          v98 = v192 - PspMitigationOptionsEmptyMap;
          if ( (_QWORD)v192 == PspMitigationOptionsEmptyMap )
            v98 = *((_QWORD *)&v192 + 1);
          if ( !v98 )
            v192 = PspHardenedMitigationOptionsMap;
          SectionInformation = 0;
        }
      }
      if ( (v127 & 0x80u) != 0 || (v74 = 0, (v127 & 0x100) != 0) )
        v74 = 1;
      if ( (v133 & 0x4000) != 0 && (v127 & 0x40000) != 0 )
        v75 = 32;
      else
        v75 = 0;
      v76 = v75 | v74 | v73 | ((v133 & 0x4000) != 0 ? 8 : 0) | ((unsigned __int16)v133 >> 4) & 2;
      v77 = (v127 >> 10) & 1;
      if ( v77 )
      {
        *(_QWORD *)&v192 = v192 & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
        *((_QWORD *)&v192 + 1) = *((_QWORD *)&v192 + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
      }
      PspApplyMitigationOptions((_DWORD)v22, (_DWORD)Process, (unsigned int)&v192, (unsigned int)&v166, v76);
      if ( v16 )
      {
        PspApplyWin32kFilterOptions(v22, v16);
        *(_OWORD *)(v16 + 360) = v192;
        *(_OWORD *)(v16 + 472) = v166;
      }
      PsQueryProcessAttributes(v22, 0LL, v132);
      v78 = ((_DWORD)TokenInformation != 0) | 2;
      if ( (a9 & 0x20000) == 0 )
        v78 = (_DWORD)TokenInformation != 0;
      if ( (dword_140466180 & 0xC) != 0 && !*((_WORD *)v22 + 727) && v78 )
        SmpKeyedStoreCreate((ULONG_PTR)qword_140466188);
      if ( (a9 & 0x80u) != 0
        && !(unsigned int)MmIsSessionLeaderProcess(v145)
        && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
      {
        goto LABEL_322;
      }
      if ( v77 || v148 )
      {
        SectionInformation = PspInitializeFullProcessImageName(v16, (__int64)v22);
        if ( SectionInformation < 0 )
          goto LABEL_323;
        if ( (v127 & 0x10000) != 0 )
        {
          v80 = MmInitializeProcessAddressSpace(
                  (ULONG_PTR)v22,
                  (ULONG_PTR)Process,
                  0LL,
                  (unsigned int *)&a9,
                  (v127 & 0x20000) != 0);
          v79 = v146;
        }
        else
        {
          v79 = v146;
          v80 = MmInitializeProcessAddressSpace((ULONG_PTR)v22, 0LL, (__int64)v146, (unsigned int *)&a9, 0);
        }
        SectionInformation = v80;
        if ( v80 < 0 )
          goto LABEL_323;
        if ( v16 )
        {
          v81 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)v79) + 32LL);
          v82 = *((_QWORD *)v22 + 120);
          if ( v81 != v82 )
            *(_QWORD *)(v16 + 48) += v82 - v81;
        }
        v137 = SectionInformation;
        if ( !v77 )
          v17 = v127 | 2;
        v17 = ((unsigned __int8)v17 ^ (unsigned __int8)(4 * a9)) & 0x40 ^ v17 | 8;
        v127 = v17;
LABEL_154:
        if ( (v17 & 0x10) != 0 )
          RtlReleasePrivilege(ReturnedState);
        v83 = *((_QWORD *)v22 + 133);
        if ( v83 && *(_WORD *)(v83 + 8) == 332 )
          *((_DWORD *)v22 + 110) |= 1u;
        if ( (v17 & 8) != 0 )
        {
          if ( v16 )
          {
            SectionInformation = PspSetupReservedUserMappings(v22, v194, v16);
            if ( SectionInformation < 0 )
              goto LABEL_325;
          }
        }
        if ( (v17 & 2) != 0 )
        {
          *(_QWORD *)&v164 = 0LL;
          *((_QWORD *)&v164 + 1) = -1LL;
          v84 = (4 * (((*v177 & 7) != 1 ? 0 : 0x10) | ((v17 & 0x80) != 0))) & 0xCF | ((*v177 & 7) != 0 ? 2 : 0) | ((v17 & 0x40) != 0) | (16 * (((_DWORD)TokenInformation != 0 ? 2 : 0) | v132[0] & 1));
          *(_DWORD *)((char *)&v164 + 3) = v84;
          if ( v148 )
          {
            SectionInformation = MmCreatePeb((_KPROCESS *)v22, (char *)&v164, (_QWORD *)v22 + 127, &v157);
            if ( SectionInformation < 0 )
            {
              *((_QWORD *)v22 + 127) = 0LL;
              goto LABEL_325;
            }
            if ( v157 )
            {
              _InterlockedAnd(v144, 0xFFCFFFFF);
              v22 = (char *)Object;
              PspSetProcessAffinitySafe((_DWORD)Object, 1, 0, (unsigned int)&v157, (__int64)v174);
              v17 = v127;
            }
          }
          else
          {
            v85 = Process;
            v140 = Process[1].ActiveProcessors.Bitmap[1];
            *((_QWORD *)v22 + 127) = v140;
            if ( (v17 & 0x800) != 0 )
              goto LABEL_166;
            LOBYTE(v164) = 1;
            KiStackAttachProcess((_KPROCESS *)v22, 0, (__int64)v194);
            if ( MmSecureVirtualMemoryEx(v140, 1976LL, 4LL) )
              *(_OWORD *)v140 = v164;
            else
              SectionInformation = -1073741503;
            if ( SectionInformation >= 0 )
            {
              v117 = *((_QWORD *)v22 + 133);
              if ( v117 )
              {
                v118 = *(_WORD *)(v117 + 8);
                if ( v118 == 332 || v118 == 452 )
                {
                  v140 = 0LL;
                  v140 = *(_QWORD *)v117;
                  if ( MmSecureVirtualMemoryEx(v140, 1136LL, 4LL) )
                  {
                    v160 = 0xFFFFFFFF00000001uLL;
                    BYTE3(v160) = v84;
                    *(_QWORD *)v140 = v160;
                  }
                  else
                  {
                    SectionInformation = -1073741503;
                  }
                }
              }
            }
            KiUnstackDetachProcess((__int64)v194, 0LL);
            if ( SectionInformation < 0 )
              goto LABEL_325;
          }
        }
        v85 = Process;
LABEL_166:
        if ( ((v17 >> 3) & 1) != 0 && v16 )
        {
          SectionInformation = PspSetupUserProcessAddressSpace((__int64)v85, (_KPROCESS *)v22, (__int64)v194, v16);
        }
        else if ( (v17 & 2) != 0 && (v17 & 0x800) == 0 )
        {
          SectionInformation = 0;
          KiStackAttachProcess((_KPROCESS *)v22, 0, (__int64)v194);
          PspWritePebAffinityInfo(CurrentThread, v22);
          if ( ((v17 >> 3) & 1) != 0 )
          {
            SectionInformation = MmMapApiSetView((__int64)v22);
            if ( SectionInformation >= 0 )
            {
              SectionInformation = PspMapSiloSharedDataView((__int64)v22);
              if ( SectionInformation >= 0 )
              {
                SectionInformation = PspPrepareSystemDllInitBlock(0LL, 0LL, v119);
                if ( SectionInformation >= 0 )
                {
                  if ( *((_QWORD *)v22 + 133) )
                  {
                    ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)v22);
                    SectionInformation = PspPrepareSystemDllInitBlock(ProcessNtdllType, 0LL, v121);
                  }
                }
              }
            }
          }
          KiUnstackDetachProcess((__int64)v194, 0LL);
        }
        if ( SectionInformation >= 0 )
        {
          v86 = CurrentThread;
          --CurrentThread->KernelApcDisable;
          v87 = (volatile signed __int64 *)(v22 + 728);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v22 + 728), 0LL);
          v88 = ExCreateHandleEx(*(__int64 *)((char *)&Mm64BitPhysicalAddress + 6), (__int64)v22, 0, 0, 0LL);
          *((_QWORD *)v22 + 92) = v88;
          if ( v88 )
          {
            if ( (v17 & 0x1000) == 0
              || (*((_QWORD *)v22 + 227) = **(_QWORD **)(v16 + 384),
                  SectionInformation = MmGetSectionStrongImageReference(0LL, 0LL, *((_QWORD *)v22 + 119), &v178),
                  SectionInformation >= 0)
              && (SectionInformation = KeSecureProcess(
                                         (_KPROCESS *)v22,
                                         *((_QWORD *)v22 + 227),
                                         *((_QWORD *)v22 + 127),
                                         *((_QWORD *)v22 + 92),
                                         v178,
                                         *((_QWORD *)v22 + 120),
                                         *(_QWORD *)(v16 + 384),
                                         *(unsigned int *)(v16 + 400)),
                  SectionInformation >= 0) )
            {
              if ( KeQuerySystemTimeUnsafe() )
              {
                KeQuerySystemTimePrecise((LARGE_INTEGER *)v22 + 97);
              }
              else
              {
                v22 = (char *)Object;
                *((_QWORD *)Object + 97) = MEMORY[0xFFFFF78000000014];
              }
              *((_QWORD *)v22 + 235) = MEMORY[0xFFFFF78000000008];
              UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
              v93 = Object;
              *((_QWORD *)Object + 236) = UnbiasedInterruptTime;
              v93[238] = *((_QWORD *)v22 + 235);
              *v179 = v93;
              return (unsigned int)v137;
            }
            if ( (_InterlockedExchangeAdd64(v87, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v22 + 91, v122, v123, v124);
            KeAbPostRelease((ULONG_PTR)(v22 + 728));
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
          }
          else
          {
            if ( (_InterlockedExchangeAdd64(v87, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v22 + 91, v89, v90, v91);
            KeAbPostRelease((ULONG_PTR)(v22 + 728));
            KeLeaveCriticalRegionThread((__int64)v86);
            SectionInformation = -1073741670;
          }
          v22 = (char *)Object;
        }
        goto LABEL_325;
      }
      v108 = Process;
      if ( !Process )
        goto LABEL_154;
      *((_QWORD *)v22 + 120) = Process[1].Affinity.Bitmap[18];
      SectionInformation = MmInitializeProcessAddressSpace(
                             (ULONG_PTR)v22,
                             (ULONG_PTR)v108,
                             0LL,
                             (unsigned int *)&a9,
                             v147[0]);
      if ( SectionInformation < 0 )
        goto LABEL_323;
      v109 = a9;
      v17 = ((unsigned __int8)v127 ^ (unsigned __int8)(4 * a9)) & 0x40 ^ v127 | 2;
      v127 = v17;
      v110 = (unsigned int)*(unsigned __int16 *)(v108[1].ActiveProcessors.Bitmap[15] + 2) + 16;
      v111 = ExAllocatePoolWithTag(NonPagedPoolNx, v110, 0x61506553u);
      *((_QWORD *)v22 + 141) = v111;
      if ( v111 )
      {
        v112 = (unsigned int)v110;
        v113 = Process;
        memmove(v111, (const void *)Process[1].ActiveProcessors.Bitmap[15], v112);
        *(_QWORD *)(*((_QWORD *)v22 + 141) + 8LL) = *((_QWORD *)v22 + 141) + 16LL;
        *((_DWORD *)v22 + 242) = v113[1].Affinity.Bitmap[19];
        if ( (v109 & 0x1000) != 0 )
        {
          *v176 = 0LL;
          ObfDereferenceObject(v146);
        }
        goto LABEL_154;
      }
LABEL_330:
      SectionInformation = -1073741670;
      goto LABEL_323;
    }
    LOBYTE(v45) = v128;
    goto LABEL_63;
  }
  return result;
}
