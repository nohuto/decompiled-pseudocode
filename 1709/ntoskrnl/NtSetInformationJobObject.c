/*
 * XREFs of NtSetInformationJobObject @ 0x140510C80
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSchedulingGroupCycleNotification @ 0x14000A624 (KeSetSchedulingGroupCycleNotification.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PsIsHostSilo @ 0x1400859F0 (PsIsHostSilo.c)
 *     KeIsEmptyAffinityEx @ 0x140090600 (KeIsEmptyAffinityEx.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     KeSetSchedulingGroupWeights @ 0x1400D1A68 (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1400D1B2C (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400D208C (KeSetSchedulingGroupRankBias.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x1400D42E0 (KeQuerySchedulingGroupReadyTime.c)
 *     KeQueryActiveGroupCount @ 0x1400FE430 (KeQueryActiveGroupCount.c)
 *     KeFirstGroupAffinityEx @ 0x140126920 (KeFirstGroupAffinityEx.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1401324CC (ExfAcquireReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     wcsnlen @ 0x1401605E0 (wcsnlen.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspGetServerSiloStatePointer @ 0x14024DA6C (PspGetServerSiloStatePointer.c)
 *     PspHardDereferenceSiloWorker @ 0x14024DA80 (PspHardDereferenceSiloWorker.c)
 *     PspJobIsAppSilo @ 0x14024DB18 (PspJobIsAppSilo.c)
 *     PsGetJobServerSilo @ 0x14024E400 (PsGetJobServerSilo.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PspSetJobIoRateControl @ 0x1404454F8 (PspSetJobIoRateControl.c)
 *     PspSetJobIoAttribution @ 0x1404457CC (PspSetJobIoAttribution.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1404508F4 (PspDoesJobHierarchyPermitUILimits.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SeCheckPrivilegedObject @ 0x14046EE78 (SeCheckPrivilegedObject.c)
 *     PsChargeSharedPoolQuota @ 0x1404854D8 (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x140486060 (PsReturnSharedPoolQuota.c)
 *     IopFreeMiniCompletionPacket @ 0x1404A39C0 (IopFreeMiniCompletionPacket.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     SePrivilegeCheck @ 0x1404C45D0 (SePrivilegeCheck.c)
 *     SeCaptureSubjectContextEx @ 0x1404C5AF0 (SeCaptureSubjectContextEx.c)
 *     PsInvokeWin32Callout @ 0x1404D24E0 (PsInvokeWin32Callout.c)
 *     IoAllocateMiniCompletionPacket @ 0x1404EB9F0 (IoAllocateMiniCompletionPacket.c)
 *     PspAddSchedulingGroupToJobChain @ 0x14050A0DC (PspAddSchedulingGroupToJobChain.c)
 *     PspFreeRateControl @ 0x14050A25C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14050A2A8 (PspAllocateRateControl.c)
 *     PspBindProcessSessionToJob @ 0x14050CA64 (PspBindProcessSessionToJob.c)
 *     PspUnlockJobChain @ 0x14050DEA8 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x14050DF38 (PspLockJobChain.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14050FB60 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1405102A0 (PspUnlockJob.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140510788 (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x1405107E4 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspRateControlLimitFlag @ 0x140510974 (PspRateControlLimitFlag.c)
 *     PspUnlockJobConditionally @ 0x140510B94 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140510BC0 (PspLockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x140510C18 (PspLockRootJobExclusive.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x1405124A0 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x1405124C8 (PspNotificationLimitRateControlToleranceField.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x1405124F0 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspFreezeJobTree @ 0x1405128B8 (PspFreezeJobTree.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x140512C00 (PspSetEnergyTrackingStateJobTree.c)
 *     PspIsContextAdmin @ 0x140512CA0 (PspIsContextAdmin.c)
 *     PspScheduleEnforcementWorker @ 0x14057EEEC (PspScheduleEnforcementWorker.c)
 *     PspSetBackgroundJobTree @ 0x140597E00 (PspSetBackgroundJobTree.c)
 *     PspAssignSiloSystemRootPath @ 0x140714B10 (PspAssignSiloSystemRootPath.c)
 *     PspConvertSiloToServerSilo @ 0x140714DA8 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140714F44 (PspCreateSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1407173F8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1407174BC (PspApplyWorkingSetLimits.c)
 *     PspSetJobMemoryPartition @ 0x140718000 (PspSetJobMemoryPartition.c)
 *     PspSetJobSiloThreadImpersonationPolicy @ 0x1407182E0 (PspSetJobSiloThreadImpersonationPolicy.c)
 *     PspSetNetRateControl @ 0x14071835C (PspSetNetRateControl.c)
 *     EtwTraceJobServerSiloStateChange @ 0x140745B74 (EtwTraceJobServerSiloStateChange.c)
 *     EtwTraceJobSetQuery @ 0x140745C30 (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateSiloRootDirectory @ 0x140789F30 (ObCreateSiloRootDirectory.c)
 */

