/*
 * XREFs of NtSetInformationToken @ 0x140544C00
 * Callers:
 *     <none>
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14005C810 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x14005C820 (RtlSubAuthoritySid.c)
 *     SepLocateTokenIntegrity @ 0x14005CA48 (SepLocateTokenIntegrity.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14006BBD4 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x1400A0EA8 (SepRemoveAceFromTokenDefaultDacl.c)
 *     SepLinkLogonSessions @ 0x1400A1590 (SepLinkLogonSessions.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1404ECAE0 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140543A30 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseSid @ 0x140543EF0 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x140543F18 (SeCaptureSid.c)
 *     SeReleaseAcl @ 0x140544018 (SeReleaseAcl.c)
 *     SeCaptureAcl @ 0x140544AC4 (SeCaptureAcl.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x1405457FC (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepShouldSetDelinkFlags @ 0x14054589C (SepShouldSetDelinkFlags.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1405458FC (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SeSetMandatoryPolicyToken @ 0x140545E8C (SeSetMandatoryPolicyToken.c)
 *     SepStopReferencingLogonSession @ 0x140546014 (SepStopReferencingLogonSession.c)
 *     SeSetSessionIdToken @ 0x140546054 (SeSetSessionIdToken.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405466C4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAppendDefaultDacl @ 0x14054678C (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x1405467EC (SepFreeDefaultDacl.c)
 *     SepExpandDynamic @ 0x140546838 (SepExpandDynamic.c)
 *     SepDereferenceCachedHandlesEntry @ 0x140546F80 (SepDereferenceCachedHandlesEntry.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140547090 (SepDereferenceLowBoxNumberEntry.c)
 *     SepIdAssignableAsOwner @ 0x140569FEC (SepIdAssignableAsOwner.c)
 *     SeSetVirtualizationToken @ 0x140581960 (SeSetVirtualizationToken.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     SeSetPrivateNameSpaceToken @ 0x14078CA40 (SeSetPrivateNameSpaceToken.c)
 *     SepAppendPrimaryGroup @ 0x14078CB20 (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x14078CB8C (SepFreePrimaryGroup.c)
 *     SepModifyTokenPolicyCounter @ 0x14078CBEC (SepModifyTokenPolicyCounter.c)
 *     SepCaptureAuditPolicy @ 0x1407905D8 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x140790B0C (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x140790BE0 (SepIdAssignableAsGroup.c)
 *     SepRemoveTokenLogonSession @ 0x1407933C0 (SepRemoveTokenLogonSession.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE *v15; // rsi
  __int32 v16; // ebx
  __int32 v17; // ebx
  __int32 v18; // ebx
  __int32 v19; // ebx
  int v20; // ebx
  __int64 v21; // rdx
  int v22; // eax
  int **v23; // rsi
  bool v24; // r12
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v26; // r13
  _DWORD *v27; // rbx
  PVOID v28; // rbx
  NTSTATUS v29; // ebx
  void *v30; // rcx
  __int32 v31; // ebx
  __int32 v32; // ebx
  __int32 v33; // ebx
  __int32 v34; // ebx
  int v35; // ebx
  int v36; // ebx
  struct _KTHREAD *v37; // rax
  PVOID v38; // rsi
  char v39; // bl
  int v40; // edx
  int v41; // r8d
  int v42; // r9d
  struct _KTHREAD *v43; // rax
  struct _ERESOURCE *v44; // rcx
  unsigned int v45; // ebx
  struct _KTHREAD *v46; // rax
  PVOID v47; // r15
  ULONG v48; // ebx
  char *v49; // rcx
  struct _KTHREAD *v50; // rax
  PERESOURCE *v51; // rsi
  PVOID v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  char *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // r14
  int v59; // ebx
  struct _KTHREAD *v60; // rax
  PERESOURCE *v61; // rbx
  _QWORD *v62; // rdx
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
  __int64 v78; // rdx
  struct _KTHREAD *v79; // rax
  int v80; // eax
  unsigned int v81; // eax
  struct _KTHREAD *v82; // rax
  PVOID v83; // rbx
  _QWORD *v84; // rdx
  int v85; // eax
  unsigned int v86; // eax
  struct _KTHREAD *v87; // rax
  _QWORD *v88; // r8
  char *v89; // rbx
  _OWORD *v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rdx
  unsigned int v93; // esi
  struct _KTHREAD *v94; // rax
  PERESOURCE *v95; // r13
  _QWORD *v96; // rbx
  __int64 v97; // rax
  unsigned int v98; // ebx
  struct _KTHREAD *v99; // rax
  _DWORD *v100; // rsi
  char v101; // al
  int v102; // ebx
  struct _KTHREAD *v103; // rax
  PERESOURCE *v104; // rbx
  unsigned int v105; // ebx
  signed __int32 v106[8]; // [rsp+0h] [rbp-108h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-E8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-E0h]
  __int64 v109; // [rsp+30h] [rbp-D8h]
  PVOID Token; // [rsp+50h] [rbp-B8h] BYREF
  NTSTATUS v111; // [rsp+58h] [rbp-B0h]
  char v112; // [rsp+5Ch] [rbp-ACh]
  KPROCESSOR_MODE v113; // [rsp+5Dh] [rbp-ABh]
  __int64 v114; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v115; // [rsp+68h] [rbp-A0h]
  __int64 v117; // [rsp+78h] [rbp-90h] BYREF
  __int64 v118; // [rsp+80h] [rbp-88h] BYREF
  PSID Sid1; // [rsp+88h] [rbp-80h] BYREF
  _OWORD *v120; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v121; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v122; // [rsp+9Ch] [rbp-6Ch]
  int v123; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v124; // [rsp+A4h] [rbp-64h]
  PVOID v125; // [rsp+A8h] [rbp-60h] BYREF
  PVOID P; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v127; // [rsp+B8h] [rbp-50h] BYREF
  PERESOURCE *v128; // [rsp+C0h] [rbp-48h]
  unsigned int v129; // [rsp+C8h] [rbp-40h]
  ULONG v130; // [rsp+CCh] [rbp-3Ch]
  unsigned int v131; // [rsp+D0h] [rbp-38h]
  unsigned int v132; // [rsp+D4h] [rbp-34h]
  __int64 v133; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v134; // [rsp+E0h] [rbp-28h]
  void *v135; // [rsp+E8h] [rbp-20h]

  v8 = 0;
  v112 = 0;
  v121 = 0;
  v125 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v113 = PreviousMode;
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
  v115 = Token;
  if ( result >= 0 )
  {
    if ( TokenInformationClass > TokenVirtualizationAllowed )
    {
      v16 = TokenInformationClass - 24;
      if ( !v16 )
      {
        if ( TokenInformationLength == 4 )
        {
          HIDWORD(v133) = *(_DWORD *)TokenInformation;
          SeSetVirtualizationToken(Token, HIDWORD(v133));
          v29 = 0;
          goto LABEL_33;
        }
        goto LABEL_133;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( !v19 )
          {
            if ( TokenInformationLength == 4 )
            {
              v123 = *(_DWORD *)TokenInformation;
              if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              {
                if ( v15[204] )
                {
                  v29 = -1073741525;
                  goto LABEL_33;
                }
                v22 = SeSetMandatoryPolicyToken(v15, &v123);
                goto LABEL_53;
              }
              goto LABEL_138;
            }
            goto LABEL_133;
          }
          v20 = v19 - 12;
          if ( !v20 )
          {
            if ( TokenInformation && TokenInformationLength >= 0x10 )
            {
              if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              {
                LOBYTE(v21) = PreviousMode;
                v22 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, v21, &P);
                v111 = v22;
                if ( v22 >= 0 )
                {
                  v23 = (int **)P;
                  v24 = (unsigned __int8)SepShouldSetDelinkFlags(*((_QWORD *)P + 1), *(_QWORD *)P) != 0;
                  CurrentThread = KeGetCurrentThread();
                  --CurrentThread->KernelApcDisable;
                  v26 = (PERESOURCE *)Token;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                  _InterlockedOr(v106, 0);
                  v27 = Token;
                  v111 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)Token + 97), v23[1], *(_QWORD *)P);
                  if ( v111 >= 0 && v24 )
                    v27[50] |= 0x20000u;
                  *((_QWORD *)v27 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v106, 0);
                  ExReleaseResourceLite(v26[6]);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                  if ( PreviousMode )
                  {
                    ExFreePoolWithTag(v23[1], 0);
                    v28 = P;
                    if ( *(_QWORD *)P )
                      SepFreeCapturedTokenSecurityAttributesInformation(*(PVOID *)P);
                    ExFreePoolWithTag(v28, 0);
                  }
                  v29 = v111;
                  goto LABEL_32;
                }
LABEL_53:
                v29 = v22;
                goto LABEL_33;
              }
              goto LABEL_138;
            }
LABEL_133:
            v29 = -1073741820;
            goto LABEL_33;
          }
          v102 = v20 - 3;
          if ( !v102 )
          {
            if ( TokenInformationLength == 4 )
            {
              v105 = *(_DWORD *)TokenInformation;
              v132 = *(_DWORD *)TokenInformation;
              if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              {
                v22 = SeSetPrivateNameSpaceToken(v15, v105);
                goto LABEL_53;
              }
              goto LABEL_138;
            }
            goto LABEL_133;
          }
          if ( v102 == 3 )
          {
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_138;
            if ( TokenInformationLength != 4 )
              goto LABEL_133;
            v131 = *(_DWORD *)TokenInformation;
            if ( !v131 && (*((_DWORD *)v15 + 50) & 0x80000) != 0 )
            {
              v103 = KeGetCurrentThread();
              --v103->KernelApcDisable;
              v104 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v106, 0);
              *((_DWORD *)v15 + 50) &= ~0x80000u;
              *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v106, 0);
              ExReleaseResourceLite(v104[6]);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              v15 = Token;
            }
            ObfDereferenceObject(v15);
            return 0;
          }
          return -1073741811;
        }
        if ( TokenInformationLength != 4 )
          goto LABEL_133;
        v124 = *(_DWORD *)TokenInformation;
        if ( v124 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          goto LABEL_138;
        v82 = KeGetCurrentThread();
        --v82->KernelApcDisable;
        v83 = Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v106, 0);
        v84 = Token;
        v85 = *((_DWORD *)Token + 50);
        if ( v124 )
          v86 = v85 | 0x1000;
        else
          v86 = v85 & 0xFFFFEFFF;
        *((_DWORD *)Token + 50) = v86;
        v84[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
        _InterlockedOr(v106, 0);
        v44 = (struct _ERESOURCE *)*((_QWORD *)v83 + 6);
        goto LABEL_48;
      }
      if ( TokenInformationLength < 0x10 )
        goto LABEL_133;
      v22 = SeCaptureSidAndAttributesArray(
              (char *)TokenInformation,
              1u,
              PreviousMode,
              0LL,
              0,
              (int)HandleInformation,
              v109,
              (PVOID *)&v127,
              (unsigned int *)&v133);
      v111 = v22;
      if ( v22 < 0 )
        goto LABEL_53;
      v63 = (void *)v127;
      v64 = *(unsigned __int16 **)v127;
      v65 = *(_DWORD *)(*(_QWORD *)v127 + 2LL) - *(_DWORD *)((char *)SeUntrustedMandatorySid + 2);
      if ( !v65 )
        v65 = v64[3] - *((unsigned __int16 *)SeUntrustedMandatorySid + 3);
      if ( !v65 )
      {
        v66 = *RtlSubAuthorityCountSid(*(PSID *)v127);
        if ( !v66 )
        {
          v67 = 0;
LABEL_95:
          v68 = KeGetCurrentThread();
          --v68->KernelApcDisable;
          v128 = (PERESOURCE *)Token;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v106, 0);
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
LABEL_101:
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
                    SepRemoveAceFromTokenDefaultDacl((__int64)v69, (_WORD *)v69[98]);
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
                    v78 = v69[135];
                    if ( v78 )
                    {
                      SepDereferenceLowBoxNumberEntry(*((unsigned int *)v69 + 30), v78);
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
                v29 = 0;
              }
              else
              {
                v29 = -1073741811;
              }
              goto LABEL_116;
            }
            if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            {
              if ( !*((_BYTE *)v69 + 204) )
                goto LABEL_101;
              v29 = -1073741525;
            }
            else
            {
              v29 = -1073741727;
            }
          }
          else
          {
            v29 = -1073740730;
          }
LABEL_116:
          _InterlockedOr(v106, 0);
          ExReleaseResourceLite(v128[6]);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Token);
          SeReleaseLuidAndAttributesArray((void *)v127, PreviousMode);
          return v29;
        }
        v67 = *RtlSubAuthoritySid(v64, (unsigned int)v66 - 1);
        if ( v67 <= 0x4000 )
          goto LABEL_95;
      }
      ObfDereferenceObject(v15);
      SeReleaseLuidAndAttributesArray(v63, PreviousMode);
      return -1073740730;
    }
    if ( TokenInformationClass == TokenVirtualizationAllowed )
    {
      if ( TokenInformationLength != 4 )
        goto LABEL_133;
      v122 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
        goto LABEL_138;
      v79 = KeGetCurrentThread();
      --v79->KernelApcDisable;
      v61 = (PERESOURCE *)Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v106, 0);
      v62 = Token;
      v80 = *((_DWORD *)Token + 50);
      if ( v122 )
        v81 = v80 | 0x200;
      else
        v81 = v80 & 0xFFFFFDFF;
      *((_DWORD *)Token + 50) = v81;
      goto LABEL_87;
    }
    v31 = TokenInformationClass - 4;
    if ( v31 )
    {
      v32 = v31 - 1;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 )
        {
          v34 = v33 - 6;
          if ( v34 )
          {
            v35 = v34 - 2;
            if ( !v35 )
            {
              if ( TokenInformationLength != 4 )
                goto LABEL_133;
              v45 = *(_DWORD *)TokenInformation;
              v129 = *(_DWORD *)TokenInformation;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_138;
              if ( v45 )
              {
                v29 = -1073741811;
                goto LABEL_33;
              }
              v46 = KeGetCurrentThread();
              --v46->KernelApcDisable;
              v47 = Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v106, 0);
              v15 = Token;
              if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
              {
                if ( SeTokenLeakTracking )
                  SepRemoveTokenLogonSession(Token);
                v29 = SepStopReferencingLogonSession(v15);
                v111 = v29;
                if ( v29 < 0 )
                  goto LABEL_33;
              }
              _InterlockedOr(v106, 0);
              v44 = (struct _ERESOURCE *)*((_QWORD *)v47 + 6);
              goto LABEL_48;
            }
            v36 = v35 - 2;
            if ( !v36 )
            {
              v120 = 0LL;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_138;
              v37 = KeGetCurrentThread();
              --v37->KernelApcDisable;
              v38 = Token;
              ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
              v39 = *((_BYTE *)v38 + 118);
              ExReleaseResourceLite(*((PERESOURCE *)v38 + 6));
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              if ( v39 )
              {
                v29 = -1073741811;
                goto LABEL_32;
              }
              if ( TokenInformation )
              {
                LOBYTE(v40) = PreviousMode;
                v29 = SepCaptureAuditPolicy(
                        (_DWORD)TokenInformation,
                        v40,
                        v41,
                        v42,
                        (_DWORD)Object,
                        (_DWORD)HandleInformation,
                        (__int64)&v120);
                v111 = v29;
                if ( v29 >= 0 )
                {
                  v87 = KeGetCurrentThread();
                  --v87->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v38 + 6), 1u);
                  _InterlockedOr(v106, 0);
                  *((_BYTE *)v38 + 118) = 2;
                  v88 = Token;
                  v89 = (char *)Token + 88;
                  v90 = v120;
                  *(_OWORD *)((char *)Token + 88) = *v120;
                  *((_QWORD *)v89 + 2) = *((_QWORD *)v90 + 2);
                  *((_DWORD *)v89 + 6) = *((_DWORD *)v90 + 6);
                  *((_WORD *)v89 + 14) = *((_WORD *)v90 + 14);
                  v88[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v106, 0);
                  ExReleaseResourceLite(*((PERESOURCE *)v38 + 6));
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                  LOBYTE(v91) = 1;
                  SepModifyTokenPolicyCounter(v89, v91);
                  ObfDereferenceObject(Token);
                  LOBYTE(v92) = PreviousMode;
                  SepReleaseAuditPolicy(v120, v92);
                  return 0;
                }
LABEL_32:
                v15 = Token;
LABEL_33:
                v30 = v15;
LABEL_34:
                ObfDereferenceObject(v30);
                return v29;
              }
              v43 = KeGetCurrentThread();
              --v43->KernelApcDisable;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)v38 + 6), 1u);
              _InterlockedOr(v106, 0);
              *((_BYTE *)v38 + 118) = 1;
              *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v106, 0);
              v44 = (struct _ERESOURCE *)*((_QWORD *)v38 + 6);
LABEL_48:
              ExReleaseResourceLite(v44);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              v29 = 0;
              goto LABEL_32;
            }
            v59 = v36 - 1;
            if ( v59 )
            {
              if ( v59 == 2 )
              {
                if ( TokenInformationLength == 8 )
                {
                  v135 = *(void **)TokenInformation;
                  v22 = SepLinkLogonSessions((__int64)Token, v135, PreviousMode);
                  goto LABEL_53;
                }
                goto LABEL_133;
              }
              return -1073741811;
            }
            if ( TokenInformationLength != 8 )
              goto LABEL_133;
            v134 = *(_QWORD *)TokenInformation;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_138;
            v60 = KeGetCurrentThread();
            --v60->KernelApcDisable;
            v61 = (PERESOURCE *)Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v106, 0);
            v62 = Token;
            if ( !*((_QWORD *)Token + 28) )
              *((_QWORD *)Token + 28) = v134;
LABEL_87:
            v62[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v106, 0);
            ExReleaseResourceLite(v61[6]);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            v29 = 0;
            goto LABEL_32;
          }
          if ( TokenInformationLength == 4 )
          {
            v48 = *(_DWORD *)TokenInformation;
            v130 = *(_DWORD *)TokenInformation;
            if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            {
              v22 = SeSetSessionIdToken(v15, v48);
              goto LABEL_53;
            }
LABEL_138:
            v29 = -1073741727;
            goto LABEL_33;
          }
LABEL_165:
          ObfDereferenceObject(Token);
          return -1073741820;
        }
        if ( TokenInformationLength < 8 )
          goto LABEL_165;
        v49 = *(char **)TokenInformation;
        v117 = (__int64)v49;
        if ( v49 )
        {
          v29 = SeCaptureAcl(
                  v49,
                  PreviousMode,
                  v13,
                  v14,
                  PagedPool,
                  (int)HandleInformation,
                  (PVOID *)&v117,
                  (unsigned int *)&v114);
          v111 = v29;
        }
        else
        {
          LODWORD(v114) = 0;
          v29 = 0;
          v111 = 0;
        }
        if ( v29 < 0 )
          goto LABEL_33;
        v50 = KeGetCurrentThread();
        --v50->KernelApcDisable;
        v51 = (PERESOURCE *)Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v106, 0);
        v52 = Token;
        v53 = (_DWORD)v114 + 8 + 4 * (unsigned int)*(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
        LODWORD(v114) = v53;
        if ( (unsigned int)v53 > *((_DWORD *)Token + 34) )
        {
          _InterlockedOr(v106, 0);
          ExReleaseResourceLite(v51[6]);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Token);
          if ( v117 )
            SeReleaseAcl((void *)v117, PreviousMode);
          return -1073741671;
        }
        else
        {
          v111 = SepExpandDynamic(Token, v53);
          if ( v111 >= 0 )
          {
            v56 = (char *)*((_QWORD *)v52 + 23);
            if ( !v56
              || (v111 = SeCaptureAcl(v56, 0, v54, v55, PagedPool, (int)HandleInformation, &v125, &v121), v111 >= 0) )
            {
              SepFreeDefaultDacl(v52);
              v58 = v117;
              if ( v117 )
                SepAppendDefaultDacl(v52, v117);
              SeTokenDefaultDaclChangedAuditAlarm(v57, v52, TokenHandle, v125, v58);
              *((_QWORD *)v52 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v106, 0);
              ExReleaseResourceLite(v51[6]);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              ObfDereferenceObject(Token);
              if ( v117 )
                SeReleaseAcl((void *)v117, PreviousMode);
              if ( v125 )
                ExFreePoolWithTag(v125, 0);
              return 0;
            }
          }
          _InterlockedOr(v106, 0);
          ExReleaseResourceLite(v51[6]);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Token);
          if ( v117 )
            SeReleaseAcl((void *)v117, PreviousMode);
          return v111;
        }
      }
      else
      {
        if ( TokenInformationLength < 8 )
          goto LABEL_165;
        v118 = *(_QWORD *)TokenInformation;
        v29 = SeCaptureSid((char *)v118, PreviousMode, v13, v14, (int)Object, 1, (PSID *)&v118);
        v111 = v29;
        v30 = v15;
        if ( v29 < 0 )
          goto LABEL_34;
        if ( (unsigned __int8)SepIdAssignableAsGroup(v15, v118) )
        {
          v93 = 4 * *(unsigned __int8 *)(v118 + 1) + 8;
          LODWORD(v114) = v93;
          v94 = KeGetCurrentThread();
          --v94->KernelApcDisable;
          v95 = (PERESOURCE *)Token;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v106, 0);
          v96 = Token;
          v97 = *((_QWORD *)Token + 23);
          if ( v97 )
          {
            v93 += *(unsigned __int16 *)(v97 + 2);
            LODWORD(v114) = v93;
          }
          if ( v93 <= *((_DWORD *)Token + 34) )
          {
            v111 = SepExpandDynamic(Token, (unsigned int)v114);
            if ( v111 >= 0 )
            {
              SepFreePrimaryGroup(v96);
              SepAppendPrimaryGroup(v96, v118);
              v96[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v106, 0);
              ExReleaseResourceLite(v95[6]);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            }
            else
            {
              _InterlockedOr(v106, 0);
              ExReleaseResourceLite(v95[6]);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              v8 = v111;
            }
          }
          else
          {
            _InterlockedOr(v106, 0);
            ExReleaseResourceLite(v95[6]);
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
        SeReleaseSid((void *)v118, PreviousMode, 1);
        return v8;
      }
    }
    else
    {
      if ( TokenInformationLength < 8 )
        goto LABEL_165;
      Sid1 = *(PSID *)TokenInformation;
      v29 = SeCaptureSid((char *)Sid1, PreviousMode, v13, v14, (int)Object, 1, &Sid1);
      v111 = v29;
      if ( v29 < 0 )
        goto LABEL_33;
      v98 = 0;
      v99 = KeGetCurrentThread();
      --v99->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v106, 0);
      v100 = v115;
      while ( 1 )
      {
        if ( v98 >= v100[31] )
        {
          _InterlockedOr(v106, 0);
          ExReleaseResourceLite(*((PERESOURCE *)v115 + 6));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          ObfDereferenceObject(v115);
          SeReleaseSid(Sid1, PreviousMode, 1);
          return -1073741734;
        }
        if ( RtlEqualSid(Sid1, *(PSID *)(*((_QWORD *)v100 + 19) + 16LL * v98)) )
          break;
        ++v98;
      }
      if ( (unsigned __int8)SepIdAssignableAsOwner(v100, v98) )
      {
        v100[36] = v98;
        v101 = 1;
        v112 = 1;
        v111 = 0;
      }
      else
      {
        v111 = -1073741734;
        v101 = v112;
      }
      if ( v101 )
      {
        v128 = (PERESOURCE *)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
        *((_QWORD *)v100 + 7) = v128;
      }
      _InterlockedOr(v106, 0);
      ExReleaseResourceLite(*((PERESOURCE *)v115 + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ObfDereferenceObject(v115);
      SeReleaseSid(Sid1, PreviousMode, 1);
      return v111;
    }
  }
  return result;
}
