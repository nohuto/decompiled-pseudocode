/*
 * XREFs of NtSetInformationToken @ 0x1404690B0
 * Callers:
 *     <none>
 * Callees:
 *     SepRemoveAceFromTokenDefaultDacl @ 0x14000A6F4 (SepRemoveAceFromTokenDefaultDacl.c)
 *     RtlSubAuthorityCountSid @ 0x140019310 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x140019320 (RtlSubAuthoritySid.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14001A0A0 (AuthzBasepSetSecurityAttributesToken.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     SepLocateTokenIntegrity @ 0x1400878E8 (SepLocateTokenIntegrity.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     SepLinkLogonSessions @ 0x1401523CC (SepLinkLogonSessions.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SeCaptureAcl @ 0x14045C3BC (SeCaptureAcl.c)
 *     SeReleaseAcl @ 0x14045D074 (SeReleaseAcl.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14045DA2C (SeReleaseLuidAndAttributesArray.c)
 *     SeReleaseSid @ 0x140460948 (SeReleaseSid.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x14046C5E4 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepShouldSetDelinkFlags @ 0x14046C684 (SepShouldSetDelinkFlags.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14046C6E4 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046D680 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeCaptureSid @ 0x140487010 (SeCaptureSid.c)
 *     SeCaptureSidAndAttributesArray @ 0x140488B20 (SeCaptureSidAndAttributesArray.c)
 *     SepDereferenceCachedHandlesEntry @ 0x14048D324 (SepDereferenceCachedHandlesEntry.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14048D434 (SepDereferenceLowBoxNumberEntry.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     SeSetSessionIdToken @ 0x140563A28 (SeSetSessionIdToken.c)
 *     SepIdAssignableAsOwner @ 0x14057EE18 (SepIdAssignableAsOwner.c)
 *     SeSetMandatoryPolicyToken @ 0x14058B13C (SeSetMandatoryPolicyToken.c)
 *     SepAppendDefaultDacl @ 0x14058D310 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x14058D370 (SepFreeDefaultDacl.c)
 *     SepExpandDynamic @ 0x14058D3BC (SepExpandDynamic.c)
 *     SeSetVirtualizationToken @ 0x140598C58 (SeSetVirtualizationToken.c)
 *     SepStopReferencingLogonSession @ 0x1405D9B60 (SepStopReferencingLogonSession.c)
 *     SeSetPrivateNameSpaceToken @ 0x1407286C4 (SeSetPrivateNameSpaceToken.c)
 *     SepAppendPrimaryGroup @ 0x1407287A0 (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x14072880C (SepFreePrimaryGroup.c)
 *     SepModifyTokenPolicyCounter @ 0x14072886C (SepModifyTokenPolicyCounter.c)
 *     SepCaptureAuditPolicy @ 0x14072C238 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x14072C760 (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x14072C834 (SepIdAssignableAsGroup.c)
 *     SepRemoveTokenLogonSession @ 0x14072F3CC (SepRemoveTokenLogonSession.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  NTSTATUS v8; // edi
  char PreviousMode; // r15
  __int64 v10; // rcx
  ACCESS_MASK v11; // edx
  NTSTATUS result; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // rsi
  __int32 v16; // ebx
  __int32 v17; // ebx
  __int32 v18; // ebx
  __int32 v19; // ebx
  int v20; // ebx
  int v21; // ebx
  struct _KTHREAD *v22; // rax
  PVOID v23; // rsi
  char v24; // bl
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  struct _KTHREAD *v28; // rax
  struct _ERESOURCE *v29; // rcx
  NTSTATUS v30; // ebx
  __int32 v31; // ebx
  __int32 v32; // ebx
  __int32 v33; // ebx
  __int32 v34; // ebx
  int v35; // ebx
  __int64 v36; // rdx
  int v37; // eax
  int **v38; // rsi
  bool v39; // r12
  struct _KTHREAD *v40; // rax
  PERESOURCE *v41; // r13
  _DWORD *v42; // rbx
  PVOID v43; // rbx
  void *v44; // rcx
  ULONG v45; // ebx
  unsigned int v46; // ebx
  struct _KTHREAD *v47; // rax
  PVOID v48; // r15
  int v49; // ebx
  struct _KTHREAD *v50; // rax
  PERESOURCE *v51; // rbx
  _QWORD *v52; // rdx
  char *v53; // rcx
  struct _KTHREAD *v54; // rax
  PERESOURCE *v55; // rsi
  PVOID v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  char *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // r14
  void *v63; // r13
  unsigned __int16 *v64; // rbx
  int v65; // edx
  UCHAR v66; // cl
  ULONG v67; // r12d
  struct _KTHREAD *v68; // rax
  _QWORD *v69; // rbx
  PSID *TokenIntegrity; // rax
  PSID *v71; // rsi
  PSID v72; // r13
  UCHAR v73; // cl
  ULONG v74; // eax
  unsigned __int8 v75; // al
  void *v76; // rcx
  void *v77; // rcx
  struct _KTHREAD *v78; // rax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v80; // rbx
  _QWORD *v81; // rdx
  struct _KTHREAD *v82; // rax
  _QWORD *v83; // r8
  char *v84; // rbx
  _OWORD *v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rdx
  struct _KTHREAD *v88; // rax
  PERESOURCE *v89; // rsi
  _QWORD *v90; // rbx
  __int64 v91; // rax
  unsigned int v92; // esi
  struct _KTHREAD *v93; // rax
  __int64 v94; // rbx
  char v95; // al
  int v96; // ebx
  struct _KTHREAD *v97; // rax
  PERESOURCE *v98; // rbx
  unsigned int v99; // ebx
  signed __int32 v100[8]; // [rsp+0h] [rbp-108h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-E8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-E0h]
  __int64 v103; // [rsp+30h] [rbp-D8h]
  PVOID Token; // [rsp+50h] [rbp-B8h] BYREF
  char v105; // [rsp+58h] [rbp-B0h]
  NTSTATUS v106; // [rsp+5Ch] [rbp-ACh]
  char v107; // [rsp+60h] [rbp-A8h]
  unsigned int v108[3]; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v110; // [rsp+78h] [rbp-90h] BYREF
  __int64 v111; // [rsp+80h] [rbp-88h] BYREF
  PSID Sid1; // [rsp+88h] [rbp-80h] BYREF
  _OWORD *v113; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v114; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v115; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v116; // [rsp+A0h] [rbp-68h] BYREF
  int v117; // [rsp+A4h] [rbp-64h]
  PVOID v118; // [rsp+A8h] [rbp-60h] BYREF
  PVOID P; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v120; // [rsp+B8h] [rbp-50h] BYREF
  PERESOURCE *v121; // [rsp+C0h] [rbp-48h]
  unsigned int v122; // [rsp+C8h] [rbp-40h]
  ULONG v123; // [rsp+CCh] [rbp-3Ch]
  unsigned int v124; // [rsp+D0h] [rbp-38h]
  unsigned int v125; // [rsp+D4h] [rbp-34h]
  __int64 v126; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v127; // [rsp+E0h] [rbp-28h]
  void *v128; // [rsp+E8h] [rbp-20h]

  v8 = 0;
  v105 = 0;
  v114 = 0;
  v118 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v107 = PreviousMode;
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
  if ( (unsigned int)TokenInformationClass > TokenChildProcessFlags )
    return -1073741821;
  v10 = 0x24800F8B5070LL;
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
  v15 = Token;
  *(_QWORD *)&v108[1] = Token;
  if ( result < 0 )
    return result;
  if ( TokenInformationClass > TokenVirtualizationAllowed )
  {
    v31 = TokenInformationClass - 24;
    if ( !v31 )
    {
      if ( TokenInformationLength == 4 )
      {
        HIDWORD(v126) = *(_DWORD *)TokenInformation;
        SeSetVirtualizationToken(Token);
        v30 = 0;
        goto LABEL_44;
      }
      goto LABEL_132;
    }
    v32 = v31 - 1;
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( !v33 )
      {
        if ( TokenInformationLength == 4 )
        {
          v117 = *(_DWORD *)TokenInformation;
          if ( !v117 || SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v80 = Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v100, 0);
            v81 = Token;
            if ( v117 )
              *((_DWORD *)Token + 50) |= 0x1000u;
            else
              *((_DWORD *)Token + 50) &= ~0x1000u;
            v81[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v100, 0);
            v29 = (struct _ERESOURCE *)*((_QWORD *)v80 + 6);
            goto LABEL_27;
          }
          goto LABEL_137;
        }
        goto LABEL_132;
      }
      v34 = v33 - 1;
      if ( v34 )
      {
        v35 = v34 - 12;
        if ( !v35 )
        {
          if ( !TokenInformation || TokenInformationLength < 0x10 )
            goto LABEL_132;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_137;
          LOBYTE(v36) = PreviousMode;
          v37 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, v36, &P);
          v106 = v37;
          if ( v37 >= 0 )
          {
            v38 = (int **)P;
            v39 = (unsigned __int8)SepShouldSetDelinkFlags(*((_QWORD *)P + 1), *(_QWORD *)P) != 0;
            v40 = KeGetCurrentThread();
            --v40->KernelApcDisable;
            v41 = (PERESOURCE *)Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v100, 0);
            v42 = Token;
            v106 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)Token + 97), v38[1], *(_QWORD *)P);
            if ( v106 >= 0 && v39 )
              v42[50] |= 0x20000u;
            *((_QWORD *)v42 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v100, 0);
            ExReleaseResourceLite(v41[6]);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            if ( PreviousMode )
            {
              ExFreePoolWithTag(v38[1], 0);
              v43 = P;
              if ( *(_QWORD *)P )
                SepFreeCapturedTokenSecurityAttributesInformation(*(PVOID *)P);
              ExFreePoolWithTag(v43, 0);
            }
            v30 = v106;
            goto LABEL_43;
          }
          goto LABEL_52;
        }
        v96 = v35 - 3;
        if ( !v96 )
        {
          if ( TokenInformationLength != 4 )
            goto LABEL_132;
          v99 = *(_DWORD *)TokenInformation;
          v125 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_137;
          v37 = SeSetPrivateNameSpaceToken(v15, v99);
          goto LABEL_52;
        }
        if ( v96 == 3 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_137;
          if ( TokenInformationLength == 4 )
          {
            v124 = *(_DWORD *)TokenInformation;
            if ( !v124 && (v15[50] & 0x80000) != 0 )
            {
              v97 = KeGetCurrentThread();
              --v97->KernelApcDisable;
              v98 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v100, 0);
              v15[50] &= ~0x80000u;
              *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v100, 0);
              ExReleaseResourceLite(v98[6]);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              v15 = Token;
            }
            ObfDereferenceObject(v15);
            return 0;
          }
          goto LABEL_132;
        }
        return -1073741811;
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_132;
      v116 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        goto LABEL_137;
      if ( *((_BYTE *)v15 + 204) )
      {
        v30 = -1073741525;
        goto LABEL_44;
      }
      v37 = SeSetMandatoryPolicyToken(v15, &v116);
LABEL_52:
      v30 = v37;
      goto LABEL_44;
    }
    if ( TokenInformationLength < 0x10 )
      goto LABEL_132;
    v37 = SeCaptureSidAndAttributesArray(
            TokenInformation,
            0,
            (int)HandleInformation,
            v103,
            (__int64)&v120,
            (__int64)&v126);
    v106 = v37;
    if ( v37 < 0 )
      goto LABEL_52;
    v63 = (void *)v120;
    v64 = *(unsigned __int16 **)v120;
    v65 = *(_DWORD *)(*(_QWORD *)v120 + 2LL) - *(_DWORD *)((char *)SeUntrustedMandatorySid + 2);
    if ( !v65 )
      v65 = v64[3] - *((unsigned __int16 *)SeUntrustedMandatorySid + 3);
    if ( !v65 )
    {
      v66 = *RtlSubAuthorityCountSid(*(PSID *)v120);
      if ( !v66 )
      {
        v67 = 0;
LABEL_96:
        v68 = KeGetCurrentThread();
        --v68->KernelApcDisable;
        v121 = (PERESOURCE *)Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v100, 0);
        v69 = Token;
        TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)Token);
        v71 = TokenIntegrity;
        if ( TokenIntegrity )
        {
          v72 = *TokenIntegrity;
          v73 = *RtlSubAuthorityCountSid(*TokenIntegrity);
          if ( v73 )
            v74 = *RtlSubAuthoritySid(v72, (unsigned int)v73 - 1);
          else
            v74 = 0;
          if ( v67 <= v74 )
          {
LABEL_102:
            v75 = *((_BYTE *)*v71 + 1);
            if ( v75 )
            {
              *RtlSubAuthoritySid(*v71, (unsigned int)v75 - 1) = v67;
              if ( v67 < 0x3000 )
              {
                v69[9] &= 0xFFFFFFEEDFE9F97BuLL;
                v69[10] &= 0xFFFFFFEEDFE9F97BuLL;
              }
              if ( v67 < 0x2000 )
              {
                v69[9] &= 0x202800000uLL;
                v69[10] &= 0x202800000uLL;
                *((_DWORD *)v69 + 50) &= ~0x2000u;
              }
              else
              {
                if ( (v69[25] & 0x4000) != 0 )
                {
                  SepRemoveAceFromTokenDefaultDacl((__int64)v69, v69[98]);
                  *((_DWORD *)v69 + 50) &= ~0x4000u;
                  v76 = (void *)v69[98];
                  if ( v76 )
                  {
                    ExFreePoolWithTag(v76, 0);
                    v69[98] = 0LL;
                  }
                  v77 = (void *)v69[99];
                  if ( v77 )
                  {
                    ExFreePoolWithTag(v77, 0);
                    v69[99] = 0LL;
                    *((_DWORD *)v69 + 200) = 0;
                    memset(v69 + 101, 0, 0x110uLL);
                  }
                  if ( v69[135] )
                  {
                    SepDereferenceLowBoxNumberEntry(*((unsigned int *)v69 + 30));
                    v69[135] = 0LL;
                  }
                  if ( v69[136] )
                  {
                    SepDereferenceCachedHandlesEntry(v69[27]);
                    v69[136] = 0LL;
                  }
                }
                *((_DWORD *)v69 + 50) |= 0x2000u;
              }
              v69[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              v30 = 0;
            }
            else
            {
              v30 = -1073741811;
            }
            goto LABEL_117;
          }
          if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            if ( !*((_BYTE *)v69 + 204) )
              goto LABEL_102;
            v30 = -1073741525;
          }
          else
          {
            v30 = -1073741727;
          }
        }
        else
        {
          v30 = -1073740730;
        }
LABEL_117:
        _InterlockedOr(v100, 0);
        ExReleaseResourceLite(v121[6]);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Token);
        SeReleaseLuidAndAttributesArray((void *)v120, PreviousMode);
        return v30;
      }
      v67 = *RtlSubAuthoritySid(v64, (unsigned int)v66 - 1);
      if ( v67 <= 0x4000 )
        goto LABEL_96;
    }
    ObfDereferenceObject(v15);
    SeReleaseLuidAndAttributesArray(v63, PreviousMode);
    return -1073740730;
  }
  if ( TokenInformationClass == TokenVirtualizationAllowed )
  {
    if ( TokenInformationLength == 4 )
    {
      v115 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
        goto LABEL_137;
      v78 = KeGetCurrentThread();
      --v78->KernelApcDisable;
      v51 = (PERESOURCE *)Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v100, 0);
      v52 = Token;
      if ( v115 )
        *((_DWORD *)Token + 50) |= 0x200u;
      else
        *((_DWORD *)Token + 50) &= ~0x200u;
      goto LABEL_72;
    }
LABEL_132:
    v30 = -1073741820;
    goto LABEL_44;
  }
  v16 = TokenInformationClass - 4;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 6;
        if ( v19 )
        {
          v20 = v19 - 2;
          if ( !v20 )
          {
            if ( TokenInformationLength == 4 )
            {
              v46 = *(_DWORD *)TokenInformation;
              v122 = *(_DWORD *)TokenInformation;
              if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              {
                if ( v46 )
                {
                  v30 = -1073741811;
                  goto LABEL_44;
                }
                v47 = KeGetCurrentThread();
                --v47->KernelApcDisable;
                v48 = Token;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                _InterlockedOr(v100, 0);
                v15 = Token;
                if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
                {
                  if ( SeTokenLeakTracking )
                    SepRemoveTokenLogonSession(Token);
                  v30 = SepStopReferencingLogonSession(v15);
                  v106 = v30;
                  if ( v30 < 0 )
                    goto LABEL_44;
                }
                _InterlockedOr(v100, 0);
                v29 = (struct _ERESOURCE *)*((_QWORD *)v48 + 6);
                goto LABEL_27;
              }
              goto LABEL_137;
            }
            goto LABEL_132;
          }
          v21 = v20 - 2;
          if ( !v21 )
          {
            v113 = 0LL;
            if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            {
              v22 = KeGetCurrentThread();
              --v22->KernelApcDisable;
              v23 = Token;
              ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
              v24 = *((_BYTE *)v23 + 118);
              ExReleaseResourceLite(*((PERESOURCE *)v23 + 6));
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              if ( v24 )
              {
                v30 = -1073741811;
                goto LABEL_43;
              }
              if ( !TokenInformation )
              {
                v28 = KeGetCurrentThread();
                --v28->KernelApcDisable;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)v23 + 6), 1u);
                _InterlockedOr(v100, 0);
                *((_BYTE *)v23 + 118) = 1;
                *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v100, 0);
                v29 = (struct _ERESOURCE *)*((_QWORD *)v23 + 6);
LABEL_27:
                ExReleaseResourceLite(v29);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                v30 = 0;
LABEL_43:
                v15 = Token;
LABEL_44:
                v44 = v15;
LABEL_45:
                ObfDereferenceObject(v44);
                return v30;
              }
              LOBYTE(v25) = PreviousMode;
              v30 = SepCaptureAuditPolicy(
                      (_DWORD)TokenInformation,
                      v25,
                      v26,
                      v27,
                      (_DWORD)Object,
                      (_DWORD)HandleInformation,
                      (__int64)&v113);
              v106 = v30;
              if ( v30 < 0 )
                goto LABEL_43;
              v82 = KeGetCurrentThread();
              --v82->KernelApcDisable;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)v23 + 6), 1u);
              _InterlockedOr(v100, 0);
              *((_BYTE *)v23 + 118) = 2;
              v83 = Token;
              v84 = (char *)Token + 88;
              v85 = v113;
              *(_OWORD *)((char *)Token + 88) = *v113;
              *((_QWORD *)v84 + 2) = *((_QWORD *)v85 + 2);
              *((_DWORD *)v84 + 6) = *((_DWORD *)v85 + 6);
              *((_WORD *)v84 + 14) = *((_WORD *)v85 + 14);
              v83[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v100, 0);
              ExReleaseResourceLite(*((PERESOURCE *)v23 + 6));
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              LOBYTE(v86) = 1;
              SepModifyTokenPolicyCounter(v84, v86);
              ObfDereferenceObject(Token);
              LOBYTE(v87) = PreviousMode;
              SepReleaseAuditPolicy(v113, v87);
              return 0;
            }
LABEL_137:
            v30 = -1073741727;
            goto LABEL_44;
          }
          v49 = v21 - 1;
          if ( !v49 )
          {
            if ( TokenInformationLength == 8 )
            {
              v127 = *(_QWORD *)TokenInformation;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_137;
              v50 = KeGetCurrentThread();
              --v50->KernelApcDisable;
              v51 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v100, 0);
              v52 = Token;
              if ( !*((_QWORD *)Token + 28) )
                *((_QWORD *)Token + 28) = v127;
LABEL_72:
              v52[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v100, 0);
              ExReleaseResourceLite(v51[6]);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              v30 = 0;
              goto LABEL_43;
            }
            goto LABEL_132;
          }
          if ( v49 == 2 )
          {
            if ( TokenInformationLength != 8 )
              goto LABEL_132;
            v128 = *(void **)TokenInformation;
            v37 = SepLinkLogonSessions((__int64)Token, v128, PreviousMode);
            goto LABEL_52;
          }
          return -1073741811;
        }
        if ( TokenInformationLength == 4 )
        {
          v45 = *(_DWORD *)TokenInformation;
          v123 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_137;
          v37 = SeSetSessionIdToken(v15, v45);
          goto LABEL_52;
        }
LABEL_160:
        ObfDereferenceObject(Token);
        return -1073741820;
      }
      if ( TokenInformationLength < 8 )
        goto LABEL_160;
      v53 = *(char **)TokenInformation;
      v110 = (__int64)v53;
      if ( v53 )
      {
        v30 = SeCaptureAcl(v53, PreviousMode, v13, v14, PagedPool, (int)HandleInformation, (PVOID *)&v110, v108);
        v106 = v30;
      }
      else
      {
        v108[0] = 0;
        v30 = 0;
        v106 = 0;
      }
      if ( v30 < 0 )
        goto LABEL_44;
      v54 = KeGetCurrentThread();
      --v54->KernelApcDisable;
      v55 = (PERESOURCE *)Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v100, 0);
      v56 = Token;
      v57 = v108[0] + 8 + 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
      v108[0] = v57;
      if ( (unsigned int)v57 > *((_DWORD *)Token + 34) )
      {
        _InterlockedOr(v100, 0);
        ExReleaseResourceLite(v55[6]);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Token);
        if ( v110 )
          SeReleaseAcl((void *)v110, PreviousMode);
        return -1073741671;
      }
      else
      {
        v106 = SepExpandDynamic(Token, v57);
        if ( v106 >= 0 )
        {
          v60 = (char *)*((_QWORD *)v56 + 23);
          if ( !v60
            || (v106 = SeCaptureAcl(v60, 0, v58, v59, PagedPool, (int)HandleInformation, &v118, &v114), v106 >= 0) )
          {
            SepFreeDefaultDacl(v56);
            v62 = v110;
            if ( v110 )
              SepAppendDefaultDacl(v56, v110);
            SeTokenDefaultDaclChangedAuditAlarm(v61, v56, TokenHandle, v118, v62);
            *((_QWORD *)v56 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v100, 0);
            ExReleaseResourceLite(v55[6]);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            ObfDereferenceObject(Token);
            if ( v110 )
              SeReleaseAcl((void *)v110, PreviousMode);
            if ( v118 )
              ExFreePoolWithTag(v118, 0);
            return 0;
          }
        }
        _InterlockedOr(v100, 0);
        ExReleaseResourceLite(v55[6]);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Token);
        if ( v110 )
          SeReleaseAcl((void *)v110, PreviousMode);
        return v106;
      }
    }
    else
    {
      if ( TokenInformationLength < 8 )
        goto LABEL_160;
      v111 = *(_QWORD *)TokenInformation;
      v30 = SeCaptureSid((void *)v111, (int)Object, 1, (__int64)&v111);
      v106 = v30;
      v44 = v15;
      if ( v30 < 0 )
        goto LABEL_45;
      if ( (unsigned __int8)SepIdAssignableAsGroup(v15, v111) )
      {
        v108[0] = 4 * *(unsigned __int8 *)(v111 + 1) + 8;
        v88 = KeGetCurrentThread();
        --v88->KernelApcDisable;
        v89 = (PERESOURCE *)Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v100, 0);
        v90 = Token;
        v91 = *((_QWORD *)Token + 23);
        if ( v91 )
          v108[0] += *(unsigned __int16 *)(v91 + 2);
        if ( v108[0] <= *((_DWORD *)Token + 34) )
        {
          v106 = SepExpandDynamic(Token, v108[0]);
          if ( v106 >= 0 )
          {
            SepFreePrimaryGroup(v90);
            SepAppendPrimaryGroup(v90, v111);
            v90[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v100, 0);
            ExReleaseResourceLite(v89[6]);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
          else
          {
            _InterlockedOr(v100, 0);
            ExReleaseResourceLite(v89[6]);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            v8 = v106;
          }
        }
        else
        {
          _InterlockedOr(v100, 0);
          ExReleaseResourceLite(v89[6]);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v8 = -1073741671;
        }
        v15 = Token;
      }
      else
      {
        v8 = -1073741733;
      }
      ObfDereferenceObject(v15);
      SeReleaseSid((void *)v111, PreviousMode, 1);
      return v8;
    }
  }
  else
  {
    if ( TokenInformationLength < 8 )
      goto LABEL_160;
    Sid1 = *(PSID *)TokenInformation;
    v30 = SeCaptureSid(Sid1, (int)Object, 1, (__int64)&Sid1);
    v106 = v30;
    if ( v30 < 0 )
      goto LABEL_44;
    v92 = 0;
    v93 = KeGetCurrentThread();
    --v93->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
    _InterlockedOr(v100, 0);
    v94 = *(_QWORD *)&v108[1];
    while ( v92 < *(_DWORD *)(v94 + 124) )
    {
      if ( RtlEqualSid(Sid1, *(PSID *)(*(_QWORD *)(v94 + 152) + 16LL * v92)) )
      {
        if ( (unsigned __int8)SepIdAssignableAsOwner(v94, v92) )
        {
          *(_DWORD *)(v94 + 144) = v92;
          v95 = 1;
          v105 = 1;
          v106 = 0;
        }
        else
        {
          v106 = -1073741734;
          v95 = v105;
        }
        if ( v95 )
        {
          v121 = (PERESOURCE *)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
          *(_QWORD *)(v94 + 56) = v121;
        }
        _InterlockedOr(v100, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v108[1] + 48LL));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(*(PVOID *)&v108[1]);
        SeReleaseSid(Sid1, PreviousMode, 1);
        return v106;
      }
      ++v92;
    }
    if ( v105 )
      *(_QWORD *)(v94 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v100, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v108[1] + 48LL));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObfDereferenceObject(*(PVOID *)&v108[1]);
    SeReleaseSid(Sid1, PreviousMode, 1);
    return -1073741734;
  }
}