NTSTATUS __stdcall NtSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength)
{
  size_t v4; // rbx
  unsigned __int32 v7; // edx
  ULONG v8; // ecx
  KPROCESSOR_MODE v9; // al
  __m128i *v10; // rdi
  int v11; // edx
  LONG_PTR v12; // rax
  __int64 v13; // rdx
  char *v14; // r14
  int v15; // esi
  __int32 v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r10
  unsigned __int64 v19; // r11
  __int64 v20; // r9
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  int v23; // eax
  __int64 i; // rdx
  int v25; // edx
  int v26; // eax
  int v27; // edx
  int *v28; // r9
  int *v29; // r10
  int **v30; // rbx
  PVOID v31; // rdi
  int *v32; // rdi
  int v33; // esi
  __int64 v34; // rdx
  _DWORD *v35; // r8
  _DWORD *v36; // rax
  __int64 v37; // r8
  _DWORD *v38; // rax
  _DWORD *v39; // r8
  int v40; // edx
  bool v41; // zf
  int *v42; // rax
  __int64 v43; // r8
  int JobMemoryUsageNotificationViolations; // ebx
  __int64 v45; // rdx
  __int64 MiniCompletionPacket; // rbx
  __int64 v47; // rax
  int v48; // ecx
  int v49; // r8d
  int v50; // eax
  int v51; // ecx
  __int32 *v52; // rbx
  char v53; // bl
  void *v54; // rdi
  char v55; // bl
  bool v56; // cc
  int v57; // eax
  _QWORD *v58; // rdx
  PSECURITY_SUBJECT_CONTEXT v59; // rsi
  __int16 v60; // cx
  int v61; // ebx
  __int64 v62; // rcx
  char v63; // bl
  PETHREAD v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // rbx
  int v67; // eax
  unsigned __int8 v68; // bl
  __int64 v69; // r9
  unsigned int v70; // r8d
  __int64 v71; // r8
  __int64 ClientToken; // rcx
  unsigned __int16 v73; // cx
  POOL_TYPE v74; // r12d
  unsigned __int64 v75; // r8
  struct _SECURITY_SUBJECT_CONTEXT *PoolWithQuotaTag; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v77; // rsi
  PSECURITY_SUBJECT_CONTEXT v78; // rcx
  _QWORD *RateControl; // rax
  char v80; // bl
  unsigned int *v81; // r11
  char *v82; // rax
  unsigned int v83; // ebx
  struct _ERESOURCE *v84; // rcx
  char v85; // bl
  char v86; // al
  int v87; // ecx
  unsigned int v88; // ebx
  char v89; // al
  int v90; // ecx
  unsigned __int64 v91; // rbx
  PVOID v92; // rsi
  BOOLEAN v93; // al
  unsigned __int16 Group; // ax
  __int64 v95; // rax
  __int64 v96; // rax
  char *v97; // rdi
  char *j; // rbx
  PSECURITY_SUBJECT_CONTEXT v99; // rbx
  unsigned int v100; // ecx
  unsigned int v101; // eax
  unsigned int v102; // edx
  unsigned int v103; // ebx
  unsigned __int16 v104; // r8
  __int64 v105; // r9
  __m128i v106; // xmm0
  unsigned __int16 epi16; // cx
  __int64 v108; // r10
  struct _LIST_ENTRY *PoolWithTag; // rbx
  BOOLEAN v110; // al
  char *v111; // r12
  PERESOURCE v112; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v114; // rax
  int Silo; // eax
  ULONG v116; // edx
  __int64 v117; // rdx
  unsigned __int64 v118; // xmm0_8
  unsigned __int64 v119; // rdx
  size_t v120; // rdi
  wchar_t *v121; // rax
  const wchar_t *v122; // rbx
  struct _ERESOURCE *v123; // rbx
  int v124; // r8d
  signed __int8 v125; // cf
  volatile signed __int32 *ServerSiloStatePointer; // rcx
  signed __int32 v127; // eax
  signed __int32 v129[8]; // [rsp+0h] [rbp-BB8h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+40h] [rbp-B78h]
  __int32 v131; // [rsp+48h] [rbp-B70h]
  PVOID Object; // [rsp+50h] [rbp-B68h] BYREF
  int v133; // [rsp+58h] [rbp-B60h]
  unsigned __int8 v134; // [rsp+5Ch] [rbp-B5Ch]
  int v135; // [rsp+60h] [rbp-B58h]
  PSECURITY_SUBJECT_CONTEXT v136; // [rsp+68h] [rbp-B50h]
  PSECURITY_SUBJECT_CONTEXT v137; // [rsp+70h] [rbp-B48h]
  unsigned __int16 v138; // [rsp+78h] [rbp-B40h]
  __int64 v139; // [rsp+80h] [rbp-B38h] BYREF
  PETHREAD Thread; // [rsp+88h] [rbp-B30h]
  __int8 v141; // [rsp+90h] [rbp-B28h]
  __int8 v142; // [rsp+91h] [rbp-B27h]
  __int8 v143; // [rsp+92h] [rbp-B26h]
  unsigned __int32 v144; // [rsp+94h] [rbp-B24h]
  HANDLE v145; // [rsp+98h] [rbp-B20h]
  PERESOURCE Resource; // [rsp+A0h] [rbp-B18h]
  __int64 v147; // [rsp+A8h] [rbp-B10h]
  void *Src; // [rsp+B0h] [rbp-B08h]
  PVOID P; // [rsp+B8h] [rbp-B00h]
  unsigned int v150; // [rsp+C0h] [rbp-AF8h]
  int v151; // [rsp+C4h] [rbp-AF4h]
  __int64 v152; // [rsp+C8h] [rbp-AF0h] BYREF
  __int64 v153; // [rsp+D0h] [rbp-AE8h] BYREF
  int v154; // [rsp+D8h] [rbp-AE0h] BYREF
  int v155; // [rsp+DCh] [rbp-ADCh]
  __int64 v156; // [rsp+E0h] [rbp-AD8h] BYREF
  int v157; // [rsp+E8h] [rbp-AD0h]
  __int32 v158; // [rsp+ECh] [rbp-ACCh]
  _BYTE SubjectContext[40]; // [rsp+F0h] [rbp-AC8h] BYREF
  int v160; // [rsp+118h] [rbp-AA0h]
  __int32 v161; // [rsp+11Ch] [rbp-A9Ch]
  int v162; // [rsp+120h] [rbp-A98h] BYREF
  unsigned int v163; // [rsp+124h] [rbp-A94h]
  __int64 v164; // [rsp+128h] [rbp-A90h] BYREF
  unsigned int v165; // [rsp+130h] [rbp-A88h] BYREF
  __int64 v166; // [rsp+138h] [rbp-A80h]
  PVOID v167; // [rsp+140h] [rbp-A78h]
  __m128i v168; // [rsp+148h] [rbp-A70h] BYREF
  PVOID v169; // [rsp+158h] [rbp-A60h] BYREF
  __int32 v170; // [rsp+160h] [rbp-A58h]
  __int32 v171; // [rsp+164h] [rbp-A54h]
  __int64 v172; // [rsp+168h] [rbp-A50h] BYREF
  unsigned int v173; // [rsp+170h] [rbp-A48h]
  __m128i v174; // [rsp+178h] [rbp-A40h] BYREF
  __m128i BugCheckParameter1; // [rsp+188h] [rbp-A30h]
  struct _SECURITY_SUBJECT_CONTEXT *v176; // [rsp+1A0h] [rbp-A18h]
  __int128 v177; // [rsp+1A8h] [rbp-A10h] BYREF
  __int128 v178; // [rsp+1B8h] [rbp-A00h]
  char *v179; // [rsp+1C8h] [rbp-9F0h] BYREF
  int v180; // [rsp+1D0h] [rbp-9E8h]
  __int64 v181; // [rsp+1D8h] [rbp-9E0h]
  __int64 v182; // [rsp+1E0h] [rbp-9D8h]
  __int64 v183; // [rsp+1E8h] [rbp-9D0h]
  __int64 v184; // [rsp+1F0h] [rbp-9C8h]
  __m128i v185; // [rsp+200h] [rbp-9B8h]
  __m128i v186; // [rsp+210h] [rbp-9A8h]
  __m128i v187; // [rsp+220h] [rbp-998h]
  __m128i v188; // [rsp+230h] [rbp-988h]
  __int64 v189; // [rsp+240h] [rbp-978h]
  __m128i v190; // [rsp+250h] [rbp-968h]
  __m128i v191; // [rsp+260h] [rbp-958h]
  __int64 v192; // [rsp+270h] [rbp-948h]
  _QWORD v193[18]; // [rsp+280h] [rbp-938h] BYREF
  __int64 v194; // [rsp+310h] [rbp-8A8h] BYREF
  unsigned __int64 v195; // [rsp+318h] [rbp-8A0h]
  __int64 v196; // [rsp+320h] [rbp-898h]
  unsigned __int64 v197; // [rsp+328h] [rbp-890h]
  int v198; // [rsp+330h] [rbp-888h]
  int v199; // [rsp+334h] [rbp-884h]
  unsigned int v200; // [rsp+338h] [rbp-880h]
  unsigned __int64 v201; // [rsp+340h] [rbp-878h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+360h] [rbp-858h] BYREF
  __m128i v203; // [rsp+378h] [rbp-840h] BYREF
  __int64 v204; // [rsp+390h] [rbp-828h] BYREF
  __int64 v205; // [rsp+398h] [rbp-820h]
  int v206; // [rsp+3A0h] [rbp-818h]
  unsigned __int64 v207; // [rsp+3A8h] [rbp-810h]
  unsigned __int64 v208; // [rsp+3B0h] [rbp-808h]
  int v209; // [rsp+3B8h] [rbp-800h]
  __int64 v210; // [rsp+3C0h] [rbp-7F8h]
  unsigned int v211; // [rsp+3C8h] [rbp-7F0h]
  unsigned int v212; // [rsp+3CCh] [rbp-7ECh]
  unsigned __int64 v213; // [rsp+400h] [rbp-7B8h]
  unsigned __int64 v214; // [rsp+408h] [rbp-7B0h]
  unsigned __int64 v215; // [rsp+420h] [rbp-798h]
  __m128i v216; // [rsp+430h] [rbp-788h]
  __m128i v217; // [rsp+440h] [rbp-778h]
  __m128i v218; // [rsp+450h] [rbp-768h]
  __int64 v219; // [rsp+460h] [rbp-758h]
  __m128i v220; // [rsp+468h] [rbp-750h]
  __m128i v221; // [rsp+478h] [rbp-740h]
  __m128i v222; // [rsp+488h] [rbp-730h]
  _OWORD v223[109]; // [rsp+4A0h] [rbp-718h] BYREF

  v4 = JobInformationLength;
  v145 = JobHandle;
  v131 = JobInformationClass;
  Src = JobInformation;
  v7 = JobInformationClass - 1;
  if ( v7 > 0x2E )
  {
    LODWORD(v12) = -1073741821;
    return v12;
  }
  switch ( JobInformationClass )
  {
    case JobObjectExtendedLimitInformation:
      if ( JobInformationLength == 144 )
        goto LABEL_6;
      v41 = JobInformationLength == 152;
      break;
    case JobObjectNotificationLimitInformation:
      if ( JobInformationLength == 48 )
        goto LABEL_6;
      v41 = JobInformationLength == 56;
      break;
    case JobObjectIoRateControlInformation:
      if ( JobInformationLength == 48 || JobInformationLength == 96 )
        goto LABEL_6;
      v41 = JobInformationLength == 144;
      break;
    default:
      v8 = PspJobInfoLengths[v7];
      if ( JobInformationLength != v8
        && (JobInformationClass != JobObjectGroupInformation && JobInformationClass != JobObjectGroupInformationEx
         || JobInformationLength < v8) )
      {
        goto LABEL_287;
      }
      goto LABEL_6;
  }
  if ( !v41 )
  {
LABEL_287:
    LODWORD(v12) = -1073741820;
    return v12;
  }
LABEL_6:
  Thread = KeGetCurrentThread();
  v9 = Thread->PreviousMode;
  PreviousMode = v9;
  v134 = v9;
  if ( v9 )
  {
    v10 = (__m128i *)Src;
    if ( JobInformationLength )
    {
      if ( ((PspJobInfoAlign[v7] - 1) & (unsigned int)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Src + JobInformationLength > 0x7FFFFFFF0000LL || (char *)Src + JobInformationLength < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v9 = PreviousMode;
  }
  else
  {
    v10 = (__m128i *)Src;
  }
  if ( !JobHandle )
  {
    if ( JobInformationClass != JobObjectServerSiloRunningState )
    {
      LODWORD(v12) = -1073741816;
      return v12;
    }
    v82 = (char *)Thread->ApcState.Process[1].Affinity.Bitmap[16];
    Object = v82;
    v14 = v82;
    if ( !v82 )
    {
      LODWORD(v12) = -1073741790;
      return v12;
    }
    v12 = ObfReferenceObjectWithTag(v82, 0x79517350u);
    v10 = (__m128i *)Src;
LABEL_20:
    v15 = 0;
    v133 = 0;
    LOBYTE(v12) = 0;
    v135 = v12;
    --Thread->SpecialApcDisable;
    if ( JobInformationClass <= JobObjectCycleTimeNotification )
    {
      if ( JobInformationClass == JobObjectCycleTimeNotification )
      {
        v65 = v10->m128i_i64[0];
        v182 = v65;
        ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
        if ( (*((_DWORD *)v14 + 326) & 0x20) != 0 )
        {
          v66 = *((_QWORD *)v14 + 126);
          v67 = *(_DWORD *)(v66 + 40);
          if ( (v67 & 0x10) == 0 )
          {
            *(_DWORD *)(v66 + 40) = v67 | 0x10;
            KeInitializeDpc((PRKDPC)(v66 + 48), (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine, v14);
          }
          KeSetSchedulingGroupCycleNotification(v66 + 128, v66 + 48, v65);
          v15 = 0;
        }
        else
        {
          v15 = -1073741811;
        }
        goto LABEL_214;
      }
      if ( JobInformationClass > JobObjectNotificationLimitInformation )
      {
        if ( JobInformationClass != JobObjectGroupInformationEx )
        {
          if ( JobInformationClass != JobObjectCpuRateControlInformation )
          {
            switch ( JobInformationClass )
            {
              case JobObjectCompletionFilter:
                v171 = v10->m128i_i32[0];
                v16 = v171;
                if ( (v171 & 0xFFFFC001) != 0 )
                {
                  v15 = -1073741811;
                }
                else
                {
                  ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
                  if ( v14 )
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 1032), 0LL);
                  *((_DWORD *)v14 + 219) = v16;
                  PspUnlockJobMemoryLimitsExclusive(v14, 0LL, 0LL);
                  ExReleaseResourceLite((PERESOURCE)(v14 + 56));
                  v15 = 0;
                }
                goto LABEL_30;
              case JobObjectFreezeInformation:
                v203 = *v10;
                if ( !v203.m128i_i32[0] || (v203.m128i_i32[0] & 0xFFFFFFF8) != 0 )
                {
                  v15 = -1073741811;
                }
                else
                {
                  v15 = PspFreezeJobTree(v14, &v203);
                  if ( v15 >= 0 )
                    v10->m128i_i32[0] = v203.m128i_i32[0];
                }
                goto LABEL_30;
              case JobObjectBackgroundInformation:
                v142 = v10->m128i_i8[0];
                v15 = PspSetBackgroundJobTree(v14);
                if ( v15 >= 0 )
                  v15 = 0;
                goto LABEL_30;
            }
            if ( JobInformationClass != JobObjectSchedulingRankBiasInformation )
            {
              if ( JobInformationClass == JobObjectTimerVirtualizationInformation )
              {
                if ( v10->m128i_i8[0] == 1 )
                {
                  PspEnumJobsAndProcessesInJobHierarchy(
                    v14,
                    0,
                    (int)PspEnableTimerVirtualization,
                    (int)PspEnableProcessTimerVirtualization,
                    0LL,
                    0);
                  v15 = 0;
                }
                else
                {
                  v15 = -1073741811;
                  v133 = -1073741811;
                }
                goto LABEL_30;
              }
              goto LABEL_474;
            }
            v68 = v10->m128i_i8[0];
            v141 = v10->m128i_i8[0];
            ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
            if ( (*((_DWORD *)v14 + 326) & 0x20) != 0 )
            {
              v69 = *((_QWORD *)v14 + 126);
              v70 = *(_DWORD *)(v69 + 40);
              if ( (v70 & 0x40) == 0 )
              {
                if ( (v70 & 1) != 0 || (v70 & 0x20) != 0 )
                {
                  v15 = -1073741637;
                  goto LABEL_214;
                }
                if ( ((v70 >> 3) & 1) != (v68 != 0) )
                {
                  v71 = (v68 != 0 ? 8 : 0) | v70 & 0xFFFFFFF7;
                  *(_DWORD *)(v69 + 40) = v71;
                  KeSetSchedulingGroupRankBias(*((_QWORD *)v14 + 126) + 128LL, v68, v71, v69);
                  v15 = 0;
LABEL_214:
                  ExReleaseResourceLite((PERESOURCE)(v14 + 56));
                  goto LABEL_30;
                }
              }
            }
            v15 = -1073741811;
            goto LABEL_214;
          }
          memmove(&v162, v10, v4);
          v55 = v162;
          if ( (v162 & 0xFFFFFFE0) != 0 )
          {
LABEL_175:
            v15 = -1073741811;
            goto LABEL_30;
          }
          v139 = v163;
          v131 = v162 & 1;
          if ( (v162 & 1) != 0 )
          {
            if ( (v162 & 2) != 0 )
            {
              if ( (v162 & 0x10) != 0 )
                goto LABEL_175;
              v56 = (unsigned __int16)(v163 - 1) <= 8u;
              goto LABEL_195;
            }
            if ( (unsigned __int16)(v163 - 1) > 0x270Fu )
              goto LABEL_175;
            if ( (v162 & 0x10) != 0 )
            {
              if ( (v162 & 4) != 0 || HIWORD(v163) < (unsigned __int16)v163 )
                goto LABEL_175;
              v56 = HIWORD(v163) <= 0x2710u;
LABEL_195:
              if ( !v56 )
                goto LABEL_175;
            }
          }
          PspLockJobChain((__int64)v14, (__int64)Thread, 0);
          v57 = *((_DWORD *)v14 + 326);
          if ( v131 )
          {
            if ( (v57 & 0x20) == 0 )
            {
              RateControl = PspAllocateRateControl(2LL);
              v58 = RateControl;
              if ( !RateControl )
              {
                v15 = -1073741670;
                goto LABEL_203;
              }
              *((_QWORD *)v14 + 126) = RateControl;
              goto LABEL_199;
            }
          }
          else if ( (v57 & 0x20) == 0 )
          {
            v15 = -1073741811;
            goto LABEL_203;
          }
          v58 = 0LL;
LABEL_199:
          v59 = (PSECURITY_SUBJECT_CONTEXT)(v14 + 1008);
          v136 = (PSECURITY_SUBJECT_CONTEXT)(v14 + 1008);
          *(_DWORD *)(*((_QWORD *)v14 + 126) + 40LL) = 0;
          v60 = v163;
          *(_DWORD *)(*((_QWORD *)v14 + 126) + 44LL) = v163;
          if ( v131 )
          {
            if ( (v55 & 4) != 0 )
            {
              *((_DWORD *)v59->ClientToken + 10) |= 1u;
              WORD1(v139) = v60;
            }
            if ( (v55 & 2) != 0 )
            {
              *((_DWORD *)v59->ClientToken + 10) |= 4u;
              HIDWORD(v139) = 0;
            }
            else
            {
              HIDWORD(v139) = 1;
              if ( (v55 & 0x14) == 0 )
                WORD1(v139) = 10000;
            }
            if ( (v55 & 8) != 0 )
              *((_DWORD *)v59->ClientToken + 10) |= 2u;
            if ( (v55 & 0x10) != 0 )
              *((_DWORD *)v59->ClientToken + 10) |= 0x20u;
            ClientToken = (__int64)v59->ClientToken;
            if ( v59->ClientToken == v58 )
            {
              *(_QWORD *)(ClientToken + 128) = v139;
              v15 = PspAddSchedulingGroupToJobChain(*((_QWORD *)v14 + 134), (__int64)v14);
              v133 = v15;
              if ( v15 < 0 )
              {
                v99 = v136;
                if ( v136->ClientToken )
                {
                  PspFreeRateControl((char **)v136->ClientToken, 2u);
                  v99->ClientToken = 0LL;
                }
                goto LABEL_203;
              }
              _InterlockedOr((volatile signed __int32 *)v14 + 326, 0x20u);
              v14 = (char *)Object;
              v59 = v136;
            }
            else
            {
              v153 = ClientToken + 128;
              if ( (*(_DWORD *)(ClientToken + 40) & 4) != 0 )
                KeSetSchedulingGroupWeights(1u, (__int64)&v153, (__int64)&v139);
              else
                KeSetSchedulingGroupCpuRates(ClientToken, &v153, &v139);
            }
            v154 = *((_DWORD *)v59->ClientToken + 10);
            v155 = *((_DWORD *)v59->ClientToken + 11);
          }
          else
          {
            v139 = 0x327102710LL;
            *((_DWORD *)v59->ClientToken + 10) |= 0x40u;
            v61 = v139;
            *((_DWORD *)v59->ClientToken + 11) = v139;
            v153 = (__int64)v59->ClientToken + 128;
            *((_QWORD *)v14 + 128) += KeQuerySchedulingGroupReadyTime(v153);
            KeSetSchedulingGroupCpuRates(v62, &v153, &v139);
            v154 = 0;
            v155 = v61;
          }
          v15 = 0;
          if ( (PerfGlobalGroupMask & 0x80000) != 0 )
            EtwTraceJobSetQuery((_DWORD)v14, 15, (unsigned int)&v154, 0, 0, 1829);
LABEL_203:
          PspUnlockJobChain((__int64)v14, (__int64)Thread, 0);
          goto LABEL_30;
        }
LABEL_391:
        v137 = 0LL;
        v100 = 16;
        if ( JobInformationClass != JobObjectGroupInformationEx )
          v100 = 2;
        LODWORD(v145) = v100;
        v102 = (unsigned int)v4 % v100;
        v101 = (unsigned int)v4 / v100;
        v103 = (unsigned int)v4 / v100;
        if ( v102 )
        {
          v15 = -1073741820;
          goto LABEL_30;
        }
        v150 = v101;
        LODWORD(v223[0]) = 1310721;
        memset((char *)v223 + 4, 0, 0xA4uLL);
        v104 = KeQueryActiveGroupCount() - 1;
        LOWORD(v135) = v104;
        v105 = (unsigned int)v145;
        while ( v103 )
        {
          if ( JobInformationClass == JobObjectGroupInformationEx )
          {
            v106 = *v10;
            v168 = v106;
            epi16 = _mm_extract_epi16(v106, 4);
            v168.m128i_i16[4] = epi16;
            v138 = epi16;
            v147 = v106.m128i_i64[0];
          }
          else
          {
            v138 = v10->m128i_i16[0];
            v147 = qword_140401408[v138];
            epi16 = v138;
          }
          v108 = qword_140401408[epi16];
          v166 = v108;
          if ( v138 > v104 || *((_QWORD *)v223 + epi16 + 1) || v147 != (v108 & v147) )
          {
            v15 = -1073741811;
            v133 = -1073741811;
            v14 = (char *)Object;
            break;
          }
          if ( LOWORD(v223[0]) <= v138 )
            LOWORD(v223[0]) = epi16 + 1;
          *((_QWORD *)v223 + epi16 + 1) |= v147;
          v103 = --v150;
          v10 = (__m128i *)((char *)Src + v105);
          Src = (char *)Src + v105;
          v15 = v133;
          v14 = (char *)Object;
          v104 = v135;
        }
        PoolWithTag = 0LL;
        if ( v15 < 0 )
          goto LABEL_30;
        Resource = (PERESOURCE)(v14 + 432);
        if ( !*((_QWORD *)v14 + 54) )
        {
          PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
          if ( !PoolWithTag )
          {
            v15 = -1073741670;
            goto LABEL_30;
          }
          v137 = (PSECURITY_SUBJECT_CONTEXT)PsChargeSharedPoolQuota(
                                              KeGetCurrentThread()->ApcState.Process,
                                              0x28uLL,
                                              0LL);
          if ( !v137 )
          {
            ExFreePoolWithTag(PoolWithTag, 0x614A7350u);
            v15 = -1073741670;
LABEL_498:
            v14 = (char *)Object;
            goto LABEL_30;
          }
          v14 = (char *)Object;
        }
        SeCaptureSubjectContextEx(Thread, Thread->ApcState.Process, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8]);
        v136 = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8];
        if ( PreviousMode )
        {
          RequiredPrivileges.PrivilegeCount = 1;
          RequiredPrivileges.Control = 1;
          RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
          RequiredPrivileges.Privilege[0].Attributes = 0;
          v110 = SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8], 1);
          *(_DWORD *)SubjectContext ^= (*(_DWORD *)SubjectContext ^ v110) & 1;
        }
        else
        {
          *(_DWORD *)SubjectContext |= 1u;
        }
        P = v14 + 56;
        ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
        v15 = PspEnumJobsAndProcessesInJobHierarchy(
                v14,
                0,
                0,
                (int)PspSetAffinityLimitCallback,
                (__int64)SubjectContext,
                1);
        v133 = v15;
        v111 = (char *)v137;
        if ( v15 >= 0 )
        {
          v112 = Resource;
          Flink = Resource->SystemResourcesList.Flink;
          if ( Resource->SystemResourcesList.Flink )
          {
            v177 = *(_OWORD *)&Flink->Blink;
            v178 = *(_OWORD *)&Flink[1].Blink;
            v136 = (PSECURITY_SUBJECT_CONTEXT)&v177;
          }
          else
          {
            Resource->SystemResourcesList.Flink = PoolWithTag;
            *((_QWORD *)v14 + 55) = v111;
            PoolWithTag = 0LL;
            v136 = 0LL;
          }
          v114 = v112->SystemResourcesList.Flink;
          *v114 = *(struct _LIST_ENTRY *)SubjectContext;
          v114[1] = *(struct _LIST_ENTRY *)&SubjectContext[16];
          v114[2].Flink = *(struct _LIST_ENTRY **)&SubjectContext[32];
          v156 = (__int64)v14;
          v158 = *((_DWORD *)v14 + 64);
          v157 = -17;
          *(_OWORD *)(v14 + 264) = v223[0];
          *(_OWORD *)(v14 + 280) = v223[1];
          *(_OWORD *)(v14 + 296) = v223[2];
          *(_OWORD *)(v14 + 312) = v223[3];
          *(_OWORD *)(v14 + 328) = v223[4];
          *(_OWORD *)(v14 + 344) = v223[5];
          *(_OWORD *)(v14 + 360) = v223[6];
          *(_OWORD *)(v14 + 376) = v223[7];
          *(_OWORD *)(v14 + 392) = v223[8];
          *(_OWORD *)(v14 + 408) = v223[9];
          *((_QWORD *)v14 + 53) = *(_QWORD *)&v223[10];
          if ( JobInformationClass == JobObjectGroupInformationEx
            && (unsigned int)KeIsEmptyAffinityEx((_WORD *)v14 + 132) )
          {
            *((_DWORD *)v14 + 64) &= ~0x10u;
            _InterlockedAnd((volatile signed __int32 *)v14 + 326, 0xFFFFFFFD);
          }
          else
          {
            *((_DWORD *)v14 + 64) |= 0x10u;
            _InterlockedOr((volatile signed __int32 *)v14 + 326, 2u);
          }
          v14 = (char *)Object;
          PspEnumJobsAndProcessesInJobHierarchy(
            (char *)Object,
            (int)PspSetJobLimitsJobPreCallback,
            0,
            (int)PspSetJobLimitsProcessCallback,
            (__int64)&v156,
            5);
          v15 = v133;
        }
        ExReleaseResourceLite((PERESOURCE)P);
        if ( v136 )
          SeReleaseSubjectContext(v136);
        if ( PoolWithTag )
        {
          ExFreePoolWithTag(PoolWithTag, 0x614A7350u);
          PsReturnSharedPoolQuota(v111, 0x28uLL, 0LL);
        }
        goto LABEL_30;
      }
      switch ( JobInformationClass )
      {
        case JobObjectNotificationLimitInformation:
LABEL_33:
          if ( (_DWORD)v4 == 56 )
          {
            v216 = *v10;
            v217 = v10[1];
            v218 = v10[2];
            v219 = v10[3].m128i_i64[0];
            v17 = (unsigned int)v219;
            v200 = v219;
            v18 = v216.m128i_i64[0];
            v194 = v216.m128i_i64[0];
            v19 = _mm_srli_si128(v216, 8).m128i_u64[0];
            v195 = v19;
            v20 = v217.m128i_i64[0];
            v196 = v217.m128i_i64[0];
            v21 = _mm_srli_si128(v217, 8).m128i_u64[0];
            v201 = v21;
            v22 = v218.m128i_i64[0];
            v197 = v218.m128i_i64[0];
            v198 = _mm_cvtsi128_si32(_mm_srli_si128(v218, 8));
            v199 = _mm_cvtsi128_si32(_mm_srli_si128(v218, 12));
            v23 = 2589188;
            v151 = 2589188;
          }
          else
          {
            if ( (_DWORD)v4 == 48 )
            {
              v220 = *v10;
              v221 = v10[1];
              v222 = v10[2];
              v17 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v222, 8));
              v200 = v17;
              v18 = v220.m128i_i64[0];
              v194 = v220.m128i_i64[0];
              v19 = _mm_srli_si128(v220, 8).m128i_u64[0];
              v195 = v19;
              v20 = v221.m128i_i64[0];
              v196 = v221.m128i_i64[0];
              v22 = _mm_srli_si128(v221, 8).m128i_u64[0];
              v197 = v22;
              v198 = _mm_cvtsi128_si32(v222);
              v199 = _mm_cvtsi128_si32(_mm_srli_si128(v222, 4));
              v23 = 459268;
              v151 = 459268;
            }
            else
            {
              memmove(&v194, v10, v4);
              v23 = 2064900;
              v151 = 2064900;
              v17 = v200;
              v22 = v197;
              v20 = v196;
              v19 = v195;
              v18 = v194;
            }
            v21 = v201;
          }
          if ( (~v23 & (unsigned int)v17) != 0 )
            goto LABEL_443;
          if ( (v17 & 0x8000) != 0 )
          {
            if ( v21 < 0x1000 )
              goto LABEL_443;
          }
          else
          {
            v21 = 0LL;
            v201 = 0LL;
          }
          if ( (v17 & 0x200) != 0 )
          {
            if ( v22 < 0x1000 || v22 < v21 )
              goto LABEL_443;
          }
          else
          {
            v197 = 0LL;
          }
          if ( (v17 & 4) != 0 )
          {
            if ( !v20 )
              goto LABEL_443;
          }
          else
          {
            v196 = 0LL;
          }
          if ( (v17 & 0x10000) != 0 )
          {
            if ( !v18 )
              goto LABEL_443;
          }
          else
          {
            v194 = 0LL;
          }
          if ( (v17 & 0x20000) == 0 )
          {
            v195 = 0LL;
LABEL_51:
            for ( i = 0LL; (int)i < 3; i = (unsigned int)(v27 + 1) )
            {
              PspNotificationLimitRateControlToleranceField(&v194, i, v17);
              PspNotificationLimitRateControlToleranceIntervalField(&v194);
              v26 = PspRateControlLimitFlag(v25);
              if ( (v26 & (unsigned int)v17) != 0 )
              {
                if ( !*v28 || *v28 > 3 || !*v29 || *v29 > 3 )
                  goto LABEL_443;
              }
              else
              {
                *v28 = 0;
                *v29 = 0;
                v17 = v200;
              }
            }
            v30 = (int **)(v14 + 984);
            if ( *((_QWORD *)v14 + 123) )
            {
              v31 = 0LL;
              v136 = 0LL;
            }
            else
            {
              v31 = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x624A7350u);
              if ( !v31 )
              {
                v15 = -1073741670;
                goto LABEL_30;
              }
              v136 = (PSECURITY_SUBJECT_CONTEXT)PsChargeSharedPoolQuota(
                                                  KeGetCurrentThread()->ApcState.Process,
                                                  0x88uLL,
                                                  0LL);
              if ( !v136 )
              {
                ExFreePoolWithTag(v31, 0x624A7350u);
                v15 = -1073741670;
                v14 = (char *)Object;
                goto LABEL_30;
              }
              memset(v31, 0, 0x88uLL);
              v14 = (char *)Object;
            }
            Resource = (PERESOURCE)(v14 + 56);
            ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
            if ( *v30 )
            {
              if ( v31 )
              {
                ExFreePoolWithTag(v31, 0x624A7350u);
                PsReturnSharedPoolQuota((char *)v136, 0x88uLL, 0LL);
              }
            }
            else
            {
              *v30 = (int *)v31;
              *((_QWORD *)v14 + 124) = v136;
            }
            v32 = *v30;
            v33 = **v30;
            *((_QWORD *)v32 + 1) = v194;
            *((_QWORD *)v32 + 2) = v195;
            *((_QWORD *)v32 + 3) = v196;
            v34 = 0LL;
            v35 = v32 + 15;
            while ( (int)v34 < 3 )
            {
              v36 = (_DWORD *)PspNotificationLimitRateControlToleranceField(&v194, v34, v35);
              *(_DWORD *)(v37 - 12) = *v36;
              v38 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(&v194);
              *v39 = *v38;
              v34 = (unsigned int)(v40 + 1);
              v35 = v39 + 1;
            }
            v136 = (PSECURITY_SUBJECT_CONTEXT)(v14 + 1032);
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 1032), 0LL);
            *((_QWORD *)v32 + 4) = v201 >> 12;
            *((_QWORD *)v32 + 5) = v197 >> 12;
            **v30 = v200;
            PspUnlockJobMemoryLimitsExclusive(v14, 0LL, 0LL);
            if ( (**v30 & 0xFFFF7DFF) != 0 )
            {
              _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
              v14 = (char *)Object;
            }
            if ( v33 )
            {
              v42 = *v30;
              if ( **v30 )
              {
LABEL_72:
                if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                  EtwTraceJobSetQuery((_DWORD)v14, JobInformationClass, (unsigned int)&v194, 0, 0, 1829);
                ExReleaseResourceLite(Resource);
                ExAcquirePushLockSharedEx((ULONG_PTR)v136, 0LL);
                v43 = *((_QWORD *)v14 + 165);
                v14 = (char *)Object;
                JobMemoryUsageNotificationViolations = PspGetJobMemoryUsageNotificationViolations(
                                                         (__int64)Object,
                                                         *((_QWORD *)Object + 122),
                                                         *((_QWORD *)Object + 122) + v43,
                                                         33280);
                PspUnlockJobMemoryLimitsShared((__int64)v14, 0LL);
                if ( JobMemoryUsageNotificationViolations )
                {
                  PspScheduleEnforcementWorker(*((_QWORD *)v14 + 135), v45);
                  v14 = (char *)Object;
                }
                v15 = 0;
                goto LABEL_30;
              }
            }
            else
            {
              v42 = *v30;
              if ( !**v30 )
                goto LABEL_72;
            }
            PspEnumJobsAndProcessesInJobHierarchy(v14, (int)PspSetJobNotificationCountCallback, 0, 0, (__int64)v42, 5);
            goto LABEL_72;
          }
          if ( v19 )
            goto LABEL_51;
