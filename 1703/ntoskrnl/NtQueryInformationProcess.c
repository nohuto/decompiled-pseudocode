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

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  size_t v5; // r14
  struct _OBJECT_NAME_INFORMATION *v6; // rsi
  PROCESSINFOCLASS v7; // ebx
  unsigned __int8 v9; // di
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // ebx
  _DWORD *v14; // rcx
  NTSTATUS result; // eax
  NTSTATUS v16; // r13d
  volatile signed __int32 *p_Lock; // r14
  int v18; // eax
  NTSTATUS DeviceMapInformation; // edi
  struct _EX_RUNDOWN_REF *v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // ebx
  int v24; // r14d
  _KPROCESS *v25; // rdi
  char v26; // r15
  __int64 v27; // rdx
  struct _KTHREAD *v28; // rbx
  __int64 v29; // rdx
  unsigned __int64 Group; // r8
  _DWORD *v31; // rbx
  unsigned __int64 v32; // rax
  _DWORD *v33; // rcx
  __int16 v34; // cx
  int v35; // ebx
  unsigned int v36; // ebx
  char *v37; // r13
  struct _EX_RUNDOWN_REF *v38; // r14
  void *Ptr; // rbx
  int v40; // r15d
  char *v41; // r13
  struct _EX_RUNDOWN_REF *v42; // rbx
  struct _FILE_OBJECT *v43; // r15
  NTSTATUS ExecuteOptions; // ebx
  POBJECT_NAME_INFORMATION v45; // rdi
  ULONG v46; // r15d
  unsigned __int16 MaximumLength; // ax
  __int64 v48; // r13
  __int64 *v49; // rax
  int SessionId; // ebx
  _QWORD *v51; // rbx
  _DWORD *v52; // rcx
  _DWORD *v53; // rcx
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v56; // ecx
  unsigned __int64 v57; // rax
  __int64 v58; // rbx
  NTSTATUS ProcessCommandLine; // r15d
  PVOID v60; // rbx
  __int64 v61; // r13
  PVOID v62; // rbx
  __int64 *v63; // rax
  __int16 v64; // cx
  __int64 v65; // rax
  __int64 v66; // rdx
  unsigned __int16 v67; // r15
  __int64 v68; // rax
  __int64 v69; // rax
  NTSTATUS v70; // edi
  ULONG v71; // eax
  __int16 v72; // r8
  void *Process; // r10
  void *v74; // r10
  BOOL v75; // ebx
  PVOID v76; // rbx
  int v77; // ecx
  PVOID v78; // r8
  _DWORD *v79; // rcx
  ULONG_PTR v80; // rbx
  NTSTATUS ProcessHandleInformation; // edi
  PVOID v82; // rcx
  PVOID v83; // rdi
  BOOL v84; // ebx
  int ProcessHandleCount; // edi
  __int64 v86; // r14
  unsigned int v87; // r13d
  __int64 v88; // rax
  __int64 v89; // r15
  volatile signed __int32 *v90; // rax
  volatile signed __int32 *v91; // r8
  int ProcessNotificationChannel; // ebx
  PVOID v93; // rdi
  __int64 v94; // rbx
  struct _EX_RUNDOWN_REF *v95; // r15
  __int64 v96; // rax
  NTSTATUS v97; // ebx
  struct _EX_RUNDOWN_REF *v98; // rbx
  __int64 v99; // rax
  HANDLE v100; // rdx
  NTSTATUS v101; // ebx
  int v102; // ebx
  __int64 v103; // rdx
  volatile signed __int32 *v104; // rax
  __int64 v105; // r9
  int v106; // ecx
  int v107; // r13d
  __int64 v108; // rdx
  __int64 v109; // rcx
  ULONG v110; // r13d
  unsigned int v111; // eax
  unsigned int v112; // edx
  int v113; // r13d
  __int64 v114; // rax
  int v115; // r13d
  __int64 v116; // rax
  unsigned int v117; // r13d
  unsigned int v118; // r8d
  ULONG v119; // ebx
  struct _KPROCESS *v120; // rbx
  PACCESS_TOKEN v121; // rax
  unsigned __int64 v122; // rdx
  _DWORD *p_LockNV; // rcx
  PVOID v124; // rdi
  ULONG v125; // ebx
  __int64 v126; // rax
  _DWORD *v127; // rcx
  PVOID Object; // [rsp+40h] [rbp-8C8h] BYREF
  NTSTATUS v129; // [rsp+48h] [rbp-8C0h]
  unsigned __int8 v130; // [rsp+4Ch] [rbp-8BCh]
  unsigned __int16 v131; // [rsp+50h] [rbp-8B8h] BYREF
  unsigned int GroupMaskProcess; // [rsp+54h] [rbp-8B4h] BYREF
  char v133[4]; // [rsp+58h] [rbp-8B0h] BYREF
  char v134[4]; // [rsp+5Ch] [rbp-8ACh] BYREF
  int v135; // [rsp+60h] [rbp-8A8h]
  HANDLE v136; // [rsp+68h] [rbp-8A0h]
  ULONG v137; // [rsp+70h] [rbp-898h] BYREF
  unsigned int v138; // [rsp+74h] [rbp-894h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+78h] [rbp-890h] BYREF
  int v140; // [rsp+80h] [rbp-888h]
  HANDLE Handle; // [rsp+88h] [rbp-880h] BYREF
  __int64 v142; // [rsp+90h] [rbp-878h]
  _DWORD *v143; // [rsp+98h] [rbp-870h]
  int v144; // [rsp+A0h] [rbp-868h]
  PVOID v145; // [rsp+A8h] [rbp-860h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-858h]
  __int128 v147; // [rsp+C0h] [rbp-848h]
  struct _MDL *v148; // [rsp+D0h] [rbp-838h] BYREF
  __int64 v149; // [rsp+D8h] [rbp-830h] BYREF
  struct _OBJECT_NAME_INFORMATION v150; // [rsp+E0h] [rbp-828h] BYREF
  struct _OBJECT_NAME_INFORMATION v151; // [rsp+F0h] [rbp-818h] BYREF
  int v152; // [rsp+100h] [rbp-808h] BYREF
  unsigned int v153; // [rsp+104h] [rbp-804h] BYREF
  ULONG v154; // [rsp+108h] [rbp-800h]
  int v155; // [rsp+10Ch] [rbp-7FCh]
  int v156; // [rsp+110h] [rbp-7F8h] BYREF
  _QWORD v157[3]; // [rsp+118h] [rbp-7F0h] BYREF
  int v158[2]; // [rsp+130h] [rbp-7D8h] BYREF
  int v159; // [rsp+138h] [rbp-7D0h] BYREF
  __int64 v160; // [rsp+140h] [rbp-7C8h] BYREF
  __int64 v161; // [rsp+148h] [rbp-7C0h]
  __int64 v162; // [rsp+150h] [rbp-7B8h]
  _BYTE v163[48]; // [rsp+158h] [rbp-7B0h] BYREF
  __int64 v164; // [rsp+188h] [rbp-780h]
  PVOID v165; // [rsp+190h] [rbp-778h] BYREF
  int v166[8]; // [rsp+198h] [rbp-770h] BYREF
  PVOID v167; // [rsp+1B8h] [rbp-750h] BYREF
  ULONG v168; // [rsp+1C0h] [rbp-748h]
  int v169; // [rsp+1C4h] [rbp-744h]
  wchar_t *v170; // [rsp+1C8h] [rbp-740h] BYREF
  PVOID v171[2]; // [rsp+1D0h] [rbp-738h] BYREF
  __int128 v172; // [rsp+1E0h] [rbp-728h]
  _QWORD Src[14]; // [rsp+1F0h] [rbp-718h] BYREF
  __int64 v174; // [rsp+260h] [rbp-6A8h] BYREF
  __int64 v175[4]; // [rsp+268h] [rbp-6A0h] BYREF
  __int64 v176; // [rsp+288h] [rbp-680h] BYREF
  __int64 v177[5]; // [rsp+290h] [rbp-678h] BYREF
  __int128 v178; // [rsp+2B8h] [rbp-650h]
  __int128 v179; // [rsp+2C8h] [rbp-640h]
  __int128 v180; // [rsp+2D8h] [rbp-630h]
  __int128 v181; // [rsp+2F0h] [rbp-618h]
  __int128 v182; // [rsp+300h] [rbp-608h]
  __int128 v183; // [rsp+310h] [rbp-5F8h]
  __int128 v184; // [rsp+320h] [rbp-5E8h]
  __int128 v185; // [rsp+330h] [rbp-5D8h]
  __int128 v186; // [rsp+340h] [rbp-5C8h]
  __int128 v187; // [rsp+350h] [rbp-5B8h]
  __int128 v188; // [rsp+360h] [rbp-5A8h]
  __int128 v189; // [rsp+370h] [rbp-598h]
  __int128 v190; // [rsp+380h] [rbp-588h]
  char v191; // [rsp+390h] [rbp-578h] BYREF
  _QWORD JobInformation[5]; // [rsp+3A0h] [rbp-568h] BYREF
  $5BC46E0569261879018906DEC3127961 v193; // [rsp+3C8h] [rbp-540h] BYREF
  $5BC46E0569261879018906DEC3127961 v194; // [rsp+3F8h] [rbp-510h] BYREF
  char v195[16]; // [rsp+430h] [rbp-4D8h] BYREF
  int v196; // [rsp+440h] [rbp-4C8h]
  __int64 v197; // [rsp+4A8h] [rbp-460h]
  __int64 v198; // [rsp+4C0h] [rbp-448h]
  _BYTE v199[144]; // [rsp+4D0h] [rbp-438h] BYREF
  _BYTE v200[176]; // [rsp+560h] [rbp-3A8h] BYREF
  _BYTE v201[176]; // [rsp+610h] [rbp-2F8h] BYREF
  _BYTE v202[352]; // [rsp+6C0h] [rbp-248h] BYREF
  _QWORD v203[20]; // [rsp+820h] [rbp-E8h] BYREF

  v5 = ProcessInformationLength;
  v6 = (struct _OBJECT_NAME_INFORMATION *)ProcessInformation;
  v7 = ProcessInformationClass;
  v136 = ProcessHandle;
  v157[2] = ProcessInformation;
  LODWORD(v142) = ProcessInformationLength;
  v157[1] = ReturnLength;
  v9 = KeGetCurrentThread()->gap0[10];
  v130 = v9;
  CurrentThread = KeGetCurrentThread();
  if ( !v9 )
  {
    v11 = 1LL;
    goto LABEL_19;
  }
  if ( ProcessInformationClass == (ProcessAffinityUpdateMode|ProcessUserModeIOPL) )
    goto LABEL_16;
  if ( ProcessInformationClass == 65 )
  {
    v10 = 8;
    v11 = 1LL;
    goto LABEL_6;
  }
  if ( ((ProcessInformationClass - 70) & 0xFFFFFFFB) == 0 )
  {
LABEL_16:
    v11 = 1LL;
    v10 = 1;
    goto LABEL_6;
  }
  v10 = 4;
  v11 = 1LL;
