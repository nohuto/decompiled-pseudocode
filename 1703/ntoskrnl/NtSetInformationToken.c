/*
 * XREFs of NtSetInformationToken @ 0x14046DB70
 * Callers:
 *     <none>
 * Callees:
 *     SepRemoveAceFromTokenDefaultDacl @ 0x140034AA4 (SepRemoveAceFromTokenDefaultDacl.c)
 *     SepLocateTokenIntegrity @ 0x140064184 (SepLocateTokenIntegrity.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400654EC (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlSubAuthorityCountSid @ 0x14008C0B0 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x14008C0C0 (RtlSubAuthoritySid.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     SepLinkLogonSessions @ 0x14014A49C (SepLinkLogonSessions.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140430FB8 (SepDereferenceLowBoxNumberEntry.c)
 *     SepIdAssignableAsOwner @ 0x1404461BC (SepIdAssignableAsOwner.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14044AC80 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepShouldSetDelinkFlags @ 0x1404544D4 (SepShouldSetDelinkFlags.c)
 *     SepStopReferencingLogonSession @ 0x140456BA0 (SepStopReferencingLogonSession.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140456C14 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SeSetVirtualizationToken @ 0x140458B80 (SeSetVirtualizationToken.c)
 *     SepDereferenceCachedHandlesEntry @ 0x140461664 (SepDereferenceCachedHandlesEntry.c)
 *     SepExpandDynamic @ 0x14046A140 (SepExpandDynamic.c)
 *     SepFreeDefaultDacl @ 0x14046A228 (SepFreeDefaultDacl.c)
 *     SepAppendDefaultDacl @ 0x14046A274 (SepAppendDefaultDacl.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046A2D4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSetMandatoryPolicyToken @ 0x14046E770 (SeSetMandatoryPolicyToken.c)
 *     SeSetSessionIdToken @ 0x14046E808 (SeSetSessionIdToken.c)
 *     SeCaptureAcl @ 0x14046E928 (SeCaptureAcl.c)
 *     SeReleaseAcl @ 0x14046EA50 (SeReleaseAcl.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14046FF24 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140470170 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseSid @ 0x140471664 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1404F32A8 (SeCaptureSid.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     SeSetPrivateNameSpaceToken @ 0x1406F0CA4 (SeSetPrivateNameSpaceToken.c)
 *     SepAppendPrimaryGroup @ 0x1406F0D80 (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x1406F0DEC (SepFreePrimaryGroup.c)
 *     SepModifyTokenPolicyCounter @ 0x1406F0E4C (SepModifyTokenPolicyCounter.c)
 *     SepCaptureAuditPolicy @ 0x1406F47D8 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x1406F4D14 (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x1406F4DE8 (SepIdAssignableAsGroup.c)
 *     SepRemoveTokenLogonSession @ 0x1406F77FC (SepRemoveTokenLogonSession.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  NTSTATUS v8; // edi
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v10; // rcx
  ACCESS_MASK v11; // edx
  NTSTATUS result; // eax
  _BYTE *v13; // rsi
  __int32 v14; // ebx
  __int32 v15; // ebx
  __int32 v16; // ebx
  __int32 v17; // ebx
  int v18; // ebx
  int v19; // ebx
  struct _KTHREAD *v20; // rax
  PERESOURCE *v21; // rbx
  _QWORD *v22; // rdx
  NTSTATUS v23; // ebx
  __int32 v24; // ebx
  __int32 v25; // ebx
  __int32 v26; // ebx
  __int32 v27; // ebx
  int v28; // ebx
  int v29; // eax
  void *v30; // rcx
  struct _KTHREAD *v31; // rax
  PVOID v32; // rsi
  char v33; // bl
  int v34; // edx
  int v35; // r8d
  int v36; // r9d
  struct _KTHREAD *v37; // rax
  struct _ERESOURCE *v38; // rcx
  ULONG v39; // ebx
  void *v40; // rcx
  struct _KTHREAD *v41; // rax
  PERESOURCE *v42; // rsi
  _QWORD *v43; // rbx
  unsigned int v44; // edx
  void *v45; // rcx
  __int64 v46; // rcx
  ACL *v47; // r14
  __int64 v48; // rdx
  int v49; // ebx
  PVOID v50; // rsi
  bool v51; // r12
  struct _KTHREAD *v52; // rax
  PERESOURCE *v53; // r13
  _DWORD *v54; // rbx
  PVOID v55; // rbx
  __int64 v56; // r13
  unsigned __int16 *v57; // rbx
  int v58; // edx
  UCHAR v59; // cl
  ULONG v60; // r12d
  struct _KTHREAD *v61; // rax
  char *v62; // rbx
  PSID *TokenIntegrity; // rax
  PSID *v64; // rsi
  PSID v65; // r13
  UCHAR v66; // cl
  ULONG v67; // eax
  unsigned __int8 v68; // al
  __int64 v69; // rdx
  ULONG v70; // ebx
  struct _KTHREAD *v71; // rax
  PVOID v72; // r15
  void *v73; // rcx
  void *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rdx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v78; // rbx
  _QWORD *v79; // rdx
  struct _KTHREAD *v80; // rax
  struct _KTHREAD *v81; // rax
  _QWORD *v82; // r8
  char *v83; // rbx
  _OWORD *v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdx
  struct _KTHREAD *v89; // rax
  PERESOURCE *v90; // rsi
  _QWORD *v91; // rbx
  __int64 v92; // rax
  __int64 v93; // r8
  __int64 v94; // rdx
  unsigned int v95; // esi
  struct _KTHREAD *v96; // rax
  __int64 v97; // rbx
  char v98; // al
  __int64 v99; // r8
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // rdx
  ULONG v103; // ebx
  __int64 v104; // rdx
  signed __int32 v105[8]; // [rsp+0h] [rbp-108h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-E8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-E0h]
  __int64 v108; // [rsp+30h] [rbp-D8h]
  PVOID Token; // [rsp+50h] [rbp-B8h] BYREF
  char v110; // [rsp+58h] [rbp-B0h]
  NTSTATUS v111; // [rsp+5Ch] [rbp-ACh]
  KPROCESSOR_MODE v112; // [rsp+60h] [rbp-A8h]
  unsigned int v113[3]; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v115; // [rsp+78h] [rbp-90h] BYREF
  __int64 v116; // [rsp+80h] [rbp-88h] BYREF
  PSID Sid1; // [rsp+88h] [rbp-80h] BYREF
  _OWORD *v118; // [rsp+90h] [rbp-78h] BYREF
  int v119; // [rsp+98h] [rbp-70h] BYREF
  ULONG v120; // [rsp+9Ch] [rbp-6Ch] BYREF
  ULONG v121; // [rsp+A0h] [rbp-68h]
  ULONG v122; // [rsp+A4h] [rbp-64h]
  PVOID P; // [rsp+A8h] [rbp-60h] BYREF
  PVOID v124; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v125; // [rsp+B8h] [rbp-50h] BYREF
  PERESOURCE *v126; // [rsp+C0h] [rbp-48h]
  ULONG v127; // [rsp+C8h] [rbp-40h]
  ULONG v128; // [rsp+CCh] [rbp-3Ch]
  ULONG v129; // [rsp+D0h] [rbp-38h]
  __int64 v130; // [rsp+D4h] [rbp-34h] BYREF
  __int64 v131; // [rsp+E0h] [rbp-28h]
  void *v132; // [rsp+E8h] [rbp-20h]

  v8 = 0;
  v110 = 0;
  v119 = 0;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v112 = PreviousMode;
  if ( PreviousMode && TokenInformationLength )
  {
    if ( ((unsigned __int8)TokenInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)TokenInformation + TokenInformationLength > 0x7FFFFFFF0000LL
      || (char *)TokenInformation + TokenInformationLength < TokenInformation )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( (unsigned int)TokenInformationClass > TokenPrivateNameSpace )
    return -1073741821;
  v10 = 0x4800F8B5070LL;
  if ( !_bittest64(&v10, TokenInformationClass) )
    return -1073741821;
  v11 = 128;
  if ( TokenInformationClass == TokenSessionId )
  {
    v11 = 384;
  }
  else if ( TokenInformationClass == TokenLinkedToken )
  {
    v11 = 136;
  }
  result = ObReferenceObjectByHandle(TokenHandle, v11, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  v13 = Token;
  *(_QWORD *)&v113[1] = Token;
  if ( result < 0 )
    return result;
  if ( TokenInformationClass > TokenLinkedToken )
  {
    v24 = TokenInformationClass - 23;
    if ( !v24 )
    {
      if ( TokenInformationLength != 4 )
        goto LABEL_173;
      v122 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
        goto LABEL_137;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v78 = Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v105, 0);
      v79 = Token;
      if ( v122 )
        *((_DWORD *)Token + 50) |= 0x200u;
      else
        *((_DWORD *)Token + 50) &= ~0x200u;
      goto LABEL_124;
    }
    v25 = v24 - 1;
    if ( !v25 )
    {
      if ( TokenInformationLength == 4 )
      {
        HIDWORD(v130) = *(_DWORD *)TokenInformation;
        SeSetVirtualizationToken((__int64)Token, SHIDWORD(v130));
        v23 = 0;
        goto LABEL_39;
      }
      goto LABEL_173;
    }
    v26 = v25 - 1;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v49 = v28 - 12;
          if ( v49 )
          {
            if ( v49 != 3 )
              return -1073741811;
            if ( TokenInformationLength != 4 )
              goto LABEL_173;
            v103 = *(_DWORD *)TokenInformation;
            v129 = *(_DWORD *)TokenInformation;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_137;
            v29 = SeSetPrivateNameSpaceToken(v13, v103);
          }
          else
          {
            if ( !TokenInformation || TokenInformationLength < 0x10 )
              goto LABEL_173;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_137;
            v29 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, PreviousMode, &v124);
            v111 = v29;
            if ( v29 >= 0 )
            {
              v50 = v124;
              v51 = SepShouldSetDelinkFlags(*((_DWORD **)v124 + 1), *(_QWORD *)v124) != 0;
              v52 = KeGetCurrentThread();
              --v52->KernelApcDisable;
              v53 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v105, 0);
              v54 = Token;
              v111 = AuthzBasepSetSecurityAttributesToken(
                       *((_DWORD **)Token + 97),
                       *((_DWORD **)v50 + 1),
                       *(_QWORD *)v124);
              if ( v111 >= 0 && v51 )
                v54[50] |= 0x20000u;
              *((_QWORD *)v54 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v105, 0);
              ExReleaseResourceLite(v53[6]);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              if ( PreviousMode )
              {
                ExFreePoolWithTag(*((PVOID *)v50 + 1), 0);
                v55 = v124;
                if ( *(_QWORD *)v124 )
                  SepFreeCapturedTokenSecurityAttributesInformation(*(_QWORD *)v124);
                ExFreePoolWithTag(v55, 0);
              }
              v23 = v111;
              goto LABEL_48;
            }
          }
        }
        else
        {
          if ( TokenInformationLength != 4 )
            goto LABEL_173;
          v120 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_137;
          if ( v13[204] )
          {
            v23 = -1073741525;
            goto LABEL_39;
          }
          v29 = SeSetMandatoryPolicyToken(v13, &v120);
        }
LABEL_38:
        v23 = v29;
LABEL_39:
        v30 = v13;
LABEL_40:
        ObfDereferenceObject(v30);
        return v23;
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_173;
      v121 = *(_DWORD *)TokenInformation;
      if ( v121 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        goto LABEL_137;
      v80 = KeGetCurrentThread();
      --v80->KernelApcDisable;
      v78 = Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v105, 0);
      v79 = Token;
      if ( v121 )
        *((_DWORD *)Token + 50) |= 0x1000u;
      else
        *((_DWORD *)Token + 50) &= ~0x1000u;
LABEL_124:
      v79[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v105, 0);
      v38 = (struct _ERESOURCE *)*((_QWORD *)v78 + 6);
      goto LABEL_47;
    }
    if ( TokenInformationLength < 0x10 )
      goto LABEL_173;
    v29 = SeCaptureSidAndAttributesArray(
            TokenInformation,
            0,
            (int)HandleInformation,
            v108,
            (__int64)&v125,
            (__int64)&v130);
    v111 = v29;
    if ( v29 < 0 )
      goto LABEL_38;
    v56 = v125;
    v57 = *(unsigned __int16 **)v125;
    v58 = *(_DWORD *)(*(_QWORD *)v125 + 2LL) - *(_DWORD *)(SeUntrustedMandatorySid + 2);
    if ( !v58 )
      v58 = v57[3] - *(unsigned __int16 *)(SeUntrustedMandatorySid + 6);
    if ( !v58 )
    {
      v59 = *RtlSubAuthorityCountSid(*(PSID *)v125);
      if ( !v59 )
      {
        v60 = 0;
LABEL_89:
        v61 = KeGetCurrentThread();
        --v61->KernelApcDisable;
        v126 = (PERESOURCE *)Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v105, 0);
        v62 = (char *)Token;
        TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)Token);
        v64 = TokenIntegrity;
        if ( TokenIntegrity )
        {
          v65 = *TokenIntegrity;
          v66 = *RtlSubAuthorityCountSid(*TokenIntegrity);
          if ( v66 )
            v67 = *RtlSubAuthoritySid(v65, (unsigned int)v66 - 1);
          else
            v67 = 0;
          if ( v60 <= v67 )
          {
LABEL_93:
            v68 = *((_BYTE *)*v64 + 1);
            if ( v68 )
            {
              *RtlSubAuthoritySid(*v64, (unsigned int)v68 - 1) = v60;
              if ( v60 < 0x3000 )
              {
                *((_QWORD *)v62 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
                *((_QWORD *)v62 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
              }
              if ( v60 < 0x2000 )
              {
                *((_QWORD *)v62 + 9) &= 0x202800000uLL;
                *((_QWORD *)v62 + 10) &= 0x202800000uLL;
                *((_DWORD *)v62 + 50) &= ~0x2000u;
              }
              else
              {
                if ( (*((_DWORD *)v62 + 50) & 0x4000) != 0 )
                {
                  SepRemoveAceFromTokenDefaultDacl((__int64)v62, *((_QWORD *)v62 + 98));
                  *((_DWORD *)v62 + 50) &= ~0x4000u;
                  v73 = (void *)*((_QWORD *)v62 + 98);
                  if ( v73 )
                  {
                    ExFreePoolWithTag(v73, 0);
                    *((_QWORD *)v62 + 98) = 0LL;
                  }
                  v74 = (void *)*((_QWORD *)v62 + 99);
                  if ( v74 )
                  {
                    ExFreePoolWithTag(v74, 0);
                    *((_QWORD *)v62 + 99) = 0LL;
                    *((_DWORD *)v62 + 200) = 0;
                    memset(v62 + 808, 0, 0x110uLL);
                  }
                  v75 = *((_QWORD *)v62 + 135);
                  if ( v75 )
                  {
                    SepDereferenceLowBoxNumberEntry(*((_DWORD *)v62 + 30), v75);
                    *((_QWORD *)v62 + 135) = 0LL;
                  }
                  v76 = *((_QWORD *)v62 + 136);
                  if ( v76 )
                  {
                    SepDereferenceCachedHandlesEntry(*((_QWORD *)v62 + 27), v76);
                    *((_QWORD *)v62 + 136) = 0LL;
                  }
                }
                *((_DWORD *)v62 + 50) |= 0x2000u;
              }
              *((_QWORD *)v62 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              v23 = 0;
            }
            else
            {
              v23 = -1073741811;
            }
            goto LABEL_100;
          }
          if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            if ( !v62[204] )
              goto LABEL_93;
            v23 = -1073741525;
          }
          else
          {
            v23 = -1073741727;
          }
        }
        else
        {
          v23 = -1073740730;
        }
LABEL_100:
        _InterlockedOr(v105, 0);
        ExReleaseResourceLite(v126[6]);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Token);
        LOBYTE(v69) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v125, v69);
        return v23;
      }
      v60 = *RtlSubAuthoritySid(v57, (unsigned int)v59 - 1);
      if ( v60 <= 0x4000 )
        goto LABEL_89;
    }
    ObfDereferenceObject(v13);
    LOBYTE(v104) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v56, v104);
    return -1073740730;
  }
  if ( TokenInformationClass == TokenLinkedToken )
  {
    if ( TokenInformationLength != 8 )
      goto LABEL_173;
    v132 = *(void **)TokenInformation;
    v29 = SepLinkLogonSessions((__int64)Token, v132, PreviousMode);
    goto LABEL_38;
  }
  v14 = TokenInformationClass - 4;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 6;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( !v18 )
          {
            if ( TokenInformationLength != 4 )
              goto LABEL_173;
            v70 = *(_DWORD *)TokenInformation;
            v127 = *(_DWORD *)TokenInformation;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_137;
            if ( v70 )
            {
              v23 = -1073741811;
              goto LABEL_39;
            }
            v71 = KeGetCurrentThread();
            --v71->KernelApcDisable;
            v72 = Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v105, 0);
            v13 = Token;
            if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
            {
              if ( SeTokenLeakTracking )
                SepRemoveTokenLogonSession(Token);
              v23 = SepStopReferencingLogonSession((__int64)v13);
              v111 = v23;
              if ( v23 < 0 )
                goto LABEL_39;
            }
            _InterlockedOr(v105, 0);
            v38 = (struct _ERESOURCE *)*((_QWORD *)v72 + 6);
            goto LABEL_47;
          }
          v19 = v18 - 2;
          if ( v19 )
          {
            if ( v19 == 1 )
            {
              if ( TokenInformationLength == 8 )
              {
                v131 = *(_QWORD *)TokenInformation;
                if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                {
                  v20 = KeGetCurrentThread();
                  --v20->KernelApcDisable;
                  v21 = (PERESOURCE *)Token;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                  _InterlockedOr(v105, 0);
                  v22 = Token;
                  if ( !*((_QWORD *)Token + 28) )
                    *((_QWORD *)Token + 28) = v131;
                  v22[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v105, 0);
                  ExReleaseResourceLite(v21[6]);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                  v23 = 0;
                  goto LABEL_48;
                }
LABEL_137:
                v23 = -1073741727;
                goto LABEL_39;
              }
LABEL_173:
              v23 = -1073741820;
              goto LABEL_39;
            }
            return -1073741811;
          }
          v118 = 0LL;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_137;
          v31 = KeGetCurrentThread();
          --v31->KernelApcDisable;
          v32 = Token;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
          v33 = *((_BYTE *)v32 + 118);
          ExReleaseResourceLite(*((PERESOURCE *)v32 + 6));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          if ( v33 )
          {
            v23 = -1073741811;
            goto LABEL_48;
          }
          if ( !TokenInformation )
          {
            v37 = KeGetCurrentThread();
            --v37->KernelApcDisable;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)v32 + 6), 1u);
            _InterlockedOr(v105, 0);
            *((_BYTE *)v32 + 118) = 1;
            *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v105, 0);
            v38 = (struct _ERESOURCE *)*((_QWORD *)v32 + 6);
LABEL_47:
            ExReleaseResourceLite(v38);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v23 = 0;
LABEL_48:
            v13 = Token;
            goto LABEL_39;
          }
          LOBYTE(v34) = PreviousMode;
          v23 = SepCaptureAuditPolicy(
                  (_DWORD)TokenInformation,
                  v34,
                  v35,
                  v36,
                  (_DWORD)Object,
                  (_DWORD)HandleInformation,
                  (__int64)&v118);
          v111 = v23;
          if ( v23 < 0 )
            goto LABEL_48;
          v81 = KeGetCurrentThread();
          --v81->KernelApcDisable;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)v32 + 6), 1u);
          _InterlockedOr(v105, 0);
          *((_BYTE *)v32 + 118) = 2;
          v82 = Token;
          v83 = (char *)Token + 88;
          v84 = v118;
          *(_OWORD *)((char *)Token + 88) = *v118;
          *((_QWORD *)v83 + 2) = *((_QWORD *)v84 + 2);
          *((_DWORD *)v83 + 6) = *((_DWORD *)v84 + 6);
          *((_WORD *)v83 + 14) = *((_WORD *)v84 + 14);
          v82[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          _InterlockedOr(v105, 0);
          ExReleaseResourceLite(*((PERESOURCE *)v32 + 6));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          LOBYTE(v85) = 1;
          SepModifyTokenPolicyCounter(v83, v85);
          ObfDereferenceObject(Token);
          LOBYTE(v86) = PreviousMode;
          SepReleaseAuditPolicy(v118, v86);
          return 0;
        }
        if ( TokenInformationLength == 4 )
        {
          v39 = *(_DWORD *)TokenInformation;
          v128 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_137;
          v29 = SeSetSessionIdToken(v13, v39);
          goto LABEL_38;
        }
LABEL_160:
        ObfDereferenceObject(Token);
        return -1073741820;
      }
      if ( TokenInformationLength < 8 )
        goto LABEL_160;
      v40 = *(void **)TokenInformation;
      v115 = (__int64)v40;
      if ( v40 )
      {
        v23 = SeCaptureAcl(v40, PagedPool, (int)HandleInformation, (__int64)&v115, (__int64)v113);
        v111 = v23;
      }
      else
      {
        v113[0] = 0;
        v23 = 0;
        v111 = 0;
      }
      if ( v23 < 0 )
        goto LABEL_39;
      v41 = KeGetCurrentThread();
      --v41->KernelApcDisable;
      v42 = (PERESOURCE *)Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v105, 0);
      v43 = Token;
      v44 = v113[0] + 8 + 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
      v113[0] = v44;
      if ( v44 > *((_DWORD *)Token + 34) )
      {
        _InterlockedOr(v105, 0);
        ExReleaseResourceLite(v42[6]);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Token);
        if ( v115 )
        {
          LOBYTE(v87) = PreviousMode;
          SeReleaseAcl(v115, v87);
        }
        return -1073741671;
      }
      else
      {
        v111 = SepExpandDynamic((__int64)Token, v44);
        if ( v111 >= 0 )
        {
          v45 = (void *)v43[23];
          if ( !v45
            || (v111 = SeCaptureAcl(v45, PagedPool, (int)HandleInformation, (__int64)&P, (__int64)&v119), v111 >= 0) )
          {
            SepFreeDefaultDacl((__int64)v43);
            v47 = (ACL *)v115;
            if ( v115 )
              SepAppendDefaultDacl((__int64)v43, (unsigned __int16 *)v115);
            SeTokenDefaultDaclChangedAuditAlarm(v46, (__int64)v43, (__int64)TokenHandle, (ACL *)P, v47);
            v43[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v105, 0);
            ExReleaseResourceLite(v42[6]);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            ObfDereferenceObject(Token);
            if ( v115 )
            {
              LOBYTE(v48) = PreviousMode;
              SeReleaseAcl(v115, v48);
            }
            if ( P )
              ExFreePoolWithTag(P, 0);
            return 0;
          }
        }
        _InterlockedOr(v105, 0);
        ExReleaseResourceLite(v42[6]);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Token);
        if ( v115 )
        {
          LOBYTE(v88) = PreviousMode;
          SeReleaseAcl(v115, v88);
        }
        return v111;
      }
    }
    else
    {
      if ( TokenInformationLength < 8 )
        goto LABEL_160;
      v116 = *(_QWORD *)TokenInformation;
      v23 = SeCaptureSid((void *)v116, (int)Object, 1, (__int64)&v116);
      v111 = v23;
      v30 = v13;
      if ( v23 < 0 )
        goto LABEL_40;
      if ( (unsigned __int8)SepIdAssignableAsGroup(v13, v116) )
      {
        v113[0] = 4 * *(unsigned __int8 *)(v116 + 1) + 8;
        v89 = KeGetCurrentThread();
        --v89->KernelApcDisable;
        v90 = (PERESOURCE *)Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v105, 0);
        v91 = Token;
        v92 = *((_QWORD *)Token + 23);
        if ( v92 )
          v113[0] += *(unsigned __int16 *)(v92 + 2);
        if ( v113[0] <= *((_DWORD *)Token + 34) )
        {
          v111 = SepExpandDynamic((__int64)Token, v113[0]);
          if ( v111 >= 0 )
          {
            SepFreePrimaryGroup(v91);
            SepAppendPrimaryGroup(v91, v116);
            v91[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v105, 0);
            ExReleaseResourceLite(v90[6]);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          }
          else
          {
            _InterlockedOr(v105, 0);
            ExReleaseResourceLite(v90[6]);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v8 = v111;
          }
        }
        else
        {
          _InterlockedOr(v105, 0);
          ExReleaseResourceLite(v90[6]);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v8 = -1073741671;
        }
        v13 = Token;
      }
      else
      {
        v8 = -1073741733;
      }
      ObfDereferenceObject(v13);
      LOBYTE(v93) = 1;
      LOBYTE(v94) = PreviousMode;
      SeReleaseSid(v116, v94, v93);
      return v8;
    }
  }
  else
  {
    if ( TokenInformationLength < 8 )
      goto LABEL_160;
    Sid1 = *(PSID *)TokenInformation;
    v23 = SeCaptureSid(Sid1, (int)Object, 1, (__int64)&Sid1);
    v111 = v23;
    if ( v23 < 0 )
      goto LABEL_39;
    v95 = 0;
    v96 = KeGetCurrentThread();
    --v96->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
    _InterlockedOr(v105, 0);
    v97 = *(_QWORD *)&v113[1];
    while ( v95 < *(_DWORD *)(v97 + 124) )
    {
      if ( RtlEqualSid(Sid1, *(PSID *)(*(_QWORD *)(v97 + 152) + 16LL * v95)) )
      {
        if ( SepIdAssignableAsOwner(v97, v95) )
        {
          *(_DWORD *)(v97 + 144) = v95;
          v98 = 1;
          v110 = 1;
          v111 = 0;
        }
        else
        {
          v111 = -1073741734;
          v98 = v110;
        }
        if ( v98 )
        {
          v126 = (PERESOURCE *)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
          *(_QWORD *)(v97 + 56) = v126;
        }
        _InterlockedOr(v105, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v113[1] + 48LL));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(*(PVOID *)&v113[1]);
        LOBYTE(v99) = 1;
        LOBYTE(v100) = PreviousMode;
        SeReleaseSid(Sid1, v100, v99);
        return v111;
      }
      ++v95;
    }
    if ( v110 )
      *(_QWORD *)(v97 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v105, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v113[1] + 48LL));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObfDereferenceObject(*(PVOID *)&v113[1]);
    LOBYTE(v101) = 1;
    LOBYTE(v102) = PreviousMode;
    SeReleaseSid(Sid1, v102, v101);
    return -1073741734;
  }
}
