/*
 * XREFs of NtQueryInformationJobObject @ 0x14050E9DC
 * Callers:
 *     <none>
 * Callees:
 *     PsGetHostSilo @ 0x140004290 (PsGetHostSilo.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PsIsHostSilo @ 0x1400859F0 (PsIsHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     KeIsSingleGroupAffinityEx @ 0x1400D4AD0 (KeIsSingleGroupAffinityEx.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400DF800 (PsGetServerSiloServiceSessionId.c)
 *     PspGetJobSilo @ 0x14012CFAC (PspGetJobSilo.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspIsSiloInServerSilo @ 0x14024DAFC (PspIsSiloInServerSilo.c)
 *     PsGetJobServerSilo @ 0x14024E400 (PsGetJobServerSilo.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PspQueryJobIoAttribution @ 0x14044573C (PspQueryJobIoAttribution.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x14050DAFC (PspQueryJobHierarchyProcessIdList.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14050E064 (PspAllocateAndQueryNotificationChannel.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x14050E678 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspLockJobShared @ 0x14050FED0 (PspLockJobShared.c)
 *     PspUnlockJob @ 0x1405102A0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405102E0 (PspLockJobExclusive.c)
 *     PspQueryRateControlHistory @ 0x14051041C (PspQueryRateControlHistory.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140510788 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x140510834 (PspLockJobMemoryLimitsShared.c)
 *     PspRateControlLimitFlag @ 0x140510974 (PspRateControlLimitFlag.c)
 *     PspLimitViolationRateControlToleranceLimitField @ 0x140510BF0 (PspLimitViolationRateControlToleranceLimitField.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x1405124A0 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x1405124C8 (PspNotificationLimitRateControlToleranceField.c)
 *     PsGetParentSilo @ 0x1407146F0 (PsGetParentSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140717ADC (PspQueryJobHierarchyInterferenceCount.c)
 *     PspUnlockJobListShared @ 0x140718678 (PspUnlockJobListShared.c)
 *     EtwTraceJobSetQuery @ 0x140745C30 (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 *     ObGetSiloRootDirectoryPath @ 0x14078A24C (ObGetSiloRootDirectoryPath.c)
 */