LABEL_6:
  v135 = v10;
  if ( (_DWORD)v5 )
  {
    if ( ((v10 - 1) & (unsigned int)ProcessInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    *(_QWORD *)&ProcessInformationClass = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ProcessInformation + v5 > 0x7FFFFFFF0000LL
      || (char *)ProcessInformation + v5 < ProcessInformation )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(_QWORD *)&ProcessInformationClass = 0x7FFFFFFF0000LL;
  }
  if ( ReturnLength )
  {
    v12 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
LABEL_19:
  if ( v7 != ProcessCookie )
  {
    if ( v7 != (ProcessCookie|ProcessUserModeIOPL) )
    {
      switch ( v7 )
      {
        case 0:
          if ( (_DWORD)v5 == 64 )
          {
            v143 = ProcessInformation;
            v23 = 64;
            v142 = 64LL;
            *(_QWORD *)ProcessInformation = 64LL;
            v6 = (struct _OBJECT_NAME_INFORMATION *)((char *)ProcessInformation + 8);
          }
          else
          {
            if ( (_DWORD)v5 != 48 )
              return -1073741820;
            v143 = 0LL;
            v23 = 48;
            v142 = 48LL;
          }
          v135 = v23;
          ObjectNameInformation = v6;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          v24 = result;
          v129 = result;
          if ( result < 0 )
            return result;
          v25 = (_KPROCESS *)Object;
          *(_DWORD *)&v6->Name.Length = *((_DWORD *)Object + 393);
          v6->Name.Buffer = (wchar_t *)v25[1].ActiveProcessors.Bitmap[1];
          v26 = 1;
          if ( v25->SecurePid )
            VslGetSecurePebAddress(v25);
          if ( v24 < 0 )
            goto LABEL_88;
          GroupMaskProcess = KeQueryGroupMaskProcess((__int64)v25);
          v28 = CurrentThread;
          if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 && v25 != CurrentThread->Process )
            goto LABEL_65;
          KeQueryAffinityProcess((__int64)v25, (__int64)v200, (int *)&GroupMaskProcess, 0LL);
          v29 = GroupMaskProcess;
          if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 )
          {
            if ( v25 != v28->Process )
              goto LABEL_393;
            Group = v28->UserAffinity.Group;
            if ( !_bittest64(&v29, Group) )
              goto LABEL_393;
          }
          else
          {
            _BitScanForward((unsigned int *)&Group, GroupMaskProcess);
          }
          if ( (_DWORD)Group != 20 )
          {
            v27 = *(_QWORD *)&v200[8 * Group + 8];
            goto LABEL_65;
          }
LABEL_393:
          v27 = 0LL;
LABEL_65:
          *(_QWORD *)&v6[1].Name.Length = v27;
          LODWORD(v6[1].Name.Buffer) = v25->BasePriority;
          *(_QWORD *)&v6[2].Name.Length = v25[1].Header.WaitListHead.Flink;
          v6[2].Name.Buffer = (wchar_t *)v25[1].SwapListEntry.Next;
          v31 = v143;
          if ( v143 )
          {
            v143[14] = 0;
            if ( (v25[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0 )
              v31[14] = 1;
            v32 = v25[1].ActiveProcessors.Bitmap[7];
            if ( v32 )
            {
              v34 = *(_WORD *)(v32 + 8);
              if ( v34 == 332 || v34 == 452 )
                v31[14] |= 2u;
            }
            v33 = (_DWORD *)&v25[1].DirectoryTableBase + 1;
            if ( (v25[1].DirectoryTableBase & 0x4000000800000000LL) != 0 )
              v31[14] |= 4u;
            v25 = (_KPROCESS *)Object;
            v31[14] ^= (v31[14] ^ (8 * (*((unsigned __int8 *)Object + 768) >> 7))) & 8;
            if ( v25->FreezeCount + ((*(_DWORD *)&v25->0 >> 3) & 1) )
              v31[14] |= 0x10u;
            v31[14] ^= (v31[14] ^ (32 * ((*v33 & 0x100000) != 0))) & 0x20;
            PsQueryProcessAttributes(v25, v133, 0LL);
            if ( v133[0] )
              v31[14] |= 0x40u;
            if ( !v25->SecurePid )
              v26 = 0;
            if ( v26 )
              v31[14] |= 0x80u;
            if ( v25[2].ActiveProcessors.Bitmap[9] )
              v31[14] |= 0x100u;
            v24 = v129;
          }
          if ( ReturnLength )
            *ReturnLength = v142;
LABEL_88:
          ObfDereferenceObjectWithTag(v25, 0x79517350u);
          return v24;
        case 1:
          return PspQueryQuotaLimits((ULONG_PTR)ProcessHandle, (__int64)ReturnLength, v9);
        case 2:
          if ( (_DWORD)v5 != 48 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          if ( result >= 0 )
          {
            PsQueryStatisticsProcess((__int64)Object, v177);
            *(_OWORD *)v163 = v178;
            *(_OWORD *)&v163[16] = v179;
            *(_OWORD *)&v163[32] = v180;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *v6 = *(struct _OBJECT_NAME_INFORMATION *)v163;
            v6[1] = *(struct _OBJECT_NAME_INFORMATION *)&v163[16];
            v6[2] = *(struct _OBJECT_NAME_INFORMATION *)&v163[32];
            if ( ReturnLength )
              *ReturnLength = 48;
            return DeviceMapInformation;
          }
          return result;
        case 3:
          if ( (_DWORD)v5 != 88 && (_DWORD)v5 != 96 && (_DWORD)v5 != 112 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            memset(Src, 0, sizeof(Src));
            v51 = Object;
            Src[0] = *((_QWORD *)Object + 102);
            Src[1] = *((_QWORD *)Object + 103);
            LODWORD(Src[2]) = *((_DWORD *)Object + 321);
            KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v193);
            v129 = MmQueryWorkingSetInformation(&Src[3], &Src[4], &Src[12], v175, &v174, v166);
            KiUnstackDetachProcess(&v193, 0LL);
            PsQueryProcessQuotaCounters(v51, 1LL, &Src[6], &Src[5]);
            PsQueryProcessQuotaCounters(v51, 0LL, &Src[8], &Src[7]);
            Src[9] = v51[158] << 12;
            Src[10] = *((_QWORD *)Object + 159) << 12;
            Src[13] = *((_QWORD *)Object + 237) << 12;
            Src[11] = Src[9];
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            result = v129;
            if ( v129 >= 0 )
            {
              memmove(v6, Src, v5);
              if ( ReturnLength )
                *ReturnLength = v5;
              return 0;
            }
          }
          return result;
        case 4:
          if ( (_DWORD)v5 != 32 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          if ( result >= 0 )
          {
            v20 = (struct _EX_RUNDOWN_REF *)Object;
            v21 = PsQueryRuntimeProcess(Object, &v153);
            v22 = KeMaximumIncrement;
            *(_QWORD *)&v6[1].Name.Length = KeMaximumIncrement * (unsigned __int64)v21;
            v6[1].Name.Buffer = (wchar_t *)(v22 * v153);
            *(struct _EX_RUNDOWN_REF *)&v6->Name.Length = v20[97];
            v6->Name.Buffer = (wchar_t *)v20[210].Count;
            if ( ReturnLength )
              *ReturnLength = 32;
            goto LABEL_51;
          }
          return result;
        case 7:
          if ( (_DWORD)v5 != 8 )
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
        case 10:
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            v101 = xKdEnumerateDebuggingDevices();
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v101;
          }
          return result;
        case 12:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            v35 = *((_DWORD *)Object + 296);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)&v6->Name.Length = v35;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          }
          return result;
        case 14:
          return PspQueryPooledQuotaLimits(
                   (_DWORD)ProcessHandle,
                   (_DWORD)ProcessInformation,
                   v5,
                   (_DWORD)ReturnLength,
                   v9);
        case 15:
        case 42:
          return PspQueryWorkingSetWatch((ULONG_PTR)ProcessHandle, (__int64)ReturnLength, v9);
        case 18:
          if ( (_DWORD)v5 != 2 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            LOBYTE(v131) = 0;
            HIBYTE(v131) = *((_BYTE *)Object + 1119);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->Name.Length = v131;
            if ( ReturnLength )
              *ReturnLength = 2;
            return 0;
          }
          return result;
        case 19:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          if ( result >= 0 )
          {
            v75 = (*((_DWORD *)Object + 193) & 0x1000000) != 0;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)&v6->Name.Length = v75;
            if ( ReturnLength )
              *ReturnLength = 4;
            return DeviceMapInformation;
          }
          return result;
        case 20:
          if ( (((_DWORD)v5 - 4) & 0xFFFFFFFB) != 0 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)Object, &v152);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)&v6->Name.Length = ProcessHandleCount;
            if ( (_DWORD)v5 != 4 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) = v152;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          }
          return result;
        case 21:
          if ( (((_DWORD)v5 - 8) & 0xFFFFFFF7) != 0 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          if ( result >= 0 )
          {
            v20 = (struct _EX_RUNDOWN_REF *)Object;
            GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
            if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0
              || (KeQueryAffinityProcess((__int64)v20, (__int64)v201, (int *)&GroupMaskProcess, 0LL),
                  ((GroupMaskProcess - 1) & GroupMaskProcess) != 0) )
            {
              DeviceMapInformation = -1073741811;
            }
            else
            {
              _BitScanForward((unsigned int *)&v108, GroupMaskProcess);
              v109 = *(_QWORD *)&v201[8 * v108 + 8];
              if ( (_DWORD)v5 == 16 )
                LOWORD(v6->Name.Buffer) = v108;
              *(_QWORD *)&v6->Name.Length = v109;
              if ( ReturnLength )
                *ReturnLength = v5;
            }
            goto LABEL_51;
          }
          return result;
        case 22:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          if ( result >= 0 )
          {
            v102 = (*((unsigned __int8 *)Object + 440) >> 1) & 1;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)&v6->Name.Length = v102;
            if ( ReturnLength )
              *ReturnLength = 4;
            return DeviceMapInformation;
          }
          return result;
        case 23:
          if ( (unsigned int)v5 < 0x24 )
            return -1073741820;
          if ( (_DWORD)v5 == 48 )
          {
            v138 = *((_DWORD *)ProcessInformation + 10);
            v36 = v138;
            if ( (v138 & 0xFFFFFFFE) != 0 )
              return -1073741811;
          }
          else
          {
            if ( (_DWORD)v5 != 36 )
              return -1073741820;
            v36 = 0;
          }
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            DeviceMapInformation = ObQueryDeviceMapInformation(Object, v6, v36);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( DeviceMapInformation >= 0 && ReturnLength )
              *ReturnLength = v5;
            return DeviceMapInformation;
          }
          return result;
        case 24:
          if ( (_DWORD)v5 != 4 )
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
        case 26:
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          v48 = 0LL;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            v49 = (__int64 *)*((_QWORD *)Object + 133);
            if ( v49 )
            {
              v72 = *((_WORD *)v49 + 4);
              if ( v72 == 332 || v72 == 452 )
                v48 = *v49;
            }
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_QWORD *)&v6->Name.Length = v48;
            if ( ReturnLength )
              *ReturnLength = 8;
            return 0;
          }
          return result;
        case 27:
          v37 = 0LL;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            if ( (unsigned int)v5 < 0x10 )
            {
              v137 = 0;
              v6 = (struct _OBJECT_NAME_INFORMATION *)&v191;
            }
            else
            {
              v137 = v5 - 16;
              v37 = (char *)&v6[1];
            }
            DeviceMapInformation = PsQueryFullProcessImageName(Object, v6, v37, &v137);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( DeviceMapInformation >= 0 && !v37 )
              DeviceMapInformation = -1073741820;
            if ( ReturnLength && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
              *ReturnLength = v137 + 16;
            return DeviceMapInformation;
          }
          return result;
        case 28:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          *(_DWORD *)ProcessInformation = 1;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case 29:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v84 = (*((_DWORD *)Object + 193) & 0x2000) != 0;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *(_DWORD *)&v6->Name.Length = v84;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case 30:
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result < 0 )
            return result;
          DeviceMapInformation = DbgkOpenProcessDebugPort(Object, v9, &Handle);
          v100 = Handle;
          if ( DeviceMapInformation < 0 )
            v100 = 0LL;
          Handle = v100;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *(_QWORD *)&v6->Name.Length = Handle;
          if ( ReturnLength )
            *ReturnLength = 8;
          return DeviceMapInformation;
        case 31:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ExecuteOptions = result;
          if ( result < 0 )
            return result;
          v78 = Object;
          *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 193) & 2) == 0;
          if ( ReturnLength )
            *ReturnLength = 4;
