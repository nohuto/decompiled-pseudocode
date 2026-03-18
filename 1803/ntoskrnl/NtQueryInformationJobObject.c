/*
 * XREFs of NtQueryInformationJobObject @ 0x140535514
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x14006D170 (PsGetServerSiloServiceSessionId.c)
 *     KeIsSingleGroupAffinityEx @ 0x14008AFB0 (KeIsSingleGroupAffinityEx.c)
 *     PspGetJobSilo @ 0x1400CF63C (PspGetJobSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PsIsHostSilo @ 0x140108640 (PsIsHostSilo.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspIsSiloInServerSilo @ 0x140283EDC (PspIsSiloInServerSilo.c)
 *     PsGetJobServerSilo @ 0x140284790 (PsGetJobServerSilo.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140532EEC (PspQueryJobHierarchyProcessIdList.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x14053485C (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x140534884 (PspNotificationLimitRateControlToleranceField.c)
 *     PspLimitViolationRateControlToleranceLimitField @ 0x140534940 (PspLimitViolationRateControlToleranceLimitField.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405349D0 (PspAllocateAndQueryNotificationChannel.c)
 *     PspUnlockJobListShared @ 0x14053535C (PspUnlockJobListShared.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405361A8 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspUnlockJob @ 0x140536FD0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140537010 (PspLockJobExclusive.c)
 *     PspLockJobShared @ 0x140537038 (PspLockJobShared.c)
 *     PspQueryRateControlHistory @ 0x14053716C (PspQueryRateControlHistory.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1405374FC (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x1405375A8 (PspLockJobMemoryLimitsShared.c)
 *     PspRateControlLimitFlag @ 0x1405376F4 (PspRateControlLimitFlag.c)
 *     PspQueryJobIoAttribution @ 0x140550414 (PspQueryJobIoAttribution.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     PsGetParentSilo @ 0x1407788F0 (PsGetParentSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x14077BAFC (PspQueryJobHierarchyInterferenceCount.c)
 *     EtwTraceJobSetQuery @ 0x1407A7B9C (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 *     ObGetSiloRootDirectoryPath @ 0x1407F6710 (ObGetSiloRootDirectoryPath.c)
 */

