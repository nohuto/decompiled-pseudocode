/*
 * XREFs of NtSetInformationJobObject @ 0x14055E0D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSchedulingGroupWeights @ 0x14001CCB8 (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x14001CD88 (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupRankBias @ 0x14001D2E4 (KeSetSchedulingGroupRankBias.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x14002A9C8 (KeQuerySchedulingGroupReadyTime.c)
 *     KeFirstGroupAffinityEx @ 0x14002FE30 (KeFirstGroupAffinityEx.c)
 *     KeSetSchedulingGroupCycleNotification @ 0x140035F90 (KeSetSchedulingGroupCycleNotification.c)
 *     KeIsEmptyAffinityEx @ 0x140047190 (KeIsEmptyAffinityEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     PsIsHostSilo @ 0x140050C00 (PsIsHostSilo.c)
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     KeQueryActiveGroupCount @ 0x14012E4F0 (KeQueryActiveGroupCount.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140136B30 (ExfAcquireReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     wcsnlen @ 0x14016BD00 (wcsnlen.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PspGetServerSiloStatePointer @ 0x14023898C (PspGetServerSiloStatePointer.c)
 *     PspHardDereferenceSiloWorker @ 0x1402389A0 (PspHardDereferenceSiloWorker.c)
 *     PspJobIsAppSilo @ 0x140238A38 (PspJobIsAppSilo.c)
 *     PsGetJobServerSilo @ 0x140239460 (PsGetJobServerSilo.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspSetJobIoRateControl @ 0x14041EBBC (PspSetJobIoRateControl.c)
 *     PspFreeRateControl @ 0x1404371D4 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140437220 (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404372D4 (PspAddSchedulingGroupToJobChain.c)
 *     PspScheduleEnforcementWorker @ 0x140443B24 (PspScheduleEnforcementWorker.c)
 *     PspSetBackgroundJobTree @ 0x140458E30 (PspSetBackgroundJobTree.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x14045E3B0 (PspDoesJobHierarchyPermitUILimits.c)
 *     PspIsContextAdmin @ 0x14045EEC4 (PspIsContextAdmin.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140478B80 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1404797EC (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x140479848 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspRateControlLimitFlag @ 0x140479E44 (PspRateControlLimitFlag.c)
 *     PspUnlockJobConditionally @ 0x140479E68 (PspUnlockJobConditionally.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     PsChargeSharedPoolQuota @ 0x1404F4F98 (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x1404F5AC0 (PsReturnSharedPoolQuota.c)
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 *     SeCaptureSubjectContextEx @ 0x14050F760 (SeCaptureSubjectContextEx.c)
 *     IopFreeMiniCompletionPacket @ 0x140527A70 (IopFreeMiniCompletionPacket.c)
 *     SePrivilegeCheck @ 0x140527F60 (SePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PspUnlockJobChain @ 0x140545EBC (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x140545F4C (PspLockJobChain.c)
 *     PspLockJobConditionally @ 0x14054755C (PspLockJobConditionally.c)
 *     PsAssignProcessToJobObject @ 0x14054B2E0 (PsAssignProcessToJobObject.c)
 *     PspBindProcessSessionToJob @ 0x14054C2D8 (PspBindProcessSessionToJob.c)
 *     PspSetJobIoAttribution @ 0x14054D468 (PspSetJobIoAttribution.c)
 *     IoAllocateMiniCompletionPacket @ 0x14055DDE0 (IoAllocateMiniCompletionPacket.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x14055F8F8 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x14055F918 (PspNotificationLimitRateControlToleranceField.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x14055F938 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspFreezeJobTree @ 0x14055F98C (PspFreezeJobTree.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14055FCF4 (PspSetEnergyTrackingStateJobTree.c)
 *     PspLockRootJobExclusive @ 0x140560DC4 (PspLockRootJobExclusive.c)
 *     SeCheckPrivilegedObject @ 0x14058547C (SeCheckPrivilegedObject.c)
 *     PspAssignSiloSystemRootPath @ 0x1406DE660 (PspAssignSiloSystemRootPath.c)
 *     PspConvertSiloToServerSilo @ 0x1406DE940 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x1406DEAE8 (PspCreateSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1406E1118 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1406E11DC (PspApplyWorkingSetLimits.c)
 *     PspSetJobMemoryPartition @ 0x1406E1C40 (PspSetJobMemoryPartition.c)
 *     PspSetJobSiloThreadImpersonationPolicy @ 0x1406E1EA8 (PspSetJobSiloThreadImpersonationPolicy.c)
 *     PspSetNetRateControl @ 0x1406E1F2C (PspSetNetRateControl.c)
 *     EtwTraceJobServerSiloStateChange @ 0x14070ACD0 (EtwTraceJobServerSiloStateChange.c)
 *     EtwTraceJobSetQuery @ 0x14070AD8C (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateSiloRootDirectory @ 0x140747700 (ObCreateSiloRootDirectory.c)
 */

