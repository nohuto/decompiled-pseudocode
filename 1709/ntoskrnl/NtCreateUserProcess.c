/*
 * XREFs of NtCreateUserProcess @ 0x14053B4F4
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     PspMapThreadCreationFlags @ 0x140492E50 (PspMapThreadCreationFlags.c)
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 *     PspGetContextThreadInternal @ 0x14049D7A0 (PspGetContextThreadInternal.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     PspCreateObjectHandle @ 0x1404D5D14 (PspCreateObjectHandle.c)
 *     PspRundownSingleProcess @ 0x1404DAA68 (PspRundownSingleProcess.c)
 *     SeCompareSigningLevels @ 0x1405040A0 (SeCompareSigningLevels.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140538F14 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x140538F44 (PspValidateCreateProcessProtection.c)
 *     PspCaptureProcessParameters @ 0x140538FA8 (PspCaptureProcessParameters.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14053919C (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1405391CC (PspCheckForInvalidAccessByProtection.c)
 *     PspInsertProcess @ 0x140539300 (PspInsertProcess.c)
 *     MmCreateSpecialImageSection @ 0x14053A36C (MmCreateSpecialImageSection.c)
 *     PspCaptureCreateInfo @ 0x14053A794 (PspCaptureCreateInfo.c)
 *     PspEstimateNewProcessServerSilo @ 0x14053A85C (PspEstimateNewProcessServerSilo.c)
 *     PspReferenceTokenForNewProcess @ 0x14053A8C4 (PspReferenceTokenForNewProcess.c)
 *     SeQuerySigningPolicy @ 0x14053A940 (SeQuerySigningPolicy.c)
 *     PspGetMemoryPartitionContext @ 0x14053AF58 (PspGetMemoryPartitionContext.c)
 *     PspCreateUserProcessEcp @ 0x14053AFC8 (PspCreateUserProcessEcp.c)
 *     PspUpdateCreateInfo @ 0x14053B280 (PspUpdateCreateInfo.c)
 *     IoCreateFileEx @ 0x14053C540 (IoCreateFileEx.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14053D570 (FsRtlFreeExtraCreateParameterList.c)
 *     PspBuildCreateProcessContext @ 0x14053D9A0 (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x14053EE70 (PspDeleteCreateProcessContext.c)
 *     SeQueryServerSiloToken @ 0x1405911E0 (SeQueryServerSiloToken.c)
 *     PsTerminateProcess @ 0x140596078 (PsTerminateProcess.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x14072DFDC (SeDuplicateTokenAndAddOriginClaim.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // r15
  char PreviousMode; // r12
  ULONG v14; // r13d
  __int64 v15; // rcx
  __int64 v16; // rcx
  ULONG v17; // eax
  __int64 v18; // rdx
  NTSTATUS result; // eax
  NTSTATUS Info; // esi
  KPROCESSOR_MODE v21; // r14
  ULONG v22; // eax
  char v23; // r15
  int v24; // ebx
  PVOID v25; // rax
  char v26; // cl
  unsigned __int8 Level; // bl
  PS_PROTECTION *v28; // r11
  __int64 *v29; // r15
  PVOID v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  ULONG v34; // r13d
  __int64 v35; // rcx
  bool v36; // al
  ACCESS_MASK v37; // r8d
  ACCESS_MASK v38; // esi
  __int64 v39; // rax
  int inserted; // r12d
  PVOID v41; // r15
  __int64 ProcessServerSilo; // rax
  _OWORD *v43; // rax
  __int64 v44; // r13
  char v45; // r12
  int v46; // ecx
  __int64 v47; // rax
  __int16 v48; // cx
  int v49; // eax
  unsigned __int8 v50; // al
  KPROCESSOR_MODE v51; // dl
  __int64 *FileAttributes; // [rsp+28h] [rbp-C10h]
  PS_PROTECTION Source; // [rsp+80h] [rbp-BB8h] BYREF
  int v54; // [rsp+84h] [rbp-BB4h]
  char v55; // [rsp+88h] [rbp-BB0h] BYREF
  char v56; // [rsp+89h] [rbp-BAFh] BYREF
  char v57; // [rsp+8Ah] [rbp-BAEh] BYREF
  char v58; // [rsp+8Bh] [rbp-BADh]
  unsigned __int8 v59; // [rsp+8Ch] [rbp-BACh]
  char v60; // [rsp+8Dh] [rbp-BABh]
  __int64 v61; // [rsp+90h] [rbp-BA8h] BYREF
  int v62[2]; // [rsp+98h] [rbp-BA0h]
  int v63; // [rsp+A0h] [rbp-B98h]
  ACCESS_MASK v64; // [rsp+A4h] [rbp-B94h]
  char v65[8]; // [rsp+A8h] [rbp-B90h]
  PVOID v66; // [rsp+B0h] [rbp-B88h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-B80h] BYREF
  PVOID v68; // [rsp+C0h] [rbp-B78h] BYREF
  struct _KTHREAD *v69; // [rsp+C8h] [rbp-B70h]
  PVOID v70; // [rsp+D0h] [rbp-B68h] BYREF
  _DWORD v71[2]; // [rsp+D8h] [rbp-B60h] BYREF
  __int64 v72; // [rsp+E0h] [rbp-B58h]
  PHANDLE v73; // [rsp+E8h] [rbp-B50h]
  PVOID v74; // [rsp+F0h] [rbp-B48h] BYREF
  __int64 v75; // [rsp+F8h] [rbp-B40h] BYREF
  PVOID Object; // [rsp+100h] [rbp-B38h] BYREF
  PVOID v77; // [rsp+108h] [rbp-B30h] BYREF
  POBJECT_ATTRIBUTES v78; // [rsp+110h] [rbp-B28h]
  int *v79; // [rsp+118h] [rbp-B20h]
  __int64 v80; // [rsp+120h] [rbp-B18h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+128h] [rbp-B10h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+158h] [rbp-AE0h] BYREF
  _BYTE DriverContext[40]; // [rsp+168h] [rbp-AD0h] BYREF
  __int64 v84[4]; // [rsp+190h] [rbp-AA8h] BYREF
  _BYTE v85[64]; // [rsp+1B0h] [rbp-A88h] BYREF
  __int64 v86[62]; // [rsp+1F0h] [rbp-A48h] BYREF
  struct _ACCESS_STATE v87; // [rsp+3E0h] [rbp-858h] BYREF
  ULONG v88; // [rsp+560h] [rbp-6D8h]
  char v89; // [rsp+564h] [rbp-6D4h]
  HANDLE v90; // [rsp+568h] [rbp-6D0h]
  struct _ACCESS_STATE AccessState; // [rsp+570h] [rbp-6C8h] BYREF
  int v92; // [rsp+6F0h] [rbp-548h]
  HANDLE v93; // [rsp+6F8h] [rbp-540h]
  __int64 v94; // [rsp+700h] [rbp-538h] BYREF
  __int64 v95[154]; // [rsp+720h] [rbp-518h] BYREF

  v63 = ThreadDesiredAccess;
  v64 = ProcessDesiredAccess;
  v72 = (__int64)ThreadHandle;
  v73 = ProcessHandle;
  v78 = ProcessObjectAttributes;
  v79 = (int *)ThreadObjectAttributes;
  *(_QWORD *)v65 = ProcessParameters;
  CurrentThread = KeGetCurrentThread();
  v69 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  *(_QWORD *)v62 = Process;
  v80 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v60 = PreviousMode;
  v70 = 0LL;
  v66 = 0LL;
  LOBYTE(CurrentThread) = 0;
  v54 = (int)CurrentThread;
  v58 = 0;
  memset(DriverContext, 0, sizeof(DriverContext));
  memset(v85, 0, sizeof(v85));
  memset(v95, 0, sizeof(v95));
  v14 = ProcessFlags;
  if ( (ProcessFlags & 0xFFFB6838) != 0 || (ThreadFlags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( (ProcessFlags & 0x8400) == 0x8400 )
    return -1073741776;
  v88 = 0;
  v89 = PreviousMode;
  if ( PreviousMode )
  {
    v15 = (__int64)v73;
    if ( (unsigned __int64)v73 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = v72;
    if ( (unsigned __int64)v72 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  if ( ProcessObjectAttributes )
  {
    if ( PreviousMode && ((unsigned __int8)ProcessObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v17 = ProcessObjectAttributes->Attributes & 0x1DF2;
    else
      v17 = ProcessObjectAttributes->Attributes & 0x11FF2;
    v88 = v17;
  }
  memset(v86, 0, 0x1E8uLL);
  if ( !AttributeList
    || (LOBYTE(v18) = PreviousMode, result = PspBuildCreateProcessContext(AttributeList, v18, 0LL, v86), result >= 0) )
  {
    if ( (ProcessFlags & 0x40) != 0 && (v86[0] & 0x2000000000000LL) != 0 && !LOBYTE(v86[47]) )
    {
      v14 = ProcessFlags & 0xFFFFFFBF;
      ProcessFlags &= ~0x40u;
      HIDWORD(v86[0]) &= ~0x20000u;
    }
    if ( (v14 & 4) == 0 && (v86[0] & 0x80000000000LL) != 0 || (v86[0] & 0x2000000000000LL) != 0 && (v14 & 0x40) == 0 )
      goto LABEL_175;
    Info = PspCaptureCreateInfo(PreviousMode, (unsigned __int64)CreateInfo, (__int64)v86);
    if ( Info >= 0 )
    {
      v21 = 1;
      if ( (v86[0] & 0x100000000LL) != 0 )
      {
        Info = ObpReferenceObjectByHandleWithTag(
                 v86[15],
                 128,
                 (__int64)PsProcessType,
                 PreviousMode,
                 1917023056,
                 &v67,
                 0LL,
                 0LL);
        if ( Info < 0 )
          goto LABEL_95;
        Process = v67;
        v86[16] = v67;
      }
      else
      {
        v67 = Process;
      }
      v86[57] = PspEstimateNewProcessServerSilo(Process, v86[49], HIDWORD(v86[50]));
      if ( (BYTE1(v86[1]) & 0xC) == 4
        && (Process != *(_QWORD *)v62 || (*(_DWORD *)(*(_QWORD *)v62 + 1740LL) & 0x1000) != 0) )
      {
LABEL_175:
        Info = -1073741811;
        goto LABEL_95;
      }
      Info = PspReferenceTokenForNewProcess((struct _KPROCESS *)Process, (void *)v86[18], PreviousMode, &v86[19]);
      if ( Info >= 0 )
      {
        if ( v86[18] )
        {
          if ( (int)SeQueryServerSiloToken(v86[19], &v75) >= 0 )
          {
            v47 = v75;
            if ( v86[57] )
            {
              while ( v47 )
              {
                if ( v47 == v86[57] )
                  goto LABEL_28;
                v47 = *(_QWORD *)(v47 + 1072);
              }
              goto LABEL_175;
            }
          }
        }
LABEL_28:
        if ( (v86[0] & 0x2000000000LL) != 0 )
        {
          Source.Level = (v86[0] & 0x2000000000000LL) != 0 ? LOBYTE(v86[47]) : 0;
          Info = SeQuerySigningPolicy(
                   (void *)v86[19],
                   (UNICODE_STRING *)&v86[29],
                   (v14 >> 6) & 1,
                   Source.Level,
                   (unsigned __int8 *)&v55,
                   (unsigned __int8 *)&v56,
                   &Source.Level);
          if ( Info >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            v22 = 1600;
            if ( PreviousMode != 1 )
              v22 = 576;
            ObjectAttributes.Attributes = v22;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v86[29];
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            Info = 0;
            if ( qword_1407F33F0 )
              Info = qword_1407F33F0(v86[19]);
            if ( Info >= 0 )
            {
              Info = PspGetMemoryPartitionContext(Process, v14, v86[49], HIDWORD(v86[50]), &v70);
              if ( Info >= 0 )
              {
                Info = PspCreateUserProcessEcp(DriverContext, v86[19]);
                if ( Info >= 0 )
                {
                  Info = IoCreateFileEx(
                           (PHANDLE)&v86[21],
                           LODWORD(v86[20]) | 0x100020,
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
                  if ( Info < 0 && LODWORD(v86[20]) )
                    Info = IoCreateFileEx(
                             (PHANDLE)&v86[21],
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
                    v86[21] = 0LL;
                    v46 = 1;
LABEL_94:
                    PspUpdateCreateInfo(v46, (__int64)v86, 0LL);
                  }
                  else
                  {
                    Info = ObReferenceObjectByHandle(
                             (HANDLE)v86[21],
                             0x100020u,
                             (POBJECT_TYPE)IoFileObjectType,
                             0,
                             &Object,
                             0LL);
                    v86[22] = (__int64)Object;
                    if ( Info < 0 )
                    {
                      v86[22] = 0LL;
                    }
                    else
                    {
                      ObjectAttributes.ObjectName = 0LL;
                      v23 = 1;
                      if ( v86[48] && *(_QWORD *)v86[48] )
                        v23 = 5;
                      if ( v86[52] )
                      {
                        v49 = SeDuplicateTokenAndAddOriginClaim(v86[19], v86[52], LODWORD(v86[53]), &v66);
                        v24 = (unsigned __int8)v54;
                        if ( v49 >= 0 )
                          v24 = 1;
                        v54 = v24;
                        v58 = v24;
                      }
                      else
                      {
                        LOBYTE(v24) = v54;
                      }
                      v25 = v66;
                      if ( !(_BYTE)v24 )
                        v25 = (PVOID)v86[19];
                      v66 = v25;
                      v26 = v55;
                      while ( 1 )
                      {
                        Info = MmCreateSpecialImageSection(
                                 &v86[23],
                                 (int)&ObjectAttributes,
                                 (__int64)v66,
                                 v26,
                                 v86[21],
                                 v23);
                        if ( Info < 0 )
                        {
                          v86[23] = 0LL;
                          v46 = 2;
                          goto LABEL_94;
                        }
                        Info = ObReferenceObjectByHandle((HANDLE)v86[23], 8u, MmSectionObjectType, 0, &v77, 0LL);
                        v86[25] = (__int64)v77;
                        if ( Info < 0 )
                        {
                          v86[25] = 0LL;
                          goto LABEL_95;
                        }
                        Level = Source.Level;
                        Info = PspGetProcessProtectionRequirementsFromImage((__int64)v77);
                        if ( Info < 0 )
                          goto LABEL_95;
                        if ( v59 == Level )
                          break;
                        Info = SeQuerySigningPolicy(
                                 (void *)v86[19],
                                 (UNICODE_STRING *)&v86[29],
                                 1u,
                                 v59,
                                 (unsigned __int8 *)&v57,
                                 (unsigned __int8 *)&v56,
                                 &Source.Level);
                        if ( Info < 0 )
                          goto LABEL_95;
                        if ( v57 == v55 )
                          break;
                        if ( (v55 & 0x30) != 0 && (v57 & 0x30) != (v55 & 0x30)
                          || !(unsigned int)SeCompareSigningLevels() )
                        {
                          goto LABEL_175;
                        }
                        ObCloseHandle((HANDLE)v86[23], 0);
                        ObfDereferenceObject((PVOID)v86[25]);
                        v86[23] = 0LL;
                        v86[25] = 0LL;
                        v26 = v57;
                        v55 = v57;
                      }
                      Info = PspValidateCreateProcessProtection(
                               *(__int64 *)v62,
                               (__int64)v86,
                               PreviousMode,
                               v14,
                               Source);
                      if ( Info < 0 )
                        goto LABEL_95;
                      if ( (ProcessFlags & 0x40000) != 0
                        || (Source.Level & 7) != 1
                        && PspCheckForInvalidAccessByProtection(PreviousMode, v28[1738], Source) )
                      {
                        LOBYTE(v86[1]) |= 8u;
                      }
                      Info = PspCaptureProcessParameters(PreviousMode, *(__int64 *)v65, (__int64)v86);
                      if ( Info >= 0 )
                      {
                        v29 = &v94;
                        goto LABEL_56;
                      }
                      LOBYTE(v86[1]) &= ~4u;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_95;
        }
        if ( Process != *(_QWORD *)v62
          || !PreviousMode
          || *(_QWORD *)v65
          || (v86[1] & 0xC00) != 0
          || (v86[0] & 0x8000000000LL) != 0
          || (v86[0] & 0x2000000000000LL) != 0
          || (v86[1] & 0x10) != 0 )
        {
          goto LABEL_175;
        }
        LOBYTE(v86[1]) &= ~4u;
        v50 = *(_BYTE *)(Process + 1738);
        Source.Level = v50;
        v56 = *(_BYTE *)(Process + 1737);
        v55 = *(_BYTE *)(Process + 1736);
        if ( (v14 & 0x40) != 0 && (v50 & 7) == 0 )
        {
          Info = -1073741790;
          goto LABEL_95;
        }
        Info = PspValidateCreateProcessProtection(*(__int64 *)v62, (__int64)v86, PreviousMode, v14, (PS_PROTECTION)v50);
        if ( Info < 0 )
          goto LABEL_95;
        LODWORD(v95[6]) = 1048603;
        Info = PspGetContextThreadInternal((__int64)v69, (__int64)v95, 0, 1, 1);
        if ( Info < 0 )
          goto LABEL_95;
        v95[15] = 297LL;
        v29 = 0LL;
LABEL_56:
        Info = PspAllocateProcess(
                 v67,
                 PreviousMode,
                 v78,
                 Source.Level,
                 v55,
                 v56,
                 (void *)v86[25],
                 (void *)v86[19],
                 ProcessFlags,
                 0,
                 (__int64)v86,
                 v86[18] != 0,
                 (char *)v70,
                 (__int64)v71,
                 &v68);
        if ( Info < 0 )
          goto LABEL_95;
        v30 = v68;
        if ( v86[25] )
        {
          v31 = *((_QWORD *)v68 + 133);
          if ( v31 && ((v48 = *(_WORD *)(v31 + 8), v48 == 332) || v48 == 452) )
            v32 = HIDWORD(v86[28]);
          else
            v32 = *((_QWORD *)v68 + 127);
          v95[6] = 0x1F800010000BLL;
          v95[31] = PspUserThreadStart;
          v95[16] = v86[6];
          v95[17] = v32;
          *(_DWORD *)((char *)&v95[7] + 2) = 2818091;
          *(_DWORD *)((char *)&v95[7] + 6) = 2818131;
          WORD1(v95[8]) = 43;
          LOWORD(v95[7]) = 51;
          LOWORD(v95[32]) = 639;
          LODWORD(v95[35]) = 8064;
        }
        ObfReferenceObjectWithTag(v68, 0x72437350u);
        if ( v29 )
        {
          *(_BYTE *)v29 = 0;
          v33 = v86[8];
          if ( v86[8] < 0x40000uLL )
            v33 = 0x40000LL;
          v29[3] = v33;
          v29[2] = v86[9];
          v29[1] = LODWORD(v86[7]);
        }
        *(_DWORD *)v65 = 0;
        PspMapThreadCreationFlags(ThreadFlags, &v61);
        if ( v71[0] )
        {
          *(_DWORD *)v65 = 2;
          LODWORD(v61) = v61 | 0x10;
        }
        v34 = ProcessFlags;
        if ( v71[1] )
          v34 = ProcessFlags | 0x400;
        v84[0] = (__int64)v85;
        LODWORD(v61) = v61 | 0x60;
        Info = PspAllocateThread(
                 (struct _KPROCESS *)v30,
                 v79,
                 PreviousMode,
                 (__int64)v86,
                 (__int64)v95,
                 v84,
                 0LL,
                 0LL,
                 (int *)&v61,
                 &v74,
                 v29,
                 (__int64)&AccessState);
        if ( Info < 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v30 + 91);
          KeAbPostRelease((ULONG_PTR)v30 + 728);
          KeLeaveCriticalRegionThread((__int64)v69);
          v30 = v68;
          PspRundownSingleProcess((ULONG_PTR)v68, 0);
          v45 = v54;
          goto LABEL_84;
        }
        LOBYTE(v35) = PreviousMode;
        v36 = PsTestProtectedProcessIncompatibility(v35, *(__int64 *)v62, (__int64)v30);
        v37 = v64;
        if ( v36 )
        {
          if ( (v64 & 0x2000000) != 0 )
            v37 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)Source.Level >> 4) + 4] & 0x1FFFFF | v64 & 0xFDFFFFFF;
          v38 = v63;
          if ( (v63 & 0x2000000) != 0 )
            v38 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)Source.Level >> 4) + 8] & 0x1FFFFF | v63 & 0xFDFFFFFF;
        }
        else
        {
          v38 = v63;
        }
        if ( v86[26] )
          v39 = v86[26] + 112;
        else
          v39 = 0LL;
        inserted = PspInsertProcess((char *)v30, v67, v37, v34, (HANDLE)v86[17], v65[0], v39, &v87);
        FileAttributes = v29;
        v41 = v74;
        Info = PspInsertThread(
                 v74,
                 (ULONG_PTR)v30,
                 (__int64)v85,
                 &v61,
                 v38,
                 FileAttributes,
                 (__int64)v86,
                 0LL,
                 &AccessState,
                 (PVOID *)v72,
                 (_OWORD *)v86[2]);
        KeLeaveCriticalRegionThread((__int64)v69);
        if ( inserted < 0 )
        {
          PspRundownSingleProcess((ULONG_PTR)v30, 0);
          Info = inserted;
          v45 = v54;
          goto LABEL_83;
        }
        if ( Info < 0 )
        {
          v45 = v54;
LABEL_82:
          if ( Info >= 0 )
          {
LABEL_83:
            ObfDereferenceObject(v41);
LABEL_84:
            ObfDereferenceObjectWithTag(v30, 0x72437350u);
LABEL_85:
            if ( v70 )
              ObfDereferenceObject(v70);
            PspDeleteCreateProcessContext(v86);
            if ( *(_QWORD *)&DriverContext[8] )
              FsRtlFreeExtraCreateParameterList(*(PECP_LIST *)&DriverContext[8]);
            if ( v45 )
              ObfDereferenceObject(v66);
            return Info;
          }
LABEL_174:
          PsTerminateProcess(v30, (unsigned int)Info);
          goto LABEL_83;
        }
        ProcessServerSilo = PsGetProcessServerSilo((__int64)v30);
        if ( ProcessServerSilo != v86[57] )
        {
          Info = -1073741267;
          v45 = v54;
          goto LABEL_174;
        }
        Info = PspCreateObjectHandle(v30, (__int64)&v87, (struct _OBJECT_TYPE *)PsProcessType);
        if ( Info < 0 )
        {
          v45 = v54;
        }
        else
        {
          v43 = (_OWORD *)v86[4];
          if ( v86[4] )
          {
            *(_OWORD *)v86[4] = *(_OWORD *)&v86[6];
            v43[1] = *(_OWORD *)&v86[8];
            v43[2] = *(_OWORD *)&v86[10];
            v43[3] = *(_OWORD *)&v86[12];
          }
          *v73 = v90;
          v44 = *(_QWORD *)v62;
          v45 = v54;
          Info = PspUpdateCreateInfo(6, (__int64)v86, (__int64)v30);
          if ( Info >= 0 )
            goto LABEL_81;
          if ( (v88 & 0x200) != 0 || (v51 = 1, (*(_DWORD *)(v44 + 1740) & 0x1000) != 0) )
            v51 = 0;
          ObCloseHandle(v90, v51);
        }
        if ( (v92 & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)v62 + 1740LL) & 0x1000) != 0 )
          v21 = 0;
        ObCloseHandle(v93, v21);
LABEL_81:
        SepDeleteAccessState((__int64)&v87);
        SeReleaseSubjectContext(&v87.SubjectSecurityContext);
        goto LABEL_82;
      }
      v86[19] = 0LL;
    }
LABEL_95:
    v45 = v54;
    goto LABEL_85;
  }
  return result;
}