LABEL_443:
          v15 = -1073741811;
          goto LABEL_30;
        case JobObjectBasicLimitInformation:
LABEL_110:
          memmove(&v204, v10, v4);
          if ( (unsigned int)v4 < 0x98 )
            memset((char *)&v204 + v4, 0, 152 - v4);
          if ( JobInformationClass == JobObjectBasicLimitInformation )
          {
            v48 = -256;
          }
          else
          {
            v48 = -6324224;
            if ( (_DWORD)v4 == 144 )
              v48 = -32768;
          }
          v131 = v48;
          if ( (v48 & v206) != 0 )
            goto LABEL_308;
          memset(&v223[11], 0, 0x620uLL);
          memset(SubjectContext, 0, sizeof(SubjectContext));
          v49 = v206;
          LODWORD(v223[27]) = v206;
          P = 0LL;
          v136 = 0LL;
          v137 = 0LL;
          DWORD1(v223[27]) = (v206 & 8) != 0 ? v209 : 0;
          if ( (v206 & 0x20) != 0 )
          {
            v85 = v211;
            if ( v211 > 6 )
              goto LABEL_308;
            if ( v211 - 3 <= 1 )
            {
              v86 = SeCheckPrivilegedObject(SeIncreaseBasePriorityPrivilege, (__int64)v145, 2u, PreviousMode) & 1;
              LOBYTE(v87) = 4 * v86;
              v135 = v87;
              if ( !v86 )
                goto LABEL_313;
              v49 = v206;
            }
            BYTE9(v223[65]) = v85;
          }
          else
          {
            BYTE9(v223[65]) = 0;
          }
          if ( (v49 & 0x80u) != 0 )
          {
            v88 = v212;
            if ( v212 >= 0xA )
              goto LABEL_308;
            if ( v212 > 5 )
            {
              v89 = SeCheckPrivilegedObject(SeIncreaseBasePriorityPrivilege, (__int64)v145, 2u, PreviousMode) & 1;
              LOBYTE(v90) = 4 * v89;
              v135 = v90;
              if ( !v89 )
                goto LABEL_313;
              v49 = v206;
            }
            DWORD1(v223[41]) = v88;
          }
          else
          {
            DWORD1(v223[41]) = 5;
          }
          if ( (v49 & 2) != 0 )
          {
            if ( !v204 )
              goto LABEL_308;
            *(_QWORD *)&v223[25] = v204;
          }
          else
          {
            *(_QWORD *)&v223[25] = 0LL;
          }
          LODWORD(v145) = v49 & 4;
          if ( (v49 & 4) != 0 )
          {
            if ( !v205 )
              goto LABEL_308;
            *((_QWORD *)&v223[25] + 1) = v205;
          }
          if ( (v49 & 1) == 0 )
          {
            v223[26] = 0uLL;
            goto LABEL_125;
          }
          v91 = v207;
          if ( !v207 && !v208 || v207 == -1LL && v208 == -1LL || v207 > v208 || v207 < 0x14000 )
            goto LABEL_308;
          if ( v207 <= PspMinimumWorkingSet )
          {
LABEL_333:
            *(_QWORD *)&v223[26] = v91;
            *((_QWORD *)&v223[26] + 1) = v208;
LABEL_125:
            if ( (v49 & 0x100) != 0 )
            {
              if ( v213 < 0x1000 )
                goto LABEL_308;
              *(_QWORD *)&v223[47] = v213 >> 12;
            }
            else
            {
              *(_QWORD *)&v223[47] = 0LL;
            }
            if ( (v49 & 0x200) != 0 )
            {
              if ( v214 < 0x1000 )
                goto LABEL_308;
              *((_QWORD *)&v223[47] + 1) = v214 >> 12;
            }
            else
            {
              *((_QWORD *)&v223[47] + 1) = 0LL;
            }
            if ( (v49 & 0x200000) != 0 )
            {
              if ( v215 < 0x1000 )
                goto LABEL_308;
              *(_QWORD *)&v223[48] = v215 >> 12;
            }
            else
            {
              *(_QWORD *)&v223[48] = 0LL;
            }
            DWORD2(v223[27]) = 1310721;
            memset((char *)&v223[27] + 12, 0, 0xA4uLL);
            if ( (v223[27] & 0x10) == 0 )
            {
              LOBYTE(v50) = v135;
              goto LABEL_133;
            }
            if ( (*((_DWORD *)v14 + 326) & 2) == 0 && v210 )
            {
              if ( !*((_QWORD *)v14 + 54) )
              {
                v92 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
                P = v92;
                if ( !v92 )
                {
                  v15 = -1073741670;
                  goto LABEL_30;
                }
                v136 = (PSECURITY_SUBJECT_CONTEXT)PsChargeSharedPoolQuota(
                                                    KeGetCurrentThread()->ApcState.Process,
                                                    0x28uLL,
                                                    0LL);
                if ( !v136 )
                {
                  ExFreePoolWithTag(v92, 0x614A7350u);
                  v15 = -1073741670;
                  v14 = (char *)Object;
                  goto LABEL_30;
                }
                v15 = v133;
                v14 = (char *)Object;
              }
              SeCaptureSubjectContextEx(Thread, Thread->ApcState.Process, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8]);
              v137 = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8];
              if ( PreviousMode )
              {
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                v93 = SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8], 1);
                *(_DWORD *)SubjectContext ^= (*(_DWORD *)SubjectContext ^ v93) & 1;
              }
              else
              {
                *(_DWORD *)SubjectContext |= 1u;
              }
              v50 = v135;
              LOBYTE(v50) = v135 | 2;
              v135 = v50;
