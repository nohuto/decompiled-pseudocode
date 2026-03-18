/*
 * XREFs of NtQueryInformationJobObject @ 0x140476D50
 * Callers:
 *     <none>
 * Callees:
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     KeIsSingleGroupAffinityEx @ 0x14002F820 (KeIsSingleGroupAffinityEx.c)
 *     PspGetJobSilo @ 0x14003A23C (PspGetJobSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x140050C00 (PsIsHostSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400676A0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PspIsSiloInServerSilo @ 0x140238A1C (PspIsSiloInServerSilo.c)
 *     PsGetJobServerSilo @ 0x140239460 (PsGetJobServerSilo.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspQueryJobIoAttribution @ 0x140440F34 (PspQueryJobIoAttribution.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140446EEC (PspQueryJobHierarchyProcessIdList.c)
 *     PspLimitViolationRateControlToleranceLimitField @ 0x1404730C0 (PspLimitViolationRateControlToleranceLimitField.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140478450 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspQueryRateControlHistory @ 0x140479030 (PspQueryRateControlHistory.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1404797EC (PspUnlockJobMemoryLimitsShared.c)
 *     PspRateControlLimitFlag @ 0x140479E44 (PspRateControlLimitFlag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x14055F8F8 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x14055F918 (PspNotificationLimitRateControlToleranceField.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 *     PsGetParentSilo @ 0x1406DE24C (PsGetParentSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1406E17A8 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspUnlockJobListShared @ 0x1406E2248 (PspUnlockJobListShared.c)
 *     EtwTraceJobSetQuery @ 0x14070AD8C (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 *     ObGetSiloRootDirectoryPath @ 0x140747A10 (ObGetSiloRootDirectoryPath.c)
 */

