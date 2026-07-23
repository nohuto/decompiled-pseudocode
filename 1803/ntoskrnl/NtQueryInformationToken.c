/*
 * XREFs of NtQueryInformationToken @ 0x140597890
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x140287510 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140785D38 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14005FD50 (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140060010 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepConvertTokenPrivileges @ 0x14006A1B4 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x14006A1D4 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepCopyTokenIntegrity @ 0x14006A264 (SepCopyTokenIntegrity.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     SepTokenPrivilegeCount @ 0x1400A0920 (SepTokenPrivilegeCount.c)
 *     SeQueryMandatoryPolicyToken @ 0x1400A0A84 (SeQueryMandatoryPolicyToken.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1400A0C10 (SepDeReferenceLogonSessionDirect.c)
 *     SepReferenceTokenByHandle @ 0x1400EF490 (SepReferenceTokenByHandle.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlIsElevatedRid @ 0x1404C2450 (RtlIsElevatedRid.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     RtlCopySid @ 0x1404D4480 (RtlCopySid.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     SepCopyTokenAccessInformation @ 0x14054405C (SepCopyTokenAccessInformation.c)
 *     RtlCopySidAndAttributesArray @ 0x1405442F0 (RtlCopySidAndAttributesArray.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x1405443B8 (SepGetTokenAccessInformationBufferSize.c)
 *     SepReferenceLogonSessionSilo @ 0x140544950 (SepReferenceLogonSessionSilo.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x140571948 (AuthzBasepQueryClaimAttributesToken.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 *     ExRaiseAccessViolation @ 0x1407C5920 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // r14
  __int64 v9; // rdi
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  PULONG v14; // rbx
  __int64 v15; // rcx
  NTSTATUS result; // eax
  _DWORD *v17; // rcx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v19; // r13
  unsigned int v20; // esi
  char *v21; // rbx
  const void **v22; // r12
  unsigned int v23; // ecx
  unsigned int v24; // r14d
  unsigned int v25; // eax
  struct _KTHREAD *v26; // rcx
  bool v27; // zf
  unsigned int v28; // r13d
  struct _KTHREAD *v29; // rax
  unsigned int *v30; // rdi
  __int64 v31; // rcx
  char *v32; // rdx
  struct _ERESOURCE *v33; // rcx
  struct _KTHREAD *v34; // rax
  PVOID v35; // rdi
  int v36; // esi
  struct _KTHREAD *v37; // rax
  unsigned __int8 *Sid; // rdx
  unsigned int v39; // eax
  int v40; // edx
  struct _KTHREAD *v41; // rax
  char *v42; // rbx
  int v43; // edx
  __int64 v44; // rax
  struct _KTHREAD *v45; // rax
  PVOID v46; // rsi
  unsigned __int8 IsElevatedRid; // bl
  unsigned int v48; // r14d
  struct _KTHREAD *v49; // rax
  unsigned int v50; // ecx
  struct _ERESOURCE *v51; // rcx
  struct _KTHREAD *v52; // rax
  unsigned int *v53; // rsi
  __int64 v54; // rax
  unsigned int v55; // eax
  char *v56; // rcx
  unsigned int v57; // r13d
  struct _KTHREAD *v58; // rax
  char v59; // r8
  PSID v60; // r9
  unsigned __int8 *v61; // rcx
  char *v62; // rdx
  struct _KTHREAD *v63; // rax
  unsigned int v64; // ecx
  struct _KTHREAD *v65; // rax
  _DWORD *v66; // rcx
  unsigned int v67; // esi
  struct _ERESOURCE *v68; // rcx
  struct _KTHREAD *v69; // rax
  ULONG v70; // r8d
  struct _KTHREAD *v71; // rax
  __int64 v72; // rax
  unsigned int v73; // esi
  _DWORD *v74; // r12
  struct _KTHREAD *v75; // rax
  unsigned int v76; // eax
  unsigned int v77; // esi
  struct _KTHREAD *v78; // rax
  __int64 v79; // rax
  ULONG v80; // r11d
  ULONG v81; // r8d
  struct _KTHREAD *v82; // rax
  unsigned int v83; // esi
  __int64 v84; // rax
  struct _KTHREAD *v85; // rax
  int v86; // r10d
  unsigned int v87; // ecx
  unsigned int v88; // r11d
  unsigned int v89; // r8d
  __int64 v90; // rdx
  __int64 v91; // r9
  unsigned int v92; // r12d
  unsigned int v93; // r13d
  unsigned int v94; // ecx
  unsigned int v95; // ecx
  _SID_AND_ATTRIBUTES *v96; // r9
  _SID_AND_ATTRIBUTES *v97; // rdi
  __int64 v98; // rbx
  struct _KTHREAD *v99; // rax
  unsigned int v100; // eax
  ULONG v101; // r8d
  __int64 v102; // rdx
  __int64 v103; // r9
  struct _KTHREAD *v104; // rax
  unsigned int v105; // eax
  ULONG v106; // r8d
  __int64 v107; // rdx
  __int64 v108; // r9
  struct _KTHREAD *v109; // rax
  unsigned __int8 *v110; // rsi
  char v111; // r12
  unsigned int TokenAccessInformationBufferSize; // eax
  int v113; // ebx
  _DWORD *v114; // rsi
  NTSTATUS v115; // r14d
  int v116; // r9d
  _QWORD *v117; // rbx
  NTSTATUS inserted; // ebx
  struct _KTHREAD *v119; // rax
  unsigned int v120; // edx
  unsigned int v121; // r9d
  __int64 v122; // r10
  __int64 v123; // r8
  unsigned int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // r9
  void *v129; // rcx
  struct _KTHREAD *v130; // rax
  int v131; // eax
  struct _KTHREAD *v132; // rax
  PVOID v133; // rbx
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // r9
  struct _KTHREAD *v137; // rax
  PVOID v138; // rdi
  __int64 v139; // rdx
  PSID SidArea; // [rsp+20h] [rbp-188h]
  char v141[8]; // [rsp+80h] [rbp-128h] BYREF
  PVOID Object; // [rsp+88h] [rbp-120h] BYREF
  PSID SourceSid; // [rsp+90h] [rbp-118h] BYREF
  PSID RemainingSidArea; // [rsp+98h] [rbp-110h] BYREF
  int v145; // [rsp+A0h] [rbp-108h] BYREF
  NTSTATUS SecurityAttributesToken; // [rsp+A4h] [rbp-104h]
  int v147; // [rsp+A8h] [rbp-100h] BYREF
  int v148; // [rsp+ACh] [rbp-FCh]
  int v149; // [rsp+B0h] [rbp-F8h] BYREF
  int v150; // [rsp+B4h] [rbp-F4h] BYREF
  unsigned int v151; // [rsp+B8h] [rbp-F0h] BYREF
  unsigned int v152; // [rsp+BCh] [rbp-ECh] BYREF
  unsigned int v153; // [rsp+C0h] [rbp-E8h] BYREF
  unsigned int v154; // [rsp+C4h] [rbp-E4h] BYREF
  unsigned int v155; // [rsp+C8h] [rbp-E0h] BYREF
  unsigned int v156; // [rsp+CCh] [rbp-DCh] BYREF
  unsigned int v157; // [rsp+D0h] [rbp-D8h] BYREF
  unsigned int v158; // [rsp+D4h] [rbp-D4h]
  int v159; // [rsp+D8h] [rbp-D0h]
  PVOID v160; // [rsp+E0h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp-C0h] BYREF
  PSID_AND_ATTRIBUTES Dest; // [rsp+F0h] [rbp-B8h]
  _QWORD *v163; // [rsp+F8h] [rbp-B0h] BYREF
  char *v164; // [rsp+100h] [rbp-A8h]
  _QWORD v165[6]; // [rsp+108h] [rbp-A0h] BYREF
  _SID_AND_ATTRIBUTES Src; // [rsp+138h] [rbp-70h] BYREF
  int v167; // [rsp+148h] [rbp-60h] BYREF
  __int64 v168; // [rsp+150h] [rbp-58h]
  __int64 v169; // [rsp+158h] [rbp-50h]
  int v170; // [rsp+160h] [rbp-48h]
  __int128 v171; // [rsp+168h] [rbp-40h]

  v5 = TokenInformationLength;
  v9 = 0LL;
  Dest = 0LL;
  v147 = 0;
  memset(v165, 0, sizeof(v165));
  v141[0] = 0;
  SourceSid = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (_DWORD)v5 )
    {
      v11 = (unsigned __int64)TokenInformation;
      if ( ((unsigned __int8)TokenInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)TokenInformation + v5 - 1;
      if ( (unsigned __int64)TokenInformation > v12 || v12 >= 0x7FFFFFFF0000LL )
      {
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
          ExRaiseAccessViolation();
      }
      else
      {
        v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v11 = *(_BYTE *)v11;
          v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v11 != v13 );
      }
    }
    v14 = ReturnLength;
    v15 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
  }
  else
  {
    v14 = ReturnLength;
  }
  if ( TokenInformationClass == TokenUser )
  {
    result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
    if ( result < 0 )
      return result;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v19 = Object;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
    v20 = 4 * *(unsigned __int8 *)(**((_QWORD **)v19 + 19) + 1LL) + 24;
    *v14 = v20;
    if ( (unsigned int)v5 >= v20 )
    {
      v21 = (char *)TokenInformation + 16;
      v22 = (const void **)*((_QWORD *)v19 + 19);
      v159 = 0;
      v164 = (char *)TokenInformation + 16;
      v158 = v20;
      while ( !(_DWORD)v9 )
      {
        v23 = 4 * *((unsigned __int8 *)*v22 + 1) + 8;
        v24 = (4 * *((unsigned __int8 *)*v22 + 1) + 11) & 0xFFFFFFFC;
        if ( v23 > v20 )
          goto LABEL_30;
        v20 -= v24;
        v158 = v20;
        *(_QWORD *)TokenInformation = v21;
        *((_DWORD *)TokenInformation + 2) = *((_DWORD *)v22 + 2);
        v25 = 4 * *((unsigned __int8 *)*v22 + 1) + 8;
        if ( v25 <= v23 )
          memmove(v21, *v22, v25);
        v21 += v24;
        v164 = v21;
        LODWORD(v9) = 1;
        v159 = 1;
      }
      RemainingSidArea = (PSID)__PAIR64__(HIDWORD(v21), v20);
LABEL_30:
      ExReleaseResourceLite(*((PERESOURCE *)v19 + 6));
      v26 = KeGetCurrentThread();
      v27 = v26->KernelApcDisable++ == -1;
      if ( v27
        && ($005F0E83B22994B61E86C72E0CE43C71 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
        && !v26->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
LABEL_43:
      v17 = Object;
      goto LABEL_44;
    }
LABEL_101:
    v51 = (struct _ERESOURCE *)*((_QWORD *)v19 + 6);
LABEL_74:
    ExReleaseResourceLite(v51);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_75;
  }
  if ( TokenInformationClass != TokenSessionId )
  {
    switch ( TokenInformationClass )
    {
      case TokenGroups:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          v99 = KeGetCurrentThread();
          --v99->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v100 = v30[31];
          v101 = 16 * v100 - 8;
          if ( v100 > 1 )
          {
            v102 = *((_QWORD *)v30 + 19) + 16LL;
            v103 = v100 - 1;
            do
            {
              v101 += 4 * *(unsigned __int8 *)(*(_QWORD *)v102 + 1LL) + 8;
              v102 += 16LL;
              --v103;
            }
            while ( v103 );
          }
          *v14 = v101;
          if ( (unsigned int)v5 >= v101 )
          {
            *(_DWORD *)TokenInformation = v30[31] - 1;
            RtlCopySidAndAttributesArray(
              v30[31] - 1,
              (PSID_AND_ATTRIBUTES)(*((_QWORD *)v30 + 19) + 16LL),
              v101,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + 16 * v30[31] - 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            goto LABEL_41;
          }
          goto LABEL_73;
        }
        return result;
      case TokenPrivileges:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          v75 = KeGetCurrentThread();
          --v75->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v76 = SepTokenPrivilegeCount((__int64)v30);
          if ( v76 <= 1 )
            v77 = 16;
          else
            v77 = 12 * v76 + 4;
          *v14 = v77;
          if ( (unsigned int)v5 >= v77 )
          {
            SepConvertTokenPrivileges((__int64)v30, TokenInformation);
            goto LABEL_41;
          }
          goto LABEL_73;
        }
        return result;
      case TokenOwner:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          v63 = KeGetCurrentThread();
          --v63->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v64 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v30 + 19) + 16LL * v30[36]) + 1LL) + 16;
          *v14 = v64;
          if ( (unsigned int)v5 < v64 )
            goto LABEL_73;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v64 - 8, (char *)TokenInformation + 8, *(PSID *)(*((_QWORD *)v30 + 19) + 16LL * v30[36]));
          goto LABEL_41;
        }
        return result;
      case TokenPrimaryGroup:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          v49 = KeGetCurrentThread();
          --v49->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v50 = 4 * *(unsigned __int8 *)(*((_QWORD *)v30 + 21) + 1LL) + 16;
          *v14 = v50;
          if ( (unsigned int)v5 < v50 )
            goto LABEL_73;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v50 - 8, (char *)TokenInformation + 8, *((PSID *)v30 + 21));
          goto LABEL_41;
        }
        return result;
      case TokenDefaultDacl:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          v145 = 8;
          v52 = KeGetCurrentThread();
          --v52->KernelApcDisable;
          v53 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v54 = *((_QWORD *)v53 + 23);
          if ( v54 )
            v55 = *(unsigned __int16 *)(v54 + 2) + 8;
          else
            v55 = v145;
          *v14 = v55;
          if ( (unsigned int)v5 >= v55 )
          {
            v56 = (char *)TokenInformation + 8;
            if ( *((_QWORD *)v53 + 23) )
            {
              *(_QWORD *)TokenInformation = v56;
              memmove(v56, *((const void **)v53 + 23), *(unsigned __int16 *)(*((_QWORD *)v53 + 23) + 2LL));
            }
            else
            {
              *(_QWORD *)TokenInformation = 0LL;
            }
            goto LABEL_85;
          }
          goto LABEL_106;
        }
        return result;
      case TokenSource:
        result = SepReferenceTokenByHandle(TokenHandle, 0x10u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 16;
          if ( (unsigned int)v5 < 0x10 )
            goto LABEL_75;
          v17 = Object;
          *(_OWORD *)TokenInformation = *(_OWORD *)Object;
          goto LABEL_44;
        }
        return result;
      case TokenType:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_75;
          v17 = Object;
          *(_DWORD *)TokenInformation = *((_DWORD *)Object + 48);
          goto LABEL_44;
        }
        return result;
      case TokenImpersonationLevel:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          v17 = Object;
          if ( *((_DWORD *)Object + 48) != 2 )
          {
            ObfDereferenceObject(Object);
            return -1073741821;
          }
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_76;
          *(_DWORD *)TokenInformation = v17[49];
          goto LABEL_44;
        }
        return result;
      case TokenStatistics:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 56;
          if ( (unsigned int)v5 < 0x38 )
            goto LABEL_75;
          v41 = KeGetCurrentThread();
          --v41->KernelApcDisable;
          v42 = (char *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          *(_QWORD *)TokenInformation = *((_QWORD *)v42 + 2);
          *((_QWORD *)TokenInformation + 1) = *((_QWORD *)v42 + 3);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v42 + 5);
          *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v42 + 48);
          *((_DWORD *)TokenInformation + 7) = *((_DWORD *)v42 + 49);
          *((_DWORD *)TokenInformation + 8) = *((_DWORD *)v42 + 34);
          v43 = *((_DWORD *)v42 + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)v42 + 21) + 1LL) - 8;
          v148 = v43;
          v44 = *((_QWORD *)v42 + 23);
          if ( v44 )
          {
            v43 -= *(unsigned __int16 *)(v44 + 2);
            v148 = v43;
          }
          *((_DWORD *)TokenInformation + 9) = v43;
          *((_DWORD *)TokenInformation + 10) = *((_DWORD *)v42 + 31) - 1;
          *((_DWORD *)TokenInformation + 11) = SepTokenPrivilegeCount((__int64)v42);
          *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v42 + 7);
          goto LABEL_62;
        }
        return result;
      case TokenRestrictedSids:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          v69 = KeGetCurrentThread();
          --v69->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v70 = 16 * v30[32] + 8;
          if ( v30[32] )
          {
            v127 = *((_QWORD *)v30 + 20);
            v128 = v30[32];
            do
            {
              v70 += 4 * *(unsigned __int8 *)(*(_QWORD *)v127 + 1LL) + 8;
              v127 += 16LL;
              --v128;
            }
            while ( v128 );
          }
          *v14 = v70;
          if ( (unsigned int)v5 >= v70 )
          {
            *(_DWORD *)TokenInformation = v30[32];
            RtlCopySidAndAttributesArray(
              v30[32],
              *((PSID_AND_ATTRIBUTES *)v30 + 20),
              v70,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + 16 * v30[32] + 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            goto LABEL_41;
          }
          goto LABEL_73;
        }
        return result;
      case TokenGroupsAndPrivileges:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          v85 = KeGetCurrentThread();
          --v85->KernelApcDisable;
          v53 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v147 = SepTokenPrivilegeCount((__int64)v53);
          v86 = 12 * v147;
          v87 = v53[31];
          v88 = v87;
          v89 = 16 * v87;
          if ( v87 )
          {
            v90 = *((_QWORD *)v53 + 19);
            v91 = v87;
            do
            {
              v89 += (4 * *(unsigned __int8 *)(*(_QWORD *)v90 + 1LL) + 15) & 0xFFFFFFF8;
              v90 += 16LL;
              --v91;
            }
            while ( v91 );
          }
          v92 = 16 * v53[32];
          v93 = v92;
          v94 = v92;
          if ( v53[32] )
          {
            v125 = *((_QWORD *)v53 + 20);
            v126 = v53[32];
            do
            {
              v93 += (4 * *(unsigned __int8 *)(*(_QWORD *)v125 + 1LL) + 15) & 0xFFFFFFF8;
              v94 = v93;
              v125 += 16LL;
              --v126;
            }
            while ( v126 );
          }
          v95 = v94 + v89 + v86 + 56;
          *v14 = v95;
          if ( (unsigned int)v5 >= v95 )
          {
            *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v53 + 3);
            *((_DWORD *)TokenInformation + 1) = v89;
            *(_DWORD *)TokenInformation = v53[31];
            v96 = (_SID_AND_ATTRIBUTES *)((char *)TokenInformation + 56);
            *((_QWORD *)TokenInformation + 1) = (char *)TokenInformation + 56;
            *((_DWORD *)TokenInformation + 5) = v93;
            *((_DWORD *)TokenInformation + 4) = v53[32];
            if ( v53[32] )
            {
              v97 = (_SID_AND_ATTRIBUTES *)((char *)v96 + ((v89 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
              *((_QWORD *)TokenInformation + 3) = v97;
            }
            else
            {
              *((_QWORD *)TokenInformation + 3) = 0LL;
              v97 = Dest;
            }
            *((_DWORD *)TokenInformation + 9) = v86;
            *((_DWORD *)TokenInformation + 8) = v147;
            v98 = (__int64)v96 + v93 + v89;
            *((_QWORD *)TokenInformation + 5) = v98;
            RtlCopySidAndAttributesArray(
              v53[31],
              *((PSID_AND_ATTRIBUTES *)v53 + 19),
              v89 - v88 * 16,
              v96,
              &v96[v88],
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            if ( v97 )
              RtlCopySidAndAttributesArray(
                v53[32],
                *((PSID_AND_ATTRIBUTES *)v53 + 20),
                v93 - v92,
                v97,
                &v97[v92 / 0x10],
                &RemainingSidArea,
                (PULONG)&RemainingSidArea);
            SepConvertTokenPrivilegesToLuidAndAttributes(v53, v98);
            goto LABEL_85;
          }
          goto LABEL_106;
        }
        return result;
      case TokenSandBoxInert:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            return -1073741789;
          v17 = Object;
          *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) & 0x40) != 0;
          goto LABEL_44;
        }
        return result;
      case TokenAuditPolicy:
        if ( !SeSinglePrivilegeCheck(SeSecurityPrivilege, PreviousMode) )
          return -1073741727;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 30;
          if ( (unsigned int)v5 < 0x1E )
            goto LABEL_75;
          v130 = KeGetCurrentThread();
          --v130->KernelApcDisable;
          v42 = (char *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          *(_OWORD *)TokenInformation = *(_OWORD *)(v42 + 88);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v42 + 13);
          *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v42 + 28);
          *((_WORD *)TokenInformation + 14) = *((_WORD *)v42 + 58);
LABEL_62:
          v33 = (struct _ERESOURCE *)*((_QWORD *)v42 + 6);
          goto LABEL_42;
        }
        return result;
      case TokenOrigin:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 8;
          if ( (unsigned int)v5 < 8 )
            goto LABEL_75;
          v17 = Object;
          *(_QWORD *)TokenInformation = *((_QWORD *)Object + 28);
          goto LABEL_44;
        }
        return result;
      case TokenElevationType:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_75;
          v17 = Object;
          v40 = *(_DWORD *)(*((_QWORD *)Object + 27) + 32LL);
          if ( (v40 & 4) != 0 )
          {
            *(_DWORD *)TokenInformation = 3;
          }
          else
          {
            LOBYTE(v9) = (v40 & 2) != 0;
            *(_DWORD *)TokenInformation = v9 + 1;
          }
          goto LABEL_44;
        }
        return result;
      case TokenLinkedToken:
        v160 = 0LL;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 8;
          if ( (_DWORD)v5 != 8 )
          {
            ObfDereferenceObject(Object);
            return -1073741820;
          }
          v113 = -(SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) != 0);
          v114 = Object;
          v115 = SepReferenceLogonSessionSilo(
                   (_DWORD *)(*((_QWORD *)Object + 27) + 16LL),
                   *(_QWORD *)(*((_QWORD *)Object + 27) + 160LL),
                   (__int64 *)&v163);
          if ( v115 >= 0 )
          {
            v167 = 48;
            v168 = 0LL;
            v170 = PreviousMode ? 0 : 512;
            v169 = 0LL;
            v171 = 0LL;
            v116 = v113 + 2;
            v117 = v163;
            v115 = SepDuplicateToken(v163[6], (int)&v167, 0, v116, 1u, 0, 0, (char **)&v160);
            SepDeReferenceLogonSessionDirect(v117);
            if ( v115 >= 0 )
            {
              inserted = ObInsertObjectEx(v160, 0LL, 983551LL, 0, 0, 0LL, &Handle);
              if ( inserted >= 0 )
              {
                *(_QWORD *)TokenInformation = Handle;
                v17 = v114;
                goto LABEL_44;
              }
              v129 = v114;
              goto LABEL_218;
            }
          }
          ObfDereferenceObject(v114);
          return v115;
        }
        return result;
      case TokenElevation:
        *v14 = 4;
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          v45 = KeGetCurrentThread();
          --v45->KernelApcDisable;
          v46 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          IsElevatedRid = (*((_QWORD *)v46 + 8) & 0x1120160684LL) != 0;
          v48 = *((_DWORD *)v46 + 31);
          if ( v48 )
          {
            do
            {
              if ( IsElevatedRid )
                break;
              IsElevatedRid = RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(*((_QWORD *)v46 + 19) + 16LL * (unsigned int)v9));
              LODWORD(v9) = v9 + 1;
            }
            while ( (unsigned int)v9 < v48 );
          }
          ExReleaseResourceLite(*((PERESOURCE *)v46 + 6));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          *(_DWORD *)TokenInformation = IsElevatedRid;
          goto LABEL_43;
        }
        return result;
      case TokenHasRestrictions:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 1;
          if ( !(_DWORD)v5 )
            goto LABEL_75;
          v17 = Object;
          *(_BYTE *)TokenInformation = (*((_DWORD *)Object + 50) & 0x810) != 0;
          goto LABEL_44;
        }
        return result;
      case TokenAccessInformation:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result >= 0 )
        {
          v109 = KeGetCurrentThread();
          --v109->KernelApcDisable;
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v110 = (unsigned __int8 *)SourceSid;
          v111 = v141[0];
          TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                               (__int64)v30,
                                               v141[0],
                                               (__int64)SourceSid,
                                               &v147,
                                               (int *)&v157,
                                               (int *)&v156,
                                               (int *)&v155,
                                               (int *)&v154,
                                               &v153,
                                               (int *)&v152,
                                               (int *)&v151,
                                               (unsigned int *)&v150,
                                               &v149);
          *v14 = TokenAccessInformationBufferSize;
          if ( (unsigned int)v5 < TokenAccessInformationBufferSize )
            goto LABEL_73;
          SepCopyTokenAccessInformation(
            (__int64)v30,
            (__int64)TokenInformation,
            v5,
            v147,
            v157,
            v156,
            v155,
            v154,
            v153,
            v152,
            v151,
            v150,
            v149,
            v111,
            v110);
          goto LABEL_41;
        }
        return result;
      case TokenVirtualizationAllowed:
      case TokenVirtualizationEnabled:
      case TokenUIAccess:
      case TokenIsRestricted:
      case TokenPrivateNameSpace:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_75;
        v17 = Object;
        if ( TokenInformationClass == TokenVirtualizationAllowed )
        {
          LODWORD(v9) = (*((_DWORD *)Object + 50) >> 9) & 1;
          goto LABEL_130;
        }
        if ( TokenInformationClass == TokenVirtualizationEnabled )
        {
          LODWORD(v9) = (*((_DWORD *)Object + 50) >> 10) & 1;
          goto LABEL_130;
        }
        if ( TokenInformationClass != TokenUIAccess )
        {
          if ( TokenInformationClass == TokenIsRestricted )
          {
            v131 = *((_DWORD *)Object + 50);
            if ( (v131 & 0x10) == 0 && (v131 & 8) == 0 )
              goto LABEL_130;
          }
          else if ( (*((_DWORD *)Object + 50) & 0x10000) == 0 )
          {
LABEL_130:
            *(_DWORD *)TokenInformation = v9;
            goto LABEL_44;
          }
          LODWORD(v9) = 1;
          goto LABEL_130;
        }
        LODWORD(v9) = (*((_DWORD *)Object + 50) >> 12) & 1;
        goto LABEL_130;
      case TokenIntegrityLevel:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result < 0 )
          return result;
        v37 = KeGetCurrentThread();
        --v37->KernelApcDisable;
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        SepCopyTokenIntegrity((__int64)v30);
        Sid = (unsigned __int8 *)Src.Sid;
        v39 = 4 * *((unsigned __int8 *)Src.Sid + 1) + 24;
        *v14 = v39;
        if ( (unsigned int)v5 < v39 )
          goto LABEL_73;
        RtlCopySidAndAttributesArray(
          1u,
          &Src,
          4 * Sid[1] + 8,
          (PSID_AND_ATTRIBUTES)TokenInformation,
          (char *)TokenInformation + 16,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_41;
      case TokenMandatoryPolicy:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_75;
        inserted = SeQueryMandatoryPolicyToken((__int64)Object, TokenInformation);
        SecurityAttributesToken = inserted;
LABEL_218:
        ObfDereferenceObject(v129);
        return inserted;
      case TokenLogonSid:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result < 0 )
          return result;
        v119 = KeGetCurrentThread();
        --v119->KernelApcDisable;
        v53 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v120 = 0;
        v121 = v53[31];
        if ( !v121 )
          goto LABEL_203;
        v122 = *((_QWORD *)v53 + 19);
        while ( (*(_DWORD *)(v122 + 16LL * v120 + 8) & 0xC0000000) != 0xC0000000 )
        {
          if ( ++v120 >= v121 )
            goto LABEL_203;
        }
        v9 = *(_QWORD *)(v122 + 16LL * v120);
LABEL_203:
        if ( !v9 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v53 + 6));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Object);
          return -1073741275;
        }
        v123 = 16LL * v120;
        v124 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v53 + 19) + v123) + 1LL) + 32;
        *v14 = v124;
        if ( (unsigned int)v5 < v124 )
        {
LABEL_106:
          v51 = (struct _ERESOURCE *)*((_QWORD *)v53 + 6);
          goto LABEL_74;
        }
        *(_DWORD *)TokenInformation = 1;
        RtlCopySidAndAttributesArray(
          1u,
          (PSID_AND_ATTRIBUTES)(v123 + *((_QWORD *)v53 + 19)),
          4 * *(unsigned __int8 *)(*(_QWORD *)(v123 + *((_QWORD *)v53 + 19)) + 1LL) + 8,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 24,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
LABEL_85:
        v33 = (struct _ERESOURCE *)*((_QWORD *)v53 + 6);
LABEL_42:
        ExReleaseResourceLite(v33);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        goto LABEL_43;
      case TokenIsAppContainer:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 4;
        v17 = Object;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_76;
        LOBYTE(v9) = (*((_DWORD *)Object + 50) & 0x4000) != 0;
        *(_DWORD *)TokenInformation = v9;
        goto LABEL_44;
      case TokenCapabilities:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result < 0 )
          return result;
        v104 = KeGetCurrentThread();
        --v104->KernelApcDisable;
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v105 = v30[200];
        v106 = 16 * v105 + 8;
        if ( v105 )
        {
          v107 = *((_QWORD *)v30 + 99);
          v108 = v105;
          do
          {
            v106 += 4 * *(unsigned __int8 *)(*(_QWORD *)v107 + 1LL) + 8;
            v107 += 16LL;
            --v108;
          }
          while ( v108 );
        }
        *v14 = v106;
        if ( (unsigned int)v5 < v106 )
          goto LABEL_73;
        *(_DWORD *)TokenInformation = v30[200];
        RtlCopySidAndAttributesArray(
          v30[200],
          *((PSID_AND_ATTRIBUTES *)v30 + 99),
          v106,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 16 * v30[200] + 8,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_41;
      case TokenAppContainerSid:
        v28 = 8;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result < 0 )
          return result;
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v31 = *((_QWORD *)v30 + 98);
        if ( v31 )
          v28 = 4 * *(unsigned __int8 *)(v31 + 1) + 16;
        *v14 = v28;
        if ( (unsigned int)v5 < v28 )
          goto LABEL_73;
        v32 = (char *)TokenInformation + 8;
        if ( !v31 )
          v32 = 0LL;
        *(_QWORD *)TokenInformation = v32;
        if ( v32 )
          RtlCopySid(v28 - 8, v32, *((PSID *)v30 + 98));
        goto LABEL_41;
      case TokenAppContainerNumber:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_75;
        v132 = KeGetCurrentThread();
        --v132->KernelApcDisable;
        v133 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v134 = *((_QWORD *)v133 + 135);
        if ( v134 )
          LODWORD(v9) = *(_DWORD *)(v134 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)v133 + 6));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        *(_DWORD *)TokenInformation = v9;
        goto LABEL_43;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result < 0 )
          return result;
        v71 = KeGetCurrentThread();
        --v71->KernelApcDisable;
        v19 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v72 = *((_QWORD *)v19 + 137);
        if ( v72
          && (*(_QWORD *)(v72 + 576) || TokenInformationClass != TokenUserClaimAttributes)
          && ((v74 = *(_DWORD **)(v72 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v74 = *(_DWORD **)(v72 + 576);
          AuthzBasepQueryClaimAttributesToken(v74, 0LL, 0, &v145);
          v73 = v145;
        }
        else
        {
          v73 = 16;
          LODWORD(v165[0]) = 0;
          v165[2] = &v165[1];
          v165[1] = &v165[1];
          LODWORD(v165[3]) = 0;
          v165[5] = &v165[4];
          v165[4] = &v165[4];
          v74 = v165;
        }
        *v14 = v73;
        if ( (unsigned int)v5 < v73 )
          goto LABEL_101;
        SecurityAttributesToken = AuthzBasepQueryClaimAttributesToken(v74, TokenInformation, v5, &v145);
        goto LABEL_112;
      case TokenDeviceGroups:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result < 0 )
          return result;
        v78 = KeGetCurrentThread();
        --v78->KernelApcDisable;
        v53 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v79 = *((_QWORD *)v53 + 137);
        if ( v79 && (v80 = *(_DWORD *)v79) != 0 )
        {
          v81 = 16 * v80 + 8;
        }
        else
        {
          v80 = 0;
          v81 = 24;
        }
        if ( v80 )
        {
          v135 = *(_QWORD *)(v79 + 8);
          v136 = v80;
          do
          {
            v81 += 4 * *(unsigned __int8 *)(*(_QWORD *)v135 + 1LL) + 8;
            v135 += 16LL;
            --v136;
          }
          while ( v136 );
        }
        *v14 = v81;
        if ( (unsigned int)v5 < v81 )
          goto LABEL_106;
        *(_QWORD *)TokenInformation = 0LL;
        *((_QWORD *)TokenInformation + 1) = 0LL;
        *((_QWORD *)TokenInformation + 2) = 0LL;
        *(_DWORD *)TokenInformation = v80;
        if ( v80 )
          RtlCopySidAndAttributesArray(
            v80,
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)v53 + 137) + 8LL),
            v81,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + 16 * v80 + 8,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        goto LABEL_85;
      case TokenSecurityAttributes:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result < 0 )
          return result;
        v65 = KeGetCurrentThread();
        --v65->KernelApcDisable;
        v19 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v66 = (_DWORD *)*((_QWORD *)v19 + 97);
        if ( v66 )
        {
          LODWORD(SidArea) = 0;
          AuthzBasepQuerySecurityAttributesToken(v66, 0LL, 0LL, 0LL, (size_t)SidArea, &v145);
          v67 = v145;
        }
        else
        {
          v67 = 16;
        }
        *v14 = v67;
        if ( (unsigned int)v5 < v67 )
          goto LABEL_101;
        LODWORD(SidArea) = v5;
        SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(
                                    *((_DWORD **)v19 + 97),
                                    0LL,
                                    0LL,
                                    TokenInformation,
                                    (size_t)SidArea,
                                    &v145);
LABEL_112:
        v68 = (struct _ERESOURCE *)*((_QWORD *)v19 + 6);
        goto LABEL_113;
      case TokenProcessTrustLevel:
        v57 = 8;
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result < 0 )
          return result;
        v58 = KeGetCurrentThread();
        --v58->KernelApcDisable;
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v59 = v141[0];
        v60 = SourceSid;
        if ( v141[0] )
          v61 = (unsigned __int8 *)SourceSid;
        else
          v61 = (unsigned __int8 *)*((_QWORD *)v30 + 138);
        if ( v61 )
          v57 = 4 * v61[1] + 16;
        *v14 = v57;
        if ( (unsigned int)v5 < v57 )
        {
LABEL_73:
          v51 = (struct _ERESOURCE *)*((_QWORD *)v30 + 6);
          goto LABEL_74;
        }
        v62 = (char *)TokenInformation + 8;
        if ( !v61 )
          v62 = 0LL;
        *(_QWORD *)TokenInformation = v62;
        if ( v62 )
        {
          if ( !v59 )
            v60 = (PSID)*((_QWORD *)v30 + 138);
          RtlCopySid(v57 - 8, v62, v60);
        }
LABEL_41:
        v33 = (struct _ERESOURCE *)*((_QWORD *)v30 + 6);
        goto LABEL_42;
      case TokenSingletonAttributes:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result < 0 )
          return result;
        v137 = KeGetCurrentThread();
        --v137->KernelApcDisable;
        v138 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                                    (__int64)v138,
                                    v139,
                                    0LL,
                                    0,
                                    1,
                                    TokenInformation,
                                    v5,
                                    v14);
        v68 = (struct _ERESOURCE *)*((_QWORD *)v138 + 6);
LABEL_113:
        ExReleaseResourceLite(v68);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        return SecurityAttributesToken;
      case TokenBnoIsolation:
        result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
        if ( result < 0 )
          return result;
        v82 = KeGetCurrentThread();
        --v82->KernelApcDisable;
        v19 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v83 = 16;
        v84 = *((_QWORD *)v19 + 144);
        if ( v84 )
          v83 = *(unsigned __int16 *)(v84 + 42) + 16;
        *v14 = v83;
        if ( (unsigned int)v5 < v83 )
          goto LABEL_101;
        if ( *((_QWORD *)v19 + 144) )
        {
          *((_BYTE *)TokenInformation + 8) = 1;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 16;
          memmove(
            (char *)TokenInformation + 16,
            *(const void **)(*((_QWORD *)v19 + 144) + 48LL),
            *(unsigned __int16 *)(*((_QWORD *)v19 + 144) + 42LL));
        }
        else
        {
          *((_BYTE *)TokenInformation + 8) = 0;
          *(_QWORD *)TokenInformation = 0LL;
        }
        v33 = (struct _ERESOURCE *)*((_QWORD *)v19 + 6);
        goto LABEL_42;
      default:
        return -1073741821;
    }
  }
  result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, &Object, v141, &SourceSid);
  if ( result >= 0 )
  {
    *v14 = 4;
    if ( (unsigned int)v5 >= 4 )
    {
      v34 = KeGetCurrentThread();
      --v34->KernelApcDisable;
      v35 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v36 = *((_DWORD *)v35 + 30);
      ExReleaseResourceLite(*((PERESOURCE *)v35 + 6));
      KeLeaveCriticalRegion();
      *(_DWORD *)TokenInformation = v36;
      *v14 = 4;
      v17 = v35;
LABEL_44:
      ObfDereferenceObject(v17);
      return 0;
    }
LABEL_75:
    v17 = Object;
LABEL_76:
    ObfDereferenceObject(v17);
    return -1073741789;
  }
  return result;
}
