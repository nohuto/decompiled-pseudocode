/*
 * XREFs of NtQueryInformationProcess @ 0x1404F9480
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MmGetSessionId @ 0x14003F520 (MmGetSessionId.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     PsGetWin32KFilterSet @ 0x14006CEC0 (PsGetWin32KFilterSet.c)
 *     MmQueryWorkingSetInformation @ 0x14006CEF8 (MmQueryWorkingSetInformation.c)
 *     KeQueryGroupMaskProcess @ 0x14006CFCC (KeQueryGroupMaskProcess.c)
 *     KeQueryAffinityProcess @ 0x14006D000 (KeQueryAffinityProcess.c)
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     ExReleaseExtensionTable @ 0x14009C108 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14009C120 (ExGetExtensionTable.c)
 *     ExUnlockUserBuffer @ 0x1400B9118 (ExUnlockUserBuffer.c)
 *     MmQueryCommitReleaseState @ 0x1400C6588 (MmQueryCommitReleaseState.c)
 *     PsQueryProcessCommandLine @ 0x1400CF920 (PsQueryProcessCommandLine.c)
 *     ExQueryHandleExceptionsPermanency @ 0x1400D182C (ExQueryHandleExceptionsPermanency.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     KeQuerySystemTimePrecise @ 0x140132A60 (KeQuerySystemTimePrecise.c)
 *     xKdEnumerateDebuggingDevices @ 0x1401873E0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x1401A9D00 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x140246800 (KeQueryCpuSetsProcess.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PsQueryTotalCycleTimeProcess @ 0x14048B3B0 (PsQueryTotalCycleTimeProcess.c)
 *     ExIsRestrictedCaller @ 0x14048C09C (ExIsRestrictedCaller.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     ObReferenceProcessHandleTable @ 0x1404B7304 (ObReferenceProcessHandleTable.c)
 *     PsQueryProcessEnergyValues @ 0x1404CE830 (PsQueryProcessEnergyValues.c)
 *     IoQueryFileDosDeviceName @ 0x1404F8E90 (IoQueryFileDosDeviceName.c)
 *     PsQueryProcessAttributes @ 0x1404F8F34 (PsQueryProcessAttributes.c)
 *     PspQueryQuotaLimits @ 0x1404F8FFC (PspQueryQuotaLimits.c)
 *     MmGetSectionInformation @ 0x1404F91C0 (MmGetSectionInformation.c)
 *     PsQueryFullProcessImageName @ 0x1404F93F4 (PsQueryFullProcessImageName.c)
 *     PsQueryRuntimeProcess @ 0x1404FCEA0 (PsQueryRuntimeProcess.c)
 *     ObQueryDeviceMapInformation @ 0x1404FCF70 (ObQueryDeviceMapInformation.c)
 *     PsGetProcessDeepFreezeStats @ 0x140538DD4 (PsGetProcessDeepFreezeStats.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140541BF4 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     ExEnumHandleTable @ 0x14054B830 (ExEnumHandleTable.c)
 *     ExLockUserBuffer @ 0x14055FA68 (ExLockUserBuffer.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140561188 (EtwQueryProcessTelemetryInfo.c)
 *     PsReferenceProcessFilePointer @ 0x140562A40 (PsReferenceProcessFilePointer.c)
 *     ObGetProcessHandleCount @ 0x14056588C (ObGetProcessHandleCount.c)
 *     KeGetExecuteOptions @ 0x1405757A4 (KeGetExecuteOptions.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x140581720 (PsQueryProcessSignatureMitigationPolicy.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     MmCopyVirtualMemory @ 0x14059CD40 (MmCopyVirtualMemory.c)
 *     PsQueryStatisticsProcess @ 0x1405A1840 (PsQueryStatisticsProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     ExSystemExceptionFilter @ 0x1405BCA80 (ExSystemExceptionFilter.c)
 *     ExQueryProcessHandleInformation @ 0x1405C0B08 (ExQueryProcessHandleInformation.c)
 *     ExReferenceHandleDebugInfo @ 0x1405C40B4 (ExReferenceHandleDebugInfo.c)
 *     DbgkOpenProcessDebugPort @ 0x14070E0B8 (DbgkOpenProcessDebugPort.c)
 *     VslGetSecurePebAddress @ 0x140718954 (VslGetSecurePebAddress.c)
 *     PoQueryProcessEnergyTrackingState @ 0x14076C5A4 (PoQueryProcessEnergyTrackingState.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x14077A2D4 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspQueryPooledQuotaLimits @ 0x14077A8A4 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x14077AA34 (PspQueryWorkingSetWatch.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x14077E674 (PsIumGetOnDemandDebugChallenge.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x1407A69D0 (EtwQueryProcessTelemetryCoverage.c)
 *     ExDereferenceHandleDebugInfo @ 0x1407BD294 (ExDereferenceHandleDebugInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  size_t v5; // r13
  char *v6; // rsi
  unsigned __int8 v8; // bl
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v10; // rcx
  unsigned int *v11; // r14
  unsigned int v12; // eax
  __int64 v13; // rcx
  NTSTATUS result; // eax
  unsigned int v15; // ecx
  char *v16; // rdx
  NTSTATUS DeviceMapInformation; // edi
  struct _EX_RUNDOWN_REF *v18; // rbx
  struct _FILE_OBJECT *v19; // r12
  int ExecuteOptions; // ebx
  POBJECT_NAME_INFORMATION v21; // rdi
  ULONG v22; // r12d
  unsigned __int16 MaximumLength; // ax
  _DWORD *v24; // rdi
  unsigned int v25; // eax
  int v26; // r13d
  char *v27; // rbx
  __int64 v28; // rdx
  PVOID *v29; // r12
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int16 v33; // cx
  _DWORD *v34; // r8
  unsigned int v35; // edx
  int v36; // ebx
  _QWORD *v37; // rbx
  struct _EX_RUNDOWN_REF *v38; // rbx
  unsigned int v39; // eax
  __int64 v40; // rcx
  _DWORD *v41; // rcx
  HANDLE v42; // rdx
  int ProcessHandleCount; // edi
  int ProcessTelemetryCoverage; // eax
  int v45; // ebx
  int v46; // ebx
  unsigned int v47; // edi
  int SessionId; // ebx
  __int64 v49; // rdx
  __int16 v50; // r8
  int v51; // ebx
  char *v52; // r13
  NTSTATUS v53; // edi
  void *v54; // rax
  void *v55; // r12
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // rdx
  _OWORD *v59; // rax
  __int64 v60; // r9
  int v61; // eax
  PVOID v62; // rbx
  int v63; // edi
  void *Process; // r10
  void *v65; // r10
  volatile signed __int32 *v66; // rax
  int v67; // ecx
  int v68; // ecx
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v71; // ecx
  unsigned __int64 v72; // rax
  struct _EX_RUNDOWN_REF *v73; // r13
  void *Ptr; // r12
  NTSTATUS v75; // ebx
  PVOID v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rax
  ULONG_PTR v79; // rdi
  NTSTATUS ProcessHandleInformation; // edi
  PVOID v81; // rcx
  __int64 v82; // rsi
  PVOID v83; // rbx
  __int64 v84; // rdi
  NTSTATUS v85; // r12d
  int v86; // ecx
  __int64 v87; // rdx
  __int64 v88; // rcx
  unsigned int v89; // eax
  void *v90; // r8
  unsigned int v91; // edx
  ULONG v92; // ecx
  NTSTATUS v93; // ebx
  __int64 v94; // rbx
  _KPROCESS *v95; // rbx
  unsigned __int64 v96; // rcx
  __int16 v97; // dx
  unsigned __int16 v98; // r14
  __int64 v99; // rax
  __int64 v100; // rcx
  ULONG v101; // eax
  struct _EX_RUNDOWN_REF *v102; // rbx
  unsigned __int64 v103; // rax
  int v104; // edi
  _DWORD *v105; // rcx
  int v106; // eax
  unsigned __int64 v107; // rax
  int v108; // ecx
  int v109; // eax
  _DWORD *v110; // rcx
  int v111; // eax
  int v112; // eax
  int v113; // eax
  _DWORD *v114; // rcx
  int v115; // eax
  int v116; // ecx
  int v117; // eax
  _DWORD *v118; // rcx
  int v119; // eax
  int v120; // eax
  int v121; // eax
  int v122; // eax
  _DWORD *v123; // rcx
  int v124; // eax
  int v125; // eax
  unsigned __int64 v126; // rax
  NTSTATUS v127; // ebx
  struct _EX_RUNDOWN_REF *v128; // rbx
  unsigned __int64 v129; // rax
  char v130; // r9
  PVOID v131; // rbx
  NTSTATUS ProcessCommandLine; // eax
  unsigned __int64 v133; // rax
  unsigned int v134; // r8d
  NTSTATUS v135; // r12d
  ULONG v136; // ebx
  _QWORD *v137; // rbx
  int NoChildProcessRestrictedPolicy; // eax
  int v139; // eax
  int v140; // eax
  unsigned __int64 ExtensionTable; // rdi
  NTSTATUS v142; // ebx
  __int64 (__fastcall *v143)(PVOID, __int64 *); // rax
  PVOID v144; // rdi
  _DWORD *p_LockNV; // rcx
  int v146; // edx
  int v147; // eax
  PVOID v148; // rdi
  ULONG v149; // ebx
  __int64 v150; // rcx
  _KPROCESS *v151; // rcx
  _QWORD *v152; // rbx
  __int64 v153; // rdx
  int v154; // ecx
  ULONG v155; // edi
  PVOID Object; // [rsp+40h] [rbp-9D8h] BYREF
  NTSTATUS v157; // [rsp+48h] [rbp-9D0h]
  unsigned __int8 v158; // [rsp+4Ch] [rbp-9CCh]
  __int16 v159; // [rsp+50h] [rbp-9C8h] BYREF
  unsigned int v160; // [rsp+54h] [rbp-9C4h] BYREF
  unsigned int GroupMaskProcess; // [rsp+58h] [rbp-9C0h] BYREF
  HANDLE v162; // [rsp+60h] [rbp-9B8h]
  char v163; // [rsp+68h] [rbp-9B0h] BYREF
  char v164[3]; // [rsp+69h] [rbp-9AFh] BYREF
  unsigned int v165; // [rsp+6Ch] [rbp-9ACh]
  PVOID v166; // [rsp+70h] [rbp-9A8h] BYREF
  volatile signed __int32 *p_Lock; // [rsp+78h] [rbp-9A0h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+80h] [rbp-998h] BYREF
  int v169; // [rsp+88h] [rbp-990h]
  __int64 v170; // [rsp+90h] [rbp-988h]
  HANDLE Handle; // [rsp+98h] [rbp-980h] BYREF
  int v172; // [rsp+A0h] [rbp-978h]
  __int128 v173; // [rsp+B0h] [rbp-968h]
  __int64 v174; // [rsp+C0h] [rbp-958h]
  PVOID P; // [rsp+C8h] [rbp-950h] BYREF
  __int128 v176; // [rsp+D0h] [rbp-948h] BYREF
  __int64 v177[2]; // [rsp+E0h] [rbp-938h] BYREF
  unsigned int v178; // [rsp+F0h] [rbp-928h] BYREF
  _DWORD v179[2]; // [rsp+F4h] [rbp-924h] BYREF
  int v180; // [rsp+FCh] [rbp-91Ch] BYREF
  int v181; // [rsp+100h] [rbp-918h] BYREF
  int v182; // [rsp+104h] [rbp-914h]
  ULONG v183; // [rsp+108h] [rbp-910h]
  __int64 v184; // [rsp+110h] [rbp-908h]
  PULONG v185; // [rsp+118h] [rbp-900h]
  PVOID v186; // [rsp+120h] [rbp-8F8h]
  int v187; // [rsp+128h] [rbp-8F0h] BYREF
  __int128 v188; // [rsp+130h] [rbp-8E8h]
  __int128 v189; // [rsp+140h] [rbp-8D8h]
  __int128 v190; // [rsp+150h] [rbp-8C8h]
  __int64 v191; // [rsp+160h] [rbp-8B8h] BYREF
  __int64 v192; // [rsp+168h] [rbp-8B0h]
  LARGE_INTEGER v193; // [rsp+170h] [rbp-8A8h] BYREF
  __int64 v194; // [rsp+178h] [rbp-8A0h] BYREF
  __int64 v195; // [rsp+180h] [rbp-898h]
  __int64 v196; // [rsp+188h] [rbp-890h]
  __int64 v197; // [rsp+190h] [rbp-888h]
  __int64 v198; // [rsp+198h] [rbp-880h]
  __int64 v199; // [rsp+1A0h] [rbp-878h]
  __int64 v200; // [rsp+1A8h] [rbp-870h]
  PVOID v201; // [rsp+1B0h] [rbp-868h] BYREF
  __int64 v202; // [rsp+1B8h] [rbp-860h]
  PVOID v203; // [rsp+1C0h] [rbp-858h] BYREF
  __int64 v204; // [rsp+1C8h] [rbp-850h] BYREF
  HANDLE v205; // [rsp+1D0h] [rbp-848h] BYREF
  __int64 v206; // [rsp+1D8h] [rbp-840h] BYREF
  _DWORD v207[2]; // [rsp+1E0h] [rbp-838h] BYREF
  int v208; // [rsp+1E8h] [rbp-830h]
  PVOID v209; // [rsp+1F0h] [rbp-828h] BYREF
  __int64 v210; // [rsp+1F8h] [rbp-820h] BYREF
  __int128 v211; // [rsp+200h] [rbp-818h]
  _QWORD Src[14]; // [rsp+210h] [rbp-808h] BYREF
  _QWORD v213[3]; // [rsp+280h] [rbp-798h] BYREF
  __int64 v214; // [rsp+298h] [rbp-780h] BYREF
  __int64 v215; // [rsp+2A0h] [rbp-778h]
  __int64 v216; // [rsp+2A8h] [rbp-770h]
  char *v217; // [rsp+2B8h] [rbp-760h]
  __int64 v218; // [rsp+2C0h] [rbp-758h] BYREF
  char v219[40]; // [rsp+2D0h] [rbp-748h] BYREF
  __int128 v220; // [rsp+2F8h] [rbp-720h]
  __int128 v221; // [rsp+308h] [rbp-710h]
  __int128 v222; // [rsp+318h] [rbp-700h]
  __int128 v223; // [rsp+330h] [rbp-6E8h]
  __int128 v224; // [rsp+340h] [rbp-6D8h]
  __int128 v225; // [rsp+350h] [rbp-6C8h]
  __int128 v226; // [rsp+360h] [rbp-6B8h]
  __int128 v227; // [rsp+370h] [rbp-6A8h]
  __int128 v228; // [rsp+380h] [rbp-698h]
  __int128 v229; // [rsp+390h] [rbp-688h]
  __int128 v230; // [rsp+3A0h] [rbp-678h]
  __int128 v231; // [rsp+3B0h] [rbp-668h]
  __int128 v232; // [rsp+3C0h] [rbp-658h]
  char v233; // [rsp+3D0h] [rbp-648h] BYREF
  __int64 v234; // [rsp+3E0h] [rbp-638h] BYREF
  int v235; // [rsp+3E8h] [rbp-630h]
  _QWORD JobInformation[5]; // [rsp+3F0h] [rbp-628h] BYREF
  _BYTE v237[48]; // [rsp+418h] [rbp-600h] BYREF
  _BYTE v238[56]; // [rsp+448h] [rbp-5D0h] BYREF
  char v239[16]; // [rsp+480h] [rbp-598h] BYREF
  int v240; // [rsp+490h] [rbp-588h]
  __int64 v241; // [rsp+4F8h] [rbp-520h]
  __int64 v242; // [rsp+510h] [rbp-508h]
  char v243[8]; // [rsp+520h] [rbp-4F8h] BYREF
  __int64 v244; // [rsp+528h] [rbp-4F0h]
  _BYTE v245[144]; // [rsp+590h] [rbp-488h] BYREF
  _OWORD v246[11]; // [rsp+620h] [rbp-3F8h] BYREF
  _OWORD v247[11]; // [rsp+6D0h] [rbp-348h] BYREF
  _OWORD v248[27]; // [rsp+780h] [rbp-298h] BYREF
  _QWORD v249[20]; // [rsp+930h] [rbp-E8h] BYREF

  v5 = ProcessInformationLength;
  v6 = (char *)ProcessInformation;
  LODWORD(v170) = ProcessInformationClass;
  v162 = ProcessHandle;
  v186 = ProcessInformation;
  v183 = ProcessInformationLength;
  v185 = ReturnLength;
  v8 = KeGetCurrentThread()->gap0[10];
  v158 = v8;
  CurrentThread = KeGetCurrentThread();
  p_Lock = &CurrentThread->Header.Lock;
  if ( v8 )
  {
    if ( ProcessInformationClass != ProcessProtectionInformation )
    {
      if ( ProcessInformationClass == ProcessCommitReleaseInformation )
      {
        v10 = 7LL;
        v11 = 0LL;
LABEL_10:
        if ( ProcessInformationLength )
        {
          if ( (v10 & (unsigned __int64)ProcessInformation) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)ProcessInformation + ProcessInformationLength > 0x7FFFFFFF0000LL
            || (char *)ProcessInformation + ProcessInformationLength < ProcessInformation )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        if ( ReturnLength )
        {
          v13 = (__int64)ReturnLength;
          if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
            v13 = 0x7FFFFFFF0000LL;
          *(_DWORD *)v13 = *(_DWORD *)v13;
        }
        goto LABEL_21;
      }
      if ( ((ProcessInformationClass - 70) & 0xFFFFFFFB) != 0 )
      {
        v12 = 3;
        if ( ProcessInformationClass == ProcessSequenceNumber )
          v12 = 7;
        v10 = v12;
        v11 = 0LL;
        goto LABEL_10;
      }
    }
    v11 = 0LL;
    v10 = 0LL;
    goto LABEL_10;
  }
  v11 = 0LL;
LABEL_21:
  switch ( ProcessInformationClass )
  {
    case ProcessBasicInformation:
      if ( ProcessInformationLength == 64 )
      {
        v24 = ProcessInformation;
        v166 = ProcessInformation;
        v25 = 64;
        v170 = 64LL;
        *(_QWORD *)ProcessInformation = 64LL;
        v6 = (char *)ProcessInformation + 8;
      }
      else
      {
        if ( ProcessInformationLength != 48 )
          return -1073741820;
        v24 = 0LL;
        v166 = 0LL;
        v25 = 48;
        v170 = 48LL;
      }
      v160 = v25;
      ObjectNameInformation = (POBJECT_NAME_INFORMATION)v6;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v26 = result;
      v157 = result;
      if ( result < 0 )
        return result;
      v27 = (char *)Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 393);
      *((_QWORD *)v6 + 1) = *((_QWORD *)v27 + 127);
      if ( (v27[720] & 1) != 0 )
        VslGetSecurePebAddress(v27);
      if ( v26 < 0 )
        goto LABEL_61;
      GroupMaskProcess = KeQueryGroupMaskProcess((__int64)v27);
      v29 = (PVOID *)p_Lock;
      if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 && v27 != *((char **)p_Lock + 68) )
        goto LABEL_71;
      KeQueryAffinityProcess((__int64)v27, v246, (int *)&GroupMaskProcess, 0LL);
      v30 = GroupMaskProcess;
      if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 )
      {
        if ( v27 != v29[68] )
          goto LABEL_70;
        v31 = *((unsigned __int16 *)v29 + 280);
        if ( !_bittest64(&v30, v31) )
          goto LABEL_70;
      }
      else
      {
        _BitScanForward((unsigned int *)&v31, GroupMaskProcess);
      }
      if ( (_DWORD)v31 != 20 )
      {
        v28 = *((_QWORD *)v246 + v31 + 1);
        goto LABEL_71;
      }
LABEL_70:
      v28 = 0LL;
LABEL_71:
      *((_QWORD *)v6 + 2) = v28;
      *((_DWORD *)v6 + 6) = v27[444];
      *((_QWORD *)v6 + 4) = *((_QWORD *)v27 + 92);
      *((_QWORD *)v6 + 5) = *((_QWORD *)v27 + 124);
      if ( v24 )
      {
        v24[14] = 0;
        if ( (v27[1738] & 7) != 0 )
        {
          v24[14] = 1;
          LODWORD(v11) = 1;
        }
        v32 = *((_QWORD *)v27 + 133);
        if ( v32 )
        {
          v33 = *(_WORD *)(v32 + 8);
          if ( v33 == 332 || v33 == 452 )
            v24[14] = (unsigned int)v11 | 2;
        }
        v34 = v27 + 772;
        if ( (*((_DWORD *)v27 + 193) & 0x40000008) != 0 )
          v24[14] |= 4u;
        v27 = (char *)Object;
        v35 = v24[14] & 0xFFFFFFF7 | ((*((_DWORD *)Object + 192) & 0x80) != 0 ? 8 : 0);
        v24[14] = v35;
        if ( *((_DWORD *)v27 + 154) + ((*((_DWORD *)v27 + 110) >> 3) & 1) )
        {
          v35 |= 0x10u;
          v24[14] = v35;
        }
        v24[14] = v35 & 0xFFFFFFDF | ((*v34 & 0x100000) != 0 ? 0x20 : 0);
        PsQueryProcessAttributes((struct _KPROCESS *)v27, (__int64)&v163, 0LL);
        if ( v163 )
          v24[14] |= 0x40u;
        if ( (v27[720] & 1) != 0 )
          v24[14] |= 0x80u;
        if ( *((_QWORD *)v27 + 226) )
          v24[14] |= 0x100u;
        v26 = v157;
      }
      if ( ReturnLength )
        *ReturnLength = v170;
LABEL_61:
      ObfDereferenceObjectWithTag(v27, 0x79517350u);
      return v26;
    case ProcessQuotaLimits:
      return PspQueryQuotaLimits(
               (ULONG_PTR)ProcessHandle,
               0x7FFFFFFF0000LL,
               ProcessInformation,
               ProcessInformationLength,
               ReturnLength);
    case ProcessIoCounters:
      if ( ProcessInformationLength != 48 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        PsQueryStatisticsProcess(Object, v219);
        v188 = v220;
        v189 = v221;
        v190 = v222;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_OWORD *)v6 = v188;
        *((_OWORD *)v6 + 1) = v189;
        *((_OWORD *)v6 + 2) = v190;
        if ( ReturnLength )
          *ReturnLength = 48;
        return DeviceMapInformation;
      }
      return result;
    case ProcessVmCounters:
      if ( ((ProcessInformationLength - 88) & 0xFFFFFFE7) != 0 || ProcessInformationLength == 104 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        memset(Src, 0, sizeof(Src));
        v37 = Object;
        Src[0] = *((_QWORD *)Object + 102);
        Src[1] = *((_QWORD *)Object + 103);
        LODWORD(Src[2]) = *((_DWORD *)Object + 321);
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v237);
        v157 = MmQueryWorkingSetInformation(&Src[3], &Src[4], &Src[12], v213, &v218, v207);
        KiUnstackDetachProcess((__int64)v237, 0LL);
        Src[6] = v37[99];
        Src[5] = *((_QWORD *)Object + 101);
        Src[8] = *((_QWORD *)Object + 98);
        Src[7] = *((_QWORD *)Object + 100);
        Src[9] = *((_QWORD *)Object + 158) << 12;
        Src[10] = *((_QWORD *)Object + 159) << 12;
        Src[13] = *((_QWORD *)Object + 240) << 12;
        Src[11] = Src[9];
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        result = v157;
        if ( v157 >= 0 )
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
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v38 = (struct _EX_RUNDOWN_REF *)Object;
        v39 = PsQueryRuntimeProcess(Object, &v178);
        v40 = KeMaximumIncrement;
        *((_QWORD *)v6 + 2) = KeMaximumIncrement * (unsigned __int64)v39;
        *((_QWORD *)v6 + 3) = v40 * v178;
        *(struct _EX_RUNDOWN_REF *)v6 = v38[97];
        *((struct _EX_RUNDOWN_REF *)v6 + 1) = v38[210];
        if ( ReturnLength )
          *ReturnLength = 32;
        goto LABEL_219;
      }
      return result;
    case ProcessDebugPort:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        Handle = (HANDLE)((unsigned __int128)-(__int128)*((unsigned __int64 *)Object + 132) >> 64);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)v6 = Handle;
        if ( ReturnLength )
          *ReturnLength = 8;
        return 0;
      }
      return result;
    case ProcessLdtInformation:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        ProcessTelemetryCoverage = xKdEnumerateDebuggingDevices();
        goto LABEL_148;
      }
      return result;
    case ProcessDefaultHardErrorMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v36 = *((_DWORD *)Object + 296);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v36;
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
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        LOBYTE(v159) = 0;
        HIBYTE(v159) = *((_BYTE *)Object + 1119);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_WORD *)v6 = v159;
        if ( ReturnLength )
          *ReturnLength = 2;
        return 0;
      }
      return result;
    case ProcessWx86Information:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v45 = *((_BYTE *)Object + 775) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v45;
        if ( ReturnLength )
          *ReturnLength = 4;
        return DeviceMapInformation;
      }
      return result;
    case ProcessHandleCount:
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        ProcessHandleCount = ObGetProcessHandleCount(Object, v179);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = ProcessHandleCount;
        if ( (_DWORD)v5 != 4 )
          *((_DWORD *)v6 + 1) = v179[0];
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
      return result;
    case ProcessAffinityMask:
      if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v38 = (struct _EX_RUNDOWN_REF *)Object;
        GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
        if ( ((GroupMaskProcess - 1) & GroupMaskProcess) == 0 )
        {
          KeQueryAffinityProcess((__int64)v38, v247, (int *)&GroupMaskProcess, 0LL);
          if ( ((GroupMaskProcess - 1) & GroupMaskProcess) == 0 )
          {
            _BitScanForward((unsigned int *)&v87, GroupMaskProcess);
            v88 = *((_QWORD *)v247 + v87 + 1);
            if ( (_DWORD)v5 == 16 )
              *((_WORD *)v6 + 4) = v87;
            *(_QWORD *)v6 = v88;
            if ( ReturnLength )
              *ReturnLength = v5;
            goto LABEL_219;
          }
        }
        ObfDereferenceObjectWithTag(v38, 0x79517350u);
        return -1073741811;
      }
      return result;
    case ProcessPriorityBoost:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v46 = (*((_DWORD *)Object + 110) >> 1) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v46;
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
        v165 = *((_DWORD *)ProcessInformation + 10);
        v47 = v165;
        if ( (v165 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( ProcessInformationLength != 36 )
          return -1073741820;
        v47 = 0;
      }
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        DeviceMapInformation = ObQueryDeviceMapInformation(Object, v6, v47);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( DeviceMapInformation >= 0 && ReturnLength )
          *ReturnLength = v5;
        return DeviceMapInformation;
      }
      return result;
    case ProcessSessionInformation:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        SessionId = MmGetSessionId((__int64)Object);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = SessionId;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
      return result;
    case ProcessWow64Information:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v49 = *((_QWORD *)Object + 133);
        if ( v49 )
        {
          v50 = *(_WORD *)(v49 + 8);
          if ( v50 == 332 || v50 == 452 )
            v11 = *(unsigned int **)v49;
        }
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)v6 = v11;
        if ( ReturnLength )
          *ReturnLength = 8;
        return 0;
      }
      return result;
    case ProcessImageFileName:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v15 = 0;
        if ( (unsigned int)v5 >= 0x10 )
        {
          v15 = v5 - 16;
          v11 = (unsigned int *)(v6 + 16);
        }
        v160 = v15;
        v16 = &v233;
        if ( (unsigned int)v5 >= 0x10 )
          v16 = v6;
        DeviceMapInformation = PsQueryFullProcessImageName((__int64)Object, v16, v11, &v160);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( DeviceMapInformation >= 0 && !v11 )
          DeviceMapInformation = -1073741820;
        if ( ReturnLength && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
          *ReturnLength = v160 + 16;
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
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v51 = (*((_DWORD *)Object + 193) >> 13) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v51;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessDebugObjectHandle:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = DbgkOpenProcessDebugPort(Object, v8, &Handle);
      v42 = Handle;
      if ( DeviceMapInformation < 0 )
        v42 = 0LL;
      Handle = v42;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = Handle;
      if ( ReturnLength )
        *ReturnLength = 8;
      return DeviceMapInformation;
    case ProcessDebugFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 193) & 2) == 0;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_149;
    case ProcessHandleTracing:
      if ( ProcessInformationLength < 0x10 )
        return -1073741820;
      if ( ExIsRestrictedCaller(v8) )
        return -1073741790;
      ObjectNameInformation = (POBJECT_NAME_INFORMATION)((unsigned int)(v5 - 16) / 0xA0uLL);
      v52 = v6 + 16;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v53 = result;
      if ( result < 0 )
        return result;
      v38 = (struct _EX_RUNDOWN_REF *)Object;
      v54 = (void *)ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      v55 = v54;
      P = v54;
      if ( !v54 )
        goto LABEL_218;
      v56 = ExReferenceHandleDebugInfo(v54);
      v57 = v56;
      v174 = v56;
      if ( !v56 )
      {
        v63 = -1073741811;
        goto LABEL_359;
      }
      *((_DWORD *)v6 + 2) = 0;
      v58 = (unsigned int)(*(_DWORD *)(v56 + 72) % *(_DWORD *)(v56 + 4));
      v172 = v58;
      while ( 1 )
      {
        v179[1] = (_DWORD)v11;
        if ( (unsigned int)v11 >= *(_DWORD *)(v57 + 4) )
          break;
        v59 = (_OWORD *)(v57 + 160 * v58);
        v223 = v59[5];
        v224 = v59[6];
        v225 = v59[7];
        v226 = v59[8];
        v227 = v59[9];
        v228 = v59[10];
        v229 = v59[11];
        v230 = v59[12];
        v231 = v59[13];
        v232 = v59[14];
        v60 = v224;
        if ( *(_QWORD *)v6 == (_QWORD)v224 || !*(_QWORD *)v6 )
        {
          v61 = DWORD2(v224);
          if ( DWORD2(v224) )
          {
            ++*((_DWORD *)v6 + 2);
            if ( (_DWORD)ObjectNameInformation )
            {
              ObjectNameInformation = (POBJECT_NAME_INFORMATION)(unsigned int)((_DWORD)ObjectNameInformation - 1);
              v207[1] = (_DWORD)ObjectNameInformation;
              *(_QWORD *)v52 = v60;
              *(_OWORD *)(v52 + 8) = v223;
              *((_DWORD *)v52 + 6) = v61;
              *((_OWORD *)v52 + 2) = v225;
              *((_OWORD *)v52 + 3) = v226;
              *((_OWORD *)v52 + 4) = v227;
              *((_OWORD *)v52 + 5) = v228;
              *((_OWORD *)v52 + 6) = v229;
              *((_OWORD *)v52 + 7) = v230;
              *((_OWORD *)v52 + 8) = v231;
              *((_OWORD *)v52 + 9) = v232;
              v52 += 160;
              v213[1] = v52;
            }
            else
            {
              v53 = -1073741820;
              v157 = -1073741820;
            }
          }
        }
        if ( !(_DWORD)v58 )
          LODWORD(v58) = *(_DWORD *)(v57 + 4);
        v58 = (unsigned int)(v58 - 1);
        v172 = v58;
        LODWORD(v11) = (_DWORD)v11 + 1;
      }
      if ( ReturnLength )
        *ReturnLength = (_DWORD)v52 - (_DWORD)v6;
      ExDereferenceHandleDebugInfo(v55, v57);
      v62 = Object;
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 95);
      ObfDereferenceObjectWithTag(v62, 0x79517350u);
      return v53;
    case ProcessIoPriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      v157 = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 193) >> 27) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_149;
    case ProcessExecuteFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
        Process = Object;
      }
      ExecuteOptions = KeGetExecuteOptions(Process, &v187);
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v65, 0x79517350u);
      if ( ExecuteOptions >= 0 )
      {
        *(_DWORD *)v6 = v187;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return ExecuteOptions;
    case ProcessCookie:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v66 = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
        p_Lock = v66;
        Object = (PVOID)v66;
      }
      else
      {
        v67 = ObReferenceObjectByHandle(ProcessHandle, 0x20u, (POBJECT_TYPE)PsProcessType, v8, &v209, 0LL);
        v66 = (volatile signed __int32 *)v209;
        p_Lock = (volatile signed __int32 *)v209;
        Object = v209;
        if ( v67 < 0 )
          return v67;
      }
      v157 = 0;
      while ( 1 )
      {
        v68 = *((_DWORD *)v66 + 242);
        if ( v68 )
          break;
        KeQuerySystemTimePrecise(&v193);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v71 = ExGenRandom(1);
        v72 = __rdtsc();
        _InterlockedCompareExchange(
          p_Lock + 242,
          v72 ^ v71 ^ CurrentPrcb->MmPageFaultCount ^ v193.LowPart ^ v193.HighPart ^ LowPart ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
          0);
        LODWORD(v11) = v157;
        v66 = (volatile signed __int32 *)Object;
        p_Lock = (volatile signed __int32 *)Object;
      }
      *(_DWORD *)v6 = v68;
      if ( ReturnLength )
        *ReturnLength = 4;
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObject((PVOID)v66);
      return (int)v11;
    case ProcessImageInformation:
      if ( ProcessInformationLength != 64 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v73 = (struct _EX_RUNDOWN_REF *)Object;
      if ( Object == *((PVOID *)p_Lock + 68) )
      {
        Ptr = (void *)*((_QWORD *)Object + 119);
        if ( !Ptr )
          result = -1073741558;
        DeviceMapInformation = result;
      }
      else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
      {
        Ptr = v73[119].Ptr;
        if ( Ptr )
          ObfReferenceObject(v73[119].Ptr);
        else
          DeviceMapInformation = -1073741811;
        ExReleaseRundownProtection(v73 + 95);
        LODWORD(v11) = 1;
      }
      else
      {
        DeviceMapInformation = -1073741558;
        Ptr = 0LL;
        LODWORD(v11) = 1;
      }
      ObfDereferenceObjectWithTag(v73, 0x79517350u);
      if ( DeviceMapInformation >= 0 )
      {
        DeviceMapInformation = MmGetSectionInformation((__int64)Ptr, 1);
        if ( (_DWORD)v11 )
          ObfDereferenceObject(Ptr);
        if ( DeviceMapInformation >= 0 && ReturnLength )
          *ReturnLength = 64;
      }
      return DeviceMapInformation;
    case ProcessCycleTime:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v75 = result;
      if ( result < 0 )
        return result;
      v76 = Object;
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess((__int64)Object, (__int64)&v210);
      *((_QWORD *)v6 + 1) = v210;
      if ( ReturnLength )
        *ReturnLength = 16;
      goto LABEL_611;
    case ProcessPagePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 192) >> 12) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_149;
    case ProcessImageFileNameWin32:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v18 = (struct _EX_RUNDOWN_REF *)Object;
      v19 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 137);
      v166 = v19;
      if ( v19 )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
        {
          ObfReferenceObject(v19);
          ExReleaseRundownProtection(v18 + 95);
        }
        else
        {
          DeviceMapInformation = -1073741558;
        }
      }
      else
      {
        DeviceMapInformation = PsReferenceProcessFilePointer(Object, &v166);
        v19 = (struct _FILE_OBJECT *)v166;
      }
      ObfDereferenceObjectWithTag(v18, 0x79517350u);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      ExecuteOptions = IoQueryFileDosDeviceName(v19, &ObjectNameInformation);
      ObfDereferenceObject(v19);
      if ( ExecuteOptions >= 0 )
      {
        v21 = ObjectNameInformation;
        v22 = ObjectNameInformation->Name.MaximumLength + 16;
        if ( v22 <= (unsigned int)v5 )
        {
          *(_WORD *)v6 = ObjectNameInformation->Name.Length;
          *((_WORD *)v6 + 1) = v21->Name.MaximumLength;
          MaximumLength = v21->Name.MaximumLength;
          if ( MaximumLength )
          {
            v11 = (unsigned int *)(v6 + 16);
            memmove(v6 + 16, v21->Name.Buffer, MaximumLength);
          }
          *((_QWORD *)v6 + 1) = v11;
        }
        else
        {
          ExecuteOptions = -1073741820;
          v157 = -1073741820;
        }
        if ( ReturnLength )
          *ReturnLength = v22;
        ExFreePoolWithTag(v21, 0);
      }
      return ExecuteOptions;
    case ProcessImageFileMapping:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v79 = *(_QWORD *)ProcessInformation;
      v213[2] = *(_QWORD *)ProcessInformation;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      ExecuteOptions = ObpReferenceObjectByHandleWithTag(v79, 0x79517350u, (__int64)&v166, 0LL, 0LL);
      v41 = Object;
      if ( ExecuteOptions < 0 )
        goto LABEL_149;
      ProcessHandleInformation = PsReferenceProcessFilePointer(Object, &v201);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v81 = v166;
      if ( ProcessHandleInformation < 0 )
        goto LABEL_368;
      v82 = *((_QWORD *)v166 + 5);
      v83 = v201;
      v84 = *((_QWORD *)v201 + 5);
      v85 = 0;
      if ( v82 != v84 )
        v85 = -1073741823;
      ObfDereferenceObject(v166);
      ObfDereferenceObject(v83);
      result = v85;
      if ( v82 == v84 && ReturnLength )
        *ReturnLength = 0;
      return result;
    case ProcessAffinityUpdateMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v165 = *((_DWORD *)Object + 192);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v86 = (v165 >> 19) & 1 | 2;
      if ( (v165 & 0x40000) == 0 )
        v86 = (v165 >> 19) & 1;
      *(_DWORD *)v6 = v86;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessMemoryAllocationMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v165 = *((_DWORD *)Object + 193);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      LOBYTE(v11) = (v165 & 0x200000) != 0;
      *(_DWORD *)v6 = (_DWORD)v11;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessGroupInformation:
      if ( !ReturnLength || (ProcessInformationLength & 1) != 0 )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v89 = KeQueryGroupMaskProcess((__int64)Object);
        GroupMaskProcess = v89;
        do
        {
          _BitScanForward(&v91, v89);
          v92 = (_DWORD)v11 + 2;
          LODWORD(v11) = v92;
          v160 = v92;
          if ( v92 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = v91;
            v6 += 2;
            v217 = v6;
          }
          _bittestandreset((signed __int32 *)&GroupMaskProcess, v91);
          v89 = GroupMaskProcess;
        }
        while ( GroupMaskProcess );
        *ReturnLength = v92;
        v93 = (unsigned int)v5 < v92 ? 0xC0000023 : 0;
        v157 = v93;
        ObfDereferenceObjectWithTag(v90, 0x79517350u);
        return v93;
      }
      return result;
    case ProcessConsoleHostProcess:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v94 = *((_QWORD *)Object + 126);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v94;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessWindowInformation:
      v169 = 0;
      v173 = 0uLL;
      if ( v8 != 1 )
        return -1073741823;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v157 = result;
      if ( result < 0 )
        return result;
      v95 = (_KPROCESS *)Object;
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 95) )
      {
        ObfDereferenceObjectWithTag(v95, 0x79517350u);
        return -1073741558;
      }
      KiStackAttachProcess(v95, 0, (__int64)v238);
      v96 = v95[1].ActiveProcessors.Bitmap[7];
      if ( v96 )
      {
        v97 = *(_WORD *)(v96 + 8);
        if ( v97 == 332 || v97 == 452 )
          v11 = *(unsigned int **)v96;
      }
      if ( v11 )
      {
        v202 = v11[4];
        v169 = *(_DWORD *)(v202 + 104);
        v184 = *(_QWORD *)(v202 + 112);
        v98 = v184;
        LODWORD(v173) = v184;
        *((_QWORD *)&v173 + 1) = HIDWORD(v184);
      }
      else
      {
        v174 = *(_QWORD *)(v95[1].ActiveProcessors.Bitmap[1] + 32);
        v99 = v174 + 164;
        if ( (unsigned __int64)(v174 + 164) >= 0x7FFFFFFF0000LL )
          v99 = 0x7FFFFFFF0000LL;
        v169 = *(_DWORD *)v99;
        v100 = v174 + 176;
        if ( (unsigned __int64)(v174 + 176) >= 0x7FFFFFFF0000LL )
          v100 = 0x7FFFFFFF0000LL;
        LODWORD(v211) = *(_DWORD *)v100;
        *((_QWORD *)&v211 + 1) = *(_QWORD *)(v100 + 8);
        v173 = v211;
        v98 = v211;
      }
      v63 = v157;
      KiUnstackDetachProcess((__int64)v238, 0LL);
      if ( v63 < 0 )
        goto LABEL_358;
      v101 = v98 + 6;
      if ( ReturnLength )
        *ReturnLength = v101;
      if ( (unsigned int)v5 >= v101 )
      {
        *(_DWORD *)v6 = v169;
        *((_WORD *)v6 + 2) = v98;
      }
      else
      {
        v63 = -1073741820;
        v157 = -1073741820;
      }
      if ( v63 >= 0 && v98 )
      {
        v38 = (struct _EX_RUNDOWN_REF *)Object;
        v63 = MmCopyVirtualMemory((ULONG_PTR)Object, (unsigned __int16)v173, 1, (__int64)&v206);
      }
      else
      {
LABEL_358:
        v38 = (struct _EX_RUNDOWN_REF *)Object;
      }
      goto LABEL_359;
    case ProcessHandleInformation:
      if ( ProcessInformationLength >= 0x10 )
      {
        result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, v8, &v203, 0LL);
        if ( result >= 0 )
        {
          --CurrentThread->KernelApcDisable;
          v102 = (struct _EX_RUNDOWN_REF *)v203;
          v103 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v203);
          if ( v103 )
          {
            ProcessHandleInformation = ExQueryProcessHandleInformation(v103, v6, (unsigned int)v5, ReturnLength);
            ExReleaseRundownProtection(v102 + 95);
          }
          else
          {
            ProcessHandleInformation = -1073741558;
          }
          KeLeaveCriticalRegionThread((__int64)p_Lock);
          v81 = v102;
LABEL_368:
          ObfDereferenceObject(v81);
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
      v104 = *(_DWORD *)ProcessInformation;
      v182 = *(_DWORD *)ProcessInformation;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Object = KeGetCurrentThread()->ApcState.Process;
        v104 = v182;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
      }
      break;
    case ProcessHandleCheckingMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v63 = result;
      v157 = result;
      if ( result < 0 )
        return result;
      v38 = (struct _EX_RUNDOWN_REF *)Object;
      v126 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v126 )
        goto LABEL_218;
      LOBYTE(v11) = (*(_BYTE *)(v126 + 44) & 2) != 0;
      *(_DWORD *)v6 = (_DWORD)v11;
      goto LABEL_359;
    case ProcessKeepAliveCount:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 513) & 0x7FFFFFFF;
      *((_DWORD *)v6 + 1) = v41[521] & 0x7FFFFFFF;
      goto LABEL_149;
    case ProcessHandleTable:
      if ( ProcessInformationLength < 4 )
        return -1073741820;
      result = ExLockUserBuffer(
                 ProcessInformation,
                 ProcessInformationLength,
                 (unsigned __int8)KeGetCurrentThread()->gap0[10],
                 1LL,
                 &v204,
                 &P);
      if ( result >= 0 )
      {
        v127 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( v127 >= 0 )
        {
          v191 = 0LL;
          v192 = 0LL;
          v128 = (struct _EX_RUNDOWN_REF *)Object;
          v129 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
          if ( v129 )
          {
            v191 = v204;
            v192 = (unsigned int)v5 >> 2;
            ExEnumHandleTable(v129, PspHandleTableWalker, &v191, 0LL);
            ExReleaseRundownProtection(v128 + 95);
          }
          else
          {
            LODWORD(v11) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v128, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = 4 * HIDWORD(v192);
          ExUnlockUserBuffer((struct _MDL *)P);
          return (int)v11;
        }
        else
        {
          ExUnlockUserBuffer((struct _MDL *)P);
          return v127;
        }
      }
      return result;
    case ProcessCheckStackExtentsMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 110) >> 5) & 1;
      goto LABEL_149;
    case ProcessCommandLineInformation:
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)ProcessHandle,
                               0x79517350u,
                               (__int64)&Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v130 = v8;
      v131 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((ULONG_PTR)Object, (__int64)v6, v5, v130, ReturnLength);
      goto LABEL_497;
    case ProcessProtectionInformation:
      ExecuteOptions = ObpReferenceObjectByHandleWithTag(
                         (ULONG_PTR)ProcessHandle,
                         0x79517350u,
                         (__int64)&Object,
                         0LL,
                         0LL);
      if ( ExecuteOptions < 0 )
        return ExecuteOptions;
      if ( (_DWORD)v5 )
      {
        v41 = Object;
        *v6 = *((_BYTE *)Object + 1738);
        if ( ReturnLength )
          *ReturnLength = 1;
        ExecuteOptions = 0;
      }
      else
      {
LABEL_517:
        ExecuteOptions = -1073741820;
LABEL_518:
        v41 = Object;
      }
      if ( v41 )
        goto LABEL_149;
      return ExecuteOptions;
    case ProcessTelemetryIdInformation:
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)ProcessHandle,
                               0x79517350u,
                               (__int64)&Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v131 = Object;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo((ULONG_PTR)Object, v6, (unsigned int)v5, (__int64)ReturnLength);
LABEL_497:
      DeviceMapInformation = ProcessCommandLine;
      if ( v131 )
        goto LABEL_498;
      return DeviceMapInformation;
    case ProcessCommitReleaseInformation:
      Object = 0LL;
      if ( ProcessInformationLength != 32 )
        goto LABEL_517;
      v176 = *(_OWORD *)ProcessInformation;
      *(_OWORD *)v177 = *((_OWORD *)ProcessInformation + 1);
      if ( (_DWORD)v176 == 3 )
      {
        if ( (DWORD1(v176) & 0xFFFFFFF8) != 0 || *((_QWORD *)&v176 + 1) )
        {
          ExecuteOptions = -1073741811;
        }
        else
        {
          ExecuteOptions = ObpReferenceObjectByHandleWithTag(
                             (ULONG_PTR)ProcessHandle,
                             0x79517350u,
                             (__int64)&Object,
                             0LL,
                             0LL);
          if ( ExecuteOptions >= 0 )
          {
            MmQueryCommitReleaseState((_KPROCESS *)Object, &v180, (_QWORD *)&v176 + 1, v177, &v177[1]);
            DWORD1(v176) ^= (BYTE4(v176) ^ (unsigned __int8)v180) & 1;
            *((_QWORD *)&v176 + 1) <<= 12;
            v177[0] <<= 12;
            v177[1] <<= 12;
            *(_OWORD *)v6 = v176;
            *((_OWORD *)v6 + 1) = *(_OWORD *)v177;
            ExecuteOptions = 0;
          }
        }
      }
      else
      {
        ExecuteOptions = -1073741735;
      }
      goto LABEL_518;
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
        return -1073741820;
      v135 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( v135 >= 0 )
      {
        LOBYTE(v11) = (_DWORD)v170 == 67;
        v136 = 8 * KeQueryCpuSetsProcess((__int64)Object, v249, v134, (int)v11);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( ReturnLength )
          *ReturnLength = v136;
        if ( v136 < (unsigned int)v5 )
          LODWORD(v5) = v136;
        memmove(v6, v249, (unsigned int)v5);
      }
      return v135;
    case ProcessJobMemoryInformation:
      if ( ProcessInformationLength != 40 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v188 = 0uLL;
        v189 = 0uLL;
        *(_QWORD *)&v190 = 0LL;
        if ( *((_QWORD *)Object + 118) )
        {
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v237);
          ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, JobInformation, 0x28u, 0LL);
          ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, v239, 0x98u, 0LL);
          KiUnstackDetachProcess((__int64)v237, 0LL);
          *((_QWORD *)&v188 + 1) = JobInformation[0];
          *(_QWORD *)&v189 = JobInformation[1];
          *(_QWORD *)&v188 = JobInformation[2];
          v77 = v190;
          if ( (v240 & 0x200000) != 0 )
            v77 = v242;
          *(_QWORD *)&v190 = v77;
          v78 = *((_QWORD *)&v189 + 1);
          if ( (v240 & 0x200) != 0 )
            v78 = v241;
          *((_QWORD *)&v189 + 1) = v78;
          *(_OWORD *)v6 = v188;
          *((_OWORD *)v6 + 1) = v189;
          *((_QWORD *)v6 + 4) = v190;
          if ( ReturnLength )
            *ReturnLength = 40;
        }
        else
        {
          LODWORD(v11) = -1073741394;
        }
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return (int)v11;
      }
      return result;
    case ProcessInPrivate:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *v6 = *((int *)Object + 192) < 0;
      goto LABEL_149;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v63 = result;
      v157 = result;
      if ( result < 0 )
        return result;
      v38 = (struct _EX_RUNDOWN_REF *)Object;
      v133 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v133 )
      {
        LOBYTE(v11) = (*(_BYTE *)(v133 + 44) & 0x10) != 0;
        *(_DWORD *)v6 = (_DWORD)v11;
LABEL_359:
        ExReleaseRundownProtection(v38 + 95);
        ObfDereferenceObjectWithTag(v38, 0x79517350u);
        return v63;
      }
      else
      {
LABEL_218:
        DeviceMapInformation = -1073741558;
LABEL_219:
        ObfDereferenceObjectWithTag(v38, 0x79517350u);
        return DeviceMapInformation;
      }
    case ProcessIumChallengeResponse:
      return PsIumGetOnDemandDebugChallenge(ProcessHandle, ProcessInformation, ProcessInformationLength, ReturnLength);
    case ProcessChildProcessInformation:
      if ( ProcessInformationLength != 3 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v137 = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
        Object = v137;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v137 = Object;
      }
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v137);
      *(_WORD *)v6 = 0;
      v6[2] = 0;
      v139 = NoChildProcessRestrictedPolicy - 1;
      if ( !v139 )
        goto LABEL_548;
      v140 = v139 - 1;
      if ( v140 )
      {
        if ( v140 == 1 )
          v6[2] = 1;
      }
      else
      {
        v6[1] = 1;
LABEL_548:
        *v6 = 1;
      }
      if ( ReturnLength )
        *ReturnLength = 3;
      if ( ProcessHandle == (HANDLE)-1LL )
        return (int)v11;
LABEL_552:
      ObfDereferenceObjectWithTag(v137, 0x79517350u);
      return 0;
    case ProcessHighGraphicsPriorityInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *v6 = (*((_DWORD *)Object + 435) & 0x200) != 0;
      goto LABEL_149;
    case ProcessSubsystemInformation:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      if ( *((_QWORD *)Object + 226) )
        LODWORD(v11) = qword_1403A6130;
      *(_DWORD *)v6 = (_DWORD)v11;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_149;
    case ProcessEnergyValues:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v75 = result;
      if ( result < 0 )
        return result;
      v76 = Object;
      PsQueryProcessEnergyValues(Object, v248);
      if ( (unsigned int)v5 > 0x1B0 )
        LODWORD(v5) = 432;
      memmove(v6, v248, (unsigned int)v5);
      if ( ReturnLength )
        *ReturnLength = 432;
      goto LABEL_611;
    case ProcessPowerThrottlingState:
      if ( ProcessInformationLength != 12 )
        return -1073741820;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v142 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( v142 >= 0 )
      {
        v143 = *(__int64 (__fastcall **)(PVOID, __int64 *))(ExtensionTable + 16);
        v144 = Object;
        v142 = v143(Object, &v234);
        if ( v142 >= 0 )
        {
          *(_QWORD *)v6 = v234;
          *((_DWORD *)v6 + 2) = v235;
          if ( ReturnLength )
            *ReturnLength = 12;
          v142 = 0;
          v157 = 0;
        }
        ObfDereferenceObjectWithTag(v144, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v142;
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
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
        p_LockNV = Object;
      }
      *(_DWORD *)v6 = 0;
      v146 = p_LockNV[522];
      v147 = 0;
      if ( (v146 & 0x4000) != 0 )
      {
        v147 = 1;
        *(_DWORD *)v6 = 1;
        v146 = p_LockNV[522];
      }
      if ( (v146 & 0x8000) != 0 )
        *(_DWORD *)v6 = v147 | 2;
      *((_DWORD *)v6 + 1) = p_LockNV[496];
      if ( ReturnLength )
        *ReturnLength = 8;
      if ( ProcessHandle == (HANDLE)-1LL )
        return (int)v11;
      ObfDereferenceObjectWithTag(p_LockNV, 0x79517350u);
      return 0;
    case ProcessWakeInformation:
      if ( v8 )
        return -1073741790;
      if ( ProcessInformationLength != 48 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v131 = Object;
        DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel(CurrentThread, Object, v6);
        if ( DeviceMapInformation >= 0 && ReturnLength )
        {
          *ReturnLength = 48;
          ObfDereferenceObjectWithTag(v131, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_498:
          ObfDereferenceObjectWithTag(v131, 0x79517350u);
          return DeviceMapInformation;
        }
      }
      return result;
    case ProcessEnergyTrackingState:
      if ( ProcessInformationLength < 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v148 = Object;
        PoQueryProcessEnergyTrackingState(Object, v245);
        v149 = 144;
        if ( (unsigned int)v5 < 0x90 )
          v149 = v5;
        memmove(v6, v245, v149);
        if ( ReturnLength )
          *ReturnLength = v149;
        v157 = 0;
        ObfDereferenceObjectWithTag(v148, 0x79517350u);
        return 0;
      }
      return result;
    case ProcessCaptureTrustletLiveDump:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v76 = Object;
      if ( *((_QWORD *)Object + 90) )
      {
        v244 = *((_QWORD *)Object + 90);
        v75 = VslpEnterIumSecureMode(2u, 53LL, 0, (__int64)v243);
LABEL_611:
        ObfDereferenceObjectWithTag(v76, 0x79517350u);
        return v75;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
    case ProcessTelemetryCoverage:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      ProcessTelemetryCoverage = EtwQueryProcessTelemetryCoverage(Object, v6, (unsigned int)v5, ReturnLength);
LABEL_148:
      ExecuteOptions = ProcessTelemetryCoverage;
      v41 = Object;
      goto LABEL_149;
    case ProcessEnableReadWriteVmLogging:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *v6 = HIBYTE(*((_DWORD *)Object + 192)) & 3;
      goto LABEL_149;
    case ProcessUptimeInformation:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v157 = result;
      if ( result < 0 )
        return result;
      v194 = 0LL;
      v195 = 0LL;
      v196 = 0LL;
      v197 = 0LL;
      v198 = 0LL;
      v199 = 0LL;
      v200 = 0LL;
      --CurrentThread->KernelApcDisable;
      v152 = Object;
      ExAcquirePushLockSharedEx((ULONG_PTR)Object + 728, 0LL);
      v153 = v152[239] >> 61;
      if ( (unsigned __int64)(v153 - 3) <= 1
        && (v198 = v152[239] & 0x1FFFFFFFFFFFFFFFLL, v196 = v152[238], v197 = v196 - v152[235], v153 == 3) )
      {
        v154 = v200 | 0x200;
      }
      else
      {
        v154 = v200;
      }
      LODWORD(v200) = (v154 & 0xFFFFFF00 | *((unsigned __int8 *)v152 + 1739)) ^ ((unsigned __int16)((unsigned __int16)*((_DWORD *)v152 + 435) << 6) ^ (unsigned __int16)(v154 | *((unsigned __int8 *)v152 + 1739))) & 0x100;
      if ( _InterlockedCompareExchange64(v152 + 91, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v152 + 91);
      KeAbPostRelease((ULONG_PTR)(v152 + 91));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v137 = Object;
      PsGetProcessDeepFreezeStats(Object, &v214);
      v194 = v214;
      v195 = v215;
      v199 = v216;
      if ( !v197 )
        v197 = v214 - v137[235];
      if ( !v198 )
        v198 = v215 - v137[236] - v216;
      v155 = 56;
      if ( (unsigned int)v5 < 0x38 )
        v155 = v5;
      memmove(v6, &v194, v155);
      if ( ReturnLength )
        *ReturnLength = v155;
      v157 = 0;
      goto LABEL_552;
    case ProcessImageSection:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( v8 )
      {
        v150 = (__int64)ProcessInformation;
        if ( (unsigned __int64)ProcessInformation >= 0x7FFFFFFF0000LL )
          v150 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v150 = *(_QWORD *)v150;
      }
      v151 = KeGetCurrentThread()->ApcState.Process;
      if ( ProcessHandle != (HANDLE)-1LL || v151 != CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer((PVOID)v151[1].Affinity.Bitmap[17], 0, 0LL, 5u, MmSectionObjectType, v8, &v205);
      if ( result >= 0 )
      {
        *(_QWORD *)v6 = v205;
        if ( ReturnLength )
          *ReturnLength = 8;
      }
      return result;
    case ProcessSequenceNumber:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_QWORD *)v6 = *((_QWORD *)Object + 234);
      if ( ReturnLength )
        *ReturnLength = 8;
LABEL_149:
      ObfDereferenceObjectWithTag(v41, 0x79517350u);
      return ExecuteOptions;
    default:
      return -1073741821;
  }
  switch ( v104 )
  {
    case 1:
      v157 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v105 = Object;
      v106 = *((_DWORD *)Object + 522);
      if ( (v106 & 0x40) == 0 )
      {
        *((_DWORD *)v6 + 1) |= 1u;
        v106 = v105[522];
      }
      if ( (v106 & 0x10) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 2u;
        v106 = v105[522];
      }
      if ( (v106 & 0x20) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 4u;
        v106 = v105[522];
      }
      if ( (v106 & 8) != 0 )
        *((_DWORD *)v6 + 1) |= 8u;
      goto LABEL_475;
    case 2:
      v157 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v110 = Object;
      v111 = *((_DWORD *)Object + 522);
      if ( (v111 & 0x100) != 0 )
      {
        v112 = *((_DWORD *)v6 + 1) | 1;
      }
      else
      {
        if ( (v111 & 0x800) == 0 )
          goto LABEL_402;
        v112 = *((_DWORD *)v6 + 1) | 8;
      }
      *((_DWORD *)v6 + 1) = v112;
LABEL_402:
      v113 = v110[522];
      if ( (v113 & 0x200) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 2u;
        v113 = v110[522];
      }
      if ( (v113 & 0x400) != 0 )
        *((_DWORD *)v6 + 1) |= 4u;
      goto LABEL_475;
    case 3:
      v157 = 0;
      v107 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v107 )
      {
        ExQueryHandleExceptionsPermanency(v107, v164, (bool *)&v159);
        *((_DWORD *)v6 + 1) = 0;
        if ( v164[0] )
          *((_DWORD *)v6 + 1) |= 1u;
        if ( (_BYTE)v159 )
          *((_DWORD *)v6 + 1) |= 2u;
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 95);
      }
      else
      {
        v157 = -1073741558;
      }
      goto LABEL_475;
    case 4:
      v157 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v108 = *((_DWORD *)Object + 522);
      if ( (v108 & 0x1000) != 0 )
      {
        v109 = *((_DWORD *)v6 + 1) | 1;
      }
      else
      {
        if ( (v108 & 0x2000) == 0 )
          goto LABEL_475;
        v109 = *((_DWORD *)v6 + 1) | 2;
      }
      *((_DWORD *)v6 + 1) = v109;
      goto LABEL_475;
    case 6:
      v157 = 0;
      *((_DWORD *)v6 + 1) = 0;
      if ( (*((_DWORD *)Object + 522) & 0x80u) != 0 )
        *((_DWORD *)v6 + 1) |= 1u;
      goto LABEL_475;
    case 7:
      v157 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v114 = Object;
      v115 = *((_DWORD *)Object + 522);
      if ( (v115 & 1) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 1u;
        v115 = v114[522];
      }
      if ( (v115 & 2) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 2u;
        v115 = v114[522];
      }
      if ( (v115 & 4) != 0 )
        *((_DWORD *)v6 + 1) |= 4u;
      goto LABEL_475;
    case 8:
      v157 = 0;
      PsQueryProcessSignatureMitigationPolicy(Object, &v181, 0x140000000uLL);
      *((_DWORD *)v6 + 1) = v181;
      goto LABEL_475;
    case 9:
      v157 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v116 = *((_DWORD *)Object + 522);
      if ( (v116 & 0x10000) != 0 )
      {
        v117 = *((_DWORD *)v6 + 1) | 1;
      }
      else
      {
        if ( (v116 & 0x20000) == 0 )
          goto LABEL_475;
        v117 = *((_DWORD *)v6 + 1) | 2;
      }
      *((_DWORD *)v6 + 1) = v117;
      goto LABEL_475;
    case 10:
      v157 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v118 = Object;
      v119 = *((_DWORD *)Object + 522);
      if ( (v119 & 0x80000) != 0 )
      {
        v120 = *((_DWORD *)v6 + 1) | 1;
      }
      else
      {
        if ( (v119 & 0x100000) == 0 )
          goto LABEL_429;
        v120 = *((_DWORD *)v6 + 1) | 8;
      }
      *((_DWORD *)v6 + 1) = v120;
LABEL_429:
      v121 = v118[522];
      if ( (v121 & 0x200000) != 0 )
      {
        v122 = *((_DWORD *)v6 + 1) | 2;
      }
      else
      {
        if ( (v121 & 0x400000) == 0 )
          goto LABEL_434;
        v122 = *((_DWORD *)v6 + 1) | 0x10;
      }
      *((_DWORD *)v6 + 1) = v122;
LABEL_434:
      if ( (v118[522] & 0x40000) != 0 )
        *((_DWORD *)v6 + 1) |= 4u;
      goto LABEL_475;
    case 11:
      v157 = 0;
      *((_DWORD *)v6 + 1) = 0;
      *((_DWORD *)v6 + 1) = PsGetWin32KFilterSet() & 0xF | *((_DWORD *)v6 + 1) & 0xFFFFFFF0;
      goto LABEL_475;
    case 12:
      v157 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v123 = Object;
      v124 = *((_DWORD *)Object + 523);
      if ( (v124 & 1) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 1u;
        v124 = v123[523];
      }
      if ( (v124 & 4) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 4u;
        v124 = v123[523];
      }
      if ( (v124 & 0x400) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 0x10u;
        v124 = v123[523];
      }
      if ( (v124 & 0x10) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 0x40u;
        v124 = v123[523];
      }
      if ( (v124 & 0x40) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 0x100u;
        v124 = v123[523];
      }
      if ( (v124 & 0x100) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 0x400u;
        v124 = v123[523];
      }
      if ( (v124 & 2) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 2u;
        v124 = v123[523];
      }
      if ( (v124 & 8) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 8u;
        v124 = v123[523];
      }
      if ( (v124 & 0x800) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 0x20u;
        v124 = v123[523];
      }
      if ( (v124 & 0x20) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 0x80u;
        v124 = v123[523];
      }
      if ( (v124 & 0x80u) != 0 )
      {
        *((_DWORD *)v6 + 1) |= 0x200u;
        v124 = v123[523];
      }
      if ( (v124 & 0x200) != 0 )
        *((_DWORD *)v6 + 1) |= 0x800u;
      goto LABEL_475;
    case 13:
      v157 = 0;
      *((_DWORD *)v6 + 1) = 0;
      v208 = PspGetNoChildProcessRestrictedPolicy(Object);
      switch ( v208 )
      {
        case 1:
          goto LABEL_468;
        case 2:
          *((_DWORD *)v6 + 1) |= 4u;
LABEL_468:
          v125 = *((_DWORD *)v6 + 1) | 1;
          break;
        case 3:
          v125 = *((_DWORD *)v6 + 1) | 2;
          break;
        default:
          goto LABEL_475;
      }
      *((_DWORD *)v6 + 1) = v125;
LABEL_475:
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v157;
    case 14:
      v157 = 0;
      *((_DWORD *)v6 + 1) = 0;
      if ( (*((_DWORD *)Object + 523) & 0x2000) != 0 )
        *((_DWORD *)v6 + 1) |= 8u;
      goto LABEL_475;
    default:
      v157 = -1073741637;
      goto LABEL_475;
  }
}