NTSTATUS __stdcall NtQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength,
        PULONG ReturnLength)
{
  char *v6; // r11
  __int32 v8; // r8d
  NTSTATUS result; // eax
  ULONG v10; // eax
  bool v11; // zf
  unsigned int v12; // r15d
  struct _KTHREAD *CurrentThread; // r13
  __int64 v14; // rcx
  char *v15; // rdi
  char *v16; // rcx
  __int64 *v17; // r14
  __int64 v18; // rsi
  ULONG v19; // r13d
  PVOID v20; // rbx
  PULONG v21; // r12
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // r8
  _QWORD *v24; // rdx
  int *v25; // rax
  unsigned __int16 v26; // si
  unsigned __int16 v27; // dx
  _BYTE *v28; // rcx
  _QWORD *v29; // r8
  __int64 v30; // r8
  __int64 v31; // rdx
  _DWORD *v32; // r8
  _DWORD *v33; // rax
  __int64 v34; // r8
  _DWORD *v35; // rax
  _DWORD *v36; // r8
  int v37; // edx
  _DWORD *v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rcx
  _QWORD *v41; // r10
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // edx
  int v48; // edx
  _DWORD *v49; // rcx
  int *v50; // r8
  _BYTE *v51; // r9
  __int64 v52; // r10
  int v53; // eax
  _BYTE *v54; // r9
  int i; // edx
  int v56; // edx
  unsigned __int8 *v57; // r12
  __int64 v58; // r8
  __int64 v59; // rdx
  int v60; // eax
  _DWORD *v61; // rdx
  __int64 v62; // r8
  int v63; // edx
  char *v64; // rcx
  __int64 v65; // rax
  ULONG v66; // r12d
  _QWORD *v67; // rax
  __int64 v68; // rax
  int v69; // ecx
  int v70; // eax
  int v71; // ecx
  __int64 v72; // rdx
  int v73; // ecx
  int v74; // r8d
  __int64 ParentSilo; // rsi
  __int64 JobSilo; // rax
  unsigned __int16 v77; // ax
  __int64 v78; // rdx
  __int64 HostSilo; // rax
  const void **ServerSiloGlobals; // rax
  ULONG v81; // [rsp+40h] [rbp-878h]
  char v82; // [rsp+44h] [rbp-874h]
  ULONG v84; // [rsp+5Ch] [rbp-85Ch] BYREF
  bool v85; // [rsp+60h] [rbp-858h] BYREF
  bool v86; // [rsp+61h] [rbp-857h] BYREF
  bool v87; // [rsp+62h] [rbp-856h] BYREF
  PVOID Object; // [rsp+68h] [rbp-850h] BYREF
  __int16 v89; // [rsp+70h] [rbp-848h] BYREF
  char v90; // [rsp+72h] [rbp-846h]
  unsigned __int16 v91; // [rsp+74h] [rbp-844h] BYREF
  JOBOBJECTINFOCLASS v92; // [rsp+78h] [rbp-840h]
  __int64 v93; // [rsp+80h] [rbp-838h] BYREF
  int v94; // [rsp+88h] [rbp-830h] BYREF
  __int64 v95; // [rsp+90h] [rbp-828h]
  PVOID v96; // [rsp+98h] [rbp-820h]
  PULONG v97; // [rsp+A0h] [rbp-818h]
  __int64 v98; // [rsp+A8h] [rbp-810h] BYREF
  int v99; // [rsp+B0h] [rbp-808h] BYREF
  int v100; // [rsp+B4h] [rbp-804h] BYREF
  int v101; // [rsp+B8h] [rbp-800h] BYREF
  int v102; // [rsp+BCh] [rbp-7FCh] BYREF
  ULONG v103; // [rsp+C0h] [rbp-7F8h]
  int v104; // [rsp+C4h] [rbp-7F4h] BYREF
  unsigned __int16 v105; // [rsp+C8h] [rbp-7F0h] BYREF
  PVOID P; // [rsp+D0h] [rbp-7E8h]
  __int64 v107; // [rsp+D8h] [rbp-7E0h] BYREF
  __int64 v108; // [rsp+E0h] [rbp-7D8h] BYREF
  __int64 v109; // [rsp+E8h] [rbp-7D0h] BYREF
  __int128 v110; // [rsp+F0h] [rbp-7C8h]
  __int128 v111; // [rsp+100h] [rbp-7B8h]
  __int64 v112; // [rsp+110h] [rbp-7A8h]
  __int64 v113; // [rsp+118h] [rbp-7A0h] BYREF
  __int64 v114; // [rsp+120h] [rbp-798h]
  __int64 v115; // [rsp+130h] [rbp-788h] BYREF
  __int64 v116; // [rsp+138h] [rbp-780h]
  __int64 v117; // [rsp+140h] [rbp-778h]
  __int64 v118; // [rsp+148h] [rbp-770h]
  __int64 v119; // [rsp+150h] [rbp-768h]
  __int64 v120; // [rsp+158h] [rbp-760h]
  __int64 v121; // [rsp+160h] [rbp-758h]
  __int64 v122; // [rsp+168h] [rbp-750h]
  __int64 v123; // [rsp+170h] [rbp-748h]
  int v124; // [rsp+178h] [rbp-740h] BYREF
  int v125; // [rsp+17Ch] [rbp-73Ch]
  __int64 v126; // [rsp+180h] [rbp-738h]
  char v127; // [rsp+188h] [rbp-730h] BYREF
  char v128; // [rsp+190h] [rbp-728h] BYREF
  __int64 v129; // [rsp+1A0h] [rbp-718h] BYREF
  __int64 v130; // [rsp+1A8h] [rbp-710h]
  __int64 v131; // [rsp+1B0h] [rbp-708h]
  __int64 v132; // [rsp+1B8h] [rbp-700h]
  __int64 v133; // [rsp+1C0h] [rbp-6F8h]
  __int64 v134; // [rsp+1C8h] [rbp-6F0h]
  __int64 v135; // [rsp+1D0h] [rbp-6E8h]
  __int64 v136; // [rsp+1D8h] [rbp-6E0h]
  __int64 v137; // [rsp+1E0h] [rbp-6D8h]
  int v138; // [rsp+1F0h] [rbp-6C8h] BYREF
  bool v139; // [rsp+1F4h] [rbp-6C4h]
  bool v140; // [rsp+1F5h] [rbp-6C3h]
  __int16 v141; // [rsp+1F6h] [rbp-6C2h]
  __int64 v142; // [rsp+1F8h] [rbp-6C0h]
  int v143; // [rsp+200h] [rbp-6B8h] BYREF
  int v144; // [rsp+204h] [rbp-6B4h]
  int v145; // [rsp+208h] [rbp-6B0h]
  bool IsSiloInServerSilo; // [rsp+20Ch] [rbp-6ACh]
  _DWORD v147[4]; // [rsp+210h] [rbp-6A8h] BYREF
  _QWORD v148[6]; // [rsp+220h] [rbp-698h] BYREF
  _QWORD v149[7]; // [rsp+250h] [rbp-668h] BYREF
  _QWORD v150[5]; // [rsp+288h] [rbp-630h] BYREF
  _QWORD v151[9]; // [rsp+2B0h] [rbp-608h] BYREF
  int v152; // [rsp+2F8h] [rbp-5C0h]
  int v153; // [rsp+2FCh] [rbp-5BCh]
  _QWORD v154[10]; // [rsp+300h] [rbp-5B8h] BYREF
  int v155; // [rsp+350h] [rbp-568h]
  int v156; // [rsp+354h] [rbp-564h]
  _QWORD v157[10]; // [rsp+360h] [rbp-558h] BYREF
  __int128 v158; // [rsp+3B0h] [rbp-508h] BYREF
  __int128 v159; // [rsp+3C0h] [rbp-4F8h] BYREF
  _QWORD v160[20]; // [rsp+3D0h] [rbp-4E8h] BYREF
  _BYTE v161[64]; // [rsp+470h] [rbp-448h] BYREF
  _OWORD v162[10]; // [rsp+4B0h] [rbp-408h] BYREF
  __int64 v163; // [rsp+550h] [rbp-368h]
  _QWORD v164[54]; // [rsp+560h] [rbp-358h] BYREF
  _BYTE v165[320]; // [rsp+710h] [rbp-1A8h] BYREF
  _WORD Src[20]; // [rsp+850h] [rbp-68h] BYREF

  v103 = JobInformationLength;
  v6 = (char *)JobInformation;
  v92 = JobInformationClass;
  v96 = JobInformation;
  v97 = ReturnLength;
  v8 = JobInformationClass - 1;
  if ( (unsigned int)(JobInformationClass - 1) > 0x2E )
    return -1073741821;
  switch ( JobInformationClass )
  {
    case JobObjectExtendedLimitInformation:
      if ( JobInformationLength == 144 )
        goto LABEL_20;
      v11 = JobInformationLength == 152;
      goto LABEL_8;
    case JobObjectNotificationLimitInformation:
      v10 = JobInformationLength - 48;
      goto LABEL_7;
    case JobObjectLimitViolationInformation:
      v10 = JobInformationLength - 80;
LABEL_7:
      v11 = (v10 & 0xFFFFFFF7) == 0;
      goto LABEL_8;
    case JobObjectWakeInformation:
      if ( JobInformationLength != 40 && JobInformationLength != 64 )
        return -1073741820;
      goto LABEL_20;
    case JobObjectMemoryUsageInformation:
      if ( JobInformationLength == 16 )
        goto LABEL_20;
      v11 = JobInformationLength == 40;
LABEL_8:
      if ( !v11 )
        return -1073741820;
LABEL_20:
      v12 = JobInformationLength;
      goto LABEL_21;
    case JobObjectMemoryPartitionInformation:
      if ( JobInformationLength != 1 )
        return -1073741820;
      v12 = 1;
LABEL_21:
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread->PreviousMode )
      {
        if ( JobInformationLength )
        {
          if ( ((PspJobInfoAlign[v8] - 1) & (unsigned int)v6) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v6[JobInformationLength] > 0x7FFFFFFF0000LL || &v6[JobInformationLength] < v6 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        if ( ReturnLength )
        {
          v14 = (__int64)ReturnLength;
          if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
            v14 = 0x7FFFFFFF0000LL;
          *(_DWORD *)v14 = *(_DWORD *)v14;
        }
      }
      if ( JobHandle )
      {
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)JobHandle, 2035381072, (__int64)&Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v15 = (char *)Object;
        v6 = (char *)JobInformation;
      }
      else
      {
        v16 = (char *)CurrentThread->ApcState.Process[1].Affinity.Bitmap[16];
        Object = v16;
        v15 = v16;
        if ( v16 )
        {
          ObfReferenceObjectWithTag(v16, 0x79517350u);
          v6 = (char *)JobInformation;
        }
        else if ( ((JobInformationClass - 31) & 0xFFFFFFF7) != 0 )
        {
          return -1073741790;
        }
      }
      v81 = v12;
      v84 = v12;
      v82 = 0;
      v17 = 0LL;
      v95 = 0LL;
      v18 = 0LL;
      switch ( v92 )
      {
        case JobObjectBasicAccountingInformation:
        case JobObjectBasicAndIoAccountingInformation:
        case JobObjectExtendedAccountingInformation:
          PspQueryJobHierarchyAccountingInformation(v15);
          v17 = v164;
          goto LABEL_186;
        case JobObjectBasicLimitInformation:
        case JobObjectExtendedLimitInformation:
          memset(v160, 0, 0x98uLL);
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceSharedLite((PERESOURCE)(v15 + 56), 1u);
          LODWORD(v160[2]) = *((_DWORD *)v15 + 64);
          v160[3] = *((_QWORD *)v15 + 30);
          v160[4] = *((_QWORD *)v15 + 31);
          LODWORD(v160[5]) = *((_DWORD *)v15 + 65);
          LODWORD(v160[7]) = (unsigned __int8)v15[873];
          HIDWORD(v160[7]) = *((_DWORD *)v15 + 121);
          if ( KeIsSingleGroupAffinityEx((unsigned __int16 *)v15 + 132, &v91) )
            v160[6] = *(_QWORD *)&v15[8 * v91 + 272];
          else
            v160[6] = 0LL;
          v160[0] = *((_QWORD *)v15 + 28);
          v160[1] = *((_QWORD *)v15 + 29);
          if ( v92 == JobObjectExtendedLimitInformation )
          {
            ExAcquirePushLockSharedEx((ULONG_PTR)(v15 + 1032), 0LL);
            v160[14] = *((_QWORD *)v15 + 72) << 12;
            v160[15] = *((_QWORD *)v15 + 73) << 12;
            v160[17] = *((_QWORD *)v15 + 76) << 12;
            v160[18] = *((_QWORD *)v15 + 74) << 12;
            PspUnlockJobMemoryLimitsShared(v15, 0LL);
            PspUnlockJob(v15, CurrentThread);
            v160[16] = *((_QWORD *)v15 + 75) << 12;
          }
          else
          {
            PspUnlockJob(v15, CurrentThread);
          }
          v17 = v160;
          goto LABEL_186;
        case JobObjectBasicProcessIdList:
          v84 = 0;
          LODWORD(v18) = PspQueryJobHierarchyProcessIdList(v15, v6, JobInformationLength, &v84);
          v82 = 1;
          v19 = v84;
          goto LABEL_187;
        case JobObjectBasicUIRestrictions:
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceSharedLite((PERESOURCE)(v15 + 56), 1u);
          v99 = *((_DWORD *)v15 + 112);
          PspUnlockJob(v15, CurrentThread);
          v17 = (__int64 *)&v99;
          goto LABEL_186;
        case JobObjectSecurityLimitInformation:
          v110 = 0uLL;
          v111 = 0uLL;
          v112 = 0LL;
          v82 = 1;
          *(_OWORD *)v6 = 0uLL;
          *((_OWORD *)v6 + 1) = v111;
          *((_QWORD *)v6 + 4) = v112;
          v19 = v12;
          v20 = JobInformation;
          v21 = ReturnLength;
          goto LABEL_189;
        case JobObjectEndOfJobTimeInformation:
          v101 = *((_DWORD *)v15 + 113);
          v17 = (__int64 *)&v101;
          goto LABEL_186;
        case JobObjectAssociateCompletionPortInformation:
        case JobObjectSchedulingRankBiasInformation:
        case JobObjectTimerVirtualizationInformation:
        case JobObjectCycleTimeNotification:
        case JobObjectClearEvent:
        case JobObjectClearPeakJobMemoryUsed:
        case JobObjectCreateSilo:
        case JobObjectServerSiloInitialize:
        case JobObjectServerSiloRunningState:
        case JobObjectSiloSystemRoot:
          LODWORD(v18) = -1073741821;
          goto LABEL_186;
        case JobObjectJobSetInformation:
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
          v100 = 0;
          PspUnlockJobListShared(CurrentThread);
          v17 = (__int64 *)&v100;
          goto LABEL_186;
        case JobObjectGroupInformation:
          if ( !ReturnLength || (JobInformationLength & 1) != 0 )
            goto LABEL_64;
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceSharedLite((PERESOURCE)(v15 + 56), 1u);
          v22 = 0;
          v23 = *((_WORD *)v15 + 132);
          if ( v23 )
          {
            v24 = v15 + 272;
            do
            {
              if ( *v24 )
              {
                Src[v18] = v22;
                v18 = (unsigned int)(v18 + 1);
              }
              ++v22;
              ++v24;
            }
            while ( v22 < v23 );
          }
          PspUnlockJob(v15, CurrentThread);
          v19 = 2 * v18;
          v84 = 2 * v18;
          v82 = 1;
          if ( 2 * (int)v18 > JobInformationLength )
          {
            LODWORD(v18) = -1073741789;
          }
          else
          {
            LODWORD(v18) = 0;
            v12 = v19;
          }
          v20 = JobInformation;
          memmove(JobInformation, Src, v12);
          v21 = ReturnLength;
          goto LABEL_189;
        case JobObjectNotificationLimitInformation:
        case JobObjectNotificationLimitInformation2:
          v129 = 0LL;
          v130 = 0LL;
          v131 = 0LL;
          v132 = 0LL;
          v133 = 0LL;
          v134 = 0LL;
          v135 = 0LL;
          v136 = 0LL;
          v137 = 0LL;
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceSharedLite((PERESOURCE)(v15 + 56), 1u);
          v30 = *((_QWORD *)v15 + 123);
          if ( v30 )
          {
            LODWORD(v134) = *(_DWORD *)v30;
            v129 = *(_QWORD *)(v30 + 8);
            v130 = *(_QWORD *)(v30 + 16);
            v131 = *(_QWORD *)(v30 + 24);
            v135 = *(_QWORD *)(v30 + 32) << 12;
            v132 = *(_QWORD *)(v30 + 40) << 12;
            v31 = 0LL;
            v32 = (_DWORD *)(v30 + 60);
            do
            {
              v33 = (_DWORD *)PspNotificationLimitRateControlToleranceField(&v129, v31, v32);
              *v33 = *(_DWORD *)(v34 - 12);
              v35 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(&v129);
              *v35 = *v36;
              v31 = (unsigned int)(v37 + 1);
              v32 = v36 + 1;
            }
            while ( (int)v31 < 3 );
          }
          PspUnlockJob(v15, CurrentThread);
          if ( JobInformationLength == 48 )
          {
            v148[0] = v129;
            v148[1] = v130;
            v148[2] = v131;
            v148[3] = v132;
            v148[4] = v133;
            v148[5] = v134 & 0x70204;
            v17 = v148;
          }
          else if ( JobInformationLength == 56 )
          {
            v149[0] = v129;
            v149[1] = v130;
            v149[2] = v131;
            v149[3] = v135;
            v149[4] = v132;
            v149[5] = v133;
            v149[6] = v134 & 0x278204;
            v17 = v149;
          }
          else
          {
            v17 = &v129;
          }
          goto LABEL_186;
        case JobObjectLimitViolationInformation:
        case JobObjectLimitViolationInformation2:
          v89 = 0;
          v90 = 0;
          PspQueryJobHierarchyAccountingInformation(v15);
          v116 = v164[9];
          v118 = v164[10];
          v120 = v164[0];
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)(v15 + 56), 1u);
          if ( (*((_DWORD *)v15 + 326) & 0x4008) != 0x4008 )
          {
            _InterlockedAnd((volatile signed __int32 *)v15 + 326, 0xFFFFFFFB);
            v15 = (char *)Object;
            v81 = v84;
          }
          ExAcquirePushLockSharedEx((ULONG_PTR)(v15 + 1032), 0LL);
          v122 = *((_QWORD *)v15 + 122) << 12;
          PspUnlockJobMemoryLimitsShared(v15, 0LL);
          v38 = (_DWORD *)*((_QWORD *)v15 + 123);
          if ( v38 )
          {
            LODWORD(v115) = *v38;
            HIDWORD(v115) = *(_DWORD *)(*((_QWORD *)v15 + 123) + 4LL);
            v39 = *((_QWORD *)v15 + 123);
            v40 = (__int64 *)(v39 + 8);
            v41 = (_QWORD *)(v39 + 72);
            v42 = *(_QWORD *)(v39 + 72);
            if ( !v42 )
              v42 = *v40;
            v117 = v42;
            v43 = v41[1];
            if ( !v43 )
              v43 = v40[1];
            v119 = v43;
            v44 = v41[2];
            if ( !v44 )
              v44 = v40[2];
            v121 = v44;
            v45 = v41[3];
            if ( !v45 )
              v45 = v40[3];
            v126 = v45 << 12;
            v46 = v41[4];
            if ( !v46 )
              v46 = v40[4];
            v123 = v46 << 12;
            v47 = 0;
            do
            {
              v49 = (_DWORD *)PspLimitViolationRateControlToleranceLimitField((__int64)&v115, v47);
              v53 = *(int *)((char *)v50 + v52);
              if ( v53 )
                *v51 = 1;
              else
                v53 = *v50;
              *v49 = v53;
              v47 = v48 + 1;
              v54 = v51 + 1;
            }
            while ( v47 < 3 );
          }
          else
          {
            v115 = 0LL;
            v117 = 0LL;
            v119 = 0LL;
            v121 = 0LL;
            v126 = 0LL;
            v123 = 0LL;
            for ( i = 0; i < 3; i = v56 + 1 )
              *(_DWORD *)PspLimitViolationRateControlToleranceLimitField((__int64)&v115, i) = 0;
          }
          v57 = (unsigned __int8 *)&v89;
          v58 = 60LL;
          v93 = 60LL;
          do
          {
            v59 = *((_QWORD *)v15 + 123);
            if ( v59 && (v60 = PspRateControlLimitFlag((unsigned int)v18, v59, v58, v54), (v60 & *v61) != 0) )
              v63 = *(_DWORD *)((char *)v61 + v62);
            else
              v63 = 1;
            v94 = v63;
            PspQueryRateControlHistory((_DWORD)v15, v63, *v57, (unsigned int)&v102, v18);
            if ( (_DWORD)v18 )
            {
              if ( (_DWORD)v18 == 1 )
                v64 = &v127;
              else
                v64 = (char *)&v124;
            }
            else
            {
              v64 = &v128;
            }
            *(_DWORD *)v64 = v102;
            LODWORD(v18) = v18 + 1;
            v58 = v93 + 4;
            v93 += 4LL;
            ++v57;
          }
          while ( (int)v18 < 3 );
          v65 = *((_QWORD *)v15 + 123);
          v66 = v103;
          if ( v65 )
          {
            *(_DWORD *)(v65 + 4) = 0;
            v67 = (_QWORD *)*((_QWORD *)v15 + 123);
            v67[9] = 0LL;
            v67[10] = 0LL;
            v67[11] = 0LL;
            v67[12] = 0LL;
            v67[13] = 0LL;
            v67[14] = 0LL;
            v67[15] = 0LL;
            v67[16] = 0LL;
          }
          PspUnlockJob(v15, CurrentThread);
          if ( v66 == 88 )
          {
            v154[1] = v116;
            v154[2] = v117;
            v154[3] = v118;
            v154[4] = v119;
            v154[5] = v120;
            v154[6] = v121;
            v154[7] = v122;
            v154[8] = v126;
            v154[9] = v123;
            v155 = v124;
            v156 = v125;
            v154[0] = v115 & 0x27820400278204LL;
            v17 = v154;
          }
          else if ( v66 == 80 )
          {
            v151[1] = v116;
            v151[2] = v117;
            v151[3] = v118;
            v151[4] = v119;
            v151[5] = v120;
            v151[6] = v121;
            v151[7] = v122;
            v151[8] = v123;
            v152 = v124;
            v153 = v125;
            v151[0] = v115 & 0x7020400070204LL;
            v17 = v151;
          }
          else
          {
            v17 = &v115;
          }
          LODWORD(v18) = 0;
          if ( (PerfGlobalGroupMask & 0x80000) != 0 )
            EtwTraceJobSetQuery((_DWORD)v15, v92, (unsigned int)&v115, (unsigned int)&v94, 0, 1830);
          goto LABEL_186;
        case JobObjectGroupInformationEx:
          if ( !ReturnLength || (JobInformationLength & 0xF) != 0 )
          {
LABEL_64:
            LODWORD(v18) = -1073741811;
            goto LABEL_186;
          }
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceSharedLite((PERESOURCE)(v15 + 56), 1u);
          if ( (*((_DWORD *)v15 + 64) & 0x10) != 0 )
            v25 = (int *)(v15 + 264);
          else
            v25 = KeActiveProcessors;
          v162[0] = *(_OWORD *)v25;
          v162[1] = *((_OWORD *)v25 + 1);
          v162[2] = *((_OWORD *)v25 + 2);
          v162[3] = *((_OWORD *)v25 + 3);
          v162[4] = *((_OWORD *)v25 + 4);
          v162[5] = *((_OWORD *)v25 + 5);
          v162[6] = *((_OWORD *)v25 + 6);
          v162[7] = *((_OWORD *)v25 + 7);
          v162[8] = *((_OWORD *)v25 + 8);
          v162[9] = *((_OWORD *)v25 + 9);
          v163 = *((_QWORD *)v25 + 20);
          PspUnlockJob(v15, CurrentThread);
          v26 = v162[0];
          memset(v165, 0, 16LL * LOWORD(v162[0]));
          v27 = 0;
          if ( v26 )
          {
            v28 = v165;
            v29 = (_QWORD *)v162 + 1;
            do
            {
              *((_WORD *)v28 + 4) = v27;
              *(_QWORD *)v28 = *v29;
              ++v27;
              ++v29;
              v28 += 16;
            }
            while ( v27 < v26 );
          }
          v19 = 16 * v26;
          v84 = v19;
          if ( JobInformationLength >= v19 )
          {
            LODWORD(v18) = 0;
            v12 = v19;
          }
          else
          {
            LODWORD(v18) = -1073741789;
            v12 = JobInformationLength;
          }
          v82 = 1;
          v20 = JobInformation;
          memmove(JobInformation, v165, v12);
          v21 = ReturnLength;
          goto LABEL_189;
        case JobObjectCpuRateControlInformation:
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceSharedLite((PERESOURCE)(v15 + 56), 1u);
          v68 = *((_QWORD *)v15 + 126);
          if ( !v68 || (v69 = *(_DWORD *)(v68 + 40), (v69 & 0x40) != 0) )
          {
            v98 = 0LL;
          }
          else
          {
            HIDWORD(v98) = *(_DWORD *)(v68 + 44);
            v70 = 1;
            if ( (v69 & 4) != 0 )
              v70 = 3;
            if ( (v69 & 1) != 0 )
              v70 |= 4u;
            if ( (v69 & 2) != 0 )
              v70 |= 8u;
            if ( (v69 & 0x20) != 0 )
              v70 |= 0x10u;
            LODWORD(v98) = v70;
          }
          PspUnlockJob(v15, CurrentThread);
          v17 = &v98;
          goto LABEL_186;
        case JobObjectCompletionFilter:
          v104 = *((_DWORD *)v15 + 219);
          v17 = (__int64 *)&v104;
          goto LABEL_186;
        case JobObjectCompletionCounter:
          v109 = *((_QWORD *)v15 + 59);
          v17 = &v109;
          goto LABEL_186;
        case JobObjectFreezeInformation:
          v138 = 7;
          v141 = 0;
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceSharedLite((PERESOURCE)(v15 + 56), 1u);
          v71 = *((_DWORD *)v15 + 326);
          v139 = (v71 & 0x200) != 0;
          v140 = (v71 & 0x80000) != 0;
          v142 = *((_QWORD *)v15 + 119);
          PspUnlockJob(v15, CurrentThread);
          v17 = (__int64 *)&v138;
          goto LABEL_186;
        case JobObjectWakeInformation:
          LODWORD(v18) = PspAllocateAndQueryNotificationChannel(CurrentThread, v15, v161);
          v19 = v12;
          v21 = ReturnLength;
          if ( (int)v18 >= 0 )
          {
            v17 = (__int64 *)v161;
            LODWORD(v18) = 0;
          }
          goto LABEL_188;
        case JobObjectBackgroundInformation:
          v85 = (*((_DWORD *)v15 + 326) & 0x400) != 0;
          v17 = (__int64 *)&v85;
          goto LABEL_186;
        case JobObjectInterferenceInformation:
          LODWORD(v18) = PspQueryJobHierarchyInterferenceCount(v15);
          v21 = ReturnLength;
          if ( (int)v18 < 0 )
          {
            v19 = 0;
          }
          else
          {
            v82 = 1;
            v19 = 8;
          }
          goto LABEL_188;
        case JobObjectMemoryUsageInformation:
          v150[3] = 0LL;
          v150[4] = 0LL;
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)(v15 + 1032), 0LL);
          v150[1] = *((_QWORD *)v15 + 76) << 12;
          v150[0] = *((_QWORD *)v15 + 122) << 12;
          v150[2] = *((_QWORD *)v15 + 165) << 12;
          v15 = (char *)Object;
          PspUnlockJobMemoryLimitsShared(Object, CurrentThread);
          v17 = v150;
          v19 = v84;
          goto LABEL_187;
        case JobObjectSharedCommit:
          v107 = *((_QWORD *)v15 + 165);
          v17 = &v107;
          v15 = (char *)Object;
          v19 = v84;
          goto LABEL_187;
        case JobObjectContainerId:
          v158 = *(_OWORD *)(v15 + 1224);
          v17 = (__int64 *)&v158;
          goto LABEL_186;
        case JobObjectIoRateControlInformation:
          LODWORD(v18) = -1073741822;
          goto LABEL_186;
        case JobObjectNetRateControlInformation:
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceSharedLite((PERESOURCE)(v15 + 56), 1u);
          v113 = 0LL;
          v114 = 0LL;
          v72 = *((_QWORD *)v15 + 162);
          if ( v72 )
          {
            v73 = 1;
            LODWORD(v114) = 1;
            v74 = *(_DWORD *)(v72 + 48);
            if ( (v74 & 1) != 0 )
            {
              v73 = 3;
              LODWORD(v114) = 3;
              v113 = *(_QWORD *)(v72 + 40);
            }
            if ( (v74 & 2) != 0 )
            {
              LODWORD(v114) = v73 | 4;
              BYTE4(v114) = *(_BYTE *)(v72 + 64);
            }
          }
          PspUnlockJob(v15, CurrentThread);
          v17 = &v113;
          goto LABEL_186;
        case JobObjectSiloBasicInformation:
          if ( (*((_DWORD *)v15 + 326) & 0x40000000) != 0 )
          {
            v143 = *((_DWORD *)v15 + 305);
            ParentSilo = PsGetParentSilo(v15, 0x140000000uLL);
            if ( PsIsHostSilo(ParentSilo) )
              v144 = 0;
            else
              v144 = *(_DWORD *)(ParentSilo + 1220);
            v145 = *((_DWORD *)v15 + 302);
            IsSiloInServerSilo = PspIsSiloInServerSilo((__int64)v15);
            v17 = (__int64 *)&v143;
            LODWORD(v18) = 0;
          }
          else
          {
            LODWORD(v18) = -1073740535;
          }
          goto LABEL_186;
        case JobObjectSiloRootDirectory:
          JobSilo = PspGetJobSilo((__int64)v15);
          if ( JobSilo )
          {
            P = 0LL;
            LODWORD(v18) = ObGetSiloRootDirectoryPath(JobSilo, &v105);
            if ( (int)v18 >= 0 )
            {
              v82 = 1;
              v77 = v105;
              v12 = v105 + 16;
              v20 = JobInformation;
              if ( v12 > JobInformationLength )
              {
                LODWORD(v18) = -1073741789;
                v21 = ReturnLength;
              }
              else
              {
                *((_QWORD *)JobInformation + 1) = (char *)JobInformation + 16;
                *(_WORD *)JobInformation = v77;
                *((_WORD *)JobInformation + 1) = v77;
                memmove((char *)JobInformation + 16, P, v77);
                v21 = ReturnLength;
                if ( ReturnLength )
                  *ReturnLength = v12;
              }
              ExFreePoolWithTag(P, 0);
              v19 = v81;
              goto LABEL_189;
            }
          }
          else
          {
            LODWORD(v18) = -1073740535;
          }