NTSTATUS __stdcall NtSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength)
{
  __int32 v6; // ecx
  ULONG v7; // edx
  KPROCESSOR_MODE PreviousMode; // al
  __m128i *v9; // rdi
  char *v10; // rcx
  int v11; // edx
  NTSTATUS result; // eax
  char *v13; // r14
  int v14; // esi
  char v15; // bl
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
  __int64 MiniCompletionPacket; // rbx
  ULONG v46; // eax
  int v47; // eax
  __int64 v48; // r9
  int v49; // edx
  ULONG *v50; // rdi
  __int64 v51; // rcx
  char v52; // bl
  void *v53; // rdi
  char v54; // bl
  bool v55; // cc
  int v56; // eax
  struct _LIST_ENTRY *v57; // rdx
  PERESOURCE v58; // rsi
  __int16 v59; // cx
  int v60; // ebx
  __int64 v61; // rcx
  char v62; // bl
  char v63; // di
  __int64 v64; // rdx
  unsigned __int8 v65; // bl
  __int64 v66; // r9
  __int64 v67; // r8
  int v68; // edx
  __int64 Flink; // rcx
  __int64 v70; // rdi
  __int64 v71; // rbx
  int v72; // eax
  wchar_t *v73; // rbx
  unsigned __int16 v74; // cx
  POOL_TYPE v75; // r12d
  unsigned __int64 v76; // r8
  wchar_t *PoolWithQuotaTag; // rax
  struct _LIST_ENTRY *RateControl; // rax
  char v79; // bl
  int *v80; // rsi
  char *v81; // rax
  unsigned int v82; // ebx
  struct _ERESOURCE *v83; // rcx
  unsigned int v84; // eax
  unsigned __int64 v85; // rcx
  BOOLEAN v86; // al
  unsigned __int16 Group; // ax
  __int64 v88; // rax
  __int64 v89; // rax
  char *v90; // rsi
  char *j; // rdi
  PERESOURCE v92; // rbx
  struct _LIST_ENTRY *PoolWithTag; // rbx
  unsigned int v94; // ecx
  int v95; // eax
  int v96; // edx
  unsigned __int16 v97; // r11
  __int64 v98; // r9
  __m128i v99; // xmm0
  unsigned __int16 epi16; // ax
  __int64 v101; // r10
  BOOLEAN v102; // al
  char *v103; // r12
  PERESOURCE v104; // rcx
  struct _LIST_ENTRY *v105; // rax
  struct _LIST_ENTRY *v106; // rax
  int v107; // eax
  int Silo; // eax
  ULONG v109; // edx
  __int64 v110; // rdx
  unsigned __int64 v111; // xmm0_8
  unsigned __int64 v112; // rdx
  size_t v113; // rdi
  wchar_t *v114; // rax
  struct _ERESOURCE *v115; // rbx
  int v116; // r8d
  signed __int8 v117; // cf
  volatile signed __int32 *ServerSiloStatePointer; // rcx
  signed __int32 v119; // eax
  signed __int32 v120[8]; // [rsp+0h] [rbp-B98h] BYREF
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-B58h]
  __int32 v122; // [rsp+48h] [rbp-B50h]
  PVOID Object; // [rsp+50h] [rbp-B48h] BYREF
  int v124; // [rsp+58h] [rbp-B40h]
  ULONG Size; // [rsp+5Ch] [rbp-B3Ch]
  KPROCESSOR_MODE Size_4; // [rsp+60h] [rbp-B38h]
  PSECURITY_SUBJECT_CONTEXT v127; // [rsp+68h] [rbp-B30h]
  unsigned __int16 v128; // [rsp+70h] [rbp-B28h]
  PETHREAD Thread; // [rsp+78h] [rbp-B20h]
  PERESOURCE Resource; // [rsp+80h] [rbp-B18h]
  __int64 v131; // [rsp+88h] [rbp-B10h] BYREF
  int v132; // [rsp+90h] [rbp-B08h]
  PSECURITY_SUBJECT_CONTEXT v133; // [rsp+98h] [rbp-B00h]
  PVOID P; // [rsp+A0h] [rbp-AF8h]
  __int8 v135; // [rsp+A8h] [rbp-AF0h]
  char v136; // [rsp+A9h] [rbp-AEFh]
  __int8 v137; // [rsp+AAh] [rbp-AEEh]
  unsigned __int32 v138; // [rsp+ACh] [rbp-AECh]
  void *Src; // [rsp+B0h] [rbp-AE8h]
  int v140; // [rsp+B8h] [rbp-AE0h]
  __int64 v141; // [rsp+C0h] [rbp-AD8h] BYREF
  struct _LIST_ENTRY *v142; // [rsp+C8h] [rbp-AD0h] BYREF
  int Blink; // [rsp+D0h] [rbp-AC8h] BYREF
  int Blink_high; // [rsp+D4h] [rbp-AC4h]
  __int64 v145; // [rsp+D8h] [rbp-AC0h]
  __int64 v146; // [rsp+E0h] [rbp-AB8h] BYREF
  int v147; // [rsp+E8h] [rbp-AB0h]
  ULONG v148; // [rsp+ECh] [rbp-AACh]
  _BYTE SubjectContext[40]; // [rsp+F0h] [rbp-AA8h] BYREF
  unsigned int v150; // [rsp+118h] [rbp-A80h] BYREF
  unsigned __int32 v151; // [rsp+11Ch] [rbp-A7Ch]
  int v152; // [rsp+120h] [rbp-A78h]
  __int32 v153; // [rsp+124h] [rbp-A74h]
  int v154; // [rsp+128h] [rbp-A70h] BYREF
  unsigned int v155; // [rsp+12Ch] [rbp-A6Ch]
  __int64 v156; // [rsp+130h] [rbp-A68h] BYREF
  PVOID v157; // [rsp+138h] [rbp-A60h] BYREF
  __int64 v158; // [rsp+140h] [rbp-A58h]
  wchar_t *v159; // [rsp+148h] [rbp-A50h]
  __m128i v160; // [rsp+150h] [rbp-A48h] BYREF
  unsigned int v161; // [rsp+160h] [rbp-A38h]
  __int32 v162; // [rsp+164h] [rbp-A34h]
  __int64 v163; // [rsp+168h] [rbp-A30h] BYREF
  __m128i v164; // [rsp+170h] [rbp-A28h] BYREF
  HANDLE Handle[3]; // [rsp+180h] [rbp-A18h]
  wchar_t *v166; // [rsp+198h] [rbp-A00h]
  __int128 v167; // [rsp+1A0h] [rbp-9F8h] BYREF
  __int128 v168; // [rsp+1B0h] [rbp-9E8h]
  char *v169; // [rsp+1C0h] [rbp-9D8h] BYREF
  int v170; // [rsp+1C8h] [rbp-9D0h]
  __int64 v171; // [rsp+1D0h] [rbp-9C8h]
  __int64 v172; // [rsp+1D8h] [rbp-9C0h]
  __int64 v173; // [rsp+1E0h] [rbp-9B8h]
  __int64 v174; // [rsp+1E8h] [rbp-9B0h]
  __m128i v175; // [rsp+1F0h] [rbp-9A8h]
  __m128i v176; // [rsp+200h] [rbp-998h]
  __m128i v177; // [rsp+210h] [rbp-988h]
  __m128i v178; // [rsp+220h] [rbp-978h]
  __int64 v179; // [rsp+230h] [rbp-968h]
  __m128i v180; // [rsp+240h] [rbp-958h]
  __m128i v181; // [rsp+250h] [rbp-948h]
  __int64 v182; // [rsp+260h] [rbp-938h]
  _QWORD v183[18]; // [rsp+270h] [rbp-928h] BYREF
  __int64 v184; // [rsp+300h] [rbp-898h] BYREF
  unsigned __int64 v185; // [rsp+308h] [rbp-890h]
  __int64 v186; // [rsp+310h] [rbp-888h]
  unsigned __int64 v187; // [rsp+318h] [rbp-880h]
  int v188; // [rsp+320h] [rbp-878h]
  int v189; // [rsp+324h] [rbp-874h]
  unsigned int v190; // [rsp+328h] [rbp-870h]
  unsigned __int64 v191; // [rsp+330h] [rbp-868h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+350h] [rbp-848h] BYREF
  __m128i v193; // [rsp+368h] [rbp-830h] BYREF
  __int64 v194; // [rsp+380h] [rbp-818h] BYREF
  __int64 v195; // [rsp+388h] [rbp-810h]
  int v196; // [rsp+390h] [rbp-808h]
  unsigned __int64 v197; // [rsp+398h] [rbp-800h]
  unsigned __int64 v198; // [rsp+3A0h] [rbp-7F8h]
  int v199; // [rsp+3A8h] [rbp-7F0h]
  __int64 v200; // [rsp+3B0h] [rbp-7E8h]
  unsigned int v201; // [rsp+3B8h] [rbp-7E0h]
  unsigned int v202; // [rsp+3BCh] [rbp-7DCh]
  unsigned __int64 v203; // [rsp+3F0h] [rbp-7A8h]
  unsigned __int64 v204; // [rsp+3F8h] [rbp-7A0h]
  unsigned __int64 v205; // [rsp+410h] [rbp-788h]
  __m128i v206; // [rsp+420h] [rbp-778h]
  __m128i v207; // [rsp+430h] [rbp-768h]
  __m128i v208; // [rsp+440h] [rbp-758h]
  __int64 v209; // [rsp+450h] [rbp-748h]
  __m128i v210; // [rsp+458h] [rbp-740h]
  __m128i v211; // [rsp+468h] [rbp-730h]
  __m128i v212; // [rsp+478h] [rbp-720h]
  _OWORD v213[108]; // [rsp+490h] [rbp-708h] BYREF

  Size = JobInformationLength;
  Resource = (PERESOURCE)JobHandle;
  v122 = JobInformationClass;
  Src = JobInformation;
  v6 = JobInformationClass - 1;
  if ( (unsigned int)(JobInformationClass - 1) > 0x2E )
    return -1073741821;
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
      v7 = PspJobInfoLengths[v6];
      if ( JobInformationLength != v7
        && (JobInformationClass != JobObjectGroupInformation && JobInformationClass != JobObjectGroupInformationEx
         || JobInformationLength < v7) )
      {
        return -1073741820;
      }
      goto LABEL_6;
  }
  if ( !v41 )
    return -1073741820;
