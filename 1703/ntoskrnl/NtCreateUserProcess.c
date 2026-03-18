/*
 * XREFs of NtCreateUserProcess @ 0x140544094
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     PsGetProcessServerSilo @ 0x140085020 (PsGetProcessServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SeQueryServerSiloToken @ 0x140452530 (SeQueryServerSiloToken.c)
 *     PspInsertProcess @ 0x14049CB2C (PspInsertProcess.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x1404EDB0C (PspEstimateNewProcessServerSilo.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PspGetContextThreadInternal @ 0x14053B2A0 (PspGetContextThreadInternal.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 *     PspCreateObjectHandle @ 0x140541060 (PspCreateObjectHandle.c)
 *     PspMapThreadCreationFlags @ 0x1405413F0 (PspMapThreadCreationFlags.c)
 *     PspDeleteCreateProcessContext @ 0x14054168C (PspDeleteCreateProcessContext.c)
 *     IoCreateFileEx @ 0x140541850 (IoCreateFileEx.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140542880 (FsRtlFreeExtraCreateParameterList.c)
 *     PspBuildCreateProcessContext @ 0x140542C84 (PspBuildCreateProcessContext.c)
 *     PspUpdateCreateInfo @ 0x140544DD0 (PspUpdateCreateInfo.c)
 *     PspCreateUserProcessEcp @ 0x140545044 (PspCreateUserProcessEcp.c)
 *     PspGetMemoryPartitionContext @ 0x140545308 (PspGetMemoryPartitionContext.c)
 *     SeQuerySigningPolicy @ 0x140545370 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x14054581C (PspReferenceTokenForNewProcess.c)
 *     PspCaptureCreateInfo @ 0x140545898 (PspCaptureCreateInfo.c)
 *     SeCompareSigningLevels @ 0x140545CB0 (SeCompareSigningLevels.c)
 *     MmCreateSpecialImageSection @ 0x140546050 (MmCreateSpecialImageSection.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14054633C (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x14054636C (PspCheckForInvalidAccessByProtection.c)
 *     PspCaptureProcessParameters @ 0x1405463E8 (PspCaptureProcessParameters.c)
 *     PspValidateCreateProcessProtection @ 0x140546440 (PspValidateCreateProcessProtection.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1405464A4 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 *     PsTerminateProcess @ 0x14054E978 (PsTerminateProcess.c)
 *     EtwTraceDeniedTokenCreation @ 0x14070A5D8 (EtwTraceDeniedTokenCreation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtCreateUserProcess(
        HANDLE *a1,
        __int64 a2,
        ACCESS_MASK a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11)
{
  struct _KPROCESS *Process; // r13
  char PreviousMode; // r15
  unsigned int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 result; // rax
  int Info; // edi
  KPROCESSOR_MODE v20; // r14
  __int64 v21; // r8
  int v22; // r8d
  ULONG v23; // eax
  int v24; // r9d
  int v25; // r12d
  char v26; // cl
  __int64 v27; // rdx
  unsigned __int8 v28; // bl
  int v29; // r8d
  unsigned __int8 v30; // bl
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r11
  __int64 v35; // rbx
  __int64 *v36; // r12
  int v37; // eax
  PVOID v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  char v43; // al
  ACCESS_MASK v44; // r8d
  ACCESS_MASK v45; // edi
  __int64 v46; // rax
  int inserted; // r13d
  PVOID v48; // r15
  __int64 ProcessServerSilo; // rax
  _OWORD *v50; // rax
  struct _KPROCESS *v51; // r13
  __int64 v52; // rcx
  __int64 v53; // rax
  __int16 v54; // cx
  __int64 v55; // rdx
  __int64 v56; // rcx
  char v57; // al
  KPROCESSOR_MODE v58; // al
  unsigned __int8 v59; // [rsp+80h] [rbp-B98h] BYREF
  char v60; // [rsp+81h] [rbp-B97h] BYREF
  char v61; // [rsp+82h] [rbp-B96h] BYREF
  char v62; // [rsp+83h] [rbp-B95h] BYREF
  _BYTE v63[4]; // [rsp+84h] [rbp-B94h] BYREF
  __int64 v64; // [rsp+88h] [rbp-B90h] BYREF
  struct _KPROCESS *v65; // [rsp+90h] [rbp-B88h]
  char v66[8]; // [rsp+98h] [rbp-B80h]
  int v67; // [rsp+A0h] [rbp-B78h]
  ACCESS_MASK v68; // [rsp+A4h] [rbp-B74h]
  PVOID v69; // [rsp+A8h] [rbp-B70h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-B68h]
  PVOID v71; // [rsp+B8h] [rbp-B60h] BYREF
  __int64 v72; // [rsp+C0h] [rbp-B58h] BYREF
  _DWORD v73[2]; // [rsp+C8h] [rbp-B50h] BYREF
  __int64 v74; // [rsp+D0h] [rbp-B48h]
  HANDLE *v75; // [rsp+D8h] [rbp-B40h]
  PVOID v76; // [rsp+E0h] [rbp-B38h] BYREF
  __int64 v77; // [rsp+E8h] [rbp-B30h] BYREF
  PVOID Object; // [rsp+F0h] [rbp-B28h] BYREF
  PVOID v79; // [rsp+F8h] [rbp-B20h] BYREF
  volatile signed __int32 *v80; // [rsp+100h] [rbp-B18h]
  __int64 v81; // [rsp+108h] [rbp-B10h]
  struct _KPROCESS *v82; // [rsp+110h] [rbp-B08h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+118h] [rbp-B00h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+148h] [rbp-AD0h] BYREF
  _BYTE DriverContext[40]; // [rsp+158h] [rbp-AC0h] BYREF
  __int64 v86; // [rsp+180h] [rbp-A98h] BYREF
  _BYTE v87[64]; // [rsp+1A0h] [rbp-A78h] BYREF
  __int64 v88[60]; // [rsp+1E0h] [rbp-A38h] BYREF
  struct _ACCESS_STATE v89[2]; // [rsp+3C0h] [rbp-858h] BYREF
  int v90; // [rsp+540h] [rbp-6D8h]
  char v91; // [rsp+544h] [rbp-6D4h]
  HANDLE v92; // [rsp+548h] [rbp-6D0h]
  struct _ACCESS_STATE AccessState; // [rsp+550h] [rbp-6C8h] BYREF
  int v94; // [rsp+6D0h] [rbp-548h]
  HANDLE v95; // [rsp+6D8h] [rbp-540h]
  __int64 v96; // [rsp+6E0h] [rbp-538h] BYREF
  __int64 v97[154]; // [rsp+700h] [rbp-518h] BYREF

  v67 = a4;
  v68 = a3;
  v74 = a2;
  v75 = a1;
  v80 = (volatile signed __int32 *)a5;
  v81 = a6;
  *(_QWORD *)v66 = a9;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v65 = Process;
  v82 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v63[1] = PreviousMode;
  v71 = 0LL;
  memset(DriverContext, 0, sizeof(DriverContext));
  memset(v87, 0, sizeof(v87));
  memset(v97, 0, sizeof(v97));
  v13 = a7;
  if ( (a7 & 0xFFFF6838) != 0 || (a8 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (a7 & 0x8400) == 0x8400 )
    return 3221225520LL;
  v90 = 0;
  v91 = PreviousMode;
  if ( PreviousMode )
  {
    v14 = (__int64)v75;
    if ( (unsigned __int64)v75 >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = v74;
    if ( (unsigned __int64)v74 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
  }
  if ( a5 )
  {
    if ( PreviousMode && (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v16 = *(_DWORD *)(a5 + 24) & 0x1DF2;
    else
      v16 = *(_DWORD *)(a5 + 24) & 0x11FF2;
    v90 = v16;
  }
  memset(v88, 0, 0x1D8uLL);
  if ( !a11 || (result = PspBuildCreateProcessContext(a11, PreviousMode, 0, (__int64)v88), (int)result >= 0) )
  {
    if ( (a7 & 0x40) != 0 && (v88[0] & 0x2000000000000LL) != 0 && !LOBYTE(v88[47]) )
    {
      v13 = a7 & 0xFFFFFFBF;
      a7 &= ~0x40u;
      HIDWORD(v88[0]) &= ~0x20000u;
    }
    if ( (v13 & 4) == 0 && (v88[0] & 0x80000000000LL) != 0 || (v88[0] & 0x2000000000000LL) != 0 && (v13 & 0x40) == 0 )
      goto LABEL_162;
    LOBYTE(v17) = PreviousMode;
    Info = PspCaptureCreateInfo(v17, a10, v88);
    if ( Info < 0 )
    {
LABEL_80:
      if ( v71 )
        ObfDereferenceObjectWithTag(v71, 0x624A7350u);
      PspDeleteCreateProcessContext((__int64)v88);
      if ( *(_QWORD *)&DriverContext[8] )
        FsRtlFreeExtraCreateParameterList(*(PECP_LIST *)&DriverContext[8]);
      return (unsigned int)Info;
    }
    v20 = 1;
    if ( (v88[0] & 0x100000000LL) != 0 )
    {
      Info = ObpReferenceObjectByHandleWithTag(
               v88[15],
               128,
               (__int64)PsProcessType,
               PreviousMode,
               1917023056,
               &v72,
               0LL,
               0LL);
      if ( Info < 0 )
        goto LABEL_80;
      Process = (struct _KPROCESS *)v72;
      v88[16] = v72;
    }
    else
    {
      v72 = (__int64)Process;
    }
    v88[57] = PspEstimateNewProcessServerSilo((__int64)Process, v88[49], HIDWORD(v88[50]));
    if ( (BYTE1(v88[1]) & 0xC) == 4 && (Process != v65 || v65 == PsInitialSystemProcess) )
    {
LABEL_162:
      Info = -1073741811;
      goto LABEL_80;
    }
    LOBYTE(v21) = PreviousMode;
    Info = PspReferenceTokenForNewProcess(Process, v88[18], v21, &v88[19]);
    if ( Info < 0 )
    {
      v88[19] = 0LL;
      goto LABEL_80;
    }
    if ( v88[18] )
    {
      if ( (int)SeQueryServerSiloToken(v88[19], &v77) >= 0 )
      {
        v53 = v77;
        if ( v88[57] )
        {
          while ( v53 )
          {
            if ( v53 == v88[57] )
              goto LABEL_28;
            v53 = *(_QWORD *)(v53 + 1072);
          }
          goto LABEL_162;
        }
      }
    }
LABEL_28:
    if ( (v88[0] & 0x2000000000LL) != 0 )
    {
      v59 = (v88[0] & 0x2000000000000LL) != 0 ? LOBYTE(v88[47]) : 0;
      Info = SeQuerySigningPolicy(
               (PACCESS_TOKEN)v88[19],
               (PCUNICODE_STRING)&v88[29],
               (ULONG_PTR)&v60,
               (__int64)&v61,
               (__int64)&v59);
      if ( Info >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        v23 = 1600;
        if ( PreviousMode != 1 )
          v23 = 576;
        ObjectAttributes.Attributes = v23;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v88[29];
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        Info = 0;
        if ( qword_1407AC400 )
          Info = qword_1407AC400(v88[19]);
        if ( Info >= 0 )
        {
          Info = PspGetMemoryPartitionContext(Process, v13, v88, &v71);
          if ( Info >= 0 )
          {
            Info = PspCreateUserProcessEcp(DriverContext, v88[19]);
            if ( Info >= 0 )
            {
              Info = IoCreateFileEx(
                       (PHANDLE)&v88[21],
                       LODWORD(v88[20]) | 0x100020,
                       &ObjectAttributes,
                       &IoStatusBlock,
                       0LL,
                       0x80u,
                       5u,
                       1u,
                       0x60u,
                       0LL,
                       0,
                       CreateFileTypeNone,
                       0LL,
                       0,
                       (PIO_DRIVER_CREATE_CONTEXT)DriverContext);
              if ( Info < 0 && LODWORD(v88[20]) )
                Info = IoCreateFileEx(
                         (PHANDLE)&v88[21],
                         0x100020u,
                         &ObjectAttributes,
                         &IoStatusBlock,
                         0LL,
                         0x80u,
                         5u,
                         1u,
                         0x60u,
                         0LL,
                         0,
                         CreateFileTypeNone,
                         0LL,
                         0,
                         (PIO_DRIVER_CREATE_CONTEXT)DriverContext);
              if ( Info < 0 )
              {
                v88[21] = 0LL;
                v52 = 1LL;
LABEL_87:
                PspUpdateCreateInfo(v52, v88, 0LL);
              }
              else
              {
                Info = ObReferenceObjectByHandle(
                         (HANDLE)v88[21],
                         0x100020u,
                         (POBJECT_TYPE)IoFileObjectType,
                         0,
                         &Object,
                         0LL);
                v88[22] = (__int64)Object;
                if ( Info < 0 )
                {
                  v88[22] = 0LL;
                }
                else
                {
                  ObjectAttributes.ObjectName = 0LL;
                  v25 = 1;
                  if ( v88[48] && *(_QWORD *)v88[48] )
                    v25 = 5;
                  v26 = v60;
                  while ( 1 )
                  {
                    LOBYTE(v24) = v26;
                    Info = MmCreateSpecialImageSection(
                             (unsigned int)&v88[23],
                             (unsigned int)&ObjectAttributes,
                             v88[19],
                             v24,
                             v88[21],
                             v25);
                    if ( Info < 0 )
                    {
                      v88[23] = 0LL;
                      v52 = 2LL;
                      goto LABEL_87;
                    }
                    Info = ObReferenceObjectByHandle((HANDLE)v88[23], 8u, MmSectionObjectType, 0, &v79, 0LL);
                    v88[25] = (__int64)v79;
                    if ( Info < 0 )
                    {
                      v88[25] = 0LL;
                      goto LABEL_80;
                    }
                    v28 = v59;
                    LOBYTE(v27) = v59;
                    Info = PspGetProcessProtectionRequirementsFromImage(v79, v27, v63);
                    if ( Info < 0 )
                      goto LABEL_80;
                    if ( v63[0] == v28 )
                      break;
                    Info = SeQuerySigningPolicy(
                             (PACCESS_TOKEN)v88[19],
                             (PCUNICODE_STRING)&v88[29],
                             (ULONG_PTR)&v62,
                             (__int64)&v61,
                             (__int64)&v59);
                    if ( Info < 0 )
                      goto LABEL_80;
                    LOBYTE(v56) = v62;
                    if ( v62 == v60 )
                      break;
                    if ( (v60 & 0x30) != 0 && (v62 & 0x30) != (v60 & 0x30) )
                      goto LABEL_162;
                    LOBYTE(v55) = v60;
                    if ( !(unsigned int)SeCompareSigningLevels(v56, v55) )
                      goto LABEL_162;
                    ObCloseHandle((HANDLE)v88[23], 0);
                    ObfDereferenceObject((PVOID)v88[25]);
                    v88[23] = 0LL;
                    v88[25] = 0LL;
                    v26 = v62;
                    v60 = v62;
                  }
                  v30 = v59;
                  LOBYTE(v29) = PreviousMode;
                  Info = PspValidateCreateProcessProtection((_DWORD)v65, (unsigned int)v88, v29, a7, v59);
                  if ( Info < 0 )
                    goto LABEL_80;
                  if ( (v30 & 7) != 1 )
                  {
                    LOBYTE(v33) = v30;
                    LOBYTE(v32) = PreviousMode;
                    LOBYTE(v31) = *(_BYTE *)(v34 + 1738);
                    if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(v32, v31, v33) )
                      LOBYTE(v88[1]) |= 8u;
                  }
                  v35 = *(_QWORD *)v66;
                  LOBYTE(v32) = PreviousMode;
                  Info = PspCaptureProcessParameters(v32, *(_QWORD *)v66, v88);
                  if ( Info >= 0 )
                  {
                    v36 = &v96;
                    goto LABEL_52;
                  }
                  LOBYTE(v88[1]) &= ~4u;
                }
              }
            }
          }
        }
      }
      goto LABEL_80;
    }
    if ( Process != v65
      || !PreviousMode
      || *(_QWORD *)v66
      || (v88[1] & 0xC00) != 0
      || (v88[0] & 0x8000000000LL) != 0
      || (v88[0] & 0x2000000000000LL) != 0
      || (v88[1] & 0x10) != 0 )
    {
      goto LABEL_162;
    }
    LOBYTE(v88[1]) &= ~4u;
    v57 = BYTE2(Process[2].ActiveProcessors.Bitmap[0]);
    v59 = v57;
    v61 = BYTE1(Process[2].ActiveProcessors.Bitmap[0]);
    v60 = Process[2].ActiveProcessors.Bitmap[0];
    if ( (v13 & 0x40) != 0 && (v57 & 7) == 0 )
    {
      Info = -1073741790;
      goto LABEL_80;
    }
    LOBYTE(v22) = PreviousMode;
    Info = PspValidateCreateProcessProtection((_DWORD)v65, (unsigned int)v88, v22, v13, v57);
    if ( Info < 0 )
      goto LABEL_80;
    LODWORD(v97[6]) = 1048603;
    Info = PspGetContextThreadInternal((__int64)CurrentThread, (__int64)v97, 0, 1, 1);
    if ( Info < 0 )
      goto LABEL_80;
    v97[15] = 297LL;
    v36 = 0LL;
    v35 = *(_QWORD *)v66;
LABEL_52:
    v37 = PspAllocateProcess(
            (ULONG_PTR)Process,
            PreviousMode,
            v80,
            v59,
            v60,
            v61,
            (void *)v88[25],
            (void *)v88[19],
            a7,
            (__int64)v88,
            v88[18] != 0,
            (ULONG_PTR **)v71,
            (__int64)v73,
            &v69);
    Info = v37;
    if ( v37 < 0 )
    {
      if ( v37 == -1073740643 )
        EtwTraceDeniedTokenCreation(Process, v35);
      goto LABEL_80;
    }
    v38 = v69;
    if ( v88[25] )
    {
      v39 = *((_QWORD *)v69 + 133);
      if ( v39 && ((v54 = *(_WORD *)(v39 + 8), v54 == 332) || v54 == 452) )
        v40 = HIDWORD(v88[28]);
      else
        v40 = *((_QWORD *)v69 + 127);
      v97[6] = 0x1F800010000BLL;
      v97[31] = PspUserThreadStart;
      v97[16] = v88[6];
      v97[17] = v40;
      *(_DWORD *)((char *)&v97[7] + 2) = 2818091;
      *(_DWORD *)((char *)&v97[7] + 6) = 2818131;
      WORD1(v97[8]) = 43;
      LOWORD(v97[7]) = 51;
      LOWORD(v97[32]) = 639;
      LODWORD(v97[35]) = 8064;
    }
    ObfReferenceObjectWithTag(v69, 0x72437350u);
    if ( v36 )
    {
      *(_BYTE *)v36 = 0;
      v41 = v88[8];
      if ( v88[8] < 0x40000uLL )
        v41 = 0x40000LL;
      v36[3] = v41;
      v36[2] = v88[9];
      v36[1] = LODWORD(v88[7]);
    }
    *(_DWORD *)v66 = 0;
    PspMapThreadCreationFlags(a8, &v64);
    if ( v73[0] )
    {
      *(_DWORD *)v66 = 2;
      LODWORD(v64) = v64 | 0x10;
    }
    if ( v73[1] )
      a7 |= 0x400u;
    v86 = (__int64)v87;
    LODWORD(v64) = v64 | 0x60;
    Info = PspAllocateThread(
             (struct _KPROCESS *)v38,
             v81,
             PreviousMode,
             (__int64)v88,
             v97,
             (_QWORD **)&v86,
             0LL,
             0LL,
             (int *)&v64,
             &v76,
             v36,
             (__int64)&AccessState);
    if ( Info < 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v38 + 91);
      KeAbPostRelease((ULONG_PTR)v38 + 728);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v38 = v69;
      PspRundownSingleProcess((ULONG_PTR)v69);
      goto LABEL_79;
    }
    LOBYTE(v42) = PreviousMode;
    v43 = PsTestProtectedProcessIncompatibility(v42, v65, v38);
    v44 = v68;
    if ( v43 )
    {
      if ( (v68 & 0x2000000) != 0 )
        v44 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v59 >> 4) + 4] & 0x1FFFFF | v68 & 0xFDFFFFFF;
      v45 = v67;
      if ( (v67 & 0x2000000) != 0 )
        v45 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v59 >> 4) + 8] & 0x1FFFFF | v67 & 0xFDFFFFFF;
    }
    else
    {
      v45 = v67;
    }
    if ( v88[26] )
      v46 = v88[26] + 112;
    else
      v46 = 0LL;
    inserted = PspInsertProcess((char *)v38, (__int64)Process, v44, a7, (HANDLE)v88[17], v66[0], v46, v89);
    v48 = v76;
    Info = PspInsertThread(
             v76,
             (PEPROCESS)v38,
             (__int64)v87,
             &v64,
             v45,
             v36,
             (__int64)v88,
             0LL,
             &AccessState,
             (PVOID *)v74,
             (_OWORD *)v88[2]);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    if ( inserted < 0 )
    {
      PspRundownSingleProcess((ULONG_PTR)v38);
      Info = inserted;
      goto LABEL_78;
    }
    if ( Info < 0 )
    {
LABEL_161:
      PsTerminateProcess(v38, (unsigned int)Info);
      goto LABEL_78;
    }
    ProcessServerSilo = PsGetProcessServerSilo((__int64)v38);
    if ( ProcessServerSilo != v88[57] )
    {
      Info = -1073741267;
      goto LABEL_161;
    }
    Info = PspCreateObjectHandle(v38, (__int64)v89, (struct _OBJECT_TYPE *)PsProcessType);
    if ( Info >= 0 )
    {
      v50 = (_OWORD *)v88[4];
      if ( v88[4] )
      {
        *(_OWORD *)v88[4] = *(_OWORD *)&v88[6];
        v50[1] = *(_OWORD *)&v88[8];
        v50[2] = *(_OWORD *)&v88[10];
        v50[3] = *(_OWORD *)&v88[12];
      }
      *v75 = v92;
      v51 = v65;
      Info = PspUpdateCreateInfo(6LL, v88, v38);
      if ( Info >= 0 )
      {
LABEL_77:
        SepDeleteAccessState((__int64)v89);
        SeReleaseSubjectContext(&v89[0].SubjectSecurityContext);
        if ( Info >= 0 )
        {
LABEL_78:
          ObfDereferenceObject(v48);
LABEL_79:
          ObfDereferenceObjectWithTag(v38, 0x72437350u);
          goto LABEL_80;
        }
        goto LABEL_161;
      }
      if ( (v90 & 0x200) != 0 || (v58 = 1, v51 == PsInitialSystemProcess) )
        v58 = 0;
      ObCloseHandle(v92, v58);
    }
    if ( (v94 & 0x200) != 0 || v65 == PsInitialSystemProcess )
      v20 = 0;
    ObCloseHandle(v95, v20);
    goto LABEL_77;
  }
  return result;
}
