/*
 * XREFs of RtlpNewSecurityObject @ 0x14051EA30
 * Callers:
 *     SeAssignSecurityEx2 @ 0x140093BF0 (SeAssignSecurityEx2.c)
 *     SeAssignSecurity @ 0x1404D1000 (SeAssignSecurity.c)
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x140013744 (SepLocateTokenTrustLevel.c)
 *     RtlpOwnerAcesPresent @ 0x14003E400 (RtlpOwnerAcesPresent.c)
 *     RtlSidDominates @ 0x140064060 (RtlSidDominates.c)
 *     SepLocateTokenIntegrity @ 0x140064184 (SepLocateTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x14008C0C0 (RtlSubAuthoritySid.c)
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     RtlFindAceByType @ 0x1400DBB80 (RtlFindAceByType.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlpValidTrustSubjectContext @ 0x140149030 (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlpCombineAcls @ 0x140427E70 (RtlpCombineAcls.c)
 *     SepValidOwnerSubjectContext @ 0x1404460BC (SepValidOwnerSubjectContext.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 *     RtlValidAcl @ 0x14050C290 (RtlValidAcl.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14050FBC8 (SePrivilegedServiceAuditAlarm.c)
 *     RtlpApplyAclToObject @ 0x14051E030 (RtlpApplyAclToObject.c)
 *     RtlpInheritAcl2 @ 0x14051E100 (RtlpInheritAcl2.c)
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 *     SePrivilegeCheck @ 0x140527F60 (SePrivilegeCheck.c)
 *     SeUnlockSubjectContext @ 0x140531170 (SeUnlockSubjectContext.c)
 *     RtlAddProcessTrustLabelAce @ 0x1405C55B0 (RtlAddProcessTrustLabelAce.c)
 *     RtlpComputeMergedAcl @ 0x1406EA05C (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x1406EA480 (RtlpCreateServerAcl.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        __int64 *a8,
        GENERIC_MAPPING *a9,
        __int64 a10)
{
  __int64 v10; // rdi
  _QWORD *v11; // rsi
  void *v12; // rbx
  __int64 v13; // r9
  void *v14; // r8
  void *v15; // rcx
  unsigned int v16; // r10d
  int v17; // eax
  char v18; // r11
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdx
  unsigned __int8 *v23; // rbx
  unsigned __int8 *v24; // rsi
  __int64 v25; // rcx
  PSID *TokenIntegrity; // rax
  PSID v27; // rax
  __int64 TokenTrustLevel; // rax
  unsigned __int8 *v29; // rdi
  int v30; // r11d
  int v31; // r10d
  int v32; // r9d
  int v33; // edx
  PVOID PoolWithTag; // rax
  __int64 v35; // rax
  char *v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // rax
  char *v40; // rdi
  __int64 v41; // r8
  unsigned int v42; // edx
  __int64 v43; // rax
  char *v44; // rax
  __int64 v45; // rax
  char *v46; // rax
  signed int ServerAcl; // edi
  __int64 v48; // rax
  void *v49; // rax
  void *v50; // rax
  __int64 v51; // rax
  void *v52; // rax
  NTSTATUS v53; // eax
  ULONG v54; // r11d
  int v55; // ebx
  __int64 v56; // rax
  char *v57; // rax
  __int16 v58; // cx
  __int64 v59; // rax
  _BYTE *v60; // rsi
  ACE_HEADER Header; // eax
  ACL *v62; // rax
  _QWORD *v63; // rbx
  int v64; // r11d
  bool v65; // zf
  ACE_HEADER v66; // r11d
  __int16 v67; // cx
  __int64 v68; // rax
  char *v69; // rax
  unsigned __int16 v70; // dx
  __int64 v71; // rax
  char *v72; // rax
  __int16 v73; // cx
  __int64 v74; // rax
  _BYTE *v75; // rsi
  ACE_HEADER v76; // eax
  int v77; // ebx
  ACL *v78; // rax
  __int16 v79; // cx
  __int64 v80; // rax
  char *v81; // rax
  __int16 v82; // cx
  ACL *v83; // rcx
  __int64 v84; // rax
  char *AceByType; // rax
  __int64 v86; // r8
  void *v87; // rsi
  char *v88; // rdi
  __int16 v89; // cx
  ACL *v90; // rcx
  __int64 v91; // rax
  char *v92; // rax
  unsigned __int8 v93; // cl
  ACCESS_MASK AccessMask; // ebx
  PVOID v95; // rbx
  PVOID v96; // rsi
  __int16 v97; // cx
  ACL *v98; // rbx
  __int64 v99; // rax
  _DWORD *v100; // rax
  __int64 v101; // r8
  _DWORD *v102; // rdi
  int v103; // edx
  int v104; // ebx
  __int16 v105; // cx
  ACL *v106; // rcx
  __int64 v107; // rax
  char *v108; // rax
  char *v109; // rdi
  UCHAR v110; // si
  char *v111; // r10
  ACL *v112; // rcx
  ACL *v113; // r9
  unsigned int v114; // edx
  ACL *v115; // rdx
  unsigned __int8 *v116; // r10
  USHORT v117; // cx
  ACL *v118; // rcx
  unsigned int v119; // edx
  __int16 v120; // cx
  __int64 v121; // rax
  _BYTE *v122; // rdi
  ACCESS_MASK v123; // eax
  int v124; // esi
  ACL *v125; // rax
  PVOID v126; // rbx
  __int16 v127; // si
  char *v128; // rdi
  ACL *v129; // rcx
  char *v130; // rax
  char *v131; // rax
  int v132; // eax
  _QWORD *v133; // r8
  __int16 v134; // dx
  char *v135; // rdi
  __int64 v136; // rax
  __int16 v137; // cx
  __int64 v138; // rax
  _BYTE *v139; // rsi
  char *v140; // rdx
  char v141; // bl
  ACE_HEADER v142; // eax
  int v143; // ebx
  ACL *v144; // rax
  ACCESS_MASK v145; // esi
  int v146; // edi
  __int16 v147; // cx
  __int64 v148; // rax
  int v149; // edi
  struct _SECURITY_SUBJECT_CONTEXT *v150; // rdi
  __int16 v151; // cx
  char *v152; // rdx
  __int64 v153; // rcx
  bool v154; // al
  unsigned int v155; // esi
  BOOLEAN v156; // di
  __int64 *v157; // rsi
  BOOLEAN v158; // di
  char v159; // di
  unsigned __int16 *v160; // rdi
  int v161; // edx
  ULONG v162; // edx
  unsigned int v163; // ecx
  unsigned int v164; // ebx
  unsigned int v165; // esi
  _DWORD *v166; // rax
  _DWORD *v167; // rdx
  char *v168; // rdi
  int v169; // eax
  __int64 v170; // rcx
  unsigned __int16 *v171; // rbx
  __int64 v172; // rcx
  __int64 v173; // rsi
  __int64 v174; // rbx
  int v175; // eax
  char *v176; // rdi
  __int64 v177; // rbx
  __int64 AceType; // [rsp+20h] [rbp-F0h]
  __int64 AceTypea; // [rsp+20h] [rbp-F0h]
  __int64 v181; // [rsp+90h] [rbp-80h] BYREF
  PVOID v182; // [rsp+98h] [rbp-78h]
  PVOID v183; // [rsp+A0h] [rbp-70h]
  char v184; // [rsp+A8h] [rbp-68h]
  struct _ACE AccessMode; // [rsp+ACh] [rbp-64h] BYREF
  char v186; // [rsp+B4h] [rbp-5Ch]
  bool v187; // [rsp+B5h] [rbp-5Bh]
  BOOLEAN Dominates; // [rsp+B6h] [rbp-5Ah] BYREF
  char v189; // [rsp+B7h] [rbp-59h]
  char v190; // [rsp+B8h] [rbp-58h] BYREF
  char v191; // [rsp+B9h] [rbp-57h]
  char v192; // [rsp+BAh] [rbp-56h]
  char v193; // [rsp+BBh] [rbp-55h]
  int v194; // [rsp+BCh] [rbp-54h] BYREF
  ULONG AceFlags; // [rsp+C0h] [rbp-50h] BYREF
  PVOID P; // [rsp+C8h] [rbp-48h]
  unsigned int v197; // [rsp+D0h] [rbp-40h] BYREF
  int v198; // [rsp+D4h] [rbp-3Ch] BYREF
  void *v199; // [rsp+D8h] [rbp-38h]
  _WORD v200[2]; // [rsp+E0h] [rbp-30h] BYREF
  ULONG v201; // [rsp+E4h] [rbp-2Ch] BYREF
  struct _ACE v202; // [rsp+E8h] [rbp-28h] BYREF
  __int64 *v203; // [rsp+F0h] [rbp-20h]
  void *v204; // [rsp+F8h] [rbp-18h]
  void *v205; // [rsp+100h] [rbp-10h]
  ACCESS_MASK GrantedAccess[2]; // [rsp+108h] [rbp-8h] BYREF
  _QWORD *v207; // [rsp+110h] [rbp+0h]
  __int64 v208; // [rsp+118h] [rbp+8h]
  NTSTATUS AccessStatus; // [rsp+120h] [rbp+10h] BYREF
  void *v210; // [rsp+128h] [rbp+18h]
  size_t Size; // [rsp+130h] [rbp+20h] BYREF
  void *Src; // [rsp+138h] [rbp+28h]
  PGENERIC_MAPPING GenericMapping; // [rsp+140h] [rbp+30h]
  PVOID v214; // [rsp+148h] [rbp+38h]
  void *v215; // [rsp+150h] [rbp+40h]
  struct _ACE v216; // [rsp+158h] [rbp+48h] BYREF
  __int64 v217; // [rsp+160h] [rbp+50h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+168h] [rbp+58h] BYREF
  _DWORD *v219; // [rsp+170h] [rbp+60h]
  int v220; // [rsp+178h] [rbp+68h]
  int v221; // [rsp+17Ch] [rbp+6Ch]
  ULONG v222; // [rsp+180h] [rbp+70h] BYREF
  PSID Sid; // [rsp+188h] [rbp+78h]
  __int64 v224; // [rsp+190h] [rbp+80h]
  char *v225; // [rsp+198h] [rbp+88h]
  PVOID v226; // [rsp+1A0h] [rbp+90h] BYREF
  PVOID v227; // [rsp+1A8h] [rbp+98h] BYREF
  __int64 v228; // [rsp+1B0h] [rbp+A0h]
  PVOID v229; // [rsp+1B8h] [rbp+A8h]
  char *v230; // [rsp+1C0h] [rbp+B0h] BYREF
  _QWORD *v231; // [rsp+1C8h] [rbp+B8h]
  _QWORD v232[5]; // [rsp+1D0h] [rbp+C0h] BYREF
  int v233; // [rsp+1F8h] [rbp+E8h]
  __int16 v234; // [rsp+1FCh] [rbp+ECh]
  int v235; // [rsp+200h] [rbp+F0h]
  __int16 v236; // [rsp+204h] [rbp+F4h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+208h] [rbp+F8h] BYREF
  ACL v238[16]; // [rsp+220h] [rbp+110h] BYREF
  ACL Acl; // [rsp+2A0h] [rbp+190h] BYREF

  GenericMapping = a9;
  v10 = a1;
  v11 = a2;
  v224 = a4;
  v12 = 0LL;
  v231 = a3;
  v13 = 0LL;
  v217 = a1;
  v14 = 0LL;
  v15 = 0LL;
  v228 = a10;
  v207 = a2;
  P = 0LL;
  v183 = 0LL;
  AccessMode.AccessMask = 0x1000000;
  v192 = 0;
  v191 = 0;
  v197 = 0;
  v182 = 0LL;
  v226 = 0LL;
  v186 = 0;
  LOBYTE(v181) = 0;
  v200[0] = 0;
  LOBYTE(v221) = 0;
  v190 = 0;
  Sid = 0LL;
  v199 = 0LL;
  v208 = 0LL;
  v210 = 0LL;
  Src = 0LL;
  v219 = 0LL;
  LODWORD(Size) = 0;
  v225 = 0LL;
  v215 = 0LL;
  v230 = 0LL;
  SecurityDescriptor = 0LL;
  v227 = 0LL;
  v229 = 0LL;
  v16 = a7;
  v214 = v238;
  v203 = a8;
  Dominates = 1;
  v193 = 0;
  if ( (a7 & 0x2000) == 0 )
    HIBYTE(AccessMode.AccessMask) = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
  {
    v189 = 1;
  }
  else
  {
    v189 = 0;
    v11 = v232;
    v232[0] = 1LL;
    memset(&v232[1], 0, 32);
    v207 = v232;
  }
  v17 = *((unsigned __int16 *)v11 + 1);
  v18 = (unsigned __int8)v17 >> 7;
  LOBYTE(v17) = (v17 & 0x40) != 0;
  v220 = v17;
  v184 = v18;
  if ( a8 || v18 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a8[2] + 48), 1u);
    if ( !*a8
      || (v20 = KeGetCurrentThread(),
          --v20->KernelApcDisable,
          ExAcquireResourceSharedLite(*(PERESOURCE *)(*a8 + 48), 1u),
          (v21 = *a8) == 0) )
    {
      v21 = a8[2];
    }
    v22 = a8[2];
    v23 = *(unsigned __int8 **)(v21 + 168);
    v24 = *(unsigned __int8 **)(v22 + 168);
    v25 = *(unsigned int *)(v22 + 144);
    Src = *(void **)(*(_QWORD *)(v21 + 152) + 16LL * *(unsigned int *)(v21 + 144));
    v205 = *(void **)(v21 + 184);
    v210 = *(void **)(*(_QWORD *)(v22 + 152) + 16 * v25);
    TokenIntegrity = (PSID *)SepLocateTokenIntegrity(v21);
    if ( TokenIntegrity )
      v27 = *TokenIntegrity;
    else
      v27 = SepDefaultMandatorySid;
    v199 = v27;
    TokenTrustLevel = SepLocateTokenTrustLevel(v203);
    v29 = (unsigned __int8 *)TokenTrustLevel;
    if ( TokenTrustLevel )
      v30 = 4 * *(unsigned __int8 *)(TokenTrustLevel + 1) + 8;
    else
      v30 = 0;
    if ( v23 )
      v31 = 4 * v23[1] + 8;
    else
      v31 = 0;
    if ( v24 )
      v32 = 4 * v24[1] + 32;
    else
      v32 = 24;
    if ( v205 )
      v33 = *((unsigned __int16 *)v205 + 1);
    else
      v33 = 0;
    PoolWithTag = ExAllocatePoolWithTag(
                    PagedPool,
                    v30
                  + v31
                  + v32
                  + 4
                  * (*((unsigned __int8 *)v199 + 1)
                   + *((unsigned __int8 *)v210 + 1)
                   + (unsigned int)*((unsigned __int8 *)Src + 1))
                  + v33,
                    0x64536553u);
    v229 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)v203);
      return 3221225626LL;
    }
    v204 = PoolWithTag;
    memmove(PoolWithTag, Src, 4LL * *((unsigned __int8 *)Src + 1) + 8);
    Sid = (char *)v229 + 4 * *((unsigned __int8 *)Src + 1) + 8;
    memmove(Sid, v199, 4LL * *((unsigned __int8 *)v199 + 1) + 8);
    v35 = *((unsigned __int8 *)v199 + 1);
    v36 = (char *)Sid + 4 * v35 + 8;
    v208 = (__int64)v36;
    if ( v29 )
    {
      v37 = v29[1];
      v199 = (char *)Sid + 4 * v35 + 8;
      memmove(v36, v29, 4 * v37 + 8);
      v36 = (char *)(v208 + 4LL * v29[1] + 8);
      v208 = (__int64)v36;
    }
    else
    {
      v199 = 0LL;
    }
    if ( v23 )
    {
      v38 = v23[1];
      Src = v36;
      memmove(v36, v23, 4 * v38 + 8);
      v39 = v23[1];
      v12 = Src;
      v36 = (char *)(v208 + 4 * v39 + 8);
      v208 = (__int64)v36;
    }
    else
    {
      v12 = 0LL;
    }
    memmove(v36, v210, 4LL * *((unsigned __int8 *)v210 + 1) + 8);
    v40 = (char *)(v208 + 8 + 4LL * *((unsigned __int8 *)v210 + 1));
    Src = v40;
    if ( v24 )
    {
      v41 = v24[1];
      v210 = v40;
      memmove(v40, v24, 4 * v41 + 8);
      v40 += 4 * v24[1] + 8;
      Src = v40;
    }
    else
    {
      v210 = 0LL;
    }
    if ( v205 )
      memmove(v40, v205, *((unsigned __int16 *)v205 + 1));
    else
      Src = 0LL;
    ExReleaseResourceLite(*(PERESOURCE *)(v203[2] + 48));
    KeLeaveCriticalRegion();
    if ( *v203 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(*v203 + 48));
      KeLeaveCriticalRegion();
    }
    v18 = v184;
    v16 = a7;
    v13 = v208;
    v14 = v210;
    v10 = v217;
    v11 = v207;
    v15 = v204;
  }
  v42 = *((unsigned __int16 *)v11 + 1);
  if ( (v42 & 0x8000u) == 0 )
  {
    v44 = (char *)v11[1];
  }
  else
  {
    v43 = *((unsigned int *)v11 + 1);
    if ( !(_DWORD)v43 )
      goto LABEL_51;
    v44 = (char *)v11 + v43;
  }
  v204 = v44;
  if ( v44 )
  {
    v186 = 1;
    goto LABEL_48;
  }
LABEL_51:
  if ( (v16 & 0x20) != 0 )
  {
    if ( !v10 )
    {
      ServerAcl = -1073741734;
LABEL_461:
      v95 = v182;
      v96 = v182;
      goto LABEL_462;
    }
    if ( *(__int16 *)(v10 + 2) >= 0 )
    {
      v49 = *(void **)(v10 + 8);
    }
    else
    {
      v48 = *(unsigned int *)(v10 + 4);
      if ( !(_DWORD)v48 )
      {
LABEL_59:
        ServerAcl = -1073741734;
        goto LABEL_461;
      }
      v49 = (void *)(v10 + v48);
    }
    v204 = v49;
    v186 = 1;
    if ( !v49 )
      goto LABEL_59;
  }
  else
  {
    v50 = v15;
    if ( v18 )
      v50 = (void *)v13;
    v204 = v50;
    if ( !v50 )
    {
      ServerAcl = -1073741700;
      goto LABEL_461;
    }
  }
LABEL_48:
  if ( (v42 & 0x8000u) == 0 )
  {
    v46 = (char *)v11[2];
LABEL_65:
    v205 = v46;
    if ( v46 )
      goto LABEL_77;
    goto LABEL_66;
  }
  v45 = *((unsigned int *)v11 + 2);
  if ( (_DWORD)v45 )
  {
    v46 = (char *)v11 + v45;
    goto LABEL_65;
  }
LABEL_66:
  if ( (v16 & 0x40) != 0 )
  {
    if ( !v10 )
    {
      ServerAcl = -1073741733;
      goto LABEL_461;
    }
    if ( *(__int16 *)(v10 + 2) >= 0 )
    {
      v52 = *(void **)(v10 + 16);
    }
    else
    {
      v51 = *(unsigned int *)(v10 + 8);
      if ( !(_DWORD)v51 )
      {
LABEL_76:
        ServerAcl = -1073741733;
        goto LABEL_461;
      }
      v52 = (void *)(v10 + v51);
    }
  }
  else
  {
    v52 = v12;
    if ( v18 )
      v52 = v14;
  }
  v205 = v52;
  if ( !v52 )
    goto LABEL_76;
LABEL_77:
  v53 = v16 >> 2;
  LOBYTE(v53) = (v16 & 4) != 0;
  v54 = v16 & 2;
  AccessStatus = v53;
  AceFlags = v54;
  v187 = v54 != 0;
  if ( (v42 & 0x10) != 0 )
  {
    if ( (v42 & 0x8000u) == 0 )
    {
      v57 = (char *)v11[3];
    }
    else
    {
      v56 = *((unsigned int *)v11 + 3);
      if ( !(_DWORD)v56 )
      {
        v55 = 0;
        *(_QWORD *)GrantedAccess = 0LL;
        goto LABEL_85;
      }
      v57 = (char *)v11 + v56;
    }
    v55 = 0;
    *(_QWORD *)GrantedAccess = v57;
    goto LABEL_85;
  }
  v55 = 0;
  *(_QWORD *)GrantedAccess = 0LL;
LABEL_85:
  if ( v217 )
  {
    v58 = *(_WORD *)(v217 + 2);
    if ( (~(_BYTE)v58 & 0x10) == 0 )
    {
      if ( v58 >= 0 )
      {
        v60 = *(_BYTE **)(v217 + 24);
        goto LABEL_92;
      }
      v59 = *(unsigned int *)(v217 + 12);
      if ( (_DWORD)v59 )
      {
        v60 = (_BYTE *)(v217 + v59);
        goto LABEL_92;
      }
    }
  }
  v60 = 0LL;
LABEL_92:
  v194 = ((v42 & 0x10) != 0 ? 4 : 0) | (v42 >> 2) & 8 | (v42 >> 1) & 0x1400;
  if ( !v194 && !v60 )
  {
    LOBYTE(v181) = 0;
    P = 0LL;
    v198 = v54 != 0 ? 0x400 : 0;
    goto LABEL_107;
  }
  Header = (ACE_HEADER)200;
  for ( AccessMode.Header = (ACE_HEADER)200; ; Header = AccessMode.Header )
  {
    v62 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&Header, 0x63416553u);
    P = v62;
    if ( !v62 )
    {
      ServerAcl = -1073741801;
      goto LABEL_461;
    }
    LOBYTE(AceType) = v187;
    ServerAcl = RtlpInheritAcl2(
                  v60,
                  *(unsigned __int8 **)GrantedAccess,
                  v194,
                  a6,
                  AceType,
                  AccessStatus,
                  v204,
                  (__int64)v205,
                  v208,
                  (__int64)v210,
                  GenericMapping,
                  2,
                  v224,
                  a5,
                  &AccessMode,
                  v62,
                  &v181,
                  &v198);
    if ( ServerAcl >= 0 )
      break;
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    if ( ServerAcl != -1073741789 )
      goto LABEL_103;
    if ( (unsigned int)++v55 >= 2 )
      goto LABEL_103;
  }
  if ( !*(_DWORD *)&AccessMode.Header )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
LABEL_103:
  if ( ServerAcl >= 0 )
  {
    v63 = v207;
    LOBYTE(AccessMode.AccessMask) = 1;
    v64 = 2 * (v198 & 0x1400 | (2 * (v198 & 8 | 0x2004)));
    goto LABEL_119;
  }
  if ( ServerAcl != -2147483637 )
    goto LABEL_186;
  v54 = AceFlags;
LABEL_107:
  v63 = v207;
  v65 = v54 == 0;
  v66 = (ACE_HEADER)0x8000;
  if ( !v65 )
    v66 = (ACE_HEADER)34816;
  AccessMode.Header = v66;
  v67 = *((_WORD *)v207 + 1);
  if ( (v67 & 0x30) == 0x30 )
  {
    if ( (~(_BYTE)v67 & 0x10) == 0 )
    {
      if ( v67 >= 0 )
      {
        v69 = (char *)v207[3];
      }
      else
      {
        v68 = *((unsigned int *)v207 + 3);
        if ( !(_DWORD)v68 )
        {
          P = 0LL;
          goto LABEL_118;
        }
        v69 = (char *)v207 + v68;
      }
      P = v69;
      goto LABEL_118;
    }
    P = 0LL;
LABEL_118:
    LOBYTE(v181) = 1;
    v64 = v67 & 0x2000 | 0x10 | *(_DWORD *)&v66;
LABEL_119:
    AccessMode.Header = (ACE_HEADER)v64;
  }
  v70 = *((_WORD *)v63 + 1);
  if ( (v70 & 0x10) != 0 )
  {
    if ( (v70 & 0x8000u) == 0 )
    {
      v72 = (char *)v63[3];
    }
    else
    {
      v71 = *((unsigned int *)v63 + 3);
      if ( !(_DWORD)v71 )
      {
        *(_QWORD *)GrantedAccess = 0LL;
        goto LABEL_128;
      }
      v72 = (char *)v63 + v71;
    }
    *(_QWORD *)GrantedAccess = v72;
    goto LABEL_128;
  }
  *(_QWORD *)GrantedAccess = 0LL;
LABEL_128:
  if ( !v217 )
    goto LABEL_134;
  v73 = *(_WORD *)(v217 + 2);
  if ( (~(_BYTE)v73 & 0x10) != 0 )
    goto LABEL_134;
  if ( v73 >= 0 )
  {
    v75 = *(_BYTE **)(v217 + 24);
    goto LABEL_135;
  }
  v74 = *(unsigned int *)(v217 + 12);
  if ( !(_DWORD)v74 )
  {
LABEL_134:
    v75 = 0LL;
    goto LABEL_135;
  }
  v75 = (_BYTE *)(v217 + v74);
LABEL_135:
  v194 = ((v70 & 0x10) != 0 ? 4 : 0) | (v70 >> 2) & 8 | (v70 >> 1) & 0x400;
  if ( !v194 && !v75 )
  {
    v183 = 0LL;
    AceFlags = -2147483637;
    goto LABEL_150;
  }
  v76 = (ACE_HEADER)200;
  v77 = 0;
  for ( v202.Header = (ACE_HEADER)200; ; v76 = v202.Header )
  {
    v78 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v76, 0x63416553u);
    v183 = v78;
    if ( !v78 )
    {
      v95 = v182;
      ServerAcl = -1073741801;
      v96 = 0LL;
      goto LABEL_462;
    }
    LOBYTE(AceType) = v187;
    ServerAcl = RtlpInheritAcl2(
                  v75,
                  *(unsigned __int8 **)GrantedAccess,
                  v194,
                  a6,
                  AceType,
                  AccessStatus,
                  v204,
                  (__int64)v205,
                  v208,
                  (__int64)v210,
                  GenericMapping,
                  2,
                  v224,
                  a5,
                  &v202,
                  v78,
                  (_BYTE *)v200 + 1,
                  (int *)&Size);
    if ( ServerAcl >= 0 )
      break;
    ExFreePoolWithTag(v183, 0);
    v183 = 0LL;
    if ( ServerAcl != -1073741789 )
      goto LABEL_146;
    if ( (unsigned int)++v77 >= 2 )
      goto LABEL_146;
  }
  if ( !*(_DWORD *)&v202.Header )
  {
    ExFreePoolWithTag(v183, 0);
    v183 = 0LL;
  }
LABEL_146:
  AceFlags = ServerAcl;
  if ( ServerAcl < 0 )
  {
    if ( ServerAcl != -2147483637 )
      goto LABEL_186;
    v63 = v207;
LABEL_150:
    v79 = *((_WORD *)v63 + 1);
    if ( (v79 & 0x30) == 0x30 )
    {
      if ( (~(_BYTE)v79 & 0x10) == 0 )
      {
        if ( v79 >= 0 )
        {
          v81 = (char *)v63[3];
        }
        else
        {
          v80 = *((unsigned int *)v63 + 3);
          if ( !(_DWORD)v80 )
          {
            v183 = 0LL;
            goto LABEL_159;
          }
          v81 = (char *)v63 + v80;
        }
        v183 = v81;
        goto LABEL_159;
      }
      v183 = 0LL;
    }
  }
  else
  {
    v63 = v207;
    v192 = 1;
  }
LABEL_159:
  v201 = 0;
  do
  {
    v82 = *((_WORD *)v63 + 1);
    if ( (~(_BYTE)v82 & 0x10) != 0 )
    {
      v83 = 0LL;
    }
    else if ( v82 >= 0 )
    {
      v83 = (ACL *)v63[3];
    }
    else
    {
      v84 = *((unsigned int *)v63 + 3);
      if ( (_DWORD)v84 )
        v83 = (ACL *)((char *)v63 + v84);
      else
        v83 = 0LL;
    }
    AceByType = (char *)RtlFindAceByType(v83, 0x14u, &v201);
    v87 = v199;
    v88 = AceByType;
    if ( AceByType
      && AceByType != (char *)-8LL
      && !RtlpValidTrustSubjectContext(v199, AceByType + 8, v86, (NTSTATUS *)&AceFlags) )
    {
      goto LABEL_383;
    }
    ++v201;
  }
  while ( v88 );
  v202.Header = (ACE_HEADER)4;
  if ( (a7 & 0x800) != 0 )
  {
    v201 = 0;
    while ( 1 )
    {
      v89 = *((_WORD *)v63 + 1);
      if ( (~(_BYTE)v89 & 0x10) != 0 )
      {
        v90 = 0LL;
      }
      else if ( v89 >= 0 )
      {
        v90 = (ACL *)v63[3];
      }
      else
      {
        v91 = *((unsigned int *)v63 + 3);
        v90 = (_DWORD)v91 ? (ACL *)((char *)v63 + v91) : 0LL;
      }
      v92 = (char *)RtlFindAceByType(v90, 0x14u, &v201);
      ++v201;
      if ( !v92 )
        break;
      v93 = v92[1];
      if ( (v93 & 8) == 0 )
      {
        AccessMask = *((_DWORD *)v92 + 1);
        v87 = v92 + 8;
        AceFlags = v93;
        if ( !v228 || (AccessMask & *(_DWORD *)(v228 + 4)) != AccessMask || v92 == (char *)-8LL )
          goto LABEL_185;
        goto LABEL_192;
      }
    }
    if ( !v87 )
      goto LABEL_197;
    if ( !v228 )
    {
      v95 = v182;
      ServerAcl = -1073741811;
      v96 = v183;
      goto LABEL_462;
    }
    AccessMask = *(_DWORD *)(v228 + 4);
    AceFlags = 0;
LABEL_192:
    ServerAcl = RtlCreateAcl(&Acl, 0x58u, 2u);
    if ( ServerAcl < 0 )
      goto LABEL_186;
    ServerAcl = RtlAddProcessTrustLabelAce(&Acl, 2u, AceFlags, v87, 0x14u, AccessMask);
    if ( ServerAcl < 0 )
      goto LABEL_186;
    v63 = v207;
    v96 = v183;
    ServerAcl = RtlpComputeMergedAcl(
                  (int)v183,
                  ((*((_WORD *)v207 + 1) & 0x800 | (*((unsigned __int16 *)v207 + 1) >> 1) & 0x18u) >> 1) & 0xFFFFEFFF,
                  (int)&Acl,
                  4,
                  (__int64)v204,
                  (__int64)v205,
                  (__int64)GenericMapping,
                  2,
                  (__int64)&v227,
                  (__int64)&v198);
    if ( ServerAcl < 0 )
    {
      v95 = v182;
      goto LABEL_462;
    }
    v193 = 1;
  }
  else
  {
LABEL_197:
    v227 = v183;
  }
  v97 = *((_WORD *)v63 + 1);
  if ( (~(_BYTE)v97 & 0x10) != 0 )
  {
    v98 = 0LL;
  }
  else if ( v97 >= 0 )
  {
    v98 = (ACL *)v63[3];
  }
  else
  {
    v99 = *((unsigned int *)v63 + 3);
    if ( (_DWORD)v99 )
      v98 = (ACL *)((char *)v207 + v99);
    else
      v98 = 0LL;
  }
  v234 = 256;
  v194 = 0;
  v233 = 0;
  v222 = 0;
  while ( 2 )
  {
    v100 = RtlFindAceByType(v98, 0x15u, &v222);
    v102 = v100;
    if ( !v100 )
      goto LABEL_215;
    if ( (v100[1] & 0xFF000000) != 0 )
      goto LABEL_185;
    if ( (*((_BYTE *)v100 + 1) & 0x40) != 0 )
    {
      if ( !RtlpValidTrustSubjectContext(v199, v100 + 2, v101, &v194) )
        goto LABEL_383;
      goto LABEL_215;
    }
    if ( *(_DWORD *)((char *)v100 + 10) != v233 || *((_WORD *)v100 + 7) != 256 )
      goto LABEL_185;
    if ( *((_BYTE *)v100 + 9) == 1 && !v100[4] )
    {
LABEL_215:
      ++v222;
      if ( !v102 )
      {
        ServerAcl = v194;
        goto LABEL_217;
      }
      continue;
    }
    break;
  }
  ServerAcl = -1073741811;
LABEL_217:
  if ( ServerAcl < 0 )
    goto LABEL_186;
  v103 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v103 = (a7 >> 8) & 1;
  v104 = v103 | 4;
  if ( (a7 & 0x400) == 0 )
    v104 = v103;
  if ( v104 )
  {
    v109 = v225;
LABEL_236:
    v110 = 0;
    goto LABEL_237;
  }
  v105 = *((_WORD *)v207 + 1);
  if ( (~(_BYTE)v105 & 0x10) != 0 )
  {
    v106 = 0LL;
  }
  else if ( v105 >= 0 )
  {
    v106 = (ACL *)v207[3];
  }
  else
  {
    v107 = *((unsigned int *)v207 + 3);
    if ( (_DWORD)v107 )
      v106 = (ACL *)((char *)v207 + v107);
    else
      v106 = 0LL;
  }
  v108 = (char *)RtlFindAceByType(v106, 0x11u, 0LL);
  v225 = v108;
  v109 = v108;
  if ( !v108 )
    goto LABEL_236;
  v110 = v108[1];
  v104 = *((_DWORD *)v108 + 1);
  v215 = v108 + 8;
  if ( v110 == 8 || (v110 & 0x10) != 0 )
  {
    v109 = 0LL;
    v225 = 0LL;
    v215 = 0LL;
    v104 = 0;
    goto LABEL_236;
  }
LABEL_237:
  if ( (v110 & 8) != 0 && *RtlSubAuthoritySid(Sid, 0) < 0x2000 )
  {
    v95 = v182;
    ServerAcl = -1073740730;
    v96 = v183;
    goto LABEL_462;
  }
  if ( !v104 )
  {
    if ( Sid && *RtlSubAuthoritySid(Sid, 0) < 0x2000 )
    {
      v104 = 1;
      goto LABEL_244;
    }
LABEL_248:
    v111 = (char *)v215;
LABEL_249:
    if ( v111 )
    {
      v235 = 0;
      v236 = 4096;
      memset(v238, 0, sizeof(v238));
      v238[0] = (ACL)8388610LL;
      if ( (unsigned __int64)v111 <= 0x7FFFFFFF0000LL || (*v111 & 0xF) != 1 || (unsigned __int8)v111[1] > 0xFu )
      {
        v95 = v182;
        ServerAcl = -1073741704;
        v96 = v183;
        goto LABEL_462;
      }
      if ( *(_DWORD *)(v111 + 2) == v235 && *((_WORD *)v111 + 3) == v236 )
      {
        if ( (v110 & 0xE0) != 0 )
        {
          v95 = v182;
          ServerAcl = -1073741811;
          v96 = v183;
          goto LABEL_462;
        }
        if ( (v104 & 0xFFFFFFF8) != 0 )
        {
          v95 = v182;
          ServerAcl = -1073741811;
          v96 = v183;
          goto LABEL_462;
        }
        if ( !RtlValidAcl(v238) )
        {
          v95 = v182;
          ServerAcl = -1073741705;
          v96 = v183;
          goto LABEL_462;
        }
        v112 = &v238[1];
        v113 = 0LL;
        v114 = 0;
        if ( v238[0].AceCount )
        {
          while ( v112 < (ACL *)((char *)v238 + v238[0].AclSize) )
          {
            ++v114;
            v112 = (ACL *)((char *)v112 + v112->AclSize);
            if ( v114 >= v238[0].AceCount )
              goto LABEL_264;
          }
          v96 = v183;
          ServerAcl = -1073741705;
          v95 = 0LL;
          goto LABEL_462;
        }
LABEL_264:
        v115 = (ACL *)((char *)v238 + v238[0].AclSize);
        if ( v112 <= v115 )
          v113 = v112;
        v116 = (unsigned __int8 *)v215;
        v117 = 4 * (*((unsigned __int8 *)v215 + 1) + 4);
        if ( v113 && (ACL *)((char *)v113 + v117) <= v115 )
        {
          v113->AclSize = v117;
          v113->Sbz1 = v110;
          v113->AclRevision = 17;
          *(_DWORD *)&v113->AceCount = v104;
          memmove(&v113[1], v116, 4 * (unsigned int)v116[1] + 8);
          ++v238[0].AceCount;
          v238[0].AclRevision = 2;
          ServerAcl = 0;
        }
        else
        {
          ServerAcl = -1073741671;
        }
        if ( ServerAcl >= 0 )
        {
          v118 = v238;
          goto LABEL_275;
        }
LABEL_186:
        v95 = v182;
LABEL_187:
        v96 = v183;
        goto LABEL_462;
      }
LABEL_185:
      ServerAcl = -1073741811;
      goto LABEL_186;
    }
    v118 = 0LL;
    v214 = 0LL;
LABEL_275:
    if ( (a7 & 0x700) != 0 )
    {
      v119 = 4;
    }
    else
    {
      if ( v225 || !v118 )
        v119 = (*((_WORD *)v207 + 1) & 0x2800 | (*((unsigned __int16 *)v207 + 1) >> 1) & 0x18u) >> 1;
      else
        v119 = 0;
      v202.Header = (ACE_HEADER)v119;
    }
    if ( !v217 )
      goto LABEL_288;
    v120 = *(_WORD *)(v217 + 2);
    if ( (~(_BYTE)v120 & 0x10) != 0 )
      goto LABEL_288;
    if ( v120 >= 0 )
    {
      v122 = *(_BYTE **)(v217 + 24);
      goto LABEL_289;
    }
    v121 = *(unsigned int *)(v217 + 12);
    if ( !(_DWORD)v121 )
    {
LABEL_288:
      v122 = 0LL;
      goto LABEL_289;
    }
    v122 = (_BYTE *)(v217 + v121);
LABEL_289:
    v199 = v122;
    if ( v119 || v122 )
    {
      v123 = 200;
      v124 = 0;
      v202.AccessMask = 200;
      while ( 1 )
      {
        v125 = (ACL *)ExAllocatePoolWithTag(PagedPool, v123, 0x63416553u);
        v126 = v125;
        if ( !v125 )
        {
          v95 = v182;
          ServerAcl = -1073741801;
          v96 = v183;
          goto LABEL_462;
        }
        LOBYTE(AceType) = 1;
        ServerAcl = RtlpInheritAcl2(
                      v122,
                      (unsigned __int8 *)v214,
                      *(__int16 *)&v202.Header.AceType,
                      a6,
                      AceType,
                      0,
                      v204,
                      (__int64)v205,
                      v208,
                      (__int64)v210,
                      GenericMapping,
                      3,
                      v224,
                      a5,
                      (PACE)&v202.AccessMask,
                      v125,
                      v200,
                      &v198);
        if ( ServerAcl >= 0 )
          break;
        ExFreePoolWithTag(v126, 0);
        v126 = 0LL;
        if ( ServerAcl != -1073741789 )
          goto LABEL_299;
        if ( (unsigned int)++v124 >= 2 )
          goto LABEL_299;
        v123 = v202.AccessMask;
        v122 = v199;
      }
      if ( !v202.AccessMask )
      {
        ExFreePoolWithTag(v126, 0);
        v126 = 0LL;
      }
LABEL_299:
      if ( ServerAcl == -2147483637 )
        goto LABEL_300;
      if ( ServerAcl >= 0 )
      {
        v127 = v198;
        goto LABEL_303;
      }
      goto LABEL_186;
    }
LABEL_300:
    v126 = v214;
    v127 = 0;
    v198 = 0;
LABEL_303:
    ServerAcl = RtlpCombineAcls(
                  (unsigned __int8 *)P,
                  (unsigned __int8 *)v126,
                  (unsigned __int8 *)v183,
                  (unsigned __int8 *)v183,
                  (unsigned __int8 *)v227,
                  (unsigned __int8 *)v183,
                  &v230,
                  &v197);
    v194 = ((*(_WORD *)&AccessMode.Header.AceType & 0x2000) << 17) | v197;
    if ( v126 && v126 != v214 )
      ExFreePoolWithTag(v126, 0);
    if ( ServerAcl < 0 )
      goto LABEL_186;
    v128 = v230;
    if ( v230 )
    {
      if ( LOBYTE(AccessMode.AccessMask) && P )
        ExFreePoolWithTag(P, 0);
      v191 = 1;
      v129 = (ACL *)v128;
      P = v128;
      *(_DWORD *)&AccessMode.Header |= 2 * (v127 & 0x1400 | (2 * (v127 & 8 | 4)));
    }
    else
    {
      v129 = (ACL *)P;
    }
    v197 = a7 & 8;
    if ( (a7 & 8) == 0 )
    {
      v130 = (char *)RtlFindAceByType(v129, 0x11u, 0LL);
      v131 = v130 ? v130 + 8 : (char *)v215;
      if ( v131 )
      {
        if ( !v203 )
        {
          v95 = v182;
          ServerAcl = -1073741700;
          v96 = v183;
          goto LABEL_462;
        }
        ServerAcl = RtlSidDominates(Sid, v131, &Dominates);
        if ( ServerAcl < 0 )
          goto LABEL_186;
        v132 = (unsigned __int8)v221;
        if ( !Dominates )
          v132 = 1;
        v221 = v132;
      }
    }
    v133 = v207;
    v202.AccessMask = a7 & 1;
    v134 = *((_WORD *)v207 + 1);
    if ( (~(_BYTE)v134 & 4) == 0 )
    {
      if ( v134 >= 0 )
      {
        v135 = (char *)v207[4];
      }
      else
      {
        v136 = *((unsigned int *)v207 + 4);
        if ( !(_DWORD)v136 )
        {
          v135 = 0LL;
          v214 = 0LL;
          goto LABEL_332;
        }
        v135 = (char *)v207 + v136;
      }
      v214 = v135;
      goto LABEL_332;
    }
    v135 = 0LL;
    v214 = 0LL;
LABEL_332:
    if ( !v217 )
      goto LABEL_338;
    v137 = *(_WORD *)(v217 + 2);
    if ( (~(_BYTE)v137 & 4) != 0 )
      goto LABEL_338;
    if ( v137 >= 0 )
    {
      v139 = *(_BYTE **)(v217 + 32);
      goto LABEL_339;
    }
    v138 = *(unsigned int *)(v217 + 16);
    if ( !(_DWORD)v138 )
    {
LABEL_338:
      v139 = 0LL;
      goto LABEL_339;
    }
    v139 = (_BYTE *)(v217 + v138);
LABEL_339:
    LODWORD(Size) = v134 & 0x140C;
    if ( (v134 & 0x140C) != 0 || v139 )
    {
      v142 = (ACE_HEADER)200;
      v143 = 0;
      v216.Header = (ACE_HEADER)200;
      while ( 1 )
      {
        v144 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v142, 0x63416553u);
        v182 = v144;
        if ( !v144 )
        {
          v96 = v183;
          ServerAcl = -1073741801;
          v95 = 0LL;
          goto LABEL_462;
        }
        LOBYTE(AceTypea) = v202.AccessMask;
        ServerAcl = RtlpInheritAcl2(
                      v139,
                      (unsigned __int8 *)v135,
                      Size,
                      a6,
                      AceTypea,
                      AccessStatus,
                      v204,
                      (__int64)v205,
                      v208,
                      (__int64)v210,
                      GenericMapping,
                      1,
                      v224,
                      a5,
                      &v216,
                      v144,
                      (_BYTE *)&AccessMode.AccessMask + 2,
                      &v198);
        if ( ServerAcl >= 0 )
          break;
        ExFreePoolWithTag(v182, 0);
        v140 = 0LL;
        v182 = 0LL;
        if ( ServerAcl != -1073741789 )
          goto LABEL_351;
        if ( (unsigned int)++v143 >= 2 )
          goto LABEL_351;
        v142 = v216.Header;
        v135 = (char *)v214;
      }
      if ( v216.Header )
      {
        v140 = (char *)v182;
      }
      else
      {
        ExFreePoolWithTag(v182, 0);
        v140 = 0LL;
        v182 = 0LL;
      }
LABEL_351:
      if ( ServerAcl >= 0 )
      {
        v141 = BYTE2(AccessMode.AccessMask);
        v145 = v202.AccessMask;
        *(_DWORD *)&AccessMode.Header |= v198 & 0x1408 | 4;
        BYTE1(AccessMode.AccessMask) = 1;
        goto LABEL_369;
      }
      if ( ServerAcl == -2147483637 )
      {
        v141 = BYTE2(AccessMode.AccessMask);
        v133 = v207;
        goto LABEL_355;
      }
      goto LABEL_186;
    }
    v140 = 0LL;
    v141 = 0;
    v182 = 0LL;
LABEL_355:
    v145 = v202.AccessMask;
    v146 = (int)AccessMode.Header;
    if ( v202.AccessMask )
    {
      v146 = *(_DWORD *)&AccessMode.Header | 0x400;
      *(_DWORD *)&AccessMode.Header |= 0x400u;
    }
    v147 = *((_WORD *)v133 + 1);
    if ( (v147 & 0xC) == 0xC )
    {
      if ( (~(_BYTE)v147 & 4) != 0 )
      {
        v140 = 0LL;
      }
      else if ( v147 >= 0 )
      {
        v140 = (char *)v133[4];
      }
      else
      {
        v148 = *((unsigned int *)v133 + 4);
        if ( (_DWORD)v148 )
          v140 = (char *)v133 + v148;
        else
          v140 = 0LL;
      }
      v182 = v140;
      v141 = 1;
      v149 = v147 & 0x1000 | 4 | v146;
LABEL_368:
      AccessMode.Header = (ACE_HEADER)v149;
    }
    else if ( Src )
    {
      v140 = (char *)Src;
      v182 = Src;
      v149 = v146 | 4;
      goto LABEL_368;
    }
LABEL_369:
    v150 = (struct _SECURITY_SUBJECT_CONTEXT *)v203;
    if ( (a7 & 0x1000) == 0 && v189 && v203 && v217 )
    {
      GrantedAccess[0] = 0;
      AccessStatus = 0;
      ServerAcl = RtlpNewSecurityObject(
                    v217,
                    0,
                    (unsigned int)&SecurityDescriptor,
                    v224,
                    a5,
                    a6,
                    a7 | 1,
                    (__int64)v203,
                    (__int64)GenericMapping,
                    v228);
      if ( ServerAcl < 0 )
        goto LABEL_186;
      v151 = *((_WORD *)SecurityDescriptor + 1);
      if ( (~(_BYTE)v151 & 4) != 0 )
      {
        v152 = 0LL;
      }
      else if ( v151 >= 0 )
      {
        v152 = (char *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v153 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v153 )
          v152 = (char *)SecurityDescriptor + v153;
        else
          v152 = 0LL;
      }
      if ( RtlpOwnerAcesPresent(0x10u, (__int64)v152) )
      {
        v150 = (struct _SECURITY_SUBJECT_CONTEXT *)v203;
        if ( !SeAccessCheck(
                SecurityDescriptor,
                (PSECURITY_SUBJECT_CONTEXT)v203,
                0,
                0x40000u,
                0,
                0LL,
                GenericMapping,
                SHIBYTE(AccessMode.AccessMask),
                GrantedAccess,
                &AccessStatus) )
        {
LABEL_383:
          v95 = v182;
          ServerAcl = -1073741790;
          v96 = v183;
          goto LABEL_462;
        }
      }
      else
      {
        v150 = (struct _SECURITY_SUBJECT_CONTEXT *)v203;
      }
      v140 = (char *)v182;
    }
    if ( v145 && !v140 )
      *(_DWORD *)&AccessMode.Header |= 0x1000u;
    v154 = !v194 || (v194 & 0x1B0) != v194;
    if ( HIBYTE(AccessMode.AccessMask) != 1 )
      goto LABEL_419;
    v155 = v197;
    if ( (_BYTE)v181 && !v197 && v154 )
    {
      if ( !v150 )
      {
        v95 = v182;
        ServerAcl = -1073741700;
        v96 = v183;
        goto LABEL_462;
      }
      RequiredPrivileges.PrivilegeCount = 1;
      RequiredPrivileges.Control = 1;
      RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      v156 = SePrivilegeCheck(&RequiredPrivileges, v150, 1);
      SePrivilegedServiceAuditAlarm(0LL, v203, (int *)&RequiredPrivileges, v156);
      if ( !v156 )
      {
        v95 = v182;
        ServerAcl = -1073741727;
        v96 = v183;
        goto LABEL_462;
      }
    }
    if ( (_BYTE)v221 )
    {
      v65 = v155 == 0;
      v157 = v203;
      if ( v65 )
      {
        if ( !v203 )
        {
          v95 = v182;
          ServerAcl = -1073741700;
          v96 = v183;
          goto LABEL_462;
        }
        RequiredPrivileges.PrivilegeCount = 1;
        RequiredPrivileges.Control = 1;
        RequiredPrivileges.Privilege[0].Luid = SeRelabelPrivilege;
        RequiredPrivileges.Privilege[0].Attributes = 0;
        v158 = SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)v203, 1);
        SePrivilegedServiceAuditAlarm(0LL, v157, (int *)&RequiredPrivileges, v158);
        if ( !v158 )
        {
          v95 = v182;
          ServerAcl = -1073741727;
          v96 = v183;
          goto LABEL_462;
        }
      }
    }
    else
    {
      v157 = v203;
    }
    v159 = v184;
    if ( v186 && (a7 & 0x10) == 0 && !SepValidOwnerSubjectContext(v157, v204, v184) )
    {
      v95 = v182;
      ServerAcl = -1073741734;
      v96 = v183;
      goto LABEL_462;
    }
    if ( v141 && v159 )
    {
      v95 = v182;
      ServerAcl = RtlpCreateServerAcl((_DWORD)v182, (unsigned __int8)v220, v208, (unsigned int)&v226, (__int64)&v190);
      if ( ServerAcl < 0 )
        goto LABEL_187;
      if ( BYTE1(AccessMode.AccessMask) && v95 )
        ExFreePoolWithTag(v95, 0);
      v160 = (unsigned __int16 *)v226;
      v182 = v226;
      v226 = 0LL;
    }
    else
    {
LABEL_419:
      v160 = (unsigned __int16 *)v182;
    }
    v161 = 4 * *((unsigned __int8 *)v204 + 1) + 11;
    LODWORD(Size) = 4 * *((unsigned __int8 *)v204 + 1) + 8;
    v162 = v161 & 0xFFFFFFFC;
    AceFlags = v162;
    if ( v205 )
    {
      v197 = 4 * *((unsigned __int8 *)v205 + 1) + 8;
      v163 = (v197 + 3) & 0xFFFFFFFC;
    }
    else
    {
      v197 = 0;
      v163 = 0;
    }
    v194 = v163;
    v220 = AccessMode.Header.AceType & 0x10;
    if ( (AccessMode.Header.AceType & 0x10) != 0 && P )
      v164 = (*((unsigned __int16 *)P + 1) + 3) & 0xFFFFFFFC;
    else
      v164 = 0;
    GrantedAccess[0] = AccessMode.Header.AceType & 4;
    if ( (AccessMode.Header.AceType & 4) != 0 && v160 )
      v165 = (v160[1] + 3) & 0xFFFFFFFC;
    else
      v165 = 0;
    v166 = ExAllocatePoolWithTag(PagedPool, v163 + v165 + v164 + v162 + 20, 0x64536553u);
    v219 = v166;
    v167 = v166;
    if ( !v166 )
    {
      v95 = v182;
      ServerAcl = -1073741670;
      v96 = v183;
      goto LABEL_462;
    }
    v168 = (char *)(v166 + 5);
    *(_QWORD *)v166 = 0LL;
    *((_QWORD *)v166 + 1) = 0LL;
    v166[4] = 0;
    *((_WORD *)v166 + 1) |= *(_WORD *)&AccessMode.Header.AceType;
    v65 = v220 == 0;
    *(_BYTE *)v166 = 1;
    if ( v65 )
    {
LABEL_440:
      v169 = 0;
    }
    else
    {
      v169 = (int)P;
      if ( P )
      {
        memmove(v168, P, *((unsigned __int16 *)P + 1));
        if ( !LOBYTE(AccessMode.AccessMask) )
          RtlpApplyAclToObject((__int64)v168, GenericMapping);
        v167 = v219;
        v219[3] = (_DWORD)v168 - (_DWORD)v219;
        v170 = *((unsigned __int16 *)P + 1);
        if ( v164 > (unsigned int)v170 )
        {
          memset(&v168[v170], 0, v164 - (unsigned int)v170);
          v167 = v219;
        }
        v168 += v164;
        goto LABEL_440;
      }
      v167[3] = 0;
    }
    if ( GrantedAccess[0] )
    {
      v171 = (unsigned __int16 *)v182;
      if ( v182 )
      {
        memmove(v168, v182, *((unsigned __int16 *)v182 + 1));
        if ( !BYTE1(AccessMode.AccessMask) )
          RtlpApplyAclToObject((__int64)v168, GenericMapping);
        v219[4] = (_DWORD)v168 - (_DWORD)v219;
        v172 = v171[1];
        if ( v165 > (unsigned int)v172 )
          memset(&v168[v172], 0, v165 - (unsigned int)v172);
        v168 += v165;
      }
      else
      {
        v167[4] = v169;
      }
    }
    v173 = (unsigned int)Size;
    memmove(v168, v204, (unsigned int)Size);
    v174 = AceFlags;
    if ( AceFlags > (unsigned int)v173 )
      memset(&v168[v173], 0, AceFlags - (unsigned int)v173);
    v175 = (_DWORD)v168 - (_DWORD)v219;
    v176 = &v168[v174];
    v219[1] = v175;
    if ( v205 )
    {
      v177 = v197;
      memmove(v176, v205, v197);
      if ( v194 > (unsigned int)v177 )
        memset(&v176[v177], 0, (unsigned int)(v194 - v177));
      v219[2] = (_DWORD)v176 - (_DWORD)v219;
    }
    v95 = v182;
    v96 = v183;
    ServerAcl = 0;
    goto LABEL_462;
  }
LABEL_244:
  if ( v109 )
    goto LABEL_248;
  if ( v203 )
  {
    v111 = (char *)Sid;
    v110 = 0;
    v215 = Sid;
    goto LABEL_249;
  }
  v95 = v182;
  ServerAcl = -1073741700;
  v96 = v183;
LABEL_462:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v190 && v226 )
    ExFreePoolWithTag(v226, 0);
  if ( v229 )
    ExFreePoolWithTag(v229, 0);
  if ( (LOBYTE(AccessMode.AccessMask) || v191) && P )
    ExFreePoolWithTag(P, 0);
  if ( v192 && v96 )
    ExFreePoolWithTag(v96, 0);
  if ( v227 && v193 )
    ExFreePoolWithTag(v227, 0);
  if ( BYTE1(AccessMode.AccessMask) )
  {
    if ( v95 )
      ExFreePoolWithTag(v95, 0);
  }
  *v231 = v219;
  return (unsigned int)ServerAcl;
}