LABEL_6:
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  AccessMode = PreviousMode;
  Size_4 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__m128i *)Src;
    if ( JobInformationLength )
    {
      if ( ((PspJobInfoAlign[v6] - 1) & (unsigned int)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (char *)Src + JobInformationLength;
      if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    PreviousMode = AccessMode;
  }
  else
  {
    v9 = (__m128i *)Src;
  }
  if ( !JobHandle )
  {
    if ( JobInformationClass != JobObjectServerSiloRunningState )
      return -1073741816;
    v81 = (char *)Thread->ApcState.Process[1].Affinity.Bitmap[16];
    Object = v81;
    v13 = v81;
    if ( !v81 )
      return -1073741790;
    ObfReferenceObjectWithTag(v81, 0x79517350u);
    v9 = (__m128i *)Src;
LABEL_20:
    v14 = 0;
    v124 = 0;
    v15 = 0;
    --Thread->SpecialApcDisable;
    if ( JobInformationClass <= JobObjectCycleTimeNotification )
    {
      if ( JobInformationClass == JobObjectCycleTimeNotification )
      {
        v70 = v9->m128i_i64[0];
        v173 = v70;
        ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
        if ( (*((_DWORD *)v13 + 326) & 0x20) != 0 )
        {
          v71 = *((_QWORD *)v13 + 126);
          v72 = *(_DWORD *)(v71 + 40);
          if ( (v72 & 0x10) == 0 )
          {
            *(_DWORD *)(v71 + 40) = v72 | 0x10;
            KeInitializeDpc((PRKDPC)(v71 + 48), (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine, v13);
          }
          KeSetSchedulingGroupCycleNotification(v71 + 128, v71 + 48, v70);
          v14 = 0;
        }
        else
        {
          v14 = -1073741811;
        }
        goto LABEL_230;
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
                v162 = v9->m128i_i32[0];
                v16 = v162;
                if ( (v162 & 0xFFFFC001) != 0 )
                {
                  v14 = -1073741811;
                }
                else
                {
                  ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
                  if ( v13 )
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v13 + 1032), 0LL);
                  *((_DWORD *)v13 + 219) = v16;
                  PspUnlockJobMemoryLimitsExclusive(v13, 0LL, 0LL);
                  ExReleaseResourceLite((PERESOURCE)(v13 + 56));
                  v14 = 0;
                }
                goto LABEL_30;
              case JobObjectFreezeInformation:
                v193 = *v9;
                if ( !v193.m128i_i32[0] || (v193.m128i_i32[0] & 0xFFFFFFF8) != 0 )
                {
                  v14 = -1073741811;
                }
                else
                {
                  v14 = PspFreezeJobTree(v13, &v193);
                  if ( v14 >= 0 )
                    v9->m128i_i32[0] = v193.m128i_i32[0];
                }
                goto LABEL_30;
              case JobObjectBackgroundInformation:
                v136 = v9->m128i_i8[0];
                v14 = PspSetBackgroundJobTree(v13, v136);
                if ( v14 >= 0 )
                  v14 = 0;
                goto LABEL_30;
            }
            if ( JobInformationClass != JobObjectSchedulingRankBiasInformation )
            {
              if ( JobInformationClass == JobObjectTimerVirtualizationInformation )
              {
                if ( v9->m128i_i8[0] == 1 )
                {
                  PspEnumJobsAndProcessesInJobHierarchy(
                    v13,
                    0,
                    (int)PspEnableTimerVirtualization,
                    (int)PspEnableProcessTimerVirtualization,
                    0LL,
                    0);
                  v14 = 0;
                }
                else
                {
                  v14 = -1073741811;
                  v124 = -1073741811;
                }
                goto LABEL_30;
              }
              goto LABEL_472;
            }
            v65 = v9->m128i_i8[0];
            v135 = v9->m128i_i8[0];
            ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
            if ( (*((_DWORD *)v13 + 326) & 0x20) != 0 )
            {
              v67 = *((_QWORD *)v13 + 126);
              v68 = *(_DWORD *)(v67 + 40);
              if ( (v68 & 0x40) == 0 )
              {
                if ( (v68 & 0x21) != 0 )
                {
                  v14 = -1073741637;
                  goto LABEL_230;
                }
                if ( (((unsigned __int8)v68 >> 3) & 1) != (v65 != 0) )
                {
                  *(_DWORD *)(v67 + 40) = v68 ^ ((unsigned __int8)v68 ^ (unsigned __int8)(8 * (v65 != 0))) & 8;
                  KeSetSchedulingGroupRankBias(*((_QWORD *)v13 + 126) + 128LL, v65, v67, v66);
                  v14 = 0;
LABEL_230:
                  ExReleaseResourceLite((PERESOURCE)(v13 + 56));
                  goto LABEL_30;
                }
              }
            }
            v14 = -1073741811;
            goto LABEL_230;
          }
          memmove(&v154, v9, Size);
          v54 = v154;
          if ( (v154 & 0xFFFFFFE0) != 0 )
            goto LABEL_172;
          v131 = v155;
          Size = v154 & 1;
          if ( (v154 & 1) == 0 )
            goto LABEL_176;
          if ( (v154 & 2) != 0 )
          {
            if ( (v154 & 0x10) != 0 )
              goto LABEL_172;
            v55 = (unsigned __int16)(v155 - 1) <= 8u;
          }
          else
          {
            if ( (unsigned __int16)(v155 - 1) > 0x270Fu )
            {
LABEL_172:
              v14 = -1073741811;
LABEL_30:
              KiLeaveGuardedRegionUnsafe((__int64)Thread);
              if ( v14 )
              {
                if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                  EtwTraceJobSetQuery((_DWORD)v13, JobInformationClass, 0, 0, v14, 1831);
              }
              ObfDereferenceObjectWithTag(v13, 0x79517350u);
              return v14;
            }
            if ( (v154 & 0x10) == 0 )
            {
LABEL_176:
              PspLockJobChain((__int64)v13, (__int64)Thread, 0);
              v56 = *((_DWORD *)v13 + 326);
              if ( Size )
              {
                if ( (v56 & 0x20) == 0 )
                {
                  RateControl = (struct _LIST_ENTRY *)PspAllocateRateControl(2LL);
                  v57 = RateControl;
                  if ( !RateControl )
                  {
                    v14 = -1073741670;
                    goto LABEL_183;
                  }
                  *((_QWORD *)v13 + 126) = RateControl;
LABEL_179:
                  v58 = (PERESOURCE)(v13 + 1008);
                  Resource = (PERESOURCE)(v13 + 1008);
                  *(_DWORD *)(*((_QWORD *)v13 + 126) + 40LL) = 0;
                  v59 = v155;
                  *(_DWORD *)(*((_QWORD *)v13 + 126) + 44LL) = v155;
                  if ( Size )
                  {
                    if ( (v54 & 4) != 0 )
                    {
                      LODWORD(v58->SystemResourcesList.Flink[2].Blink) |= 1u;
                      WORD1(v131) = v59;
                    }
                    if ( (v54 & 2) != 0 )
                    {
                      LODWORD(v58->SystemResourcesList.Flink[2].Blink) |= 4u;
                      HIDWORD(v131) = 0;
                    }
                    else
                    {
                      HIDWORD(v131) = 1;
                      if ( (v54 & 0x14) == 0 )
                        WORD1(v131) = 10000;
                    }
                    if ( (v54 & 8) != 0 )
                      LODWORD(v58->SystemResourcesList.Flink[2].Blink) |= 2u;
                    if ( (v54 & 0x10) != 0 )
                      LODWORD(v58->SystemResourcesList.Flink[2].Blink) |= 0x20u;
                    Flink = (__int64)v58->SystemResourcesList.Flink;
                    if ( v58->SystemResourcesList.Flink == v57 )
                    {
                      *(_QWORD *)(Flink + 128) = v131;
                      v14 = PspAddSchedulingGroupToJobChain(*((_QWORD *)v13 + 134), (__int64)v13);
                      v124 = v14;
                      if ( v14 < 0 )
                      {
                        v92 = Resource;
                        if ( Resource->SystemResourcesList.Flink )
                        {
                          PspFreeRateControl((__int64)Resource->SystemResourcesList.Flink, 2u);
                          v92->SystemResourcesList.Flink = 0LL;
                        }
                        goto LABEL_183;
                      }
                      _InterlockedOr((volatile signed __int32 *)v13 + 326, 0x20u);
                      v13 = (char *)Object;
                      v58 = Resource;
                    }
                    else
                    {
                      v142 = (struct _LIST_ENTRY *)(Flink + 128);
                      if ( (*(_DWORD *)(Flink + 40) & 4) != 0 )
                        KeSetSchedulingGroupWeights(1u, (__int64)&v142, (__int64)&v131);
                      else
                        KeSetSchedulingGroupCpuRates(Flink, &v142, &v131);
                    }
                    Blink = (int)v58->SystemResourcesList.Flink[2].Blink;
                    Blink_high = HIDWORD(v58->SystemResourcesList.Flink[2].Blink);
                  }
                  else
                  {
                    v131 = 0x327102710LL;
                    LODWORD(v58->SystemResourcesList.Flink[2].Blink) |= 0x40u;
                    v60 = v131;
                    HIDWORD(v58->SystemResourcesList.Flink[2].Blink) = v131;
                    v142 = v58->SystemResourcesList.Flink + 8;
                    *((_QWORD *)v13 + 128) += KeQuerySchedulingGroupReadyTime((__int64)v142);
                    KeSetSchedulingGroupCpuRates(v61, &v142, &v131);
                    Blink = 0;
                    Blink_high = v60;
                  }
                  v14 = 0;
                  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                    EtwTraceJobSetQuery((_DWORD)v13, 15, (unsigned int)&Blink, 0, 0, 1829);
LABEL_183:
                  PspUnlockJobChain((__int64)v13, (__int64)Thread, 0);
                  goto LABEL_30;
                }
              }
              else if ( (v56 & 0x20) == 0 )
              {
                v14 = -1073741811;
                goto LABEL_183;
              }
              v57 = 0LL;
              goto LABEL_179;
            }
            if ( (v154 & 4) != 0 || HIWORD(v155) < (unsigned __int16)v155 )
              goto LABEL_172;
            v55 = HIWORD(v155) <= 0x2710u;
          }
          if ( !v55 )
            goto LABEL_172;
          goto LABEL_176;
        }
LABEL_386:
        PoolWithTag = 0LL;
        v133 = 0LL;
        v94 = 2;
        if ( JobInformationClass == JobObjectGroupInformationEx )
          v94 = 16;
        LODWORD(P) = v94;
        v96 = Size % v94;
        v95 = Size / v94;
        Size /= v94;
        if ( v96 )
        {
          v14 = -1073741820;
          goto LABEL_30;
        }
        v140 = v95;
        LODWORD(v213[0]) = 1310721;
        memset((char *)v213 + 4, 0, 0xA4uLL);
        v97 = KeQueryActiveGroupCount() - 1;
        v98 = (unsigned int)P;
        while ( Size )
        {
          if ( JobInformationClass == JobObjectGroupInformationEx )
          {
            v99 = *v9;
            v160 = v99;
            epi16 = _mm_extract_epi16(v99, 4);
            v160.m128i_i16[4] = epi16;
            v128 = epi16;
            v145 = v99.m128i_i64[0];
          }
          else
          {
            v128 = v9->m128i_i16[0];
            v145 = qword_1403E42B8[v128];
            epi16 = v128;
          }
          v101 = qword_1403E42B8[epi16];
          v158 = v101;
          if ( v128 > v97 || *((_QWORD *)v213 + epi16 + 1) || v145 != (v101 & v145) )
          {
            v14 = -1073741811;
            v124 = -1073741811;
            v13 = (char *)Object;
            break;
          }
          if ( LOWORD(v213[0]) <= v128 )
            LOWORD(v213[0]) = v128 + 1;
          *((_QWORD *)v213 + epi16 + 1) |= v145;
          Size = --v140;
          v9 = (__m128i *)((char *)Src + v98);
          Src = (char *)Src + v98;
          v14 = v124;
          v13 = (char *)Object;
        }
        if ( v14 < 0 )
          goto LABEL_30;
        Resource = (PERESOURCE)(v13 + 432);
        if ( !*((_QWORD *)v13 + 54) )
        {
          PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
          if ( !PoolWithTag )
          {
            v14 = -1073741670;
            goto LABEL_30;
          }
          v133 = (PSECURITY_SUBJECT_CONTEXT)PsChargeSharedPoolQuota(
                                              KeGetCurrentThread()->ApcState.Process,
                                              0x28uLL,
                                              0LL);
          if ( !v133 )
          {
            ExFreePoolWithTag(PoolWithTag, 0x614A7350u);
            v14 = -1073741670;
LABEL_496:
            v13 = (char *)Object;
            goto LABEL_30;
          }
          v13 = (char *)Object;
        }
        SeCaptureSubjectContextEx(Thread, Thread->ApcState.Process, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8]);
        v127 = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8];
        if ( AccessMode )
        {
          RequiredPrivileges.PrivilegeCount = 1;
          RequiredPrivileges.Control = 1;
          RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
          RequiredPrivileges.Privilege[0].Attributes = 0;
          v102 = SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8], 1);
          *(_DWORD *)SubjectContext ^= (*(_DWORD *)SubjectContext ^ v102) & 1;
        }
        else
        {
          *(_DWORD *)SubjectContext |= 1u;
        }
        P = v13 + 56;
        ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
        v14 = PspEnumJobsAndProcessesInJobHierarchy(
                v13,
                0,
                0,
                (int)PspSetAffinityLimitCallback,
                (__int64)SubjectContext,
                1);
        v124 = v14;
        v103 = (char *)v133;
        if ( v14 >= 0 )
        {
          v104 = Resource;
          v105 = Resource->SystemResourcesList.Flink;
          if ( Resource->SystemResourcesList.Flink )
          {
            v167 = *(_OWORD *)&v105->Blink;
            v168 = *(_OWORD *)&v105[1].Blink;
            v127 = (PSECURITY_SUBJECT_CONTEXT)&v167;
          }
          else
          {
            Resource->SystemResourcesList.Flink = PoolWithTag;
            *((_QWORD *)v13 + 55) = v103;
            PoolWithTag = 0LL;
            v127 = 0LL;
          }
          v106 = v104->SystemResourcesList.Flink;
          *v106 = *(struct _LIST_ENTRY *)SubjectContext;
          v106[1] = *(struct _LIST_ENTRY *)&SubjectContext[16];
          v106[2].Flink = *(struct _LIST_ENTRY **)&SubjectContext[32];
          v146 = (__int64)v13;
          v148 = *((_DWORD *)v13 + 64);
          v147 = -17;
          *(_OWORD *)(v13 + 264) = v213[0];
          *(_OWORD *)(v13 + 280) = v213[1];
          *(_OWORD *)(v13 + 296) = v213[2];
          *(_OWORD *)(v13 + 312) = v213[3];
          *(_OWORD *)(v13 + 328) = v213[4];
          *(_OWORD *)(v13 + 344) = v213[5];
          *(_OWORD *)(v13 + 360) = v213[6];
          *(_OWORD *)(v13 + 376) = v213[7];
          *(_OWORD *)(v13 + 392) = v213[8];
          *(_OWORD *)(v13 + 408) = v213[9];
          *((_QWORD *)v13 + 53) = *(_QWORD *)&v213[10];
          if ( JobInformationClass == JobObjectGroupInformationEx
            && (unsigned int)KeIsEmptyAffinityEx((_WORD *)v13 + 132) )
          {
            *((_DWORD *)v13 + 64) &= ~0x10u;
            _InterlockedAnd((volatile signed __int32 *)v13 + 326, 0xFFFFFFFD);
          }
          else
          {
            *((_DWORD *)v13 + 64) |= 0x10u;
            _InterlockedOr((volatile signed __int32 *)v13 + 326, 2u);
          }
          v13 = (char *)Object;
          PspEnumJobsAndProcessesInJobHierarchy(
            (char *)Object,
            (int)PspSetJobLimitsJobPreCallback,
            0,
            (int)PspSetJobLimitsProcessCallback,
            (__int64)&v146,
            5);
          v14 = v124;
        }
        ExReleaseResourceLite((PERESOURCE)P);
        if ( v127 )
          SeReleaseSubjectContext(v127);
        if ( PoolWithTag )
        {
          ExFreePoolWithTag(PoolWithTag, 0x614A7350u);
          PsReturnSharedPoolQuota(v103, 0x28uLL, 0LL);
        }
        goto LABEL_30;
      }
      switch ( JobInformationClass )
      {
        case JobObjectNotificationLimitInformation:
LABEL_34:
          if ( Size == 56 )
          {
            v206 = *v9;
            v207 = v9[1];
            v208 = v9[2];
            v209 = v9[3].m128i_i64[0];
            v17 = (unsigned int)v209;
            v190 = v209;
            v18 = v206.m128i_i64[0];
            v184 = v206.m128i_i64[0];
            v19 = _mm_srli_si128(v206, 8).m128i_u64[0];
            v185 = v19;
            v20 = v207.m128i_i64[0];
            v186 = v207.m128i_i64[0];
            v21 = _mm_srli_si128(v207, 8).m128i_u64[0];
            v191 = v21;
            v22 = v208.m128i_i64[0];
            v187 = v208.m128i_i64[0];
            v188 = _mm_cvtsi128_si32(_mm_srli_si128(v208, 8));
            v189 = _mm_cvtsi128_si32(_mm_srli_si128(v208, 12));
            v23 = 2589188;
            v132 = 2589188;
          }
          else
          {
            if ( Size == 48 )
            {
              v210 = *v9;
              v211 = v9[1];
              v212 = v9[2];
              v17 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v212, 8));
              v190 = v17;
              v18 = v210.m128i_i64[0];
              v184 = v210.m128i_i64[0];
              v19 = _mm_srli_si128(v210, 8).m128i_u64[0];
              v185 = v19;
              v20 = v211.m128i_i64[0];
              v186 = v211.m128i_i64[0];
              v22 = _mm_srli_si128(v211, 8).m128i_u64[0];
              v187 = v22;
              v188 = _mm_cvtsi128_si32(v212);
              v189 = _mm_cvtsi128_si32(_mm_srli_si128(v212, 4));
              v23 = 459268;
              v132 = 459268;
            }
            else
            {
              memmove(&v184, v9, Size);
              v23 = 2064900;
              v132 = 2064900;
              v17 = v190;
              v22 = v187;
              v20 = v186;
              v19 = v185;
              v18 = v184;
            }
            v21 = v191;
          }
          if ( (~v23 & (unsigned int)v17) != 0 )
            goto LABEL_441;
          if ( (v17 & 0x8000) != 0 )
          {
            if ( v21 < 0x1000 )
              goto LABEL_441;
          }
          else
          {
            v21 = 0LL;
            v191 = 0LL;
          }
          if ( (v17 & 0x200) != 0 )
          {
            if ( v22 < 0x1000 || v22 < v21 )
              goto LABEL_441;
          }
          else
          {
            v187 = 0LL;
          }
          if ( (v17 & 4) != 0 )
          {
            if ( !v20 )
              goto LABEL_441;
          }
          else
          {
            v186 = 0LL;
          }
          if ( (v17 & 0x10000) != 0 )
          {
            if ( !v18 )
              goto LABEL_441;
          }
          else
          {
            v184 = 0LL;
          }
          if ( (v17 & 0x20000) == 0 )
          {
            v185 = 0LL;
LABEL_52:
            for ( i = 0LL; (int)i < 3; i = (unsigned int)(v27 + 1) )
            {
              PspNotificationLimitRateControlToleranceField(&v184, i, v17);
              PspNotificationLimitRateControlToleranceIntervalField(&v184);
              v26 = PspRateControlLimitFlag(v25);
              if ( (v26 & (unsigned int)v17) != 0 )
              {
                if ( !*v28 || *v28 > 3 || !*v29 || *v29 > 3 )
                  goto LABEL_441;
              }
              else
              {
                *v28 = 0;
                *v29 = 0;
                v17 = v190;
              }
            }
            v30 = (int **)(v13 + 984);
            if ( *((_QWORD *)v13 + 123) )
            {
              v31 = 0LL;
              v127 = 0LL;
            }
            else
            {
              v31 = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x624A7350u);
              if ( !v31 )
              {
                v14 = -1073741670;
                goto LABEL_30;
              }
              v127 = (PSECURITY_SUBJECT_CONTEXT)PsChargeSharedPoolQuota(
                                                  KeGetCurrentThread()->ApcState.Process,
                                                  0x88uLL,
                                                  0LL);
              if ( !v127 )
              {
                ExFreePoolWithTag(v31, 0x624A7350u);
                v14 = -1073741670;
                v13 = (char *)Object;
                goto LABEL_30;
              }
              memset(v31, 0, 0x88uLL);
              v13 = (char *)Object;
            }
            Resource = (PERESOURCE)(v13 + 56);
            ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
            if ( *v30 )
            {
              if ( v31 )
              {
                ExFreePoolWithTag(v31, 0x624A7350u);
                PsReturnSharedPoolQuota((char *)v127, 0x88uLL, 0LL);
              }
            }
            else
            {
              *v30 = (int *)v31;
              *((_QWORD *)v13 + 124) = v127;
            }
            v32 = *v30;
            v33 = **v30;
            *((_QWORD *)v32 + 1) = v184;
            *((_QWORD *)v32 + 2) = v185;
            *((_QWORD *)v32 + 3) = v186;
            v34 = 0LL;
            v35 = v32 + 15;
            while ( (int)v34 < 3 )
            {
              v36 = (_DWORD *)PspNotificationLimitRateControlToleranceField(&v184, v34, v35);
              *(_DWORD *)(v37 - 12) = *v36;
              v38 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(&v184);
              *v39 = *v38;
              v34 = (unsigned int)(v40 + 1);
              v35 = v39 + 1;
            }
            v127 = (PSECURITY_SUBJECT_CONTEXT)(v13 + 1032);
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(v13 + 1032), 0LL);
            *((_QWORD *)v32 + 4) = v191 >> 12;
            *((_QWORD *)v32 + 5) = v187 >> 12;
            **v30 = v190;
            PspUnlockJobMemoryLimitsExclusive(v13, 0LL, 0LL);
            if ( (**v30 & 0xFFFF7DFF) != 0 )
            {
              _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
              v13 = (char *)Object;
            }
            if ( v33 )
            {
              v42 = *v30;
              if ( **v30 )
              {
LABEL_73:
                if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                  EtwTraceJobSetQuery((_DWORD)v13, JobInformationClass, (unsigned int)&v184, 0, 0, 1829);
                ExReleaseResourceLite(Resource);
                ExAcquirePushLockSharedEx((ULONG_PTR)v127, 0LL);
                v43 = *((_QWORD *)v13 + 165);
                v13 = (char *)Object;
                JobMemoryUsageNotificationViolations = PspGetJobMemoryUsageNotificationViolations(
                                                         (__int64)Object,
                                                         *((_QWORD *)Object + 122),
                                                         *((_QWORD *)Object + 122) + v43,
                                                         33280);
                PspUnlockJobMemoryLimitsShared((__int64)v13, 0LL);
                if ( JobMemoryUsageNotificationViolations )
                {
                  PspScheduleEnforcementWorker(*((_QWORD *)v13 + 135));
                  v13 = (char *)Object;
                }
                v14 = 0;
                goto LABEL_30;
              }
            }
            else
            {
              v42 = *v30;
              if ( !**v30 )
                goto LABEL_73;
            }
            PspEnumJobsAndProcessesInJobHierarchy(v13, (int)PspSetJobNotificationCountCallback, 0, 0, (__int64)v42, 5);
            goto LABEL_73;
          }
          if ( v19 )
            goto LABEL_52;
