/*
 * XREFs of NtSetInformationJobObject @ 0x140532FE4
 * Callers:
 *     <none>
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1400352E0 (KeIsEmptyAffinityEx.c)
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeQueryActiveGroupCount @ 0x14007DAC0 (KeQueryActiveGroupCount.c)
 *     KeSetSchedulingGroupWeights @ 0x1400A7974 (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1400A7A44 (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400A8024 (KeSetSchedulingGroupRankBias.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x1400BE1B4 (KeQuerySchedulingGroupReadyTime.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400C5D80 (ExfAcquireReleasePushLockExclusive.c)
 *     KeSetSchedulingGroupCycleNotification @ 0x1400C5DD8 (KeSetSchedulingGroupCycleNotification.c)
 *     KeFirstGroupAffinityEx @ 0x1400C5EE0 (KeFirstGroupAffinityEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     wcsnlen @ 0x14018A790 (wcsnlen.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspHardDereferenceSiloWorker @ 0x140283E60 (PspHardDereferenceSiloWorker.c)
 *     PspJobIsAppSilo @ 0x140283EF8 (PspJobIsAppSilo.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PspSetJobIoRateControl @ 0x140489B40 (PspSetJobIoRateControl.c)
 *     PsInvokeWin32Callout @ 0x1404B6460 (PsInvokeWin32Callout.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     PsChargeSharedPoolQuota @ 0x1404EBD9C (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x1404EBEB8 (PsReturnSharedPoolQuota.c)
 *     PspUnlockJobChain @ 0x1404F0F94 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x1404F101C (PspLockJobChain.c)
 *     IoAllocateMiniCompletionPacket @ 0x14052E9C0 (IoAllocateMiniCompletionPacket.c)
 *     PspSetJobIoAttribution @ 0x14052F4C8 (PspSetJobIoAttribution.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14052FB00 (PspSetEnergyTrackingStateJobTree.c)
 *     PspIsContextAdmin @ 0x14052FBA0 (PspIsContextAdmin.c)
 *     PspFreezeJobTree @ 0x140530BD0 (PspFreezeJobTree.c)
 *     PspBindProcessSessionToJob @ 0x140531448 (PspBindProcessSessionToJob.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x140532E98 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x14053485C (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x140534884 (PspNotificationLimitRateControlToleranceField.c)
 *     PspLockRootJobExclusive @ 0x140534968 (PspLockRootJobExclusive.c)
 *     PspLockJobConditionally @ 0x140534D04 (PspLockJobConditionally.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140536910 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140536FD0 (PspUnlockJob.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1405374FC (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x140537558 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspRateControlLimitFlag @ 0x1405376F4 (PspRateControlLimitFlag.c)
 *     PspUnlockJobConditionally @ 0x140537718 (PspUnlockJobConditionally.c)
 *     PspScheduleEnforcementWorker @ 0x140550090 (PspScheduleEnforcementWorker.c)
 *     PspFreeRateControl @ 0x140552180 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1405521CC (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140552280 (PspAddSchedulingGroupToJobChain.c)
 *     PspSetBackgroundJobTree @ 0x14057F654 (PspSetBackgroundJobTree.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x14058409C (PspDoesJobHierarchyPermitUILimits.c)
 *     IopFreeMiniCompletionPacket @ 0x14059C710 (IopFreeMiniCompletionPacket.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 *     SePrivilegeCheck @ 0x1405B0D30 (SePrivilegeCheck.c)
 *     SeCheckPrivilegedObject @ 0x1406138A4 (SeCheckPrivilegedObject.c)
 *     PspAssignSiloSystemRootPath @ 0x140778D00 (PspAssignSiloSystemRootPath.c)
 *     PspConvertSiloToServerSilo @ 0x140778F94 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140779130 (PspCreateSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x14077B3B8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x14077B47C (PspApplyWorkingSetLimits.c)
 *     PspSetJobMemoryPartition @ 0x14077C020 (PspSetJobMemoryPartition.c)
 *     PspSetJobSiloThreadImpersonationPolicy @ 0x14077C310 (PspSetJobSiloThreadImpersonationPolicy.c)
 *     PspSetNetRateControl @ 0x14077C38C (PspSetNetRateControl.c)
 *     EtwTraceJobSetQuery @ 0x1407A7B9C (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateSiloRootDirectory @ 0x1407F63F0 (ObCreateSiloRootDirectory.c)
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
  __m128i *v9; // rdi
  NTSTATUS result; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // esi
  __int32 v14; // ebx
  char *v15; // r14
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r10
  unsigned __int64 v19; // r11
  __int64 v20; // r9
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  int v23; // eax
  __int64 i; // rdx
  unsigned int v25; // edx
  int v26; // eax
  int v27; // edx
  int *v28; // r9
  int *v29; // r10
  int **v30; // rbx
  struct _ERESOURCE *PoolWithTag; // rdi
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
  __int64 v42; // r9
  int *v43; // rax
  __int64 v44; // r8
  int JobMemoryUsageNotificationViolations; // ebx
  int v46; // eax
  _QWORD *MiniCompletionPacket; // rbx
  __int64 v48; // r9
  char v49; // bl
  PETHREAD v50; // rdi
  int v51; // eax
  int v52; // ebx
  __int64 v53; // r9
  int v54; // edi
  int v55; // eax
  unsigned int v56; // edi
  int v57; // ecx
  __int32 *v58; // rbx
  __int64 v59; // r9
  int v60; // ecx
  char v61; // bl
  __int64 v62; // rsi
  __int64 v63; // rdi
  int v64; // eax
  struct _ERESOURCE *v65; // rcx
  struct _ERESOURCE *v66; // rcx
  char v67; // bl
  unsigned int v68; // esi
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rcx
  PVOID *v72; // rdi
  int v73; // ebx
  __int64 v74; // rcx
  __int64 v75; // r9
  void *v76; // rdi
  __int64 v77; // r9
  unsigned int v78; // edx
  __int64 v79; // rdx
  __int64 RateControl; // rax
  _DWORD *v81; // rax
  unsigned __int16 v82; // cx
  POOL_TYPE v83; // r12d
  unsigned __int64 v84; // r8
  _WORD *PoolWithQuotaTag; // rax
  _WORD *v86; // rsi
  wchar_t *v87; // rcx
  char v88; // bl
  unsigned int *v89; // r11
  unsigned int v90; // ecx
  unsigned int v91; // eax
  unsigned int v92; // edx
  unsigned int v93; // ebx
  unsigned __int16 v94; // r14
  __int64 v95; // r10
  __m128i v96; // xmm0
  unsigned __int16 epi16; // cx
  unsigned int v98; // ebx
  char v99; // di
  char v100; // al
  int v101; // ecx
  unsigned int v102; // edi
  char v103; // al
  int v104; // ecx
  unsigned __int64 v105; // rdi
  struct _ERESOURCE *v106; // rsi
  ULONG v107; // edx
  BOOLEAN v108; // al
  unsigned __int16 Group; // ax
  __int64 v110; // rax
  char *v111; // rdi
  char *j; // rbx
  char *v113; // rcx
  __int64 v114; // r11
  __int64 v115; // rdx
  struct _ERESOURCE *v116; // rdi
  struct _SECURITY_SUBJECT_CONTEXT *v117; // rdi
  BOOLEAN v118; // al
  PERESOURCE v119; // r12
  __int64 *v120; // rcx
  __int64 v121; // rax
  BOOLEAN v122; // al
  int Silo; // eax
  ULONG v124; // edx
  BOOLEAN v125; // al
  __int64 v126; // rdx
  BOOLEAN v127; // al
  unsigned __int64 v128; // xmm0_8
  unsigned __int64 v129; // rdx
  size_t v130; // rdi
  wchar_t *v131; // rax
  const wchar_t *v132; // rbx
  struct _ERESOURCE *v133; // rbx
  PETHREAD v134; // rdx
  __int64 v135; // rcx
  int v136; // r8d
  signed __int8 v137; // cf
  signed __int32 v138[8]; // [rsp+0h] [rbp-BA8h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+40h] [rbp-B68h]
  PVOID Object; // [rsp+48h] [rbp-B60h] BYREF
  JOBOBJECTINFOCLASS v141; // [rsp+50h] [rbp-B58h]
  int v142; // [rsp+58h] [rbp-B50h]
  unsigned __int8 v143; // [rsp+5Ch] [rbp-B4Ch]
  _BYTE v144[11]; // [rsp+5Dh] [rbp-B4Bh] BYREF
  unsigned __int16 v145; // [rsp+68h] [rbp-B40h]
  PERESOURCE v146; // [rsp+70h] [rbp-B38h]
  __int64 v147; // [rsp+78h] [rbp-B30h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-B28h]
  wchar_t *v149; // [rsp+88h] [rbp-B20h]
  PETHREAD Thread; // [rsp+90h] [rbp-B18h]
  PERESOURCE Resource; // [rsp+98h] [rbp-B10h]
  __int8 v152; // [rsp+A0h] [rbp-B08h]
  __int8 v153; // [rsp+A1h] [rbp-B07h]
  unsigned __int32 v154; // [rsp+A4h] [rbp-B04h]
  unsigned int v155; // [rsp+A8h] [rbp-B00h]
  int v156; // [rsp+ACh] [rbp-AFCh]
  void *Src; // [rsp+B0h] [rbp-AF8h]
  __int64 v158; // [rsp+B8h] [rbp-AF0h] BYREF
  PSECURITY_SUBJECT_CONTEXT v159; // [rsp+C0h] [rbp-AE8h]
  __int64 v160; // [rsp+C8h] [rbp-AE0h] BYREF
  int v161; // [rsp+D0h] [rbp-AD8h] BYREF
  int v162; // [rsp+D4h] [rbp-AD4h]
  __int64 v163; // [rsp+D8h] [rbp-AD0h]
  __int64 v164; // [rsp+E0h] [rbp-AC8h] BYREF
  int v165; // [rsp+E8h] [rbp-AC0h]
  int v166; // [rsp+ECh] [rbp-ABCh]
  _BYTE SubjectContext[40]; // [rsp+F0h] [rbp-AB8h] BYREF
  unsigned int v168; // [rsp+118h] [rbp-A90h] BYREF
  int v169; // [rsp+11Ch] [rbp-A8Ch]
  int v170; // [rsp+120h] [rbp-A88h] BYREF
  unsigned int v171; // [rsp+124h] [rbp-A84h]
  __int64 v172; // [rsp+128h] [rbp-A80h]
  PVOID v173; // [rsp+130h] [rbp-A78h]
  PVOID v174; // [rsp+138h] [rbp-A70h] BYREF
  __m128i v175; // [rsp+140h] [rbp-A68h] BYREF
  unsigned int v176; // [rsp+150h] [rbp-A58h]
  __int32 v177; // [rsp+154h] [rbp-A54h]
  __int32 v178; // [rsp+158h] [rbp-A50h]
  __int32 v179; // [rsp+15Ch] [rbp-A4Ch]
  __int64 v180; // [rsp+160h] [rbp-A48h] BYREF
  __m128i v181; // [rsp+168h] [rbp-A40h] BYREF
  __m128i BugCheckParameter1; // [rsp+178h] [rbp-A30h]
  PVOID v183; // [rsp+190h] [rbp-A18h]
  __int128 v184; // [rsp+198h] [rbp-A10h] BYREF
  __int128 v185; // [rsp+1A8h] [rbp-A00h]
  char *v186; // [rsp+1B8h] [rbp-9F0h] BYREF
  int v187; // [rsp+1C0h] [rbp-9E8h]
  __int64 v188; // [rsp+1C8h] [rbp-9E0h]
  __int64 v189; // [rsp+1D0h] [rbp-9D8h]
  __int64 v190; // [rsp+1D8h] [rbp-9D0h]
  __int64 v191; // [rsp+1E0h] [rbp-9C8h]
  __m128i v192; // [rsp+1F0h] [rbp-9B8h]
  __m128i v193; // [rsp+200h] [rbp-9A8h]
  __m128i v194; // [rsp+210h] [rbp-998h]
  __m128i v195; // [rsp+220h] [rbp-988h]
  __int64 v196; // [rsp+230h] [rbp-978h]
  __m128i v197; // [rsp+240h] [rbp-968h]
  __m128i v198; // [rsp+250h] [rbp-958h]
  __int64 v199; // [rsp+260h] [rbp-948h]
  _QWORD v200[18]; // [rsp+270h] [rbp-938h] BYREF
  __int64 v201; // [rsp+300h] [rbp-8A8h] BYREF
  unsigned __int64 v202; // [rsp+308h] [rbp-8A0h]
  __int64 v203; // [rsp+310h] [rbp-898h]
  unsigned __int64 v204; // [rsp+318h] [rbp-890h]
  int v205; // [rsp+320h] [rbp-888h]
  int v206; // [rsp+324h] [rbp-884h]
  unsigned int v207; // [rsp+328h] [rbp-880h]
  unsigned __int64 v208; // [rsp+330h] [rbp-878h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+350h] [rbp-858h] BYREF
  __m128i v210; // [rsp+368h] [rbp-840h] BYREF
  __int64 v211; // [rsp+380h] [rbp-828h] BYREF
  __int64 v212; // [rsp+388h] [rbp-820h]
  int v213; // [rsp+390h] [rbp-818h]
  unsigned __int64 v214; // [rsp+398h] [rbp-810h]
  unsigned __int64 v215; // [rsp+3A0h] [rbp-808h]
  int v216; // [rsp+3A8h] [rbp-800h]
  __int64 v217; // [rsp+3B0h] [rbp-7F8h]
  unsigned int v218; // [rsp+3B8h] [rbp-7F0h]
  unsigned int v219; // [rsp+3BCh] [rbp-7ECh]
  unsigned __int64 v220; // [rsp+3F0h] [rbp-7B8h]
  unsigned __int64 v221; // [rsp+3F8h] [rbp-7B0h]
  unsigned __int64 v222; // [rsp+410h] [rbp-798h]
  __m128i v223; // [rsp+420h] [rbp-788h]
  __m128i v224; // [rsp+430h] [rbp-778h]
  __m128i v225; // [rsp+440h] [rbp-768h]
  __int64 v226; // [rsp+450h] [rbp-758h]
  __m128i v227; // [rsp+458h] [rbp-750h]
  __m128i v228; // [rsp+468h] [rbp-740h]
  __m128i v229; // [rsp+478h] [rbp-730h]
  _OWORD v230[109]; // [rsp+490h] [rbp-718h] BYREF

  v4 = JobInformationLength;
  v149 = (wchar_t *)JobHandle;
  v141 = JobInformationClass;
  Src = JobInformation;
  v7 = JobInformationClass - 1;
  if ( v7 > 0x2E )
    return -1073741821;
  switch ( JobInformationClass )
  {
    case JobObjectExtendedLimitInformation:
      if ( JobInformationLength == 144 || JobInformationLength == 152 )
        goto LABEL_6;
      return -1073741820;
    case JobObjectNotificationLimitInformation:
      if ( JobInformationLength == 48 )
        goto LABEL_6;
      v41 = JobInformationLength == 56;
LABEL_63:
      if ( v41 )
        goto LABEL_6;
      return -1073741820;
    case JobObjectIoRateControlInformation:
      if ( JobInformationLength == 48 || JobInformationLength == 96 )
        goto LABEL_6;
      v41 = JobInformationLength == 144;
      goto LABEL_63;
  }
  v8 = PspJobInfoLengths[v7];
  if ( JobInformationLength != v8
    && (JobInformationClass != JobObjectGroupInformation && JobInformationClass != JobObjectGroupInformationEx
     || JobInformationLength < v8) )
  {
    return -1073741820;
  }
LABEL_6:
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  v143 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__m128i *)Src;
    if ( JobInformationLength )
    {
      if ( ((PspJobInfoAlign[v7] - 1) & (unsigned int)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Src + JobInformationLength > 0x7FFFFFFF0000LL || (char *)Src + JobInformationLength < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v9 = (__m128i *)Src;
  }
  if ( !JobHandle )
    return -1073741816;
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)JobHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    v13 = 0;
    v142 = 0;
    LOBYTE(result) = 0;
    *(_DWORD *)&v144[3] = result;
    --Thread->SpecialApcDisable;
    if ( JobInformationClass <= JobObjectCycleTimeNotification )
    {
      if ( JobInformationClass == JobObjectCycleTimeNotification )
      {
        v62 = v9->m128i_i64[0];
        v189 = v9->m128i_i64[0];
        v15 = (char *)Object;
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Object + 56), 1u);
        if ( (*((_DWORD *)v15 + 326) & 0x20) != 0 )
        {
          v63 = *((_QWORD *)v15 + 126);
          v64 = *(_DWORD *)(v63 + 40);
          if ( (v64 & 0x10) == 0 )
          {
            *(_DWORD *)(v63 + 40) = v64 | 0x10;
            KeInitializeDpc((PRKDPC)(v63 + 48), (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine, v15);
          }
          KeSetSchedulingGroupCycleNotification(v63 + 128, v63 + 48, v62);
          goto LABEL_172;
        }
LABEL_372:
        v13 = -1073741811;
        goto LABEL_173;
      }
      if ( JobInformationClass > JobObjectNotificationLimitInformation )
      {
        if ( JobInformationClass != JobObjectGroupInformationEx )
        {
          if ( JobInformationClass != JobObjectCpuRateControlInformation )
          {
            if ( JobInformationClass == JobObjectCompletionFilter )
            {
              v177 = v9->m128i_i32[0];
              v14 = v177;
              v15 = (char *)Object;
              if ( (v177 & 0xFFFFC001) == 0 )
              {
                ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Object + 56), 1u);
                if ( v15 )
                  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v15 + 1032), 0LL);
                *((_DWORD *)v15 + 219) = v14;
                PspUnlockJobMemoryLimitsExclusive((__int64)v15, 0LL, 0LL, v16);
                goto LABEL_25;
              }
LABEL_426:
              v13 = -1073741811;
              goto LABEL_27;
            }
            if ( JobInformationClass == JobObjectFreezeInformation )
            {
              v210 = *v9;
              if ( v210.m128i_i32[0] && (v210.m128i_i32[0] & 0xFFFFFFF8) == 0 )
              {
                v15 = (char *)Object;
                v13 = PspFreezeJobTree((char *)Object, (__int64)&v210);
                if ( v13 >= 0 )
                  v9->m128i_i32[0] = v210.m128i_i32[0];
                goto LABEL_27;
              }
              goto LABEL_378;
            }
            if ( JobInformationClass != JobObjectBackgroundInformation )
            {
              if ( JobInformationClass != JobObjectSchedulingRankBiasInformation )
              {
                if ( JobInformationClass == JobObjectTimerVirtualizationInformation )
                {
                  if ( v9->m128i_i8[0] != 1 )
                  {
                    v13 = -1073741811;
                    v142 = -1073741811;
                    v15 = (char *)Object;
                    goto LABEL_27;
                  }
                  v15 = (char *)Object;
                  PspEnumJobsAndProcessesInJobHierarchy(Object, 0LL, 0);
LABEL_26:
                  v13 = 0;
LABEL_27:
                  KiLeaveGuardedRegionUnsafe((__int64)Thread);
                  if ( v13 )
                  {
                    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                      EtwTraceJobSetQuery((_DWORD)v15, JobInformationClass, 0, 0, v13, 1831);
                  }
                  ObfDereferenceObjectWithTag(v15, 0x79517350u);
                  return v13;
                }
                goto LABEL_457;
              }
              v144[0] = v9->m128i_i8[0];
              v15 = (char *)Object;
              ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Object + 56), 1u);
              if ( (*((_DWORD *)v15 + 326) & 0x20) != 0 )
              {
                v77 = *((_QWORD *)v15 + 126);
                v78 = *(_DWORD *)(v77 + 40);
                if ( (v78 & 0x40) == 0 )
                {
                  if ( (v78 & 1) != 0 || (v78 & 0x20) != 0 )
                  {
                    v13 = -1073741637;
                    goto LABEL_173;
                  }
                  if ( ((v78 >> 3) & 1) != (v144[0] != 0) )
                  {
                    v79 = (v144[0] != 0 ? 8 : 0) | v78 & 0xFFFFFFF7;
                    *(_DWORD *)(v77 + 40) = v79;
                    LOBYTE(v79) = v144[0];
                    KeSetSchedulingGroupRankBias(*((_QWORD *)v15 + 126) + 128LL, v79);
                    PspEnumJobsAndProcessesInJobHierarchy(v15, (__int64)v144, 1);
LABEL_172:
                    v13 = 0;
LABEL_173:
                    v65 = (struct _ERESOURCE *)(v15 + 56);
LABEL_174:
                    ExReleaseResourceLite(v65);
                    goto LABEL_27;
                  }
                }
              }
              goto LABEL_372;
            }
            v152 = v9->m128i_i8[0];
            v15 = (char *)Object;
            v46 = PspSetBackgroundJobTree(Object);
LABEL_86:
            v13 = v46;
            if ( v46 < 0 )
              goto LABEL_27;
            goto LABEL_26;
          }
          memmove(&v170, v9, v4);
          v67 = v170;
          if ( (v170 & 0xFFFFFFE0) == 0 )
          {
            v68 = v171;
            v147 = v171;
            LODWORD(v146) = v170 & 1;
            if ( (v170 & 1) == 0 )
              goto LABEL_189;
            if ( (v170 & 2) != 0 )
            {
              if ( (v170 & 0x10) == 0 && (unsigned __int16)(v171 - 1) <= 8u )
                goto LABEL_189;
            }
            else if ( (unsigned __int16)(v171 - 1) <= 0x270Fu
                   && ((v170 & 0x10) == 0
                    || (v170 & 4) == 0 && HIWORD(v171) >= (unsigned __int16)v171 && HIWORD(v171) <= 0x2710u) )
            {
LABEL_189:
              v15 = (char *)Object;
              PspLockJobChain((__int64)Object, (__int64)Thread, 0);
              v70 = *((_DWORD *)v15 + 326);
              if ( (_DWORD)v146 )
              {
                if ( (v70 & 0x20) == 0 )
                {
                  RateControl = PspAllocateRateControl(2LL);
                  v71 = RateControl;
                  if ( !RateControl )
                  {
                    v13 = -1073741670;
                    goto LABEL_197;
                  }
                  *((_QWORD *)v15 + 126) = RateControl;
LABEL_192:
                  v72 = (PVOID *)(v15 + 1008);
                  *(_DWORD *)(*((_QWORD *)v15 + 126) + 40LL) = 0;
                  *(_DWORD *)(*((_QWORD *)v15 + 126) + 44LL) = v68;
                  if ( (_DWORD)v146 )
                  {
                    if ( (v67 & 4) != 0 )
                    {
                      *((_DWORD *)*v72 + 10) |= 1u;
                      WORD1(v147) = v68;
                    }
                    if ( (v67 & 2) != 0 )
                    {
                      *((_DWORD *)*v72 + 10) |= 4u;
                      HIDWORD(v147) = 0;
                    }
                    else
                    {
                      HIDWORD(v147) = 1;
                      if ( (v67 & 0x14) == 0 )
                        WORD1(v147) = 10000;
                    }
                    if ( (v67 & 8) != 0 )
                      *((_DWORD *)*v72 + 10) |= 2u;
                    if ( (v67 & 0x10) != 0 )
                      *((_DWORD *)*v72 + 10) |= 0x20u;
                    v81 = *v72;
                    if ( *v72 == (PVOID)v71 )
                    {
                      *((_QWORD *)*v72 + 16) = v147;
                      v13 = PspAddSchedulingGroupToJobChain(*((_QWORD *)v15 + 134), v15);
                      v142 = v13;
                      if ( v13 < 0 )
                      {
                        if ( *v72 )
                        {
                          PspFreeRateControl(*v72);
                          *v72 = 0LL;
                        }
                        goto LABEL_197;
                      }
                      _InterlockedOr((volatile signed __int32 *)v15 + 326, 0x20u);
                      v15 = (char *)Object;
                    }
                    else
                    {
                      v160 = (__int64)*v72 + 128;
                      if ( (v81[10] & 4) != 0 )
                        KeSetSchedulingGroupWeights(1u, (__int64)&v160, (__int64)&v147);
                      else
                        KeSetSchedulingGroupCpuRates(v71, &v160, &v147);
                    }
                    v161 = *((_DWORD *)*v72 + 10);
                    v162 = *((_DWORD *)*v72 + 11);
                  }
                  else
                  {
                    v147 = 0x327102710LL;
                    *((_DWORD *)*v72 + 10) |= 0x40u;
                    v73 = v147;
                    *((_DWORD *)*v72 + 11) = v147;
                    v160 = (__int64)*v72 + 128;
                    v144[1] = (*(_DWORD *)(v160 + 4) & 4) != 0;
                    *((_QWORD *)v15 + 128) += KeQuerySchedulingGroupReadyTime(v160, v69);
                    KeSetSchedulingGroupCpuRates(v74, &v160, &v147);
                    v161 = 0;
                    v162 = v73;
                    if ( v144[1] )
                    {
                      v144[1] = 0;
                      PspEnumJobsAndProcessesInJobHierarchy(v15, (__int64)&v144[1], 1);
                    }
                  }
                  v13 = 0;
                  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                    EtwTraceJobSetQuery((_DWORD)v15, 15, (unsigned int)&v161, 0, 0, 1829);
LABEL_197:
                  v134 = Thread;
                  v135 = (__int64)v15;
                  goto LABEL_198;
                }
              }
              else if ( (v70 & 0x20) == 0 )
              {
                v13 = -1073741811;
                goto LABEL_197;
              }
              v71 = 0LL;
              goto LABEL_192;
            }
          }
LABEL_378:
          v13 = -1073741811;
          goto LABEL_300;
        }
        goto LABEL_287;
      }
      if ( JobInformationClass == JobObjectNotificationLimitInformation )
      {
LABEL_30:
        if ( (_DWORD)v4 == 56 )
        {
          v223 = *v9;
          v224 = v9[1];
          v225 = v9[2];
          v226 = v9[3].m128i_i64[0];
          v17 = (unsigned int)v226;
          v207 = v226;
          v18 = v223.m128i_i64[0];
          v201 = v223.m128i_i64[0];
          v19 = _mm_srli_si128(v223, 8).m128i_u64[0];
          v202 = v19;
          v20 = v224.m128i_i64[0];
          v203 = v224.m128i_i64[0];
          v21 = _mm_srli_si128(v224, 8).m128i_u64[0];
          v208 = v21;
          v22 = v225.m128i_i64[0];
          v204 = v225.m128i_i64[0];
          v205 = _mm_cvtsi128_si32(_mm_srli_si128(v225, 8));
          v206 = _mm_cvtsi128_si32(_mm_srli_si128(v225, 12));
          v23 = 2589188;
          v156 = 2589188;
        }
        else
        {
          if ( (_DWORD)v4 == 48 )
          {
            v227 = *v9;
            v228 = v9[1];
            v229 = v9[2];
            v17 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v229, 8));
            v207 = v17;
            v18 = v227.m128i_i64[0];
            v201 = v227.m128i_i64[0];
            v19 = _mm_srli_si128(v227, 8).m128i_u64[0];
            v202 = v19;
            v20 = v228.m128i_i64[0];
            v203 = v228.m128i_i64[0];
            v22 = _mm_srli_si128(v228, 8).m128i_u64[0];
            v204 = v22;
            v205 = _mm_cvtsi128_si32(v229);
            v206 = _mm_cvtsi128_si32(_mm_srli_si128(v229, 4));
            v23 = 459268;
            v156 = 459268;
          }
          else
          {
            memmove(&v201, v9, v4);
            v23 = 2064900;
            v156 = 2064900;
            v17 = v207;
            v22 = v204;
            v20 = v203;
            v19 = v202;
            v18 = v201;
          }
          v21 = v208;
        }
        if ( (~v23 & (unsigned int)v17) != 0 )
          goto LABEL_378;
        if ( (v17 & 0x8000) != 0 )
        {
          if ( v21 < 0x1000 )
            goto LABEL_378;
        }
        else
        {
          v21 = 0LL;
          v208 = 0LL;
        }
        if ( (v17 & 0x200) != 0 )
        {
          if ( v22 < 0x1000 || v22 < v21 )
            goto LABEL_378;
        }
        else
        {
          v204 = 0LL;
        }
        if ( (v17 & 4) != 0 )
        {
          if ( !v20 )
            goto LABEL_378;
        }
        else
        {
          v203 = 0LL;
        }
        if ( (v17 & 0x10000) != 0 )
        {
          if ( !v18 )
            goto LABEL_378;
        }
        else
        {
          v201 = 0LL;
        }
        if ( (v17 & 0x20000) != 0 )
        {
          if ( !v19 )
            goto LABEL_378;
        }
        else
        {
          v202 = 0LL;
        }
        for ( i = 0LL; (int)i < 3; i = (unsigned int)(v27 + 1) )
        {
          PspNotificationLimitRateControlToleranceField(&v201, i, v17);
          PspNotificationLimitRateControlToleranceIntervalField(&v201);
          v26 = PspRateControlLimitFlag(v25);
          if ( (v26 & (unsigned int)v17) != 0 )
          {
            if ( !*v28 || *v28 > 3 || !*v29 || *v29 > 3 )
              goto LABEL_378;
          }
          else
          {
            *v28 = 0;
            *v29 = 0;
            v17 = v207;
          }
        }
        v15 = (char *)Object;
        v30 = (int **)((char *)Object + 984);
        if ( *((_QWORD *)Object + 123) )
        {
          PoolWithTag = 0LL;
          BugCheckParameter2 = 0LL;
        }
        else
        {
          PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x624A7350u);
          if ( !PoolWithTag )
            goto LABEL_333;
          BugCheckParameter2 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x88uLL, 0LL);
          v66 = PoolWithTag;
          if ( !BugCheckParameter2 )
          {
            v107 = 1649046352;
            goto LABEL_337;
          }
          memset(PoolWithTag, 0, 0x88uLL);
          v15 = (char *)Object;
        }
        Resource = (PERESOURCE)(v15 + 56);
        ExAcquireResourceExclusiveLite((PERESOURCE)(v15 + 56), 1u);
        if ( *v30 )
        {
          if ( PoolWithTag )
          {
            ExFreePoolWithTag(PoolWithTag, 0x624A7350u);
            PsReturnSharedPoolQuota((char *)BugCheckParameter2, 0x88uLL, 0LL);
          }
        }
        else
        {
          *v30 = (int *)PoolWithTag;
          *((_QWORD *)v15 + 124) = BugCheckParameter2;
        }
        v32 = *v30;
        v33 = **v30;
        *((_QWORD *)v32 + 1) = v201;
        *((_QWORD *)v32 + 2) = v202;
        *((_QWORD *)v32 + 3) = v203;
        v34 = 0LL;
        v35 = v32 + 15;
        while ( (int)v34 < 3 )
        {
          v36 = (_DWORD *)PspNotificationLimitRateControlToleranceField(&v201, v34, v35);
          *(_DWORD *)(v37 - 12) = *v36;
          v38 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(&v201);
          *v39 = *v38;
          v34 = (unsigned int)(v40 + 1);
          v35 = v39 + 1;
        }
        BugCheckParameter2 = (ULONG_PTR)(v15 + 1032);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v15 + 1032), 0LL);
        *((_QWORD *)v32 + 4) = v208 >> 12;
        *((_QWORD *)v32 + 5) = v204 >> 12;
        **v30 = v207;
        PspUnlockJobMemoryLimitsExclusive((__int64)v15, 0LL, 0LL, v42);
        if ( (**v30 & 0xFFFF7DFF) != 0 )
        {
          _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
          v15 = (char *)Object;
        }
        if ( v33 )
        {
          v43 = *v30;
          if ( **v30 )
          {
LABEL_69:
            if ( (PerfGlobalGroupMask & 0x80000) != 0 )
              EtwTraceJobSetQuery((_DWORD)v15, JobInformationClass, (unsigned int)&v201, 0, 0, 1829);
            ExReleaseResourceLite(Resource);
            ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
            v44 = *((_QWORD *)v15 + 165);
            v15 = (char *)Object;
            JobMemoryUsageNotificationViolations = PspGetJobMemoryUsageNotificationViolations(
                                                     Object,
                                                     *((_QWORD *)Object + 122),
                                                     *((_QWORD *)Object + 122) + v44,
                                                     33280LL);
            PspUnlockJobMemoryLimitsShared(v15, 0LL);
            if ( JobMemoryUsageNotificationViolations )
            {
              PspScheduleEnforcementWorker(*((_QWORD *)v15 + 135));
              v15 = (char *)Object;
            }
            goto LABEL_26;
          }
        }
        else
        {
          v43 = *v30;
          if ( !**v30 )
            goto LABEL_69;
        }
        PspEnumJobsAndProcessesInJobHierarchy(v15, (__int64)v43, 5);
        goto LABEL_69;
      }
      if ( JobInformationClass == JobObjectBasicLimitInformation )
      {
LABEL_119:
        memmove(&v211, v9, v4);
        if ( (unsigned int)v4 < 0x98 )
          memset((char *)&v211 + v4, 0, 152 - v4);
        if ( JobInformationClass == JobObjectBasicLimitInformation )
        {
          v51 = -256;
        }
        else
        {
          v51 = -6324224;
          if ( (_DWORD)v4 == 144 )
            v51 = -32768;
        }
        v141 = v51;
        v52 = v213;
        if ( (v51 & v213) != 0 )
          goto LABEL_378;
        memset(&v230[11], 0, 0x620uLL);
        memset(SubjectContext, 0, sizeof(SubjectContext));
        LODWORD(v230[27]) = v213;
        Resource = 0LL;
        BugCheckParameter2 = 0LL;
        v159 = 0LL;
        DWORD1(v230[27]) = (v213 & 8) != 0 ? v216 : 0;
        if ( (v213 & 0x20) != 0 )
        {
          v99 = v218;
          if ( v218 > 6 )
            goto LABEL_378;
          if ( v218 - 3 <= 1 )
          {
            LOBYTE(v53) = PreviousMode;
            v100 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                     SeIncreaseBasePriorityPrivilege,
                     v149,
                     2LL,
                     v53) & 1;
            LOBYTE(v101) = 4 * v100;
            *(_DWORD *)&v144[3] = v101;
            if ( !v100 )
              goto LABEL_306;
          }
          BYTE9(v230[65]) = v99;
        }
        else
        {
          BYTE9(v230[65]) = 0;
        }
        if ( (v52 & 0x80u) != 0 )
        {
          v102 = v219;
          if ( v219 >= 0xA )
            goto LABEL_378;
          if ( v219 > 5 )
          {
            LOBYTE(v53) = PreviousMode;
            v103 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                     SeIncreaseBasePriorityPrivilege,
                     v149,
                     2LL,
                     v53) & 1;
            LOBYTE(v104) = 4 * v103;
            *(_DWORD *)&v144[3] = v104;
            if ( !v103 )
              goto LABEL_306;
          }
          DWORD1(v230[41]) = v102;
        }
        else
        {
          DWORD1(v230[41]) = 5;
        }
        if ( (v52 & 2) != 0 )
        {
          if ( !v211 )
            goto LABEL_378;
          *(_QWORD *)&v230[25] = v211;
        }
        else
        {
          *(_QWORD *)&v230[25] = 0LL;
        }
        LODWORD(v149) = v52 & 4;
        if ( (v52 & 4) != 0 )
        {
          if ( !v212 )
            goto LABEL_378;
          *((_QWORD *)&v230[25] + 1) = v212;
        }
        if ( (v52 & 1) == 0 )
        {
          v230[26] = 0uLL;
          goto LABEL_134;
        }
        v105 = v214;
        if ( !v214 && !v215 || v214 == -1LL && v215 == -1LL || v214 > v215 || v214 < 0x14000 )
          goto LABEL_378;
        if ( v214 <= PspMinimumWorkingSet || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
        {
          *(_QWORD *)&v230[26] = v105;
          *((_QWORD *)&v230[26] + 1) = v215;
LABEL_134:
          if ( (v52 & 0x100) != 0 )
          {
            if ( v220 < 0x1000 )
              goto LABEL_378;
            *(_QWORD *)&v230[47] = v220 >> 12;
          }
          else
          {
            *(_QWORD *)&v230[47] = 0LL;
          }
          if ( (v52 & 0x200) != 0 )
          {
            if ( v221 < 0x1000 )
              goto LABEL_378;
            *((_QWORD *)&v230[47] + 1) = v221 >> 12;
          }
          else
          {
            *((_QWORD *)&v230[47] + 1) = 0LL;
          }
          if ( (v52 & 0x200000) != 0 )
          {
            if ( v222 < 0x1000 )
              goto LABEL_378;
            *(_QWORD *)&v230[48] = v222 >> 12;
          }
          else
          {
            *(_QWORD *)&v230[48] = 0LL;
          }
          DWORD2(v230[27]) = 1310721;
          memset((char *)&v230[27] + 12, 0, 0xA4uLL);
          v54 = v230[27];
          LODWORD(v146) = v230[27];
          v15 = (char *)Object;
          if ( (v230[27] & 0x10) != 0 )
          {
            if ( (*((_DWORD *)Object + 326) & 2) != 0 || !v217 )
              goto LABEL_426;
            if ( !*((_QWORD *)Object + 54) )
            {
              v106 = (struct _ERESOURCE *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
              Resource = v106;
              if ( !v106 )
                goto LABEL_333;
              BugCheckParameter2 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x28uLL, 0LL);
              if ( !BugCheckParameter2 )
              {
                v66 = v106;
LABEL_335:
                v107 = 1632269136;
LABEL_337:
                ExFreePoolWithTag(v66, v107);
                v13 = -1073741670;
                goto LABEL_300;
              }
              v13 = v142;
              v15 = (char *)Object;
              LODWORD(v146) = v230[27];
            }
            SeCaptureSubjectContextEx(Thread, Thread->ApcState.Process, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8]);
            v159 = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8];
            if ( PreviousMode )
            {
              RequiredPrivileges.PrivilegeCount = 1;
              RequiredPrivileges.Control = 1;
              RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
              RequiredPrivileges.Privilege[0].Attributes = 0;
              v108 = SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8], 1);
              *(_DWORD *)SubjectContext ^= (*(_DWORD *)SubjectContext ^ v108) & 1;
            }
            else
            {
              *(_DWORD *)SubjectContext |= 1u;
            }
            v55 = *(_DWORD *)&v144[3];
            LOBYTE(v55) = v144[3] | 2;
            *(_DWORD *)&v144[3] = v55;
            v54 = (int)v146;
          }
          else
          {
            LOBYTE(v55) = v144[3];
          }
          v143 = v55;
          v146 = (PERESOURCE)(v15 + 56);
          ExAcquireResourceExclusiveLite((PERESOURCE)(v15 + 56), 1u);
          if ( (v54 & 4) == 0 )
          {
            if ( (v54 & 0x40) != 0 )
            {
              v54 |= *((_DWORD *)v15 + 64) & 4;
              *((_QWORD *)&v230[25] + 1) = *((_QWORD *)v15 + 29);
            }
            else
            {
              *((_QWORD *)&v230[25] + 1) = 0LL;
            }
          }
          v56 = v54 & 0xFFFFFFBF;
          LODWORD(v230[27]) = v56;
          v57 = *(_DWORD *)&v144[3];
          PreviousMode = (v144[3] & 2) != 0;
          if ( (v144[3] & 2) != 0 )
          {
            if ( (*((_DWORD *)v15 + 326) & 2) == 0 )
            {
              if ( (*((_DWORD *)v15 + 64) & 0x10) != 0 )
              {
                KeFirstGroupAffinityEx(&v175, (_WORD *)v15 + 132);
                Group = v175.m128i_u16[4];
              }
              else
              {
                Group = KeGetCurrentPrcb()->Group;
                v175.m128i_i16[4] = Group;
              }
              v172 = qword_14044C5D8[Group];
              if ( v217 == (v172 & v217) )
              {
                if ( WORD4(v230[27]) <= (unsigned int)v175.m128i_i16[4] )
                  WORD4(v230[27]) = v175.m128i_i16[4] + 1;
                *((_QWORD *)&v230[28] + Group) |= v217;
                v15 = (char *)Object;
                v13 = PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)SubjectContext, 1);
                v142 = v13;
                if ( v13 >= 0 )
                {
                  v110 = *((_QWORD *)v15 + 54);
                  if ( v110 )
                  {
                    v184 = *(_OWORD *)(v110 + 8);
                    v185 = *(_OWORD *)(v110 + 24);
                    v159 = (PSECURITY_SUBJECT_CONTEXT)&v184;
                  }
                  else
                  {
                    *((_QWORD *)v15 + 54) = Resource;
                    *((_QWORD *)v15 + 55) = BugCheckParameter2;
                    Resource = 0LL;
                    v159 = 0LL;
                    v110 = *((_QWORD *)v15 + 54);
                  }
                  *(_OWORD *)v110 = *(_OWORD *)SubjectContext;
                  *(_OWORD *)(v110 + 16) = *(_OWORD *)&SubjectContext[16];
                  *(_QWORD *)(v110 + 32) = *(_QWORD *)&SubjectContext[32];
                  goto LABEL_147;
                }
              }
              else
              {
                v13 = -1073741811;
                v142 = -1073741811;
                v15 = (char *)Object;
              }
              v57 = *(_DWORD *)&v144[3];
LABEL_158:
              LOBYTE(v57) = v57 & 1;
              *(_DWORD *)&v144[3] = v57;
              if ( (_BYTE)v57 )
              {
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14039D570, 0LL);
                _InterlockedOr((volatile signed __int32 *)v15 + 326, 0x100u);
                v15 = (char *)Object;
                v111 = (char *)Object + 40;
                for ( j = (char *)*((_QWORD *)Object + 5); j != v111; j = *(char **)j )
                {
                  if ( (*((_DWORD *)j - 92) & 1) == 0 )
                    PspAddProcessToWorkingSetChangeList(j - 1136);
                }
                v13 = v142;
              }
              ExReleaseResourceLite(v146);
              if ( v144[3] )
                PspApplyWorkingSetLimits(v15);
              if ( v159 )
                SeReleaseSubjectContext(v159);
              if ( !Resource )
                goto LABEL_27;
              ExFreePoolWithTag(Resource, 0x614A7350u);
              v113 = (char *)BugCheckParameter2;
LABEL_415:
              PsReturnSharedPoolQuota(v113, 0x28uLL, 0LL);
              goto LABEL_27;
            }
          }
          else if ( (v56 & 0x4000) == 0 || (*((_DWORD *)v15 + 326) & 2) != 0 )
          {
LABEL_147:
            v58 = (__int32 *)(v15 + 256);
            if ( (*((_DWORD *)v15 + 64) & 1) != 0 && (v230[27] & 1) == 0 )
            {
              _InterlockedOr(v138, 0);
              if ( (qword_14039D570 & 1) != 0 )
                ExfAcquireReleasePushLockExclusive(&qword_14039D570);
              v15 = (char *)Object;
              v13 = v142;
            }
            v164 = (__int64)v15;
            v166 = *v58;
            *((_OWORD *)v15 + 15) = v230[26];
            *((_DWORD *)v15 + 65) = DWORD1(v230[27]);
            if ( PreviousMode )
            {
              *(_OWORD *)(v15 + 264) = *(_OWORD *)((char *)&v230[27] + 8);
              *(_OWORD *)(v15 + 280) = *(_OWORD *)((char *)&v230[28] + 8);
              *(_OWORD *)(v15 + 296) = *(_OWORD *)((char *)&v230[29] + 8);
              *(_OWORD *)(v15 + 312) = *(_OWORD *)((char *)&v230[30] + 8);
              *(_OWORD *)(v15 + 328) = *(_OWORD *)((char *)&v230[31] + 8);
              *(_OWORD *)(v15 + 344) = *(_OWORD *)((char *)&v230[32] + 8);
              *(_OWORD *)(v15 + 360) = *(_OWORD *)((char *)&v230[33] + 8);
              *(_OWORD *)(v15 + 376) = *(_OWORD *)((char *)&v230[34] + 8);
              *(_OWORD *)(v15 + 392) = *(_OWORD *)((char *)&v230[35] + 8);
              *(_OWORD *)(v15 + 408) = *(_OWORD *)((char *)&v230[36] + 8);
              *((_QWORD *)v15 + 53) = *((_QWORD *)&v230[37] + 1);
            }
            v15[873] = BYTE9(v230[65]);
            *((_DWORD *)v15 + 121) = DWORD1(v230[41]);
            *((_OWORD *)v15 + 14) = v230[25];
            if ( JobInformationClass == JobObjectExtendedLimitInformation )
            {
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v15 + 1032), 0LL);
              *v58 = LODWORD(v230[27]) | v141 & *v58;
              *((_OWORD *)v15 + 36) = v230[47];
              *((_QWORD *)v15 + 74) = *(_QWORD *)&v230[48];
              PspUnlockJobMemoryLimitsExclusive((__int64)v15, 0LL, 0LL, v59);
              v60 = *v58;
            }
            else
            {
              v60 = LODWORD(v230[27]) | v141 & *v58;
              *v58 = v60;
            }
            v165 = ~(v60 | v166);
            if ( (_DWORD)v149 )
            {
              PspEnumJobsAndProcessesInJobHierarchy(v15, (__int64)(v15 + 232), 1);
              *((_QWORD *)v15 + 23) = 0LL;
              *((_QWORD *)v15 + 24) = 0LL;
              KeResetEvent((PRKEVENT)v15);
            }
            if ( (*v58 & 6) != 0 )
            {
              _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
              v13 = v142;
              v15 = (char *)Object;
            }
            v61 = v165;
            PspEnumJobsAndProcessesInJobHierarchy(v15, (__int64)&v164, 5);
            v57 = v143 | 1;
            if ( (v61 & 1) != 0 )
              v57 = v143;
            goto LABEL_158;
          }
          v13 = -1073741811;
          v142 = -1073741811;
          goto LABEL_158;
        }
LABEL_306:
        v13 = -1073741727;
        goto LABEL_300;
      }
      if ( JobInformationClass != JobObjectBasicUIRestrictions )
      {
        switch ( JobInformationClass )
        {
          case JobObjectSecurityLimitInformation:
            v197 = *v9;
            v198 = v9[1];
            v199 = v9[2].m128i_i64[0];
            v13 = (v197.m128i_i32[0] & 0xFFFFFFF0) != 0 ? -1073741811 : -1073741637;
            goto LABEL_300;
          case JobObjectEndOfJobTimeInformation:
            v176 = v9->m128i_i32[0];
            v98 = v176;
            v15 = (char *)Object;
            if ( v176 > 1 )
              goto LABEL_426;
            ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Object + 56), 1u);
            *((_DWORD *)v15 + 113) = v98;
            goto LABEL_173;
          case JobObjectAssociateCompletionPortInformation:
            MiniCompletionPacket = 0LL;
            BugCheckParameter1 = *v9;
            if ( BugCheckParameter1.m128i_i64[1] )
            {
              v13 = ObpReferenceObjectByHandleWithTag(
                      BugCheckParameter1.m128i_u64[1],
                      0x624A7350u,
                      (__int64)&v174,
                      0LL,
                      0LL);
              v15 = (char *)Object;
              if ( v13 >= 0 )
              {
                if ( *((_QWORD *)Object + 125)
                  || (MiniCompletionPacket = (_QWORD *)IoAllocateMiniCompletionPacket(
                                                         (__int64)&PspNotificationPacketCallback,
                                                         (__int64)Object)) != 0LL )
                {
                  ExAcquireResourceExclusiveLite((PERESOURCE)(v15 + 56), 1u);
                  if ( *((_QWORD *)v15 + 57)
                    || (*((_DWORD *)v15 + 64) & 0x2000) != 0 && (*((_DWORD *)v15 + 326) & 1) != 0 )
                  {
                    ExReleaseResourceLite((PERESOURCE)(v15 + 56));
                    ObfDereferenceObjectWithTag(v174, 0x624A7350u);
                    v13 = -1073741811;
                  }
                  else
                  {
                    if ( !*((_QWORD *)v15 + 125) )
                    {
                      *((_QWORD *)v15 + 125) = MiniCompletionPacket;
                      MiniCompletionPacket = 0LL;
                    }
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v15 + 1032), 0LL);
                    *((_QWORD *)v15 + 58) = BugCheckParameter1.m128i_i64[0];
                    *((_QWORD *)v15 + 57) = v174;
                    *((_QWORD *)v15 + 59) = 0LL;
                    PspUnlockJobMemoryLimitsExclusive((__int64)v15, 0LL, 0LL, v48);
                    if ( (*((_DWORD *)v15 + 219) & 0x40) != 0 )
                      PspEnumJobsAndProcessesInJobHierarchy(v15, (__int64)v15, 1);
                    ExReleaseResourceLite((PERESOURCE)(v15 + 56));
                  }
                }
                else
                {
                  v13 = -1073741670;
                }
              }
              if ( MiniCompletionPacket )
              {
                MiniCompletionPacket[7] = 0LL;
                IopFreeMiniCompletionPacket(MiniCompletionPacket);
              }
            }
            else
            {
              v15 = (char *)Object;
              ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Object + 56), 1u);
              if ( v15 )
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v15 + 1032), 0LL);
              v76 = (void *)*((_QWORD *)v15 + 57);
              *((_QWORD *)v15 + 57) = 0LL;
              PspUnlockJobMemoryLimitsExclusive((__int64)v15, 0LL, 0LL, v75);
              ExReleaseResourceLite((PERESOURCE)(v15 + 56));
              if ( v76 )
                ObfDereferenceObjectWithTag(v76, 0x624A7350u);
            }
            goto LABEL_27;
          case JobObjectExtendedLimitInformation:
            goto LABEL_119;
          case JobObjectGroupInformation:
LABEL_287:
            *(_QWORD *)&v144[3] = 0LL;
            v146 = 0LL;
            v90 = 16;
            if ( JobInformationClass != JobObjectGroupInformationEx )
              v90 = 2;
            LODWORD(v149) = v90;
            v92 = (unsigned int)v4 % v90;
            v91 = (unsigned int)v4 / v90;
            v93 = (unsigned int)v4 / v90;
            if ( !v92 )
            {
              v155 = v91;
              LODWORD(v230[0]) = 1310721;
              memset((char *)v230 + 4, 0, 0xA4uLL);
              v94 = KeQueryActiveGroupCount() - 1;
              v95 = (unsigned int)v149;
              while ( v93 )
              {
                if ( JobInformationClass == JobObjectGroupInformationEx )
                {
                  v96 = *v9;
                  v175 = v96;
                  epi16 = _mm_extract_epi16(v96, 4);
                  v175.m128i_i16[4] = epi16;
                  v145 = epi16;
                  v163 = v96.m128i_i64[0];
                }
                else
                {
                  v145 = v9->m128i_i16[0];
                  v163 = qword_14044C5D8[v145];
                  epi16 = v145;
                }
                v114 = qword_14044C5D8[epi16];
                v172 = v114;
                if ( v145 > v94 || (v115 = *((_QWORD *)v230 + epi16 + 1)) != 0 || v163 != (v114 & v163) )
                {
                  v13 = -1073741811;
                  v142 = -1073741811;
                  break;
                }
                if ( LOWORD(v230[0]) <= v145 )
                {
                  LOWORD(v230[0]) = epi16 + 1;
                  v115 = *((_QWORD *)v230 + epi16 + 1);
                }
                *((_QWORD *)v230 + epi16 + 1) = v163 | v115;
                v93 = --v155;
                v9 = (__m128i *)((char *)Src + v95);
                Src = (char *)Src + v95;
                v13 = v142;
              }
              v15 = (char *)Object;
              if ( v13 < 0 )
                goto LABEL_27;
              BugCheckParameter2 = (ULONG_PTR)Object + 432;
              if ( *((_QWORD *)Object + 54) )
                goto LABEL_399;
              v116 = (struct _ERESOURCE *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
              *(_QWORD *)&v144[3] = v116;
              if ( v116 )
              {
                v146 = (PERESOURCE)PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x28uLL, 0LL);
                if ( v146 )
                {
                  v15 = (char *)Object;
LABEL_399:
                  SeCaptureSubjectContextEx(
                    Thread,
                    Thread->ApcState.Process,
                    (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8]);
                  v117 = (struct _SECURITY_SUBJECT_CONTEXT *)&SubjectContext[8];
                  if ( PreviousMode )
                  {
                    RequiredPrivileges.PrivilegeCount = 1;
                    RequiredPrivileges.Control = 1;
                    RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                    RequiredPrivileges.Privilege[0].Attributes = 0;
                    v118 = SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8], 1);
                    *(_DWORD *)SubjectContext ^= (*(_DWORD *)SubjectContext ^ v118) & 1;
                  }
                  else
                  {
                    *(_DWORD *)SubjectContext |= 1u;
                  }
                  Resource = (PERESOURCE)(v15 + 56);
                  ExAcquireResourceExclusiveLite((PERESOURCE)(v15 + 56), 1u);
                  v13 = PspEnumJobsAndProcessesInJobHierarchy(v15, (__int64)SubjectContext, 1);
                  v142 = v13;
                  v119 = v146;
                  if ( v13 >= 0 )
                  {
                    v120 = (__int64 *)BugCheckParameter2;
                    v121 = *(_QWORD *)BugCheckParameter2;
                    if ( *(_QWORD *)BugCheckParameter2 )
                    {
                      v184 = *(_OWORD *)(v121 + 8);
                      v185 = *(_OWORD *)(v121 + 24);
                      v117 = (struct _SECURITY_SUBJECT_CONTEXT *)&v184;
                    }
                    else
                    {
                      *(_QWORD *)BugCheckParameter2 = *(_QWORD *)&v144[3];
                      *((_QWORD *)v15 + 55) = v119;
                      *(_QWORD *)&v144[3] = 0LL;
                      v117 = 0LL;
                      v121 = *v120;
                    }
                    *(_OWORD *)v121 = *(_OWORD *)SubjectContext;
                    *(_OWORD *)(v121 + 16) = *(_OWORD *)&SubjectContext[16];
                    *(_QWORD *)(v121 + 32) = *(_QWORD *)&SubjectContext[32];
                    v164 = (__int64)v15;
                    v166 = *((_DWORD *)v15 + 64);
                    v165 = -17;
                    *(_OWORD *)(v15 + 264) = v230[0];
                    *(_OWORD *)(v15 + 280) = v230[1];
                    *(_OWORD *)(v15 + 296) = v230[2];
                    *(_OWORD *)(v15 + 312) = v230[3];
                    *(_OWORD *)(v15 + 328) = v230[4];
                    *(_OWORD *)(v15 + 344) = v230[5];
                    *(_OWORD *)(v15 + 360) = v230[6];
                    *(_OWORD *)(v15 + 376) = v230[7];
                    *(_OWORD *)(v15 + 392) = v230[8];
                    *(_OWORD *)(v15 + 408) = v230[9];
                    *((_QWORD *)v15 + 53) = *(_QWORD *)&v230[10];
                    if ( JobInformationClass == JobObjectGroupInformationEx
                      && (unsigned int)KeIsEmptyAffinityEx((_WORD *)v15 + 132) )
                    {
                      *((_DWORD *)v15 + 64) &= ~0x10u;
                      _InterlockedAnd((volatile signed __int32 *)v15 + 326, 0xFFFFFFFD);
                    }
                    else
                    {
                      *((_DWORD *)v15 + 64) |= 0x10u;
                      _InterlockedOr((volatile signed __int32 *)v15 + 326, 2u);
                    }
                    v15 = (char *)Object;
                    PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)&v164, 5);
                    v13 = v142;
                  }
                  ExReleaseResourceLite(Resource);
                  if ( v117 )
                    SeReleaseSubjectContext(v117);
                  if ( !*(_QWORD *)&v144[3] )
                    goto LABEL_27;
                  ExFreePoolWithTag(*(PVOID *)&v144[3], 0x614A7350u);
                  v113 = (char *)v119;
                  goto LABEL_415;
                }
                v66 = v116;
                goto LABEL_335;
              }
LABEL_333:
              v13 = -1073741670;
              goto LABEL_27;
            }
            v13 = -1073741820;
LABEL_300:
            v15 = (char *)Object;
            goto LABEL_27;
        }
LABEL_457:
        v13 = -1073741821;
        goto LABEL_300;
      }
      v154 = v9->m128i_i32[0];
      v15 = (char *)Object;
      if ( (v154 & 0xFFFFFF00) != 0 )
        goto LABEL_426;
      v88 = 8;
      PspLockJobChain((__int64)Object, (__int64)Thread, 0);
      if ( (unsigned __int8)PspDoesJobHierarchyPermitUILimits((__int64)v15) )
      {
        if ( *((_DWORD *)v15 + 120) == -2 )
        {
          v13 = -1073741790;
        }
        else
        {
          v15 = (char *)Object;
          PspBindProcessSessionToJob((__int64)Object, (__int64)KeGetCurrentThread()->ApcState.Process);
          v168 = *v89;
          if ( v168 > 0xFFFFFFFD
            || v154 == *((_DWORD *)v15 + 112)
            || (PspUnlockJobChain((__int64)v15, (__int64)Thread, 1),
                v88 = 0,
                v186 = v15,
                v187 = 0,
                v188 = v154,
                v13 = PsInvokeWin32Callout(6, (__int64)&v186, 1, (__int64)&v168),
                v142 = v13,
                v13 >= 0) )
          {
            *((_DWORD *)v15 + 112) = v154;
            _InterlockedOr((volatile signed __int32 *)v15 + 326, 0x10u);
            v13 = v142;
            v15 = (char *)Object;
          }
        }
      }
      else
      {
        v13 = -1073741637;
      }
      v134 = Thread;
      v135 = (__int64)v15;
      if ( (unsigned __int8)v88 >= 8u )
      {
LABEL_198:
        PspUnlockJobChain(v135, (__int64)v134, 0);
        goto LABEL_27;
      }
LABEL_272:
      PspUnlockJob(v135, v134);
      goto LABEL_27;
    }
    if ( JobInformationClass > JobObjectServerSiloInitialize )
    {
      if ( JobInformationClass == JobObjectServerSiloRunningState )
      {
        v179 = v9->m128i_i32[0];
        v15 = (char *)Object;
        if ( !PspJobIsAppSilo((__int64)Object) || v136 != 2 )
          goto LABEL_426;
        v133 = (struct _ERESOURCE *)(v15 + 56);
        ExAcquireResourceExclusiveLite((PERESOURCE)(v15 + 56), 1u);
        if ( *((_DWORD *)v15 + 302) )
        {
          v13 = -1073740529;
        }
        else
        {
          v137 = _interlockedbittestandset((volatile signed __int32 *)v15 + 326, 0x1Du);
          v15 = (char *)Object;
          if ( v137 )
          {
            v13 = 255;
          }
          else
          {
            PspHardDereferenceSiloWorker((__int64)Object);
            v13 = 0;
          }
        }
        goto LABEL_480;
      }
      if ( JobInformationClass == JobObjectIoAttribution )
      {
        v49 = 0;
        v192 = *v9;
        v193 = v9[1];
        v194 = v9[2];
        v195 = v9[3];
        v196 = v9[4].m128i_i64[0];
        v15 = (char *)Object;
        if ( (v192.m128i_i32[0] & 0xFFFFFFFC) != 0 || (v192.m128i_i8[0] & 3) == 0 )
        {
          v13 = -1073741811;
        }
        else
        {
          v49 = 8;
          v50 = Thread;
          PspLockRootJobExclusive(Object, Thread, &v158);
          PspLockJobConditionally(v15, &v158);
          v13 = PspSetJobIoAttribution(v15, v192.m128i_i8[0] & 1, 1, 1u);
          if ( v13 >= 0 )
          {
            PspUnlockJobConditionally(v15, &v158);
            PspUnlockJob(v158, v50);
            v49 = 0;
          }
        }
        if ( (unsigned __int8)v49 < 8u )
          goto LABEL_27;
        PspUnlockJobConditionally(v15, &v158);
        v134 = Thread;
        v135 = v158;
        goto LABEL_272;
      }
      if ( JobInformationClass != JobObjectMemoryPartitionInformation )
      {
        if ( JobInformationClass != JobObjectContainerTelemetryId )
        {
          if ( JobInformationClass != JobObjectSiloSystemRoot )
          {
            if ( JobInformationClass == JobObjectEnergyTrackingState )
            {
              v180 = v9->m128i_i64[0];
              v15 = (char *)Object;
              v46 = PspSetEnergyTrackingStateJobTree((char *)Object, &v180);
              goto LABEL_86;
            }
            if ( JobInformationClass != JobObjectThreadImpersonationInformation )
              goto LABEL_457;
            v153 = v9->m128i_i8[0];
            if ( v153 != 1 )
              goto LABEL_378;
            v127 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
            v15 = (char *)Object;
            if ( v127 )
            {
              if ( (*((_DWORD *)Object + 326) & 0x40000000) != 0 )
              {
                v13 = (unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(Object, 2LL) == 0 ? 0xC0000022 : 0;
                goto LABEL_27;
              }
              goto LABEL_426;
            }
LABEL_424:
            v13 = -1073741727;
            goto LABEL_27;
          }
          v15 = (char *)Object;
          if ( (*((_DWORD *)Object + 326) & 0x40000000) != 0 )
          {
            v173 = 0LL;
            v181 = *v9;
            v128 = _mm_srli_si128(v181, 8).m128i_u64[0];
            if ( !v128 || (unsigned __int16)(v181.m128i_i16[0] - 1) > 0x206u || (v181.m128i_i8[0] & 1) != 0 )
            {
              v13 = -1073741811;
              v142 = -1073741811;
              goto LABEL_27;
            }
            if ( PreviousMode == 1 )
            {
              if ( (v128 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v129 = v128 + v181.m128i_u16[0];
              if ( v129 > 0x7FFFFFFF0000LL || v129 < v128 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v130 = v181.m128i_u16[0];
            v131 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v181.m128i_u16[0], 0x72537350u);
            v132 = v131;
            v173 = v131;
            if ( !v131 )
            {
              v13 = -1073741670;
              v142 = -1073741670;
              goto LABEL_27;
            }
            memmove(v131, (const void *)v128, v130);
            if ( wcsnlen(v132, v130 >> 1) == v130 >> 1 )
            {
              v181.m128i_i64[1] = (__int64)v132;
              v13 = PspAssignSiloSystemRootPath(v15, &v181);
            }
            else
            {
              v13 = -1073741811;
            }
            if ( !v132 )
              goto LABEL_27;
            v124 = 1918071632;
            v87 = (wchar_t *)v132;
            goto LABEL_444;
          }
LABEL_425:
          v13 = -1073740535;
          goto LABEL_27;
        }
        v15 = (char *)Object;
        v133 = (struct _ERESOURCE *)((char *)Object + 56);
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Object + 56), 1u);
        if ( *((int *)v15 + 326) >= 0 )
        {
          *(__m128i *)(v15 + 1240) = *v9;
          _InterlockedOr((volatile signed __int32 *)v15 + 326, 0x80000000);
          ExReleaseResourceLite(v133);
          v13 = 0;
          goto LABEL_300;
        }
        v13 = -1073741791;
LABEL_480:
        v65 = v133;
        goto LABEL_174;
      }
      v191 = v9->m128i_i64[0];
      LOBYTE(v11) = PreviousMode;
      v15 = (char *)Object;
      Silo = PspSetJobMemoryPartition(Object, v11);
LABEL_441:
      v13 = Silo;
      goto LABEL_27;
    }
    switch ( JobInformationClass )
    {
      case JobObjectServerSiloInitialize:
        v125 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
        v15 = (char *)Object;
        if ( !v125 )
          goto LABEL_424;
        if ( (*((_DWORD *)Object + 326) & 0x40000000) == 0 )
          goto LABEL_425;
        if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(Object, 4LL) )
          goto LABEL_426;
        v190 = v9->m128i_i64[0];
        LOBYTE(v126) = PreviousMode;
        Silo = PspConvertSiloToServerSilo(v15, v126);
        goto LABEL_441;
      case JobObjectClearEvent:
        v15 = (char *)Object;
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Object + 56), 1u);
        KeResetEvent((PRKEVENT)v15);
LABEL_25:
        ExReleaseResourceLite((PERESOURCE)(v15 + 56));
        goto LABEL_26;
      case JobObjectClearPeakJobMemoryUsed:
        v15 = (char *)Object;
        if ( Object )
          ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 1032, 0LL);
        *((_QWORD *)v15 + 76) = 0LL;
        *((_QWORD *)v15 + 75) = 0LL;
        PspUnlockJobMemoryLimitsExclusive((__int64)v15, 0LL, 0LL, v12);
        goto LABEL_26;
    }
    if ( JobInformationClass != JobObjectIoRateControlInformation )
    {
      switch ( JobInformationClass )
      {
        case JobObjectNetRateControlInformation:
          v15 = (char *)Object;
          Silo = PspSetNetRateControl(v9, (unsigned int)v4, Object);
          break;
        case JobObjectNotificationLimitInformation2:
          goto LABEL_30;
        case JobObjectCreateSilo:
          v15 = (char *)Object;
          Silo = PspCreateSilo(Object);
          break;
        case JobObjectSiloRootDirectory:
          v122 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
          v15 = (char *)Object;
          if ( !v122 )
            goto LABEL_424;
          if ( (*((_DWORD *)Object + 326) & 0x40000000) == 0 )
            goto LABEL_425;
          if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(Object, 4LL) )
            goto LABEL_426;
          v178 = v9->m128i_i32[0];
          Silo = ObCreateSiloRootDirectory(v15);
          break;
        default:
          goto LABEL_457;
      }
      goto LABEL_441;
    }
    v149 = 0LL;
    v183 = 0LL;
    memset(v200, 0, sizeof(v200));
    memmove(v200, v9, v4);
    if ( v200[3] )
    {
      v82 = v200[5];
      v83 = PagedPool;
      if ( !LOWORD(v200[5]) )
        goto LABEL_253;
      if ( (v200[3] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v84 = v200[3] + LOWORD(v200[5]);
      if ( v84 > 0x7FFFFFFF0000LL || v84 < v200[3] )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v82 = v200[5];
      }
      if ( !v82 || (v82 & 1) != 0 )
      {
LABEL_253:
        v13 = -1073741811;
        v142 = -1073741811;
        v15 = (char *)Object;
        v87 = 0LL;
        goto LABEL_260;
      }
      v169 = 1;
      if ( PreviousMode == 1 )
        v83 = 9;
      v169 = v83;
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(v83, v82 + 2LL, 0x624A7350u);
      v86 = PoolWithQuotaTag;
      v149 = PoolWithQuotaTag;
      v183 = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
        v13 = -1073741801;
        v142 = -1073741801;
        v15 = (char *)Object;
        v87 = 0LL;
LABEL_260:
        if ( !v87 )
          goto LABEL_27;
        v124 = 0;
LABEL_444:
        ExFreePoolWithTag(v87, v124);
        goto LABEL_27;
      }
      memmove(PoolWithQuotaTag, (const void *)v200[3], LOWORD(v200[5]));
      v86[(unsigned __int64)LOWORD(v200[5]) >> 1] = 0;
      v200[3] = v86;
    }
    if ( (v200[4] & 0xFFFFFFF000000000uLL) != 0 )
    {
      v13 = -1073741811;
    }
    else
    {
      if ( !v200[10] && !v200[7] && !v200[2] || PspIsContextAdmin() )
      {
        v15 = (char *)Object;
        v13 = PspSetJobIoRateControl((__int64)Object, (__int64)v200);
LABEL_259:
        v87 = v149;
        goto LABEL_260;
      }
      v13 = -1073741790;
    }
    v15 = (char *)Object;
    goto LABEL_259;
  }
  return result;
}