LABEL_133:
              v134 = v50;
              Resource = (PERESOURCE)(v14 + 56);
              ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
              if ( (v223[27] & 4) == 0 )
              {
                if ( (v223[27] & 0x40) != 0 )
                {
                  LODWORD(v223[27]) |= *((_DWORD *)v14 + 64) & 4;
                  *((_QWORD *)&v223[25] + 1) = *((_QWORD *)v14 + 29);
                }
                else
                {
                  *((_QWORD *)&v223[25] + 1) = 0LL;
                }
              }
              LODWORD(v223[27]) &= ~0x40u;
              v51 = v135;
              PreviousMode = (v135 & 2) != 0;
              if ( (v135 & 2) != 0 )
              {
                if ( (*((_DWORD *)v14 + 326) & 2) == 0 )
                {
                  if ( (*((_DWORD *)v14 + 64) & 0x10) != 0 )
                  {
                    KeFirstGroupAffinityEx(&v168, (_WORD *)v14 + 132);
                    Group = v168.m128i_u16[4];
                  }
                  else
                  {
                    Group = KeGetCurrentPrcb()->Group;
                    v168.m128i_i16[4] = Group;
                  }
                  v166 = qword_140401408[Group];
                  if ( v210 == (v166 & v210) )
                  {
                    if ( WORD4(v223[27]) <= (unsigned int)v168.m128i_i16[4] )
                      WORD4(v223[27]) = v168.m128i_i16[4] + 1;
                    *((_QWORD *)&v223[28] + Group) |= v210;
                    v14 = (char *)Object;
                    v15 = PspEnumJobsAndProcessesInJobHierarchy(
                            (char *)Object,
                            0,
                            0,
                            (int)PspSetAffinityLimitCallback,
                            (__int64)SubjectContext,
                            1);
                    v133 = v15;
                    if ( v15 >= 0 )
                    {
                      v95 = *((_QWORD *)v14 + 54);
                      if ( v95 )
                      {
                        v177 = *(_OWORD *)(v95 + 8);
                        v178 = *(_OWORD *)(v95 + 24);
                        v137 = (PSECURITY_SUBJECT_CONTEXT)&v177;
                      }
                      else
                      {
                        *((_QWORD *)v14 + 54) = P;
                        *((_QWORD *)v14 + 55) = v136;
                        P = 0LL;
                        v137 = 0LL;
                      }
                      v96 = *((_QWORD *)v14 + 54);
                      *(_OWORD *)v96 = *(_OWORD *)SubjectContext;
                      *(_OWORD *)(v96 + 16) = *(_OWORD *)&SubjectContext[16];
                      *(_QWORD *)(v96 + 32) = *(_QWORD *)&SubjectContext[32];
                      goto LABEL_138;
                    }
                  }
                  else
                  {
                    v15 = -1073741811;
                    v133 = -1073741811;
                    v14 = (char *)Object;
                  }
                  v51 = v135;
LABEL_149:
                  LOBYTE(v51) = v51 & 1;
                  v135 = v51;
                  if ( (_BYTE)v51 )
                  {
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140359F30, 0LL);
                    _InterlockedOr((volatile signed __int32 *)v14 + 326, 0x100u);
                    v14 = (char *)Object;
                    v97 = (char *)Object + 40;
                    for ( j = (char *)*((_QWORD *)Object + 5); j != v97; j = *(char **)j )
                    {
                      if ( (*((_DWORD *)j - 92) & 1) == 0 )
                        PspAddProcessToWorkingSetChangeList(j - 1136);
                    }
                    v15 = v133;
                  }
                  ExReleaseResourceLite(Resource);
                  if ( (_BYTE)v135 )
                    PspApplyWorkingSetLimits(v14);
                  if ( v137 )
                    SeReleaseSubjectContext(v137);
                  if ( P )
                  {
                    ExFreePoolWithTag(P, 0x614A7350u);
                    PsReturnSharedPoolQuota((char *)v136, 0x28uLL, 0LL);
                  }
                  goto LABEL_30;
                }
              }
              else if ( (v223[27] & 0x4000) == 0 || (*((_DWORD *)v14 + 326) & 2) != 0 )
              {
LABEL_138:
                v52 = (__int32 *)(v14 + 256);
                if ( (*((_DWORD *)v14 + 64) & 1) != 0 && (v223[27] & 1) == 0 )
                {
                  _InterlockedOr(v129, 0);
                  if ( (qword_140359F30 & 1) != 0 )
                    ExfAcquireReleasePushLockExclusive(&qword_140359F30);
                  v14 = (char *)Object;
                  v15 = v133;
                }
                v156 = (__int64)v14;
                v158 = *v52;
                *((_OWORD *)v14 + 15) = v223[26];
                *((_DWORD *)v14 + 65) = DWORD1(v223[27]);
                if ( PreviousMode )
                {
                  *(_OWORD *)(v14 + 264) = *(_OWORD *)((char *)&v223[27] + 8);
                  *(_OWORD *)(v14 + 280) = *(_OWORD *)((char *)&v223[28] + 8);
                  *(_OWORD *)(v14 + 296) = *(_OWORD *)((char *)&v223[29] + 8);
                  *(_OWORD *)(v14 + 312) = *(_OWORD *)((char *)&v223[30] + 8);
                  *(_OWORD *)(v14 + 328) = *(_OWORD *)((char *)&v223[31] + 8);
                  *(_OWORD *)(v14 + 344) = *(_OWORD *)((char *)&v223[32] + 8);
                  *(_OWORD *)(v14 + 360) = *(_OWORD *)((char *)&v223[33] + 8);
                  *(_OWORD *)(v14 + 376) = *(_OWORD *)((char *)&v223[34] + 8);
                  *(_OWORD *)(v14 + 392) = *(_OWORD *)((char *)&v223[35] + 8);
                  *(_OWORD *)(v14 + 408) = *(_OWORD *)((char *)&v223[36] + 8);
                  *((_QWORD *)v14 + 53) = *((_QWORD *)&v223[37] + 1);
                }
                v14[873] = BYTE9(v223[65]);
                *((_DWORD *)v14 + 121) = DWORD1(v223[41]);
                *((_OWORD *)v14 + 14) = v223[25];
                if ( JobInformationClass == JobObjectExtendedLimitInformation )
                {
                  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 1032), 0LL);
                  *v52 = LODWORD(v223[27]) | v131 & *v52;
                  *((_OWORD *)v14 + 36) = v223[47];
                  *((_QWORD *)v14 + 74) = *(_QWORD *)&v223[48];
                  PspUnlockJobMemoryLimitsExclusive(v14, 0LL, 0LL);
                }
                else
                {
                  *v52 = LODWORD(v223[27]) | v131 & *v52;
                }
                v157 = ~(v158 | *v52);
                if ( (_DWORD)v145 )
                {
                  PspEnumJobsAndProcessesInJobHierarchy(
                    v14,
                    0,
                    0,
                    (int)PspSetJobTimeLimitCallback,
                    (__int64)(v14 + 232),
                    1);
                  *((_QWORD *)v14 + 23) = 0LL;
                  *((_QWORD *)v14 + 24) = 0LL;
                  KeResetEvent((PRKEVENT)v14);
                }
                if ( (*v52 & 6) != 0 )
                {
                  _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
                  v15 = v133;
                  v14 = (char *)Object;
                }
                v53 = v157;
                PspEnumJobsAndProcessesInJobHierarchy(
                  v14,
                  (int)PspSetJobLimitsJobPreCallback,
                  (int)PspSetJobLimitsJobPostCallback,
                  (int)PspSetJobLimitsProcessCallback,
                  (__int64)&v156,
                  5);
                v51 = (unsigned __int8)v135 | 1;
                if ( (v53 & 1) != 0 )
                  v51 = v134;
                goto LABEL_149;
              }
              v15 = -1073741811;
              v133 = -1073741811;
              goto LABEL_149;
            }