LABEL_441:
          v14 = -1073741811;
          goto LABEL_30;
        case JobObjectBasicLimitInformation:
LABEL_117:
          v127 = (PSECURITY_SUBJECT_CONTEXT)Size;
          memmove(&v194, v9, Size);
          v46 = Size;
          if ( Size < 0x98 )
          {
            memset((char *)&v194 + (_QWORD)v127, 0, 152LL - (_QWORD)v127);
            v46 = Size;
          }
          if ( JobInformationClass == JobObjectBasicLimitInformation )
          {
            v47 = 255;
          }
          else
          {
            v41 = v46 == 144;
            v47 = 6324223;
            if ( v41 )
              v47 = 0x7FFF;
          }
          v132 = v47;
          Size = ~v47;
          if ( (~v47 & v196) != 0 )
            goto LABEL_280;
          memset(&v213[11], 0, 0x610uLL);
          memset(SubjectContext, 0, sizeof(SubjectContext));
          v49 = v196;
          LODWORD(v213[27]) = v196;
          P = 0LL;
          v127 = 0LL;
          v133 = 0LL;
          DWORD1(v213[27]) = (v196 & 8) != 0 ? v199 : 0;
          if ( (v196 & 0x20) != 0 )
          {
            if ( v201 > 6 )
              goto LABEL_280;
            if ( v201 - 3 <= 1 )
            {
              LOBYTE(v48) = AccessMode;
              v15 = 4
                  * (((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                       SeIncreaseBasePriorityPrivilege,
                       Resource,
                       2LL,
                       v48) & 1);
              if ( (v15 & 4) == 0 )
                goto LABEL_309;
              v49 = v196;
            }
            BYTE9(v213[65]) = v201;
          }
          else
          {
            BYTE9(v213[65]) = 0;
          }
          if ( (v49 & 0x80u) != 0 )
          {
            v84 = v202;
            if ( v202 >= 0xA )
              goto LABEL_280;
            if ( v202 > 5 )
            {
              LOBYTE(v48) = AccessMode;
              v15 ^= (v15 ^ (4
                           * ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               Resource,
                               2LL,
                               v48))) & 4;
              if ( (v15 & 4) == 0 )
                goto LABEL_309;
              v49 = v196;
              v84 = v202;
            }
            DWORD1(v213[41]) = v84;
          }
          else
          {
            DWORD1(v213[41]) = 5;
          }
          if ( (v49 & 2) != 0 )
          {
            if ( !v194 )
              goto LABEL_280;
            *(_QWORD *)&v213[25] = v194;
          }
          else
          {
            *(_QWORD *)&v213[25] = 0LL;
          }
          v122 = v49 & 4;
          if ( (v49 & 4) != 0 )
          {
            if ( !v195 )
              goto LABEL_280;
            *((_QWORD *)&v213[25] + 1) = v195;
          }
          if ( (v49 & 1) == 0 )
          {
            v213[26] = 0uLL;
            goto LABEL_132;
          }
          v85 = v197;
          if ( !v197 && !v198 || v197 == -1LL && v198 == -1LL || v197 > v198 || v197 < 0x14000 )
            goto LABEL_280;
          if ( v197 <= PspMinimumWorkingSet )
          {
LABEL_329:
            *(_QWORD *)&v213[26] = v85;
            *((_QWORD *)&v213[26] + 1) = v198;
LABEL_132:
            if ( (v49 & 0x100) != 0 )
            {
              if ( v203 < 0x1000 )
                goto LABEL_280;
              *(_QWORD *)&v213[47] = v203 >> 12;
            }
            else
            {
              *(_QWORD *)&v213[47] = 0LL;
            }
            if ( (v49 & 0x200) != 0 )
            {
              if ( v204 < 0x1000 )
                goto LABEL_280;
              *((_QWORD *)&v213[47] + 1) = v204 >> 12;
            }
            else
            {
              *((_QWORD *)&v213[47] + 1) = 0LL;
            }
            if ( (v49 & 0x200000) != 0 )
            {
              if ( v205 < 0x1000 )
                goto LABEL_280;
              *(_QWORD *)&v213[48] = v205 >> 12;
            }
            else
            {
              *(_QWORD *)&v213[48] = 0LL;
            }
            DWORD2(v213[27]) = 1310721;
            memset((char *)&v213[27] + 12, 0, 0xA4uLL);
            if ( (v213[27] & 0x10) == 0 )
              goto LABEL_139;
            if ( (*((_DWORD *)v13 + 326) & 2) == 0 && v200 )
            {
              if ( !*((_QWORD *)v13 + 54) )
              {
                P = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
                if ( !P )
                {
                  v14 = -1073741670;
                  goto LABEL_30;
                }
                v127 = (PSECURITY_SUBJECT_CONTEXT)PsChargeSharedPoolQuota(
                                                    KeGetCurrentThread()->ApcState.Process,
                                                    0x28uLL,
                                                    0LL);
                if ( !v127 )
                {
                  ExFreePoolWithTag(P, 0x614A7350u);
                  v14 = -1073741670;
                  v13 = (char *)Object;
                  goto LABEL_30;
                }
                v14 = v124;
                v13 = (char *)Object;
              }
              SeCaptureSubjectContextEx(Thread, Thread->ApcState.Process, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8]);
              v133 = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8];
              if ( AccessMode )
              {
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                v86 = SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)&SubjectContext[8], 1);
                *(_DWORD *)SubjectContext ^= (*(_DWORD *)SubjectContext ^ v86) & 1;
              }
              else
              {
                *(_DWORD *)SubjectContext |= 1u;
              }
              v15 |= 2u;
