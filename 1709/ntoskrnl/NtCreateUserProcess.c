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

__int64 __fastcall NtCreateUserProcess(
        HANDLE *a1,
        __int64 a2,
        ACCESS_MASK a3,
        int a4,
        __int64 a5,
        int *a6,
        int a7,
        int a8,
        __int64 a9,
        unsigned __int64 a10,
        __int64 a11)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // r15
  char PreviousMode; // r12
  unsigned int v14; // r13d
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 result; // rax
  int Info; // esi
  KPROCESSOR_MODE v21; // r14
  ULONG v22; // eax
  char v23; // r15
  int v24; // ebx
  PVOID v25; // rax
  char v26; // cl
  unsigned __int8 v27; // bl
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r11
  __int64 *v31; // r15
  PVOID v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // r13d
  __int64 v37; // rcx
  bool v38; // al
  ACCESS_MASK v39; // r8d
  ACCESS_MASK v40; // esi
  __int64 v41; // rax
  int inserted; // r12d
  PVOID v43; // r15
  __int64 ProcessServerSilo; // rax
  _OWORD *v45; // rax
  __int64 v46; // r13
  char v47; // r12
  int v48; // ecx
  __int64 v49; // rax
  __int16 v50; // cx
  int v51; // eax
  char v52; // al
  KPROCESSOR_MODE v53; // dl
  __int64 *FileAttributes; // [rsp+28h] [rbp-C10h]
  unsigned __int8 v55[4]; // [rsp+80h] [rbp-BB8h] BYREF
  int v56; // [rsp+84h] [rbp-BB4h]
  char v57; // [rsp+88h] [rbp-BB0h] BYREF
  char v58; // [rsp+89h] [rbp-BAFh] BYREF
  char v59; // [rsp+8Ah] [rbp-BAEh] BYREF
  char v60; // [rsp+8Bh] [rbp-BADh]
  unsigned __int8 v61; // [rsp+8Ch] [rbp-BACh]
  char v62; // [rsp+8Dh] [rbp-BABh]
  __int64 v63; // [rsp+90h] [rbp-BA8h] BYREF
  __int64 v64; // [rsp+98h] [rbp-BA0h]
  int v65; // [rsp+A0h] [rbp-B98h]
  ACCESS_MASK v66; // [rsp+A4h] [rbp-B94h]
  char v67[8]; // [rsp+A8h] [rbp-B90h]
  PVOID v68; // [rsp+B0h] [rbp-B88h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-B80h] BYREF
  PVOID v70; // [rsp+C0h] [rbp-B78h] BYREF
  struct _KTHREAD *v71; // [rsp+C8h] [rbp-B70h]
  PVOID v72; // [rsp+D0h] [rbp-B68h] BYREF
  _DWORD v73[2]; // [rsp+D8h] [rbp-B60h] BYREF
  __int64 v74; // [rsp+E0h] [rbp-B58h]
  HANDLE *v75; // [rsp+E8h] [rbp-B50h]
  PVOID v76; // [rsp+F0h] [rbp-B48h] BYREF
  __int64 v77; // [rsp+F8h] [rbp-B40h] BYREF
  PVOID Object; // [rsp+100h] [rbp-B38h] BYREF
  PVOID v79; // [rsp+108h] [rbp-B30h] BYREF
  void *v80; // [rsp+110h] [rbp-B28h]
  int *v81; // [rsp+118h] [rbp-B20h]
  __int64 v82; // [rsp+120h] [rbp-B18h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+128h] [rbp-B10h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+158h] [rbp-AE0h] BYREF
  _BYTE DriverContext[40]; // [rsp+168h] [rbp-AD0h] BYREF
  __int64 v86[4]; // [rsp+190h] [rbp-AA8h] BYREF
  _BYTE v87[64]; // [rsp+1B0h] [rbp-A88h] BYREF
  __int64 v88[62]; // [rsp+1F0h] [rbp-A48h] BYREF
  struct _ACCESS_STATE v89; // [rsp+3E0h] [rbp-858h] BYREF
  int v90; // [rsp+560h] [rbp-6D8h]
  char v91; // [rsp+564h] [rbp-6D4h]
  HANDLE v92; // [rsp+568h] [rbp-6D0h]
  struct _ACCESS_STATE AccessState; // [rsp+570h] [rbp-6C8h] BYREF
  int v94; // [rsp+6F0h] [rbp-548h]
  HANDLE v95; // [rsp+6F8h] [rbp-540h]
  __int64 v96; // [rsp+700h] [rbp-538h] BYREF
  __int64 v97[154]; // [rsp+720h] [rbp-518h] BYREF

  v65 = a4;
  v66 = a3;
  v74 = a2;
  v75 = a1;
  v80 = (void *)a5;
  v81 = a6;
  *(_QWORD *)v67 = a9;
  CurrentThread = KeGetCurrentThread();
  v71 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  v64 = Process;
  v82 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v62 = PreviousMode;
  v72 = 0LL;
  v68 = 0LL;
  LOBYTE(CurrentThread) = 0;
  v56 = (int)CurrentThread;
  v60 = 0;
  memset(DriverContext, 0, sizeof(DriverContext));
  memset(v87, 0, sizeof(v87));
  memset(v97, 0, sizeof(v97));
  v14 = a7;
  if ( (a7 & 0xFFFB6838) != 0 || (a8 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (a7 & 0x8400) == 0x8400 )
    return 3221225520LL;
  v90 = 0;
  v91 = PreviousMode;
  if ( PreviousMode )
  {
    v15 = (__int64)v75;
    if ( (unsigned __int64)v75 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = v74;
    if ( (unsigned __int64)v74 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  if ( a5 )
  {
    if ( PreviousMode && (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v17 = *(_DWORD *)(a5 + 24) & 0x1DF2;
    else
      v17 = *(_DWORD *)(a5 + 24) & 0x11FF2;
    v90 = v17;
  }
  memset(v88, 0, 0x1E8uLL);
  if ( !a11 || (LOBYTE(v18) = PreviousMode, result = PspBuildCreateProcessContext(a11, v18, 0LL, v88), (int)result >= 0) )
  {
    if ( (a7 & 0x40) != 0 && (v88[0] & 0x2000000000000LL) != 0 && !LOBYTE(v88[47]) )
    {
      v14 = a7 & 0xFFFFFFBF;
      a7 &= ~0x40u;
      HIDWORD(v88[0]) &= ~0x20000u;
    }
    if ( (v14 & 4) == 0 && (v88[0] & 0x80000000000LL) != 0 || (v88[0] & 0x2000000000000LL) != 0 && (v14 & 0x40) == 0 )
      goto LABEL_175;
    Info = PspCaptureCreateInfo(PreviousMode, a10, (__int64)v88);
    if ( Info >= 0 )
    {
      v21 = 1;
      if ( (v88[0] & 0x100000000LL) != 0 )
      {
        Info = ObpReferenceObjectByHandleWithTag(
                 v88[15],
                 128,
                 (__int64)PsProcessType,
                 PreviousMode,
                 1917023056,
                 &v69,
                 0LL,
                 0LL);
        if ( Info < 0 )
          goto LABEL_95;
        Process = v69;
        v88[16] = v69;
      }
      else
      {
        v69 = Process;
      }
      v88[57] = PspEstimateNewProcessServerSilo(Process, v88[49], HIDWORD(v88[50]));
      if ( (BYTE1(v88[1]) & 0xC) == 4 && (Process != v64 || (*(_DWORD *)(v64 + 1740) & 0x1000) != 0) )
      {
LABEL_175:
        Info = -1073741811;
        goto LABEL_95;
      }
      Info = PspReferenceTokenForNewProcess((struct _KPROCESS *)Process, (void *)v88[18], PreviousMode, &v88[19]);
      if ( Info >= 0 )
      {
        if ( v88[18] )
        {
          if ( (int)SeQueryServerSiloToken(v88[19], &v77) >= 0 )
          {
            v49 = v77;
            if ( v88[57] )
            {
              while ( v49 )
              {
                if ( v49 == v88[57] )
                  goto LABEL_28;
                v49 = *(_QWORD *)(v49 + 1072);
              }
              goto LABEL_175;
            }
          }
        }
LABEL_28:
        if ( (v88[0] & 0x2000000000LL) != 0 )
        {
          v55[0] = (v88[0] & 0x2000000000000LL) != 0 ? LOBYTE(v88[47]) : 0;
          Info = SeQuerySigningPolicy(
                   (void *)v88[19],
                   (UNICODE_STRING *)&v88[29],
                   (v14 >> 6) & 1,
                   v55[0],
                   (unsigned __int8 *)&v57,
                   (unsigned __int8 *)&v58,
                   v55);
          if ( Info >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            v22 = 1600;
            if ( PreviousMode != 1 )
              v22 = 576;
            ObjectAttributes.Attributes = v22;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v88[29];
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            Info = 0;
            if ( qword_1407F33F0 )
              Info = qword_1407F33F0(v88[19]);
            if ( Info >= 0 )
            {
              Info = PspGetMemoryPartitionContext(Process, v14, v88[49], HIDWORD(v88[50]), &v72);
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
                    v48 = 1;
LABEL_94:
                    PspUpdateCreateInfo(v48, (__int64)v88, 0LL);
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
                      v23 = 1;
                      if ( v88[48] && *(_QWORD *)v88[48] )
                        v23 = 5;
                      if ( v88[52] )
                      {
                        v51 = SeDuplicateTokenAndAddOriginClaim(v88[19], v88[52], LODWORD(v88[53]), &v68);
                        v24 = (unsigned __int8)v56;
                        if ( v51 >= 0 )
                          v24 = 1;
                        v56 = v24;
                        v60 = v24;
                      }
                      else
                      {
                        LOBYTE(v24) = v56;
                      }
                      v25 = v68;
                      if ( !(_BYTE)v24 )
                        v25 = (PVOID)v88[19];
                      v68 = v25;
                      v26 = v57;
                      while ( 1 )
                      {
                        Info = MmCreateSpecialImageSection(
                                 &v88[23],
                                 (int)&ObjectAttributes,
                                 (__int64)v68,
                                 v26,
                                 v88[21],
                                 v23);
                        if ( Info < 0 )
                        {
                          v88[23] = 0LL;
                          v48 = 2;
                          goto LABEL_94;
                        }
                        Info = ObReferenceObjectByHandle((HANDLE)v88[23], 8u, MmSectionObjectType, 0, &v79, 0LL);
                        v88[25] = (__int64)v79;
                        if ( Info < 0 )
                        {
                          v88[25] = 0LL;
                          goto LABEL_95;
                        }
                        v27 = v55[0];
                        Info = PspGetProcessProtectionRequirementsFromImage((__int64)v79);
                        if ( Info < 0 )
                          goto LABEL_95;
                        if ( v61 == v27 )
                          break;
                        Info = SeQuerySigningPolicy(
                                 (void *)v88[19],
                                 (UNICODE_STRING *)&v88[29],
                                 1u,
                                 v61,
                                 (unsigned __int8 *)&v59,
                                 (unsigned __int8 *)&v58,
                                 v55);
                        if ( Info < 0 )
                          goto LABEL_95;
                        if ( v59 == v57 )
                          break;
                        if ( (v57 & 0x30) != 0 && (v59 & 0x30) != (v57 & 0x30)
                          || !(unsigned int)SeCompareSigningLevels() )
                        {
                          goto LABEL_175;
                        }
                        ObCloseHandle((HANDLE)v88[23], 0);
                        ObfDereferenceObject((PVOID)v88[25]);
                        v88[23] = 0LL;
                        v88[25] = 0LL;
                        v26 = v59;
                        v57 = v59;
                      }
                      Info = PspValidateCreateProcessProtection(v64, (__int64)v88, PreviousMode, v14, v55[0]);
                      if ( Info < 0 )
                        goto LABEL_95;
                      if ( (a7 & 0x40000) != 0
                        || (v55[0] & 7) != 1
                        && (LOBYTE(v29) = PreviousMode,
                            LOBYTE(v28) = *(_BYTE *)(v30 + 1738),
                            PspCheckForInvalidAccessByProtection(v29, v28, v55[0])) )
                      {
                        LOBYTE(v88[1]) |= 8u;
                      }
                      Info = PspCaptureProcessParameters(PreviousMode, *(__int64 *)v67, (__int64)v88);
                      if ( Info >= 0 )
                      {
                        v31 = &v96;
                        goto LABEL_56;
                      }
                      LOBYTE(v88[1]) &= ~4u;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_95;
        }
        if ( Process != v64
          || !PreviousMode
          || *(_QWORD *)v67
          || (v88[1] & 0xC00) != 0
          || (v88[0] & 0x8000000000LL) != 0
          || (v88[0] & 0x2000000000000LL) != 0
          || (v88[1] & 0x10) != 0 )
        {
          goto LABEL_175;
        }
        LOBYTE(v88[1]) &= ~4u;
        v52 = *(_BYTE *)(Process + 1738);
        v55[0] = v52;
        v58 = *(_BYTE *)(Process + 1737);
        v57 = *(_BYTE *)(Process + 1736);
        if ( (v14 & 0x40) != 0 && (v52 & 7) == 0 )
        {
          Info = -1073741790;
          goto LABEL_95;
        }
        Info = PspValidateCreateProcessProtection(v64, (__int64)v88, PreviousMode, v14, v52);
        if ( Info < 0 )
          goto LABEL_95;
        LODWORD(v97[6]) = 1048603;
        Info = PspGetContextThreadInternal((__int64)v71, (__int64)v97, 0, 1, 1);
        if ( Info < 0 )
          goto LABEL_95;
        v97[15] = 297LL;
        v31 = 0LL;
LABEL_56:
        Info = PspAllocateProcess(
                 v69,
                 PreviousMode,
                 v80,
                 v55[0],
                 v57,
                 v58,
                 (void *)v88[25],
                 (void *)v88[19],
                 a7,
                 0,
                 (__int64)v88,
                 v88[18] != 0,
                 (char *)v72,
                 (__int64)v73,
                 &v70);
        if ( Info < 0 )
          goto LABEL_95;
        v32 = v70;
        if ( v88[25] )
        {
          v33 = *((_QWORD *)v70 + 133);
          if ( v33 && ((v50 = *(_WORD *)(v33 + 8), v50 == 332) || v50 == 452) )
            v34 = HIDWORD(v88[28]);
          else
            v34 = *((_QWORD *)v70 + 127);
          v97[6] = 0x1F800010000BLL;
          v97[31] = PspUserThreadStart;
          v97[16] = v88[6];
          v97[17] = v34;
          *(_DWORD *)((char *)&v97[7] + 2) = 2818091;
          *(_DWORD *)((char *)&v97[7] + 6) = 2818131;
          WORD1(v97[8]) = 43;
          LOWORD(v97[7]) = 51;
          LOWORD(v97[32]) = 639;
          LODWORD(v97[35]) = 8064;
        }
        ObfReferenceObjectWithTag(v70, 0x72437350u);
        if ( v31 )
        {
          *(_BYTE *)v31 = 0;
          v35 = v88[8];
          if ( v88[8] < 0x40000uLL )
            v35 = 0x40000LL;
          v31[3] = v35;
          v31[2] = v88[9];
          v31[1] = LODWORD(v88[7]);
        }
        *(_DWORD *)v67 = 0;
        PspMapThreadCreationFlags(a8, &v63);
        if ( v73[0] )
        {
          *(_DWORD *)v67 = 2;
          LODWORD(v63) = v63 | 0x10;
        }
        v36 = a7;
        if ( v73[1] )
          v36 = a7 | 0x400;
        v86[0] = (__int64)v87;
        LODWORD(v63) = v63 | 0x60;
        Info = PspAllocateThread(
                 (struct _KPROCESS *)v32,
                 v81,
                 PreviousMode,
                 (__int64)v88,
                 (__int64)v97,
                 v86,
                 0LL,
                 0LL,
                 (int *)&v63,
                 &v76,
                 v31,
                 (__int64)&AccessState);
        if ( Info < 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v32 + 91);
          KeAbPostRelease((ULONG_PTR)v32 + 728);
          KeLeaveCriticalRegionThread((__int64)v71);
          v32 = v70;
          PspRundownSingleProcess((ULONG_PTR)v70, 0);
          v47 = v56;
          goto LABEL_84;
        }
        LOBYTE(v37) = PreviousMode;
        v38 = PsTestProtectedProcessIncompatibility(v37, v64, (__int64)v32);
        v39 = v66;
        if ( v38 )
        {
          if ( (v66 & 0x2000000) != 0 )
            v39 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v55[0] >> 4) + 4] & 0x1FFFFF | v66 & 0xFDFFFFFF;
          v40 = v65;
          if ( (v65 & 0x2000000) != 0 )
            v40 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)v55[0] >> 4) + 8] & 0x1FFFFF | v65 & 0xFDFFFFFF;
        }
        else
        {
          v40 = v65;
        }
        if ( v88[26] )
          v41 = v88[26] + 112;
        else
          v41 = 0LL;
        inserted = PspInsertProcess((char *)v32, v69, v39, v36, (HANDLE)v88[17], v67[0], v41, &v89);
        FileAttributes = v31;
        v43 = v76;
        Info = PspInsertThread(
                 v76,
                 (ULONG_PTR)v32,
                 (__int64)v87,
                 &v63,
                 v40,
                 FileAttributes,
                 (__int64)v88,
                 0LL,
                 &AccessState,
                 (PVOID *)v74,
                 (_OWORD *)v88[2]);
        KeLeaveCriticalRegionThread((__int64)v71);
        if ( inserted < 0 )
        {
          PspRundownSingleProcess((ULONG_PTR)v32, 0);
          Info = inserted;
          v47 = v56;
          goto LABEL_83;
        }
        if ( Info < 0 )
        {
          v47 = v56;
LABEL_82:
          if ( Info >= 0 )
          {
LABEL_83:
            ObfDereferenceObject(v43);
LABEL_84:
            ObfDereferenceObjectWithTag(v32, 0x72437350u);
LABEL_85:
            if ( v72 )
              ObfDereferenceObject(v72);
            PspDeleteCreateProcessContext(v88);
            if ( *(_QWORD *)&DriverContext[8] )
              FsRtlFreeExtraCreateParameterList(*(PECP_LIST *)&DriverContext[8]);
            if ( v47 )
              ObfDereferenceObject(v68);
            return (unsigned int)Info;
          }
LABEL_174:
          PsTerminateProcess(v32, (unsigned int)Info);
          goto LABEL_83;
        }
        ProcessServerSilo = PsGetProcessServerSilo((__int64)v32);
        if ( ProcessServerSilo != v88[57] )
        {
          Info = -1073741267;
          v47 = v56;
          goto LABEL_174;
        }
        Info = PspCreateObjectHandle(v32, (__int64)&v89, (struct _OBJECT_TYPE *)PsProcessType);
        if ( Info < 0 )
        {
          v47 = v56;
        }
        else
        {
          v45 = (_OWORD *)v88[4];
          if ( v88[4] )
          {
            *(_OWORD *)v88[4] = *(_OWORD *)&v88[6];
            v45[1] = *(_OWORD *)&v88[8];
            v45[2] = *(_OWORD *)&v88[10];
            v45[3] = *(_OWORD *)&v88[12];
          }
          *v75 = v92;
          v46 = v64;
          v47 = v56;
          Info = PspUpdateCreateInfo(6, (__int64)v88, (__int64)v32);
          if ( Info >= 0 )
            goto LABEL_81;
          if ( (v90 & 0x200) != 0 || (v53 = 1, (*(_DWORD *)(v46 + 1740) & 0x1000) != 0) )
            v53 = 0;
          ObCloseHandle(v92, v53);
        }
        if ( (v94 & 0x200) != 0 || (*(_DWORD *)(v64 + 1740) & 0x1000) != 0 )
          v21 = 0;
        ObCloseHandle(v95, v21);
LABEL_81:
        SepDeleteAccessState((__int64)&v89);
        SeReleaseSubjectContext(&v89.SubjectSecurityContext);
        goto LABEL_82;
      }
      v88[19] = 0LL;
    }
LABEL_95:
    v47 = v56;
    goto LABEL_85;
  }
  return result;
}