NTSTATUS __stdcall NtQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // r10
  __int64 v8; // rdx
  unsigned int v9; // r13d
  int v10; // r12d
  struct _KTHREAD *CurrentThread; // r9
  __int64 v12; // rcx
  NTSTATUS result; // eax
  __int64 v14; // rbx
  bool *v15; // r14
  NTSTATUS NotificationChannel; // esi
  PULONG v17; // r12
  PVOID v18; // r15
  bool v19; // zf
  int v20; // eax
  _DWORD *v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int i; // edx
  _DWORD *v29; // rax
  int v30; // edx
  int *v31; // r8
  _BYTE *v32; // r9
  int v33; // ecx
  int v34; // r14d
  __int16 *v35; // rsi
  __int64 v36; // r8
  int v37; // eax
  _DWORD *v38; // rdx
  int v39; // edx
  char *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  int k; // edx
  _DWORD *v44; // rax
  __int64 v45; // r8
  int v46; // edx
  _DWORD *v47; // rax
  _DWORD *v48; // r8
  int v49; // edx
  __int64 v50; // rax
  void *v51; // rcx
  __int32 v52; // r15d
  __int32 v53; // r15d
  __int32 v54; // r15d
  __int32 v55; // r15d
  int v56; // r8d
  int v57; // r13d
  unsigned __int16 v58; // cx
  unsigned __int16 v59; // r9
  _QWORD *v60; // r8
  unsigned __int16 m; // dx
  int v62; // ecx
  unsigned int v63; // edx
  int v64; // ecx
  int v65; // eax
  int *v66; // rax
  unsigned __int16 v67; // si
  unsigned __int16 v68; // dx
  _BYTE *v69; // rcx
  _QWORD *v70; // r8
  unsigned int v71; // eax
  int j; // edx
  int v73; // edx
  __int64 v74; // rcx
  int v75; // edx
  int v76; // eax
  __int64 ParentSilo; // rsi
  int v78; // r15d
  int v79; // r15d
  int v80; // r15d
  __int64 HostSilo; // rax
  const void **ServerSiloGlobals; // rax
  size_t v83; // r8
  __int64 v84; // rsi
  __int64 v85; // rdx
  __int64 JobSilo; // rax
  unsigned __int16 v87; // ax
  char v88; // [rsp+40h] [rbp-898h]
  __int64 v90; // [rsp+60h] [rbp-878h]
  bool v91; // [rsp+68h] [rbp-870h] BYREF
  bool v92; // [rsp+69h] [rbp-86Fh] BYREF
  bool v93; // [rsp+6Ah] [rbp-86Eh] BYREF
  ULONG Size; // [rsp+6Ch] [rbp-86Ch]
  ULONG Size_4; // [rsp+70h] [rbp-868h] BYREF
  _DWORD v96[3]; // [rsp+74h] [rbp-864h] BYREF
  __int16 v97; // [rsp+80h] [rbp-858h] BYREF
  char v98; // [rsp+82h] [rbp-856h]
  unsigned __int16 v99; // [rsp+84h] [rbp-854h] BYREF
  __int64 v100; // [rsp+88h] [rbp-850h] BYREF
  int v101; // [rsp+90h] [rbp-848h] BYREF
  PVOID v102; // [rsp+A0h] [rbp-838h]
  PULONG v103; // [rsp+A8h] [rbp-830h]
  __int64 v104; // [rsp+B0h] [rbp-828h] BYREF
  int v105; // [rsp+B8h] [rbp-820h] BYREF
  int v106; // [rsp+BCh] [rbp-81Ch] BYREF
  int v107; // [rsp+C0h] [rbp-818h] BYREF
  int v108; // [rsp+C4h] [rbp-814h] BYREF
  int v109; // [rsp+C8h] [rbp-810h] BYREF
  unsigned __int16 v110; // [rsp+D0h] [rbp-808h] BYREF
  PVOID P; // [rsp+D8h] [rbp-800h]
  __int64 v112; // [rsp+E0h] [rbp-7F8h] BYREF
  __int64 v113; // [rsp+E8h] [rbp-7F0h] BYREF
  _QWORD v114[6]; // [rsp+F0h] [rbp-7E8h] BYREF
  __int64 v115; // [rsp+120h] [rbp-7B8h] BYREF
  __int64 v116; // [rsp+128h] [rbp-7B0h]
  __int64 v117; // [rsp+130h] [rbp-7A8h]
  __int64 v118; // [rsp+138h] [rbp-7A0h]
  __int64 v119; // [rsp+140h] [rbp-798h]
  __int64 v120; // [rsp+148h] [rbp-790h]
  __int64 v121; // [rsp+150h] [rbp-788h]
  __int64 v122; // [rsp+158h] [rbp-780h]
  __int64 v123; // [rsp+160h] [rbp-778h]
  int v124; // [rsp+168h] [rbp-770h] BYREF
  int v125; // [rsp+16Ch] [rbp-76Ch]
  __int64 v126; // [rsp+170h] [rbp-768h]
  char v127; // [rsp+178h] [rbp-760h] BYREF
  char v128; // [rsp+180h] [rbp-758h] BYREF
  __int64 v129; // [rsp+190h] [rbp-748h] BYREF
  __int64 v130; // [rsp+198h] [rbp-740h]
  int v131; // [rsp+1A0h] [rbp-738h] BYREF
  bool v132; // [rsp+1A4h] [rbp-734h]
  bool v133; // [rsp+1A5h] [rbp-733h]
  __int16 v134; // [rsp+1A6h] [rbp-732h]
  __int64 v135; // [rsp+1A8h] [rbp-730h]
  int v136; // [rsp+1B0h] [rbp-728h] BYREF
  int v137; // [rsp+1B4h] [rbp-724h]
  int v138; // [rsp+1B8h] [rbp-720h]
  bool IsSiloInServerSilo; // [rsp+1BCh] [rbp-71Ch]
  _QWORD v140[10]; // [rsp+1C0h] [rbp-718h] BYREF
  _DWORD v141[4]; // [rsp+210h] [rbp-6C8h] BYREF
  _QWORD v142[6]; // [rsp+220h] [rbp-6B8h] BYREF
  _QWORD v143[8]; // [rsp+250h] [rbp-688h] BYREF
  _QWORD v144[9]; // [rsp+290h] [rbp-648h] BYREF
  int v145; // [rsp+2D8h] [rbp-600h]
  int v146; // [rsp+2DCh] [rbp-5FCh]
  _QWORD v147[10]; // [rsp+2E0h] [rbp-5F8h] BYREF
  int v148; // [rsp+330h] [rbp-5A8h]
  int v149; // [rsp+334h] [rbp-5A4h]
  __int128 v150; // [rsp+340h] [rbp-598h] BYREF
  _QWORD v151[5]; // [rsp+350h] [rbp-588h] BYREF
  _OWORD v152[2]; // [rsp+378h] [rbp-560h] BYREF
  int v153; // [rsp+398h] [rbp-540h]
  _QWORD v154[20]; // [rsp+3A0h] [rbp-538h] BYREF
  _BYTE v155[80]; // [rsp+440h] [rbp-498h] BYREF
  _OWORD v156[4]; // [rsp+490h] [rbp-448h] BYREF
  _OWORD v157[10]; // [rsp+4D0h] [rbp-408h] BYREF
  __int64 v158; // [rsp+570h] [rbp-368h]
  _QWORD Src[54]; // [rsp+580h] [rbp-358h] BYREF
  _BYTE v160[320]; // [rsp+730h] [rbp-1A8h] BYREF
  _WORD v161[20]; // [rsp+870h] [rbp-68h] BYREF

  v5 = JobInformationLength;
  Size = JobInformationLength;
  v102 = JobInformation;
  v103 = ReturnLength;
  v8 = (unsigned int)(JobInformationClass - 1);
  if ( (unsigned int)v8 > 0x2E )
    return -1073741821;
  switch ( JobInformationClass )
  {
    case JobObjectExtendedLimitInformation:
      if ( JobInformationLength == 144 )
        goto LABEL_59;
      v19 = JobInformationLength == 152;
      goto LABEL_58;
    case JobObjectNotificationLimitInformation:
      if ( JobInformationLength == 48 )
        goto LABEL_59;
      v19 = JobInformationLength == 56;
      goto LABEL_58;
    case JobObjectLimitViolationInformation:
      if ( JobInformationLength == 80 )
        goto LABEL_59;
      v19 = JobInformationLength == 88;
      goto LABEL_58;
    case JobObjectWakeInformation:
      if ( JobInformationLength == 40 )
        goto LABEL_59;
      v19 = JobInformationLength == 64;
      goto LABEL_58;
    case JobObjectMemoryUsageInformation:
      if ( JobInformationLength == 16 )
        goto LABEL_59;
      v19 = JobInformationLength == 40;
      goto LABEL_58;
    case JobObjectContainerId:
      if ( JobInformationLength == 16 )
        goto LABEL_59;
      v19 = JobInformationLength == 36;
LABEL_58:
      if ( !v19 )
        return -1073741820;
      goto LABEL_59;
  }
  if ( JobInformationClass != JobObjectMemoryPartitionInformation )
  {
    v9 = PspJobInfoLengths[(int)v8];
    if ( JobInformationLength == v9 )
    {
LABEL_10:
      v10 = 1;
      goto LABEL_11;
    }
    if ( JobInformationClass != JobObjectBasicProcessIdList
      && JobInformationClass != JobObjectSecurityLimitInformation
      && JobInformationClass != JobObjectGroupInformation
      && JobInformationClass != JobObjectGroupInformationEx
      && JobInformationClass != JobObjectIoRateControlInformation
      && JobInformationClass != JobObjectSiloRootDirectory
      || JobInformationLength < v9 )
    {
      return -1073741820;
    }
LABEL_59:
    v9 = JobInformationLength;
    goto LABEL_10;
  }
  if ( JobInformationLength != 1 )
    return -1073741820;
  v10 = 1;
  v9 = 1;