LABEL_139:
              Resource = (PERESOURCE)(v13 + 56);
              ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
              if ( (v213[27] & 4) == 0 )
              {
                if ( (v213[27] & 0x40) != 0 )
                {
                  LODWORD(v213[27]) |= *((_DWORD *)v13 + 64) & 4;
                  *((_QWORD *)&v213[25] + 1) = *((_QWORD *)v13 + 29);
                }
                else
                {
                  *((_QWORD *)&v213[25] + 1) = 0LL;
                }
              }
              LODWORD(v213[27]) &= ~0x40u;
              if ( (v15 & 2) != 0 )
              {
                if ( (*((_DWORD *)v13 + 326) & 2) == 0 )
                {
                  if ( (*((_DWORD *)v13 + 64) & 0x10) != 0 )
                  {
                    KeFirstGroupAffinityEx(&v160, (_WORD *)v13 + 132);
                    Group = v160.m128i_u16[4];
                  }
                  else
                  {
                    Group = KeGetCurrentPrcb()->Group;
                    v160.m128i_i16[4] = Group;
                  }
                  v158 = qword_1403E42B8[Group];
                  if ( v200 == (v158 & v200) )
                  {
                    if ( WORD4(v213[27]) <= (unsigned int)v160.m128i_i16[4] )
                      WORD4(v213[27]) = v160.m128i_i16[4] + 1;
                    *((_QWORD *)&v213[28] + Group) |= v200;
                    v13 = (char *)Object;
                    v14 = PspEnumJobsAndProcessesInJobHierarchy(
                            (char *)Object,
                            0,
                            0,
                            (int)PspSetAffinityLimitCallback,
                            (__int64)SubjectContext,
                            1);
                    v124 = v14;
                    if ( v14 < 0 )
                      goto LABEL_154;
                    v88 = *((_QWORD *)v13 + 54);
                    if ( v88 )
                    {
                      v167 = *(_OWORD *)(v88 + 8);
                      v168 = *(_OWORD *)(v88 + 24);
                      v133 = (PSECURITY_SUBJECT_CONTEXT)&v167;
                    }
                    else
                    {
                      *((_QWORD *)v13 + 54) = P;
                      *((_QWORD *)v13 + 55) = v127;
                      P = 0LL;
                      v133 = 0LL;
                    }
                    v89 = *((_QWORD *)v13 + 54);
                    *(_OWORD *)v89 = *(_OWORD *)SubjectContext;
                    *(_OWORD *)(v89 + 16) = *(_OWORD *)&SubjectContext[16];
                    *(_QWORD *)(v89 + 32) = *(_QWORD *)&SubjectContext[32];
                    goto LABEL_144;
                  }
                  v14 = -1073741811;
                  v124 = -1073741811;
                  v13 = (char *)Object;
LABEL_154:
                  v52 = v15 & 1;
                  if ( v52 )
                  {
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140341790, 0LL);
                    _InterlockedOr((volatile signed __int32 *)v13 + 326, 0x100u);
                    v13 = (char *)Object;
                    v90 = (char *)Object + 40;
                    for ( j = (char *)*((_QWORD *)Object + 5); j != v90; j = *(char **)j )
                    {
                      if ( (*((_DWORD *)j - 92) & 1) == 0 )
                        PspAddProcessToWorkingSetChangeList(j - 1136);
                    }
                    v14 = v124;
                  }
                  ExReleaseResourceLite(Resource);
                  if ( v52 )
                    PspApplyWorkingSetLimits(v13);
                  if ( v133 )
                    SeReleaseSubjectContext(v133);
                  if ( P )
                  {
                    ExFreePoolWithTag(P, 0x614A7350u);
                    PsReturnSharedPoolQuota((char *)v127, 0x28uLL, 0LL);
                  }
                  goto LABEL_30;
                }
              }
              else if ( (v213[27] & 0x4000) == 0 || (*((_DWORD *)v13 + 326) & 2) != 0 )
              {
LABEL_144:
                v50 = (ULONG *)(v13 + 256);
                if ( (*((_DWORD *)v13 + 64) & 1) != 0 && (v213[27] & 1) == 0 )
                {
                  _InterlockedOr(v120, 0);
                  if ( (qword_140341790 & 1) != 0 )
                    ExfAcquireReleasePushLockExclusive(&qword_140341790);
                  v13 = (char *)Object;
                  v14 = v124;
                }
                v146 = (__int64)v13;
                v148 = *v50;
                *((_OWORD *)v13 + 15) = v213[26];
                *((_DWORD *)v13 + 65) = DWORD1(v213[27]);
                *(_OWORD *)(v13 + 264) = *(_OWORD *)((char *)&v213[27] + 8);
                *(_OWORD *)(v13 + 280) = *(_OWORD *)((char *)&v213[28] + 8);
                *(_OWORD *)(v13 + 296) = *(_OWORD *)((char *)&v213[29] + 8);
                *(_OWORD *)(v13 + 312) = *(_OWORD *)((char *)&v213[30] + 8);
                *(_OWORD *)(v13 + 328) = *(_OWORD *)((char *)&v213[31] + 8);
                *(_OWORD *)(v13 + 344) = *(_OWORD *)((char *)&v213[32] + 8);
                *(_OWORD *)(v13 + 360) = *(_OWORD *)((char *)&v213[33] + 8);
                *(_OWORD *)(v13 + 376) = *(_OWORD *)((char *)&v213[34] + 8);
                *(_OWORD *)(v13 + 392) = *(_OWORD *)((char *)&v213[35] + 8);
                *(_OWORD *)(v13 + 408) = *(_OWORD *)((char *)&v213[36] + 8);
                *((_QWORD *)v13 + 53) = *((_QWORD *)&v213[37] + 1);
                v13[873] = BYTE9(v213[65]);
                *((_DWORD *)v13 + 121) = DWORD1(v213[41]);
                *((_OWORD *)v13 + 14) = v213[25];
                v51 = (__int64)(v13 + 232);
                if ( JobInformationClass == JobObjectExtendedLimitInformation )
                {
                  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v13 + 1032), 0LL);
                  *v50 = LODWORD(v213[27]) | *v50 & Size;
                  *((_OWORD *)v13 + 36) = v213[47];
                  *((_QWORD *)v13 + 74) = *(_QWORD *)&v213[48];
                  PspUnlockJobMemoryLimitsExclusive(v13, 0LL, 0LL);
                  v51 = (__int64)(v13 + 232);
                }
                else
                {
                  *v50 = LODWORD(v213[27]) | *v50 & Size;
                }
                v147 = ~(v148 | *v50);
                if ( v122 )
                {
                  PspEnumJobsAndProcessesInJobHierarchy(v13, 0, 0, (int)PspSetJobTimeLimitCallback, v51, 1);
                  *((_QWORD *)v13 + 23) = 0LL;
                  *((_QWORD *)v13 + 24) = 0LL;
                  KeResetEvent((PRKEVENT)v13);
                }
                if ( (*v50 & 6) != 0 )
                {
                  _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
                  v14 = v124;
                  v13 = (char *)Object;
                }
                if ( (v147 & 1) == 0 )
                  v15 |= 1u;
                PspEnumJobsAndProcessesInJobHierarchy(
                  v13,
                  (int)PspSetJobLimitsJobPreCallback,
                  (int)PspSetJobLimitsJobPostCallback,
                  (int)PspSetJobLimitsProcessCallback,
                  (__int64)&v146,
                  5);
                goto LABEL_154;
              }
              v14 = -1073741811;
              v124 = -1073741811;
              goto LABEL_154;
            }
