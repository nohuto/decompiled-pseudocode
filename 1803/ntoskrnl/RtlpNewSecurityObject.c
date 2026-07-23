/*
 * XREFs of RtlpNewSecurityObject @ 0x1404C43A0
 * Callers:
 *     SeAssignSecurityEx2 @ 0x14005C910 (SeAssignSecurityEx2.c)
 *     RtlpNewSecurityObject @ 0x1404C43A0 (RtlpNewSecurityObject.c)
 *     SeAssignSecurity @ 0x140516CC0 (SeAssignSecurity.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14005C820 (RtlSubAuthoritySid.c)
 *     RtlFindAceByType @ 0x14005C9A0 (RtlFindAceByType.c)
 *     SepLocateTokenTrustLevel @ 0x14005C9F4 (SepLocateTokenTrustLevel.c)
 *     SepLocateTokenIntegrity @ 0x14005CA48 (SepLocateTokenIntegrity.c)
 *     RtlSidDominates @ 0x14005CC30 (RtlSidDominates.c)
 *     RtlpOwnerAcesPresent @ 0x1400AAD70 (RtlpOwnerAcesPresent.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     RtlpValidTrustSubjectContext @ 0x14016CACC (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlpNewSecurityObject @ 0x1404C43A0 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x1404C5AE0 (RtlpInheritAcl2.c)
 *     RtlpApplyAclToObject @ 0x1404C5F80 (RtlpApplyAclToObject.c)
 *     RtlpCombineAcls @ 0x1404C6050 (RtlpCombineAcls.c)
 *     RtlAddMandatoryAce @ 0x1404C72B0 (RtlAddMandatoryAce.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1404D5720 (SePrivilegedServiceAuditAlarm.c)
 *     RtlCreateAcl @ 0x140541E30 (RtlCreateAcl.c)
 *     SepValidOwnerSubjectContext @ 0x140569EF0 (SepValidOwnerSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405A5520 (SeUnlockSubjectContext.c)
 *     SePrivilegeCheck @ 0x1405B0D30 (SePrivilegeCheck.c)
 *     RtlAddProcessTrustLabelAce @ 0x140642A60 (RtlAddProcessTrustLabelAce.c)
 *     RtlpComputeMergedAcl @ 0x1407856EC (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x140785B10 (RtlpCreateServerAcl.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        unsigned int a7,
        struct _SECURITY_SUBJECT_CONTEXT *a8,
        GENERIC_MAPPING *a9,
        __int64 a10)
{
  _BYTE *v10; // r11
  char v11; // bl
  unsigned __int8 *v12; // rdi
  PSECURITY_SUBJECT_CONTEXT v13; // rcx
  _QWORD *v14; // rsi
  __int16 v15; // ax
  struct _KTHREAD *CurrentThread; // rax
  PSECURITY_SUBJECT_CONTEXT v17; // r9
  unsigned int *ClientToken; // rdx
  unsigned int *PrimaryToken; // r8
  unsigned __int8 *v20; // rbx
  unsigned __int16 *v21; // rsi
  unsigned __int8 *v22; // rdi
  __int64 v23; // rcx
  PSID *TokenIntegrity; // rax
  __int64 *v25; // r9
  PSID v26; // rax
  unsigned __int8 *TokenTrustLevel; // rax
  int v28; // r10d
  int v29; // r9d
  int v30; // r8d
  int v31; // edx
  int v32; // eax
  char *v33; // r9
  int v34; // eax
  char *v35; // rbx
  char *v36; // rcx
  int v37; // eax
  PVOID v38; // r8
  unsigned int v39; // edx
  _BYTE *v40; // rcx
  void *v41; // rcx
  bool v42; // r8
  __int64 v43; // r10
  unsigned __int8 *v44; // rax
  unsigned __int8 *v45; // rax
  int v46; // esi
  __int64 v47; // rbx
  int v48; // r10d
  int v49; // r9d
  int v50; // edi
  int v51; // edx
  __int16 v52; // cx
  unsigned int v53; // edx
  __int16 v54; // cx
  int v55; // r9d
  _BYTE *v56; // rbx
  __int64 v57; // rsi
  int v58; // edi
  _BYTE *v59; // rdi
  __int16 v60; // cx
  __int16 v61; // ax
  ACL *v62; // rcx
  char *AceByType; // rax
  __int64 v64; // r8
  char *v65; // rbx
  _BYTE *v66; // rbx
  char *v67; // rsi
  __int16 v68; // ax
  ACL *v69; // rdi
  _DWORD *v70; // rax
  __int64 v71; // r8
  _DWORD *v72; // rbx
  signed int v73; // ebx
  _BYTE *v74; // rdi
  unsigned int v75; // edx
  int v76; // ebx
  char v77; // cl
  PSID v78; // rax
  ULONG v79; // edx
  int v80; // ebx
  __int64 v81; // rsi
  ACE_HEADER v82; // eax
  ACL *v83; // rax
  ACL *v84; // rdi
  __int16 v85; // si
  int v86; // eax
  PACL v87; // rbx
  ACL *v88; // r9
  int v89; // edx
  int v90; // ecx
  int v91; // r8d
  unsigned int v92; // r8d
  char *v93; // rax
  PSID v94; // rax
  _BYTE *v95; // rdx
  int v96; // edi
  __int16 v97; // ax
  __int16 v98; // si
  __int64 v99; // rbx
  int v100; // esi
  __int64 v101; // r9
  __int16 v102; // cx
  _BYTE *v103; // rax
  unsigned __int16 *v104; // rbx
  bool v105; // al
  int v106; // edi
  int v107; // ecx
  int v108; // r8d
  unsigned int v109; // edx
  int v110; // esi
  unsigned int v111; // edi
  _QWORD *v112; // rax
  _QWORD *v113; // rdx
  __int16 v114; // cx
  char *v115; // rbx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rdi
  int v120; // eax
  char *v121; // rbx
  __int16 v123; // ax
  ACL *v124; // rcx
  char *v125; // rax
  unsigned int v126; // edx
  int v127; // r8d
  int v128; // ebx
  unsigned int v129; // eax
  ACL *v130; // rax
  __int16 v131; // cx
  unsigned int v132; // ecx
  char *v133; // rdx
  __int64 v134; // rax
  _BYTE *v135; // rax
  __int64 v136; // rcx
  __int64 v137; // rax
  __int16 v138; // ax
  __int64 v139; // rax
  __int16 v140; // ax
  __int64 v141; // rax
  __int16 v142; // ax
  __int64 v143; // rax
  __int16 v144; // ax
  __int64 v145; // rax
  ACCESS_MASK AccessMask; // eax
  ACL *PoolWithTag; // rax
  ACE_HEADER Header; // eax
  ACL *v149; // rax
  struct _KTHREAD *v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  _BYTE *v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  int v157; // ecx
  int v158; // eax
  unsigned int v159; // edx
  __int64 v160; // rax
  __int64 v161; // rcx
  void *v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  ACL *v166; // rcx
  __int16 v167; // ax
  __int64 v168; // rax
  char *v169; // rax
  unsigned __int8 v170; // cl
  ACCESS_MASK v171; // edi
  int v172; // ecx
  __int64 v173; // rbx
  PSECURITY_SUBJECT_CONTEXT v174; // rdi
  __int64 v175; // rbx
  int ServerAcl; // eax
  __int64 AceType; // [rsp+20h] [rbp-F0h]
  __int64 AceTypea; // [rsp+20h] [rbp-F0h]
  PSID LabelSid; // [rsp+28h] [rbp-E8h]
  char v180; // [rsp+90h] [rbp-80h] BYREF
  bool v181; // [rsp+91h] [rbp-7Fh]
  char v182; // [rsp+92h] [rbp-7Eh] BYREF
  char v183; // [rsp+93h] [rbp-7Dh]
  __int16 v184; // [rsp+94h] [rbp-7Ch]
  char v185; // [rsp+96h] [rbp-7Ah]
  unsigned int v186; // [rsp+98h] [rbp-78h]
  _QWORD *v187; // [rsp+A0h] [rbp-70h]
  KPROCESSOR_MODE AccessMode; // [rsp+A8h] [rbp-68h]
  char v189; // [rsp+A9h] [rbp-67h]
  struct _ACE v190; // [rsp+AAh] [rbp-66h] BYREF
  char v191; // [rsp+B2h] [rbp-5Eh]
  bool v192; // [rsp+B3h] [rbp-5Dh]
  char v193; // [rsp+B4h] [rbp-5Ch] BYREF
  char v194; // [rsp+B5h] [rbp-5Bh]
  char v195; // [rsp+B6h] [rbp-5Ah]
  char v196; // [rsp+B7h] [rbp-59h]
  size_t AccessStatus; // [rsp+B8h] [rbp-58h] BYREF
  PVOID v198; // [rsp+C0h] [rbp-50h]
  PVOID v199; // [rsp+C8h] [rbp-48h]
  __int64 v200; // [rsp+D0h] [rbp-40h] BYREF
  void *v201; // [rsp+D8h] [rbp-38h]
  _BYTE *v202; // [rsp+E0h] [rbp-30h]
  PVOID v203; // [rsp+E8h] [rbp-28h]
  char v204; // [rsp+F0h] [rbp-20h] BYREF
  ULONG v205; // [rsp+F4h] [rbp-1Ch] BYREF
  struct _ACE v206; // [rsp+F8h] [rbp-18h] BYREF
  unsigned __int8 *v207; // [rsp+100h] [rbp-10h]
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+108h] [rbp-8h]
  void *v209; // [rsp+110h] [rbp+0h]
  void *v210; // [rsp+118h] [rbp+8h]
  ULONG AceFlags; // [rsp+120h] [rbp+10h] BYREF
  NTSTATUS v212; // [rsp+124h] [rbp+14h] BYREF
  int v213; // [rsp+128h] [rbp+18h] BYREF
  _DWORD Size[3]; // [rsp+12Ch] [rbp+1Ch] BYREF
  __int64 v215; // [rsp+138h] [rbp+28h]
  PGENERIC_MAPPING GenericMapping; // [rsp+140h] [rbp+30h]
  ACCESS_MASK GrantedAccess[2]; // [rsp+148h] [rbp+38h] BYREF
  int v218[2]; // [rsp+150h] [rbp+40h]
  ULONG MandatoryFlags[2]; // [rsp+158h] [rbp+48h]
  PSID Sid1; // [rsp+160h] [rbp+50h]
  int v221[2]; // [rsp+168h] [rbp+58h]
  void *Src; // [rsp+170h] [rbp+60h]
  char *v223; // [rsp+178h] [rbp+68h]
  ULONG v224; // [rsp+180h] [rbp+70h] BYREF
  PVOID SecurityDescriptor; // [rsp+188h] [rbp+78h] BYREF
  PVOID P; // [rsp+190h] [rbp+80h]
  struct _ACE v227; // [rsp+198h] [rbp+88h] BYREF
  __int64 v228; // [rsp+1A0h] [rbp+90h]
  PVOID v229; // [rsp+1A8h] [rbp+98h] BYREF
  PVOID v230; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 v231; // [rsp+1B8h] [rbp+A8h]
  PACL v232; // [rsp+1C0h] [rbp+B0h] BYREF
  _QWORD *v233; // [rsp+1C8h] [rbp+B8h]
  _BYTE v234[40]; // [rsp+1D0h] [rbp+C0h] BYREF
  int v235; // [rsp+1F8h] [rbp+E8h]
  unsigned __int16 v236; // [rsp+1FCh] [rbp+ECh]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+200h] [rbp+F0h] BYREF
  ACL Acl[16]; // [rsp+220h] [rbp+110h] BYREF
  ACL v239; // [rsp+2A0h] [rbp+190h] BYREF

  v10 = a2;
  v11 = a7;
  GenericMapping = a9;
  v202 = a2;
  v231 = a10;
  *(_QWORD *)v221 = a1;
  v12 = 0LL;
  v13 = a8;
  v14 = 0LL;
  *(_QWORD *)&Size[1] = Acl;
  v228 = a4;
  v233 = a3;
  SubjectSecurityContext = a8;
  v199 = 0LL;
  v203 = 0LL;
  v196 = 0;
  v194 = 0;
  v213 = 0;
  v198 = 0LL;
  v229 = 0LL;
  v185 = 0;
  v189 = 0;
  v180 = 0;
  v204 = 0;
  LOBYTE(v206.AccessMask) = 0;
  v190.Header.AceType = 0;
  v191 = 0;
  v193 = 0;
  P = 0LL;
  v201 = 0LL;
  Sid1 = 0LL;
  v223 = 0LL;
  v215 = 0LL;
  v210 = 0LL;
  Src = 0LL;
  v187 = 0LL;
  AccessMode = 1;
  Size[0] = 0;
  v186 = 0x8000;
  *(_QWORD *)v218 = 0LL;
  *(_QWORD *)MandatoryFlags = 0LL;
  v232 = 0LL;
  v184 = 0;
  SecurityDescriptor = 0LL;
  v182 = 1;
  v230 = 0LL;
  v195 = 0;
  if ( (a7 & 0x2000) == 0 )
    AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
  {
    HIBYTE(v190.AccessMask) = 1;
  }
  else
  {
    HIBYTE(v190.AccessMask) = 0;
    memset(v234, 0, sizeof(v234));
    v13 = SubjectSecurityContext;
    v10 = v234;
    v202 = v234;
    v234[0] = 1;
  }
  v15 = *((_WORD *)v10 + 1);
  v181 = (v15 & 0x80u) != 0;
  v192 = (v15 & 0x40) != 0;
  if ( v13 || (v15 & 0x80u) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)v13->PrimaryToken + 6), 1u);
    v17 = SubjectSecurityContext;
    if ( SubjectSecurityContext->ClientToken
      && (v150 = KeGetCurrentThread(),
          --v150->KernelApcDisable,
          ExAcquireResourceSharedLite(*((PERESOURCE *)v17->ClientToken + 6), 1u),
          v17 = SubjectSecurityContext,
          (ClientToken = (unsigned int *)SubjectSecurityContext->ClientToken) != 0LL) )
    {
      PrimaryToken = (unsigned int *)SubjectSecurityContext->PrimaryToken;
    }
    else
    {
      ClientToken = (unsigned int *)v17->PrimaryToken;
      PrimaryToken = ClientToken;
    }
    v20 = (unsigned __int8 *)*((_QWORD *)ClientToken + 21);
    v21 = (unsigned __int16 *)*((_QWORD *)ClientToken + 23);
    v22 = (unsigned __int8 *)*((_QWORD *)PrimaryToken + 21);
    v23 = PrimaryToken[36];
    Src = *(void **)(*((_QWORD *)ClientToken + 19) + 16LL * ClientToken[36]);
    v207 = *(unsigned __int8 **)(*((_QWORD *)PrimaryToken + 19) + 16 * v23);
    TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)ClientToken);
    if ( TokenIntegrity )
      v26 = *TokenIntegrity;
    else
      v26 = SepDefaultMandatorySid;
    v210 = v26;
    TokenTrustLevel = (unsigned __int8 *)SepLocateTokenTrustLevel(v25);
    v201 = TokenTrustLevel;
    if ( TokenTrustLevel )
      v28 = 4 * TokenTrustLevel[1] + 8;
    else
      v28 = 0;
    if ( v20 )
      v29 = 4 * v20[1] + 8;
    else
      v29 = 0;
    if ( v22 )
      v30 = 4 * v22[1] + 32;
    else
      v30 = 24;
    if ( v21 )
      v31 = v21[1];
    else
      v31 = 0;
    P = ExAllocatePoolWithTag(
          PagedPool,
          v30
        + v28
        + v29
        + v31
        + 4 * (*((unsigned __int8 *)Src + 1) + v207[1] + (unsigned int)*((unsigned __int8 *)v210 + 1)),
          0x64536553u);
    if ( !P )
    {
      SeUnlockSubjectContext(SubjectSecurityContext);
      return 3221225626LL;
    }
    memmove(P, Src, 4 * (unsigned int)*((unsigned __int8 *)Src + 1) + 8);
    v32 = *((unsigned __int8 *)v210 + 1);
    Sid1 = (char *)P + 4 * (unsigned int)*((unsigned __int8 *)Src + 1) + 8;
    memmove(Sid1, v210, (unsigned int)(4 * v32 + 8));
    v223 = (char *)Sid1 + 4 * (unsigned int)*((unsigned __int8 *)v210 + 1) + 8;
    v33 = v223;
    v215 = (__int64)v223;
    if ( v201 )
    {
      memmove(v223, v201, 4 * (unsigned int)*((unsigned __int8 *)v201 + 1) + 8);
      v33 = &v223[4 * *((unsigned __int8 *)v201 + 1) + 8];
      v215 = (__int64)v33;
    }
    else
    {
      v223 = 0LL;
    }
    if ( v20 )
    {
      v34 = v20[1];
      v201 = v33;
      memmove(v33, v20, (unsigned int)(4 * v34 + 8));
      v33 = (char *)v201 + 4 * (unsigned int)v20[1] + 8;
      v215 = (__int64)v33;
    }
    else
    {
      v201 = 0LL;
    }
    memmove(v33, v207, 4 * (unsigned int)v207[1] + 8);
    v35 = (char *)(v215 + 4 * (unsigned int)v207[1] + 8);
    v210 = v35;
    v36 = v35;
    Src = v35;
    if ( v22 )
    {
      memmove(v35, v22, 4 * (unsigned int)v22[1] + 8);
      v37 = v22[1];
      v12 = (unsigned __int8 *)v35;
      v36 = &v35[4 * v37 + 8];
      Src = v36;
    }
    else
    {
      v12 = 0LL;
      v210 = 0LL;
    }
    if ( v21 )
      memmove(v36, v21, v21[1]);
    else
      Src = 0LL;
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegion();
    if ( SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegion();
      v38 = P;
      v14 = v187;
      v10 = v202;
      v11 = a7;
    }
    else
    {
      v14 = v187;
      v10 = v202;
      v11 = a7;
      v38 = P;
    }
  }
  else
  {
    v38 = 0LL;
  }
  v39 = *((unsigned __int16 *)v10 + 1);
  if ( (v39 & 0x8000u) != 0 )
  {
    v136 = *((unsigned int *)v10 + 1);
    if ( !(_DWORD)v136 )
      goto LABEL_32;
    v40 = &v10[v136];
  }
  else
  {
    v40 = (_BYTE *)*((_QWORD *)v10 + 1);
  }
  v209 = v40;
  if ( v40 )
  {
    v43 = *(_QWORD *)v221;
    v189 = 1;
    goto LABEL_297;
  }
LABEL_32:
  if ( (v11 & 0x20) != 0 )
  {
    v43 = *(_QWORD *)v221;
    if ( !*(_QWORD *)v221 )
    {
      v73 = -1073741734;
      goto LABEL_181;
    }
    if ( *(__int16 *)(*(_QWORD *)v221 + 2LL) >= 0 )
    {
      v162 = *(void **)(*(_QWORD *)v221 + 8LL);
    }
    else
    {
      v161 = *(unsigned int *)(*(_QWORD *)v221 + 4LL);
      if ( !(_DWORD)v161 )
      {
LABEL_370:
        v73 = -1073741734;
        goto LABEL_181;
      }
      v162 = (void *)(*(_QWORD *)v221 + v161);
    }
    v209 = v162;
    v189 = 1;
    if ( !v162 )
      goto LABEL_370;
LABEL_297:
    v42 = v181;
    goto LABEL_37;
  }
  v41 = v38;
  v42 = v181;
  if ( v181 )
    v41 = (void *)v215;
  v209 = v41;
  if ( !v41 )
  {
    v73 = -1073741700;
    goto LABEL_181;
  }
  v43 = *(_QWORD *)v221;
LABEL_37:
  if ( (v39 & 0x8000) != 0 )
  {
    v137 = *((unsigned int *)v10 + 2);
    if ( !(_DWORD)v137 )
      goto LABEL_40;
    v44 = &v10[v137];
  }
  else
  {
    v44 = (unsigned __int8 *)*((_QWORD *)v10 + 2);
  }
  v207 = v44;
  if ( v44 )
    goto LABEL_44;
LABEL_40:
  if ( (v11 & 0x40) != 0 )
  {
    if ( !v43 )
    {
      v73 = -1073741733;
      goto LABEL_181;
    }
    if ( *(__int16 *)(v43 + 2) >= 0 )
    {
      v45 = *(unsigned __int8 **)(v43 + 16);
    }
    else
    {
      v163 = *(unsigned int *)(v43 + 8);
      if ( !(_DWORD)v163 )
        goto LABEL_349;
      v45 = (unsigned __int8 *)(v43 + v163);
    }
  }
  else
  {
    v45 = (unsigned __int8 *)v201;
    if ( v42 )
      v45 = v12;
  }
  v207 = v45;
  if ( !v45 )
  {
LABEL_349:
    v73 = -1073741733;
    goto LABEL_181;
  }
LABEL_44:
  LODWORD(AccessStatus) = v11 & 4;
  v183 = (v11 & 4) != 0;
  v46 = v11 & 2;
  BYTE2(v190.AccessMask) = v46 != 0;
  v47 = 0LL;
  if ( (v39 & 0x20) != 0 )
    v48 = 8;
  else
    v48 = 0;
  if ( (v39 & 0x2000) != 0 )
    v49 = 4096;
  else
    v49 = 0;
  if ( (v39 & 0x10) != 0 )
  {
    if ( (v39 & 0x8000u) == 0 )
    {
      v153 = (_BYTE *)*((_QWORD *)v10 + 3);
    }
    else
    {
      v152 = *((unsigned int *)v10 + 3);
      if ( !(_DWORD)v152 )
      {
        v201 = 0LL;
        goto LABEL_50;
      }
      v153 = &v10[v152];
    }
    v201 = v153;
  }
  else
  {
    v201 = 0LL;
  }
LABEL_50:
  if ( *(_QWORD *)v221 )
  {
    v138 = *(_WORD *)(*(_QWORD *)v221 + 2LL);
    if ( (v138 & 0x10) != 0 )
    {
      if ( v138 >= 0 )
      {
        v47 = *(_QWORD *)(*(_QWORD *)v221 + 24LL);
      }
      else
      {
        v139 = *(unsigned int *)(*(_QWORD *)v221 + 12LL);
        if ( (_DWORD)v139 )
          v47 = *(_QWORD *)v221 + v139;
      }
    }
  }
  *(_QWORD *)GrantedAccess = v47;
  v50 = v48 | v49 | ((v39 & 0x10) != 0 ? 4 : 0) | (v39 >> 1) & 0x400;
  if ( v50 || v47 )
  {
    AccessMask = 200;
    v227.AccessMask = 200;
    *(_DWORD *)&v190.Header.AceSize = 0;
    while ( 1 )
    {
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, AccessMask, 0x63416553u);
      v199 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_487;
      LOBYTE(AceType) = BYTE2(v190.AccessMask);
      v73 = RtlpInheritAcl2(
              v47,
              (int)v201,
              v50,
              a6,
              AceType,
              v183,
              (int)v209,
              (__int64)v207,
              v215,
              (__int64)v210,
              GenericMapping,
              2,
              v228,
              a5,
              (PACE)&v227.AccessMask,
              PoolWithTag,
              (__int64)&v180,
              (__int64)&v200);
      if ( v73 >= 0 )
        break;
      ExFreePoolWithTag(v199, 0);
      v199 = 0LL;
      if ( v73 != -1073741789 )
        goto LABEL_269;
      if ( ++*(_DWORD *)&v190.Header.AceSize >= 2u )
        goto LABEL_269;
      AccessMask = v227.AccessMask;
      LODWORD(v47) = GrantedAccess[0];
    }
    if ( !v227.AccessMask )
    {
      ExFreePoolWithTag(v199, 0);
      v199 = 0LL;
    }
LABEL_269:
    if ( v73 >= 0 )
    {
      HIBYTE(v184) = 1;
      v157 = 32784;
      if ( (v200 & 8) != 0 )
        v157 = 32816;
      if ( (v200 & 0x1000) != 0 )
        v158 = 0x2000;
      else
        v158 = 0;
      v10 = v202;
      v159 = v157 | v158 | (2 * (v200 & 0x400));
      v52 = *((_WORD *)v202 + 1);
      goto LABEL_325;
    }
    if ( v73 != -2147483637 )
      goto LABEL_488;
    v10 = v202;
  }
  else
  {
    v180 = 0;
    LODWORD(v200) = v46 != 0 ? 0x400 : 0;
    v199 = 0LL;
  }
  if ( v46 )
  {
    v51 = 34816;
    v186 = 34816;
  }
  else
  {
    v51 = 0x8000;
  }
  v52 = *((_WORD *)v10 + 1);
  if ( (v52 & 0x30) != 0x30 )
    goto LABEL_57;
  if ( (v52 & 0x10) != 0 )
  {
    if ( v52 >= 0 )
    {
      v199 = (PVOID)*((_QWORD *)v10 + 3);
    }
    else
    {
      v164 = *((unsigned int *)v10 + 3);
      if ( (_DWORD)v164 )
        v199 = &v10[v164];
      else
        v199 = 0LL;
    }
  }
  else
  {
    v199 = 0LL;
  }
  v180 = 1;
  v159 = v52 & 0x2000 | 0x10 | v51;
LABEL_325:
  v186 = v159;
LABEL_57:
  v183 = (_DWORD)AccessStatus != 0;
  v53 = (unsigned __int16)v52;
  v54 = v52 & 0x10;
  if ( (v53 & 0x20) != 0 )
    v55 = 8;
  else
    v55 = 0;
  if ( v54 )
  {
    if ( (v53 & 0x8000u) == 0 )
    {
      v56 = (_BYTE *)*((_QWORD *)v10 + 3);
    }
    else
    {
      v154 = *((unsigned int *)v10 + 3);
      if ( (_DWORD)v154 )
        v56 = &v10[v154];
      else
        v56 = 0LL;
    }
  }
  else
  {
    v56 = 0LL;
  }
  v201 = v56;
  if ( !*(_QWORD *)v221 )
    goto LABEL_62;
  v140 = *(_WORD *)(*(_QWORD *)v221 + 2LL);
  if ( (v140 & 0x10) == 0 )
    goto LABEL_62;
  if ( v140 >= 0 )
  {
    v57 = *(_QWORD *)(*(_QWORD *)v221 + 24LL);
    goto LABEL_63;
  }
  v141 = *(unsigned int *)(*(_QWORD *)v221 + 12LL);
  if ( (_DWORD)v141 )
    v57 = *(_QWORD *)v221 + v141;
  else
LABEL_62:
    v57 = 0LL;
LABEL_63:
  v58 = v55 | (v54 != 0 ? 4 : 0) | (v53 >> 1) & 0x400;
  if ( v58 || v57 )
  {
    Header = (ACE_HEADER)200;
    *(_DWORD *)&v190.Header.AceSize = 0;
    v206.Header = (ACE_HEADER)200;
    while ( 1 )
    {
      v149 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&Header, 0x63416553u);
      v203 = v149;
      if ( !v149 )
        goto LABEL_487;
      LOBYTE(AceType) = BYTE2(v190.AccessMask);
      v73 = RtlpInheritAcl2(
              v57,
              (int)v56,
              v58,
              a6,
              AceType,
              v183,
              (int)v209,
              (__int64)v207,
              v215,
              (__int64)v210,
              GenericMapping,
              2,
              v228,
              a5,
              &v206,
              v149,
              (__int64)&v204,
              (__int64)Size);
      if ( v73 >= 0 )
        break;
      ExFreePoolWithTag(v203, 0);
      v203 = 0LL;
      if ( v73 != -1073741789 || (++*(_DWORD *)&v190.Header.AceSize, *(_DWORD *)&v190.Header.AceSize >= 2u) )
      {
        v59 = 0LL;
        goto LABEL_277;
      }
      Header = v206.Header;
      LODWORD(v56) = (_DWORD)v201;
    }
    if ( v206.Header )
    {
      v59 = v203;
    }
    else
    {
      ExFreePoolWithTag(v203, 0);
      v59 = 0LL;
      v203 = 0LL;
    }
LABEL_277:
    AceFlags = v73;
    if ( v73 >= 0 )
    {
      v10 = v202;
      v196 = 1;
      goto LABEL_67;
    }
    if ( v73 != -2147483637 )
      goto LABEL_488;
    v10 = v202;
  }
  else
  {
    v59 = 0LL;
    v203 = 0LL;
    AceFlags = -2147483637;
  }
  v60 = *((_WORD *)v10 + 1);
  if ( (v60 & 0x30) != 0x30 )
    goto LABEL_67;
  if ( (v60 & 0x10) == 0 )
  {
    v59 = 0LL;
    v203 = 0LL;
    goto LABEL_67;
  }
  if ( v60 >= 0 )
  {
    v59 = (_BYTE *)*((_QWORD *)v10 + 3);
  }
  else
  {
    v165 = *((unsigned int *)v10 + 3);
    if ( !(_DWORD)v165 )
    {
      v59 = 0LL;
      v203 = 0LL;
      goto LABEL_67;
    }
    v59 = &v10[v165];
  }
  v203 = v59;
LABEL_67:
  v205 = 0;
  while ( 1 )
  {
    v61 = *((_WORD *)v10 + 1);
    if ( (v61 & 0x10) != 0 )
    {
      if ( v61 >= 0 )
      {
        v62 = (ACL *)*((_QWORD *)v10 + 3);
      }
      else
      {
        v151 = *((unsigned int *)v10 + 3);
        if ( (_DWORD)v151 )
          v62 = (ACL *)&v10[v151];
        else
          v62 = 0LL;
      }
    }
    else
    {
      v62 = 0LL;
    }
    AceByType = (char *)RtlFindAceByType(v62, 0x14u, &v205);
    v65 = AceByType;
    if ( AceByType
      && AceByType != (char *)-8LL
      && !RtlpValidTrustSubjectContext(v223, AceByType + 8, v64, (NTSTATUS *)&AceFlags) )
    {
      goto LABEL_467;
    }
    ++v205;
    if ( !v65 )
      break;
    v10 = v202;
  }
  v66 = v202;
  v206.Header = (ACE_HEADER)4;
  if ( (a7 & 0x800) != 0 )
  {
    v166 = 0LL;
    v205 = 0;
    while ( 1 )
    {
      v167 = *((_WORD *)v66 + 1);
      if ( (v167 & 0x10) != 0 )
      {
        if ( v167 >= 0 )
        {
          v166 = (ACL *)*((_QWORD *)v66 + 3);
        }
        else
        {
          v168 = *((unsigned int *)v66 + 3);
          if ( (_DWORD)v168 )
            v166 = (ACL *)&v66[v168];
        }
      }
      v169 = (char *)RtlFindAceByType(v166, 0x14u, &v205);
      ++v205;
      if ( !v169 )
        break;
      v170 = v169[1];
      if ( (v170 & 8) == 0 )
      {
        v171 = *((_DWORD *)v169 + 1);
        v67 = v169 + 8;
        AceFlags = v170;
        if ( !v231 || (v171 & *(_DWORD *)(v231 + 4)) != v171 || v169 == (char *)-8LL )
        {
LABEL_424:
          v73 = -1073741811;
          goto LABEL_488;
        }
        goto LABEL_429;
      }
      v166 = 0LL;
    }
    v67 = v223;
    if ( !v223 )
      goto LABEL_74;
    if ( !v231 )
    {
      v73 = -1073741811;
      goto LABEL_488;
    }
    v171 = *(_DWORD *)(v231 + 4);
    AceFlags = 0;
LABEL_429:
    v73 = RtlCreateAcl(&v239, 0x58u, 2u);
    if ( v73 < 0 )
      goto LABEL_488;
    v73 = RtlAddProcessTrustLabelAce(&v239, 2u, AceFlags, v67, 0x14u, v171);
    if ( v73 < 0 )
      goto LABEL_488;
    v73 = RtlpComputeMergedAcl(
            (int)v203,
            (*((_WORD *)v202 + 1) & 0x800 | (*((unsigned __int16 *)v202 + 1) >> 1) & 0x18u) >> 1,
            (int)&v239,
            4,
            (__int64)v209,
            (__int64)v207,
            (__int64)GenericMapping,
            2,
            (__int64)&v230,
            (__int64)&v200);
    if ( v73 < 0 )
      goto LABEL_488;
    v67 = v223;
    v66 = v202;
    v195 = 1;
  }
  else
  {
    v67 = v223;
LABEL_74:
    v230 = v59;
  }
  v68 = *((_WORD *)v66 + 1);
  if ( (v68 & 0x10) != 0 )
  {
    if ( v68 >= 0 )
    {
      v69 = (ACL *)*((_QWORD *)v66 + 3);
    }
    else
    {
      v155 = *((unsigned int *)v66 + 3);
      if ( (_DWORD)v155 )
        v69 = (ACL *)&v66[v155];
      else
        v69 = 0LL;
    }
  }
  else
  {
    v69 = 0LL;
  }
  v212 = 0;
  v235 = 0;
  v236 = 256;
  v224 = 0;
  while ( 1 )
  {
    v70 = RtlFindAceByType(v69, 0x15u, &v224);
    v72 = v70;
    if ( v70 )
      break;
LABEL_79:
    ++v224;
    if ( !v72 )
    {
      v73 = v212;
      goto LABEL_81;
    }
  }
  if ( (v70[1] & 0xFF000000) != 0 )
    goto LABEL_424;
  if ( (*((_BYTE *)v70 + 1) & 0x40) != 0 )
  {
    if ( !RtlpValidTrustSubjectContext(v67, v70 + 2, v71, &v212) )
      goto LABEL_467;
    goto LABEL_79;
  }
  v172 = *(_DWORD *)((char *)v70 + 10) - v235;
  if ( !v172 )
    v172 = *((unsigned __int16 *)v70 + 7) - v236;
  if ( v172 )
    goto LABEL_424;
  if ( *((_BYTE *)v70 + 9) == 1 && !v70[4] )
    goto LABEL_79;
  v73 = -1073741811;
LABEL_81:
  if ( v73 < 0 )
    goto LABEL_488;
  v74 = v202;
  v75 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v75 = (a7 >> 8) & 1;
  v76 = v75 | 4;
  if ( (a7 & 0x400) == 0 )
    v76 = v75;
  if ( v76
    || ((v123 = *((_WORD *)v202 + 1), (v123 & 0x10) != 0)
      ? (v123 >= 0
       ? (v124 = (ACL *)*((_QWORD *)v202 + 3))
       : (v156 = *((unsigned int *)v202 + 3), !(_DWORD)v156)
       ? (v124 = 0LL)
       : (v124 = (ACL *)&v202[v156]))
      : (v124 = 0LL),
        v125 = (char *)RtlFindAceByType(v124, 0x11u, 0LL),
        (*(_QWORD *)v218 = v125) == 0LL) )
  {
    v77 = 0;
  }
  else
  {
    v77 = v125[1];
    v76 = *((_DWORD *)v125 + 1);
    *(_QWORD *)MandatoryFlags = v125 + 8;
    LOBYTE(v184) = v77;
    if ( v77 == 8 || (v77 & 0x10) != 0 )
    {
      v77 = 0;
      *(_QWORD *)v218 = 0LL;
      LOBYTE(v184) = 0;
      v76 = 0;
      *(_QWORD *)MandatoryFlags = 0LL;
    }
  }
  if ( (v77 & 8) != 0 && *RtlSubAuthoritySid(Sid1, 0) < 0x2000 )
  {
    v73 = -1073740730;
    goto LABEL_488;
  }
  if ( !v76 )
  {
    if ( Sid1 && *RtlSubAuthoritySid(Sid1, 0) < 0x2000 )
    {
      v76 = 1;
      goto LABEL_90;
    }
LABEL_197:
    v78 = *(PSID *)MandatoryFlags;
LABEL_93:
    if ( v78 )
    {
      memset(Acl, 0, sizeof(Acl));
      Acl[0] = (ACL)8388610LL;
      LODWORD(LabelSid) = v76;
      v73 = RtlAddMandatoryAce(Acl, v79, (unsigned __int8)v184, MandatoryFlags[0], AceType, LabelSid);
      if ( v73 < 0 )
        goto LABEL_488;
    }
    else
    {
      *(_QWORD *)&Size[1] = 0LL;
    }
    if ( (a7 & 0x700) != 0 )
    {
      v80 = 4;
    }
    else if ( !*(_QWORD *)&Size[1] || *(_QWORD *)v218 )
    {
      v126 = *((unsigned __int16 *)v74 + 1);
      if ( (v126 & 0x20) != 0 )
        v127 = 8;
      else
        v127 = 0;
      if ( (v126 & 0x2000) != 0 )
        v128 = 4096;
      else
        v128 = 0;
      v80 = (*((unsigned __int16 *)v74 + 1) >> 2) & 4 | (v126 >> 1) & 0x400 | v127 | v128;
      v206.Header = (ACE_HEADER)v80;
    }
    else
    {
      v80 = 0;
      v206.Header = 0;
    }
    if ( !*(_QWORD *)v221 )
      goto LABEL_98;
    v142 = *(_WORD *)(*(_QWORD *)v221 + 2LL);
    if ( (v142 & 0x10) == 0 )
      goto LABEL_98;
    if ( v142 >= 0 )
    {
      v81 = *(_QWORD *)(*(_QWORD *)v221 + 24LL);
      goto LABEL_99;
    }
    v143 = *(unsigned int *)(*(_QWORD *)v221 + 12LL);
    if ( (_DWORD)v143 )
      v81 = *(_QWORD *)v221 + v143;
    else
LABEL_98:
      v81 = 0LL;
LABEL_99:
    if ( v80 || v81 )
    {
      v82 = (ACE_HEADER)200;
      v212 = 0;
      v227.Header = (ACE_HEADER)200;
      while ( 1 )
      {
        v83 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v82, 0x63416553u);
        v84 = v83;
        if ( !v83 )
          goto LABEL_487;
        LOBYTE(AceType) = 1;
        v73 = RtlpInheritAcl2(
                v81,
                Size[1],
                v80,
                a6,
                AceType,
                0,
                (int)v209,
                (__int64)v207,
                v215,
                (__int64)v210,
                GenericMapping,
                3,
                v228,
                a5,
                &v227,
                v83,
                (__int64)&v206.AccessMask,
                (__int64)&v200);
        if ( v73 >= 0 )
        {
          if ( !*(_DWORD *)&v227.Header )
          {
            ExFreePoolWithTag(v84, 0);
            v84 = 0LL;
          }
LABEL_105:
          if ( v73 == -2147483637 )
            break;
          if ( v73 >= 0 )
          {
            v85 = v200;
            goto LABEL_108;
          }
          goto LABEL_488;
        }
        ExFreePoolWithTag(v84, 0);
        v84 = 0LL;
        if ( v73 != -1073741789 )
          goto LABEL_105;
        if ( (unsigned int)++v212 >= 2 )
          goto LABEL_105;
        v82 = v227.Header;
        v80 = (int)v206.Header;
      }
    }
    v84 = *(ACL **)&Size[1];
    v85 = 0;
    LODWORD(v200) = 0;
LABEL_108:
    v73 = RtlpCombineAcls(
            (_DWORD)v199,
            (_DWORD)v84,
            (_DWORD)v203,
            (_DWORD)v203,
            (__int64)v230,
            (__int64)v203,
            (__int64)&v232,
            (__int64)&v213);
    if ( (v186 & 0x2000) != 0 )
      v86 = 0x40000000;
    else
      v86 = 0;
    Size[0] = v86 | v213;
    if ( v84 && v84 != *(ACL **)&Size[1] )
      ExFreePoolWithTag(v84, 0);
    if ( v73 < 0 )
      goto LABEL_488;
    v87 = v232;
    if ( v232 )
    {
      if ( HIBYTE(v184) && v199 )
        ExFreePoolWithTag(v199, 0);
      v199 = v87;
      v194 = 1;
      v88 = v87;
      if ( (v85 & 4) != 0 )
        v89 = 16;
      else
        v89 = 0;
      if ( (v85 & 8) != 0 )
        v90 = 32;
      else
        v90 = 0;
      if ( (v85 & 0x1000) != 0 )
        v91 = 0x2000;
      else
        v91 = 0;
      v186 |= (2 * (v85 & 0x400)) | v89 | v90 | v91 | 0x10;
    }
    else
    {
      v88 = (ACL *)v199;
    }
    v92 = a7;
    v213 = a7 & 8;
    if ( (a7 & 8) == 0 )
    {
      v93 = (char *)RtlFindAceByType(v88, 0x11u, 0LL);
      if ( v93 )
        v94 = v93 + 8;
      else
        v94 = *(PSID *)MandatoryFlags;
      if ( v94 )
      {
        if ( !SubjectSecurityContext )
        {
          v73 = -1073741700;
          goto LABEL_488;
        }
        v73 = RtlSidDominates(Sid1, v94, (PBOOLEAN)&v182);
        if ( v73 < 0 )
          goto LABEL_488;
        v92 = a7;
        if ( !v182 )
          v191 = 1;
      }
      else
      {
        v92 = a7;
      }
    }
    v182 = (_DWORD)AccessStatus != 0;
    v95 = v202;
    v96 = v92 & 1;
    v97 = *((_WORD *)v202 + 1);
    v98 = v97;
    if ( (v97 & 4) != 0 )
    {
      if ( v97 >= 0 )
      {
        v135 = (_BYTE *)*((_QWORD *)v202 + 4);
      }
      else
      {
        v134 = *((unsigned int *)v202 + 4);
        if ( !(_DWORD)v134 )
        {
          *(_QWORD *)v218 = 0LL;
          goto LABEL_133;
        }
        v135 = &v202[v134];
      }
      *(_QWORD *)v218 = v135;
    }
    else
    {
      *(_QWORD *)v218 = 0LL;
    }
LABEL_133:
    if ( *(_QWORD *)v221 )
    {
      v144 = *(_WORD *)(*(_QWORD *)v221 + 2LL);
      if ( (v144 & 4) != 0 )
      {
        if ( v144 >= 0 )
        {
          v99 = *(_QWORD *)(*(_QWORD *)v221 + 32LL);
LABEL_135:
          *(_QWORD *)&Size[1] = v99;
          v100 = v98 & 0x140C;
          if ( !v100 && !v99 )
          {
            v198 = 0LL;
LABEL_138:
            v101 = v186;
            if ( v96 )
            {
              LODWORD(v101) = v186 | 0x400;
              v186 |= 0x400u;
            }
            v102 = *((_WORD *)v95 + 1);
            if ( (v102 & 0xC) == 0xC )
            {
              if ( (v102 & 4) != 0 )
              {
                if ( v102 >= 0 )
                {
                  v103 = (_BYTE *)*((_QWORD *)v95 + 4);
                }
                else
                {
                  v160 = *((unsigned int *)v95 + 4);
                  if ( (_DWORD)v160 )
                    v103 = &v95[v160];
                  else
                    v103 = 0LL;
                }
              }
              else
              {
                v103 = 0LL;
              }
              LOBYTE(v100) = 1;
              v101 = v102 & 0x1000 | 4 | (unsigned int)v101;
            }
            else
            {
              v103 = Src;
              if ( !Src )
              {
LABEL_144:
                if ( (v92 & 0x1000) == 0 && HIBYTE(v190.AccessMask) && SubjectSecurityContext && *(_QWORD *)v221 )
                {
                  GrantedAccess[0] = 0;
                  LODWORD(AccessStatus) = 0;
                  v73 = RtlpNewSecurityObject(
                          v221[0],
                          0,
                          (int)&SecurityDescriptor,
                          v228,
                          a5,
                          a6,
                          v92 | 1,
                          (__int64)SubjectSecurityContext,
                          (__int64)GenericMapping,
                          v231);
                  if ( v73 < 0 )
                    goto LABEL_488;
                  v131 = *((_WORD *)SecurityDescriptor + 1);
                  if ( (v131 & 4) != 0 )
                  {
                    if ( v131 >= 0 )
                    {
                      v133 = (char *)*((_QWORD *)SecurityDescriptor + 4);
                    }
                    else
                    {
                      v132 = *((_DWORD *)SecurityDescriptor + 4);
                      if ( v132 )
                        v133 = (char *)SecurityDescriptor + v132;
                      else
                        v133 = 0LL;
                    }
                  }
                  else
                  {
                    v133 = 0LL;
                  }
                  if ( RtlpOwnerAcesPresent(0x10u, (__int64)v133)
                    && !SeAccessCheck(
                          SecurityDescriptor,
                          SubjectSecurityContext,
                          0,
                          0x40000u,
                          0,
                          0LL,
                          GenericMapping,
                          AccessMode,
                          GrantedAccess,
                          (PNTSTATUS)&AccessStatus) )
                  {
LABEL_467:
                    v73 = -1073741790;
                    goto LABEL_488;
                  }
                  LOBYTE(v92) = a7;
                }
                v104 = (unsigned __int16 *)v198;
                if ( v96 && !v198 )
                  v186 |= 0x1000u;
                v105 = !Size[0] || (Size[0] & 0x1B0) != Size[0];
                if ( AccessMode == 1 )
                {
                  v106 = v213;
                  if ( v180 && !v213 && v105 )
                  {
                    if ( !SubjectSecurityContext )
                    {
                      v73 = -1073741700;
                      goto LABEL_488;
                    }
                    RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
                    RequiredPrivileges.PrivilegeCount = 1;
                    RequiredPrivileges.Privilege[0].Attributes = 0;
                    RequiredPrivileges.Control = 1;
                    v173 = SePrivilegeCheck(&RequiredPrivileges, SubjectSecurityContext, 1);
                    SePrivilegedServiceAuditAlarm(0LL, SubjectSecurityContext, &RequiredPrivileges, v173);
                    if ( !(_BYTE)v173 )
                    {
                      v73 = -1073741727;
                      goto LABEL_488;
                    }
                    v104 = (unsigned __int16 *)v198;
                    LOBYTE(v92) = a7;
                  }
                  if ( v191 && !v106 )
                  {
                    v174 = SubjectSecurityContext;
                    if ( !SubjectSecurityContext )
                    {
                      v73 = -1073741700;
                      goto LABEL_488;
                    }
                    RequiredPrivileges.Privilege[0].Luid = (LUID)SeRelabelPrivilege;
                    RequiredPrivileges.PrivilegeCount = 1;
                    RequiredPrivileges.Privilege[0].Attributes = 0;
                    RequiredPrivileges.Control = 1;
                    v175 = SePrivilegeCheck(&RequiredPrivileges, SubjectSecurityContext, 1);
                    SePrivilegedServiceAuditAlarm(0LL, v174, &RequiredPrivileges, v175);
                    if ( !(_BYTE)v175 )
                    {
                      v73 = -1073741727;
                      goto LABEL_488;
                    }
                    v104 = (unsigned __int16 *)v198;
                    LOBYTE(v92) = a7;
                  }
                  if ( v189
                    && (v92 & 0x10) == 0
                    && !(unsigned __int8)SepValidOwnerSubjectContext(SubjectSecurityContext, v209, v181, v101) )
                  {
                    v73 = -1073741734;
                    goto LABEL_488;
                  }
                  if ( (_BYTE)v100 && v181 )
                  {
                    ServerAcl = RtlpCreateServerAcl((_DWORD)v104, v192, v215, (unsigned int)&v229, (__int64)&v193);
                    v73 = ServerAcl;
                    if ( ServerAcl < 0 )
                      goto LABEL_488;
                    if ( v185 && v198 )
                      ExFreePoolWithTag(v198, 0);
                    v104 = (unsigned __int16 *)v229;
                    v198 = v229;
                    v229 = 0LL;
                  }
                }
                v107 = 4 * *((unsigned __int8 *)v209 + 1) + 8;
                Size[0] = v107;
                if ( v207 )
                  v108 = 4 * v207[1] + 8;
                else
                  v108 = 0;
                LODWORD(AccessStatus) = v108;
                GrantedAccess[0] = v186 & 0x10;
                if ( (v186 & 0x10) != 0 && v199 )
                  v109 = (*((unsigned __int16 *)v199 + 1) + 3) & 0xFFFFFFFC;
                else
                  v109 = 0;
                *(_DWORD *)&v190.Header.AceSize = v109;
                v110 = v186 & 4;
                if ( (v186 & 4) != 0 && v104 )
                  v111 = (v104[1] + 3) & 0xFFFFFFFC;
                else
                  v111 = 0;
                v112 = ExAllocatePoolWithTag(PagedPool, v109 + v108 + v111 + v107 + 20, 0x64536553u);
                v187 = v112;
                v113 = v112;
                if ( !v112 )
                {
                  v73 = -1073741670;
                  goto LABEL_488;
                }
                v114 = v186;
                v115 = (char *)v112 + 20;
                *v112 = 0LL;
                v112[1] = 0LL;
                *((_DWORD *)v112 + 4) = 0;
                *((_WORD *)v112 + 1) |= v114;
                *(_BYTE *)v112 = 1;
                if ( GrantedAccess[0] )
                {
                  if ( v199 )
                  {
                    memmove(v115, v199, *((unsigned __int16 *)v199 + 1));
                    if ( !HIBYTE(v184) )
                      RtlpApplyAclToObject(v115, GenericMapping);
                    v113 = v187;
                    *((_DWORD *)v187 + 3) = (_DWORD)v115 - (_DWORD)v187;
                    v116 = *((unsigned __int16 *)v199 + 1);
                    v117 = *(unsigned int *)&v190.Header.AceSize;
                    if ( *(_DWORD *)&v190.Header.AceSize > (unsigned int)v116 )
                    {
                      memset(&v115[v116], 0, (unsigned int)(*(_DWORD *)&v190.Header.AceSize - v116));
                      v117 = *(unsigned int *)&v190.Header.AceSize;
                      v113 = v187;
                    }
                    v115 += v117;
                  }
                  else
                  {
                    *((_DWORD *)v112 + 3) = 0;
                  }
                }
                if ( v110 )
                {
                  if ( v198 )
                  {
                    memmove(v115, v198, *((unsigned __int16 *)v198 + 1));
                    if ( !v185 )
                      RtlpApplyAclToObject(v115, GenericMapping);
                    v14 = v187;
                    *((_DWORD *)v187 + 4) = (_DWORD)v115 - (_DWORD)v187;
                    v118 = *((unsigned __int16 *)v198 + 1);
                    if ( v111 > (unsigned int)v118 )
                      memset(&v115[v118], 0, v111 - (unsigned int)v118);
                    v115 += v111;
                    goto LABEL_178;
                  }
                  *((_DWORD *)v113 + 4) = 0;
                }
                v14 = v187;
LABEL_178:
                v119 = Size[0];
                memmove(v115, v209, Size[0]);
                v120 = (int)v115;
                v121 = &v115[v119];
                *((_DWORD *)v14 + 1) = v120 - (_DWORD)v14;
                if ( v207 )
                {
                  memmove(v121, v207, (unsigned int)AccessStatus);
                  *((_DWORD *)v14 + 2) = (_DWORD)v121 - (_DWORD)v14;
                }
                v73 = 0;
                goto LABEL_181;
              }
              v101 = (unsigned int)v101 | 4;
            }
            v186 = v101;
            v198 = v103;
            goto LABEL_144;
          }
          v129 = 200;
          LODWORD(AccessStatus) = 0;
          *(_DWORD *)&v190.Header.AceSize = 200;
          while ( 1 )
          {
            v130 = (ACL *)ExAllocatePoolWithTag(PagedPool, v129, 0x63416553u);
            v198 = v130;
            if ( !v130 )
              break;
            LOBYTE(AceTypea) = v96;
            v73 = RtlpInheritAcl2(
                    v99,
                    v218[0],
                    v100,
                    a6,
                    AceTypea,
                    v182,
                    (int)v209,
                    (__int64)v207,
                    v215,
                    (__int64)v210,
                    GenericMapping,
                    1,
                    v228,
                    a5,
                    (struct _ACE *)((char *)&v190 + 2),
                    v130,
                    (__int64)&v190,
                    (__int64)&v200);
            if ( v73 >= 0 )
            {
              if ( !*(_DWORD *)&v190.Header.AceSize )
              {
                ExFreePoolWithTag(v198, 0);
                v198 = 0LL;
              }
LABEL_215:
              if ( v73 >= 0 )
              {
                LOBYTE(v100) = v190.Header.AceType;
                v92 = a7;
                v186 |= v200 & 0x1408 | 4;
                v185 = 1;
                goto LABEL_144;
              }
              if ( v73 == -2147483637 )
              {
                LOBYTE(v100) = v190.Header.AceType;
                v95 = v202;
                v92 = a7;
                goto LABEL_138;
              }
              goto LABEL_488;
            }
            ExFreePoolWithTag(v198, 0);
            v198 = 0LL;
            if ( v73 != -1073741789 )
              goto LABEL_215;
            LODWORD(AccessStatus) = AccessStatus + 1;
            if ( (unsigned int)AccessStatus >= 2 )
              goto LABEL_215;
            v129 = *(_DWORD *)&v190.Header.AceSize;
            LODWORD(v99) = Size[1];
          }
LABEL_487:
          v73 = -1073741801;
          goto LABEL_488;
        }
        v145 = *(unsigned int *)(*(_QWORD *)v221 + 16LL);
        if ( (_DWORD)v145 )
        {
          v99 = *(_QWORD *)v221 + v145;
          goto LABEL_135;
        }
      }
    }
    v99 = 0LL;
    goto LABEL_135;
  }
LABEL_90:
  if ( *(_QWORD *)v218 )
    goto LABEL_197;
  if ( SubjectSecurityContext )
  {
    v78 = Sid1;
    *(_QWORD *)MandatoryFlags = Sid1;
    LOBYTE(v184) = 0;
    goto LABEL_93;
  }
  v73 = -1073741700;
LABEL_488:
  v14 = v187;
LABEL_181:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v193 && v229 )
    ExFreePoolWithTag(v229, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (v194 || HIBYTE(v184)) && v199 )
    ExFreePoolWithTag(v199, 0);
  if ( v196 && v203 )
    ExFreePoolWithTag(v203, 0);
  if ( v230 && v195 )
    ExFreePoolWithTag(v230, 0);
  if ( v185 )
  {
    if ( v198 )
      ExFreePoolWithTag(v198, 0);
  }
  *v233 = v14;
  return (unsigned int)v73;
}
