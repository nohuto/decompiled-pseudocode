/*
 * XREFs of RtlpNewSecurityObject @ 0x1404BCE00
 * Callers:
 *     SeAssignSecurityEx2 @ 0x1400877C0 (SeAssignSecurityEx2.c)
 *     SeAssignSecurity @ 0x140475B00 (SeAssignSecurity.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x1400154F0 (RtlpOwnerAcesPresent.c)
 *     RtlSubAuthoritySid @ 0x140019320 (RtlSubAuthoritySid.c)
 *     SeAccessCheck @ 0x14007E440 (SeAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlFindAceByType @ 0x140087840 (RtlFindAceByType.c)
 *     SepLocateTokenTrustLevel @ 0x140087894 (SepLocateTokenTrustLevel.c)
 *     SepLocateTokenIntegrity @ 0x1400878E8 (SepLocateTokenIntegrity.c)
 *     RtlSidDominates @ 0x140087AD0 (RtlSidDominates.c)
 *     RtlpValidTrustSubjectContext @ 0x140155864 (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14046C374 (SePrivilegedServiceAuditAlarm.c)
 *     RtlCreateAcl @ 0x140486390 (RtlCreateAcl.c)
 *     SeUnlockSubjectContext @ 0x1404B2450 (SeUnlockSubjectContext.c)
 *     RtlValidAcl @ 0x1404BC590 (RtlValidAcl.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 *     RtlpApplyAclToObject @ 0x1404BE910 (RtlpApplyAclToObject.c)
 *     RtlpInheritAcl2 @ 0x1404BE9E0 (RtlpInheritAcl2.c)
 *     RtlpCombineAcls @ 0x1404BEE60 (RtlpCombineAcls.c)
 *     SePrivilegeCheck @ 0x1404C45D0 (SePrivilegeCheck.c)
 *     SepValidOwnerSubjectContext @ 0x14057ED30 (SepValidOwnerSubjectContext.c)
 *     RtlAddProcessTrustLabelAce @ 0x1405D8980 (RtlAddProcessTrustLabelAce.c)
 *     RtlpComputeMergedAcl @ 0x140721F4C (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x140722370 (RtlpCreateServerAcl.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        unsigned int a7,
        struct _SECURITY_SUBJECT_CONTEXT *a8,
        GENERIC_MAPPING *a9,
        __int64 a10)
{
  _QWORD *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rdi
  unsigned int v13; // ecx
  __int64 v14; // r10
  void *v15; // r9
  int v16; // eax
  __int16 v17; // r11
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v19; // rax
  __int64 PrimaryToken; // r8
  unsigned int *v21; // rdx
  unsigned __int8 *v22; // rdi
  unsigned __int8 *v23; // rsi
  __int64 v24; // rcx
  PSID *TokenIntegrity; // rax
  PSID v26; // rax
  __int64 TokenTrustLevel; // rax
  unsigned __int8 *v28; // rbx
  int v29; // r11d
  int v30; // r9d
  int v31; // r8d
  int v32; // edx
  int v33; // eax
  char *v34; // r9
  int v35; // eax
  int v36; // eax
  int v37; // eax
  char *v38; // rbx
  int v39; // eax
  unsigned int v40; // edx
  __int64 v41; // rax
  char *v42; // rax
  __int64 v43; // rax
  char *v44; // rbx
  NTSTATUS ServerAcl; // ebx
  __int64 v46; // rax
  void *v47; // rax
  PVOID v48; // rax
  __int64 v49; // rax
  void *v50; // rbx
  NTSTATUS v51; // eax
  ULONG v52; // edi
  char *v53; // rbx
  __int64 v54; // rax
  __int16 v55; // ax
  __int64 v56; // rax
  __int64 v57; // rsi
  ACE_HEADER Header; // eax
  int v59; // edi
  ACL *v60; // rax
  _QWORD *v61; // rdi
  int v62; // ebx
  bool v63; // zf
  ACE_HEADER v64; // ebx
  __int16 v65; // cx
  __int64 v66; // rax
  char *v67; // rax
  unsigned __int16 v68; // dx
  char *v69; // rbx
  __int64 v70; // rax
  __int16 v71; // ax
  __int64 v72; // rax
  __int64 v73; // rsi
  ACCESS_MASK v74; // eax
  int v75; // edi
  ACL *v76; // rax
  __int16 v77; // cx
  __int64 v78; // rax
  char *v79; // rax
  __int16 v80; // ax
  ACL *v81; // rcx
  __int64 v82; // rax
  char *AceByType; // rax
  __int64 v84; // r8
  void *v85; // rsi
  char *v86; // rbx
  __int16 v87; // ax
  ACL *v88; // rcx
  __int64 v89; // rax
  char *v90; // rax
  unsigned __int8 v91; // cl
  ACCESS_MASK AccessMask; // edi
  __int16 v93; // ax
  ACL *v94; // rdi
  __int64 v95; // rax
  _DWORD *v96; // rax
  __int64 v97; // r8
  _DWORD *v98; // rbx
  _QWORD *v99; // rsi
  int v100; // edx
  int v101; // edi
  __int16 v102; // ax
  ACL *v103; // rcx
  __int64 v104; // rax
  char *v105; // rax
  UCHAR v106; // bl
  void *v107; // rax
  ACL *v108; // rcx
  ACL *v109; // r10
  unsigned int v110; // edx
  ACL *v111; // rdx
  unsigned __int8 *v112; // r9
  USHORT v113; // cx
  PVOID v114; // rdi
  ACL *v115; // rax
  ACCESS_MASK v116; // ecx
  __int16 v117; // ax
  __int64 v118; // rax
  void *v119; // rbx
  ACE_HEADER v120; // eax
  int v121; // esi
  ACL *v122; // rax
  PVOID v123; // rdi
  __int16 v124; // si
  ACL *v125; // rbx
  ACL *v126; // rcx
  char *v127; // rax
  char *v128; // rax
  int v129; // eax
  _QWORD *v130; // rdx
  __int16 v131; // cx
  char *v132; // rbx
  __int64 v133; // rax
  __int16 v134; // ax
  __int64 v135; // rax
  __int64 v136; // rsi
  char v137; // di
  char *v138; // r8
  ACE_HEADER v139; // eax
  int v140; // edi
  ACL *v141; // rax
  ACE_HEADER v142; // esi
  int v143; // r9d
  __int16 v144; // cx
  __int64 v145; // rax
  int v146; // r9d
  struct _SECURITY_SUBJECT_CONTEXT *v147; // rdx
  __int16 v148; // cx
  char *v149; // rdx
  __int64 v150; // rcx
  char v151; // al
  char v152; // bl
  bool v153; // al
  int v154; // esi
  BOOLEAN v155; // bl
  __int64 *v156; // rsi
  BOOLEAN v157; // bl
  unsigned __int16 *v158; // r8
  int v159; // edx
  int v160; // ecx
  __int16 v161; // bx
  unsigned int v162; // edi
  unsigned int v163; // esi
  _DWORD *v164; // rdx
  int v165; // eax
  char *v166; // rbx
  __int64 v167; // rcx
  unsigned __int16 *v168; // rdi
  __int64 v169; // rcx
  __int64 v170; // rdi
  _DWORD *v171; // rsi
  int v172; // eax
  char *v173; // rbx
  __int64 AceType; // [rsp+20h] [rbp-F0h]
  __int64 AceTypea; // [rsp+20h] [rbp-F0h]
  __int64 AccessMode; // [rsp+90h] [rbp-80h] BYREF
  PVOID v178; // [rsp+98h] [rbp-78h]
  _DWORD *v179; // [rsp+A0h] [rbp-70h]
  char v180; // [rsp+A8h] [rbp-68h]
  char v181; // [rsp+A9h] [rbp-67h]
  struct _ACE v182; // [rsp+ACh] [rbp-64h] BYREF
  char v183; // [rsp+B4h] [rbp-5Ch]
  char v184; // [rsp+B5h] [rbp-5Bh] BYREF
  char v185; // [rsp+B6h] [rbp-5Ah]
  char v186; // [rsp+B7h] [rbp-59h]
  char v187; // [rsp+B8h] [rbp-58h]
  PVOID P; // [rsp+C0h] [rbp-50h]
  int v189; // [rsp+C8h] [rbp-48h] BYREF
  NTSTATUS v190; // [rsp+CCh] [rbp-44h] BYREF
  size_t v191; // [rsp+D0h] [rbp-40h] BYREF
  void *v192; // [rsp+D8h] [rbp-38h]
  __int16 v193; // [rsp+E0h] [rbp-30h] BYREF
  bool v194; // [rsp+E2h] [rbp-2Eh]
  __int16 v195; // [rsp+E4h] [rbp-2Ch]
  ULONG AceFlags; // [rsp+E8h] [rbp-28h] BYREF
  struct _ACE v197; // [rsp+ECh] [rbp-24h] BYREF
  ULONG v198; // [rsp+F4h] [rbp-1Ch] BYREF
  PVOID v199; // [rsp+F8h] [rbp-18h]
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+100h] [rbp-10h]
  void *v201; // [rsp+108h] [rbp-8h]
  ACCESS_MASK GrantedAccess[2]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD *v203; // [rsp+118h] [rbp+8h]
  void *v204; // [rsp+120h] [rbp+10h]
  char *v205; // [rsp+128h] [rbp+18h]
  NTSTATUS AccessStatus; // [rsp+130h] [rbp+20h] BYREF
  int Size[3]; // [rsp+134h] [rbp+24h] BYREF
  __int64 v208; // [rsp+140h] [rbp+30h]
  void *v209; // [rsp+148h] [rbp+38h]
  PGENERIC_MAPPING GenericMapping; // [rsp+150h] [rbp+40h]
  void *Src; // [rsp+158h] [rbp+48h]
  PVOID v212; // [rsp+160h] [rbp+50h]
  struct _ACE v213; // [rsp+168h] [rbp+58h] BYREF
  __int64 v214; // [rsp+170h] [rbp+60h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+178h] [rbp+68h] BYREF
  ULONG v216; // [rsp+180h] [rbp+70h] BYREF
  int v217; // [rsp+184h] [rbp+74h]
  int v218; // [rsp+188h] [rbp+78h]
  __int64 v219; // [rsp+190h] [rbp+80h]
  char *v220; // [rsp+198h] [rbp+88h]
  PVOID v221; // [rsp+1A0h] [rbp+90h] BYREF
  PVOID PoolWithTag; // [rsp+1A8h] [rbp+98h]
  PVOID v223; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 v224; // [rsp+1B8h] [rbp+A8h]
  ACL *v225; // [rsp+1C0h] [rbp+B0h] BYREF
  _QWORD *v226; // [rsp+1C8h] [rbp+B8h]
  _QWORD v227[5]; // [rsp+1D0h] [rbp+C0h] BYREF
  int v228; // [rsp+1F8h] [rbp+E8h]
  __int16 v229; // [rsp+1FCh] [rbp+ECh]
  int v230; // [rsp+200h] [rbp+F0h]
  __int16 v231; // [rsp+204h] [rbp+F4h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+208h] [rbp+F8h] BYREF
  ACL v233[16]; // [rsp+220h] [rbp+110h] BYREF
  ACL Acl; // [rsp+2A0h] [rbp+190h] BYREF

  v10 = a2;
  GenericMapping = a9;
  v226 = a3;
  v11 = a1;
  v203 = a2;
  v224 = a10;
  v12 = 0LL;
  v214 = a1;
  v13 = a7;
  v14 = 0LL;
  v219 = a4;
  v15 = 0LL;
  v212 = v233;
  SubjectSecurityContext = a8;
  P = 0LL;
  v199 = 0LL;
  v180 = 0;
  v186 = 0;
  v185 = 0;
  LODWORD(v191) = 0;
  v178 = 0LL;
  v221 = 0LL;
  v181 = 0;
  LOWORD(AccessMode) = 256;
  v193 = 0;
  LOWORD(v182.AccessMask) = 0;
  LOBYTE(v217) = 0;
  v184 = 0;
  PoolWithTag = 0LL;
  Src = 0LL;
  v192 = 0LL;
  v208 = 0LL;
  v205 = 0LL;
  v179 = 0LL;
  memset(Size, 0, sizeof(Size));
  v220 = 0LL;
  v209 = 0LL;
  v225 = 0LL;
  SecurityDescriptor = 0LL;
  HIBYTE(v182.AccessMask) = 1;
  v223 = 0LL;
  v187 = 0;
  if ( (a7 & 0x2000) == 0 )
    BYTE1(AccessMode) = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
  {
    v183 = 1;
  }
  else
  {
    v183 = 0;
    v10 = v227;
    v227[0] = 1LL;
    memset(&v227[1], 0, 32);
    v203 = v227;
  }
  v16 = *((unsigned __int16 *)v10 + 1);
  v195 = *((_WORD *)v10 + 1) & 0x80;
  v17 = v195;
  v194 = v195 != 0;
  LOBYTE(v16) = (v16 & 0x40) != 0;
  v218 = v16;
  if ( a8 || v195 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)a8->PrimaryToken + 6), 1u);
    if ( !a8->ClientToken
      || (v19 = KeGetCurrentThread(),
          --v19->KernelApcDisable,
          ExAcquireResourceSharedLite(*((PERESOURCE *)a8->ClientToken + 6), 1u),
          (PrimaryToken = (__int64)a8->ClientToken) == 0) )
    {
      PrimaryToken = (__int64)a8->PrimaryToken;
    }
    v21 = (unsigned int *)a8->PrimaryToken;
    v22 = *(unsigned __int8 **)(PrimaryToken + 168);
    v23 = (unsigned __int8 *)*((_QWORD *)v21 + 21);
    v24 = v21[36];
    Src = *(void **)(*(_QWORD *)(PrimaryToken + 152) + 16LL * *(unsigned int *)(PrimaryToken + 144));
    v201 = *(void **)(PrimaryToken + 184);
    *(_QWORD *)&Size[1] = *(_QWORD *)(*((_QWORD *)v21 + 19) + 16 * v24);
    TokenIntegrity = (PSID *)SepLocateTokenIntegrity(PrimaryToken);
    if ( TokenIntegrity )
      v26 = *TokenIntegrity;
    else
      v26 = SepDefaultMandatorySid;
    v192 = v26;
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)a8);
    v28 = (unsigned __int8 *)TokenTrustLevel;
    if ( TokenTrustLevel )
      v29 = 4 * *(unsigned __int8 *)(TokenTrustLevel + 1) + 8;
    else
      v29 = 0;
    if ( v22 )
      v30 = 4 * v22[1] + 8;
    else
      v30 = 0;
    if ( v23 )
      v31 = 4 * v23[1] + 32;
    else
      v31 = 24;
    if ( v201 )
      v32 = *((unsigned __int16 *)v201 + 1);
    else
      v32 = 0;
    PoolWithTag = ExAllocatePoolWithTag(
                    PagedPool,
                    v31
                  + v29
                  + v30
                  + v32
                  + 4
                  * (*((unsigned __int8 *)v192 + 1)
                   + *(unsigned __int8 *)(*(_QWORD *)&Size[1] + 1LL)
                   + (unsigned int)*((unsigned __int8 *)Src + 1)),
                    0x64536553u);
    if ( !PoolWithTag )
    {
      SeUnlockSubjectContext(SubjectSecurityContext);
      return 3221225626LL;
    }
    memmove(PoolWithTag, Src, 4 * (unsigned int)*((unsigned __int8 *)Src + 1) + 8);
    v33 = *((unsigned __int8 *)v192 + 1);
    Src = (char *)PoolWithTag + 4 * (unsigned int)*((unsigned __int8 *)Src + 1) + 8;
    memmove(Src, v192, (unsigned int)(4 * v33 + 8));
    v34 = (char *)Src + 4 * (unsigned int)*((unsigned __int8 *)v192 + 1) + 8;
    v205 = v34;
    if ( v28 )
    {
      v35 = v28[1];
      v192 = v34;
      memmove(v34, v28, (unsigned int)(4 * v35 + 8));
      v34 = &v205[4 * v28[1] + 8];
      v205 = v34;
    }
    else
    {
      v192 = 0LL;
    }
    if ( v22 )
    {
      v36 = v22[1];
      v208 = (__int64)v34;
      memmove(v34, v22, (unsigned int)(4 * v36 + 8));
      v37 = v22[1];
      v12 = v208;
      v34 = &v205[4 * v37 + 8];
      v205 = v34;
    }
    else
    {
      v12 = 0LL;
    }
    v208 = (__int64)v34;
    memmove(v34, *(const void **)&Size[1], 4 * (unsigned int)*(unsigned __int8 *)(*(_QWORD *)&Size[1] + 1LL) + 8);
    v38 = &v205[4 * *(unsigned __int8 *)(*(_QWORD *)&Size[1] + 1LL) + 8];
    v205 = v38;
    if ( v23 )
    {
      v39 = v23[1];
      *(_QWORD *)&Size[1] = v38;
      memmove(v38, v23, (unsigned int)(4 * v39 + 8));
      v38 += 4 * (unsigned int)v23[1] + 8;
      v205 = v38;
    }
    else
    {
      *(_QWORD *)&Size[1] = 0LL;
    }
    if ( v201 )
      memmove(v38, v201, *((unsigned __int16 *)v201 + 1));
    else
      v205 = 0LL;
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegion();
    if ( SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegion();
    }
    v17 = v195;
    v13 = a7;
    v14 = v208;
    v15 = *(void **)&Size[1];
    v11 = v214;
    v10 = v203;
  }
  v40 = *((unsigned __int16 *)v10 + 1);
  if ( (v40 & 0x8000u) == 0 )
  {
    v42 = (char *)v10[1];
  }
  else
  {
    v41 = *((unsigned int *)v10 + 1);
    if ( !(_DWORD)v41 )
      goto LABEL_51;
    v42 = (char *)v10 + v41;
  }
  v204 = v42;
  if ( v42 )
  {
    BYTE1(v182.AccessMask) = 1;
    goto LABEL_48;
  }
LABEL_51:
  if ( (v13 & 0x20) != 0 )
  {
    if ( !v11 )
    {
      ServerAcl = -1073741734;
      goto LABEL_451;
    }
    if ( *(__int16 *)(v11 + 2) >= 0 )
    {
      v47 = *(void **)(v11 + 8);
    }
    else
    {
      v46 = *(unsigned int *)(v11 + 4);
      if ( !(_DWORD)v46 )
      {
LABEL_59:
        ServerAcl = -1073741734;
        goto LABEL_451;
      }
      v47 = (void *)(v11 + v46);
    }
    v204 = v47;
    BYTE1(v182.AccessMask) = 1;
    if ( !v47 )
      goto LABEL_59;
  }
  else
  {
    v48 = PoolWithTag;
    if ( v17 )
      v48 = (PVOID)v14;
    v204 = v48;
    if ( !v48 )
    {
      ServerAcl = -1073741700;
      goto LABEL_451;
    }
  }
LABEL_48:
  if ( (v40 & 0x8000u) == 0 )
  {
    v44 = (char *)v10[2];
LABEL_65:
    v201 = v44;
    if ( v44 )
      goto LABEL_77;
    goto LABEL_66;
  }
  v43 = *((unsigned int *)v10 + 2);
  if ( (_DWORD)v43 )
  {
    v44 = (char *)v10 + v43;
    goto LABEL_65;
  }
LABEL_66:
  if ( (v13 & 0x40) != 0 )
  {
    if ( !v11 )
    {
      ServerAcl = -1073741733;
      goto LABEL_451;
    }
    if ( *(__int16 *)(v11 + 2) >= 0 )
    {
      v50 = *(void **)(v11 + 16);
    }
    else
    {
      v49 = *(unsigned int *)(v11 + 8);
      if ( !(_DWORD)v49 )
      {
LABEL_76:
        ServerAcl = -1073741733;
        goto LABEL_451;
      }
      v50 = (void *)(v11 + v49);
    }
  }
  else
  {
    v50 = (void *)v12;
    if ( v17 )
      v50 = v15;
  }
  v201 = v50;
  if ( !v50 )
    goto LABEL_76;
LABEL_77:
  v51 = v13 >> 2;
  LOBYTE(v51) = (v13 & 4) != 0;
  v52 = v13 & 2;
  AccessStatus = v51;
  AceFlags = v52;
  BYTE2(v182.AccessMask) = v52 != 0;
  if ( (v40 & 0x10) == 0 )
  {
    LODWORD(v53) = 0;
    *(_QWORD *)GrantedAccess = 0LL;
    goto LABEL_85;
  }
  if ( (v40 & 0x8000u) == 0 )
  {
    v53 = (char *)v10[3];
  }
  else
  {
    v54 = *((unsigned int *)v10 + 3);
    if ( !(_DWORD)v54 )
    {
      LODWORD(v53) = 0;
      *(_QWORD *)GrantedAccess = 0LL;
      goto LABEL_85;
    }
    v53 = (char *)v10 + v54;
  }
  *(_QWORD *)GrantedAccess = v53;
LABEL_85:
  if ( !v214 )
    goto LABEL_91;
  v55 = *(_WORD *)(v214 + 2);
  if ( (v55 & 0x10) == 0 )
    goto LABEL_91;
  if ( v55 >= 0 )
  {
    v57 = *(_QWORD *)(v214 + 24);
    goto LABEL_92;
  }
  v56 = *(unsigned int *)(v214 + 12);
  if ( !(_DWORD)v56 )
  {
LABEL_91:
    v57 = 0LL;
    goto LABEL_92;
  }
  v57 = v214 + v56;
LABEL_92:
  v190 = ((v40 & 0x10) != 0 ? 4 : 0) | (v40 >> 2) & 8 | (v40 >> 1) & 0x1400;
  if ( v190 || v57 )
  {
    Header = (ACE_HEADER)200;
    v59 = 0;
    v182.Header = (ACE_HEADER)200;
    while ( 1 )
    {
      v60 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&Header, 0x63416553u);
      P = v60;
      if ( !v60 )
        goto LABEL_450;
      LOBYTE(AceType) = BYTE2(v182.AccessMask);
      ServerAcl = RtlpInheritAcl2(
                    v57,
                    (int)v53,
                    v190,
                    a6,
                    AceType,
                    AccessStatus,
                    (int)v204,
                    (__int64)v201,
                    v208,
                    *(__int64 *)&Size[1],
                    GenericMapping,
                    2,
                    v219,
                    a5,
                    &v182,
                    v60,
                    (__int64)&AccessMode,
                    (__int64)&v189);
      if ( ServerAcl >= 0 )
        break;
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_103;
      if ( (unsigned int)++v59 >= 2 )
        goto LABEL_103;
      Header = v182.Header;
      LODWORD(v53) = GrantedAccess[0];
    }
    if ( !*(_DWORD *)&v182.Header )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
LABEL_103:
    if ( ServerAcl >= 0 )
    {
      v61 = v203;
      v180 = 1;
      v62 = 2 * (v189 & 0x1400 | (2 * (v189 & 8 | 0x2004)));
LABEL_119:
      v182.Header = (ACE_HEADER)v62;
      goto LABEL_120;
    }
    if ( ServerAcl != -2147483637 )
      goto LABEL_451;
    v52 = AceFlags;
  }
  else
  {
    LOBYTE(AccessMode) = 0;
    P = 0LL;
    v189 = v52 != 0 ? 0x400 : 0;
  }
  v63 = v52 == 0;
  v61 = v203;
  v64 = (ACE_HEADER)0x8000;
  if ( !v63 )
    v64 = (ACE_HEADER)34816;
  v182.Header = v64;
  v65 = *((_WORD *)v203 + 1);
  if ( (v65 & 0x30) == 0x30 )
  {
    if ( (v65 & 0x10) == 0 )
    {
      P = 0LL;
LABEL_118:
      LOBYTE(AccessMode) = 1;
      v62 = v65 & 0x2000 | 0x10 | *(_DWORD *)&v64;
      goto LABEL_119;
    }
    if ( v65 >= 0 )
    {
      v67 = (char *)v203[3];
    }
    else
    {
      v66 = *((unsigned int *)v203 + 3);
      if ( !(_DWORD)v66 )
      {
        P = 0LL;
        goto LABEL_118;
      }
      v67 = (char *)v203 + v66;
    }
    P = v67;
    goto LABEL_118;
  }
LABEL_120:
  v68 = *((_WORD *)v61 + 1);
  if ( (v68 & 0x10) == 0 )
  {
    LODWORD(v69) = 0;
    *(_QWORD *)GrantedAccess = 0LL;
    goto LABEL_128;
  }
  if ( (v68 & 0x8000u) == 0 )
  {
    v69 = (char *)v61[3];
  }
  else
  {
    v70 = *((unsigned int *)v61 + 3);
    if ( !(_DWORD)v70 )
    {
      LODWORD(v69) = 0;
      *(_QWORD *)GrantedAccess = 0LL;
      goto LABEL_128;
    }
    v69 = (char *)v61 + v70;
  }
  *(_QWORD *)GrantedAccess = v69;
LABEL_128:
  if ( !v214 )
    goto LABEL_134;
  v71 = *(_WORD *)(v214 + 2);
  if ( (v71 & 0x10) == 0 )
    goto LABEL_134;
  if ( v71 >= 0 )
  {
    v73 = *(_QWORD *)(v214 + 24);
    goto LABEL_135;
  }
  v72 = *(unsigned int *)(v214 + 12);
  if ( !(_DWORD)v72 )
  {
LABEL_134:
    v73 = 0LL;
    goto LABEL_135;
  }
  v73 = v214 + v72;
LABEL_135:
  v190 = ((v68 & 0x10) != 0 ? 4 : 0) | (v68 >> 2) & 8 | (v68 >> 1) & 0x400;
  if ( v190 || v73 )
  {
    v74 = 200;
    v75 = 0;
    v197.AccessMask = 200;
    while ( 1 )
    {
      v76 = (ACL *)ExAllocatePoolWithTag(PagedPool, v74, 0x63416553u);
      v199 = v76;
      if ( !v76 )
        goto LABEL_450;
      LOBYTE(AceType) = BYTE2(v182.AccessMask);
      ServerAcl = RtlpInheritAcl2(
                    v73,
                    (int)v69,
                    v190,
                    a6,
                    AceType,
                    AccessStatus,
                    (int)v204,
                    (__int64)v201,
                    v208,
                    *(__int64 *)&Size[1],
                    GenericMapping,
                    2,
                    v219,
                    a5,
                    (PACE)&v197.AccessMask,
                    v76,
                    (__int64)&v193,
                    (__int64)Size);
      if ( ServerAcl >= 0 )
        break;
      ExFreePoolWithTag(v199, 0);
      v199 = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_146;
      if ( (unsigned int)++v75 >= 2 )
        goto LABEL_146;
      v74 = v197.AccessMask;
      LODWORD(v69) = GrantedAccess[0];
    }
    if ( !v197.AccessMask )
    {
      ExFreePoolWithTag(v199, 0);
      v199 = 0LL;
    }
LABEL_146:
    AceFlags = ServerAcl;
    if ( ServerAcl >= 0 )
    {
      v61 = v203;
      v186 = 1;
      goto LABEL_159;
    }
    if ( ServerAcl != -2147483637 )
      goto LABEL_451;
    v61 = v203;
  }
  else
  {
    v199 = 0LL;
    AceFlags = -2147483637;
  }
  v77 = *((_WORD *)v61 + 1);
  if ( (v77 & 0x30) == 0x30 )
  {
    if ( (v77 & 0x10) == 0 )
    {
      v199 = 0LL;
      goto LABEL_159;
    }
    if ( v77 >= 0 )
    {
      v79 = (char *)v61[3];
    }
    else
    {
      v78 = *((unsigned int *)v61 + 3);
      if ( !(_DWORD)v78 )
      {
        v199 = 0LL;
        goto LABEL_159;
      }
      v79 = (char *)v61 + v78;
    }
    v199 = v79;
  }
LABEL_159:
  v198 = 0;
  do
  {
    v80 = *((_WORD *)v61 + 1);
    if ( (v80 & 0x10) != 0 )
    {
      if ( v80 >= 0 )
      {
        v81 = (ACL *)v61[3];
      }
      else
      {
        v82 = *((unsigned int *)v61 + 3);
        if ( (_DWORD)v82 )
          v81 = (ACL *)((char *)v61 + v82);
        else
          v81 = 0LL;
      }
    }
    else
    {
      v81 = 0LL;
    }
    AceByType = (char *)RtlFindAceByType(v81, 0x14u, &v198);
    v85 = v192;
    v86 = AceByType;
    if ( AceByType
      && AceByType != (char *)-8LL
      && !RtlpValidTrustSubjectContext(v192, AceByType + 8, v84, (NTSTATUS *)&AceFlags) )
    {
      goto LABEL_378;
    }
    ++v198;
  }
  while ( v86 );
  v197.AccessMask = 4;
  if ( (a7 & 0x800) != 0 )
  {
    v198 = 0;
    while ( 1 )
    {
      v87 = *((_WORD *)v61 + 1);
      if ( (v87 & 0x10) != 0 )
      {
        if ( v87 >= 0 )
        {
          v88 = (ACL *)v61[3];
        }
        else
        {
          v89 = *((unsigned int *)v61 + 3);
          v88 = (_DWORD)v89 ? (ACL *)((char *)v61 + v89) : 0LL;
        }
      }
      else
      {
        v88 = 0LL;
      }
      v90 = (char *)RtlFindAceByType(v88, 0x14u, &v198);
      ++v198;
      if ( !v90 )
        break;
      v91 = v90[1];
      if ( (v91 & 8) == 0 )
      {
        AccessMask = *((_DWORD *)v90 + 1);
        v85 = v90 + 8;
        AceFlags = v91;
        if ( !v224 || (AccessMask & *(_DWORD *)(v224 + 4)) != AccessMask || v90 == (char *)-8LL )
          goto LABEL_185;
LABEL_190:
        ServerAcl = RtlCreateAcl(&Acl, 0x58u, 2u);
        if ( ServerAcl >= 0 )
        {
          ServerAcl = RtlAddProcessTrustLabelAce(&Acl, 2u, AceFlags, v85, 0x14u, AccessMask);
          if ( ServerAcl >= 0 )
          {
            v61 = v203;
            ServerAcl = RtlpComputeMergedAcl(
                          (int)v199,
                          (*((_WORD *)v203 + 1) & 0x800 | (*((unsigned __int16 *)v203 + 1) >> 1) & 0x18u) >> 1,
                          (int)&Acl,
                          4,
                          (__int64)v204,
                          (__int64)v201,
                          (__int64)GenericMapping,
                          2,
                          (__int64)&v223,
                          (__int64)&v189);
            if ( ServerAcl >= 0 )
            {
              v187 = 1;
              goto LABEL_195;
            }
          }
        }
        goto LABEL_451;
      }
    }
    if ( v85 )
    {
      if ( !v224 )
      {
        ServerAcl = -1073741811;
        goto LABEL_451;
      }
      AccessMask = *(_DWORD *)(v224 + 4);
      AceFlags = 0;
      goto LABEL_190;
    }
  }
  v223 = v199;
LABEL_195:
  v93 = *((_WORD *)v61 + 1);
  if ( (v93 & 0x10) != 0 )
  {
    if ( v93 >= 0 )
    {
      v94 = (ACL *)v61[3];
    }
    else
    {
      v95 = *((unsigned int *)v61 + 3);
      if ( (_DWORD)v95 )
        v94 = (ACL *)((char *)v203 + v95);
      else
        v94 = 0LL;
    }
  }
  else
  {
    v94 = 0LL;
  }
  v229 = 256;
  v190 = 0;
  v228 = 0;
  v216 = 0;
  while ( 1 )
  {
    v96 = RtlFindAceByType(v94, 0x15u, &v216);
    v98 = v96;
    if ( v96 )
      break;
LABEL_212:
    ++v216;
    if ( !v98 )
    {
      ServerAcl = v190;
      goto LABEL_214;
    }
  }
  if ( (v96[1] & 0xFF000000) != 0 )
    goto LABEL_185;
  if ( (*((_BYTE *)v96 + 1) & 0x40) != 0 )
  {
    if ( !RtlpValidTrustSubjectContext(v192, v96 + 2, v97, &v190) )
      goto LABEL_378;
    goto LABEL_212;
  }
  if ( *(_DWORD *)((char *)v96 + 10) != v228 || *((_WORD *)v96 + 7) != 256 )
    goto LABEL_185;
  if ( *((_BYTE *)v96 + 9) == 1 && !v96[4] )
    goto LABEL_212;
  ServerAcl = -1073741811;
LABEL_214:
  if ( ServerAcl < 0 )
    goto LABEL_451;
  v99 = v203;
  v100 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v100 = (a7 >> 8) & 1;
  v101 = v100 | 4;
  if ( (a7 & 0x400) == 0 )
    v101 = v100;
  if ( v101
    || ((v102 = *((_WORD *)v203 + 1), (v102 & 0x10) != 0)
      ? (v102 >= 0
       ? (v103 = (ACL *)v203[3])
       : (v104 = *((unsigned int *)v203 + 3), (_DWORD)v104)
       ? (v103 = (ACL *)((char *)v203 + v104))
       : (v103 = 0LL))
      : (v103 = 0LL),
        v105 = (char *)RtlFindAceByType(v103, 0x11u, 0LL),
        (v220 = v105) == 0LL) )
  {
LABEL_232:
    v106 = 0;
  }
  else
  {
    v106 = v105[1];
    v101 = *((_DWORD *)v105 + 1);
    v209 = v105 + 8;
    if ( v106 == 8 || (v106 & 0x10) != 0 )
    {
      v220 = 0LL;
      v101 = 0;
      v209 = 0LL;
      goto LABEL_232;
    }
  }
  if ( (v106 & 8) != 0 && *RtlSubAuthoritySid(Src, 0) < 0x2000 )
  {
    ServerAcl = -1073740730;
    goto LABEL_451;
  }
  if ( v101 )
  {
LABEL_240:
    if ( v220 )
      goto LABEL_244;
    if ( SubjectSecurityContext )
    {
      v107 = Src;
      v106 = 0;
      v209 = Src;
      goto LABEL_245;
    }
    ServerAcl = -1073741700;
    goto LABEL_451;
  }
  if ( Src && *RtlSubAuthoritySid(Src, 0) < 0x2000 )
  {
    v101 = 1;
    goto LABEL_240;
  }
LABEL_244:
  v107 = v209;
LABEL_245:
  if ( !v107 )
  {
    v115 = 0LL;
    v212 = 0LL;
    goto LABEL_271;
  }
  memset(v233, 0, sizeof(v233));
  v233[0] = (ACL)8388610LL;
  v230 = 0;
  v231 = 4096;
  if ( (unsigned __int64)v209 <= 0x7FFFFFFF0000LL || (*(_BYTE *)v209 & 0xF) != 1 || *((_BYTE *)v209 + 1) > 0xFu )
  {
    ServerAcl = -1073741704;
    goto LABEL_451;
  }
  if ( *(_DWORD *)((char *)v209 + 2) != v230 || *((_WORD *)v209 + 3) != v231 )
  {
LABEL_185:
    ServerAcl = -1073741811;
    goto LABEL_451;
  }
  if ( (v106 & 0xE0) != 0 )
  {
    ServerAcl = -1073741811;
    goto LABEL_451;
  }
  if ( (v101 & 0xFFFFFFF8) != 0 )
  {
    ServerAcl = -1073741811;
    goto LABEL_451;
  }
  if ( !RtlValidAcl(v233) )
  {
    ServerAcl = -1073741705;
    goto LABEL_451;
  }
  v108 = &v233[1];
  v109 = 0LL;
  v110 = 0;
  if ( !v233[0].AceCount )
  {
LABEL_260:
    v111 = (ACL *)((char *)v233 + v233[0].AclSize);
    if ( v108 <= v111 )
      v109 = v108;
    v112 = (unsigned __int8 *)v209;
    v113 = 4 * (*((unsigned __int8 *)v209 + 1) + 4);
    if ( v109 && (ACL *)((char *)v109 + v113) <= v111 )
    {
      v109->AclSize = v113;
      v109->Sbz1 = v106;
      v109->AclRevision = 17;
      *(_DWORD *)&v109->AceCount = v101;
      memmove(&v109[1], v112, 4 * (unsigned int)v112[1] + 8);
      ++v233[0].AceCount;
      v233[0].AclRevision = 2;
      ServerAcl = 0;
    }
    else
    {
      ServerAcl = -1073741671;
    }
    if ( ServerAcl < 0 )
      goto LABEL_451;
    v115 = v233;
LABEL_271:
    if ( (a7 & 0x700) != 0 )
    {
      v116 = 4;
    }
    else
    {
      if ( v220 || !v115 )
        v116 = (*((_WORD *)v99 + 1) & 0x2800 | (*((unsigned __int16 *)v99 + 1) >> 1) & 0x18u) >> 1;
      else
        v116 = 0;
      v197.AccessMask = v116;
    }
    if ( v214 )
    {
      v117 = *(_WORD *)(v214 + 2);
      if ( (v117 & 0x10) != 0 )
      {
        if ( v117 >= 0 )
        {
          v119 = *(void **)(v214 + 24);
          goto LABEL_285;
        }
        v118 = *(unsigned int *)(v214 + 12);
        if ( (_DWORD)v118 )
        {
          v119 = (void *)(v214 + v118);
LABEL_285:
          v192 = v119;
          if ( v116 || v119 )
          {
            v120 = (ACE_HEADER)200;
            v121 = 0;
            v197.Header = (ACE_HEADER)200;
            while ( 1 )
            {
              v122 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v120, 0x63416553u);
              v123 = v122;
              if ( !v122 )
                break;
              LOBYTE(AceType) = 1;
              ServerAcl = RtlpInheritAcl2(
                            (int)v119,
                            (int)v212,
                            v197.AccessMask,
                            a6,
                            AceType,
                            0,
                            (int)v204,
                            (__int64)v201,
                            v208,
                            *(__int64 *)&Size[1],
                            GenericMapping,
                            3,
                            v219,
                            a5,
                            &v197,
                            v122,
                            (__int64)&v193 + 1,
                            (__int64)&v189);
              if ( ServerAcl >= 0 )
              {
                if ( !*(_DWORD *)&v197.Header )
                {
                  ExFreePoolWithTag(v123, 0);
                  v123 = 0LL;
                }
LABEL_295:
                if ( ServerAcl == -2147483637 )
                  goto LABEL_296;
                if ( ServerAcl >= 0 )
                {
                  v124 = v189;
                  goto LABEL_299;
                }
                goto LABEL_451;
              }
              ExFreePoolWithTag(v123, 0);
              v123 = 0LL;
              if ( ServerAcl != -1073741789 )
                goto LABEL_295;
              if ( (unsigned int)++v121 >= 2 )
                goto LABEL_295;
              v120 = v197.Header;
              LODWORD(v119) = (_DWORD)v192;
            }
LABEL_450:
            ServerAcl = -1073741801;
            goto LABEL_451;
          }
LABEL_296:
          v123 = v212;
          v124 = 0;
          v189 = 0;
LABEL_299:
          ServerAcl = RtlpCombineAcls(
                        (_DWORD)P,
                        (_DWORD)v123,
                        (_DWORD)v199,
                        (_DWORD)v199,
                        (__int64)v223,
                        (__int64)v199,
                        (__int64)&v225,
                        (__int64)&v191);
          v190 = ((*(_WORD *)&v182.Header.AceType & 0x2000) << 17) | v191;
          if ( v123 && v123 != v212 )
            ExFreePoolWithTag(v123, 0);
          if ( ServerAcl < 0 )
            goto LABEL_451;
          v125 = v225;
          if ( v225 )
          {
            if ( v180 && P )
              ExFreePoolWithTag(P, 0);
            P = v125;
            v185 = 1;
            v126 = v125;
            *(_DWORD *)&v182.Header |= 2 * (v124 & 0x1400 | (2 * (v124 & 8 | 4)));
          }
          else
          {
            v126 = (ACL *)P;
          }
          LODWORD(v191) = a7 & 8;
          if ( (a7 & 8) == 0 )
          {
            v127 = (char *)RtlFindAceByType(v126, 0x11u, 0LL);
            v128 = v127 ? v127 + 8 : (char *)v209;
            if ( v128 )
            {
              if ( !SubjectSecurityContext )
              {
                ServerAcl = -1073741700;
                goto LABEL_451;
              }
              ServerAcl = RtlSidDominates(Src, v128, (PBOOLEAN)&v182.AccessMask + 3);
              if ( ServerAcl < 0 )
                goto LABEL_451;
              v129 = (unsigned __int8)v217;
              if ( !HIBYTE(v182.AccessMask) )
                v129 = 1;
              v217 = v129;
            }
          }
          v130 = v203;
          v197.Header = (ACE_HEADER)(a7 & 1);
          v131 = *((_WORD *)v203 + 1);
          if ( (v131 & 4) != 0 )
          {
            if ( v131 >= 0 )
            {
              v132 = (char *)v203[4];
            }
            else
            {
              v133 = *((unsigned int *)v203 + 4);
              if ( (_DWORD)v133 )
                v132 = (char *)v203 + v133;
              else
                v132 = 0LL;
            }
          }
          else
          {
            v132 = 0LL;
          }
          v212 = v132;
          if ( v214 )
          {
            v134 = *(_WORD *)(v214 + 2);
            if ( (v134 & 4) != 0 )
            {
              if ( v134 >= 0 )
              {
                v136 = *(_QWORD *)(v214 + 32);
                goto LABEL_334;
              }
              v135 = *(unsigned int *)(v214 + 16);
              if ( (_DWORD)v135 )
              {
                v136 = v214 + v135;
LABEL_334:
                Size[0] = v131 & 0x140C;
                if ( (v131 & 0x140C) != 0 || v136 )
                {
                  v139 = (ACE_HEADER)200;
                  v140 = 0;
                  v213.Header = (ACE_HEADER)200;
                  while ( 1 )
                  {
                    v141 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v139, 0x63416553u);
                    v178 = v141;
                    if ( !v141 )
                    {
                      ServerAcl = -1073741801;
                      v114 = 0LL;
                      goto LABEL_452;
                    }
                    LOBYTE(AceTypea) = v197.Header.AceType;
                    ServerAcl = RtlpInheritAcl2(
                                  v136,
                                  (int)v132,
                                  Size[0],
                                  a6,
                                  AceTypea,
                                  AccessStatus,
                                  (int)v204,
                                  (__int64)v201,
                                  v208,
                                  *(__int64 *)&Size[1],
                                  GenericMapping,
                                  1,
                                  v219,
                                  a5,
                                  &v213,
                                  v141,
                                  (__int64)&v182.AccessMask,
                                  (__int64)&v189);
                    if ( ServerAcl >= 0 )
                      break;
                    ExFreePoolWithTag(v178, 0);
                    v178 = 0LL;
                    v138 = 0LL;
                    if ( ServerAcl != -1073741789 )
                      goto LABEL_346;
                    if ( (unsigned int)++v140 >= 2 )
                      goto LABEL_346;
                    v139 = v213.Header;
                    LODWORD(v132) = (_DWORD)v212;
                  }
                  if ( v213.Header )
                  {
                    v138 = (char *)v178;
                  }
                  else
                  {
                    ExFreePoolWithTag(v178, 0);
                    v138 = 0LL;
                    v178 = 0LL;
                  }
LABEL_346:
                  if ( ServerAcl >= 0 )
                  {
                    v137 = v182.AccessMask;
                    v142 = v197.Header;
                    *(_DWORD *)&v182.Header |= v189 & 0x1408 | 4;
                    v181 = 1;
                    goto LABEL_364;
                  }
                  if ( ServerAcl == -2147483637 )
                  {
                    v137 = v182.AccessMask;
                    v130 = v203;
                    goto LABEL_350;
                  }
                  goto LABEL_451;
                }
                v137 = 0;
                v178 = 0LL;
                v138 = 0LL;
LABEL_350:
                v142 = v197.Header;
                v143 = (int)v182.Header;
                if ( v197.Header )
                {
                  v143 = *(_DWORD *)&v182.Header | 0x400;
                  *(_DWORD *)&v182.Header |= 0x400u;
                }
                v144 = *((_WORD *)v130 + 1);
                if ( (v144 & 0xC) == 0xC )
                {
                  if ( (v144 & 4) != 0 )
                  {
                    if ( v144 >= 0 )
                    {
                      v138 = (char *)v130[4];
                    }
                    else
                    {
                      v145 = *((unsigned int *)v130 + 4);
                      if ( (_DWORD)v145 )
                        v138 = (char *)v130 + v145;
                      else
                        v138 = 0LL;
                    }
                  }
                  else
                  {
                    v138 = 0LL;
                  }
                  v178 = v138;
                  v137 = 1;
                  v146 = v144 & 0x1000 | 4 | v143;
                }
                else
                {
                  if ( !v205 )
                  {
LABEL_364:
                    v147 = SubjectSecurityContext;
                    if ( (a7 & 0x1000) == 0 && v183 && SubjectSecurityContext && v214 )
                    {
                      GrantedAccess[0] = 0;
                      AccessStatus = 0;
                      ServerAcl = RtlpNewSecurityObject(
                                    v214,
                                    0,
                                    (unsigned int)&SecurityDescriptor,
                                    v219,
                                    a5,
                                    a6,
                                    a7 | 1,
                                    (__int64)SubjectSecurityContext,
                                    (__int64)GenericMapping,
                                    v224);
                      if ( ServerAcl < 0 )
                        goto LABEL_451;
                      v148 = *((_WORD *)SecurityDescriptor + 1);
                      if ( (v148 & 4) != 0 )
                      {
                        if ( v148 >= 0 )
                        {
                          v149 = (char *)*((_QWORD *)SecurityDescriptor + 4);
                        }
                        else
                        {
                          v150 = *((unsigned int *)SecurityDescriptor + 4);
                          if ( (_DWORD)v150 )
                            v149 = (char *)SecurityDescriptor + v150;
                          else
                            v149 = 0LL;
                        }
                      }
                      else
                      {
                        v149 = 0LL;
                      }
                      v151 = RtlpOwnerAcesPresent(0x10u, (__int64)v149);
                      v152 = BYTE1(AccessMode);
                      v147 = SubjectSecurityContext;
                      if ( v151 )
                      {
                        if ( !SeAccessCheck(
                                SecurityDescriptor,
                                SubjectSecurityContext,
                                0,
                                0x40000u,
                                0,
                                0LL,
                                GenericMapping,
                                SBYTE1(AccessMode),
                                GrantedAccess,
                                &AccessStatus) )
                        {
LABEL_378:
                          ServerAcl = -1073741790;
                          goto LABEL_451;
                        }
                        v138 = (char *)v178;
                        v147 = SubjectSecurityContext;
                      }
                      else
                      {
                        v138 = (char *)v178;
                      }
                    }
                    else
                    {
                      v152 = BYTE1(AccessMode);
                    }
                    if ( *(_DWORD *)&v142 && !v138 )
                      *(_DWORD *)&v182.Header |= 0x1000u;
                    v153 = !v190 || (v190 & 0x1B0) != v190;
                    if ( v152 != 1 )
                      goto LABEL_415;
                    v154 = v191;
                    if ( (_BYTE)AccessMode && !(_DWORD)v191 && v153 )
                    {
                      if ( !v147 )
                      {
                        ServerAcl = -1073741700;
                        goto LABEL_451;
                      }
                      RequiredPrivileges.PrivilegeCount = 1;
                      RequiredPrivileges.Control = 1;
                      RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
                      RequiredPrivileges.Privilege[0].Attributes = 0;
                      v155 = SePrivilegeCheck(&RequiredPrivileges, v147, 1);
                      SePrivilegedServiceAuditAlarm(
                        0LL,
                        (__int64 *)SubjectSecurityContext,
                        (int *)&RequiredPrivileges,
                        v155);
                      if ( !v155 )
                      {
                        ServerAcl = -1073741727;
                        goto LABEL_451;
                      }
                    }
                    if ( (_BYTE)v217 )
                    {
                      v63 = v154 == 0;
                      v156 = (__int64 *)SubjectSecurityContext;
                      if ( v63 )
                      {
                        if ( !SubjectSecurityContext )
                        {
                          ServerAcl = -1073741700;
                          goto LABEL_451;
                        }
                        RequiredPrivileges.PrivilegeCount = 1;
                        RequiredPrivileges.Control = 1;
                        RequiredPrivileges.Privilege[0].Luid = SeRelabelPrivilege;
                        RequiredPrivileges.Privilege[0].Attributes = 0;
                        v157 = SePrivilegeCheck(&RequiredPrivileges, SubjectSecurityContext, 1);
                        SePrivilegedServiceAuditAlarm(0LL, v156, (int *)&RequiredPrivileges, v157);
                        if ( !v157 )
                        {
                          ServerAcl = -1073741727;
                          goto LABEL_451;
                        }
                      }
                    }
                    else
                    {
                      v156 = (__int64 *)SubjectSecurityContext;
                    }
                    if ( BYTE1(v182.AccessMask)
                      && (a7 & 0x10) == 0
                      && !(unsigned __int8)SepValidOwnerSubjectContext(v156, v204, v194) )
                    {
                      ServerAcl = -1073741734;
                      goto LABEL_451;
                    }
                    if ( v137 && v195 )
                    {
                      v114 = v178;
                      ServerAcl = RtlpCreateServerAcl(
                                    (_DWORD)v178,
                                    (unsigned __int8)v218,
                                    v208,
                                    (unsigned int)&v221,
                                    (__int64)&v184);
                      if ( ServerAcl < 0 )
                        goto LABEL_452;
                      if ( v181 && v114 )
                        ExFreePoolWithTag(v114, 0);
                      v158 = (unsigned __int16 *)v221;
                      v178 = v221;
                      v221 = 0LL;
                    }
                    else
                    {
LABEL_415:
                      v158 = (unsigned __int16 *)v178;
                    }
                    v159 = 4 * *((unsigned __int8 *)v204 + 1) + 8;
                    Size[0] = v159;
                    if ( v201 )
                      v160 = 4 * *((unsigned __int8 *)v201 + 1) + 8;
                    else
                      v160 = 0;
                    v161 = *(_WORD *)&v182.Header.AceType;
                    LODWORD(v191) = v160;
                    v218 = v182.Header.AceType & 0x10;
                    if ( (v182.Header.AceType & 0x10) != 0 && P )
                      v162 = (*((unsigned __int16 *)P + 1) + 3) & 0xFFFFFFFC;
                    else
                      v162 = 0;
                    GrantedAccess[0] = v182.Header.AceType & 4;
                    if ( (v182.Header.AceType & 4) != 0 && v158 )
                      v163 = (v158[1] + 3) & 0xFFFFFFFC;
                    else
                      v163 = 0;
                    v179 = ExAllocatePoolWithTag(PagedPool, v162 + v160 + v163 + v159 + 20, 0x64536553u);
                    v164 = v179;
                    if ( v179 )
                    {
                      v165 = 0;
                      *(_QWORD *)v179 = 0LL;
                      *((_QWORD *)v164 + 1) = 0LL;
                      v164[4] = 0;
                      *((_WORD *)v164 + 1) |= v161;
                      v166 = (char *)(v164 + 5);
                      *(_BYTE *)v164 = 1;
                      if ( v218 )
                      {
                        v165 = (int)P;
                        if ( P )
                        {
                          memmove(v166, P, *((unsigned __int16 *)P + 1));
                          if ( !v180 )
                            RtlpApplyAclToObject(v166, GenericMapping);
                          v164 = v179;
                          v179[3] = (_DWORD)v166 - (_DWORD)v179;
                          v167 = *((unsigned __int16 *)P + 1);
                          if ( v162 > (unsigned int)v167 )
                          {
                            memset(&v166[v167], 0, v162 - (unsigned int)v167);
                            v164 = v179;
                          }
                          v166 += v162;
                          v165 = 0;
                        }
                        else
                        {
                          v164[3] = 0;
                        }
                      }
                      if ( GrantedAccess[0] )
                      {
                        v168 = (unsigned __int16 *)v178;
                        if ( v178 )
                        {
                          memmove(v166, v178, *((unsigned __int16 *)v178 + 1));
                          if ( !v181 )
                            RtlpApplyAclToObject(v166, GenericMapping);
                          v179[4] = (_DWORD)v166 - (_DWORD)v179;
                          v169 = v168[1];
                          if ( v163 > (unsigned int)v169 )
                            memset(&v166[v169], 0, v163 - (unsigned int)v169);
                          v166 += v163;
                        }
                        else
                        {
                          v164[4] = v165;
                        }
                      }
                      v170 = (unsigned int)Size[0];
                      memmove(v166, v204, (unsigned int)Size[0]);
                      v171 = v179;
                      v172 = (_DWORD)v166 - (_DWORD)v179;
                      v173 = &v166[v170];
                      v179[1] = v172;
                      if ( v201 )
                      {
                        memmove(v173, v201, (unsigned int)v191);
                        v114 = v178;
                        v171[2] = (_DWORD)v173 - (_DWORD)v171;
                      }
                      else
                      {
                        v114 = v178;
                      }
                      ServerAcl = 0;
                      goto LABEL_453;
                    }
                    ServerAcl = -1073741670;
LABEL_451:
                    v114 = v178;
                    goto LABEL_452;
                  }
                  v138 = v205;
                  v178 = v205;
                  v146 = v143 | 4;
                }
                v182.Header = (ACE_HEADER)v146;
                goto LABEL_364;
              }
            }
          }
          v136 = 0LL;
          goto LABEL_334;
        }
      }
    }
    v119 = 0LL;
    goto LABEL_285;
  }
  while ( v108 < (ACL *)((char *)v233 + v233[0].AclSize) )
  {
    ++v110;
    v108 = (ACL *)((char *)v108 + v108->AclSize);
    if ( v110 >= v233[0].AceCount )
      goto LABEL_260;
  }
  ServerAcl = -1073741705;
  v114 = 0LL;
LABEL_452:
  v171 = v179;
LABEL_453:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v184 && v221 )
    ExFreePoolWithTag(v221, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( (v180 || v185) && P )
    ExFreePoolWithTag(P, 0);
  if ( v186 && v199 )
    ExFreePoolWithTag(v199, 0);
  if ( v223 && v187 )
    ExFreePoolWithTag(v223, 0);
  if ( v181 )
  {
    if ( v114 )
      ExFreePoolWithTag(v114, 0);
  }
  *v226 = v171;
  return (unsigned int)ServerAcl;
}