LABEL_11:
  v96[0] = v9;
  CurrentThread = KeGetCurrentThread();
  v90 = (__int64)CurrentThread;
  if ( CurrentThread->PreviousMode )
  {
    if ( (_DWORD)v5 )
    {
      if ( ((PspJobInfoAlign[(int)v8] - 1) & (unsigned int)JobInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)JobInformation + v5 > 0x7FFFFFFF0000LL || (char *)JobInformation + v5 < JobInformation )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v8 = 0x7FFFFFFF0000LL;
    }
    if ( ReturnLength )
    {
      v12 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  if ( JobHandle )
  {
    result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)JobHandle, 0x79517350u, (__int64)&v96[1], 0LL, 0LL);
    if ( result < 0 )
      return result;
    v14 = *(_QWORD *)&v96[1];
    goto LABEL_26;
  }
  v51 = (void *)CurrentThread->ApcState.Process[1].Affinity.Bitmap[16];
  *(_QWORD *)&v96[1] = v51;
  v14 = (__int64)v51;
  if ( v51 )
  {
    ObfReferenceObjectWithTag(v51, 0x79517350u);
LABEL_26:
    LODWORD(v5) = Size;
    CurrentThread = (struct _KTHREAD *)v90;
    goto LABEL_27;
  }
  if ( ((JobInformationClass - 31) & 0xFFFFFFF7) != 0 )
    return -1073741790;