LABEL_308:
            v15 = -1073741811;
            goto LABEL_30;
          }
          if ( SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
          {
            v49 = v206;
            goto LABEL_333;
          }
LABEL_313:
          v15 = -1073741727;
          goto LABEL_30;
        case JobObjectBasicUIRestrictions:
          v144 = v10->m128i_i32[0];
          if ( (v144 & 0xFFFFFF00) != 0 )
          {
            v15 = -1073741811;
            goto LABEL_30;
          }
          v80 = 8;
          PspLockJobChain((__int64)v14, (__int64)Thread, 0);
          if ( PspDoesJobHierarchyPermitUILimits(v14, 0) )
          {
            if ( *((_DWORD *)v14 + 120) == -2 )
            {
              v15 = -1073741790;
            }
            else
            {
              v14 = (char *)Object;
              PspBindProcessSessionToJob((__int64)Object, (__int64)KeGetCurrentThread()->ApcState.Process);
              v165 = *v81;
              if ( v165 > 0xFFFFFFFD
                || v144 == *((_DWORD *)v14 + 112)
                || (PspUnlockJobChain((__int64)v14, (__int64)Thread, 1),
                    v80 = 0,
                    v179 = v14,
                    v180 = 0,
                    v181 = v144,
                    v15 = PsInvokeWin32Callout(6, (__int64)&v179, 1, (__int64)&v165),
                    v133 = v15,
                    v15 >= 0) )
              {
                *((_DWORD *)v14 + 112) = v144;
                _InterlockedOr((volatile signed __int32 *)v14 + 326, 0x10u);
                v15 = v133;
                v14 = (char *)Object;
              }
            }
          }
          else
          {
            v15 = -1073741637;
          }
          if ( (unsigned __int8)v80 < 8u )
          {
            PspUnlockJob((__int64)v14, (__int64)Thread);
            goto LABEL_30;
          }
          goto LABEL_203;
        case JobObjectSecurityLimitInformation:
          v190 = *v10;
          v191 = v10[1];
          v192 = v10[2].m128i_i64[0];
          v15 = (v190.m128i_i32[0] & 0xFFFFFFF0) != 0 ? -1073741811 : -1073741637;
          goto LABEL_30;
      }
      if ( JobInformationClass != JobObjectEndOfJobTimeInformation )
      {
        switch ( JobInformationClass )
        {
          case JobObjectAssociateCompletionPortInformation:
            MiniCompletionPacket = 0LL;
            BugCheckParameter1 = *v10;
            if ( BugCheckParameter1.m128i_i64[1] )
            {
              v15 = ObpReferenceObjectByHandleWithTag(
                      BugCheckParameter1.m128i_u64[1],
                      2,
                      (__int64)IoCompletionObjectType,
                      PreviousMode,
                      1649046352,
                      &v169,
                      0LL,
                      0LL);
              if ( v15 >= 0 )
              {
                if ( *((_QWORD *)v14 + 125)
                  || (MiniCompletionPacket = IoAllocateMiniCompletionPacket(
                                               (__int64)PspNotificationPacketCallback,
                                               (__int64)v14)) != 0 )
                {
                  v147 = MiniCompletionPacket;
                  ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
                  if ( *((_QWORD *)v14 + 57)
                    || (*((_DWORD *)v14 + 64) & 0x2000) != 0 && (*((_DWORD *)v14 + 326) & 1) != 0 )
                  {
                    ExReleaseResourceLite((PERESOURCE)(v14 + 56));
                    ObfDereferenceObjectWithTag(v169, 0x624A7350u);
                    v15 = -1073741811;
                  }
                  else
                  {
                    v47 = *((_QWORD *)v14 + 125);
                    if ( !v47 )
                      *((_QWORD *)v14 + 125) = MiniCompletionPacket;
                    MiniCompletionPacket = v147 & -(__int64)(v47 != 0);
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 1032), 0LL);
                    *((_QWORD *)v14 + 58) = BugCheckParameter1.m128i_i64[0];
                    *((_QWORD *)v14 + 57) = v169;
                    *((_QWORD *)v14 + 59) = 0LL;
                    PspUnlockJobMemoryLimitsExclusive(v14, 0LL, 0LL);
                    if ( (*((_DWORD *)v14 + 219) & 0x40) != 0 )
                      PspEnumJobsAndProcessesInJobHierarchy(
                        v14,
                        0,
                        0,
                        (int)PspAssociateCompletionPortCallback,
                        (__int64)v14,
                        1);
                    ExReleaseResourceLite((PERESOURCE)(v14 + 56));
                  }
                }
                else
                {
                  v15 = -1073741670;
                }
              }
              if ( MiniCompletionPacket )
              {
                *(_QWORD *)(MiniCompletionPacket + 56) = 0LL;
                IopFreeMiniCompletionPacket((_SLIST_ENTRY *)MiniCompletionPacket);
              }
            }
            else
            {
              ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
              if ( v14 )
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 1032), 0LL);
              v54 = (void *)*((_QWORD *)v14 + 57);
              *((_QWORD *)v14 + 57) = 0LL;
              PspUnlockJobMemoryLimitsExclusive(v14, 0LL, 0LL);
              ExReleaseResourceLite((PERESOURCE)(v14 + 56));
              if ( v54 )
                ObfDereferenceObjectWithTag(v54, 0x624A7350u);
            }
            goto LABEL_30;
          case JobObjectExtendedLimitInformation:
            goto LABEL_110;
          case JobObjectGroupInformation:
            goto LABEL_391;
        }