LABEL_280:
            v14 = -1073741811;
            goto LABEL_30;
          }
          if ( SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, AccessMode) )
          {
            v49 = v196;
            v85 = v197;
            goto LABEL_329;
          }
LABEL_309:
          v14 = -1073741727;
          goto LABEL_30;
        case JobObjectBasicUIRestrictions:
          v138 = v9->m128i_i32[0];
          if ( (v138 & 0xFFFFFF00) != 0 )
          {
            v14 = -1073741811;
            goto LABEL_30;
          }
          v79 = 8;
          PspLockJobChain((__int64)v13, (__int64)Thread, 0);
          if ( PspDoesJobHierarchyPermitUILimits(v13, 0) )
          {
            v80 = (int *)(v13 + 480);
            if ( *((_DWORD *)v13 + 120) == -2 )
            {
              v14 = -1073741790;
            }
            else
            {
              v13 = (char *)Object;
              PspBindProcessSessionToJob((__int64)Object, KeGetCurrentThread()->ApcState.Process);
              v150 = *v80;
              if ( v150 > 0xFFFFFFFD
                || v138 == *((_DWORD *)v13 + 112)
                || (PspUnlockJobChain((__int64)v13, (__int64)Thread, 1),
                    v79 = 0,
                    v169 = v13,
                    v170 = 0,
                    v171 = v138,
                    v14 = PsInvokeWin32Callout(6, (__int64)&v169, 1, (int *)&v150),
                    v124 = v14,
                    v14 >= 0) )
              {
                *((_DWORD *)v13 + 112) = v138;
                _InterlockedOr((volatile signed __int32 *)v13 + 326, 0x10u);
                v14 = v124;
                v13 = (char *)Object;
              }
            }
          }
          else
          {
            v14 = -1073741637;
          }
          if ( (v79 & 8) == 0 )
          {
            PspUnlockJob((__int64)v13, (__int64)Thread);
            goto LABEL_30;
          }
          goto LABEL_183;
        case JobObjectSecurityLimitInformation:
          v180 = *v9;
          v181 = v9[1];
          v182 = v9[2].m128i_i64[0];
          v14 = (v180.m128i_i32[0] & 0xFFFFFFF0) != 0 ? -1073741811 : -1073741637;
          goto LABEL_30;
      }
      if ( JobInformationClass != JobObjectEndOfJobTimeInformation )
      {
        switch ( JobInformationClass )
        {
          case JobObjectAssociateCompletionPortInformation:
            MiniCompletionPacket = 0LL;
            *(__m128i *)Handle = *v9;
            if ( Handle[1] )
            {
              v14 = ObReferenceObjectByHandle(Handle[1], 2u, IoCompletionObjectType, AccessMode, &v157, 0LL);
              if ( v14 >= 0 )
              {
                if ( *((_QWORD *)v13 + 125)
                  || (MiniCompletionPacket = IoAllocateMiniCompletionPacket(
                                               (__int64)PspNotificationPacketCallback,
                                               (__int64)v13)) != 0 )
                {
                  ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
                  if ( *((_QWORD *)v13 + 57)
                    || (*((_DWORD *)v13 + 64) & 0x2000) != 0 && (*((_DWORD *)v13 + 326) & 1) != 0 )
                  {
                    ExReleaseResourceLite((PERESOURCE)(v13 + 56));
                    ObfDereferenceObject(v157);
                    v14 = -1073741811;
                  }
                  else
                  {
                    if ( !*((_QWORD *)v13 + 125) )
                    {
                      *((_QWORD *)v13 + 125) = MiniCompletionPacket;
                      MiniCompletionPacket = 0LL;
                    }
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v13 + 1032), 0LL);
                    *((HANDLE *)v13 + 58) = Handle[0];
                    *((_QWORD *)v13 + 57) = v157;
                    *((_QWORD *)v13 + 59) = 0LL;
                    PspUnlockJobMemoryLimitsExclusive(v13, 0LL, 0LL);
                    if ( (*((_DWORD *)v13 + 219) & 0x40) != 0 )
                      PspEnumJobsAndProcessesInJobHierarchy(
                        v13,
                        0,
                        0,
                        (int)PspAssociateCompletionPortCallback,
                        (__int64)v13,
                        1);
                    ExReleaseResourceLite((PERESOURCE)(v13 + 56));
                  }
                }
                else
                {
                  v14 = -1073741670;
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
              ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
              if ( v13 )
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v13 + 1032), 0LL);
              v53 = (void *)*((_QWORD *)v13 + 57);
              *((_QWORD *)v13 + 57) = 0LL;
              PspUnlockJobMemoryLimitsExclusive(v13, 0LL, 0LL);
              ExReleaseResourceLite((PERESOURCE)(v13 + 56));
              if ( v53 )
                ObfDereferenceObject(v53);
            }
            goto LABEL_30;
          case JobObjectExtendedLimitInformation:
            goto LABEL_117;
          case JobObjectGroupInformation:
            goto LABEL_386;
        }
