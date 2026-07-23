/*
 * XREFs of NtQueryInformationProcess @ 0x1404EA100
 * Callers:
 *     <none>
 * Callees:
 *     MmQueryCommitReleaseState @ 0x1400366C0 (MmQueryCommitReleaseState.c)
 *     PsQueryProcessCommandLine @ 0x140039BE0 (PsQueryProcessCommandLine.c)
 *     ExUnlockUserBuffer @ 0x14003C654 (ExUnlockUserBuffer.c)
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     SeTokenIsNoChildProcessRestricted @ 0x1400665B0 (SeTokenIsNoChildProcessRestricted.c)
 *     KeQueryAffinityProcess @ 0x140084ED0 (KeQueryAffinityProcess.c)
 *     KeQueryGroupMaskProcess @ 0x140085004 (KeQueryGroupMaskProcess.c)
 *     MmQueryWorkingSetInformation @ 0x1400851A0 (MmQueryWorkingSetInformation.c)
 *     MmGetSessionId @ 0x14008BB90 (MmGetSessionId.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeQuerySystemTimePrecise @ 0x140110600 (KeQuerySystemTimePrecise.c)
 *     xKdEnumerateDebuggingDevices @ 0x140168720 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x1401806E0 (ZwQueryInformationJobObject.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x140202600 (KeQueryCpuSetsProcess.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14025A5F4 (ExQueryHandleExceptionsPermanency.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExQueryProcessHandleInformation @ 0x14041EA08 (ExQueryProcessHandleInformation.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x14041F8A0 (PsQueryProcessSignatureMitigationPolicy.c)
 *     PsQueryTotalCycleTimeProcess @ 0x14041F920 (PsQueryTotalCycleTimeProcess.c)
 *     ExReferenceHandleDebugInfo @ 0x14041FAA0 (ExReferenceHandleDebugInfo.c)
 *     ExEnumHandleTable @ 0x140428630 (ExEnumHandleTable.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14043D4E8 (EtwQueryProcessTelemetryInfo.c)
 *     ObGetProcessHandleCount @ 0x140441B10 (ObGetProcessHandleCount.c)
 *     ExIsRestrictedCaller @ 0x140443EE4 (ExIsRestrictedCaller.c)
 *     KeGetExecuteOptions @ 0x140457964 (KeGetExecuteOptions.c)
 *     PsQueryStatisticsProcess @ 0x140479C70 (PsQueryStatisticsProcess.c)
 *     PsReferenceProcessFilePointer @ 0x1404A1CC0 (PsReferenceProcessFilePointer.c)
 *     PsQueryRuntimeProcess @ 0x1404EC620 (PsQueryRuntimeProcess.c)
 *     ObQueryDeviceMapInformation @ 0x1404EC6F0 (ObQueryDeviceMapInformation.c)
 *     PsQueryFullProcessImageName @ 0x1404ECB24 (PsQueryFullProcessImageName.c)
 *     MmGetSectionInformation @ 0x1404ECBAC (MmGetSectionInformation.c)
 *     PspQueryQuotaLimits @ 0x1404ECDE0 (PspQueryQuotaLimits.c)
 *     IoQueryFileDosDeviceName @ 0x1404ECFA0 (IoQueryFileDosDeviceName.c)
 *     PsQueryProcessQuotaCounters @ 0x1404ED044 (PsQueryProcessQuotaCounters.c)
 *     PsQueryProcessAttributes @ 0x1404F7258 (PsQueryProcessAttributes.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     ObReferenceProcessHandleTable @ 0x140517F9C (ObReferenceProcessHandleTable.c)
 *     MmCopyVirtualMemory @ 0x1405181F0 (MmCopyVirtualMemory.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PsQueryProcessEnergyValues @ 0x1405400F0 (PsQueryProcessEnergyValues.c)
 *     ExLockUserBuffer @ 0x14055C224 (ExLockUserBuffer.c)
 *     DbgkOpenProcessDebugPort @ 0x14067E814 (DbgkOpenProcessDebugPort.c)
 *     VslGetSecurePebAddress @ 0x140687F64 (VslGetSecurePebAddress.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1406D0590 (PoQueryProcessEnergyTrackingState.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406E011C (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspQueryPooledQuotaLimits @ 0x1406E0404 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1406E05B4 (PspQueryWorkingSetWatch.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x1406E4374 (PsIumGetOnDemandDebugChallenge.c)
 *     ExDereferenceHandleDebugInfo @ 0x14071705C (ExDereferenceHandleDebugInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  size_t v5; // r14
  _OBJECT_NAME_INFORMATION *v6; // rsi
  unsigned __int8 v9; // di
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ebx
  _DWORD *v13; // rcx
  NTSTATUS result; // eax
  NTSTATUS v15; // r13d
  volatile signed __int32 *p_Lock; // r14
  int v17; // eax
  NTSTATUS DeviceMapInformation; // edi
  struct _EX_RUNDOWN_REF *v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // ebx
  int v23; // r14d
  _KPROCESS *v24; // rdi
  char v25; // r15
  __int64 v26; // rdx
  struct _KTHREAD *v27; // rbx
  __int64 v28; // rdx
  unsigned __int64 Group; // r8
  _DWORD *v30; // rbx
  unsigned __int64 v31; // rax
  _DWORD *v32; // rcx
  __int16 v33; // cx
  int v34; // ebx
  unsigned int v35; // ebx
  char *v36; // r13
  struct _EX_RUNDOWN_REF *v37; // r14
  void *Ptr; // rbx
  int v39; // r15d
  char *v40; // r13
  struct _EX_RUNDOWN_REF *v41; // rbx
  struct _FILE_OBJECT *v42; // r15
  NTSTATUS ExecuteOptions; // ebx
  POBJECT_NAME_INFORMATION v44; // rdi
  ULONG v45; // r15d
  unsigned __int16 MaximumLength; // ax
  __int64 v47; // r13
  __int64 *v48; // rax
  int SessionId; // ebx
  _QWORD *v50; // rbx
  _DWORD *v51; // rcx
  _DWORD *v52; // rcx
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v55; // ecx
  unsigned __int64 v56; // rax
  __int64 v57; // rbx
  NTSTATUS ProcessCommandLine; // r15d
  PVOID v59; // rbx
  __int64 v60; // r13
  PVOID v61; // rbx
  __int64 *v62; // rax
  __int16 v63; // cx
  __int64 v64; // rax
  __int64 v65; // rdx
  unsigned __int16 v66; // r15
  __int64 v67; // rax
  __int64 v68; // rax
  NTSTATUS v69; // edi
  ULONG v70; // eax
  __int16 v71; // r8
  void *Process; // r10
  void *v73; // r10
  BOOL v74; // ebx
  PVOID v75; // rbx
  int v76; // ecx
  PVOID v77; // r8
  _DWORD *v78; // rcx
  ULONG_PTR v79; // rbx
  NTSTATUS ProcessHandleInformation; // edi
  PVOID v81; // rcx
  PVOID v82; // rdi
  BOOL v83; // ebx
  int ProcessHandleCount; // edi
  __int64 v85; // r14
  unsigned int v86; // r13d
  __int64 v87; // rax
  __int64 v88; // r15
  volatile signed __int32 *v89; // rax
  volatile signed __int32 *v90; // r8
  int ProcessNotificationChannel; // ebx
  PVOID v92; // rdi
  __int64 v93; // rbx
  struct _EX_RUNDOWN_REF *v94; // r15
  __int64 v95; // rax
  NTSTATUS v96; // ebx
  struct _EX_RUNDOWN_REF *v97; // rbx
  __int64 v98; // rax
  HANDLE v99; // rdx
  NTSTATUS v100; // ebx
  int v101; // ebx
  __int64 v102; // rdx
  volatile signed __int32 *v103; // rax
  __int64 v104; // r9
  int v105; // ecx
  int v106; // r13d
  __int64 v107; // rdx
  __int64 v108; // rcx
  ULONG v109; // r13d
  unsigned int v110; // eax
  unsigned int v111; // edx
  int v112; // r13d
  __int64 v113; // rax
  int v114; // r13d
  __int64 v115; // rax
  unsigned int v116; // r13d
  unsigned int v117; // r8d
  ULONG v118; // ebx
  struct _KPROCESS *v119; // rbx
  PACCESS_TOKEN v120; // rax
  unsigned __int64 v121; // rdx
  _DWORD *p_LockNV; // rcx
  PVOID v123; // rdi
  ULONG v124; // ebx
  __int64 v125; // rax
  _DWORD *v126; // rcx
  PVOID Object; // [rsp+40h] [rbp-8C8h] BYREF
  NTSTATUS v128; // [rsp+48h] [rbp-8C0h]
  unsigned __int8 v129; // [rsp+4Ch] [rbp-8BCh]
  unsigned __int16 v130; // [rsp+50h] [rbp-8B8h] BYREF
  unsigned int GroupMaskProcess; // [rsp+54h] [rbp-8B4h] BYREF
  char v132[4]; // [rsp+58h] [rbp-8B0h] BYREF
  char v133[4]; // [rsp+5Ch] [rbp-8ACh] BYREF
  int v134; // [rsp+60h] [rbp-8A8h]
  HANDLE v135; // [rsp+68h] [rbp-8A0h]
  ULONG v136; // [rsp+70h] [rbp-898h] BYREF
  unsigned int v137; // [rsp+74h] [rbp-894h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+78h] [rbp-890h] BYREF
  int v139; // [rsp+80h] [rbp-888h]
  HANDLE Handle; // [rsp+88h] [rbp-880h] BYREF
  __int64 v141; // [rsp+90h] [rbp-878h]
  _DWORD *v142; // [rsp+98h] [rbp-870h]
  int v143; // [rsp+A0h] [rbp-868h]
  PVOID v144; // [rsp+A8h] [rbp-860h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-858h]
  __int128 v146; // [rsp+C0h] [rbp-848h]
  struct _MDL *v147; // [rsp+D0h] [rbp-838h] BYREF
  LARGE_INTEGER v148; // [rsp+D8h] [rbp-830h] BYREF
  _OBJECT_NAME_INFORMATION v149; // [rsp+E0h] [rbp-828h] BYREF
  _OBJECT_NAME_INFORMATION v150; // [rsp+F0h] [rbp-818h] BYREF
  int v151; // [rsp+100h] [rbp-808h] BYREF
  unsigned int v152; // [rsp+104h] [rbp-804h] BYREF
  ULONG v153; // [rsp+108h] [rbp-800h]
  int v154; // [rsp+10Ch] [rbp-7FCh]
  int v155; // [rsp+110h] [rbp-7F8h] BYREF
  _QWORD v156[3]; // [rsp+118h] [rbp-7F0h] BYREF
  int v157[2]; // [rsp+130h] [rbp-7D8h] BYREF
  int v158; // [rsp+138h] [rbp-7D0h] BYREF
  __int64 v159; // [rsp+140h] [rbp-7C8h] BYREF
  __int64 v160; // [rsp+148h] [rbp-7C0h]
  __int64 v161; // [rsp+150h] [rbp-7B8h]
  _BYTE v162[48]; // [rsp+158h] [rbp-7B0h] BYREF
  __int64 v163; // [rsp+188h] [rbp-780h]
  PVOID v164; // [rsp+190h] [rbp-778h] BYREF
  int v165[8]; // [rsp+198h] [rbp-770h] BYREF
  PVOID v166; // [rsp+1B8h] [rbp-750h] BYREF
  ULONG v167; // [rsp+1C0h] [rbp-748h]
  int v168; // [rsp+1C4h] [rbp-744h]
  wchar_t *v169; // [rsp+1C8h] [rbp-740h] BYREF
  PVOID v170[2]; // [rsp+1D0h] [rbp-738h] BYREF
  __int128 v171; // [rsp+1E0h] [rbp-728h]
  _QWORD Src[14]; // [rsp+1F0h] [rbp-718h] BYREF
  __int64 v173; // [rsp+260h] [rbp-6A8h] BYREF
  __int64 v174[4]; // [rsp+268h] [rbp-6A0h] BYREF
  __int64 v175; // [rsp+288h] [rbp-680h] BYREF
  __int64 v176[5]; // [rsp+290h] [rbp-678h] BYREF
  __int128 v177; // [rsp+2B8h] [rbp-650h]
  __int128 v178; // [rsp+2C8h] [rbp-640h]
  __int128 v179; // [rsp+2D8h] [rbp-630h]
  __int128 v180; // [rsp+2F0h] [rbp-618h]
  __int128 v181; // [rsp+300h] [rbp-608h]
  __int128 v182; // [rsp+310h] [rbp-5F8h]
  __int128 v183; // [rsp+320h] [rbp-5E8h]
  __int128 v184; // [rsp+330h] [rbp-5D8h]
  __int128 v185; // [rsp+340h] [rbp-5C8h]
  __int128 v186; // [rsp+350h] [rbp-5B8h]
  __int128 v187; // [rsp+360h] [rbp-5A8h]
  __int128 v188; // [rsp+370h] [rbp-598h]
  __int128 v189; // [rsp+380h] [rbp-588h]
  char v190; // [rsp+390h] [rbp-578h] BYREF
  _QWORD JobInformation[5]; // [rsp+3A0h] [rbp-568h] BYREF
  $5BC46E0569261879018906DEC3127961 v192; // [rsp+3C8h] [rbp-540h] BYREF
  $5BC46E0569261879018906DEC3127961 v193; // [rsp+3F8h] [rbp-510h] BYREF
  char v194[16]; // [rsp+430h] [rbp-4D8h] BYREF
  int v195; // [rsp+440h] [rbp-4C8h]
  __int64 v196; // [rsp+4A8h] [rbp-460h]
  __int64 v197; // [rsp+4C0h] [rbp-448h]
  _BYTE v198[144]; // [rsp+4D0h] [rbp-438h] BYREF
  _BYTE v199[176]; // [rsp+560h] [rbp-3A8h] BYREF
  _BYTE v200[176]; // [rsp+610h] [rbp-2F8h] BYREF
  _BYTE v201[352]; // [rsp+6C0h] [rbp-248h] BYREF
  _QWORD v202[20]; // [rsp+820h] [rbp-E8h] BYREF

  v5 = ProcessInformationLength;
  v6 = (_OBJECT_NAME_INFORMATION *)ProcessInformation;
  v135 = ProcessHandle;
  v156[2] = ProcessInformation;
  LODWORD(v141) = ProcessInformationLength;
  v156[1] = ReturnLength;
  v9 = KeGetCurrentThread()->gap0[10];
  v129 = v9;
  CurrentThread = KeGetCurrentThread();
  if ( !v9 )
    goto LABEL_19;
  if ( ProcessInformationClass == ProcessProtectionInformation )
    goto LABEL_16;
  if ( ProcessInformationClass == ProcessCommitReleaseInformation )
  {
    v10 = 8;
    goto LABEL_6;
  }
  if ( ((ProcessInformationClass - 70) & 0xFFFFFFFB) == 0 )
  {
LABEL_16:
    v10 = 1;
    goto LABEL_6;
  }
  v10 = 4;
LABEL_6:
  v134 = v10;
  if ( ProcessInformationLength )
  {
    if ( ((v10 - 1) & (unsigned int)ProcessInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)ProcessInformation + ProcessInformationLength > 0x7FFFFFFF0000LL
      || (char *)ProcessInformation + ProcessInformationLength < ProcessInformation )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( ReturnLength )
  {
    v11 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v11 = *(_DWORD *)v11;
  }
LABEL_19:
  if ( ProcessInformationClass != ProcessCookie )
  {
    if ( ProcessInformationClass != ProcessMitigationPolicy )
    {
      switch ( ProcessInformationClass )
      {
        case ProcessBasicInformation:
          if ( ProcessInformationLength == 64 )
          {
            v142 = ProcessInformation;
            v22 = 64;
            v141 = 64LL;
            *(_QWORD *)ProcessInformation = 64LL;
            v6 = (_OBJECT_NAME_INFORMATION *)((char *)ProcessInformation + 8);
          }
          else
          {
            if ( ProcessInformationLength != 48 )
              return -1073741820;
            v142 = 0LL;
            v22 = 48;
            v141 = 48LL;
          }
          v134 = v22;
          ObjectNameInformation = v6;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          v23 = result;
          v128 = result;
          if ( result < 0 )
            return result;
          v24 = (_KPROCESS *)Object;
          *(_DWORD *)&v6->Name.Length = *((_DWORD *)Object + 393);
          v6->Name.Buffer = (wchar_t *)v24[1].ActiveProcessors.Bitmap[1];
          v25 = 1;
          if ( v24->SecurePid )
            VslGetSecurePebAddress(v24);
          if ( v23 < 0 )
            goto LABEL_88;
          GroupMaskProcess = KeQueryGroupMaskProcess((__int64)v24);
          v27 = CurrentThread;
          if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 && v24 != CurrentThread->Process )
            goto LABEL_65;
          KeQueryAffinityProcess((__int64)v24, (__int64)v199, (int *)&GroupMaskProcess, 0LL);
          v28 = GroupMaskProcess;
          if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 )
          {
            if ( v24 != v27->Process )
              goto LABEL_393;
            Group = v27->UserAffinity.Group;
            if ( !_bittest64(&v28, Group) )
              goto LABEL_393;
          }
          else
          {
            _BitScanForward((unsigned int *)&Group, GroupMaskProcess);
          }
          if ( (_DWORD)Group != 20 )
          {
            v26 = *(_QWORD *)&v199[8 * Group + 8];
            goto LABEL_65;
          }
LABEL_393:
          v26 = 0LL;
LABEL_65:
          *(_QWORD *)&v6[1].Name.Length = v26;
          LODWORD(v6[1].Name.Buffer) = v24->BasePriority;
          *(_QWORD *)&v6[2].Name.Length = v24[1].Header.WaitListHead.Flink;
          v6[2].Name.Buffer = (wchar_t *)v24[1].SwapListEntry.Next;
          v30 = v142;
          if ( v142 )
          {
            v142[14] = 0;
            if ( (v24[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0 )
              v30[14] = 1;
            v31 = v24[1].ActiveProcessors.Bitmap[7];
            if ( v31 )
            {
              v33 = *(_WORD *)(v31 + 8);
              if ( v33 == 332 || v33 == 452 )
                v30[14] |= 2u;
            }
            v32 = (_DWORD *)&v24[1].DirectoryTableBase + 1;
            if ( (v24[1].DirectoryTableBase & 0x4000000800000000LL) != 0 )
              v30[14] |= 4u;
            v24 = (_KPROCESS *)Object;
            v30[14] ^= (v30[14] ^ (8 * (*((unsigned __int8 *)Object + 768) >> 7))) & 8;
            if ( v24->FreezeCount + ((*(_DWORD *)&v24->0 >> 3) & 1) )
              v30[14] |= 0x10u;
            v30[14] ^= (v30[14] ^ (32 * ((*v32 & 0x100000) != 0))) & 0x20;
            PsQueryProcessAttributes(v24, v132, 0LL);
            if ( v132[0] )
              v30[14] |= 0x40u;
            if ( !v24->SecurePid )
              v25 = 0;
            if ( v25 )
              v30[14] |= 0x80u;
            if ( v24[2].ActiveProcessors.Bitmap[9] )
              v30[14] |= 0x100u;
            v23 = v128;
          }
          if ( ReturnLength )
            *ReturnLength = v141;
LABEL_88:
          ObfDereferenceObjectWithTag(v24, 0x79517350u);
          return v23;
        case ProcessQuotaLimits:
          return PspQueryQuotaLimits((ULONG_PTR)ProcessHandle, (__int64)ReturnLength, v9);
        case ProcessIoCounters:
          if ( ProcessInformationLength != 48 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          if ( result >= 0 )
          {
            PsQueryStatisticsProcess((__int64)Object, v176);
            *(_OWORD *)v162 = v177;
            *(_OWORD *)&v162[16] = v178;
            *(_OWORD *)&v162[32] = v179;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *v6 = *(_OBJECT_NAME_INFORMATION *)v162;
            v6[1] = *(_OBJECT_NAME_INFORMATION *)&v162[16];
            v6[2] = *(_OBJECT_NAME_INFORMATION *)&v162[32];
            if ( ReturnLength )
              *ReturnLength = 48;
            return DeviceMapInformation;
          }
          return result;
        case ProcessVmCounters:
          if ( ProcessInformationLength != 88 && ProcessInformationLength != 96 && ProcessInformationLength != 112 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            memset(Src, 0, sizeof(Src));
            v50 = Object;
            Src[0] = *((_QWORD *)Object + 102);
            Src[1] = *((_QWORD *)Object + 103);
            LODWORD(Src[2]) = *((_DWORD *)Object + 321);
            KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v192);
            v128 = MmQueryWorkingSetInformation(&Src[3], &Src[4], &Src[12], v174, &v173, v165);
            KiUnstackDetachProcess(&v192, 0LL);
            PsQueryProcessQuotaCounters(v50, 1LL, &Src[6], &Src[5]);
            PsQueryProcessQuotaCounters(v50, 0LL, &Src[8], &Src[7]);
            Src[9] = v50[158] << 12;
            Src[10] = *((_QWORD *)Object + 159) << 12;
            Src[13] = *((_QWORD *)Object + 237) << 12;
            Src[11] = Src[9];
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            result = v128;
            if ( v128 >= 0 )
            {
              memmove(v6, Src, v5);
              if ( ReturnLength )
                *ReturnLength = v5;
              return 0;
            }
          }
          return result;
        case ProcessTimes:
          if ( ProcessInformationLength != 32 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          if ( result >= 0 )
          {
            v19 = (struct _EX_RUNDOWN_REF *)Object;
            v20 = PsQueryRuntimeProcess(Object, &v152);
            v21 = KeMaximumIncrement;
            *(_QWORD *)&v6[1].Name.Length = KeMaximumIncrement * (unsigned __int64)v20;
            v6[1].Name.Buffer = (wchar_t *)(v21 * v152);
            *(struct _EX_RUNDOWN_REF *)&v6->Name.Length = v19[97];
            v6->Name.Buffer = (wchar_t *)v19[210].Count;
            if ( ReturnLength )
              *ReturnLength = 32;
            goto LABEL_51;
          }
          return result;
        case ProcessDebugPort:
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            if ( *((_QWORD *)Object + 132) )
              Handle = (HANDLE)-1LL;
            else
              Handle = 0LL;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_QWORD *)&v6->Name.Length = Handle;
            if ( ReturnLength )
              *ReturnLength = 8;
            return 0;
          }
          return result;
        case ProcessLdtInformation:
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            v100 = xKdEnumerateDebuggingDevices();
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v100;
          }
          return result;
        case ProcessDefaultHardErrorMode:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            v34 = *((_DWORD *)Object + 296);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)&v6->Name.Length = v34;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          }
          return result;
        case ProcessPooledUsageAndLimits:
          return PspQueryPooledQuotaLimits(
                   (_DWORD)ProcessHandle,
                   (_DWORD)ProcessInformation,
                   ProcessInformationLength,
                   (_DWORD)ReturnLength,
                   v9);
        case ProcessWorkingSetWatch:
        case ProcessWorkingSetWatchEx:
          return PspQueryWorkingSetWatch((ULONG_PTR)ProcessHandle, (__int64)ReturnLength, v9);
        case ProcessPriorityClass:
          if ( ProcessInformationLength != 2 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            LOBYTE(v130) = 0;
            HIBYTE(v130) = *((_BYTE *)Object + 1119);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->Name.Length = v130;
            if ( ReturnLength )
              *ReturnLength = 2;
            return 0;
          }
          return result;
        case ProcessWx86Information:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          if ( result >= 0 )
          {
            v74 = (*((_DWORD *)Object + 193) & 0x1000000) != 0;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)&v6->Name.Length = v74;
            if ( ReturnLength )
              *ReturnLength = 4;
            return DeviceMapInformation;
          }
          return result;
        case ProcessHandleCount:
          if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)Object, &v151);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)&v6->Name.Length = ProcessHandleCount;
            if ( (_DWORD)v5 != 4 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) = v151;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          }
          return result;
        case ProcessAffinityMask:
          if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          if ( result >= 0 )
          {
            v19 = (struct _EX_RUNDOWN_REF *)Object;
            GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
            if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0
              || (KeQueryAffinityProcess((__int64)v19, (__int64)v200, (int *)&GroupMaskProcess, 0LL),
                  ((GroupMaskProcess - 1) & GroupMaskProcess) != 0) )
            {
              DeviceMapInformation = -1073741811;
            }
            else
            {
              _BitScanForward((unsigned int *)&v107, GroupMaskProcess);
              v108 = *(_QWORD *)&v200[8 * v107 + 8];
              if ( (_DWORD)v5 == 16 )
                LOWORD(v6->Name.Buffer) = v107;
              *(_QWORD *)&v6->Name.Length = v108;
              if ( ReturnLength )
                *ReturnLength = v5;
            }
            goto LABEL_51;
          }
          return result;
        case ProcessPriorityBoost:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          if ( result >= 0 )
          {
            v101 = (*((unsigned __int8 *)Object + 440) >> 1) & 1;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)&v6->Name.Length = v101;
            if ( ReturnLength )
              *ReturnLength = 4;
            return DeviceMapInformation;
          }
          return result;
        case ProcessDeviceMap:
          if ( ProcessInformationLength < 0x24 )
            return -1073741820;
          if ( ProcessInformationLength == 48 )
          {
            v137 = *((_DWORD *)ProcessInformation + 10);
            v35 = v137;
            if ( (v137 & 0xFFFFFFFE) != 0 )
              return -1073741811;
          }
          else
          {
            if ( ProcessInformationLength != 36 )
              return -1073741820;
            v35 = 0;
          }
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            DeviceMapInformation = ObQueryDeviceMapInformation(Object, v6, v35);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( DeviceMapInformation >= 0 && ReturnLength )
              *ReturnLength = v5;
            return DeviceMapInformation;
          }
          return result;
        case ProcessSessionInformation:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            SessionId = MmGetSessionId((struct _KPROCESS *)Object);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)&v6->Name.Length = SessionId;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          }
          return result;
        case ProcessWow64Information:
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          v47 = 0LL;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            v48 = (__int64 *)*((_QWORD *)Object + 133);
            if ( v48 )
            {
              v71 = *((_WORD *)v48 + 4);
              if ( v71 == 332 || v71 == 452 )
                v47 = *v48;
            }
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_QWORD *)&v6->Name.Length = v47;
            if ( ReturnLength )
              *ReturnLength = 8;
            return 0;
          }
          return result;
        case ProcessImageFileName:
          v36 = 0LL;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            if ( (unsigned int)v5 < 0x10 )
            {
              v136 = 0;
              v6 = (_OBJECT_NAME_INFORMATION *)&v190;
            }
            else
            {
              v136 = v5 - 16;
              v36 = (char *)&v6[1];
            }
            DeviceMapInformation = PsQueryFullProcessImageName(Object, v6, v36, &v136);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( DeviceMapInformation >= 0 && !v36 )
              DeviceMapInformation = -1073741820;
            if ( ReturnLength && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
              *ReturnLength = v136 + 16;
            return DeviceMapInformation;
          }
          return result;
        case ProcessLUIDDeviceMapsEnabled:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          *(_DWORD *)ProcessInformation = 1;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ProcessBreakOnTermination:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v83 = (*((_DWORD *)Object + 193) & 0x2000) != 0;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *(_DWORD *)&v6->Name.Length = v83;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ProcessDebugObjectHandle:
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result < 0 )
            return result;
          DeviceMapInformation = DbgkOpenProcessDebugPort(Object, v9, &Handle);
          v99 = Handle;
          if ( DeviceMapInformation < 0 )
            v99 = 0LL;
          Handle = v99;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *(_QWORD *)&v6->Name.Length = Handle;
          if ( ReturnLength )
            *ReturnLength = 8;
          return DeviceMapInformation;
        case ProcessDebugFlags:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ExecuteOptions = result;
          if ( result < 0 )
            return result;
          v77 = Object;
          *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 193) & 2) == 0;
          if ( ReturnLength )
            *ReturnLength = 4;
LABEL_315:
          ObfDereferenceObjectWithTag(v77, 0x79517350u);
          return ExecuteOptions;
        case ProcessHandleTracing:
          if ( ProcessInformationLength < 0x10 )
            return -1073741820;
          if ( ExIsRestrictedCaller(v9) )
            return -1073741790;
          ObjectNameInformation = (POBJECT_NAME_INFORMATION)((unsigned int)(v5 - 16) / 0xA0uLL);
          v85 = (__int64)&v6[1];
          v86 = 0;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v19 = (struct _EX_RUNDOWN_REF *)Object;
          v87 = ObReferenceProcessHandleTable(Object);
          v88 = v87;
          v148.QuadPart = v87;
          if ( !v87 )
            goto LABEL_429;
          v89 = ExReferenceHandleDebugInfo(v87);
          v90 = v89;
          v147 = (struct _MDL *)v89;
          if ( v89 )
          {
            LODWORD(v6->Name.Buffer) = 0;
            v102 = (unsigned int)(*((_DWORD *)v89 + 18) % *((_DWORD *)v89 + 1));
            v143 = v102;
            while ( 1 )
            {
              v157[1] = v86;
              if ( v86 >= *((_DWORD *)v90 + 1) )
                break;
              v103 = &v90[40 * v102];
              v180 = *((_OWORD *)v103 + 5);
              v181 = *((_OWORD *)v103 + 6);
              v182 = *((_OWORD *)v103 + 7);
              v183 = *((_OWORD *)v103 + 8);
              v184 = *((_OWORD *)v103 + 9);
              v185 = *((_OWORD *)v103 + 10);
              v186 = *((_OWORD *)v103 + 11);
              v187 = *((_OWORD *)v103 + 12);
              v188 = *((_OWORD *)v103 + 13);
              v189 = *((_OWORD *)v103 + 14);
              v104 = v181;
              if ( *(_QWORD *)&v6->Name.Length == (_QWORD)v181 || !*(_QWORD *)&v6->Name.Length )
              {
                v105 = DWORD2(v181);
                if ( DWORD2(v181) )
                {
                  ++LODWORD(v6->Name.Buffer);
                  if ( (_DWORD)ObjectNameInformation )
                  {
                    ObjectNameInformation = (POBJECT_NAME_INFORMATION)(unsigned int)((_DWORD)ObjectNameInformation - 1);
                    v168 = (int)ObjectNameInformation;
                    *(_QWORD *)v85 = v104;
                    *(_OWORD *)(v85 + 8) = v180;
                    *(_DWORD *)(v85 + 24) = v105;
                    *(_OWORD *)(v85 + 32) = v182;
                    *(_OWORD *)(v85 + 48) = v183;
                    *(_OWORD *)(v85 + 64) = v184;
                    *(_OWORD *)(v85 + 80) = v185;
                    *(_OWORD *)(v85 + 96) = v186;
                    *(_OWORD *)(v85 + 112) = v187;
                    *(_OWORD *)(v85 + 128) = v188;
                    *(_OWORD *)(v85 + 144) = v189;
                    v85 += 160LL;
                    v174[1] = v85;
                  }
                  else
                  {
                    DeviceMapInformation = -1073741820;
                    v128 = -1073741820;
                  }
                }
              }
              if ( !(_DWORD)v102 )
                LODWORD(v102) = *((_DWORD *)v90 + 1);
              v102 = (unsigned int)(v102 - 1);
              v143 = v102;
              ++v86;
            }
            if ( ReturnLength )
              *ReturnLength = v85 - (_DWORD)v6;
            ExDereferenceHandleDebugInfo(v88, v90);
            v19 = (struct _EX_RUNDOWN_REF *)Object;
          }
          else
          {
            DeviceMapInformation = -1073741811;
          }
          goto LABEL_357;
        case ProcessIoPriority:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ExecuteOptions = result;
          v128 = result;
          if ( result < 0 )
            return result;
          v52 = Object;
          *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 193) >> 27) & 7;
          if ( ReturnLength )
            *ReturnLength = 4;
          goto LABEL_174;
        case ProcessExecuteFlags:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          if ( ProcessHandle == (HANDLE)-1LL )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
          }
          else
          {
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            Process = Object;
          }
          ExecuteOptions = KeGetExecuteOptions((__int64)Process, v157);
          if ( ProcessHandle != (HANDLE)-1LL )
            ObfDereferenceObjectWithTag(v73, 0x79517350u);
          if ( ExecuteOptions >= 0 )
          {
            *(_DWORD *)&v6->Name.Length = v157[0];
            if ( ReturnLength )
              *ReturnLength = 4;
          }
          return ExecuteOptions;
        case ProcessImageInformation:
          if ( ProcessInformationLength != 64 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v37 = (struct _EX_RUNDOWN_REF *)Object;
          if ( Object == CurrentThread->Process )
          {
            Ptr = (void *)*((_QWORD *)Object + 119);
            if ( !Ptr )
              DeviceMapInformation = -1073741558;
            v39 = 0;
          }
          else
          {
            v39 = 1;
            if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
            {
              Ptr = v37[119].Ptr;
              if ( Ptr )
                ObfReferenceObject(v37[119].Ptr);
              else
                DeviceMapInformation = -1073741811;
              ExReleaseRundownProtection(v37 + 95);
            }
            else
            {
              DeviceMapInformation = -1073741558;
              Ptr = 0LL;
            }
          }
          ObfDereferenceObjectWithTag(v37, 0x79517350u);
          if ( DeviceMapInformation >= 0 )
          {
            DeviceMapInformation = MmGetSectionInformation(Ptr, 1LL, v6);
            if ( v39 )
              ObfDereferenceObject(Ptr);
            if ( DeviceMapInformation >= 0 && ReturnLength )
              *ReturnLength = 64;
          }
          return DeviceMapInformation;
        case ProcessCycleTime:
          if ( ProcessInformationLength != 16 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ProcessNotificationChannel = result;
          if ( result < 0 )
            return result;
          v92 = Object;
          *(_QWORD *)&v6->Name.Length = PsQueryTotalCycleTimeProcess((__int64)Object, (__int64)&v169);
          v6->Name.Buffer = v169;
          if ( ReturnLength )
            *ReturnLength = 16;
          goto LABEL_367;
        case ProcessPagePriority:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ExecuteOptions = result;
          if ( result < 0 )
            return result;
          v52 = Object;
          *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 192) >> 12) & 7;
          if ( ReturnLength )
            *ReturnLength = 4;
          goto LABEL_174;
        case ProcessImageFileNameWin32:
          v40 = 0LL;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v41 = (struct _EX_RUNDOWN_REF *)Object;
          v42 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 137);
          v144 = v42;
          if ( v42 )
          {
            if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
            {
              ObfReferenceObject(v42);
              ExReleaseRundownProtection(v41 + 95);
            }
            else
            {
              DeviceMapInformation = -1073741558;
            }
          }
          else
          {
            DeviceMapInformation = PsReferenceProcessFilePointer(
                                     (struct _EX_RUNDOWN_REF *)Object,
                                     (unsigned __int64 *)&v144);
            v42 = (struct _FILE_OBJECT *)v144;
          }
          ObfDereferenceObjectWithTag(v41, 0x79517350u);
          if ( DeviceMapInformation < 0 )
            return DeviceMapInformation;
          ExecuteOptions = IoQueryFileDosDeviceName(v42, &ObjectNameInformation);
          ObfDereferenceObject(v42);
          if ( ExecuteOptions >= 0 )
          {
            v44 = ObjectNameInformation;
            v45 = ObjectNameInformation->Name.MaximumLength + 16;
            if ( v45 > (unsigned int)v5 )
            {
              ExecuteOptions = -1073741820;
              v128 = -1073741820;
            }
            else
            {
              v6->Name.Length = ObjectNameInformation->Name.Length;
              v6->Name.MaximumLength = v44->Name.MaximumLength;
              MaximumLength = v44->Name.MaximumLength;
              if ( MaximumLength )
              {
                v40 = (char *)&v6[1];
                memmove(&v6[1], v44->Name.Buffer, MaximumLength);
              }
              v6->Name.Buffer = (wchar_t *)v40;
            }
            if ( ReturnLength )
              *ReturnLength = v45;
            ExFreePoolWithTag(v44, 0);
          }
          return ExecuteOptions;
        case ProcessImageFileMapping:
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          v79 = *(_QWORD *)ProcessInformation;
          v174[2] = *(_QWORD *)ProcessInformation;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result < 0 )
            return result;
          ExecuteOptions = ObpReferenceObjectByHandleWithTag(v79, 2035381072, (__int64)&v144, 0LL, 0LL);
          v52 = Object;
          if ( ExecuteOptions < 0 )
            goto LABEL_174;
          ProcessHandleInformation = PsReferenceProcessFilePointer(
                                       (struct _EX_RUNDOWN_REF *)Object,
                                       (unsigned __int64 *)v170);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v81 = v144;
          if ( ProcessHandleInformation < 0 )
            goto LABEL_375;
          v82 = v170[0];
          if ( *((_QWORD *)v144 + 5) == *((_QWORD *)v170[0] + 5) )
            ExecuteOptions = 0;
          else
            ExecuteOptions = -1073741823;
          ObfDereferenceObject(v144);
          ObfDereferenceObject(v82);
          if ( ExecuteOptions >= 0 && ReturnLength )
            *ReturnLength = 0;
          return ExecuteOptions;
        case ProcessAffinityUpdateMode:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v137 = *((_DWORD *)Object + 192);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v106 = (v137 & 0x80000) != 0;
          if ( (v137 & 0x40000) != 0 )
            v106 |= 2u;
          *(_DWORD *)&v6->Name.Length = v106;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ProcessMemoryAllocationMode:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v137 = *((_DWORD *)Object + 193);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *(_DWORD *)&v6->Name.Length = (v137 & 0x200000) != 0;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ProcessGroupInformation:
          if ( !ReturnLength || (ProcessInformationLength & 1) != 0 )
            return -1073741811;
          v109 = 0;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            v110 = KeQueryGroupMaskProcess((__int64)Object);
            GroupMaskProcess = v110;
            do
            {
              _BitScanForward(&v111, v110);
              v109 += 2;
              v136 = v109;
              if ( v109 <= (unsigned int)v5 )
              {
                v6->Name.Length = v111;
                v6 = (_OBJECT_NAME_INFORMATION *)((char *)v6 + 2);
                v174[3] = (__int64)v6;
              }
              _bittestandreset((signed __int32 *)&GroupMaskProcess, v111);
              v110 = GroupMaskProcess;
            }
            while ( GroupMaskProcess );
            *ReturnLength = v109;
            ExecuteOptions = (unsigned int)v5 < v109 ? 0xC0000023 : 0;
            v128 = ExecuteOptions;
LABEL_174:
            ObfDereferenceObjectWithTag(v52, 0x79517350u);
            return ExecuteOptions;
          }
          return result;
        case ProcessConsoleHostProcess:
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v57 = *((_QWORD *)Object + 126);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *(_QWORD *)&v6->Name.Length = v57;
          if ( ReturnLength )
            *ReturnLength = 8;
          return 0;
        case ProcessWindowInformation:
          v60 = 0LL;
          v139 = 0;
          v146 = 0uLL;
          if ( v9 != 1 )
            return -1073741823;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          v128 = result;
          if ( result >= 0 )
          {
            v61 = Object;
            if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
            {
              KiStackAttachProcess((_KPROCESS *)v61, 0, (__int64)&v193);
              v62 = (__int64 *)*((_QWORD *)v61 + 133);
              if ( v62 )
              {
                v63 = *((_WORD *)v62 + 4);
                if ( v63 == 332 || v63 == 452 )
                  v60 = *v62;
              }
              if ( v60 )
              {
                v163 = *(unsigned int *)(v60 + 16);
                v67 = v163 + 104;
                if ( (unsigned __int64)(v163 + 104) >= 0x7FFFFFFF0000LL )
                  v67 = 0x7FFFFFFF0000LL;
                v139 = *(_DWORD *)v67;
                v68 = v163 + 112;
                if ( (unsigned __int64)(v163 + 112) >= 0x7FFFFFFF0000LL )
                  v68 = 0x7FFFFFFF0000LL;
                v142 = *(_DWORD **)v68;
                v66 = (unsigned __int16)v142;
                LODWORD(v146) = (_DWORD)v142;
                *((_QWORD *)&v146 + 1) = HIDWORD(v142);
              }
              else
              {
                v161 = *(_QWORD *)(*((_QWORD *)v61 + 127) + 32LL);
                v64 = v161 + 164;
                if ( (unsigned __int64)(v161 + 164) >= 0x7FFFFFFF0000LL )
                  v64 = 0x7FFFFFFF0000LL;
                v139 = *(_DWORD *)v64;
                v65 = v161 + 176;
                if ( (unsigned __int64)(v161 + 176) >= 0x7FFFFFFF0000LL )
                  v65 = 0x7FFFFFFF0000LL;
                LODWORD(v171) = *(_DWORD *)v65;
                *((_QWORD *)&v171 + 1) = *(_QWORD *)(v65 + 8);
                v146 = v171;
                v66 = v171;
              }
              v69 = v128;
              KiUnstackDetachProcess(&v193, 0LL);
              if ( v69 < 0 )
                goto LABEL_299;
              v70 = v66 + 6;
              if ( ReturnLength )
                *ReturnLength = v70;
              if ( (unsigned int)v5 < v70 )
              {
                v69 = -1073741820;
                v128 = -1073741820;
              }
              else
              {
                *(_DWORD *)&v6->Name.Length = v139;
                *(&v6->Name.MaximumLength + 1) = v66;
              }
              if ( v69 >= 0 && v66 )
              {
                v61 = Object;
                v69 = MmCopyVirtualMemory((ULONG_PTR)Object, (unsigned __int16)v146, 1, (__int64)&v175);
              }
              else
              {
LABEL_299:
                v61 = Object;
              }
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)v61 + 95);
            }
            else
            {
              v69 = -1073741558;
            }
            ObfDereferenceObjectWithTag(v61, 0x79517350u);
            return v69;
          }
          return result;
        case ProcessHandleInformation:
          if ( ProcessInformationLength < 0x10 )
          {
            if ( ReturnLength )
              *ReturnLength = 16;
            return -1073741820;
          }
          result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, v9, &v164, 0LL);
          if ( result >= 0 )
          {
            v93 = (__int64)CurrentThread;
            --CurrentThread->KernelApcDisable;
            v94 = (struct _EX_RUNDOWN_REF *)v164;
            v95 = ObReferenceProcessHandleTable(v164);
            if ( v95 )
            {
              ProcessHandleInformation = ExQueryProcessHandleInformation(v95, v6, v5, (int *)ReturnLength);
              ExReleaseRundownProtection(v94 + 95);
            }
            else
            {
              ProcessHandleInformation = -1073741558;
            }
            KiLeaveCriticalRegionUnsafe(v93);
            v81 = v94;
LABEL_375:
            ObfDereferenceObject(v81);
            return ProcessHandleInformation;
          }
          return result;
        case ProcessHandleCheckingMode:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v112 = 0;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          v128 = result;
          if ( result < 0 )
            return result;
          v19 = (struct _EX_RUNDOWN_REF *)Object;
          v113 = ObReferenceProcessHandleTable(Object);
          if ( !v113 )
            goto LABEL_429;
          LOBYTE(v112) = (*(_BYTE *)(v113 + 44) & 2) != 0;
          *(_DWORD *)&v6->Name.Length = v112;
          goto LABEL_357;
        case ProcessKeepAliveCount:
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ExecuteOptions = result;
          if ( result < 0 )
            return result;
          v52 = Object;
          *(_DWORD *)&v6->Name.Length = *((_DWORD *)Object + 507) & 0x7FFFFFFF;
          *(_DWORD *)(&v6->Name.MaximumLength + 1) = v52[515] & 0x7FFFFFFF;
          goto LABEL_174;
        case ProcessHandleTable:
          if ( ProcessInformationLength < 4 )
            return -1073741820;
          result = ExLockUserBuffer(
                     ProcessInformation,
                     ProcessInformationLength,
                     (unsigned __int8)KeGetCurrentThread()->gap0[10],
                     1LL,
                     v156,
                     &v147);
          if ( result < 0 )
            return result;
          v15 = 0;
          v96 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( v96 < 0 )
          {
            ExUnlockUserBuffer(v147);
            return v96;
          }
          v159 = 0LL;
          v160 = 0LL;
          v97 = (struct _EX_RUNDOWN_REF *)Object;
          v98 = ObReferenceProcessHandleTable(Object);
          if ( v98 )
          {
            v159 = v156[0];
            v160 = (unsigned int)v5 >> 2;
            ExEnumHandleTable(
              v98,
              (__int64 (__fastcall *)(__int64, signed __int64 *, _QWORD, __int64))PspHandleTableWalker,
              (__int64)&v159,
              0LL);
            ExReleaseRundownProtection(v97 + 95);
          }
          else
          {
            v15 = -1073741558;
          }
          ObfDereferenceObjectWithTag(v97, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = 4 * HIDWORD(v160);
          ExUnlockUserBuffer(v147);
          return v15;
        case ProcessCheckStackExtentsMode:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ExecuteOptions = result;
          if ( result < 0 )
            return result;
          v52 = Object;
          *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 110) >> 5) & 1;
          goto LABEL_174;
        case ProcessCommandLineInformation:
          ProcessCommandLine = ObpReferenceObjectByHandleWithTag(
                                 (ULONG_PTR)ProcessHandle,
                                 2035381072,
                                 (__int64)&Object,
                                 0LL,
                                 0LL);
          if ( ProcessCommandLine >= 0 )
          {
            v75 = Object;
            ProcessCommandLine = PsQueryProcessCommandLine(
                                   (struct _EX_RUNDOWN_REF *)Object,
                                   (__int64)v6,
                                   v5,
                                   v9,
                                   ReturnLength);
            if ( v75 )
              ObfDereferenceObjectWithTag(v75, 0x79517350u);
          }
          return ProcessCommandLine;
        case ProcessProtectionInformation:
          ExecuteOptions = ObpReferenceObjectByHandleWithTag(
                             (ULONG_PTR)ProcessHandle,
                             2035381072,
                             (__int64)&Object,
                             0LL,
                             0LL);
          if ( ExecuteOptions >= 0 )
          {
            if ( (_DWORD)v5 )
            {
              v77 = Object;
              LOBYTE(v6->Name.Length) = *((_BYTE *)Object + 1738);
              if ( ReturnLength )
                *ReturnLength = 1;
              ExecuteOptions = 0;
            }
            else
            {
              ExecuteOptions = -1073741820;
              v77 = Object;
            }
            if ( v77 )
              goto LABEL_315;
          }
          return ExecuteOptions;
        case ProcessTelemetryIdInformation:
          ProcessCommandLine = ObpReferenceObjectByHandleWithTag(
                                 (ULONG_PTR)ProcessHandle,
                                 2035381072,
                                 (__int64)&Object,
                                 0LL,
                                 0LL);
          if ( ProcessCommandLine < 0 )
            return ProcessCommandLine;
          v59 = Object;
          ProcessCommandLine = EtwQueryProcessTelemetryInfo(
                                 (__int64)Object,
                                 (char *)v6,
                                 (unsigned int)v5,
                                 v9,
                                 ReturnLength);
          if ( !v59 )
            return ProcessCommandLine;
          ObfDereferenceObjectWithTag(v59, 0x79517350u);
          return ProcessCommandLine;
        case ProcessCommitReleaseInformation:
          Object = 0LL;
          if ( ProcessInformationLength == 32 )
          {
            v149 = *(_OBJECT_NAME_INFORMATION *)ProcessInformation;
            v150 = (_OBJECT_NAME_INFORMATION)*((_OWORD *)ProcessInformation + 1);
            if ( *(_DWORD *)&v149.Name.Length == 3 )
            {
              if ( (*(_DWORD *)(&v149.Name.MaximumLength + 1) & 0xFFFFFFF8) != 0 || v149.Name.Buffer )
              {
                ExecuteOptions = -1073741811;
              }
              else
              {
                ExecuteOptions = ObpReferenceObjectByHandleWithTag(
                                   (ULONG_PTR)ProcessHandle,
                                   2035381072,
                                   (__int64)&Object,
                                   0LL,
                                   0LL);
                if ( ExecuteOptions >= 0 )
                {
                  MmQueryCommitReleaseState((ULONG_PTR)Object, &v158, &v149.Name.Buffer, &v150, &v150.Name.Buffer);
                  *(_DWORD *)(&v149.Name.MaximumLength + 1) ^= (*((_BYTE *)&v149.Name.MaximumLength + 2) ^ (unsigned __int8)v158) & 1;
                  v149.Name.Buffer = (wchar_t *)((__int64)v149.Name.Buffer << 12);
                  *(_QWORD *)&v150.Name.Length <<= 12;
                  v150.Name.Buffer = (wchar_t *)((__int64)v150.Name.Buffer << 12);
                  *v6 = v149;
                  v6[1] = v150;
                  ExecuteOptions = 0;
                }
              }
            }
            else
            {
              ExecuteOptions = -1073741735;
            }
          }
          else
          {
            ExecuteOptions = -1073741820;
          }
          v52 = Object;
          if ( !Object )
            return ExecuteOptions;
          goto LABEL_174;
        case ProcessDefaultCpuSetsInformation:
        case ProcessAllowedCpuSetsInformation:
          if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
            return -1073741820;
          v116 = 0;
          ProcessCommandLine = ObpReferenceObjectByHandleWithTag(
                                 (ULONG_PTR)ProcessHandle,
                                 2035381072,
                                 (__int64)&Object,
                                 0LL,
                                 0LL);
          v128 = ProcessCommandLine;
          if ( ProcessCommandLine >= 0 )
          {
            LOBYTE(v116) = ProcessInformationClass == ProcessAllowedCpuSetsInformation;
            v118 = 8 * KeQueryCpuSetsProcess((__int64)Object, v202, v117, v116);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v153 = v118;
            if ( ReturnLength )
              *ReturnLength = v118;
            if ( v118 >= (unsigned int)v5 )
              v118 = v5;
            v153 = v118;
            memmove(v6, v202, v118);
          }
          return ProcessCommandLine;
        case ProcessJobMemoryInformation:
          if ( ProcessInformationLength != 40 )
            return -1073741820;
          v15 = 0;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result < 0 )
            return result;
          memset(v162, 0, 0x28uLL);
          if ( *((_QWORD *)Object + 118) )
          {
            KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v192);
            ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, JobInformation, 0x28u, 0LL);
            ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, v194, 0x98u, 0LL);
            KiUnstackDetachProcess(&v192, 0LL);
            *(_QWORD *)&v162[8] = JobInformation[0];
            *(_QWORD *)&v162[16] = JobInformation[1];
            *(_QWORD *)v162 = JobInformation[2];
            if ( (v195 & 0x200000) != 0 )
              *(_QWORD *)&v162[32] = v197;
            if ( (v195 & 0x200) != 0 )
              *(_QWORD *)&v162[24] = v196;
            *v6 = *(_OBJECT_NAME_INFORMATION *)v162;
            v6[1] = *(_OBJECT_NAME_INFORMATION *)&v162[16];
            *(_QWORD *)&v6[2].Name.Length = *(_QWORD *)&v162[32];
            if ( ReturnLength )
              *ReturnLength = 40;
          }
          else
          {
            v15 = -1073741394;
          }
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v15;
        case ProcessInPrivate:
          if ( ProcessInformationLength != 1 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ExecuteOptions = result;
          if ( result < 0 )
            return result;
          v52 = Object;
          LOBYTE(v6->Name.Length) = (*((_DWORD *)Object + 435) & 0x400) != 0;
          goto LABEL_174;
        case ProcessRaiseUMExceptionOnInvalidHandleClose:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v114 = 0;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          v128 = result;
          if ( result < 0 )
            return result;
          v19 = (struct _EX_RUNDOWN_REF *)Object;
          v115 = ObReferenceProcessHandleTable(Object);
          if ( v115 )
          {
            LOBYTE(v114) = (*(_BYTE *)(v115 + 44) & 0x10) != 0;
            *(_DWORD *)&v6->Name.Length = v114;
LABEL_357:
            ExReleaseRundownProtection(v19 + 95);
          }
          else
          {
LABEL_429:
            DeviceMapInformation = -1073741558;
          }
LABEL_51:
          ObfDereferenceObjectWithTag(v19, 0x79517350u);
          return DeviceMapInformation;
        case ProcessIumChallengeResponse:
          return PsIumGetOnDemandDebugChallenge(
                   ProcessHandle,
                   ProcessInformation,
                   ProcessInformationLength,
                   ReturnLength);
        case ProcessChildProcessInformation:
          if ( ProcessInformationLength != 2 )
            return -1073741820;
          v15 = 0;
          if ( ProcessHandle == (HANDLE)-1LL )
          {
            v119 = KeGetCurrentThread()->ApcState.Process;
            Object = v119;
          }
          else
          {
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            v119 = (struct _KPROCESS *)Object;
          }
          v120 = PsReferencePrimaryToken(v119);
          v156[0] = v120;
          v6->Name.Length = 0;
          if ( (v119[2].ActiveProcessors.Bitmap[0] & 0x8000000000000LL) != 0 )
            HIBYTE(v6->Name.Length) = 1;
          if ( SeTokenIsNoChildProcessRestricted((__int64)v120) )
            LOBYTE(v6->Name.Length) = 1;
          if ( ReturnLength )
            *ReturnLength = 2;
          ObFastDereferenceObject((signed __int64 *)&v119[1].Affinity.Bitmap[5], v121);
          if ( ProcessHandle != (HANDLE)-1LL )
            ObfDereferenceObjectWithTag(v119, 0x79517350u);
          return v15;
        case ProcessHighGraphicsPriorityInformation:
          if ( ProcessInformationLength != 1 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ExecuteOptions = result;
          if ( result < 0 )
            return result;
          v52 = Object;
          LOBYTE(v6->Name.Length) = (*((_DWORD *)Object + 435) & 0x100000) != 0;
          goto LABEL_174;
        case ProcessSubsystemInformation:
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ExecuteOptions = result;
          if ( result < 0 )
            return result;
          v52 = Object;
          if ( *((_QWORD *)Object + 226) )
            *(_DWORD *)&v6->Name.Length = qword_140348E70;
          else
            *(_DWORD *)&v6->Name.Length = 0;
          if ( ReturnLength )
            *ReturnLength = 4;
          goto LABEL_174;
        case ProcessEnergyValues:
          if ( ProcessInformationLength != 344 && ProcessInformationLength != 272 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ProcessNotificationChannel = result;
          v128 = result;
          if ( result < 0 )
            return result;
          v92 = Object;
          PsQueryProcessEnergyValues(Object, v201);
          memmove(v6, v201, v5);
          if ( ReturnLength )
            *ReturnLength = v5;
          goto LABEL_367;
        case ProcessPowerThrottlingState:
        case ProcessReserved3Information:
          return -1073741822;
        case ProcessWin32kSyscallFilterInformation:
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          v15 = 0;
          if ( ProcessHandle == (HANDLE)-1LL )
          {
            p_LockNV = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
            Object = p_LockNV;
          }
          else
          {
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            p_LockNV = Object;
          }
          *(_DWORD *)&v6->Name.Length = 0;
          if ( (p_LockNV[435] & 0x8000) != 0 )
            *(_DWORD *)&v6->Name.Length = 1;
          if ( (p_LockNV[435] & 0x10000) != 0 )
            *(_DWORD *)&v6->Name.Length |= 2u;
          if ( ReturnLength )
            *ReturnLength = 8;
          if ( ProcessHandle != (HANDLE)-1LL )
            ObfDereferenceObjectWithTag(p_LockNV, 0x79517350u);
          return v15;
        case ProcessWakeInformation:
          if ( v9 )
            return -1073741790;
          if ( ProcessInformationLength != 48 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            v92 = Object;
            ProcessNotificationChannel = PspAllocateAndQueryProcessNotificationChannel(CurrentThread, Object, v6);
            if ( ProcessNotificationChannel >= 0 && ReturnLength )
              *ReturnLength = 48;
LABEL_367:
            ObfDereferenceObjectWithTag(v92, 0x79517350u);
            result = ProcessNotificationChannel;
          }
          break;
        case ProcessEnergyTrackingState:
          if ( ProcessInformationLength < 8 )
            return -1073741820;
          v15 = 0;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          v128 = result;
          if ( result < 0 )
            return result;
          v123 = Object;
          PoQueryProcessEnergyTrackingState(Object, v198);
          v124 = 144;
          if ( (unsigned int)v5 < 0x90 )
            v124 = v5;
          v167 = v124;
          memmove(v6, v198, v124);
          if ( ReturnLength )
            *ReturnLength = v124;
          v128 = 0;
          ObfDereferenceObjectWithTag(v123, 0x79517350u);
          return v15;
        default:
          return -1073741821;
      }
      return result;
    }
    if ( ProcessInformationLength == 8 )
    {
      v12 = *(_DWORD *)ProcessInformation;
      v154 = *(_DWORD *)ProcessInformation;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Object = KeGetCurrentThread()->ApcState.Process;
        v12 = v154;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
      }
      if ( v12 == 7 )
      {
        v128 = 0;
        *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
        if ( (*((_DWORD *)Object + 193) & 0x10) != 0 )
          *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
        v13 = Object;
        if ( (*((_DWORD *)Object + 435) & 0x4000000) != 0 )
          *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
        if ( (v13[435] & 0x20000000) != 0 )
          *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
      }
      else
      {
        switch ( v12 )
        {
          case 1:
            v128 = 0;
            *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
            v78 = Object;
            if ( (*((_DWORD *)Object + 192) & 0x20000) == 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
            if ( (v78[192] & 0x8000000) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
            if ( (v78[192] & 0x2000000) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
            if ( (v78[192] & 0x1000000) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 8u;
            break;
          case 2:
            v128 = 0;
            *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
            if ( (*((_DWORD *)Object + 192) & 0x400) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
            v51 = Object;
            if ( (*((_DWORD *)Object + 435) & 0x4000) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
            if ( (v51[435] & 0x800000) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
            break;
          case 3:
            v128 = 0;
            v125 = ObReferenceProcessHandleTable(Object);
            if ( v125 )
            {
              ExQueryHandleExceptionsPermanency(v125, v133, (bool *)&v130);
              *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
              if ( v133[0] )
                *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
              if ( (_BYTE)v130 )
                *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 95);
            }
            else
            {
              v128 = -1073741558;
            }
            break;
          case 4:
            v128 = 0;
            *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
            if ( *((int *)Object + 192) < 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
            break;
          case 6:
            v128 = 0;
            *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
            if ( (*((_DWORD *)Object + 192) & 0x4000000) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
            break;
          case 8:
            v128 = 0;
            PsQueryProcessSignatureMitigationPolicy((__int64)Object, &v155);
            *(_DWORD *)(&v6->Name.MaximumLength + 1) = v155;
            break;
          case 9:
            v128 = 0;
            *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
            v76 = *((_DWORD *)Object + 435);
            if ( (v76 & 4) != 0 )
            {
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
            }
            else if ( (v76 & 8) != 0 )
            {
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
            }
            break;
          case 10:
            v128 = 0;
            *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
            v126 = Object;
            if ( (*((_DWORD *)Object + 435) & 0x800) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
            if ( (v126[435] & 0x1000) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
            if ( (v126[435] & 0x20000) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
            break;
          default:
            v128 = -1073741637;
            break;
        }
      }
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v128;
    }
    return -1073741820;
  }
  if ( ProcessInformationLength != 4 )
    return -1073741820;
  v15 = 0;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
    Object = (PVOID)p_Lock;
  }
  else
  {
    result = ObReferenceObjectByHandle(ProcessHandle, 0x20u, (POBJECT_TYPE)PsProcessType, v9, &v166, 0LL);
    p_Lock = (volatile signed __int32 *)v166;
    Object = v166;
    if ( result < 0 )
      return result;
  }
  v128 = 0;
  while ( 1 )
  {
    v17 = *((_DWORD *)p_Lock + 242);
    if ( v17 )
      break;
    KeQuerySystemTimePrecise(&v148);
    CurrentPrcb = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v55 = ExGenRandom(1);
    v56 = __rdtsc();
    _InterlockedCompareExchange(
      p_Lock + 242,
      v56 ^ v55 ^ CurrentPrcb->MmPageFaultCount ^ v148.LowPart ^ v148.HighPart ^ LowPart ^ CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime,
      0);
    v15 = v128;
    p_Lock = (volatile signed __int32 *)Object;
  }
  *(_DWORD *)&v6->Name.Length = v17;
  if ( ReturnLength )
    *ReturnLength = 4;
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObject((PVOID)p_Lock);
  return v15;
}