LABEL_27:
  Size_4 = v9;
  v88 = 0;
  v15 = 0LL;
  NotificationChannel = 0;
  if ( JobInformationClass == JobObjectWakeInformation )
  {
    NotificationChannel = PspAllocateAndQueryNotificationChannel((__int64)CurrentThread, v14, v156);
    v18 = JobInformation;
    v17 = ReturnLength;
    if ( NotificationChannel >= 0 )
    {
      v15 = (bool *)v156;
      NotificationChannel = 0;
    }
    goto LABEL_41;
  }
  if ( JobInformationClass > JobObjectWakeInformation )
  {
    if ( JobInformationClass > JobObjectSiloBasicInformation )
    {
      v52 = JobInformationClass - 37;
      if ( v52 )
      {
        v53 = v52 - 1;
        if ( v53 )
        {
          v54 = v53 - 1;
          if ( !v54 )
          {
            if ( v14 )
            {
              PsGetJobServerSilo(v14, &v100);
              HostSilo = v100;
            }
            else
            {
              HostSilo = PsGetHostSilo();
            }
            ServerSiloGlobals = (const void **)PsGetServerSiloGlobals(HostSilo);
            v18 = JobInformation;
            memmove(JobInformation, ServerSiloGlobals[138], v83);
            v88 = 1;
            v17 = ReturnLength;
            goto LABEL_41;
          }
          v55 = v54 - 3;
          if ( !v55 )
          {
            memset(v155, 0, 0x48uLL);
            PspLockJobShared(v14, v90);
            NotificationChannel = PspQueryJobIoAttribution(v14, v155);
            PspUnlockJob(v14, v90);
            v15 = v155;
            goto LABEL_39;
          }
          v78 = v55 - 1;
          if ( !v78 )
          {
            NotificationChannel = 0;
            v93 = (unsigned __int64)(*(_QWORD *)(v14 + 1544) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL;
            v15 = &v93;
            goto LABEL_39;
          }
          v79 = v78 - 1;
          if ( !v79 )
          {
            v150 = *(_OWORD *)(v14 + 1240);
            v15 = (bool *)&v150;
            goto LABEL_38;
          }
          v80 = v79 - 2;
          if ( !v80 )
          {
            PspLockJobShared(v14, CurrentThread);
            v113 = *(_QWORD *)(v14 + 1560);
            PspUnlockJob(v14, v90);
            v15 = (bool *)&v113;
            goto LABEL_38;
          }
          if ( v80 == 1 )
          {
            v92 = (*(_DWORD *)(v14 + 1308) & 2) != 0;
            v15 = &v92;
            goto LABEL_38;
          }
          goto LABEL_203;
        }
        PsGetJobServerSilo(v14, &v100);
        v84 = v100;
        if ( !PsIsHostSilo(v100) )
        {
          v85 = *(_QWORD *)(v84 + 1256);
          v141[1] = *(_DWORD *)(v85 + 1088);
          v141[2] = *(_DWORD *)(v85 + 1092);
          v141[0] = PsGetServerSiloServiceSessionId(v84);
          NotificationChannel = 0;
          v15 = (bool *)v141;
          goto LABEL_39;
        }
      }
      else
      {
        JobSilo = PspGetJobSilo(v14);
        if ( JobSilo )
        {
          P = 0LL;
          NotificationChannel = ObGetSiloRootDirectoryPath(JobSilo, &v110);
          if ( NotificationChannel >= 0 )
          {
            v88 = 1;
            v87 = v110;
            v9 = v110 + 16;
            if ( v9 > Size )
            {
              NotificationChannel = -1073741789;
              v18 = JobInformation;
              v17 = ReturnLength;
            }
            else
            {
              v18 = JobInformation;
              *(_WORD *)JobInformation = v110;
              *((_WORD *)JobInformation + 1) = v87;
              *((_QWORD *)JobInformation + 1) = (char *)JobInformation + 16;
              memmove((char *)JobInformation + 16, P, v87);
              v17 = ReturnLength;
              if ( ReturnLength )
                *ReturnLength = v9;
            }
            ExFreePoolWithTag(P, 0);
            goto LABEL_41;
          }
          goto LABEL_39;
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
            v91 = (*(_DWORD *)(v14 + 1304) & 0x400) != 0;
            v15 = &v91;
            goto LABEL_38;
          case JobObjectInterferenceInformation:
            v18 = JobInformation;
            NotificationChannel = PspQueryJobHierarchyInterferenceCount((PVOID)v14);
            if ( NotificationChannel < 0 )
            {
              v76 = 0;
            }
            else
            {
              v88 = 1;
              v76 = 8;
            }
            Size_4 = v76;
            goto LABEL_55;
          case JobObjectMemoryUsageInformation:
            memset(v151, 0, sizeof(v151));
            PspLockJobMemoryLimitsShared(v14, v90);
            v151[1] = *(_QWORD *)(v14 + 608) << 12;
            v151[0] = *(_QWORD *)(v14 + 976) << 12;
            v151[2] = *(_QWORD *)(v14 + 1320) << 12;
            v14 = *(_QWORD *)&v96[1];
            PspUnlockJobMemoryLimitsShared(*(_QWORD *)&v96[1], v90);
            v15 = (bool *)v151;
            goto LABEL_38;
          case JobObjectSharedCommit:
            v112 = *(_QWORD *)(v14 + 1320);
            v15 = (bool *)&v112;
            NotificationChannel = 0;
            v14 = *(_QWORD *)&v96[1];
            goto LABEL_39;
          case JobObjectContainerId:
            v152[0] = *(_OWORD *)(v14 + 1224);
            if ( (_DWORD)v5 == 36 )
            {
              v152[1] = *(_OWORD *)(v14 + 1240);
              v153 = *(_DWORD *)(v14 + 1220);
            }
            v15 = (bool *)v152;
            goto LABEL_38;
          case JobObjectIoRateControlInformation:
            NotificationChannel = -1073741822;
            goto LABEL_39;
          case JobObjectNetRateControlInformation:
            PspLockJobShared(v14, CurrentThread);
            v129 = 0LL;
            v130 = 0LL;
            v74 = *(_QWORD *)(v14 + 1296);
            if ( v74 )
            {
              LODWORD(v130) = 1;
              v75 = *(_DWORD *)(v74 + 48);
              if ( (v75 & 1) != 0 )
              {
                v10 = 3;
                LODWORD(v130) = 3;
                v129 = *(_QWORD *)(v74 + 40);
              }
              if ( (v75 & 2) != 0 )
              {
                LODWORD(v130) = v10 | 4;
                BYTE4(v130) = *(_BYTE *)(v74 + 64);
              }
            }
            PspUnlockJob(v14, v90);
            v15 = (bool *)&v129;
            goto LABEL_38;
          case JobObjectNotificationLimitInformation2:
            goto LABEL_115;
          case JobObjectLimitViolationInformation2:
            goto LABEL_84;
        }
        goto LABEL_203;
      }
      if ( (*(_DWORD *)(v14 + 1304) & 0x40000000) != 0 )
      {
        v136 = *(_DWORD *)(v14 + 1220);
        ParentSilo = PsGetParentSilo(v14, v8, JobInformation, CurrentThread);
        if ( PsIsHostSilo(ParentSilo) )
          v137 = 0;
        else
          v137 = *(_DWORD *)(ParentSilo + 1220);
        v138 = *(_DWORD *)(v14 + 1208);
        IsSiloInServerSilo = PspIsSiloInServerSilo(v14);
        v15 = (bool *)&v136;
        goto LABEL_38;
      }
    }
    NotificationChannel = -1073740535;
    goto LABEL_39;
  }
  if ( JobInformationClass > JobObjectGroupInformation )
  {
    if ( JobInformationClass != JobObjectNotificationLimitInformation )
    {
      if ( JobInformationClass != JobObjectLimitViolationInformation )
      {
        if ( JobInformationClass != JobObjectGroupInformationEx )
        {
          switch ( JobInformationClass )
          {
            case JobObjectCpuRateControlInformation:
              PspLockJobShared(v14, CurrentThread);
              v50 = *(_QWORD *)(v14 + 1008);
              if ( !v50 || (v56 = *(_DWORD *)(v50 + 40), (v56 & 0x40) != 0) )
              {
                v104 = 0LL;
              }
              else
              {
                HIDWORD(v104) = *(_DWORD *)(v50 + 44);
                v63 = ((v56 & 4 | 2u) >> 1) | 4;
                if ( (v56 & 1) == 0 )
                  v63 = (v56 & 4 | 2u) >> 1;
                v64 = v63 | 8;
                if ( (v56 & 2) == 0 )
                  v64 = v63;
                v65 = v64 | 0x10;
                if ( (v56 & 0x20) == 0 )
                  v65 = v64;
                LODWORD(v104) = v65;
              }
              PspUnlockJob(v14, v90);
              v15 = (bool *)&v104;
              goto LABEL_38;
            case JobObjectCompletionFilter:
              v108 = *(_DWORD *)(v14 + 876);
              v15 = (bool *)&v108;
              goto LABEL_38;
            case JobObjectCompletionCounter:
              v114[0] = *(_QWORD *)(v14 + 472);
              v15 = (bool *)v114;
              goto LABEL_38;
            case JobObjectFreezeInformation:
              v131 = 7;
              v134 = 0;
              PspLockJobShared(v14, CurrentThread);
              v62 = *(_DWORD *)(v14 + 1304);
              v132 = (v62 & 0x200) != 0;
              v133 = (v62 & 0x80000) != 0;
              v135 = *(_QWORD *)(v14 + 952);
              PspUnlockJob(v14, v90);
              v15 = (bool *)&v131;
              goto LABEL_38;
          }
          goto LABEL_37;
        }
        if ( ReturnLength && (v5 & 0xF) == 0 )
        {
          PspLockJobShared(v14, CurrentThread);
          if ( (*(_DWORD *)(v14 + 256) & 0x10) != 0 )
            v66 = (int *)(v14 + 264);
          else
            v66 = KeActiveProcessors;
          v157[0] = *(_OWORD *)v66;
          v157[1] = *((_OWORD *)v66 + 1);
          v157[2] = *((_OWORD *)v66 + 2);
          v157[3] = *((_OWORD *)v66 + 3);
          v157[4] = *((_OWORD *)v66 + 4);
          v157[5] = *((_OWORD *)v66 + 5);
          v157[6] = *((_OWORD *)v66 + 6);
          v157[7] = *((_OWORD *)v66 + 7);
          v157[8] = *((_OWORD *)v66 + 8);
          v157[9] = *((_OWORD *)v66 + 9);
          v158 = *((_QWORD *)v66 + 20);
          PspUnlockJob(v14, v90);
          v67 = v157[0];
          memset(v160, 0, 16LL * LOWORD(v157[0]));
          v68 = 0;
          if ( v67 )
          {
            v69 = v160;
            v70 = (_QWORD *)v157 + 1;
            do
            {
              *((_WORD *)v69 + 4) = v68;
              *(_QWORD *)v69 = *v70;
              ++v68;
              ++v70;
              v69 += 16;
            }
            while ( v68 < v67 );
          }
          v71 = 16 * v67;
          Size_4 = v71;
          NotificationChannel = Size < v71 ? 0xC0000023 : 0;
          v9 = Size;
          if ( Size >= v71 )
            v9 = v71;
          v96[0] = v9;
          v88 = 1;
          v18 = JobInformation;
          memmove(JobInformation, v160, v9);
          v17 = ReturnLength;
          goto LABEL_41;
        }
LABEL_179:
        NotificationChannel = -1073741811;
        goto LABEL_39;
      }
LABEL_84:
      v97 = 0;
      v98 = 0;
      PspQueryJobHierarchyAccountingInformation((PVOID)v14);
      v116 = Src[9];
      v118 = Src[10];
      v120 = Src[0];
      PspLockJobExclusive(v14, v90);
      v20 = *(_DWORD *)(v14 + 1304);
      if ( (v20 & 8) == 0 || (v20 & 0x4000) == 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v14 + 1304), 0xFFFFFFFB);
        v14 = *(_QWORD *)&v96[1];
      }
      ExAcquirePushLockSharedEx(v14 + 1032, 0LL);
      v122 = *(_QWORD *)(v14 + 976) << 12;
      PspUnlockJobMemoryLimitsShared(v14, 0LL);
      v21 = *(_DWORD **)(v14 + 984);
      if ( v21 )
      {
        LODWORD(v115) = *v21;
        HIDWORD(v115) = *(_DWORD *)(*(_QWORD *)(v14 + 984) + 4LL);
        v22 = *(_QWORD **)(v14 + 984);
        v23 = v22[9];
        if ( !v23 )
          v23 = v22[1];
        v117 = v23;
        v24 = v22[10];
        if ( !v24 )
          v24 = v22[2];
        v119 = v24;
        v25 = v22[11];
        if ( !v25 )
          v25 = v22[3];
        v121 = v25;
        v26 = v22[12];
        if ( !v26 )
          v26 = v22[4];
        v126 = v26 << 12;
        v27 = v22[13];
        if ( !v27 )
          v27 = v22[5];
        v123 = v27 << 12;
        for ( i = 0; i < 3; i = v30 + 1 )
        {
          v29 = (_DWORD *)PspLimitViolationRateControlToleranceLimitField((__int64)&v115, i);
          v33 = v31[16];
          if ( v33 )
            *v32 = 1;
          else
            v33 = *v31;
          *v29 = v33;
        }
      }
      else
      {
        v115 = 0LL;
        v117 = 0LL;
        v119 = 0LL;
        v121 = 0LL;
        v126 = 0LL;
        v123 = 0LL;
        for ( j = 0; j < 3; j = v73 + 1 )
          *(_DWORD *)PspLimitViolationRateControlToleranceLimitField((__int64)&v115, j) = 0;
      }
      v34 = 0;
      v35 = &v97;
      LODWORD(v36) = 60;
      v100 = 60LL;
      do
      {
        if ( *(_QWORD *)(v14 + 984) && (v37 = PspRateControlLimitFlag((unsigned int)v34), (v37 & *v38) != 0) )
          v39 = *(_DWORD *)((char *)v38 + v36);
        else
          v39 = 1;
        v101 = v39;
        LOBYTE(v36) = *(_BYTE *)v35;
        PspQueryRateControlHistory(v14, v39, v36, (unsigned int)&v109, v34);
        if ( v34 )
        {
          if ( v34 == 1 )
            v40 = &v127;
          else
            v40 = (char *)&v124;
        }
        else
        {
          v40 = &v128;
        }
        *(_DWORD *)v40 = v109;
        ++v34;
        LODWORD(v36) = v100 + 4;
        v100 += 4LL;
        v35 = (__int16 *)((char *)v35 + 1);
      }
      while ( v34 < 3 );
      v41 = *(_QWORD *)(v14 + 984);
      if ( v41 )
      {
        *(_DWORD *)(v41 + 4) = 0;
        memset((void *)(*(_QWORD *)(v14 + 984) + 72LL), 0, 0x40uLL);
      }
      PspUnlockJob(v14, v90);
      if ( Size == 88 )
      {
        v147[1] = v116;
        v147[2] = v117;
        v147[3] = v118;
        v147[4] = v119;
        v147[5] = v120;
        v147[6] = v121;
        v147[7] = v122;
        v147[8] = v126;
        v147[9] = v123;
        v148 = v124;
        v149 = v125;
        v147[0] = v115 & 0x27820400278204LL;
        v15 = (bool *)v147;
      }
      else if ( Size == 80 )
      {
        v144[1] = v116;
        v144[2] = v117;
        v144[3] = v118;
        v144[4] = v119;
        v144[5] = v120;
        v144[6] = v121;
        v144[7] = v122;
        v144[8] = v123;
        v145 = v124;
        v146 = v125;
        v144[0] = v115 & 0x7020400070204LL;
        v15 = (bool *)v144;
      }
      else
      {
        v15 = (bool *)&v115;
      }
      NotificationChannel = 0;
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobSetQuery(v14, JobInformationClass, (unsigned int)&v115, (unsigned int)&v101, 0, 1830);
      goto LABEL_39;
    }