LABEL_472:
        v14 = -1073741821;
        goto LABEL_30;
      }
      v161 = v9->m128i_i32[0];
      v82 = v161;
      if ( v161 <= 1 )
      {
        ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
        *((_DWORD *)v13 + 113) = v82;
        v83 = (struct _ERESOURCE *)(v13 + 56);
LABEL_299:
        ExReleaseResourceLite(v83);
        goto LABEL_30;
      }
LABEL_438:
      v14 = -1073741811;
      goto LABEL_30;
    }
    if ( JobInformationClass > JobObjectServerSiloInitialize )
    {
      switch ( JobInformationClass )
      {
        case JobObjectServerSiloRunningState:
          v153 = v9->m128i_i32[0];
          if ( !Resource || !PspJobIsAppSilo((__int64)v13) )
          {
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode) )
              goto LABEL_436;
            PsGetJobServerSilo((__int64)v13, &v156);
            if ( PsIsHostSilo(v156) )
              goto LABEL_437;
            ServerSiloStatePointer = (volatile signed __int32 *)PspGetServerSiloStatePointer(v156);
            v119 = *ServerSiloStatePointer;
            do
            {
              if ( v119 != 1 || v153 != 2 )
              {
                v14 = -1073700861;
                goto LABEL_496;
              }
              v119 = _InterlockedCompareExchange(ServerSiloStatePointer, 2, 1);
            }
            while ( v119 != 1 );
            EtwTraceJobServerSiloStateChange(v156, 2LL);
LABEL_494:
            v14 = 0;
            goto LABEL_496;
          }
          if ( v116 != 2 )
            goto LABEL_438;
          v115 = (struct _ERESOURCE *)(v13 + 56);
          ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
          if ( *((_DWORD *)v13 + 302) )
          {
            v14 = -1073740529;
          }
          else
          {
            v117 = _interlockedbittestandset((volatile signed __int32 *)v13 + 326, 0x1Du);
            v13 = (char *)Object;
            if ( v117 )
            {
              v14 = 255;
            }
            else
            {
              PspHardDereferenceSiloWorker((__int64)Object);
              v14 = 0;
            }
          }
          break;
        case JobObjectIoAttribution:
          v62 = 0;
          v175 = *v9;
          v176 = v9[1];
          v177 = v9[2];
          v178 = v9[3];
          v179 = v9[4].m128i_i64[0];
          if ( (v175.m128i_i32[0] & 0xFFFFFFFC) != 0 || (v175.m128i_i8[0] & 3) == 0 )
          {
            v14 = -1073741811;
          }
          else
          {
            v63 = v175.m128i_i8[0] & 1;
            v62 = 8;
            PspLockRootJobExclusive(v13, Thread, &v141);
            PspLockJobConditionally((__int64)v13, &v141);
            LOBYTE(v64) = v63;
            v14 = PspSetJobIoAttribution(v13, v64, 1, 1u);
            if ( v14 >= 0 )
            {
              PspUnlockJobConditionally((__int64)v13, &v141);
              PspUnlockJob(v141, (__int64)Thread);
              v62 = 0;
            }
          }
          if ( (v62 & 8) != 0 )
          {
            PspUnlockJobConditionally((__int64)v13, &v141);
            PspUnlockJob(v141, (__int64)Thread);
          }
          goto LABEL_30;
        case JobObjectMemoryPartitionInformation:
          v172 = v9->m128i_i64[0];
          v14 = PspSetJobMemoryPartition(v13);
          goto LABEL_30;
        case JobObjectContainerTelemetryId:
          v115 = (struct _ERESOURCE *)(v13 + 56);
          ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
          if ( *((int *)v13 + 326) >= 0 )
          {
            *(__m128i *)(v13 + 1240) = *v9;
            _InterlockedOr((volatile signed __int32 *)v13 + 326, 0x80000000);
            ExReleaseResourceLite((PERESOURCE)(v13 + 56));
            goto LABEL_494;
          }
          v14 = -1073741791;
          break;
        case JobObjectSiloSystemRoot:
          if ( (*((_DWORD *)v13 + 326) & 0x40000000) != 0 )
          {
            v159 = 0LL;
            v164 = *v9;
            v111 = _mm_srli_si128(v164, 8).m128i_u64[0];
            if ( !v111 || (unsigned __int16)(v164.m128i_i16[0] - 1) > 0x206u || (v164.m128i_i8[0] & 1) != 0 )
            {
              v14 = -1073741811;
              v124 = -1073741811;
              goto LABEL_30;
            }
            if ( AccessMode == 1 )
            {
              if ( (v111 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v112 = v111 + v164.m128i_u16[0];
              if ( v112 > 0x7FFFFFFF0000LL || v112 < v111 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v113 = v164.m128i_u16[0];
            v114 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v164.m128i_u16[0], 0x72537350u);
            v73 = v114;
            v159 = v114;
            if ( !v114 )
            {
              v14 = -1073741670;
              v124 = -1073741670;
              goto LABEL_30;
            }
            memmove(v114, (const void *)v111, v113);
            if ( wcsnlen(v73, v113 >> 1) == v113 >> 1 )
            {
              v164.m128i_i64[1] = (__int64)v73;
              v14 = PspAssignSiloSystemRootPath(v13, &v164);
            }
            else
            {
              v14 = -1073741811;
            }
            if ( !v73 )
              goto LABEL_30;
            v109 = 1918071632;
            goto LABEL_459;
          }
LABEL_437:
          v14 = -1073740535;
          goto LABEL_30;
        case JobObjectEnergyTrackingState:
          v163 = v9->m128i_i64[0];
          v14 = PspSetEnergyTrackingStateJobTree(v13, (__int64)&v163);
          if ( v14 >= 0 )
            v14 = 0;
          goto LABEL_30;
        case JobObjectThreadImpersonationInformation:
          v137 = v9->m128i_i8[0];
          if ( v137 != 1 )
            goto LABEL_438;
          if ( SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode) )
          {
            if ( (*((_DWORD *)v13 + 326) & 0x40000000) != 0 )
            {
              v14 = (unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(v13, 2LL) == 0 ? 0xC0000022 : 0;
              goto LABEL_30;
            }
            goto LABEL_438;
          }
LABEL_436:
          v14 = -1073741727;
          goto LABEL_30;
        default:
          goto LABEL_472;
      }
      v83 = v115;
      goto LABEL_299;
    }
    switch ( JobInformationClass )
    {
      case JobObjectServerSiloInitialize:
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode) )
          goto LABEL_436;
        if ( (*((_DWORD *)v13 + 326) & 0x40000000) == 0 )
          goto LABEL_437;
        if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(v13, 4LL) )
          goto LABEL_438;
        v174 = v9->m128i_i64[0];
        LOBYTE(v110) = AccessMode;
        Silo = PspConvertSiloToServerSilo(v13, v110);
        break;
      case JobObjectClearEvent:
        ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
        KeResetEvent((PRKEVENT)v13);
        ExReleaseResourceLite((PERESOURCE)(v13 + 56));