LABEL_474:
        v15 = -1073741821;
        goto LABEL_30;
      }
      v173 = v10->m128i_i32[0];
      v83 = v173;
      if ( v173 <= 1 )
      {
        ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
        *((_DWORD *)v14 + 113) = v83;
        v84 = (struct _ERESOURCE *)(v14 + 56);
LABEL_302:
        ExReleaseResourceLite(v84);
        goto LABEL_30;
      }
LABEL_441:
      v15 = -1073741811;
      goto LABEL_30;
    }
    if ( JobInformationClass > JobObjectServerSiloInitialize )
    {
      switch ( JobInformationClass )
      {
        case JobObjectServerSiloRunningState:
          v161 = v10->m128i_i32[0];
          if ( !v145 || !PspJobIsAppSilo((__int64)v14) )
          {
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_439;
            PsGetJobServerSilo((__int64)v14, &v164);
            if ( PsIsHostSilo(v164) )
              goto LABEL_440;
            ServerSiloStatePointer = (volatile signed __int32 *)PspGetServerSiloStatePointer(v164);
            v127 = *ServerSiloStatePointer;
            do
            {
              if ( v127 != 1 || v161 != 2 )
              {
                v15 = -1073700861;
                goto LABEL_498;
              }
              v127 = _InterlockedCompareExchange(ServerSiloStatePointer, 2, 1);
            }
            while ( v127 != 1 );
            EtwTraceJobServerSiloStateChange(v164, 2LL);
LABEL_496:
            v15 = 0;
            goto LABEL_498;
          }
          if ( v124 != 2 )
            goto LABEL_441;
          v123 = (struct _ERESOURCE *)(v14 + 56);
          ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
          if ( *((_DWORD *)v14 + 302) )
          {
            v15 = -1073740529;
          }
          else
          {
            v125 = _interlockedbittestandset((volatile signed __int32 *)v14 + 326, 0x1Du);
            v14 = (char *)Object;
            if ( v125 )
            {
              v15 = 255;
            }
            else
            {
              PspHardDereferenceSiloWorker((__int64)Object);
              v15 = 0;
            }
          }
          break;
        case JobObjectIoAttribution:
          v63 = 0;
          v185 = *v10;
          v186 = v10[1];
          v187 = v10[2];
          v188 = v10[3];
          v189 = v10[4].m128i_i64[0];
          if ( (v185.m128i_i32[0] & 0xFFFFFFFC) != 0 || (v185.m128i_i8[0] & 3) == 0 )
          {
            v15 = -1073741811;
          }
          else
          {
            v63 = 8;
            v64 = Thread;
            PspLockRootJobExclusive((__int64)v14, (__int64)Thread, &v152);
            PspLockJobConditionally((__int64)v14, &v152);
            v15 = PspSetJobIoAttribution(v14, v185.m128i_i8[0] & 1, 1, 1u);
            if ( v15 >= 0 )
            {
              PspUnlockJobConditionally((__int64)v14, &v152);
              PspUnlockJob(v152, (__int64)v64);
              v63 = 0;
            }
          }
          if ( (unsigned __int8)v63 >= 8u )
          {
            PspUnlockJobConditionally((__int64)v14, &v152);
            PspUnlockJob(v152, (__int64)Thread);
          }
          goto LABEL_30;
        case JobObjectMemoryPartitionInformation:
          v184 = v10->m128i_i64[0];
          LOBYTE(v13) = PreviousMode;
          v15 = PspSetJobMemoryPartition(v14, v13);
LABEL_30:
          KiLeaveGuardedRegionUnsafe((__int64)Thread);
          if ( v15 && (PerfGlobalGroupMask & 0x80000) != 0 )
            EtwTraceJobSetQuery((_DWORD)v14, JobInformationClass, 0, 0, v15, 1831);
          ObfDereferenceObjectWithTag(v14, 0x79517350u);
          LODWORD(v12) = v15;
          return v12;
        case JobObjectContainerTelemetryId:
          v123 = (struct _ERESOURCE *)(v14 + 56);
          ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
          if ( *((int *)v14 + 326) >= 0 )
          {
            *(__m128i *)(v14 + 1240) = *v10;
            _InterlockedOr((volatile signed __int32 *)v14 + 326, 0x80000000);
            ExReleaseResourceLite((PERESOURCE)(v14 + 56));
            goto LABEL_496;
          }
          v15 = -1073741791;
          break;
        case JobObjectSiloSystemRoot:
          if ( (*((_DWORD *)v14 + 326) & 0x40000000) != 0 )
          {
            v167 = 0LL;
            v174 = *v10;
            v118 = _mm_srli_si128(v174, 8).m128i_u64[0];
            if ( !v118 || (unsigned __int16)(v174.m128i_i16[0] - 1) > 0x206u || (v174.m128i_i8[0] & 1) != 0 )
            {
              v15 = -1073741811;
              v133 = -1073741811;
              goto LABEL_30;
            }
            if ( PreviousMode == 1 )
            {
              if ( (v118 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v119 = v118 + v174.m128i_u16[0];
              if ( v119 > 0x7FFFFFFF0000LL || v119 < v118 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v120 = v174.m128i_u16[0];
            v121 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v174.m128i_u16[0], 0x72537350u);
            v122 = v121;
            v167 = v121;
            if ( !v121 )
            {
              v15 = -1073741670;
              v133 = -1073741670;
              goto LABEL_30;
            }
            memmove(v121, (const void *)v118, v120);
            if ( wcsnlen(v122, v120 >> 1) == v120 >> 1 )
            {
              v174.m128i_i64[1] = (__int64)v122;
              v15 = PspAssignSiloSystemRootPath(v14, &v174);
            }
            else
            {
              v15 = -1073741811;
            }
            if ( !v122 )
              goto LABEL_30;
            v116 = 1918071632;
            v78 = (PSECURITY_SUBJECT_CONTEXT)v122;
LABEL_461:
            ExFreePoolWithTag(v78, v116);
            goto LABEL_30;
          }
LABEL_440:
          v15 = -1073740535;
          goto LABEL_30;
        case JobObjectEnergyTrackingState:
          v172 = v10->m128i_i64[0];
          v15 = PspSetEnergyTrackingStateJobTree(v14, (__int64)&v172);
          if ( v15 >= 0 )
            v15 = 0;
          goto LABEL_30;
        case JobObjectThreadImpersonationInformation:
          v143 = v10->m128i_i8[0];
          if ( v143 != 1 )
            goto LABEL_441;
          if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            if ( (*((_DWORD *)v14 + 326) & 0x40000000) != 0 )
            {
              v15 = (unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(v14, 2LL) == 0 ? 0xC0000022 : 0;
              goto LABEL_30;
            }
            goto LABEL_441;
          }
LABEL_439:
          v15 = -1073741727;
          goto LABEL_30;
        default:
          goto LABEL_474;
      }
      v84 = v123;
      goto LABEL_302;
    }
    switch ( JobInformationClass )
    {
      case JobObjectServerSiloInitialize:
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          goto LABEL_439;
        if ( (*((_DWORD *)v14 + 326) & 0x40000000) == 0 )
          goto LABEL_440;
        if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(v14, 4LL) )
          goto LABEL_441;
        v183 = v10->m128i_i64[0];
        LOBYTE(v117) = PreviousMode;
        Silo = PspConvertSiloToServerSilo(v14, v117);
        break;
      case JobObjectClearEvent:
        ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
        KeResetEvent((PRKEVENT)v14);
        ExReleaseResourceLite((PERESOURCE)(v14 + 56));
LABEL_190:
        v15 = 0;
        goto LABEL_30;
      case JobObjectClearPeakJobMemoryUsed:
        if ( v14 )
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 1032), 0LL);
        *((_QWORD *)v14 + 76) = 0LL;
        *((_QWORD *)v14 + 75) = 0LL;
        PspUnlockJobMemoryLimitsExclusive(v14, 0LL, 0LL);
        goto LABEL_190;
      case JobObjectIoRateControlInformation:
        v137 = 0LL;
        v176 = 0LL;
        memset(v193, 0, sizeof(v193));
        memmove(v193, v10, v4);
        if ( v193[3] )
        {
          v73 = v193[5];
          v74 = PagedPool;
          if ( !LOWORD(v193[5]) )
            goto LABEL_257;
          if ( (v193[3] & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v75 = v193[3] + LOWORD(v193[5]);
          if ( v75 > 0x7FFFFFFF0000LL || v75 < v193[3] )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
            v73 = v193[5];
          }
          if ( !v73 || (v73 & 1) != 0 )
          {
LABEL_257:
            v15 = -1073741811;
            v133 = -1073741811;
            v78 = 0LL;
            goto LABEL_264;
          }
          v160 = 1;
          if ( PreviousMode == 1 )
            v74 = 9;
          v160 = v74;
          PoolWithQuotaTag = (struct _SECURITY_SUBJECT_CONTEXT *)ExAllocatePoolWithQuotaTag(v74, v73 + 2LL, 0x624A7350u);
          v77 = PoolWithQuotaTag;
          v137 = PoolWithQuotaTag;
          v176 = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
          {
            v15 = -1073741801;
            v133 = -1073741801;
            v78 = 0LL;
LABEL_264:
            if ( !v78 )
              goto LABEL_30;
            v116 = 0;
            goto LABEL_461;
          }
          memmove(PoolWithQuotaTag, (const void *)v193[3], LOWORD(v193[5]));
          *((_WORD *)&v77->ClientToken + ((unsigned __int64)LOWORD(v193[5]) >> 1)) = 0;
          v193[3] = v77;
        }
        if ( (v193[4] & 0xFFFFFFFC00000000uLL) != 0 )
        {
          v15 = -1073741811;
        }
        else if ( (v193[10] || v193[7] || v193[2]) && !(unsigned __int8)PspIsContextAdmin() )
        {
          v15 = -1073741790;
        }
        else
        {
          v15 = PspSetJobIoRateControl((__int64)v14, (__int64)v193);
        }
        v78 = v137;
        goto LABEL_264;
      case JobObjectNetRateControlInformation:
        Silo = PspSetNetRateControl(v10, (unsigned int)v4, v14);
        break;
      case JobObjectNotificationLimitInformation2:
        goto LABEL_33;
      case JobObjectCreateSilo:
        Silo = PspCreateSilo(v14);
        break;
      case JobObjectSiloRootDirectory:
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          goto LABEL_439;
        if ( (*((_DWORD *)v14 + 326) & 0x40000000) == 0 )
          goto LABEL_440;
        if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(v14, 4LL) )
          goto LABEL_441;
        v170 = v10->m128i_i32[0];
        Silo = ObCreateSiloRootDirectory(v14);
        break;
      default:
        goto LABEL_474;
    }
    v15 = Silo;
    goto LABEL_30;
  }
  v11 = 16;
  if ( JobInformationClass != JobObjectSecurityLimitInformation )
    v11 = 2;
  LODWORD(v12) = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)JobHandle,
                   v11,
                   (__int64)PsJobType,
                   v9,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
  if ( (int)v12 >= 0 )
  {
    v14 = (char *)Object;
    goto LABEL_20;
  }
  return v12;
}