LABEL_315:
          ObfDereferenceObjectWithTag(v78, 0x79517350u);
          return ExecuteOptions;
        case 32:
          if ( (unsigned int)v5 < 0x10 )
            return -1073741820;
          if ( ExIsRestrictedCaller(v9) )
            return -1073741790;
          ObjectNameInformation = (POBJECT_NAME_INFORMATION)((unsigned int)(v5 - 16) / 0xA0uLL);
          v86 = (__int64)&v6[1];
          v87 = 0;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v20 = (struct _EX_RUNDOWN_REF *)Object;
          v88 = ObReferenceProcessHandleTable(Object);
          v89 = v88;
          v149 = v88;
          if ( !v88 )
            goto LABEL_429;
          v90 = ExReferenceHandleDebugInfo(v88);
          v91 = v90;
          v148 = (struct _MDL *)v90;
          if ( v90 )
          {
            LODWORD(v6->Name.Buffer) = 0;
            v103 = (unsigned int)(*((_DWORD *)v90 + 18) % *((_DWORD *)v90 + 1));
            v144 = v103;
            while ( 1 )
            {
              v158[1] = v87;
              if ( v87 >= *((_DWORD *)v91 + 1) )
                break;
              v104 = &v91[40 * v103];
              v181 = *((_OWORD *)v104 + 5);
              v182 = *((_OWORD *)v104 + 6);
              v183 = *((_OWORD *)v104 + 7);
              v184 = *((_OWORD *)v104 + 8);
              v185 = *((_OWORD *)v104 + 9);
              v186 = *((_OWORD *)v104 + 10);
              v187 = *((_OWORD *)v104 + 11);
              v188 = *((_OWORD *)v104 + 12);
              v189 = *((_OWORD *)v104 + 13);
              v190 = *((_OWORD *)v104 + 14);
              v105 = v182;
              if ( *(_QWORD *)&v6->Name.Length == (_QWORD)v182 || !*(_QWORD *)&v6->Name.Length )
              {
                v106 = DWORD2(v182);
                if ( DWORD2(v182) )
                {
                  ++LODWORD(v6->Name.Buffer);
                  if ( (_DWORD)ObjectNameInformation )
                  {
                    ObjectNameInformation = (POBJECT_NAME_INFORMATION)(unsigned int)((_DWORD)ObjectNameInformation - 1);
                    v169 = (int)ObjectNameInformation;
                    *(_QWORD *)v86 = v105;
                    *(_OWORD *)(v86 + 8) = v181;
                    *(_DWORD *)(v86 + 24) = v106;
                    *(_OWORD *)(v86 + 32) = v183;
                    *(_OWORD *)(v86 + 48) = v184;
                    *(_OWORD *)(v86 + 64) = v185;
                    *(_OWORD *)(v86 + 80) = v186;
                    *(_OWORD *)(v86 + 96) = v187;
                    *(_OWORD *)(v86 + 112) = v188;
                    *(_OWORD *)(v86 + 128) = v189;
                    *(_OWORD *)(v86 + 144) = v190;
                    v86 += 160LL;
                    v175[1] = v86;
                  }
                  else
                  {
                    DeviceMapInformation = -1073741820;
                    v129 = -1073741820;
                  }
                }
              }
              if ( !(_DWORD)v103 )
                LODWORD(v103) = *((_DWORD *)v91 + 1);
              v103 = (unsigned int)(v103 - 1);
              v144 = v103;
              ++v87;
            }
            if ( ReturnLength )
              *ReturnLength = v86 - (_DWORD)v6;
            ExDereferenceHandleDebugInfo(v89, v91);
            v20 = (struct _EX_RUNDOWN_REF *)Object;
          }
          else
          {
            DeviceMapInformation = -1073741811;
          }
          goto LABEL_357;
        case 33:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ExecuteOptions = result;
          v129 = result;
          if ( result < 0 )
            return result;
          v53 = Object;
          *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 193) >> 27) & 7;
          if ( ReturnLength )
            *ReturnLength = 4;
          goto LABEL_174;
        case 34:
          if ( (_DWORD)v5 != 4 )
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
          ExecuteOptions = KeGetExecuteOptions((__int64)Process, v158);
          if ( ProcessHandle != (HANDLE)-1LL )
            ObfDereferenceObjectWithTag(v74, 0x79517350u);
          if ( ExecuteOptions >= 0 )
          {
            *(_DWORD *)&v6->Name.Length = v158[0];
            if ( ReturnLength )
              *ReturnLength = 4;
          }
          return ExecuteOptions;
        case 37:
          if ( (_DWORD)v5 != 64 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v38 = (struct _EX_RUNDOWN_REF *)Object;
          if ( Object == CurrentThread->Process )
          {
            Ptr = (void *)*((_QWORD *)Object + 119);
            if ( !Ptr )
              DeviceMapInformation = -1073741558;
            v40 = 0;
          }
          else
          {
            v40 = 1;
            if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
            {
              Ptr = v38[119].Ptr;
              if ( Ptr )
                ObfReferenceObject(v38[119].Ptr);
              else
                DeviceMapInformation = -1073741811;
              ExReleaseRundownProtection(v38 + 95);
            }
            else
            {
              DeviceMapInformation = -1073741558;
              Ptr = 0LL;
            }
          }
          ObfDereferenceObjectWithTag(v38, 0x79517350u);
          if ( DeviceMapInformation >= 0 )
          {
            DeviceMapInformation = MmGetSectionInformation(Ptr, 1LL, v6);
            if ( v40 )
              ObfDereferenceObject(Ptr);
            if ( DeviceMapInformation >= 0 && ReturnLength )
              *ReturnLength = 64;
          }
          return DeviceMapInformation;
        case 38:
          if ( (_DWORD)v5 != 16 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ProcessNotificationChannel = result;
          if ( result < 0 )
            return result;
          v93 = Object;
          *(_QWORD *)&v6->Name.Length = PsQueryTotalCycleTimeProcess((__int64)Object, (__int64)&v170);
          v6->Name.Buffer = v170;
          if ( ReturnLength )
            *ReturnLength = 16;
          goto LABEL_367;
        case 39:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ExecuteOptions = result;
          if ( result < 0 )
            return result;
          v53 = Object;
          *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 192) >> 12) & 7;
          if ( ReturnLength )
            *ReturnLength = 4;
          goto LABEL_174;
        case 43:
          v41 = 0LL;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          if ( result < 0 )
            return result;
          v42 = (struct _EX_RUNDOWN_REF *)Object;
          v43 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 137);
          v145 = v43;
          if ( v43 )
          {
            if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
            {
              ObfReferenceObject(v43);
              ExReleaseRundownProtection(v42 + 95);
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
                                     (unsigned __int64 *)&v145);
            v43 = (struct _FILE_OBJECT *)v145;
          }
          ObfDereferenceObjectWithTag(v42, 0x79517350u);
          if ( DeviceMapInformation < 0 )
            return DeviceMapInformation;
          ExecuteOptions = IoQueryFileDosDeviceName(v43, &ObjectNameInformation);
          ObfDereferenceObject(v43);
          if ( ExecuteOptions >= 0 )
          {
            v45 = ObjectNameInformation;
            v46 = ObjectNameInformation->Name.MaximumLength + 16;
            if ( v46 > (unsigned int)v5 )
            {
              ExecuteOptions = -1073741820;
              v129 = -1073741820;
            }
            else
            {
              v6->Name.Length = ObjectNameInformation->Name.Length;
              v6->Name.MaximumLength = v45->Name.MaximumLength;
              MaximumLength = v45->Name.MaximumLength;
              if ( MaximumLength )
              {
                v41 = (char *)&v6[1];
                memmove(&v6[1], v45->Name.Buffer, MaximumLength);
              }
              v6->Name.Buffer = (wchar_t *)v41;
            }
            if ( ReturnLength )
              *ReturnLength = v46;
            ExFreePoolWithTag(v45, 0);
          }
          return ExecuteOptions;
        case 44:
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          v80 = *(_QWORD *)ProcessInformation;
          v175[2] = *(_QWORD *)ProcessInformation;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result < 0 )
            return result;
          ExecuteOptions = ObpReferenceObjectByHandleWithTag(v80, 2035381072, (__int64)&v145, 0LL, 0LL);
          v53 = Object;
          if ( ExecuteOptions < 0 )
            goto LABEL_174;
          ProcessHandleInformation = PsReferenceProcessFilePointer(
                                       (struct _EX_RUNDOWN_REF *)Object,
                                       (unsigned __int64 *)v171);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v82 = v145;
          if ( ProcessHandleInformation < 0 )
            goto LABEL_375;
          v83 = v171[0];
          if ( *((_QWORD *)v145 + 5) == *((_QWORD *)v171[0] + 5) )
            ExecuteOptions = 0;
          else
            ExecuteOptions = -1073741823;
          ObfDereferenceObject(v145);
          ObfDereferenceObject(v83);
          if ( ExecuteOptions >= 0 && ReturnLength )
            *ReturnLength = 0;
          return ExecuteOptions;
        case 45:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v138 = *((_DWORD *)Object + 192);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v107 = (v138 & 0x80000) != 0;
          if ( (v138 & 0x40000) != 0 )
            v107 |= 2u;
          *(_DWORD *)&v6->Name.Length = v107;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case 46:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v138 = *((_DWORD *)Object + 193);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *(_DWORD *)&v6->Name.Length = (v138 & 0x200000) != 0;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case 47:
          if ( !ReturnLength || (v5 & 1) != 0 )
            return -1073741811;
          v110 = 0;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            v111 = KeQueryGroupMaskProcess((__int64)Object);
            GroupMaskProcess = v111;
            do
            {
              _BitScanForward(&v112, v111);
              v110 += 2;
              v137 = v110;
              if ( v110 <= (unsigned int)v5 )
              {
                v6->Name.Length = v112;
                v6 = (struct _OBJECT_NAME_INFORMATION *)((char *)v6 + 2);
                v175[3] = (__int64)v6;
              }
              _bittestandreset((signed __int32 *)&GroupMaskProcess, v112);
              v111 = GroupMaskProcess;
            }
            while ( GroupMaskProcess );
            *ReturnLength = v110;
            ExecuteOptions = (unsigned int)v5 < v110 ? 0xC0000023 : 0;
            v129 = ExecuteOptions;