LABEL_186:
          v19 = v81;
LABEL_187:
          v21 = ReturnLength;
LABEL_188:
          v20 = JobInformation;
LABEL_189:
          if ( v15 )
            ObfDereferenceObjectWithTag(v15, 0x79517350u);
          if ( (int)v18 >= 0 && !v82 )
            memmove(v20, v17, v12);
          if ( v21 )
            *v21 = v19;
          result = v18;
          break;
        case JobObjectServerSiloBasicInformation:
          PsGetJobServerSilo((__int64)v15, &v93);
          v18 = v93;
          if ( PsIsHostSilo(v93) )
          {
            LODWORD(v18) = -1073740535;
          }
          else
          {
            v78 = *(_QWORD *)(v18 + 1256);
            v147[1] = *(_DWORD *)(v78 + 1056);
            v147[2] = *(_DWORD *)(v78 + 1060);
            v147[0] = PsGetServerSiloServiceSessionId(v18);
            LODWORD(v18) = 0;
            v17 = (__int64 *)v147;
          }
          goto LABEL_186;
        case JobObjectServerSiloUserSharedData:
          if ( v15 )
          {
            PsGetJobServerSilo((__int64)v15, &v93);
            HostSilo = v93;
          }
          else
          {
            HostSilo = PsGetHostSilo();
          }
          ServerSiloGlobals = (const void **)PsGetServerSiloGlobals(HostSilo);
          v20 = JobInformation;
          memmove(JobInformation, ServerSiloGlobals[134], v12);
          v82 = 1;
          v19 = v12;
          v21 = ReturnLength;
          goto LABEL_189;
        case JobObjectIoAttribution:
          memset(v157, 0, 72);
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceSharedLite((PERESOURCE)(v15 + 56), 1u);
          LODWORD(v18) = PspQueryJobIoAttribution((__int64)v15, (__int64)v157);
          PspUnlockJob(v15, CurrentThread);
          v17 = v157;
          goto LABEL_186;
        case JobObjectMemoryPartitionInformation:
          v86 = *((_QWORD *)v15 + 192) != 0LL;
          v17 = (__int64 *)&v86;
          goto LABEL_186;
        case JobObjectContainerTelemetryId:
          v159 = *(_OWORD *)(v15 + 1240);
          v17 = (__int64 *)&v159;
          goto LABEL_186;
        case JobObjectEnergyTrackingState:
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceSharedLite((PERESOURCE)(v15 + 56), 1u);
          v108 = *((_QWORD *)v15 + 193);
          PspUnlockJob(v15, CurrentThread);
          v17 = &v108;
          goto LABEL_186;
        case JobObjectThreadImpersonationInformation:
          v87 = (v15[1308] & 2) != 0;
          v17 = (__int64 *)&v87;
          goto LABEL_186;
      }
      break;
    default:
      v12 = PspJobInfoLengths[v8];
      if ( JobInformationLength != v12 )
      {
        switch ( JobInformationClass )
        {
          case JobObjectBasicProcessIdList:
          case JobObjectSecurityLimitInformation:
          case JobObjectGroupInformation:
          case JobObjectGroupInformationEx:
          case JobObjectIoRateControlInformation:
          case JobObjectSiloRootDirectory:
            if ( JobInformationLength >= v12 )
              goto LABEL_20;
            return -1073741820;
          default:
            return -1073741820;
        }
      }
      goto LABEL_21;
  }
  return result;
}
