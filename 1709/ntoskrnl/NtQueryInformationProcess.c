/*
 * XREFs of NtQueryInformationProcess @ 0x1404C7870
 * Callers:
 *     <none>
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x140025920 (KeQuerySystemTimePrecise.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KeQueryAffinityProcess @ 0x14008A7F0 (KeQueryAffinityProcess.c)
 *     KeQueryGroupMaskProcess @ 0x14008A924 (KeQueryGroupMaskProcess.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MmGetSessionId @ 0x1400A5510 (MmGetSessionId.c)
 *     MmQueryWorkingSetInformation @ 0x1400A66B4 (MmQueryWorkingSetInformation.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     PsGetWin32KFilterSet @ 0x140117F00 (PsGetWin32KFilterSet.c)
 *     ExReleaseExtensionTable @ 0x14011BED8 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14011BEF0 (ExGetExtensionTable.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     MmQueryCommitReleaseState @ 0x14012B070 (MmQueryCommitReleaseState.c)
 *     PsQueryProcessCommandLine @ 0x14012E460 (PsQueryProcessCommandLine.c)
 *     ExUnlockUserBuffer @ 0x140132124 (ExUnlockUserBuffer.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14015BB34 (ExQueryHandleExceptionsPermanency.c)
 *     xKdEnumerateDebuggingDevices @ 0x14015D6F0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x1401800C0 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x140208D28 (KeQueryCpuSetsProcess.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PsQueryProcessAttributes @ 0x140486A80 (PsQueryProcessAttributes.c)
 *     MmGetSectionInformation @ 0x14048C730 (MmGetSectionInformation.c)
 *     IoQueryFileDosDeviceName @ 0x14048E280 (IoQueryFileDosDeviceName.c)
 *     PsQueryProcessEnergyValues @ 0x140493140 (PsQueryProcessEnergyValues.c)
 *     PsQueryStatisticsProcess @ 0x1404AD730 (PsQueryStatisticsProcess.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 *     ObQueryDeviceMapInformation @ 0x1404C75E0 (ObQueryDeviceMapInformation.c)
 *     PsQueryFullProcessImageName @ 0x1404CB0E0 (PsQueryFullProcessImageName.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     PspQueryQuotaLimits @ 0x1404D5DF4 (PspQueryQuotaLimits.c)
 *     PsGetProcessDeepFreezeStats @ 0x1404FD958 (PsGetProcessDeepFreezeStats.c)
 *     ObGetProcessHandleCount @ 0x14050523C (ObGetProcessHandleCount.c)
 *     ExEnumHandleTable @ 0x140506320 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x140506A2C (ObReferenceProcessHandleTable.c)
 *     MmCopyVirtualMemory @ 0x1405084C0 (MmCopyVirtualMemory.c)
 *     ExSystemExceptionFilter @ 0x140515700 (ExSystemExceptionFilter.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14054A2BC (PspAllocateAndQueryProcessNotificationChannel.c)
 *     ExLockUserBuffer @ 0x14056EEE8 (ExLockUserBuffer.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140573710 (EtwQueryProcessTelemetryInfo.c)
 *     PsReferenceProcessFilePointer @ 0x1405770C0 (PsReferenceProcessFilePointer.c)
 *     ExIsRestrictedCaller @ 0x14057D764 (ExIsRestrictedCaller.c)
 *     KeGetExecuteOptions @ 0x14059A1DC (KeGetExecuteOptions.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x14059A3E0 (PsQueryProcessSignatureMitigationPolicy.c)
 *     ExQueryProcessHandleInformation @ 0x1405D4F3C (ExQueryProcessHandleInformation.c)
 *     ExReferenceHandleDebugInfo @ 0x1405F00C0 (ExReferenceHandleDebugInfo.c)
 *     DbgkOpenProcessDebugPort @ 0x1406A9950 (DbgkOpenProcessDebugPort.c)
 *     VslGetSecurePebAddress @ 0x1406B3D24 (VslGetSecurePebAddress.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1407085F4 (PoQueryProcessEnergyTrackingState.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140716134 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140716370 (PsQueryTotalCycleTimeProcess.c)
 *     PspQueryPooledQuotaLimits @ 0x14071672C (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1407168B0 (PspQueryWorkingSetWatch.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x14071AB54 (PsIumGetOnDemandDebugChallenge.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x140744CBC (EtwQueryProcessTelemetryCoverage.c)
 *     ExDereferenceHandleDebugInfo @ 0x1407567C8 (ExDereferenceHandleDebugInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  size_t v5; // r13
  _OBJECT_NAME_INFORMATION *v6; // rsi
  unsigned __int8 v8; // bl
  struct _KTHREAD *CurrentThread; // rdi
  char *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  NTSTATUS result; // eax
  NTSTATUS DeviceMapInformation; // edi
  struct _EX_RUNDOWN_REF *v15; // rbx
  struct _FILE_OBJECT *v16; // r12
  NTSTATUS ExecuteOptions; // ebx
  POBJECT_NAME_INFORMATION v18; // rdi
  ULONG v19; // r12d
  unsigned __int16 MaximumLength; // ax
  _DWORD *v21; // rdi
  int v22; // eax
  int v23; // r13d
  char *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int16 v30; // cx
  _DWORD *v31; // rdx
  int v32; // ebx
  _QWORD *v33; // rbx
  char *v34; // rbx
  signed __int64 *v35; // r13
  unsigned int v36; // edi
  unsigned int v37; // r12d
  _QWORD **v38; // rbx
  _QWORD *i; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rcx
  HANDLE v42; // rdx
  int ProcessHandleCount; // edi
  NTSTATUS ProcessTelemetryCoverage; // eax
  int v45; // ebx
  int v46; // ebx
  int v47; // edi
  int SessionId; // ebx
  __int64 v49; // rdx
  __int16 v50; // r8
  int v51; // ebx
  char *v52; // r13
  struct _EX_RUNDOWN_REF *v53; // rbx
  void *v54; // rax
  void *v55; // r12
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // rdx
  _OWORD *v59; // rax
  __int64 v60; // r9
  int v61; // eax
  void *Process; // r10
  void *v63; // r10
  volatile signed __int32 *p_Lock; // r13
  int v65; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v68; // ecx
  unsigned __int64 v69; // rax
  struct _EX_RUNDOWN_REF *v70; // r13
  void *Ptr; // rbx
  NTSTATUS v72; // ebx
  PVOID v73; // rdi
  __int64 v74; // rax
  wchar_t *Buffer; // rax
  ULONG_PTR v76; // rdi
  NTSTATUS ProcessHandleInformation; // edi
  PVOID v78; // rcx
  __int64 v79; // rsi
  PVOID v80; // rbx
  __int64 v81; // rdi
  NTSTATUS v82; // r12d
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  unsigned int v86; // eax
  void *v87; // r8
  unsigned int v88; // ecx
  __int64 v89; // rbx
  PVOID v90; // rbx
  __int64 v91; // rcx
  __int64 *v92; // rdx
  __int16 v93; // r8
  unsigned __int16 v94; // r14
  __int64 v95; // rax
  __int64 v96; // rcx
  ULONG v97; // eax
  struct _EX_RUNDOWN_REF *v98; // rbx
  __int64 v99; // rax
  int v100; // edi
  _DWORD *v101; // rcx
  __int64 v102; // rax
  int v103; // ecx
  _DWORD *v104; // rcx
  int v105; // eax
  _DWORD *v106; // rcx
  int v107; // ecx
  _DWORD *v108; // rax
  int v109; // ecx
  int v110; // ecx
  _DWORD *v111; // rcx
  __int64 v112; // rax
  NTSTATUS v113; // ebx
  struct _EX_RUNDOWN_REF *v114; // rbx
  __int64 v115; // rax
  char v116; // r9
  NTSTATUS ProcessCommandLine; // eax
  __int64 v118; // rax
  unsigned int v119; // r8d
  NTSTATUS v120; // r12d
  ULONG v121; // ebx
  _QWORD *v122; // rbx
  int NoChildProcessRestrictedPolicy; // eax
  int v124; // eax
  int v125; // eax
  unsigned __int64 ExtensionTable; // rdi
  NTSTATUS v127; // ebx
  __int64 (__fastcall *v128)(PVOID, __int64 *); // rax
  PVOID v129; // rdi
  _DWORD *p_LockNV; // rcx
  PVOID v131; // rdi
  ULONG v132; // ebx
  __int64 v133; // rcx
  _KPROCESS *v134; // rcx
  _QWORD *v135; // rbx
  __int64 v136; // rdx
  int v137; // eax
  unsigned int v138; // edx
  ULONG v139; // edi
  PVOID Object; // [rsp+40h] [rbp-9C8h] BYREF
  NTSTATUS v141; // [rsp+48h] [rbp-9C0h]
  unsigned __int8 v142; // [rsp+4Ch] [rbp-9BCh]
  unsigned __int16 v143; // [rsp+50h] [rbp-9B8h] BYREF
  unsigned int GroupMaskProcess; // [rsp+54h] [rbp-9B4h] BYREF
  HANDLE v145; // [rsp+58h] [rbp-9B0h]
  char v146; // [rsp+60h] [rbp-9A8h] BYREF
  char v147[3]; // [rsp+61h] [rbp-9A7h] BYREF
  int v148; // [rsp+64h] [rbp-9A4h] BYREF
  unsigned int v149; // [rsp+68h] [rbp-9A0h]
  PVOID v150; // [rsp+70h] [rbp-998h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+78h] [rbp-990h] BYREF
  int v152; // [rsp+80h] [rbp-988h]
  __int64 v153; // [rsp+88h] [rbp-980h]
  HANDLE Handle; // [rsp+90h] [rbp-978h] BYREF
  int v155; // [rsp+98h] [rbp-970h]
  struct _KTHREAD *v156; // [rsp+A0h] [rbp-968h]
  __int128 v157; // [rsp+B0h] [rbp-958h]
  __int64 v158; // [rsp+C0h] [rbp-948h]
  PVOID P; // [rsp+C8h] [rbp-940h] BYREF
  struct _KTHREAD *v160; // [rsp+D0h] [rbp-938h]
  _OBJECT_NAME_INFORMATION v161; // [rsp+D8h] [rbp-930h] BYREF
  _OBJECT_NAME_INFORMATION v162; // [rsp+E8h] [rbp-920h] BYREF
  _DWORD v163[2]; // [rsp+F8h] [rbp-910h] BYREF
  int v164; // [rsp+100h] [rbp-908h] BYREF
  int v165; // [rsp+104h] [rbp-904h] BYREF
  int v166; // [rsp+108h] [rbp-900h] BYREF
  int v167; // [rsp+10Ch] [rbp-8FCh]
  __int64 v168; // [rsp+110h] [rbp-8F8h]
  PULONG v169; // [rsp+118h] [rbp-8F0h]
  ULONG v170; // [rsp+120h] [rbp-8E8h]
  _OBJECT_NAME_INFORMATION v171; // [rsp+128h] [rbp-8E0h]
  _OBJECT_NAME_INFORMATION v172; // [rsp+138h] [rbp-8D0h]
  _OBJECT_NAME_INFORMATION v173; // [rsp+148h] [rbp-8C0h]
  __int64 v174; // [rsp+158h] [rbp-8B0h] BYREF
  __int64 v175; // [rsp+160h] [rbp-8A8h]
  __int64 v176; // [rsp+168h] [rbp-8A0h] BYREF
  __int64 v177; // [rsp+170h] [rbp-898h] BYREF
  __int64 v178; // [rsp+178h] [rbp-890h]
  __int64 v179; // [rsp+180h] [rbp-888h]
  __int64 v180; // [rsp+188h] [rbp-880h]
  __int64 v181; // [rsp+190h] [rbp-878h]
  __int64 v182; // [rsp+198h] [rbp-870h]
  __int64 v183; // [rsp+1A0h] [rbp-868h]
  PVOID v184; // [rsp+1A8h] [rbp-860h] BYREF
  __int64 v185; // [rsp+1B0h] [rbp-858h]
  PVOID v186; // [rsp+1B8h] [rbp-850h] BYREF
  __int64 v187; // [rsp+1C0h] [rbp-848h] BYREF
  HANDLE v188; // [rsp+1C8h] [rbp-840h] BYREF
  __int64 v189; // [rsp+1D0h] [rbp-838h] BYREF
  __int64 v190; // [rsp+1D8h] [rbp-830h] BYREF
  _DWORD v191[2]; // [rsp+1E0h] [rbp-828h] BYREF
  int v192; // [rsp+1E8h] [rbp-820h]
  PVOID v193; // [rsp+1F0h] [rbp-818h] BYREF
  wchar_t *v194; // [rsp+1F8h] [rbp-810h] BYREF
  __int128 v195; // [rsp+200h] [rbp-808h]
  _QWORD Src[17]; // [rsp+210h] [rbp-7F8h] BYREF
  __int64 v197; // [rsp+298h] [rbp-770h] BYREF
  __int64 v198; // [rsp+2A0h] [rbp-768h]
  __int64 v199; // [rsp+2A8h] [rbp-760h]
  __int64 v200; // [rsp+2B8h] [rbp-750h] BYREF
  __int64 v201[5]; // [rsp+2C0h] [rbp-748h] BYREF
  _OBJECT_NAME_INFORMATION v202; // [rsp+2E8h] [rbp-720h]
  _OBJECT_NAME_INFORMATION v203; // [rsp+2F8h] [rbp-710h]
  _OBJECT_NAME_INFORMATION v204; // [rsp+308h] [rbp-700h]
  __int128 v205; // [rsp+320h] [rbp-6E8h]
  __int128 v206; // [rsp+330h] [rbp-6D8h]
  __int128 v207; // [rsp+340h] [rbp-6C8h]
  __int128 v208; // [rsp+350h] [rbp-6B8h]
  __int128 v209; // [rsp+360h] [rbp-6A8h]
  __int128 v210; // [rsp+370h] [rbp-698h]
  __int128 v211; // [rsp+380h] [rbp-688h]
  __int128 v212; // [rsp+390h] [rbp-678h]
  __int128 v213; // [rsp+3A0h] [rbp-668h]
  __int128 v214; // [rsp+3B0h] [rbp-658h]
  char v215; // [rsp+3C0h] [rbp-648h] BYREF
  __int64 v216; // [rsp+3D0h] [rbp-638h] BYREF
  int v217; // [rsp+3D8h] [rbp-630h]
  _QWORD JobInformation[5]; // [rsp+3E0h] [rbp-628h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v219; // [rsp+408h] [rbp-600h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v220; // [rsp+438h] [rbp-5D0h] BYREF
  char v221[16]; // [rsp+470h] [rbp-598h] BYREF
  int v222; // [rsp+480h] [rbp-588h]
  wchar_t *v223; // [rsp+4E8h] [rbp-520h]
  __int64 v224; // [rsp+500h] [rbp-508h]
  char v225[8]; // [rsp+510h] [rbp-4F8h] BYREF
  __int64 v226; // [rsp+518h] [rbp-4F0h]
  _BYTE v227[144]; // [rsp+580h] [rbp-488h] BYREF
  _BYTE v228[176]; // [rsp+610h] [rbp-3F8h] BYREF
  _BYTE v229[176]; // [rsp+6C0h] [rbp-348h] BYREF
  _OWORD v230[27]; // [rsp+770h] [rbp-298h] BYREF
  _QWORD v231[20]; // [rsp+920h] [rbp-E8h] BYREF

  v5 = ProcessInformationLength;
  v6 = (_OBJECT_NAME_INFORMATION *)ProcessInformation;
  LODWORD(v153) = ProcessInformationClass;
  v145 = ProcessHandle;
  v156 = (struct _KTHREAD *)ProcessInformation;
  v170 = ProcessInformationLength;
  v169 = ReturnLength;
  v8 = KeGetCurrentThread()->gap0[10];
  v142 = v8;
  CurrentThread = KeGetCurrentThread();
  v160 = CurrentThread;
  if ( v8 )
  {
    if ( ProcessInformationClass == ProcessProtectionInformation )
    {
      v10 = 0LL;
      v11 = 0LL;
    }
    else
    {
      if ( ProcessInformationClass == ProcessCommitReleaseInformation )
        v11 = 7LL;
      else
        v11 = ((ProcessInformationClass - 70) & 0xFFFFFFFB) != 0 ? 3 : 0;
      v10 = 0LL;
    }
    if ( ProcessInformationLength )
    {
      if ( ((unsigned __int64)ProcessInformation & v11) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ProcessInformation + ProcessInformationLength > 0x7FFFFFFF0000LL
        || (char *)ProcessInformation + ProcessInformationLength < ProcessInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    if ( ReturnLength )
    {
      v12 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  else
  {
    v10 = 0LL;
  }
  switch ( ProcessInformationClass )
  {
    case ProcessBasicInformation:
      if ( ProcessInformationLength == 64 )
      {
        v21 = ProcessInformation;
        v150 = ProcessInformation;
        v22 = 64;
        v153 = 64LL;
        *(_QWORD *)ProcessInformation = 64LL;
        v6 = (_OBJECT_NAME_INFORMATION *)((char *)ProcessInformation + 8);
      }
      else
      {
        if ( ProcessInformationLength != 48 )
          return -1073741820;
        v21 = 0LL;
        v150 = 0LL;
        v22 = 48;
        v153 = 48LL;
      }
      v148 = v22;
      ObjectNameInformation = v6;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      v23 = result;
      v141 = result;
      if ( result < 0 )
        return result;
      v24 = (char *)Object;
      *(_DWORD *)&v6->Name.Length = *((_DWORD *)Object + 393);
      v6->Name.Buffer = (wchar_t *)*((_QWORD *)v24 + 127);
      if ( (v24[720] & 1) != 0 )
        VslGetSecurePebAddress(v24);
      if ( v23 < 0 )
        goto LABEL_58;
      GroupMaskProcess = KeQueryGroupMaskProcess((__int64)v24);
      v26 = (__int64)v160;
      if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 && v24 != (char *)v160->Process )
        goto LABEL_68;
      KeQueryAffinityProcess((__int64)v24, (__int64)v228, (int *)&GroupMaskProcess, 0LL);
      v27 = GroupMaskProcess;
      if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 )
      {
        if ( v24 != *(char **)(v26 + 544) )
          goto LABEL_67;
        v28 = *(unsigned __int16 *)(v26 + 560);
        if ( !_bittest64(&v27, v28) )
          goto LABEL_67;
      }
      else
      {
        _BitScanForward((unsigned int *)&v28, GroupMaskProcess);
      }
      if ( (_DWORD)v28 != 20 )
      {
        v25 = *(_QWORD *)&v228[8 * v28 + 8];
        goto LABEL_68;
      }
LABEL_67:
      v25 = 0LL;
LABEL_68:
      *(_QWORD *)&v6[1].Name.Length = v25;
      LODWORD(v6[1].Name.Buffer) = v24[444];
      *(_QWORD *)&v6[2].Name.Length = *((_QWORD *)v24 + 92);
      v6[2].Name.Buffer = (wchar_t *)*((_QWORD *)v24 + 124);
      if ( v21 )
      {
        v21[14] = 0;
        if ( (v24[1738] & 7) != 0 )
          v21[14] = 1;
        v29 = *((_QWORD *)v24 + 133);
        if ( v29 )
        {
          v30 = *(_WORD *)(v29 + 8);
          if ( v30 == 332 || v30 == 452 )
            v21[14] |= 2u;
        }
        v31 = v24 + 772;
        if ( (*((_DWORD *)v24 + 193) & 0x40000008) != 0 )
          v21[14] |= 4u;
        v24 = (char *)Object;
        v21[14] ^= (v21[14] ^ (*((_DWORD *)Object + 192) >> 4)) & 8;
        if ( *((_DWORD *)v24 + 154) + ((*((_DWORD *)v24 + 110) >> 3) & 1) )
          v21[14] |= 0x10u;
        v21[14] ^= (v21[14] ^ (*v31 >> 15)) & 0x20;
        PsQueryProcessAttributes((struct _KPROCESS *)v24, &v146, 0LL);
        if ( v146 )
          v21[14] |= 0x40u;
        if ( (v24[720] & 1) != 0 )
          v21[14] |= 0x80u;
        if ( *((_QWORD *)v24 + 226) )
          v21[14] |= 0x100u;
        v23 = v141;
      }
      if ( ReturnLength )
        *ReturnLength = v153;
LABEL_58:
      ObfDereferenceObjectWithTag(v24, 0x79517350u);
      return v23;
    case ProcessQuotaLimits:
      return PspQueryQuotaLimits((ULONG_PTR)ProcessHandle, (__int64)ReturnLength, v8);
    case ProcessIoCounters:
      if ( ProcessInformationLength != 48 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        PsQueryStatisticsProcess((__int64)Object, v201);
        v171 = v202;
        v172 = v203;
        v173 = v204;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *v6 = v171;
        v6[1] = v172;
        v6[2] = v173;
        if ( ReturnLength )
          *ReturnLength = 48;
        return DeviceMapInformation;
      }
      return result;
    case ProcessVmCounters:
      if ( ((ProcessInformationLength - 88) & 0xFFFFFFE7) != 0 || ProcessInformationLength == 104 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        memset(Src, 0, 0x70uLL);
        v33 = Object;
        Src[0] = *((_QWORD *)Object + 102);
        Src[1] = *((_QWORD *)Object + 103);
        LODWORD(Src[2]) = *((_DWORD *)Object + 321);
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v219);
        v141 = MmQueryWorkingSetInformation(&Src[3], &Src[4], &Src[12], &v189, &v200, v191);
        KiUnstackDetachProcess(&v219, 0LL);
        Src[6] = v33[99];
        Src[5] = *((_QWORD *)Object + 101);
        Src[8] = *((_QWORD *)Object + 98);
        Src[7] = *((_QWORD *)Object + 100);
        Src[9] = *((_QWORD *)Object + 158) << 12;
        Src[10] = *((_QWORD *)Object + 159) << 12;
        Src[13] = *((_QWORD *)Object + 240) << 12;
        Src[11] = Src[9];
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        result = v141;
        if ( v141 >= 0 )
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
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      v141 = result;
      if ( result >= 0 )
      {
        v156 = KeGetCurrentThread();
        --v156->KernelApcDisable;
        v34 = (char *)Object;
        v35 = (signed __int64 *)((char *)Object + 1712);
        ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1712, 0LL);
        v36 = *((_DWORD *)v34 + 155);
        v37 = *((_DWORD *)v34 + 156);
        v38 = (_QWORD **)(v34 + 1160);
        for ( i = *v38; i != v38; i = (_QWORD *)*i )
        {
          v36 += *((_DWORD *)i - 263);
          v37 += *((_DWORD *)i - 243);
        }
        if ( _InterlockedCompareExchange64(v35, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v35);
        KeAbPostRelease((ULONG_PTR)v35);
        KeLeaveCriticalRegionThread((__int64)v156);
        v40 = KeMaximumIncrement;
        *(_QWORD *)&v6[1].Name.Length = KeMaximumIncrement * (unsigned __int64)v36;
        v6[1].Name.Buffer = (wchar_t *)(v40 * v37);
        v41 = Object;
        *(_QWORD *)&v6->Name.Length = *((_QWORD *)Object + 97);
        v6->Name.Buffer = (wchar_t *)v41[210];
        if ( ReturnLength )
          *ReturnLength = 32;
        ExecuteOptions = v141;
        goto LABEL_145;
      }
      return result;
    case ProcessDebugPort:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        Handle = (HANDLE)((unsigned __int128)-(__int128)*((unsigned __int64 *)Object + 132) >> 64);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)&v6->Name.Length = Handle;
        if ( ReturnLength )
          *ReturnLength = 8;
        return 0;
      }
      return result;
    case ProcessLdtInformation:
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1040,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        ProcessTelemetryCoverage = xKdEnumerateDebuggingDevices();
        goto LABEL_144;
      }
      return result;
    case ProcessDefaultHardErrorMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v32 = *((_DWORD *)Object + 296);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)&v6->Name.Length = v32;
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
               v8);
    case ProcessWorkingSetWatch:
    case ProcessWorkingSetWatchEx:
      return PspQueryWorkingSetWatch((ULONG_PTR)ProcessHandle, (__int64)ReturnLength, v8);
    case ProcessPriorityClass:
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        LOBYTE(v143) = 0;
        HIBYTE(v143) = *((_BYTE *)Object + 1119);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v6->Name.Length = v143;
        if ( ReturnLength )
          *ReturnLength = 2;
        return 0;
      }
      return result;
    case ProcessWx86Information:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v45 = *((_BYTE *)Object + 775) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)&v6->Name.Length = v45;
        if ( ReturnLength )
          *ReturnLength = 4;
        return DeviceMapInformation;
      }
      return result;
    case ProcessHandleCount:
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        ProcessHandleCount = ObGetProcessHandleCount(Object, v163);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)&v6->Name.Length = ProcessHandleCount;
        if ( (_DWORD)v5 != 4 )
          *(_DWORD *)(&v6->Name.MaximumLength + 1) = v163[0];
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
      return result;
    case ProcessAffinityMask:
      if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v53 = (struct _EX_RUNDOWN_REF *)Object;
        GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
        if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0
          || (KeQueryAffinityProcess((__int64)v53, (__int64)v229, (int *)&GroupMaskProcess, 0LL),
              ((GroupMaskProcess - 1) & GroupMaskProcess) != 0) )
        {
          DeviceMapInformation = -1073741811;
        }
        else
        {
          _BitScanForward((unsigned int *)&v84, GroupMaskProcess);
          v85 = *(_QWORD *)&v229[8 * v84 + 8];
          if ( (_DWORD)v5 == 16 )
            LOWORD(v6->Name.Buffer) = v84;
          *(_QWORD *)&v6->Name.Length = v85;
          if ( ReturnLength )
            *ReturnLength = v5;
        }
        goto LABEL_216;
      }
      return result;
    case ProcessPriorityBoost:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v46 = (*((_DWORD *)Object + 110) >> 1) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)&v6->Name.Length = v46;
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
        v149 = *((_DWORD *)ProcessInformation + 10);
        v47 = v149;
        if ( (v149 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( ProcessInformationLength != 36 )
          return -1073741820;
        v47 = 0;
      }
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        DeviceMapInformation = ObQueryDeviceMapInformation((_KPROCESS *)Object, (__int64)v6, v47);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( DeviceMapInformation >= 0 && ReturnLength )
          *ReturnLength = v5;
        return DeviceMapInformation;
      }
      return result;
    case ProcessSessionInformation:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        SessionId = MmGetSessionId((__int64)Object);
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
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v49 = *((_QWORD *)Object + 133);
        if ( v49 )
        {
          v50 = *(_WORD *)(v49 + 8);
          if ( v50 == 332 || v50 == 452 )
            v10 = *(char **)v49;
        }
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)&v6->Name.Length = v10;
        if ( ReturnLength )
          *ReturnLength = 8;
        return 0;
      }
      return result;
    case ProcessImageFileName:
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        if ( (unsigned int)v5 >= 0x10 )
        {
          v148 = v5 - 16;
          v10 = (char *)&v6[1];
        }
        else
        {
          v148 = 0;
          v6 = (_OBJECT_NAME_INFORMATION *)&v215;
        }
        DeviceMapInformation = PsQueryFullProcessImageName(Object, v6, v10, &v148);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( DeviceMapInformation >= 0 && !v10 )
          DeviceMapInformation = -1073741820;
        if ( ReturnLength && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
          *ReturnLength = v148 + 16;
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
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v51 = (*((_DWORD *)Object + 193) >> 13) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)&v6->Name.Length = v51;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessDebugObjectHandle:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = DbgkOpenProcessDebugPort(Object, v8, &Handle);
      v42 = Handle;
      if ( DeviceMapInformation < 0 )
        v42 = 0LL;
      Handle = v42;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)&v6->Name.Length = Handle;
      if ( ReturnLength )
        *ReturnLength = 8;
      return DeviceMapInformation;
    case ProcessDebugFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 193) & 2) == 0;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_145;
    case ProcessHandleTracing:
      if ( ProcessInformationLength < 0x10 )
        return -1073741820;
      if ( (unsigned int)ExIsRestrictedCaller(v8) )
        return -1073741790;
      ObjectNameInformation = (POBJECT_NAME_INFORMATION)((unsigned int)(v5 - 16) / 0xA0uLL);
      v52 = (char *)&v6[1];
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v53 = (struct _EX_RUNDOWN_REF *)Object;
      v54 = (void *)ObReferenceProcessHandleTable(Object);
      v55 = v54;
      P = v54;
      if ( !v54 )
        goto LABEL_215;
      v56 = ExReferenceHandleDebugInfo(v54);
      v57 = v56;
      v158 = v56;
      if ( v56 )
      {
        LODWORD(v6->Name.Buffer) = 0;
        v58 = (unsigned int)(*(_DWORD *)(v56 + 72) % *(_DWORD *)(v56 + 4));
        v155 = v58;
        while ( 1 )
        {
          v163[1] = (_DWORD)v10;
          if ( (unsigned int)v10 >= *(_DWORD *)(v57 + 4) )
            break;
          v59 = (_OWORD *)(v57 + 160 * v58);
          v205 = v59[5];
          v206 = v59[6];
          v207 = v59[7];
          v208 = v59[8];
          v209 = v59[9];
          v210 = v59[10];
          v211 = v59[11];
          v212 = v59[12];
          v213 = v59[13];
          v214 = v59[14];
          v60 = v206;
          if ( *(_QWORD *)&v6->Name.Length == (_QWORD)v206 || !*(_QWORD *)&v6->Name.Length )
          {
            v61 = DWORD2(v206);
            if ( DWORD2(v206) )
            {
              ++LODWORD(v6->Name.Buffer);
              if ( (_DWORD)ObjectNameInformation )
              {
                ObjectNameInformation = (POBJECT_NAME_INFORMATION)(unsigned int)((_DWORD)ObjectNameInformation - 1);
                v191[1] = (_DWORD)ObjectNameInformation;
                *(_QWORD *)v52 = v60;
                *(_OWORD *)(v52 + 8) = v205;
                *((_DWORD *)v52 + 6) = v61;
                *((_OWORD *)v52 + 2) = v207;
                *((_OWORD *)v52 + 3) = v208;
                *((_OWORD *)v52 + 4) = v209;
                *((_OWORD *)v52 + 5) = v210;
                *((_OWORD *)v52 + 6) = v211;
                *((_OWORD *)v52 + 7) = v212;
                *((_OWORD *)v52 + 8) = v213;
                *((_OWORD *)v52 + 9) = v214;
                v52 += 160;
                Src[14] = v52;
              }
              else
              {
                DeviceMapInformation = -1073741820;
                v141 = -1073741820;
              }
            }
          }
          if ( !(_DWORD)v58 )
            LODWORD(v58) = *(_DWORD *)(v57 + 4);
          v58 = (unsigned int)(v58 - 1);
          v155 = v58;
          LODWORD(v10) = (_DWORD)v10 + 1;
        }
        if ( ReturnLength )
          *ReturnLength = (_DWORD)v52 - (_DWORD)v6;
        ExDereferenceHandleDebugInfo(v55, v57);
        v53 = (struct _EX_RUNDOWN_REF *)Object;
      }
      else
      {
        DeviceMapInformation = -1073741811;
      }
      goto LABEL_214;
    case ProcessIoPriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      v141 = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 193) >> 27) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_145;
    case ProcessExecuteFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   1024,
                   (__int64)PsProcessType,
                   v8,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        Process = Object;
      }
      ExecuteOptions = KeGetExecuteOptions(Process, &v164);
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v63, 0x79517350u);
      if ( ExecuteOptions >= 0 )
      {
        *(_DWORD *)&v6->Name.Length = v164;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return ExecuteOptions;
    case ProcessCookie:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
        Object = (PVOID)p_Lock;
      }
      else
      {
        result = ObReferenceObjectByHandle(ProcessHandle, 0x20u, (POBJECT_TYPE)PsProcessType, v8, &v193, 0LL);
        p_Lock = (volatile signed __int32 *)v193;
        Object = v193;
        if ( result < 0 )
          return result;
      }
      v141 = 0;
      while ( 1 )
      {
        v65 = *((_DWORD *)p_Lock + 242);
        if ( v65 )
          break;
        KeQuerySystemTimePrecise(&v176);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v68 = ExGenRandom(1);
        v69 = __rdtsc();
        _InterlockedCompareExchange(
          p_Lock + 242,
          v176 ^ HIDWORD(v176) ^ LowPart ^ v69 ^ v68 ^ CurrentPrcb->MmPageFaultCount ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
          0);
        LODWORD(v10) = v141;
        p_Lock = (volatile signed __int32 *)Object;
      }
      *(_DWORD *)&v6->Name.Length = v65;
      if ( ReturnLength )
        *ReturnLength = 4;
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObject((PVOID)p_Lock);
      return (int)v10;
    case ProcessImageInformation:
      if ( ProcessInformationLength != 64 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v70 = (struct _EX_RUNDOWN_REF *)Object;
      if ( Object == v160->Process )
      {
        Ptr = (void *)*((_QWORD *)Object + 119);
        if ( !Ptr )
          result = -1073741558;
        DeviceMapInformation = result;
      }
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95) )
      {
        Ptr = v70[119].Ptr;
        if ( Ptr )
          ObfReferenceObject(v70[119].Ptr);
        else
          DeviceMapInformation = -1073741811;
        ExReleaseRundownProtection_0(v70 + 95);
        LODWORD(v10) = 1;
      }
      else
      {
        DeviceMapInformation = -1073741558;
        Ptr = 0LL;
        LODWORD(v10) = 1;
      }
      ObfDereferenceObjectWithTag(v70, 0x79517350u);
      if ( DeviceMapInformation >= 0 )
      {
        DeviceMapInformation = MmGetSectionInformation((__int64)Ptr, 1, (__int64)v6);
        if ( (_DWORD)v10 )
          ObfDereferenceObject(Ptr);
        if ( DeviceMapInformation >= 0 && ReturnLength )
          *ReturnLength = 64;
      }
      return DeviceMapInformation;
    case ProcessCycleTime:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      v72 = result;
      if ( result < 0 )
        return result;
      v73 = Object;
      *(_QWORD *)&v6->Name.Length = PsQueryTotalCycleTimeProcess(Object, &v194);
      v6->Name.Buffer = v194;
      if ( ReturnLength )
        *ReturnLength = 16;
      goto LABEL_600;
    case ProcessPagePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 192) >> 12) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_145;
    case ProcessImageFileNameWin32:
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v15 = (struct _EX_RUNDOWN_REF *)Object;
      v16 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 137);
      v150 = v16;
      if ( v16 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95) )
        {
          ObfReferenceObject(v16);
          ExReleaseRundownProtection_0(v15 + 95);
        }
        else
        {
          DeviceMapInformation = -1073741558;
        }
      }
      else
      {
        DeviceMapInformation = PsReferenceProcessFilePointer(Object, &v150);
        v16 = (struct _FILE_OBJECT *)v150;
      }
      ObfDereferenceObjectWithTag(v15, 0x79517350u);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      ExecuteOptions = IoQueryFileDosDeviceName(v16, &ObjectNameInformation);
      ObfDereferenceObject(v16);
      if ( ExecuteOptions >= 0 )
      {
        v18 = ObjectNameInformation;
        v19 = ObjectNameInformation->Name.MaximumLength + 16;
        if ( v19 <= (unsigned int)v5 )
        {
          v6->Name.Length = ObjectNameInformation->Name.Length;
          v6->Name.MaximumLength = v18->Name.MaximumLength;
          MaximumLength = v18->Name.MaximumLength;
          if ( MaximumLength )
          {
            v10 = (char *)&v6[1];
            memmove(&v6[1], v18->Name.Buffer, MaximumLength);
          }
          v6->Name.Buffer = (wchar_t *)v10;
        }
        else
        {
          ExecuteOptions = -1073741820;
          v141 = -1073741820;
        }
        if ( ReturnLength )
          *ReturnLength = v19;
        ExFreePoolWithTag(v18, 0);
      }
      return ExecuteOptions;
    case ProcessImageFileMapping:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v76 = *(_QWORD *)ProcessInformation;
      Src[15] = *(_QWORD *)ProcessInformation;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      ExecuteOptions = ObpReferenceObjectByHandleWithTag(
                         v76,
                         1048608,
                         (__int64)IoFileObjectType,
                         v8,
                         2035381072,
                         &v150,
                         0LL,
                         0LL);
      v41 = Object;
      if ( ExecuteOptions < 0 )
        goto LABEL_145;
      ProcessHandleInformation = PsReferenceProcessFilePointer(Object, &v184);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v78 = v150;
      if ( ProcessHandleInformation < 0 )
        goto LABEL_366;
      v79 = *((_QWORD *)v150 + 5);
      v80 = v184;
      v81 = *((_QWORD *)v184 + 5);
      v82 = 0;
      if ( v79 != v81 )
        v82 = -1073741823;
      ObfDereferenceObject(v150);
      ObfDereferenceObject(v80);
      result = v82;
      if ( v79 == v81 && ReturnLength )
        *ReturnLength = 0;
      return result;
    case ProcessAffinityUpdateMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v149 = *((_DWORD *)Object + 192);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v83 = (v149 >> 19) & 1 | 2;
      if ( (v149 & 0x40000) == 0 )
        v83 = (v149 >> 19) & 1;
      *(_DWORD *)&v6->Name.Length = v83;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessMemoryAllocationMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v149 = *((_DWORD *)Object + 193);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      LOBYTE(v10) = (v149 & 0x200000) != 0;
      *(_DWORD *)&v6->Name.Length = (_DWORD)v10;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessGroupInformation:
      if ( !ReturnLength || (ProcessInformationLength & 1) != 0 )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v86 = KeQueryGroupMaskProcess((__int64)Object);
        GroupMaskProcess = v86;
        do
        {
          _BitScanForward(&v88, v86);
          LODWORD(v10) = (_DWORD)v10 + 2;
          v148 = (int)v10;
          if ( (unsigned int)v10 <= (unsigned int)v5 )
          {
            v6->Name.Length = v88;
            v6 = (_OBJECT_NAME_INFORMATION *)((char *)v6 + 2);
            Src[16] = v6;
          }
          _bittestandreset((signed __int32 *)&GroupMaskProcess, v88);
          v86 = GroupMaskProcess;
        }
        while ( GroupMaskProcess );
        *ReturnLength = (unsigned int)v10;
        v141 = (unsigned int)v5 < (unsigned int)v10 ? 0xC0000023 : 0;
        ObfDereferenceObjectWithTag(v87, 0x79517350u);
        return (unsigned int)v5 < (unsigned int)v10 ? 0xC0000023 : 0;
      }
      return result;
    case ProcessConsoleHostProcess:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v89 = *((_QWORD *)Object + 126);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)&v6->Name.Length = v89;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessWindowInformation:
      v152 = 0;
      v157 = 0uLL;
      if ( v8 != 1 )
        return -1073741823;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 1,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      v141 = result;
      if ( result >= 0 )
      {
        v90 = Object;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 95) )
        {
          KiStackAttachProcess((_KPROCESS *)v90, 0, (__int64)&v220);
          v91 = 0LL;
          v92 = (__int64 *)*((_QWORD *)v90 + 133);
          if ( v92 )
          {
            v93 = *((_WORD *)v92 + 4);
            if ( v93 == 332 || v93 == 452 )
              v91 = *v92;
          }
          if ( v91 )
          {
            v185 = *(unsigned int *)(v91 + 16);
            v152 = *(_DWORD *)(v185 + 104);
            v168 = *(_QWORD *)(v185 + 112);
            v94 = v168;
            LODWORD(v157) = v168;
            *((_QWORD *)&v157 + 1) = HIDWORD(v168);
          }
          else
          {
            v158 = *(_QWORD *)(*((_QWORD *)v90 + 127) + 32LL);
            v95 = v158 + 164;
            if ( (unsigned __int64)(v158 + 164) >= 0x7FFFFFFF0000LL )
              v95 = 0x7FFFFFFF0000LL;
            v152 = *(_DWORD *)v95;
            v96 = v158 + 176;
            if ( (unsigned __int64)(v158 + 176) >= 0x7FFFFFFF0000LL )
              v96 = 0x7FFFFFFF0000LL;
            LODWORD(v195) = *(_DWORD *)v96;
            *((_QWORD *)&v195 + 1) = *(_QWORD *)(v96 + 8);
            v157 = v195;
            v94 = v195;
          }
          DeviceMapInformation = v141;
          KiUnstackDetachProcess(&v220, 0LL);
          if ( DeviceMapInformation < 0 )
            goto LABEL_355;
          v97 = v94 + 6;
          if ( ReturnLength )
            *ReturnLength = v97;
          if ( (unsigned int)v5 >= v97 )
          {
            *(_DWORD *)&v6->Name.Length = v152;
            *(&v6->Name.MaximumLength + 1) = v94;
          }
          else
          {
            DeviceMapInformation = -1073741820;
            v141 = -1073741820;
          }
          if ( DeviceMapInformation >= 0 && v94 )
          {
            v90 = Object;
            DeviceMapInformation = MmCopyVirtualMemory((ULONG_PTR)Object, (unsigned __int16)v157, 1, (__int64)&v190);
          }
          else
          {
LABEL_355:
            v90 = Object;
          }
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v90 + 95);
        }
        else
        {
          DeviceMapInformation = -1073741558;
        }
LABEL_357:
        ObfDereferenceObjectWithTag(v90, 0x79517350u);
        return DeviceMapInformation;
      }
      return result;
    case ProcessHandleInformation:
      if ( ProcessInformationLength >= 0x10 )
      {
        result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, v8, &v186, 0LL);
        if ( result >= 0 )
        {
          --CurrentThread->KernelApcDisable;
          v98 = (struct _EX_RUNDOWN_REF *)v186;
          v99 = ObReferenceProcessHandleTable(v186);
          if ( v99 )
          {
            ProcessHandleInformation = ExQueryProcessHandleInformation(v99, v6, (unsigned int)v5, ReturnLength);
            ExReleaseRundownProtection_0(v98 + 95);
          }
          else
          {
            ProcessHandleInformation = -1073741558;
          }
          KeLeaveCriticalRegionThread((__int64)v160);
          v78 = v98;
LABEL_366:
          ObfDereferenceObject(v78);
          return ProcessHandleInformation;
        }
      }
      else
      {
        if ( ReturnLength )
          *ReturnLength = 16;
        return -1073741820;
      }
      return result;
    case ProcessMitigationPolicy:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v100 = *(_DWORD *)ProcessInformation;
      v167 = *(_DWORD *)ProcessInformation;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Object = KeGetCurrentThread()->ApcState.Process;
        v100 = v167;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   1024,
                   (__int64)PsProcessType,
                   v8,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
      }
      break;
    case ProcessHandleCheckingMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      v141 = result;
      if ( result < 0 )
        return result;
      v53 = (struct _EX_RUNDOWN_REF *)Object;
      v112 = ObReferenceProcessHandleTable(Object);
      if ( !v112 )
        goto LABEL_215;
      LOBYTE(v10) = (*(_BYTE *)(v112 + 44) & 2) != 0;
      *(_DWORD *)&v6->Name.Length = (_DWORD)v10;
      goto LABEL_214;
    case ProcessKeepAliveCount:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_DWORD *)&v6->Name.Length = *((_DWORD *)Object + 513) & 0x7FFFFFFF;
      *(_DWORD *)(&v6->Name.MaximumLength + 1) = *((_DWORD *)v41 + 521) & 0x7FFFFFFF;
      goto LABEL_145;
    case ProcessHandleTable:
      if ( ProcessInformationLength < 4 )
        return -1073741820;
      result = ExLockUserBuffer(
                 ProcessInformation,
                 ProcessInformationLength,
                 (unsigned __int8)KeGetCurrentThread()->gap0[10],
                 1LL,
                 &v187,
                 &P);
      if ( result >= 0 )
      {
        v113 = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1088,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
        if ( v113 >= 0 )
        {
          v174 = 0LL;
          v175 = 0LL;
          v114 = (struct _EX_RUNDOWN_REF *)Object;
          v115 = ObReferenceProcessHandleTable(Object);
          if ( v115 )
          {
            v174 = v187;
            v175 = (unsigned int)v5 >> 2;
            ExEnumHandleTable(v115, PspHandleTableWalker, &v174, 0LL);
            ExReleaseRundownProtection_0(v114 + 95);
          }
          else
          {
            LODWORD(v10) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v114, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = 4 * HIDWORD(v175);
          ExUnlockUserBuffer((struct _MDL *)P);
          return (int)v10;
        }
        else
        {
          ExUnlockUserBuffer((struct _MDL *)P);
          return v113;
        }
      }
      return result;
    case ProcessCheckStackExtentsMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 110) >> 5) & 1;
      goto LABEL_145;
    case ProcessCommandLineInformation:
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)ProcessHandle,
                               4096,
                               (__int64)PsProcessType,
                               v8,
                               2035381072,
                               &Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v116 = v8;
      v90 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((ULONG_PTR)Object, (__int64)v6, v5, v116, ReturnLength);
      goto LABEL_486;
    case ProcessProtectionInformation:
      ExecuteOptions = ObpReferenceObjectByHandleWithTag(
                         (ULONG_PTR)ProcessHandle,
                         4096,
                         (__int64)PsProcessType,
                         v8,
                         2035381072,
                         &Object,
                         0LL,
                         0LL);
      if ( ExecuteOptions < 0 )
        return ExecuteOptions;
      if ( (_DWORD)v5 )
      {
        v41 = Object;
        LOBYTE(v6->Name.Length) = *((_BYTE *)Object + 1738);
        if ( ReturnLength )
          *ReturnLength = 1;
        ExecuteOptions = 0;
      }
      else
      {
LABEL_506:
        ExecuteOptions = -1073741820;
LABEL_507:
        v41 = Object;
      }
      if ( v41 )
        goto LABEL_145;
      return ExecuteOptions;
    case ProcessTelemetryIdInformation:
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)ProcessHandle,
                               4096,
                               (__int64)PsProcessType,
                               v8,
                               2035381072,
                               &Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v90 = Object;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo((ULONG_PTR)Object, v6, (unsigned int)v5, (__int64)ReturnLength);
LABEL_486:
      DeviceMapInformation = ProcessCommandLine;
      if ( v90 )
        goto LABEL_357;
      return DeviceMapInformation;
    case ProcessCommitReleaseInformation:
      Object = 0LL;
      if ( ProcessInformationLength != 32 )
        goto LABEL_506;
      v161 = *(_OBJECT_NAME_INFORMATION *)ProcessInformation;
      v162 = (_OBJECT_NAME_INFORMATION)*((_OWORD *)ProcessInformation + 1);
      if ( *(_DWORD *)&v161.Name.Length == 3 )
      {
        if ( (*(_DWORD *)(&v161.Name.MaximumLength + 1) & 0xFFFFFFF8) != 0 || v161.Name.Buffer )
        {
          ExecuteOptions = -1073741811;
        }
        else
        {
          ExecuteOptions = ObpReferenceObjectByHandleWithTag(
                             (ULONG_PTR)ProcessHandle,
                             4096,
                             (__int64)PsProcessType,
                             v8,
                             2035381072,
                             &Object,
                             0LL,
                             0LL);
          if ( ExecuteOptions >= 0 )
          {
            MmQueryCommitReleaseState((_KPROCESS *)Object, &v165, &v161.Name.Buffer, &v162, &v162.Name.Buffer);
            *(_DWORD *)(&v161.Name.MaximumLength + 1) ^= (*((_BYTE *)&v161.Name.MaximumLength + 2) ^ (unsigned __int8)v165) & 1;
            v161.Name.Buffer = (wchar_t *)((__int64)v161.Name.Buffer << 12);
            *(_QWORD *)&v162.Name.Length <<= 12;
            v162.Name.Buffer = (wchar_t *)((__int64)v162.Name.Buffer << 12);
            *v6 = v161;
            v6[1] = v162;
            ExecuteOptions = 0;
          }
        }
      }
      else
      {
        ExecuteOptions = -1073741735;
      }
      goto LABEL_507;
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
        return -1073741820;
      v120 = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               4096,
               (__int64)PsProcessType,
               v8,
               2035381072,
               &Object,
               0LL,
               0LL);
      if ( v120 >= 0 )
      {
        LOBYTE(v10) = (_DWORD)v153 == 67;
        v121 = 8 * KeQueryCpuSetsProcess((__int64)Object, v231, v119, (int)v10);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( ReturnLength )
          *ReturnLength = v121;
        if ( v121 < (unsigned int)v5 )
          LODWORD(v5) = v121;
        memmove(v6, v231, (unsigned int)v5);
      }
      return v120;
    case ProcessJobMemoryInformation:
      if ( ProcessInformationLength != 40 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v171 = (_OBJECT_NAME_INFORMATION)0LL;
        v172 = (_OBJECT_NAME_INFORMATION)0LL;
        *(_QWORD *)&v173.Name.Length = 0LL;
        if ( *((_QWORD *)Object + 118) )
        {
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v219);
          ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, JobInformation, 0x28u, 0LL);
          ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, v221, 0x98u, 0LL);
          KiUnstackDetachProcess(&v219, 0LL);
          v171.Name.Buffer = (wchar_t *)JobInformation[0];
          *(_QWORD *)&v172.Name.Length = JobInformation[1];
          *(_QWORD *)&v171.Name.Length = JobInformation[2];
          v74 = *(_QWORD *)&v173.Name.Length;
          if ( (v222 & 0x200000) != 0 )
            v74 = v224;
          *(_QWORD *)&v173.Name.Length = v74;
          Buffer = v172.Name.Buffer;
          if ( (v222 & 0x200) != 0 )
            Buffer = v223;
          v172.Name.Buffer = Buffer;
          *v6 = v171;
          v6[1] = v172;
          *(_QWORD *)&v6[2].Name.Length = *(_QWORD *)&v173.Name.Length;
          if ( ReturnLength )
            *ReturnLength = 40;
        }
        else
        {
          LODWORD(v10) = -1073741394;
        }
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return (int)v10;
      }
      return result;
    case ProcessInPrivate:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      LOBYTE(v6->Name.Length) = *((int *)Object + 192) < 0;
      goto LABEL_145;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      v141 = result;
      if ( result < 0 )
        return result;
      v53 = (struct _EX_RUNDOWN_REF *)Object;
      v118 = ObReferenceProcessHandleTable(Object);
      if ( v118 )
      {
        LOBYTE(v10) = (*(_BYTE *)(v118 + 44) & 0x10) != 0;
        *(_DWORD *)&v6->Name.Length = (_DWORD)v10;
LABEL_214:
        ExReleaseRundownProtection_0(v53 + 95);
      }
      else
      {
LABEL_215:
        DeviceMapInformation = -1073741558;
      }
LABEL_216:
      ObfDereferenceObjectWithTag(v53, 0x79517350u);
      return DeviceMapInformation;
    case ProcessIumChallengeResponse:
      return PsIumGetOnDemandDebugChallenge(ProcessHandle, ProcessInformation, ProcessInformationLength, ReturnLength);
    case ProcessChildProcessInformation:
      if ( ProcessInformationLength != 3 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v122 = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
        Object = v122;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   1024,
                   (__int64)PsProcessType,
                   v8,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v122 = Object;
      }
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v122);
      v6->Name.Length = 0;
      LOBYTE(v6->Name.MaximumLength) = 0;
      v124 = NoChildProcessRestrictedPolicy - 1;
      if ( !v124 )
        goto LABEL_537;
      v125 = v124 - 1;
      if ( v125 )
      {
        if ( v125 == 1 )
          LOBYTE(v6->Name.MaximumLength) = 1;
      }
      else
      {
        HIBYTE(v6->Name.Length) = 1;
LABEL_537:
        LOBYTE(v6->Name.Length) = 1;
      }
      if ( ReturnLength )
        *ReturnLength = 3;
      if ( ProcessHandle == (HANDLE)-1LL )
        return (int)v10;
LABEL_541:
      ObfDereferenceObjectWithTag(v122, 0x79517350u);
      return 0;
    case ProcessHighGraphicsPriorityInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      LOBYTE(v6->Name.Length) = (*((_DWORD *)Object + 435) & 0x200) != 0;
      goto LABEL_145;
    case ProcessSubsystemInformation:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      if ( *((_QWORD *)Object + 226) )
        LODWORD(v10) = qword_140362970;
      *(_DWORD *)&v6->Name.Length = (_DWORD)v10;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_145;
    case ProcessEnergyValues:
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      v72 = result;
      if ( result < 0 )
        return result;
      v73 = Object;
      PsQueryProcessEnergyValues(Object, v230);
      if ( (unsigned int)v5 > 0x1B0 )
        LODWORD(v5) = 432;
      memmove(v6, v230, (unsigned int)v5);
      if ( ReturnLength )
        *ReturnLength = 432;
      goto LABEL_600;
    case ProcessPowerThrottlingState:
      if ( ProcessInformationLength != 12 )
        return -1073741820;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v127 = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               4096,
               (__int64)PsProcessType,
               v8,
               2035381072,
               &Object,
               0LL,
               0LL);
      if ( v127 >= 0 )
      {
        v128 = *(__int64 (__fastcall **)(PVOID, __int64 *))(ExtensionTable + 16);
        v129 = Object;
        v127 = v128(Object, &v216);
        if ( v127 >= 0 )
        {
          *(_QWORD *)&v6->Name.Length = v216;
          LODWORD(v6->Name.Buffer) = v217;
          if ( ReturnLength )
            *ReturnLength = 12;
          v127 = 0;
          v141 = 0;
        }
        ObfDereferenceObjectWithTag(v129, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v127;
    case ProcessWin32kSyscallFilterInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        p_LockNV = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
        Object = p_LockNV;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   1024,
                   (__int64)PsProcessType,
                   v8,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        p_LockNV = Object;
      }
      *(_DWORD *)&v6->Name.Length = 0;
      if ( (p_LockNV[522] & 0x4000) != 0 )
        *(_DWORD *)&v6->Name.Length = 1;
      if ( (p_LockNV[522] & 0x8000) != 0 )
        *(_DWORD *)&v6->Name.Length |= 2u;
      if ( ReturnLength )
        *ReturnLength = 8;
      if ( ProcessHandle == (HANDLE)-1LL )
        return (int)v10;
      ObfDereferenceObjectWithTag(p_LockNV, 0x79517350u);
      return 0;
    case ProcessWakeInformation:
      if ( v8 )
        return -1073741790;
      if ( ProcessInformationLength != 48 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 0,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v90 = Object;
      DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel(CurrentThread, Object, v6);
      if ( DeviceMapInformation >= 0 && ReturnLength )
        *ReturnLength = 48;
      goto LABEL_357;
    case ProcessEnergyTrackingState:
      if ( ProcessInformationLength < 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v131 = Object;
        PoQueryProcessEnergyTrackingState(Object, v227);
        v132 = 144;
        if ( (unsigned int)v5 < 0x90 )
          v132 = v5;
        memmove(v6, v227, v132);
        if ( ReturnLength )
          *ReturnLength = v132;
        v141 = 0;
        ObfDereferenceObjectWithTag(v131, 0x79517350u);
        return 0;
      }
      return result;
    case ProcessCaptureTrustletLiveDump:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1048,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v73 = Object;
      if ( *((_QWORD *)Object + 90) )
      {
        v226 = *((_QWORD *)Object + 90);
        v72 = VslpEnterIumSecureMode(2u, 53LL, 0, (__int64)v225);
LABEL_600:
        ObfDereferenceObjectWithTag(v73, 0x79517350u);
        return v72;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
    case ProcessTelemetryCoverage:
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessTelemetryCoverage = EtwQueryProcessTelemetryCoverage(Object, v6, (unsigned int)v5, ReturnLength);
LABEL_144:
      ExecuteOptions = ProcessTelemetryCoverage;
      v41 = Object;
      goto LABEL_145;
    case ProcessEnableReadWriteVmLogging:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      LOBYTE(v6->Name.Length) = HIBYTE(*((_DWORD *)Object + 192)) & 3;
LABEL_145:
      ObfDereferenceObjectWithTag(v41, 0x79517350u);
      return ExecuteOptions;
    case ProcessUptimeInformation:
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v8,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      v141 = result;
      if ( result < 0 )
        return result;
      v177 = 0LL;
      v178 = 0LL;
      v179 = 0LL;
      v180 = 0LL;
      v181 = 0LL;
      v182 = 0LL;
      v183 = 0LL;
      --CurrentThread->KernelApcDisable;
      v135 = Object;
      ExAcquirePushLockSharedEx((ULONG_PTR)Object + 728, 0LL);
      v136 = v135[239] >> 61;
      if ( (unsigned __int64)(v136 - 3) <= 1
        && (v181 = v135[239] & 0x1FFFFFFFFFFFFFFFLL, v179 = v135[238], v180 = v179 - v135[235], v136 == 3) )
      {
        v137 = v183 | 0x200;
      }
      else
      {
        v137 = v183;
      }
      v138 = v137 & 0xFFFFFF00 | *((unsigned __int8 *)v135 + 1739);
      LODWORD(v183) = ((unsigned __int16)v138 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v135 + 435) << 6)) & 0x100 ^ v138;
      if ( _InterlockedCompareExchange64(v135 + 91, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v135 + 91);
      KeAbPostRelease((ULONG_PTR)(v135 + 91));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v122 = Object;
      PsGetProcessDeepFreezeStats(Object, &v197);
      v177 = v197;
      v178 = v198;
      v182 = v199;
      if ( !v180 )
        v180 = v197 - v122[235];
      if ( !v181 )
        v181 = v198 - v122[236] - v199;
      v139 = 56;
      if ( (unsigned int)v5 < 0x38 )
        v139 = v5;
      memmove(v6, &v177, v139);
      if ( ReturnLength )
        *ReturnLength = v139;
      v141 = 0;
      goto LABEL_541;
    case ProcessImageSection:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( v8 )
      {
        v133 = (__int64)ProcessInformation;
        if ( (unsigned __int64)ProcessInformation >= 0x7FFFFFFF0000LL )
          v133 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v133 = *(_QWORD *)v133;
      }
      v134 = KeGetCurrentThread()->ApcState.Process;
      if ( ProcessHandle != (HANDLE)-1LL || v134 != CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer((PVOID)v134[1].Affinity.Bitmap[17], 0, 0LL, 5u, MmSectionObjectType, v8, &v188);
      if ( result >= 0 )
      {
        *(_QWORD *)&v6->Name.Length = v188;
        if ( ReturnLength )
          *ReturnLength = 8;
      }
      return result;
    default:
      return -1073741821;
  }
  switch ( v100 )
  {
    case 1:
      v141 = 0;
      *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
      v101 = Object;
      if ( (*((_DWORD *)Object + 522) & 0x40) == 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
      if ( (v101[522] & 0x10) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
      if ( (v101[522] & 0x20) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
      if ( (v101[522] & 8) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 8u;
      break;
    case 2:
      v141 = 0;
      *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
      v104 = Object;
      v105 = *((_DWORD *)Object + 522);
      if ( (v105 & 0x100) != 0 )
      {
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
      }
      else if ( (v105 & 0x800) != 0 )
      {
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 8u;
      }
      if ( (v104[522] & 0x200) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
      if ( (v104[522] & 0x400) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
      break;
    case 3:
      v141 = 0;
      v102 = ObReferenceProcessHandleTable(Object);
      if ( v102 )
      {
        ExQueryHandleExceptionsPermanency(v102, v147, (bool *)&v143);
        *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
        if ( v147[0] )
          *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
        if ( (_BYTE)v143 )
          *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 95);
      }
      else
      {
        v141 = -1073741558;
      }
      break;
    case 4:
      v141 = 0;
      *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
      v103 = *((_DWORD *)Object + 522);
      if ( (v103 & 0x1000) != 0 )
      {
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
      }
      else if ( (v103 & 0x2000) != 0 )
      {
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
      }
      break;
    case 6:
      v141 = 0;
      *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
      if ( (*((_DWORD *)Object + 522) & 0x80u) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
      break;
    case 7:
      v141 = 0;
      *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
      v106 = Object;
      if ( (*((_DWORD *)Object + 522) & 1) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
      if ( (v106[522] & 2) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
      if ( (v106[522] & 4) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
      break;
    case 8:
      v141 = 0;
      PsQueryProcessSignatureMitigationPolicy(Object, &v166, 0x140000000uLL);
      *(_DWORD *)(&v6->Name.MaximumLength + 1) = v166;
      break;
    case 9:
      v141 = 0;
      *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
      v107 = *((_DWORD *)Object + 522);
      if ( (v107 & 0x10000) != 0 )
      {
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
      }
      else if ( (v107 & 0x20000) != 0 )
      {
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
      }
      break;
    case 10:
      v141 = 0;
      *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
      v108 = Object;
      v109 = *((_DWORD *)Object + 522);
      if ( (v109 & 0x80000) != 0 )
      {
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
      }
      else if ( (v109 & 0x100000) != 0 )
      {
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 8u;
      }
      v110 = v108[522];
      if ( (v110 & 0x200000) != 0 )
      {
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
      }
      else if ( (v110 & 0x400000) != 0 )
      {
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 0x10u;
      }
      if ( (v108[522] & 0x40000) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
      break;
    case 11:
      v141 = 0;
      *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
      *(_DWORD *)(&v6->Name.MaximumLength + 1) = PsGetWin32KFilterSet() & 0xF | *(_DWORD *)(&v6->Name.MaximumLength + 1) & 0xFFFFFFF0;
      break;
    case 12:
      v141 = 0;
      *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
      v111 = Object;
      if ( (*((_DWORD *)Object + 523) & 1) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
      if ( (v111[523] & 4) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
      if ( (v111[523] & 0x400) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 0x10u;
      if ( (v111[523] & 0x10) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 0x40u;
      if ( (v111[523] & 0x40) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 0x100u;
      if ( (v111[523] & 0x100) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 0x400u;
      if ( (v111[523] & 2) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
      if ( (v111[523] & 8) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 8u;
      if ( (v111[523] & 0x800) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 0x20u;
      if ( (v111[523] & 0x20) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 0x80u;
      if ( (v111[523] & 0x80u) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 0x200u;
      if ( (v111[523] & 0x200) != 0 )
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 0x800u;
      break;
    case 13:
      v141 = 0;
      *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
      v192 = PspGetNoChildProcessRestrictedPolicy(Object);
      if ( v192 != 1 )
      {
        if ( v192 != 2 )
        {
          if ( v192 == 3 )
            *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
          break;
        }
        *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
      }
      *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
      break;
    default:
      v141 = -1073741637;
      break;
  }
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
  return v141;
}