NTSTATUS __stdcall NtQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // r12
  _DWORD *v6; // r10
  PULONG v9; // r8
  unsigned __int32 v10; // edx
  unsigned int v11; // r14d
  bool v12; // zf
  struct _KTHREAD *CurrentThread; // r9
  char PreviousMode; // r11
  __int64 v15; // rcx
  NTSTATUS result; // eax
  char *v17; // rdi
  __int64 *v18; // r15
  NTSTATUS NotificationChannel; // r14d
  PULONG v20; // r13
  unsigned int v21; // ebx
  int v22; // eax
  _DWORD *v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // edx
  _DWORD *v32; // rcx
  int *v33; // r8
  _BYTE *v34; // r9
  int v35; // eax
  _BYTE *v36; // r9
  int v37; // r15d
  __int16 *v38; // r14
  __int64 v39; // r8
  __int64 v40; // rdx
  int v41; // eax
  _DWORD *v42; // rdx
  int v43; // edx
  char *v44; // rcx
  __int64 v45; // rax
  struct _KTHREAD *v46; // r14
  struct _KTHREAD *v47; // r14
  __int64 v48; // rcx
  __int64 v49; // rdx
  _DWORD *v50; // r8
  _DWORD *v51; // rax
  __int64 v52; // r8
  _DWORD *v53; // rax
  _DWORD *v54; // r8
  int v55; // edx
  __int64 v56; // rax
  char *v57; // rcx
  __int32 v58; // ebx
  __int32 v59; // ebx
  __int32 v60; // ebx
  int v61; // ebx
  int v62; // r8d
  __int64 v63; // rdx
  int v64; // edx
  unsigned int v65; // edx
  int v66; // ecx
  int v67; // eax
  _OWORD *v68; // rax
  int v69; // ebx
  unsigned __int16 v70; // cx
  unsigned __int16 v71; // r8
  _QWORD *v72; // rdx
  int v73; // ecx
  int *v74; // rax
  unsigned __int16 v75; // bx
  unsigned __int16 v76; // dx
  _BYTE *v77; // rcx
  _QWORD *v78; // r8
  __int64 v79; // rdx
  int v80; // ecx
  int v81; // r8d
  __int64 ParentSilo; // rbx
  int v83; // ebx
  int v84; // ebx
  int v85; // ebx
  __int64 HostSilo; // rax
  const void **ServerSiloGlobals; // rax
  __int64 v88; // rbx
  __int64 v89; // rdx
  __int64 JobSilo; // rax
  unsigned __int16 v91; // ax
  ULONG v92; // ebx
  _WORD *v93; // r13
  char *v94; // rcx
  ULONG Size; // [rsp+40h] [rbp-898h]
  unsigned int Size_4; // [rsp+44h] [rbp-894h]
  char v97; // [rsp+48h] [rbp-890h]
  unsigned int v98; // [rsp+5Ch] [rbp-87Ch] BYREF
  struct _KTHREAD *v99; // [rsp+60h] [rbp-878h]
  bool v100; // [rsp+68h] [rbp-870h] BYREF
  bool v101; // [rsp+69h] [rbp-86Fh] BYREF
  bool v102; // [rsp+6Ah] [rbp-86Eh] BYREF
  void *v103; // [rsp+70h] [rbp-868h]
  PVOID Object; // [rsp+78h] [rbp-860h] BYREF
  __int16 v105; // [rsp+80h] [rbp-858h] BYREF
  char v106; // [rsp+82h] [rbp-856h]
  unsigned __int16 v107; // [rsp+84h] [rbp-854h] BYREF
  __int64 v108; // [rsp+88h] [rbp-850h] BYREF
  int v109; // [rsp+90h] [rbp-848h] BYREF
  PVOID v110; // [rsp+A0h] [rbp-838h]
  PULONG v111; // [rsp+A8h] [rbp-830h]
  __int64 v112; // [rsp+B0h] [rbp-828h] BYREF
  int v113; // [rsp+B8h] [rbp-820h] BYREF
  int v114; // [rsp+BCh] [rbp-81Ch] BYREF
  int v115; // [rsp+C0h] [rbp-818h] BYREF
  int v116; // [rsp+C4h] [rbp-814h] BYREF
  int v117; // [rsp+C8h] [rbp-810h] BYREF
  unsigned __int16 v118; // [rsp+D0h] [rbp-808h] BYREF
  PVOID P; // [rsp+D8h] [rbp-800h]
  __int64 v120; // [rsp+E0h] [rbp-7F8h] BYREF
  __int64 v121; // [rsp+E8h] [rbp-7F0h] BYREF
  _QWORD v122[6]; // [rsp+F0h] [rbp-7E8h] BYREF
  __int64 v123; // [rsp+120h] [rbp-7B8h] BYREF
  __int64 v124; // [rsp+128h] [rbp-7B0h]
  __int64 v125; // [rsp+130h] [rbp-7A8h] BYREF
  __int64 v126; // [rsp+138h] [rbp-7A0h]
  __int64 v127; // [rsp+140h] [rbp-798h]
  __int64 v128; // [rsp+148h] [rbp-790h]
  __int64 v129; // [rsp+150h] [rbp-788h]
  __int64 v130; // [rsp+158h] [rbp-780h]
  __int64 v131; // [rsp+160h] [rbp-778h]
  __int64 v132; // [rsp+168h] [rbp-770h]
  __int64 v133; // [rsp+170h] [rbp-768h]
  int v134; // [rsp+178h] [rbp-760h] BYREF
  int v135; // [rsp+17Ch] [rbp-75Ch]
  __int64 v136; // [rsp+180h] [rbp-758h]
  char v137; // [rsp+188h] [rbp-750h] BYREF
  char v138; // [rsp+190h] [rbp-748h] BYREF
  int v139; // [rsp+1A0h] [rbp-738h] BYREF
  bool v140; // [rsp+1A4h] [rbp-734h]
  bool v141; // [rsp+1A5h] [rbp-733h]
  __int16 v142; // [rsp+1A6h] [rbp-732h]
  __int64 v143; // [rsp+1A8h] [rbp-730h]
  int v144; // [rsp+1B0h] [rbp-728h] BYREF
  int v145; // [rsp+1B4h] [rbp-724h]
  int v146; // [rsp+1B8h] [rbp-720h]
  bool IsSiloInServerSilo; // [rsp+1BCh] [rbp-71Ch]
  _QWORD v148[10]; // [rsp+1C0h] [rbp-718h] BYREF
  _DWORD v149[4]; // [rsp+210h] [rbp-6C8h] BYREF
  _QWORD v150[6]; // [rsp+220h] [rbp-6B8h] BYREF
  _QWORD v151[8]; // [rsp+250h] [rbp-688h] BYREF
  _QWORD v152[9]; // [rsp+290h] [rbp-648h] BYREF
  int v153; // [rsp+2D8h] [rbp-600h]
  int v154; // [rsp+2DCh] [rbp-5FCh]
  _QWORD v155[10]; // [rsp+2E0h] [rbp-5F8h] BYREF
  int v156; // [rsp+330h] [rbp-5A8h]
  int v157; // [rsp+334h] [rbp-5A4h]
  __int128 v158; // [rsp+340h] [rbp-598h] BYREF
  _QWORD v159[5]; // [rsp+350h] [rbp-588h] BYREF
  _OWORD v160[2]; // [rsp+378h] [rbp-560h] BYREF
  int v161; // [rsp+398h] [rbp-540h]
  _QWORD v162[20]; // [rsp+3A0h] [rbp-538h] BYREF
  _BYTE v163[80]; // [rsp+440h] [rbp-498h] BYREF
  _OWORD v164[4]; // [rsp+490h] [rbp-448h] BYREF
  _OWORD v165[10]; // [rsp+4D0h] [rbp-408h] BYREF
  __int64 v166; // [rsp+570h] [rbp-368h]
  _QWORD Src[54]; // [rsp+580h] [rbp-358h] BYREF
  _BYTE v168[320]; // [rsp+730h] [rbp-1A8h] BYREF
  _WORD v169[20]; // [rsp+870h] [rbp-68h] BYREF

  v5 = JobInformationLength;
  v6 = JobInformation;
  v103 = JobInformation;
  v110 = JobInformation;
  v9 = ReturnLength;
  v111 = ReturnLength;
  v10 = JobInformationClass - 1;
  if ( v10 > 0x2E )
    return -1073741821;
  switch ( JobInformationClass )
  {
    case JobObjectExtendedLimitInformation:
      if ( JobInformationLength == 144 )
        goto LABEL_14;
      v12 = JobInformationLength == 152;
LABEL_13:
      if ( v12 )
        goto LABEL_14;
      return -1073741820;
    case JobObjectNotificationLimitInformation:
      if ( JobInformationLength == 48 )
        goto LABEL_14;
      v12 = JobInformationLength == 56;
      goto LABEL_13;
    case JobObjectLimitViolationInformation:
      if ( JobInformationLength == 80 )
        goto LABEL_14;
      v12 = JobInformationLength == 88;
      goto LABEL_13;
    case JobObjectWakeInformation:
      if ( JobInformationLength == 40 )
        goto LABEL_14;
      v12 = JobInformationLength == 64;
      goto LABEL_13;
    case JobObjectMemoryUsageInformation:
      if ( JobInformationLength == 16 )
        goto LABEL_14;
      v12 = JobInformationLength == 40;
      goto LABEL_13;
    case JobObjectContainerId:
      if ( JobInformationLength == 16 )
        goto LABEL_14;
      v12 = JobInformationLength == 36;
      goto LABEL_13;
    case JobObjectMemoryPartitionInformation:
      if ( JobInformationLength == 1 )
      {
        v11 = 1;
        Size = 1;
        goto LABEL_15;
      }
      return -1073741820;
  }
  v11 = PspJobInfoLengths[v10];
  Size = v11;
  if ( JobInformationLength != v11 )
  {
    if ( JobInformationClass != JobObjectBasicProcessIdList
      && JobInformationClass != JobObjectSecurityLimitInformation
      && JobInformationClass != JobObjectGroupInformation
      && JobInformationClass != JobObjectGroupInformationEx
      && JobInformationClass != JobObjectIoRateControlInformation
      && JobInformationClass != JobObjectSiloRootDirectory
      || JobInformationLength < v11 )
    {
      return -1073741820;
    }
LABEL_14:
    v11 = JobInformationLength;
    Size = JobInformationLength;
  }