LABEL_174:
            ObfDereferenceObjectWithTag(v53, 0x79517350u);
            return ExecuteOptions;
          }
          return result;
        case 49:
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v58 = *((_QWORD *)Object + 126);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *(_QWORD *)&v6->Name.Length = v58;
          if ( ReturnLength )
            *ReturnLength = 8;
          return 0;
        case 50:
          v61 = 0LL;
          v140 = 0;
          v147 = 0uLL;
          if ( v9 != 1 )
            return -1073741823;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          v129 = result;
          if ( result >= 0 )
          {
            v62 = Object;
            if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
            {
              KiStackAttachProcess((_KPROCESS *)v62, 0, (__int64)&v194);
              v63 = (__int64 *)*((_QWORD *)v62 + 133);
              if ( v63 )
              {
                v64 = *((_WORD *)v63 + 4);
                if ( v64 == 332 || v64 == 452 )
                  v61 = *v63;
              }
              if ( v61 )
              {
                v164 = *(unsigned int *)(v61 + 16);
                v68 = v164 + 104;
                if ( (unsigned __int64)(v164 + 104) >= 0x7FFFFFFF0000LL )
                  v68 = 0x7FFFFFFF0000LL;
                v140 = *(_DWORD *)v68;
                v69 = v164 + 112;
                if ( (unsigned __int64)(v164 + 112) >= 0x7FFFFFFF0000LL )
                  v69 = 0x7FFFFFFF0000LL;
                v143 = *(_DWORD **)v69;
                v67 = (unsigned __int16)v143;
                LODWORD(v147) = (_DWORD)v143;
                *((_QWORD *)&v147 + 1) = HIDWORD(v143);
              }
              else
              {
                v162 = *(_QWORD *)(*((_QWORD *)v62 + 127) + 32LL);
                v65 = v162 + 164;
                if ( (unsigned __int64)(v162 + 164) >= 0x7FFFFFFF0000LL )
                  v65 = 0x7FFFFFFF0000LL;
                v140 = *(_DWORD *)v65;
                v66 = v162 + 176;
                if ( (unsigned __int64)(v162 + 176) >= 0x7FFFFFFF0000LL )
                  v66 = 0x7FFFFFFF0000LL;
                LODWORD(v172) = *(_DWORD *)v66;
                *((_QWORD *)&v172 + 1) = *(_QWORD *)(v66 + 8);
                v147 = v172;
                v67 = v172;
              }
              v70 = v129;
              KiUnstackDetachProcess(&v194, 0LL);
              if ( v70 < 0 )
                goto LABEL_299;
              v71 = v67 + 6;
              if ( ReturnLength )
                *ReturnLength = v71;
              if ( (unsigned int)v5 < v71 )
              {
                v70 = -1073741820;
                v129 = -1073741820;
              }
              else
              {
                *(_DWORD *)&v6->Name.Length = v140;
                *(&v6->Name.MaximumLength + 1) = v67;
              }
              if ( v70 >= 0 && v67 )
              {
                v62 = Object;
                v70 = MmCopyVirtualMemory((ULONG_PTR)Object, (unsigned __int16)v147, 1, (__int64)&v176);
              }
              else
              {
LABEL_299:
                v62 = Object;
              }
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)v62 + 95);
            }
            else
            {
              v70 = -1073741558;
            }
            ObfDereferenceObjectWithTag(v62, 0x79517350u);
            return v70;
          }
          return result;
        case 51:
          if ( (unsigned int)v5 < 0x10 )
          {
            if ( ReturnLength )
              *ReturnLength = 16;
            return -1073741820;
          }
          result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, v9, &v165, 0LL);
          if ( result >= 0 )
          {
            v94 = (__int64)CurrentThread;
            --CurrentThread->KernelApcDisable;
            v95 = (struct _EX_RUNDOWN_REF *)v165;
            v96 = ObReferenceProcessHandleTable(v165);
            if ( v96 )
            {
              ProcessHandleInformation = ExQueryProcessHandleInformation(v96, v6, v5, (int *)ReturnLength);
              ExReleaseRundownProtection(v95 + 95);
            }
            else
            {
              ProcessHandleInformation = -1073741558;
            }
            KiLeaveCriticalRegionUnsafe(v94);
            v82 = v95;
LABEL_375:
            ObfDereferenceObject(v82);
            return ProcessHandleInformation;
          }
          return result;
        case 54:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          v113 = 0;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          v129 = result;
          if ( result < 0 )
            return result;
          v20 = (struct _EX_RUNDOWN_REF *)Object;
          v114 = ObReferenceProcessHandleTable(Object);
          if ( !v114 )
            goto LABEL_429;
          LOBYTE(v113) = (*(_BYTE *)(v114 + 44) & 2) != 0;
          *(_DWORD *)&v6->Name.Length = v113;
          goto LABEL_357;
        case 55:
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ExecuteOptions = result;
          if ( result < 0 )
            return result;
          v53 = Object;
          *(_DWORD *)&v6->Name.Length = *((_DWORD *)Object + 507) & 0x7FFFFFFF;
          *(_DWORD *)(&v6->Name.MaximumLength + 1) = v53[515] & 0x7FFFFFFF;
          goto LABEL_174;
        case 58:
          if ( (unsigned int)v5 < 4 )
            return -1073741820;
          result = ExLockUserBuffer(
                     ProcessInformation,
                     (unsigned int)v5,
                     (unsigned __int8)KeGetCurrentThread()->gap0[10],
                     1LL,
                     v157,
                     &v148);
          if ( result < 0 )
            return result;
          v16 = 0;
          v97 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( v97 < 0 )
          {
            ExUnlockUserBuffer(v148);
            return v97;
          }
          v160 = 0LL;
          v161 = 0LL;
          v98 = (struct _EX_RUNDOWN_REF *)Object;
          v99 = ObReferenceProcessHandleTable(Object);
          if ( v99 )
          {
            v160 = v157[0];
            v161 = (unsigned int)v5 >> 2;
            ExEnumHandleTable(
              v99,
              (__int64 (__fastcall *)(__int64, signed __int64 *, _QWORD, __int64))PspHandleTableWalker,
              (__int64)&v160,
              0LL);
            ExReleaseRundownProtection(v98 + 95);
          }
          else
          {
            v16 = -1073741558;
          }
          ObfDereferenceObjectWithTag(v98, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = 4 * HIDWORD(v161);
          ExUnlockUserBuffer(v148);
          return v16;
        case 59:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ExecuteOptions = result;
          if ( result < 0 )
            return result;
          v53 = Object;
          *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 110) >> 5) & 1;
          goto LABEL_174;
        case 60:
          ProcessCommandLine = ObpReferenceObjectByHandleWithTag(
                                 (ULONG_PTR)ProcessHandle,
                                 2035381072,
                                 (__int64)&Object,
                                 0LL,
                                 0LL);
          if ( ProcessCommandLine >= 0 )
          {
            v76 = Object;
            ProcessCommandLine = PsQueryProcessCommandLine(
                                   (struct _EX_RUNDOWN_REF *)Object,
                                   (__int64)v6,
                                   v5,
                                   v9,
                                   ReturnLength);
            if ( v76 )
              ObfDereferenceObjectWithTag(v76, 0x79517350u);
          }
          return ProcessCommandLine;
        case 61:
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
              v78 = Object;
              LOBYTE(v6->Name.Length) = *((_BYTE *)Object + 1738);
              if ( ReturnLength )
                *ReturnLength = 1;
              ExecuteOptions = 0;
            }
            else
            {
              ExecuteOptions = -1073741820;
              v78 = Object;
            }
            if ( v78 )
              goto LABEL_315;
          }
          return ExecuteOptions;
        case 64:
          ProcessCommandLine = ObpReferenceObjectByHandleWithTag(
                                 (ULONG_PTR)ProcessHandle,
                                 2035381072,
                                 (__int64)&Object,
                                 0LL,
                                 0LL);
          if ( ProcessCommandLine < 0 )
            return ProcessCommandLine;
          v60 = Object;
          ProcessCommandLine = EtwQueryProcessTelemetryInfo(
                                 (__int64)Object,
                                 (char *)v6,
                                 (unsigned int)v5,
                                 v9,
                                 ReturnLength);
          if ( !v60 )
            return ProcessCommandLine;
          ObfDereferenceObjectWithTag(v60, 0x79517350u);
          return ProcessCommandLine;
        case 65:
          Object = 0LL;
          if ( (_DWORD)v5 == 32 )
          {
            v150 = *(struct _OBJECT_NAME_INFORMATION *)ProcessInformation;
            v151 = (struct _OBJECT_NAME_INFORMATION)*((_OWORD *)ProcessInformation + 1);
            if ( *(_DWORD *)&v150.Name.Length == 3 )
            {
              if ( (*(_DWORD *)(&v150.Name.MaximumLength + 1) & 0xFFFFFFF8) != 0 || v150.Name.Buffer )
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
                  MmQueryCommitReleaseState((ULONG_PTR)Object, &v159, &v150.Name.Buffer, &v151, &v151.Name.Buffer);
                  *(_DWORD *)(&v150.Name.MaximumLength + 1) ^= (*((_BYTE *)&v150.Name.MaximumLength + 2) ^ (unsigned __int8)v159) & 1;
                  v150.Name.Buffer = (wchar_t *)((__int64)v150.Name.Buffer << 12);
                  *(_QWORD *)&v151.Name.Length <<= 12;
                  v151.Name.Buffer = (wchar_t *)((__int64)v151.Name.Buffer << 12);
                  *v6 = v150;
                  v6[1] = v151;
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
          v53 = Object;
          if ( !Object )
            return ExecuteOptions;
          goto LABEL_174;
        case 66:
        case 67:
          if ( (v5 & 7) != 0 || (unsigned int)v5 > 0xA0 )
            return -1073741820;
          v117 = 0;
          ProcessCommandLine = ObpReferenceObjectByHandleWithTag(
                                 (ULONG_PTR)ProcessHandle,
                                 2035381072,
                                 (__int64)&Object,
                                 0LL,
                                 0LL);
          v129 = ProcessCommandLine;
          if ( ProcessCommandLine >= 0 )
          {
            LOBYTE(v117) = v7 == (ProcessVmCounters|0x40);
            v119 = 8 * KeQueryCpuSetsProcess((__int64)Object, v203, v118, v117);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v154 = v119;
            if ( ReturnLength )
              *ReturnLength = v119;
            if ( v119 >= (unsigned int)v5 )
              v119 = v5;
            v154 = v119;
            memmove(v6, v203, v119);
          }
          return ProcessCommandLine;
        case 69:
          if ( (_DWORD)v5 != 40 )
            return -1073741820;
          v16 = 0;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result < 0 )
            return result;
          memset(v163, 0, 0x28uLL);
          if ( *((_QWORD *)Object + 118) )
          {
            KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v193);
            ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, JobInformation, 0x28u, 0LL);
            ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, v195, 0x98u, 0LL);
            KiUnstackDetachProcess(&v193, 0LL);
            *(_QWORD *)&v163[8] = JobInformation[0];
            *(_QWORD *)&v163[16] = JobInformation[1];
            *(_QWORD *)v163 = JobInformation[2];
            if ( (v196 & 0x200000) != 0 )
              *(_QWORD *)&v163[32] = v198;
            if ( (v196 & 0x200) != 0 )
              *(_QWORD *)&v163[24] = v197;
            *v6 = *(struct _OBJECT_NAME_INFORMATION *)v163;
            v6[1] = *(struct _OBJECT_NAME_INFORMATION *)&v163[16];
            *(_QWORD *)&v6[2].Name.Length = *(_QWORD *)&v163[32];
            if ( ReturnLength )
              *ReturnLength = 40;
          }
          else
          {
            v16 = -1073741394;
          }
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v16;
        case 70:
          if ( (_DWORD)v5 != 1 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ExecuteOptions = result;
          if ( result < 0 )
            return result;
          v53 = Object;
          LOBYTE(v6->Name.Length) = (*((_DWORD *)Object + 435) & 0x400) != 0;
          goto LABEL_174;
        case 71:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          v115 = 0;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          DeviceMapInformation = result;
          v129 = result;
          if ( result < 0 )
            return result;
          v20 = (struct _EX_RUNDOWN_REF *)Object;
          v116 = ObReferenceProcessHandleTable(Object);
          if ( v116 )
          {
            LOBYTE(v115) = (*(_BYTE *)(v116 + 44) & 0x10) != 0;
            *(_DWORD *)&v6->Name.Length = v115;
LABEL_357:
            ExReleaseRundownProtection(v20 + 95);
          }
          else
          {
LABEL_429:
            DeviceMapInformation = -1073741558;
          }
LABEL_51:
          ObfDereferenceObjectWithTag(v20, 0x79517350u);
          return DeviceMapInformation;
        case 72:
          return PsIumGetOnDemandDebugChallenge(ProcessHandle, ProcessInformation, (unsigned int)v5, ReturnLength);
        case 73:
          if ( (_DWORD)v5 != 2 )
            return -1073741820;
          v16 = 0;
          if ( ProcessHandle == (HANDLE)-1LL )
          {
            v120 = KeGetCurrentThread()->ApcState.Process;
            Object = v120;
          }
          else
          {
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            v120 = (struct _KPROCESS *)Object;
          }
          v121 = PsReferencePrimaryToken(v120);
          v157[0] = v121;
          v6->Name.Length = 0;
          if ( (v120[2].ActiveProcessors.Bitmap[0] & 0x8000000000000LL) != 0 )
            HIBYTE(v6->Name.Length) = 1;
          if ( SeTokenIsNoChildProcessRestricted((__int64)v121) )
            LOBYTE(v6->Name.Length) = 1;
          if ( ReturnLength )
            *ReturnLength = 2;
          ObFastDereferenceObject((signed __int64 *)&v120[1].Affinity.Bitmap[5], v122);
          if ( ProcessHandle != (HANDLE)-1LL )
            ObfDereferenceObjectWithTag(v120, 0x79517350u);
          return v16;
        case 74:
          if ( (_DWORD)v5 != 1 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ExecuteOptions = result;
          if ( result < 0 )
            return result;
          v53 = Object;
          LOBYTE(v6->Name.Length) = (*((_DWORD *)Object + 435) & 0x100000) != 0;
          goto LABEL_174;
        case 75:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ExecuteOptions = result;
          if ( result < 0 )
            return result;
          v53 = Object;
          if ( *((_QWORD *)Object + 226) )
            *(_DWORD *)&v6->Name.Length = qword_140348E70;
          else
            *(_DWORD *)&v6->Name.Length = 0;
          if ( ReturnLength )
            *ReturnLength = 4;
          goto LABEL_174;
        case 76:
          if ( (_DWORD)v5 != 344 && (_DWORD)v5 != 272 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          ProcessNotificationChannel = result;
          v129 = result;
          if ( result < 0 )
            return result;
          v93 = Object;
          PsQueryProcessEnergyValues(Object, v202);
          memmove(v6, v202, v5);
          if ( ReturnLength )
            *ReturnLength = v5;
          goto LABEL_367;
        case 77:
        case 78:
          return -1073741822;
        case 79:
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          v16 = 0;
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
            LODWORD(v11) = 1;
          }
          *(_DWORD *)&v6->Name.Length = 0;
          if ( (p_LockNV[435] & 0x8000) != 0 )
            *(_DWORD *)&v6->Name.Length = v11;
          if ( (p_LockNV[435] & 0x10000) != 0 )
            *(_DWORD *)&v6->Name.Length |= 2u;
          if ( ReturnLength )
            *ReturnLength = 8;
          if ( ProcessHandle != (HANDLE)-1LL )
            ObfDereferenceObjectWithTag(p_LockNV, 0x79517350u);
          return v16;
        case 81:
          if ( v9 )
            return -1073741790;
          if ( (_DWORD)v5 != 48 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          if ( result >= 0 )
          {
            v93 = Object;
            ProcessNotificationChannel = PspAllocateAndQueryProcessNotificationChannel(CurrentThread, Object, v6);
            if ( ProcessNotificationChannel >= 0 && ReturnLength )
              *ReturnLength = 48;
LABEL_367:
            ObfDereferenceObjectWithTag(v93, 0x79517350u);
            result = ProcessNotificationChannel;
          }
          break;
        case 82:
          if ( (unsigned int)v5 < 8 )
            return -1073741820;
          v16 = 0;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
          v129 = result;
          if ( result < 0 )
            return result;
          v124 = Object;
          PoQueryProcessEnergyTrackingState(Object, v199);
          v125 = 144;
          if ( (unsigned int)v5 < 0x90 )
            v125 = v5;
          v168 = v125;
          memmove(v6, v199, v125);
          if ( ReturnLength )
            *ReturnLength = v125;
          v129 = 0;
          ObfDereferenceObjectWithTag(v124, 0x79517350u);
          return v16;
        default:
          return -1073741821;
      }
      return result;
    }
    if ( (_DWORD)v5 == 8 )
    {
      v13 = *(_DWORD *)ProcessInformation;
      v155 = *(_DWORD *)ProcessInformation;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Object = KeGetCurrentThread()->ApcState.Process;
        v13 = v155;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
      }
      if ( v13 == 7 )
      {
        v129 = 0;
        *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
        if ( (*((_DWORD *)Object + 193) & 0x10) != 0 )
          *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
        v14 = Object;
        if ( (*((_DWORD *)Object + 435) & 0x4000000) != 0 )
          *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
        if ( (v14[435] & 0x20000000) != 0 )
          *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
      }
      else
      {
        switch ( v13 )
        {
          case 1:
            v129 = 0;
            *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
            v79 = Object;
            if ( (*((_DWORD *)Object + 192) & 0x20000) == 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
            if ( (v79[192] & 0x8000000) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
            if ( (v79[192] & 0x2000000) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
            if ( (v79[192] & 0x1000000) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 8u;
            break;
          case 2:
            v129 = 0;
            *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
            if ( (*((_DWORD *)Object + 192) & 0x400) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
            v52 = Object;
            if ( (*((_DWORD *)Object + 435) & 0x4000) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
            if ( (v52[435] & 0x800000) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
            break;
          case 3:
            v129 = 0;
            v126 = ObReferenceProcessHandleTable(Object);
            if ( v126 )
            {
              ExQueryHandleExceptionsPermanency(v126, v134, (bool *)&v131);
              *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
              if ( v134[0] )
                *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
              if ( (_BYTE)v131 )
                *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 95);
            }
            else
            {
              v129 = -1073741558;
            }
            break;
          case 4:
            v129 = 0;
            *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
            if ( *((int *)Object + 192) < 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
            break;
          case 6:
            v129 = 0;
            *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
            if ( (*((_DWORD *)Object + 192) & 0x4000000) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
            break;
          case 8:
            v129 = 0;
            PsQueryProcessSignatureMitigationPolicy((__int64)Object, &v156);
            *(_DWORD *)(&v6->Name.MaximumLength + 1) = v156;
            break;
          case 9:
            v129 = 0;
            *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
            v77 = *((_DWORD *)Object + 435);
            if ( (v77 & 4) != 0 )
            {
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
            }
            else if ( (v77 & 8) != 0 )
            {
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
            }
            break;
          case 10:
            v129 = 0;
            *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
            v127 = Object;
            if ( (*((_DWORD *)Object + 435) & 0x800) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
            if ( (v127[435] & 0x1000) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
            if ( (v127[435] & 0x20000) != 0 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
            break;
          default:
            v129 = -1073741637;
            break;
        }
      }
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v129;
    }
    return -1073741820;
  }
  if ( (_DWORD)v5 != 4 )
    return -1073741820;
  v16 = 0;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
    Object = (PVOID)p_Lock;
  }
  else
  {
    result = ObReferenceObjectByHandle(ProcessHandle, 0x20u, (POBJECT_TYPE)PsProcessType, v9, &v167, 0LL);
    p_Lock = (volatile signed __int32 *)v167;
    Object = v167;
    if ( result < 0 )
      return result;
  }
  v129 = 0;
  while ( 1 )
  {
    v18 = *((_DWORD *)p_Lock + 242);
    if ( v18 )
      break;
    KeQuerySystemTimePrecise(&v149, *(__int64 *)&ProcessInformationClass, (__int64)ProcessInformation, v11);
    CurrentPrcb = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v56 = ExGenRandom(1);
    v57 = __rdtsc();
    *(_QWORD *)&ProcessInformationClass = (unsigned int)v57 ^ v56 ^ CurrentPrcb->MmPageFaultCount;
    _InterlockedCompareExchange(
      p_Lock + 242,
      ProcessInformationClass ^ v149 ^ HIDWORD(v149) ^ LowPart ^ CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime,
      0);
    v16 = v129;
    p_Lock = (volatile signed __int32 *)Object;
  }
  *(_DWORD *)&v6->Name.Length = v18;
  if ( ReturnLength )
    *ReturnLength = 4;
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObject((PVOID)p_Lock);
  return v16;
}