LABEL_115:
    memset(v140, 0, 0x48uLL);
    PspLockJobShared(v14, v90);
    v42 = *(_QWORD *)(v14 + 984);
    if ( v42 )
    {
      LODWORD(v140[5]) = *(_DWORD *)v42;
      v140[0] = *(_QWORD *)(v42 + 8);
      v140[1] = *(_QWORD *)(v42 + 16);
      v140[2] = *(_QWORD *)(v42 + 24);
      v140[6] = *(_QWORD *)(v42 + 32) << 12;
      v140[3] = *(_QWORD *)(v42 + 40) << 12;
      for ( k = 0; k < 3; k = v49 + 1 )
      {
        v44 = (_DWORD *)PspNotificationLimitRateControlToleranceField((__int64)v140, k);
        *v44 = *(_DWORD *)(v45 - 12);
        v47 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField((__int64)v140, v46);
        *v47 = *v48;
      }
    }
    PspUnlockJob(v14, v90);
    if ( Size == 56 )
    {
      memset(v143, 0, 0x38uLL);
      v143[0] = v140[0];
      v143[1] = v140[1];
      v143[2] = v140[2];
      v143[3] = v140[6];
      v143[4] = v140[3];
      v143[5] = v140[4];
      LODWORD(v143[6]) = v140[5] & 0x278204;
      v15 = (bool *)v143;
    }
    else if ( Size == 48 )
    {
      memset(v142, 0, sizeof(v142));
      v142[0] = v140[0];
      v142[1] = v140[1];
      v142[2] = v140[2];
      v142[3] = v140[3];
      v142[4] = v140[4];
      LODWORD(v142[5]) = v140[5] & 0x70204;
      v15 = (bool *)v142;
    }
    else
    {
      v15 = (bool *)v140;
    }
    goto LABEL_38;
  }
  if ( JobInformationClass == JobObjectGroupInformation )
  {
    if ( ReturnLength && (v5 & 1) == 0 )
    {
      PspLockJobShared(v14, CurrentThread);
      v57 = 0;
      v58 = 0;
      v59 = *(_WORD *)(v14 + 264);
      if ( v59 )
      {
        v60 = (_QWORD *)(v14 + 272);
        for ( m = 0; m < v59; v58 = m )
        {
          if ( *v60 )
            v161[v57++] = v58;
          ++v60;
          ++m;
        }
      }
      PspUnlockJob(v14, v90);
      v9 = 2 * v57;
      Size_4 = v9;
      v88 = 1;
      NotificationChannel = Size < v9 ? 0xC0000023 : 0;
      if ( v9 > Size )
        v9 = v96[0];
      v96[0] = v9;
      v18 = JobInformation;
      memmove(JobInformation, v161, v9);
      v17 = ReturnLength;
      goto LABEL_41;
    }
    goto LABEL_179;
  }
  if ( JobInformationClass != JobObjectBasicAccountingInformation )
  {
    switch ( JobInformationClass )
    {
      case JobObjectBasicLimitInformation:
LABEL_75:
        memset(v154, 0, 0x98uLL);
        PspLockJobShared(v14, v90);
        LODWORD(v154[2]) = *(_DWORD *)(v14 + 256);
        v154[3] = *(_QWORD *)(v14 + 240);
        v154[4] = *(_QWORD *)(v14 + 248);
        LODWORD(v154[5]) = *(_DWORD *)(v14 + 260);
        LODWORD(v154[7]) = *(unsigned __int8 *)(v14 + 873);
        HIDWORD(v154[7]) = *(_DWORD *)(v14 + 484);
        if ( KeIsSingleGroupAffinityEx((unsigned __int16 *)(v14 + 264), &v99) )
          v154[6] = *(_QWORD *)(v14 + 8LL * v99 + 272);
        else
          v154[6] = 0LL;
        v154[0] = *(_QWORD *)(v14 + 224);
        v154[1] = *(_QWORD *)(v14 + 232);
        if ( JobInformationClass == JobObjectExtendedLimitInformation )
        {
          ExAcquirePushLockSharedEx(v14 + 1032, 0LL);
          v154[14] = *(_QWORD *)(v14 + 576) << 12;
          v154[15] = *(_QWORD *)(v14 + 584) << 12;
          v154[17] = *(_QWORD *)(v14 + 608) << 12;
          v154[18] = *(_QWORD *)(v14 + 592) << 12;
          PspUnlockJobMemoryLimitsShared(v14, 0LL);
          PspUnlockJob(v14, v90);
          v154[16] = *(_QWORD *)(v14 + 600) << 12;
        }
        else
        {
          PspUnlockJob(v14, v90);
        }
        NotificationChannel = 0;
        v15 = (bool *)v154;
        goto LABEL_39;
      case JobObjectBasicProcessIdList:
        Size_4 = 0;
        v18 = JobInformation;
        NotificationChannel = PspQueryJobHierarchyProcessIdList((_DWORD *)v14, JobInformation, v5, &Size_4);
        v88 = 1;
LABEL_55:
        v17 = ReturnLength;
        goto LABEL_41;
      case JobObjectBasicUIRestrictions:
        PspLockJobShared(v14, CurrentThread);
        v107 = *(_DWORD *)(v14 + 448);
        PspUnlockJob(v14, v90);
        v15 = (bool *)&v107;
        goto LABEL_38;
      case JobObjectSecurityLimitInformation:
        memset(&v114[1], 0, 0x28uLL);
        v88 = 1;
        *(_OWORD *)JobInformation = *(_OWORD *)&v114[1];
        *((_OWORD *)JobInformation + 1) = *(_OWORD *)&v114[3];
        *((_QWORD *)JobInformation + 4) = v114[5];
        v17 = ReturnLength;
        goto LABEL_40;
      case JobObjectEndOfJobTimeInformation:
        v106 = *(_DWORD *)(v14 + 452);
        v15 = (bool *)&v106;
        goto LABEL_38;
    }
    if ( JobInformationClass != JobObjectBasicAndIoAccountingInformation )
    {
      if ( JobInformationClass == JobObjectExtendedLimitInformation )
        goto LABEL_75;
      if ( JobInformationClass == JobObjectJobSetInformation )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
        v105 = 0;
        PspUnlockJobListShared(v90);
        v15 = (bool *)&v105;
        goto LABEL_38;
      }
LABEL_203:
      NotificationChannel = -1073741821;
      goto LABEL_39;
    }
  }
LABEL_37:
  PspQueryJobHierarchyAccountingInformation((PVOID)v14);
  v15 = (bool *)Src;
LABEL_38:
  NotificationChannel = 0;
LABEL_39:
  v17 = ReturnLength;
LABEL_40:
  v18 = JobInformation;
LABEL_41:
  if ( v14 )
    ObfDereferenceObjectWithTag((PVOID)v14, 0x79517350u);
  if ( NotificationChannel >= 0 && !v88 )
    memmove(v18, v15, v9);
  if ( v17 )
    *v17 = Size_4;
  return NotificationChannel;
}