LABEL_206:
        v14 = 0;
        goto LABEL_30;
      case JobObjectClearPeakJobMemoryUsed:
        if ( v13 )
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v13 + 1032), 0LL);
        *((_QWORD *)v13 + 76) = 0LL;
        *((_QWORD *)v13 + 75) = 0LL;
        PspUnlockJobMemoryLimitsExclusive(v13, 0LL, 0LL);
        goto LABEL_206;
      case JobObjectIoRateControlInformation:
        v73 = 0LL;
        v166 = 0LL;
        memset(v183, 0, sizeof(v183));
        memmove(v183, v9, Size);
        if ( v183[3] )
        {
          v74 = v183[5];
          v75 = PagedPool;
          if ( !LOWORD(v183[5]) )
            goto LABEL_251;
          if ( (v183[3] & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v76 = v183[3] + LOWORD(v183[5]);
          if ( v76 > 0x7FFFFFFF0000LL || v76 < v183[3] )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
            v74 = v183[5];
          }
          if ( !v74 || (v74 & 1) != 0 )
          {
LABEL_251:
            v14 = -1073741811;
            v124 = -1073741811;
            goto LABEL_257;
          }
          v152 = 1;
          if ( AccessMode == 1 )
            v75 = 9;
          v152 = v75;
          PoolWithQuotaTag = (wchar_t *)ExAllocatePoolWithQuotaTag(v75, v74 + 2LL, 0x624A7350u);
          v73 = PoolWithQuotaTag;
          v166 = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
          {
            v14 = -1073741801;
            v124 = -1073741801;
LABEL_257:
            if ( !v73 )
              goto LABEL_30;
            v109 = 0;
LABEL_459:
            ExFreePoolWithTag(v73, v109);
            goto LABEL_30;
          }
          memmove(PoolWithQuotaTag, (const void *)v183[3], LOWORD(v183[5]));
          v73[(unsigned __int64)LOWORD(v183[5]) >> 1] = 0;
          v183[3] = v73;
        }
        if ( (v183[4] & 0xFFFFFFFC00000000uLL) != 0 )
        {
          v14 = -1073741811;
        }
        else if ( (v183[10] || v183[7] || v183[2]) && !PspIsContextAdmin() )
        {
          v14 = -1073741790;
        }
        else
        {
          v14 = PspSetJobIoRateControl((volatile signed __int64 *)v13, (__int64)v183);
        }
        goto LABEL_257;
      case JobObjectNetRateControlInformation:
        Silo = PspSetNetRateControl(v9, Size, v13);
        break;
      case JobObjectNotificationLimitInformation2:
        goto LABEL_34;
      case JobObjectCreateSilo:
        Silo = PspCreateSilo(v13, 16LL);
        break;
      case JobObjectSiloRootDirectory:
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode) )
          goto LABEL_436;
        if ( (*((_DWORD *)v13 + 326) & 0x40000000) == 0 )
          goto LABEL_437;
        if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(v13, 4LL) )
          goto LABEL_438;
        v151 = v9->m128i_i32[0];
        v13 = (char *)Object;
        v107 = PsAssignProcessToJobObject(Object, 0LL, KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[16]);
        v14 = v107;
        if ( v107 < 0 )
        {
          if ( v107 == -1073741790 )
            v14 = -1073740536;
          goto LABEL_30;
        }
        Silo = ObCreateSiloRootDirectory(v13, v151);
        break;
      default:
        goto LABEL_472;
    }
    v14 = Silo;
    goto LABEL_30;
  }
  v11 = 2;
  if ( JobInformationClass == JobObjectSecurityLimitInformation )
    v11 = 16;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)JobHandle,
             v11,
             (__int64)PsJobType,
             PreviousMode,
             2035381072,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v13 = (char *)Object;
    goto LABEL_20;
  }
  return result;
}
