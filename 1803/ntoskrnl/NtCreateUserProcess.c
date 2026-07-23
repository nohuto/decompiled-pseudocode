/*
 * XREFs of NtCreateUserProcess @ 0x1404F200C
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     PspInsertThread @ 0x1404B7C74 (PspInsertThread.c)
 *     PspCreateObjectHandle @ 0x1404B84AC (PspCreateObjectHandle.c)
 *     PspMapThreadCreationFlags @ 0x1404B9C30 (PspMapThreadCreationFlags.c)
 *     PspDeleteCreateProcessContext @ 0x1404B9F44 (PspDeleteCreateProcessContext.c)
 *     PspBuildCreateProcessContext @ 0x1404BA110 (PspBuildCreateProcessContext.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1404D1CB0 (FsRtlFreeExtraCreateParameterList.c)
 *     PspInsertProcess @ 0x1404EABB0 (PspInsertProcess.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     MmCreateSpecialImageSection @ 0x1404F0B68 (MmCreateSpecialImageSection.c)
 *     SeCompareSigningLevels @ 0x1404F1880 (SeCompareSigningLevels.c)
 *     PspCaptureCreateInfo @ 0x1404F1F3C (PspCaptureCreateInfo.c)
 *     IoCreateFileEx @ 0x1404F2DE0 (IoCreateFileEx.c)
 *     PspUpdateCreateInfo @ 0x1404F3B54 (PspUpdateCreateInfo.c)
 *     PspCreateUserProcessEcp @ 0x1404F3DB8 (PspCreateUserProcessEcp.c)
 *     PspGetMemoryPartitionContext @ 0x1404F4070 (PspGetMemoryPartitionContext.c)
 *     SeQuerySigningPolicy @ 0x1404F40E0 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x1404F4708 (PspReferenceTokenForNewProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x1404F4784 (PspEstimateNewProcessServerSilo.c)
 *     PspRundownSingleProcess @ 0x1405322EC (PspRundownSingleProcess.c)
 *     PspCaptureProcessParameters @ 0x1405507BC (PspCaptureProcessParameters.c)
 *     PspValidateCreateProcessProtection @ 0x14055514C (PspValidateCreateProcessProtection.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140555328 (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x14055537C (PspCheckForInvalidAccessByProtection.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140577B58 (PspGetProcessProtectionRequirementsFromImage.c)
 *     SeQueryServerSiloToken @ 0x14057B7C0 (SeQueryServerSiloToken.c)
 *     PsTerminateProcess @ 0x14057FB00 (PsTerminateProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     PspGetContextThreadInternal @ 0x1405B83A0 (PspGetContextThreadInternal.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x1407922C8 (SeDuplicateTokenAndAddOriginClaim.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateUserProcess(
        PHANDLE ProcessHandle,
        PHANDLE ThreadHandle,
        ACCESS_MASK ProcessDesiredAccess,
        ACCESS_MASK ThreadDesiredAccess,
        POBJECT_ATTRIBUTES ProcessObjectAttributes,
        POBJECT_ATTRIBUTES ThreadObjectAttributes,
        ULONG ProcessFlags,
        ULONG ThreadFlags,
        PVOID ProcessParameters,
        PPS_CREATE_INFO CreateInfo,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  _BYTE *Process; // r13
  char PreviousMode; // r12
  ULONG v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // rcx
  ULONG v16; // eax
  NTSTATUS result; // eax
  NTSTATUS Info; // edi
  KPROCESSOR_MODE v19; // r14
  __int64 v20; // r8
  int v21; // r8d
  ULONG v22; // eax
  char v23; // r13
  bool v24; // bl
  PVOID v25; // rax
  char v26; // cl
  __int64 v27; // rdx
  int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r11
  __int64 *v33; // r15
  volatile signed __int64 *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  ULONG v38; // r13d
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  char v43; // al
  unsigned int v44; // r8d
  int v45; // edi
  __int64 v46; // rax
  int inserted; // r12d
  PVOID v48; // r15
  __int64 ProcessServerSilo; // rax
  _OWORD *v50; // rax
  __int64 v51; // r13
  bool v52; // r12
  __int64 v53; // rcx
  __int64 v54; // rax
  __int16 v55; // cx
  PS_PROTECTION v56; // al
  int v57; // r9d
  KPROCESSOR_MODE v58; // dl
  __int64 *FileAttributes; // [rsp+28h] [rbp-C10h]
  unsigned __int8 Source; // [rsp+80h] [rbp-BB8h]
  bool v61; // [rsp+84h] [rbp-BB4h]
  char v62; // [rsp+88h] [rbp-BB0h]
  char v63; // [rsp+89h] [rbp-BAFh]
  char v64; // [rsp+8Ah] [rbp-BAEh]
  _BYTE v65[4]; // [rsp+8Ch] [rbp-BACh] BYREF
  __int64 v66; // [rsp+90h] [rbp-BA8h] BYREF
  int v67[2]; // [rsp+98h] [rbp-BA0h]
  int v68; // [rsp+A0h] [rbp-B98h]
  ACCESS_MASK v69; // [rsp+A4h] [rbp-B94h]
  char v70[8]; // [rsp+A8h] [rbp-B90h]
  PVOID v71; // [rsp+B0h] [rbp-B88h] BYREF
  __int64 v72; // [rsp+B8h] [rbp-B80h] BYREF
  PVOID v73; // [rsp+C0h] [rbp-B78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-B70h]
  PVOID v75; // [rsp+D0h] [rbp-B68h] BYREF
  _DWORD v76[2]; // [rsp+D8h] [rbp-B60h] BYREF
  __int64 v77; // [rsp+E0h] [rbp-B58h]
  PHANDLE v78; // [rsp+E8h] [rbp-B50h]
  PVOID v79; // [rsp+F0h] [rbp-B48h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-B40h] BYREF
  PVOID Object; // [rsp+100h] [rbp-B38h] BYREF
  PVOID v82; // [rsp+108h] [rbp-B30h] BYREF
  char *v83; // [rsp+110h] [rbp-B28h]
  POBJECT_ATTRIBUTES v84; // [rsp+118h] [rbp-B20h]
  _BYTE *v85; // [rsp+120h] [rbp-B18h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+128h] [rbp-B10h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+158h] [rbp-AE0h] BYREF
  _BYTE DriverContext[40]; // [rsp+168h] [rbp-AD0h] BYREF
  __int64 v89[4]; // [rsp+190h] [rbp-AA8h] BYREF
  _BYTE v90[64]; // [rsp+1B0h] [rbp-A88h] BYREF
  __int64 v91[62]; // [rsp+1F0h] [rbp-A48h] BYREF
  struct _ACCESS_STATE v92[2]; // [rsp+3E0h] [rbp-858h] BYREF
  ULONG v93; // [rsp+560h] [rbp-6D8h]
  char v94; // [rsp+564h] [rbp-6D4h]
  HANDLE v95; // [rsp+568h] [rbp-6D0h]
  __int64 v96[48]; // [rsp+570h] [rbp-6C8h] BYREF
  int v97; // [rsp+6F0h] [rbp-548h]
  HANDLE v98; // [rsp+6F8h] [rbp-540h]
  __int64 v99; // [rsp+700h] [rbp-538h] BYREF
  __int64 v100[154]; // [rsp+720h] [rbp-518h] BYREF

  v68 = ThreadDesiredAccess;
  v69 = ProcessDesiredAccess;
  v77 = (__int64)ThreadHandle;
  v78 = ProcessHandle;
  v83 = (char *)ProcessObjectAttributes;
  v84 = ThreadObjectAttributes;
  *(_QWORD *)v70 = ProcessParameters;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *(_QWORD *)v67 = Process;
  v85 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v65[1] = PreviousMode;
  v75 = 0LL;
  v71 = 0LL;
  v61 = 0;
  memset(DriverContext, 0, sizeof(DriverContext));
  memset(v90, 0, sizeof(v90));
  memset(v100, 0, sizeof(v100));
  v13 = ProcessFlags;
  if ( (ProcessFlags & 0xFFFB6838) != 0 || (ThreadFlags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( (ProcessFlags & 0x8400) == 0x8400 )
    return -1073741776;
  v93 = 0;
  v94 = PreviousMode;
  if ( PreviousMode )
  {
    v14 = (__int64)v78;
    if ( (unsigned __int64)v78 >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = v77;
    if ( (unsigned __int64)v77 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
  }
  if ( ProcessObjectAttributes )
  {
    if ( PreviousMode && ((unsigned __int8)ProcessObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v16 = ProcessObjectAttributes->Attributes & 0x1DF2;
    else
      v16 = ProcessObjectAttributes->Attributes & 0x11FF2;
    v93 = v16;
  }
  memset(v91, 0, 0x1E8uLL);
  if ( !AttributeList
    || (result = PspBuildCreateProcessContext((__int64 *)AttributeList, PreviousMode, 0, (__int64)v91), result >= 0) )
  {
    if ( (ProcessFlags & 0x40) != 0 && (v91[0] & 0x2000000000000LL) != 0 && !LOBYTE(v91[47]) )
    {
      v13 = ProcessFlags & 0xFFFFFFBF;
      ProcessFlags &= ~0x40u;
      HIDWORD(v91[0]) &= ~0x20000u;
    }
    if ( (v13 & 4) == 0 && (v91[0] & 0x80000000000LL) != 0 || (v91[0] & 0x2000000000000LL) != 0 && (v13 & 0x40) == 0 )
      goto LABEL_127;
    Info = PspCaptureCreateInfo(PreviousMode, (unsigned __int64)CreateInfo, (__int64)v91);
    if ( Info >= 0 )
    {
      v19 = 1;
      if ( (v91[0] & 0x100000000LL) != 0 )
      {
        Info = ObpReferenceObjectByHandleWithTag(v91[15], 0x72437350u, (__int64)&v72, 0LL, 0LL);
        if ( Info < 0 )
          goto LABEL_96;
        Process = (_BYTE *)v72;
        v91[16] = v72;
      }
      else
      {
        v72 = (__int64)Process;
      }
      v91[57] = PspEstimateNewProcessServerSilo(Process, v91[49], HIDWORD(v91[50]));
      if ( (BYTE1(v91[1]) & 0xC) == 4
        && (Process != *(_BYTE **)v67 || (*(_DWORD *)(*(_QWORD *)v67 + 1740LL) & 0x1000) != 0) )
      {
LABEL_127:
        Info = -1073741811;
        goto LABEL_96;
      }
      LOBYTE(v20) = PreviousMode;
      Info = PspReferenceTokenForNewProcess(Process, v91[18], v20, &v91[19]);
      if ( Info >= 0 )
      {
        if ( v91[18] )
        {
          if ( (int)SeQueryServerSiloToken(v91[19], &v80) >= 0 )
          {
            v54 = v80;
            if ( v91[57] )
            {
              while ( v54 )
              {
                if ( v54 == v91[57] )
                  goto LABEL_28;
                v54 = *(_QWORD *)(v54 + 1072);
              }
              goto LABEL_127;
            }
          }
        }
LABEL_28:
        if ( (v91[0] & 0x2000000000LL) != 0 )
        {
          Source = (v91[0] & 0x2000000000000LL) != 0 ? LOBYTE(v91[47]) : 0;
          Info = SeQuerySigningPolicy(v91[19], &v91[29], (v13 >> 6) & 1);
          if ( Info >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            v22 = 1600;
            if ( PreviousMode != 1 )
              v22 = 576;
            ObjectAttributes.Attributes = v22;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v91[29];
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            Info = 0;
            if ( qword_1408613F0 )
              Info = qword_1408613F0(v91[19]);
            if ( Info >= 0 )
            {
              Info = PspGetMemoryPartitionContext((_DWORD)Process, v13, v91[49], HIDWORD(v91[50]), (__int64)&v75);
              if ( Info >= 0 )
              {
                Info = PspCreateUserProcessEcp(DriverContext, v91[19]);
                if ( Info >= 0 )
                {
                  Info = IoCreateFileEx(
                           (PHANDLE)&v91[21],
                           LODWORD(v91[20]) | 0x100020,
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
                  if ( Info < 0 && LODWORD(v91[20]) )
                    Info = IoCreateFileEx(
                             (PHANDLE)&v91[21],
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
                    v91[21] = 0LL;
                    v53 = 1LL;
LABEL_95:
                    PspUpdateCreateInfo(v53, v91, 0LL);
                  }
                  else
                  {
                    Info = ObReferenceObjectByHandle(
                             (HANDLE)v91[21],
                             0x100020u,
                             (POBJECT_TYPE)IoFileObjectType,
                             0,
                             &Object,
                             0LL);
                    v91[22] = (__int64)Object;
                    if ( Info < 0 )
                    {
                      v91[22] = 0LL;
                    }
                    else
                    {
                      ObjectAttributes.ObjectName = 0LL;
                      v23 = 1;
                      if ( v91[48] )
                        v23 = 5;
                      if ( v91[52] )
                      {
                        v24 = (int)SeDuplicateTokenAndAddOriginClaim(v91[19], v91[52], LODWORD(v91[53]), &v71) >= 0;
                        v61 = v24;
                      }
                      else
                      {
                        v24 = 0;
                      }
                      v25 = v71;
                      if ( !v24 )
                        v25 = (PVOID)v91[19];
                      v71 = v25;
                      v26 = v62;
                      while ( 1 )
                      {
                        Info = MmCreateSpecialImageSection(
                                 &v91[23],
                                 (int)&ObjectAttributes,
                                 (__int64)v71,
                                 v26,
                                 v91[21],
                                 v23);
                        if ( Info < 0 )
                        {
                          v91[23] = 0LL;
                          v53 = 2LL;
                          goto LABEL_95;
                        }
                        Info = ObReferenceObjectByHandle((HANDLE)v91[23], 8u, MmSectionObjectType, 0, &v82, 0LL);
                        v91[25] = (__int64)v82;
                        if ( Info < 0 )
                        {
                          v91[25] = 0LL;
                          goto LABEL_96;
                        }
                        LOBYTE(v27) = Source;
                        Info = PspGetProcessProtectionRequirementsFromImage(v82, v27, v65);
                        if ( Info < 0 )
                          goto LABEL_96;
                        if ( v65[0] == Source )
                          break;
                        Info = SeQuerySigningPolicy(v91[19], &v91[29], 1LL);
                        if ( Info < 0 )
                          goto LABEL_96;
                        if ( v64 == v62 )
                          break;
                        if ( (v62 & 0x30) != 0 && (v64 & 0x30) != (v62 & 0x30)
                          || !(unsigned int)SeCompareSigningLevels() )
                        {
                          goto LABEL_127;
                        }
                        ObCloseHandle((HANDLE)v91[23], 0);
                        ObfDereferenceObject((PVOID)v91[25]);
                        v91[23] = 0LL;
                        v91[25] = 0LL;
                        v26 = v64;
                        v62 = v64;
                      }
                      LOBYTE(v28) = PreviousMode;
                      Info = PspValidateCreateProcessProtection(v67[0], (int)v91, v28, v13, (PS_PROTECTION)Source);
                      if ( Info < 0 )
                        goto LABEL_96;
                      if ( (v13 & 0x40000) != 0
                        || (Source & 7) != 1
                        && (LOBYTE(v31) = Source,
                            LOBYTE(v30) = PreviousMode,
                            LOBYTE(v29) = *(_BYTE *)(v32 + 1738),
                            (unsigned __int8)PspCheckForInvalidAccessByProtection(v30, v29, v31)) )
                      {
                        LOBYTE(v91[1]) |= 8u;
                      }
                      LOBYTE(v30) = PreviousMode;
                      Info = PspCaptureProcessParameters(v30, *(_QWORD *)v70, v91);
                      if ( Info >= 0 )
                      {
                        v33 = &v99;
                        goto LABEL_57;
                      }
                      LOBYTE(v91[1]) &= ~4u;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_96;
        }
        if ( Process != *(_BYTE **)v67
          || !PreviousMode
          || *(_QWORD *)v70
          || (v91[1] & 0xC00) != 0
          || (v91[0] & 0x8000000000LL) != 0
          || (v91[0] & 0x2000000000000LL) != 0
          || (v91[1] & 0x10) != 0 )
        {
          goto LABEL_127;
        }
        LOBYTE(v91[1]) &= ~4u;
        v56.Level = Process[1738];
        Source = v56.Level;
        v63 = Process[1737];
        v62 = Process[1736];
        if ( (v13 & 0x40) != 0 && (v56.Level & 7) == 0 )
        {
          Info = -1073741790;
          goto LABEL_96;
        }
        LOBYTE(v21) = PreviousMode;
        Info = PspValidateCreateProcessProtection(v67[0], (int)v91, v21, v13, v56);
        if ( Info < 0 )
          goto LABEL_96;
        LODWORD(v100[6]) = 1048603;
        LOBYTE(v57) = 1;
        Info = PspGetContextThreadInternal((_DWORD)CurrentThread, (unsigned int)v100, 0, v57, 1);
        if ( Info < 0 )
          goto LABEL_96;
        v100[15] = 297LL;
        v33 = 0LL;
LABEL_57:
        Info = PspAllocateProcess(
                 v72,
                 PreviousMode,
                 v83,
                 Source,
                 v62,
                 v63,
                 (void *)v91[25],
                 (void *)v91[19],
                 ProcessFlags,
                 0,
                 (__int64)v91,
                 v91[18] != 0,
                 v75,
                 (__int64)v76,
                 &v73);
        if ( Info < 0 )
          goto LABEL_96;
        v34 = (volatile signed __int64 *)v73;
        if ( v91[25] )
        {
          v35 = *((_QWORD *)v73 + 133);
          if ( v35 && ((v55 = *(_WORD *)(v35 + 8), v55 == 332) || v55 == 452) )
            v36 = HIDWORD(v91[28]);
          else
            v36 = *((_QWORD *)v73 + 127);
          v100[6] = 0x1F800010000BLL;
          v100[31] = PspUserThreadStart;
          v100[16] = v91[6];
          v100[17] = v36;
          *(_DWORD *)((char *)&v100[7] + 2) = 2818091;
          *(_DWORD *)((char *)&v100[7] + 6) = 2818131;
          WORD1(v100[8]) = 43;
          LOWORD(v100[7]) = 51;
          LOWORD(v100[32]) = 639;
          LODWORD(v100[35]) = 8064;
        }
        ObfReferenceObjectWithTag(v73, 0x72437350u);
        if ( v33 )
        {
          *(_BYTE *)v33 = 0;
          v37 = v91[8];
          if ( v91[8] < 0x40000uLL )
            v37 = 0x40000LL;
          v33[3] = v37;
          v33[2] = v91[9];
          v33[1] = LODWORD(v91[7]);
        }
        *(_DWORD *)v70 = 0;
        PspMapThreadCreationFlags(ThreadFlags, (int *)&v66);
        if ( v76[0] )
        {
          *(_DWORD *)v70 = 2;
          LODWORD(v66) = v66 | 0x10;
        }
        v38 = ProcessFlags;
        if ( v76[1] )
          v38 = ProcessFlags | 0x400;
        v89[0] = (__int64)v90;
        LODWORD(v66) = v66 | 0x60;
        Info = PspAllocateThread(
                 (ULONG_PTR)v34,
                 (__int64)v100,
                 (__int64)v89,
                 0LL,
                 0LL,
                 (__int64)&v66,
                 (__int64)&v79,
                 (__int64)v33,
                 (__int64)v96);
        if ( Info < 0 )
        {
          if ( (_InterlockedExchangeAdd64(v34 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v34 + 91, v39, v41, v42);
          KeAbPostRelease((ULONG_PTR)(v34 + 91));
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          v34 = (volatile signed __int64 *)v73;
          PspRundownSingleProcess((ULONG_PTR)v73);
          v52 = v61;
          goto LABEL_85;
        }
        LOBYTE(v40) = PreviousMode;
        v43 = PsTestProtectedProcessIncompatibility(v40, *(_QWORD *)v67, v34);
        v44 = v69;
        if ( v43 )
        {
          if ( (v69 & 0x2000000) != 0 )
            v44 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)Source >> 4) + 4] & 0x1FFFFF | v69 & 0xFDFFFFFF;
          v45 = v68;
          if ( (v68 & 0x2000000) != 0 )
            v45 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)Source >> 4) + 8] & 0x1FFFFF | v68 & 0xFDFFFFFF;
        }
        else
        {
          v45 = v68;
        }
        if ( v91[26] )
          v46 = v91[26] + 112;
        else
          v46 = 0LL;
        inserted = PspInsertProcess((char *)v34, (struct _KPROCESS *)v72, v44, v38, (HANDLE)v91[17], v70[0], v46, v92);
        FileAttributes = v33;
        v48 = v79;
        Info = PspInsertThread(
                 (ULONG_PTR)v79,
                 (__int64)v34,
                 (__int64)v90,
                 &v66,
                 v45,
                 FileAttributes,
                 (__int64)v91,
                 0LL,
                 (__int64)v96,
                 (_QWORD *)v77,
                 (_OWORD *)v91[2]);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        if ( inserted < 0 )
        {
          PspRundownSingleProcess((ULONG_PTR)v34);
          Info = inserted;
          v52 = v61;
          goto LABEL_84;
        }
        if ( Info < 0 )
        {
          v52 = v61;
LABEL_83:
          if ( Info >= 0 )
          {
LABEL_84:
            ObfDereferenceObject(v48);
LABEL_85:
            ObfDereferenceObjectWithTag((PVOID)v34, 0x72437350u);
LABEL_86:
            if ( v75 )
              ObfDereferenceObjectWithTag(v75, 0x624A7350u);
            PspDeleteCreateProcessContext((__int64)v91);
            if ( *(_QWORD *)&DriverContext[8] )
              FsRtlFreeExtraCreateParameterList(*(PECP_LIST *)&DriverContext[8]);
            if ( v52 )
              ObfDereferenceObject(v71);
            return Info;
          }
LABEL_159:
          PsTerminateProcess(v34, (unsigned int)Info);
          goto LABEL_84;
        }
        ProcessServerSilo = PsGetProcessServerSilo((__int64)v34);
        if ( ProcessServerSilo != v91[57] )
        {
          Info = -1073741267;
          v52 = v61;
          goto LABEL_159;
        }
        Info = PspCreateObjectHandle((void *)v34, (__int64)v92, (struct _OBJECT_TYPE *)PsProcessType);
        if ( Info < 0 )
        {
          v52 = v61;
        }
        else
        {
          v50 = (_OWORD *)v91[4];
          if ( v91[4] )
          {
            *(_OWORD *)v91[4] = *(_OWORD *)&v91[6];
            v50[1] = *(_OWORD *)&v91[8];
            v50[2] = *(_OWORD *)&v91[10];
            v50[3] = *(_OWORD *)&v91[12];
          }
          *v78 = v95;
          v51 = *(_QWORD *)v67;
          v52 = v61;
          Info = PspUpdateCreateInfo(6LL, v91, v34);
          if ( Info >= 0 )
            goto LABEL_82;
          if ( (v93 & 0x200) != 0 || (v58 = 1, (*(_DWORD *)(v51 + 1740) & 0x1000) != 0) )
            v58 = 0;
          ObCloseHandle(v95, v58);
        }
        if ( (v97 & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)v67 + 1740LL) & 0x1000) != 0 )
          v19 = 0;
        ObCloseHandle(v98, v19);
LABEL_82:
        SepDeleteAccessState((__int64)v92);
        SeReleaseSubjectContext(&v92[0].SubjectSecurityContext);
        goto LABEL_83;
      }
      v91[19] = 0LL;
    }
LABEL_96:
    v52 = v61;
    goto LABEL_86;
  }
  return result;
}