LABEL_15:
  CurrentThread = KeGetCurrentThread();
  v99 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( (_DWORD)v5 )
    {
      if ( ((PspJobInfoAlign[v10] - 1) & (unsigned int)v6) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)v6 + v5 > 0x7FFFFFFF0000LL || (_DWORD *)((char *)v6 + v5) < v6 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( ReturnLength )
    {
      v15 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
  }
  if ( JobHandle )
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)JobHandle,
               4,
               (__int64)PsJobType,
               PreviousMode,
               2035381072,
               &Object,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v17 = (char *)Object;
    goto LABEL_30;
  }
  v57 = (char *)CurrentThread->ApcState.Process[1].Affinity.Bitmap[16];
  Object = v57;
  v17 = v57;
  if ( v57 )
  {
    ObfReferenceObjectWithTag(v57, 0x79517350u);
LABEL_30:
    CurrentThread = v99;
    v6 = v103;
    v9 = ReturnLength;
    goto LABEL_31;
  }
  if ( ((JobInformationClass - 31) & 0xFFFFFFF7) != 0 )
    return -1073741790;
LABEL_31:
  Size_4 = v11;
  v98 = v11;
  v97 = 0;
  v18 = 0LL;
  NotificationChannel = 0;
  if ( JobInformationClass == JobObjectWakeInformation )
  {
    NotificationChannel = PspAllocateAndQueryNotificationChannel((__int64)CurrentThread, (__int64)v17, v164);
    LODWORD(v5) = Size;
    v21 = Size_4;
    v20 = ReturnLength;
    if ( NotificationChannel >= 0 )
    {
      v18 = (__int64 *)v164;
      NotificationChannel = 0;
    }
    goto LABEL_45;
  }
  if ( JobInformationClass > JobObjectWakeInformation )
  {
    if ( JobInformationClass > JobObjectSiloBasicInformation )
    {
      v58 = JobInformationClass - 37;
      if ( v58 )
      {
        v59 = v58 - 1;
        if ( v59 )
        {
          v60 = v59 - 1;
          if ( !v60 )
          {
            if ( v17 )
            {
              PsGetJobServerSilo((__int64)v17, &v108);
              HostSilo = v108;
            }
            else
            {
              HostSilo = PsGetHostSilo();
            }
            LODWORD(v5) = Size;
            ServerSiloGlobals = (const void **)PsGetServerSiloGlobals(HostSilo);
            memmove(v103, ServerSiloGlobals[138], Size);
            v97 = 1;
            v21 = Size_4;
            v20 = ReturnLength;
            goto LABEL_45;
          }
          v61 = v60 - 3;
          if ( !v61 )
          {
            memset(v163, 0, 0x48uLL);
            PspLockJobShared(v17, v99);
            NotificationChannel = PspQueryJobIoAttribution((__int64)v17, (__int64)v163);
            PspUnlockJob(v17, v99);
            v18 = (__int64 *)v163;
            goto LABEL_43;
          }
          v83 = v61 - 1;
          if ( !v83 )
          {
            NotificationChannel = 0;
            v102 = (unsigned __int64)(*((_QWORD *)v17 + 193) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL;
            v18 = (__int64 *)&v102;
            goto LABEL_43;
          }
          v84 = v83 - 1;
          if ( !v84 )
          {
            v158 = *(_OWORD *)(v17 + 1240);
            v18 = (__int64 *)&v158;
            goto LABEL_42;
          }
          v85 = v84 - 2;
          if ( !v85 )
          {
            PspLockJobShared(v17, CurrentThread);
            v121 = *((_QWORD *)v17 + 195);
            PspUnlockJob(v17, v99);
            v18 = &v121;
            goto LABEL_42;
          }
          if ( v85 == 1 )
          {
            v101 = (v17[1308] & 2) != 0;
            v18 = (__int64 *)&v101;
            goto LABEL_42;
          }
          goto LABEL_240;
        }
        PsGetJobServerSilo((__int64)v17, &v108);
        v88 = v108;
        if ( !PsIsHostSilo(v108) )
        {
          v89 = *(_QWORD *)(v88 + 1256);
          v149[1] = *(_DWORD *)(v89 + 1088);
          v149[2] = *(_DWORD *)(v89 + 1092);
          v149[0] = PsGetServerSiloServiceSessionId(v88);
          NotificationChannel = 0;
          v18 = (__int64 *)v149;
          goto LABEL_43;
        }
      }
      else
      {
        JobSilo = PspGetJobSilo((__int64)v17);
        if ( JobSilo )
        {
          P = 0LL;
          NotificationChannel = ObGetSiloRootDirectoryPath(JobSilo, &v118);
          if ( NotificationChannel >= 0 )
          {
            v97 = 1;
            v91 = v118;
            v92 = v118 + 16;
            if ( v92 > (unsigned int)v5 )
            {
              NotificationChannel = -1073741789;
              LODWORD(v5) = v118 + 16;
              v20 = ReturnLength;
            }
            else
            {
              v93 = v103;
              v94 = (char *)v103 + 16;
              *((_QWORD *)v103 + 1) = (char *)v103 + 16;
              *v93 = v91;
              v93[1] = v91;
              memmove(v94, P, v91);
              v20 = ReturnLength;
              if ( ReturnLength )
                *ReturnLength = v92;
              LODWORD(v5) = v92;
            }
            ExFreePoolWithTag(P, 0);
            goto LABEL_44;
          }
          goto LABEL_43;
        }
      }
    }
    else
    {
      if ( JobInformationClass != JobObjectSiloBasicInformation )
      {
        switch ( JobInformationClass )
        {
          case JobObjectBackgroundInformation:
            v100 = (*((_DWORD *)v17 + 326) & 0x400) != 0;
            v18 = (__int64 *)&v100;
            goto LABEL_42;
          case JobObjectInterferenceInformation:
            NotificationChannel = PspQueryJobHierarchyInterferenceCount(v17);
            LODWORD(v5) = Size;
            if ( NotificationChannel < 0 )
            {
              v21 = 0;
            }
            else
            {
              v97 = 1;
              v21 = 8;
            }
            goto LABEL_63;
          case JobObjectMemoryUsageInformation:
            memset(v159, 0, sizeof(v159));
            PspLockJobMemoryLimitsShared(v17, v99);
            v159[1] = *((_QWORD *)v17 + 76) << 12;
            v159[0] = *((_QWORD *)v17 + 122) << 12;
            v159[2] = *((_QWORD *)v17 + 165) << 12;
            v17 = (char *)Object;
            PspUnlockJobMemoryLimitsShared(Object, v99);
            v18 = v159;
            NotificationChannel = 0;
            break;
          case JobObjectSharedCommit:
            v120 = *((_QWORD *)v17 + 165);
            v18 = &v120;
            NotificationChannel = 0;
            v17 = (char *)Object;
            break;
          case JobObjectContainerId:
            v160[0] = *(_OWORD *)(v17 + 1224);
            if ( (_DWORD)v5 == 36 )
            {
              v160[1] = *(_OWORD *)(v17 + 1240);
              v161 = *((_DWORD *)v17 + 305);
            }
            v18 = (__int64 *)v160;
            goto LABEL_42;
          case JobObjectIoRateControlInformation:
            NotificationChannel = -1073741822;
            goto LABEL_43;
          case JobObjectNetRateControlInformation:
            PspLockJobShared(v17, CurrentThread);
            v123 = 0LL;
            v124 = 0LL;
            v79 = *((_QWORD *)v17 + 162);
            if ( v79 )
            {
              v80 = 1;
              LODWORD(v124) = 1;
              v81 = *(_DWORD *)(v79 + 48);
              if ( (v81 & 1) != 0 )
              {
                v80 = 3;
                LODWORD(v124) = 3;
                v123 = *(_QWORD *)(v79 + 40);
              }
              if ( (v81 & 2) != 0 )
              {
                LODWORD(v124) = v80 | 4;
                BYTE4(v124) = *(_BYTE *)(v79 + 64);
              }
            }
            PspUnlockJob(v17, v99);
            v18 = &v123;
            goto LABEL_42;
          case JobObjectNotificationLimitInformation2:
            goto LABEL_113;
          case JobObjectLimitViolationInformation2:
LABEL_82:
            v105 = 0;
            v106 = 0;
            PspQueryJobHierarchyAccountingInformation(v17, (__int64)Src);
            v126 = Src[9];
            v128 = Src[10];
            v130 = Src[0];
            PspLockJobExclusive(v17, v99);
            v22 = *((_DWORD *)v17 + 326);
            if ( (v22 & 8) == 0 || (v22 & 0x4000) == 0 )
            {
              _InterlockedAnd((volatile signed __int32 *)v17 + 326, 0xFFFFFFFB);
              v17 = (char *)Object;
              Size_4 = v98;
            }
            ExAcquirePushLockSharedEx((ULONG_PTR)(v17 + 1032), 0LL);
            v132 = *((_QWORD *)v17 + 122) << 12;
            PspUnlockJobMemoryLimitsShared(v17, 0LL);
            v23 = (_DWORD *)*((_QWORD *)v17 + 123);
            if ( v23 )
            {
              LODWORD(v125) = *v23;
              HIDWORD(v125) = *(_DWORD *)(*((_QWORD *)v17 + 123) + 4LL);
              v24 = (_QWORD *)*((_QWORD *)v17 + 123);
              v25 = v24[9];
              if ( !v25 )
                v25 = v24[1];
              v127 = v25;
              v26 = v24[10];
              if ( !v26 )
                v26 = v24[2];
              v129 = v26;
              v27 = v24[11];
              if ( !v27 )
                v27 = v24[3];
              v131 = v27;
              v28 = v24[12];
              if ( !v28 )
                v28 = v24[4];
              v136 = v28 << 12;
              v29 = v24[13];
              if ( !v29 )
                v29 = v24[5];
              v133 = v29 << 12;
              v30 = 0LL;
              do
              {
                v32 = (_DWORD *)PspLimitViolationRateControlToleranceLimitField(&v125, v30);
                v35 = v33[16];
                if ( v35 )
                  *v34 = 1;
                else
                  v35 = *v33;
                *v32 = v35;
                v30 = (unsigned int)(v31 + 1);
                v36 = v34 + 1;
              }
              while ( (int)v30 < 3 );
            }
            else
            {
              v125 = 0LL;
              v127 = 0LL;
              v129 = 0LL;
              v131 = 0LL;
              v136 = 0LL;
              v133 = 0LL;
              v63 = 0LL;
              do
              {
                *(_DWORD *)PspLimitViolationRateControlToleranceLimitField(&v125, v63) = 0;
                v63 = (unsigned int)(v64 + 1);
              }
              while ( (int)v63 < 3 );
            }
            v37 = 0;
            v38 = &v105;
            v39 = 60LL;
            v108 = 60LL;
            do
            {
              v40 = *((_QWORD *)v17 + 123);
              if ( v40 && (v41 = PspRateControlLimitFlag((unsigned int)v37, v40, v39, v36), (v41 & *v42) != 0) )
                v43 = *(_DWORD *)((char *)v42 + v39);
              else
                v43 = 1;
              v109 = v43;
              LOBYTE(v39) = *(_BYTE *)v38;
              PspQueryRateControlHistory((_DWORD)v17, v43, v39, (unsigned int)&v117, v37);
              if ( v37 )
              {
                if ( v37 == 1 )
                  v44 = &v137;
                else
                  v44 = (char *)&v134;
              }
              else
              {
                v44 = &v138;
              }
              *(_DWORD *)v44 = v117;
              ++v37;
              v39 = v108 + 4;
              v108 += 4LL;
              v38 = (__int16 *)((char *)v38 + 1);
            }
            while ( v37 < 3 );
            v45 = *((_QWORD *)v17 + 123);
            v46 = v99;
            if ( v45 )
            {
              *(_DWORD *)(v45 + 4) = 0;
              memset((void *)(*((_QWORD *)v17 + 123) + 72LL), 0, 0x40uLL);
            }
            PspUnlockJob(v17, v46);
            if ( (_DWORD)v5 == 88 )
            {
              v155[1] = v126;
              v155[2] = v127;
              v155[3] = v128;
              v155[4] = v129;
              v155[5] = v130;
              v155[6] = v131;
              v155[7] = v132;
              v155[8] = v136;
              v155[9] = v133;
              v156 = v134;
              v157 = v135;
              v155[0] = v125 & 0x27820400278204LL;
              v18 = v155;
            }
            else if ( (_DWORD)v5 == 80 )
            {
              v152[1] = v126;
              v152[2] = v127;
              v152[3] = v128;
              v152[4] = v129;
              v152[5] = v130;
              v152[6] = v131;
              v152[7] = v132;
              v152[8] = v133;
              v153 = v134;
              v154 = v135;
              v152[0] = v125 & 0x7020400070204LL;
              v18 = v152;
            }
            else
            {
              v18 = &v125;
            }
            NotificationChannel = 0;
            if ( (PerfGlobalGroupMask & 0x80000) != 0 )
              EtwTraceJobSetQuery((_DWORD)v17, JobInformationClass, (unsigned int)&v125, (unsigned int)&v109, 0, 1830);
            goto LABEL_43;
          default:
            goto LABEL_240;
        }
LABEL_62:
        v21 = v98;
        LODWORD(v5) = Size;
LABEL_63:
        v20 = ReturnLength;
        goto LABEL_45;
      }
      if ( (*((_DWORD *)v17 + 326) & 0x40000000) != 0 )
      {
        v144 = *((_DWORD *)v17 + 305);
        ParentSilo = PsGetParentSilo(v17);
        if ( PsIsHostSilo(ParentSilo) )
          v145 = 0;
        else
          v145 = *(_DWORD *)(ParentSilo + 1220);
        v146 = *((_DWORD *)v17 + 302);
        IsSiloInServerSilo = PspIsSiloInServerSilo((__int64)v17);
        v18 = (__int64 *)&v144;
        goto LABEL_42;
      }
    }
    NotificationChannel = -1073740535;
    goto LABEL_43;
  }
  if ( JobInformationClass <= JobObjectGroupInformation )
  {
    switch ( JobInformationClass )
    {
      case JobObjectGroupInformation:
        if ( v9 && (v5 & 1) == 0 )
        {
          PspLockJobShared(v17, CurrentThread);
          v69 = 0;
          v70 = 0;
          v71 = *((_WORD *)v17 + 132);
          if ( v71 )
          {
            v72 = v17 + 272;
            do
            {
              if ( *v72 )
                v169[v69++] = v70;
              ++v70;
              ++v72;
            }
            while ( v70 < v71 );
          }
          PspUnlockJob(v17, v99);
          v21 = 2 * v69;
          v98 = v21;
          v97 = 1;
          if ( v21 > (unsigned int)v5 )
          {
            NotificationChannel = -1073741789;
            LODWORD(v5) = Size;
          }
          else
          {
            NotificationChannel = 0;
            LODWORD(v5) = v21;
          }
          memmove(v103, v169, (unsigned int)v5);
          v20 = ReturnLength;
          goto LABEL_45;
        }
LABEL_188:
        NotificationChannel = -1073741811;
        goto LABEL_43;
      case JobObjectBasicAccountingInformation:
        goto LABEL_41;
      case JobObjectBasicLimitInformation:
LABEL_73:
        memset(v162, 0, 0x98uLL);
        PspLockJobShared(v17, v99);
        LODWORD(v162[2]) = *((_DWORD *)v17 + 64);
        v162[3] = *((_QWORD *)v17 + 30);
        v162[4] = *((_QWORD *)v17 + 31);
        LODWORD(v162[5]) = *((_DWORD *)v17 + 65);
        LODWORD(v162[7]) = (unsigned __int8)v17[873];
        HIDWORD(v162[7]) = *((_DWORD *)v17 + 121);
        if ( KeIsSingleGroupAffinityEx((unsigned __int16 *)v17 + 132, &v107) )
          v162[6] = *(_QWORD *)&v17[8 * v107 + 272];
        else
          v162[6] = 0LL;
        v162[0] = *((_QWORD *)v17 + 28);
        v162[1] = *((_QWORD *)v17 + 29);
        if ( JobInformationClass == JobObjectExtendedLimitInformation )
        {
          ExAcquirePushLockSharedEx((ULONG_PTR)(v17 + 1032), 0LL);
          v162[14] = *((_QWORD *)v17 + 72) << 12;
          v162[15] = *((_QWORD *)v17 + 73) << 12;
          v162[17] = *((_QWORD *)v17 + 76) << 12;
          v162[18] = *((_QWORD *)v17 + 74) << 12;
          PspUnlockJobMemoryLimitsShared(v17, 0LL);
          PspUnlockJob(v17, v99);
          v162[16] = *((_QWORD *)v17 + 75) << 12;
        }
        else
        {
          PspUnlockJob(v17, v99);
        }
        NotificationChannel = 0;
        v18 = v162;
        goto LABEL_43;
    }
    if ( JobInformationClass != JobObjectBasicProcessIdList )
    {
      switch ( JobInformationClass )
      {
        case JobObjectBasicUIRestrictions:
          PspLockJobShared(v17, CurrentThread);
          v115 = *((_DWORD *)v17 + 112);
          PspUnlockJob(v17, v99);
          v18 = (__int64 *)&v115;
          goto LABEL_42;
        case JobObjectSecurityLimitInformation:
          memset(&v122[1], 0, 0x28uLL);
          v97 = 1;
          v68 = v103;
          *(_OWORD *)v103 = *(_OWORD *)&v122[1];
          v68[1] = *(_OWORD *)&v122[3];
          *((_QWORD *)v68 + 4) = v122[5];
          LODWORD(v5) = Size;
          v20 = ReturnLength;
          goto LABEL_44;
        case JobObjectEndOfJobTimeInformation:
          v114 = *((_DWORD *)v17 + 113);
          v18 = (__int64 *)&v114;
          goto LABEL_42;
        case JobObjectBasicAndIoAccountingInformation:
          goto LABEL_41;
        case JobObjectExtendedLimitInformation:
          goto LABEL_73;
        case JobObjectJobSetInformation:
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
          v113 = 0;
          PspUnlockJobListShared(v99);
          v18 = (__int64 *)&v113;
          goto LABEL_42;
      }
LABEL_240:
      NotificationChannel = -1073741821;
      goto LABEL_43;
    }
    v98 = 0;
    NotificationChannel = PspQueryJobHierarchyProcessIdList(v17, v6, v5, &v98);
    v97 = 1;
    goto LABEL_62;
  }
  switch ( JobInformationClass )
  {
    case JobObjectNotificationLimitInformation:
LABEL_113:
      memset(v148, 0, 0x48uLL);
      v47 = v99;
      PspLockJobShared(v17, v99);
      v48 = *((_QWORD *)v17 + 123);
      if ( v48 )
      {
        LODWORD(v148[5]) = *(_DWORD *)v48;
        v148[0] = *(_QWORD *)(v48 + 8);
        v148[1] = *(_QWORD *)(v48 + 16);
        v148[2] = *(_QWORD *)(v48 + 24);
        v148[6] = *(_QWORD *)(v48 + 32) << 12;
        v148[3] = *(_QWORD *)(v48 + 40) << 12;
        v49 = 0LL;
        v50 = (_DWORD *)(v48 + 60);
        do
        {
          v51 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v148, v49, v50);
          *v51 = *(_DWORD *)(v52 - 12);
          v53 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v148);
          *v53 = *v54;
          v49 = (unsigned int)(v55 + 1);
          v50 = v54 + 1;
        }
        while ( (int)v49 < 3 );
      }
      PspUnlockJob(v17, v47);
      if ( (_DWORD)v5 == 56 )
      {
        memset(v151, 0, 0x38uLL);
        v151[0] = v148[0];
        v151[1] = v148[1];
        v151[2] = v148[2];
        v151[3] = v148[6];
        v151[4] = v148[3];
        v151[5] = v148[4];
        LODWORD(v151[6]) = v148[5] & 0x278204;
        v18 = v151;
      }
      else if ( (_DWORD)v5 == 48 )
      {
        memset(v150, 0, sizeof(v150));
        v150[0] = v148[0];
        v150[1] = v148[1];
        v150[2] = v148[2];
        v150[3] = v148[3];
        v150[4] = v148[4];
        LODWORD(v150[5]) = v148[5] & 0x70204;
        v18 = v150;
      }
      else
      {
        v18 = v148;
      }
      goto LABEL_42;
    case JobObjectLimitViolationInformation:
      goto LABEL_82;
    case JobObjectGroupInformationEx:
      if ( v9 && (v5 & 0xF) == 0 )
      {
        PspLockJobShared(v17, CurrentThread);
        if ( (*((_DWORD *)v17 + 64) & 0x10) != 0 )
          v74 = (int *)(v17 + 264);
        else
          v74 = KeActiveProcessors;
        v165[0] = *(_OWORD *)v74;
        v165[1] = *((_OWORD *)v74 + 1);
        v165[2] = *((_OWORD *)v74 + 2);
        v165[3] = *((_OWORD *)v74 + 3);
        v165[4] = *((_OWORD *)v74 + 4);
        v165[5] = *((_OWORD *)v74 + 5);
        v165[6] = *((_OWORD *)v74 + 6);
        v165[7] = *((_OWORD *)v74 + 7);
        v165[8] = *((_OWORD *)v74 + 8);
        v165[9] = *((_OWORD *)v74 + 9);
        v166 = *((_QWORD *)v74 + 20);
        PspUnlockJob(v17, v99);
        v75 = v165[0];
        memset(v168, 0, 16LL * LOWORD(v165[0]));
        v76 = 0;
        if ( v75 )
        {
          v77 = v168;
          v78 = (_QWORD *)v165 + 1;
          do
          {
            *((_WORD *)v77 + 4) = v76;
            *(_QWORD *)v77 = *v78;
            ++v76;
            ++v78;
            v77 += 16;
          }
          while ( v76 < v75 );
        }
        v21 = 16 * v75;
        v98 = v21;
        if ( (unsigned int)v5 >= v21 )
        {
          NotificationChannel = 0;
          LODWORD(v5) = v21;
        }
        else
        {
          NotificationChannel = -1073741789;
        }
        v97 = 1;
        memmove(v103, v168, (unsigned int)v5);
        v20 = ReturnLength;
        goto LABEL_45;
      }
      goto LABEL_188;
    case JobObjectCpuRateControlInformation:
      PspLockJobShared(v17, CurrentThread);
      v56 = *((_QWORD *)v17 + 126);
      if ( !v56 || (v62 = *(_DWORD *)(v56 + 40), (v62 & 0x40) != 0) )
      {
        v112 = 0LL;
      }
      else
      {
        HIDWORD(v112) = *(_DWORD *)(v56 + 44);
        v65 = ((v62 & 4 | 2u) >> 1) | 4;
        if ( (v62 & 1) == 0 )
          v65 = (v62 & 4 | 2u) >> 1;
        v66 = v65 | 8;
        if ( (v62 & 2) == 0 )
          v66 = v65;
        v67 = v66 | 0x10;
        if ( (v62 & 0x20) == 0 )
          v67 = v66;
        LODWORD(v112) = v67;
      }
      PspUnlockJob(v17, v99);
      v18 = &v112;
      goto LABEL_42;
    case JobObjectCompletionFilter:
      v116 = *((_DWORD *)v17 + 219);
      v18 = (__int64 *)&v116;
      goto LABEL_42;
    case JobObjectCompletionCounter:
      v122[0] = *((_QWORD *)v17 + 59);
      v18 = v122;
      goto LABEL_42;
    case JobObjectFreezeInformation:
      v139 = 7;
      v142 = 0;
      PspLockJobShared(v17, CurrentThread);
      v73 = *((_DWORD *)v17 + 326);
      v140 = (v73 & 0x200) != 0;
      v141 = (v73 & 0x80000) != 0;
      v143 = *((_QWORD *)v17 + 119);
      PspUnlockJob(v17, v99);
      v18 = (__int64 *)&v139;
      goto LABEL_42;
  }
LABEL_41:
  PspQueryJobHierarchyAccountingInformation(v17, (__int64)Src);
  v18 = Src;
LABEL_42:
  NotificationChannel = 0;
LABEL_43:
  v20 = ReturnLength;
  LODWORD(v5) = Size;
LABEL_44:
  v21 = Size_4;
LABEL_45:
  if ( v17 )
    ObfDereferenceObjectWithTag(v17, 0x79517350u);
  if ( NotificationChannel >= 0 && !v97 )
    memmove(v103, v18, (unsigned int)v5);
  if ( v20 )
    *v20 = v21;
  return NotificationChannel;
}
