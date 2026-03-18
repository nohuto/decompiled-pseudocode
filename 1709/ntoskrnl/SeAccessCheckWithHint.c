/*
 * XREFs of SeAccessCheckWithHint @ 0x14007E4B0
 * Callers:
 *     SeAccessCheckFromStateEx @ 0x140025270 (SeAccessCheckFromStateEx.c)
 *     SeAccessCheck @ 0x14007E440 (SeAccessCheck.c)
 *     RtlCheckTokenMembershipEx @ 0x1400FA910 (RtlCheckTokenMembershipEx.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140122710 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlpAllowsLowBoxAccess @ 0x14012B1B8 (RtlpAllowsLowBoxAccess.c)
 *     RtlCheckTokenCapability @ 0x1402516C0 (RtlCheckTokenCapability.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1405499E0 (ObpVerifyAccessToBoundaryEntry.c)
 *     ExpCheckWakeTimerAccess @ 0x1405F15A0 (ExpCheckWakeTimerAccess.c)
 * Callees:
 *     SepFreeResourceInfo @ 0x1400150FC (SepFreeResourceInfo.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140017110 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14001A89C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14001EED0 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepSidInTokenSidHash @ 0x140068A00 (SepSidInTokenSidHash.c)
 *     SepMandatoryIntegrityCheck @ 0x14007EFF0 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x14007F470 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x14007F5F0 (SepAccessCheck.c)
 *     SepLocateTokenTrustLevel @ 0x140087894 (SepLocateTokenTrustLevel.c)
 *     RtlSidDominatesForTrust @ 0x1400A09D0 (RtlSidDominatesForTrust.c)
 *     SeLogAccessFailure @ 0x140113BC0 (SeLogAccessFailure.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14025E0AC (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x14025E204 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x14025E34C (SepLogLpacAccessFailure.c)
 *     SepRmDereferenceCapTable @ 0x14025E490 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x140260144 (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SeLockSubjectContext @ 0x1404A6DD0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1404B2450 (SeUnlockSubjectContext.c)
 */

bool __fastcall SeAccessCheckWithHint(
        __int64 a1,
        char a2,
        int *a3,
        char a4,
        unsigned int a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        char a9,
        int *a10,
        int *a11)
{
  __int64 v12; // rdi
  int v14; // ebx
  unsigned int v17; // r14d
  __int16 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // r10d
  int v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // ecx
  __int64 v26; // r12
  int v27; // eax
  int v28; // edx
  bool v29; // cl
  int v30; // eax
  char v31; // al
  char v32; // si
  unsigned __int8 *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int8 v36; // r9
  __int16 v37; // r10
  unsigned __int8 v38; // cl
  unsigned int v39; // r11d
  unsigned __int64 v40; // r8
  int v41; // eax
  _WORD *v42; // rcx
  int v43; // edx
  char v44; // cl
  __int16 v45; // cx
  __int64 v46; // rcx
  _WORD *SeOwnerRightsSid; // rdx
  int v48; // edx
  int v49; // edi
  __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // r9
  char v54; // al
  int *v55; // r8
  char v56; // r10
  int v57; // ebx
  PVOID v58; // rbx
  bool result; // al
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int8 *v63; // rdi
  unsigned int v64; // esi
  int v65; // r8d
  unsigned __int8 v66; // cl
  __int64 v67; // rcx
  unsigned __int8 *v68; // rcx
  unsigned int v69; // ecx
  __int64 v70; // r9
  int v71; // ecx
  _WORD *v72; // rax
  int v73; // eax
  struct _SECURITY_SUBJECT_CONTEXT *v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rbx
  int TokenTrustLevel; // eax
  int v78; // edx
  int v79; // r8d
  __int64 v80; // rax
  __int16 v81; // cx
  __int64 v82; // rax
  __int64 v83; // rcx
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v86; // rdx
  bool v87; // sf
  unsigned int v88; // ecx
  _WORD *v89; // rdx
  int v90; // eax
  __int64 v91; // r8
  unsigned int v92; // ecx
  PVOID v93; // rcx
  int v94; // eax
  int v95; // edx
  _QWORD *v96; // rax
  void *v97; // r8
  void *v98; // r10
  void *v99; // rdx
  void *v100; // r9
  int v101; // eax
  int v102; // ecx
  _QWORD *v103; // rax
  void *v104; // rdx
  void *v105; // r8
  void *v106; // rcx
  void *v107; // r9
  int v108; // ecx
  int v109; // edx
  char v110; // al
  PVOID v111; // rcx
  int v112; // ecx
  __int64 v113; // rcx
  __int64 v114; // rcx
  char v115; // [rsp+A0h] [rbp-80h]
  char v116; // [rsp+A1h] [rbp-7Fh]
  _BYTE v117[2]; // [rsp+A2h] [rbp-7Eh] BYREF
  unsigned int v118; // [rsp+A4h] [rbp-7Ch]
  char v119; // [rsp+A8h] [rbp-78h] BYREF
  char v120; // [rsp+A9h] [rbp-77h] BYREF
  bool v121; // [rsp+AAh] [rbp-76h]
  __int16 v122; // [rsp+ACh] [rbp-74h]
  char v123[2]; // [rsp+AEh] [rbp-72h] BYREF
  int v124; // [rsp+B0h] [rbp-70h]
  unsigned int v125; // [rsp+B4h] [rbp-6Ch]
  int v126; // [rsp+B8h] [rbp-68h]
  PVOID P; // [rsp+C0h] [rbp-60h] BYREF
  int v128; // [rsp+C8h] [rbp-58h]
  __int64 v129; // [rsp+D0h] [rbp-50h]
  int v130; // [rsp+D8h] [rbp-48h] BYREF
  unsigned __int64 v131; // [rsp+E0h] [rbp-40h]
  unsigned int v132; // [rsp+E8h] [rbp-38h] BYREF
  int v133; // [rsp+ECh] [rbp-34h] BYREF
  __int64 v134; // [rsp+F0h] [rbp-30h]
  _WORD *i; // [rsp+F8h] [rbp-28h]
  __int64 v136; // [rsp+100h] [rbp-20h] BYREF
  __int64 v137; // [rsp+108h] [rbp-18h]
  __int64 v138; // [rsp+110h] [rbp-10h] BYREF
  __int64 v139; // [rsp+118h] [rbp-8h]
  __int64 v140; // [rsp+120h] [rbp+0h]
  int v141; // [rsp+128h] [rbp+8h]
  _WORD *v142; // [rsp+130h] [rbp+10h]
  int v143; // [rsp+138h] [rbp+18h] BYREF
  _QWORD SecurityDescriptor[12]; // [rsp+140h] [rbp+20h] BYREF
  char v147; // [rsp+1E0h] [rbp+C0h]
  char v148; // [rsp+1E0h] [rbp+C0h]
  char v149; // [rsp+1F0h] [rbp+D0h]
  __int64 v150; // [rsp+1F8h] [rbp+D8h]
  unsigned __int8 v151; // [rsp+200h] [rbp+E0h]
  char v152; // [rsp+200h] [rbp+E0h]
  __int64 v153; // [rsp+200h] [rbp+E0h]
  int v154; // [rsp+200h] [rbp+E0h]
  int v155; // [rsp+200h] [rbp+E0h]

  LODWORD(v12) = 0;
  v134 = 0LL;
  v129 = 0LL;
  v14 = -1;
  v136 = 0LL;
  v137 = 0LL;
  memset(SecurityDescriptor, 0, 40);
  v115 = 0;
  *a10 = 0;
  *a11 = -1073741790;
  v124 = 0;
  P = 0LL;
  v132 = 0;
  v133 = -1073741790;
  v143 = -1;
  if ( a7 )
    *a7 = 0LL;
  if ( !a9 )
  {
    v69 = a5;
    if ( (a5 & 0x2000000) != 0 )
      v69 = *(_DWORD *)(a8 + 12) | a5 & 0xFDFFFFFF;
    result = 1;
    *a10 = a6 | v69;
    *a11 = 0;
    return result;
  }
  if ( !a1 )
  {
    *a11 = -1073741790;
    return 0;
  }
  if ( *(_QWORD *)a3 && a3[2] < 2 )
  {
    *a11 = -1073741659;
    return 0;
  }
  v17 = a5;
  if ( !a5 )
  {
    if ( !a6 )
    {
      *a11 = -1073741790;
      return 0;
    }
    *a10 = a6;
    *a11 = 0;
    if ( a7 )
      *a7 = 0LL;
    return 1;
  }
  if ( !a4 )
    SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
  v18 = *(_WORD *)(a1 + 2);
  LODWORD(v19) = 0;
  v120 = 0;
  v119 = 0;
  while ( 1 )
  {
    if ( (v18 & 0x10) != 0 )
    {
      if ( v18 >= 0 )
      {
        v20 = *(_QWORD *)(a1 + 24);
        goto LABEL_13;
      }
      v61 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v61 )
        break;
    }
LABEL_18:
    v21 = 0LL;
LABEL_19:
    v19 = (unsigned int)(v19 + 1);
    if ( !v21 )
      goto LABEL_20;
  }
  v20 = a1 + v61;
LABEL_13:
  if ( !v20 )
    goto LABEL_18;
  v21 = v20 + 8;
  v22 = 0;
  if ( !*(_WORD *)(v20 + 4) )
    goto LABEL_18;
  while ( v22 < (unsigned int)v19 || *(_BYTE *)v21 != 20 )
  {
    ++v22;
    v21 += *(unsigned __int16 *)(v21 + 2);
    if ( v22 >= *(unsigned __int16 *)(v20 + 4) )
      goto LABEL_18;
  }
  v19 = v22;
  if ( (*(_BYTE *)(v21 + 1) & 8) != 0 )
    goto LABEL_19;
  if ( !v21 || (v12 = v21 + 8, v154 = *(_DWORD *)(v21 + 4), v21 == -8) )
  {
LABEL_20:
    v14 = -1;
    *a11 = v12;
  }
  else
  {
    if ( !*(_QWORD *)a3 )
      goto LABEL_175;
    v75 = *((_QWORD *)a3 + 2);
    v142 = *(_WORD **)(*(_QWORD *)a3 + 1104LL);
    v73 = RtlSidDominatesForTrust(*(_QWORD *)(v75 + 1104), v142, &v119);
    if ( v73 >= 0 )
    {
      if ( v119 )
        v72 = v142;
      else
LABEL_175:
        v72 = *(_WORD **)(*((_QWORD *)a3 + 2) + 1104LL);
      v73 = RtlSidDominatesForTrust(v72, v12, &v120);
      if ( v73 >= 0 )
      {
        if ( v120 )
          v14 = -1;
        else
          v14 = v154 | 0x1000000;
      }
    }
    *a11 = v73;
    if ( v73 < 0 )
    {
      if ( a4 )
        return 0;
      v74 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
LABEL_200:
      SeUnlockSubjectContext(v74);
      return 0;
    }
  }
  v23 = 0;
  v24 = a5 & 0xFDFFFFFF;
  v25 = v14 & a5 & 0xFDFFFFFF;
  if ( v25 != (a5 & 0xFDFFFFFF) )
    v23 = -1073741790;
  *a11 = v23;
  if ( v25 != (a5 & 0xFDFFFFFF) )
  {
    v76 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
      v76 = *((_QWORD *)a3 + 2);
    TokenTrustLevel = SepLocateTokenTrustLevel(a3, 3221225506LL, v19);
    SeLogAccessFailure(v76, v78, v79, TokenTrustLevel, a1, a6 | a5, 0);
    if ( a4 )
      return 0;
    v74 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
    goto LABEL_200;
  }
  v26 = *(_QWORD *)a3;
  if ( !v26 )
    v26 = *((_QWORD *)a3 + 2);
  if ( (a2 & 4) == 0 )
  {
    v27 = SepFilterCheck(a1, (unsigned int)&P, v26, 0, (__int64)&v143);
    *a11 = v27;
    if ( v27 >= 0 )
    {
      if ( (v143 & v24) == v24 )
      {
        *a11 = 0;
        goto LABEL_30;
      }
      *a11 = -1073741790;
      SeLogAccessFailure(v26, v28, v19, 0, a1, a6 | a5, 0);
    }
LABEL_190:
    if ( a4 )
      return 0;
    v74 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
    goto LABEL_200;
  }
LABEL_30:
  v29 = (a2 & 2) != 0 && (*(_DWORD *)(v26 + 200) & 0x2000) != 0;
  v121 = v29;
  v116 = 0;
  if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(v26 + 200) & 0x20) == 0 )
  {
    v80 = *(_QWORD *)(v26 + 216);
    if ( v80 )
    {
      if ( (*(_DWORD *)(v80 + 32) & 0x20) != 0 )
      {
        *a10 = 0;
        *a11 = -1073741790;
        goto LABEL_190;
      }
    }
  }
  if ( !v29 )
  {
    LOBYTE(v19) = (a2 & 2) != 0;
    v30 = SepMandatoryIntegrityCheck(a8, a1, v19, v26, 0, (__int64)&v136);
    *a11 = v30;
    if ( v30 < 0 )
      goto LABEL_190;
    if ( (_DWORD)v137 && ((unsigned int)v136 & v24) != v24 )
    {
      *a11 = -1073741790;
      if ( (*(_DWORD *)(v26 + 200) & 0x4000) == 0 || HIDWORD(v137) > 0x2000 )
        goto LABEL_190;
    }
    else
    {
      *a11 = 0;
      if ( (a5 & 0x2000000) == 0 || (*(_DWORD *)(v26 + 200) & 0x4000) == 0 || HIDWORD(v137) > 0x2000 )
        goto LABEL_38;
    }
    v116 = 1;
  }
LABEL_38:
  if ( !SepRmEnforceCap )
    goto LABEL_39;
  v81 = *(_WORD *)(a1 + 2);
  if ( (v81 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_39;
  if ( v81 >= 0 )
  {
    v83 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v82 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v82 )
    {
      v134 = 0LL;
      goto LABEL_39;
    }
    v83 = v82 + a1;
  }
  v134 = v83;
  if ( v83 && (ScopedPolicySid = (void *)SepGetScopedPolicySid(v83)) != 0LL )
  {
    Cap = SepRmReferenceFindCap(ScopedPolicySid);
    v86 = v129;
    v87 = Cap < 0;
    v31 = 1;
    if ( v87 )
      v86 = SepRmDefaultCap;
    v115 = 1;
    v129 = v86;
  }
  else
  {
LABEL_39:
    v31 = 0;
  }
  v32 = a2 & 1;
  if ( v32 && (a5 & 0x2060000) == 0 && !v31 )
    goto LABEL_67;
  if ( *(__int16 *)(a1 + 2) < 0 )
  {
    v60 = *(unsigned int *)(a1 + 4);
    if ( (_DWORD)v60 )
      v33 = (unsigned __int8 *)(v60 + a1);
    else
      v33 = 0LL;
  }
  else
  {
    v33 = *(unsigned __int8 **)(a1 + 8);
  }
  v34 = v26 + 232;
  if ( v26 == -232 || !v33 )
    goto LABEL_66;
  v35 = v33[1];
  v36 = 0;
  v37 = *(_WORD *)v33;
  v122 = *(_WORD *)v33;
  v151 = 0;
  v38 = v33[4 * v35 + 4];
  v39 = 4 * v35 + 8;
  v126 = v39;
  v40 = *(_QWORD *)(v34 + 8LL * (v38 & 0xF) + 16) & *(_QWORD *)(v34 + 8LL * ((v38 >> 4) + 16) + 16);
  v131 = v40;
  if ( !v40 )
    goto LABEL_65;
  while ( 2 )
  {
    LOBYTE(v41) = v40;
    v125 = (unsigned __int8)v40;
    if ( !(_BYTE)v40 )
      goto LABEL_105;
    v42 = *(_WORD **)(v34 + 8);
    v43 = v36;
    v128 = v36;
    i = v42;
    while ( 2 )
    {
      v118 = SidHashByteToIndexLookupTable[(unsigned __int8)v41];
      v142 = &v42[8 * v43 + 8 * v118];
      if ( **(_WORD **)v142 == v37 )
      {
        if ( !memcmp(v33, *(const void **)v142, v39) )
        {
LABEL_50:
          if ( v142 == *(_WORD **)(v26 + 240) && (*((_DWORD *)v142 + 2) & 0x10) == 0 || (*((_DWORD *)v142 + 2) & 4) != 0 )
          {
            v44 = 1;
            v152 = 1;
            if ( *(_DWORD *)(v26 + 128) )
            {
              v44 = SepSidInTokenSidHash(v26 + 504, 0LL, v33, 0, 1, 0);
              v152 = v44;
            }
          }
          else
          {
            v44 = 0;
            v152 = 0;
          }
          if ( !v44 || (a5 & 0x2060000) == 0 )
          {
LABEL_108:
            v49 = a6;
            v48 = v124;
            v31 = v115;
            goto LABEL_69;
          }
          if ( !v32 )
          {
            v45 = *(_WORD *)(a1 + 2);
            if ( (v45 & 4) != 0 )
            {
              if ( v45 >= 0 )
              {
                v46 = *(_QWORD *)(a1 + 32);
              }
              else
              {
                v62 = *(unsigned int *)(a1 + 16);
                if ( (_DWORD)v62 )
                  v46 = v62 + a1;
                else
                  v46 = 0LL;
              }
            }
            else
            {
              v46 = 0LL;
            }
            SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
            i = SeOwnerRightsSid;
            if ( v46 )
            {
              v63 = (unsigned __int8 *)(v46 + 8);
              v118 = *(unsigned __int16 *)(v46 + 4);
              v64 = 0;
              if ( v118 )
              {
                v65 = 104928;
                do
                {
                  if ( (v63[1] & 8) == 0 )
                  {
                    v66 = *v63;
                    if ( *v63 <= 0x10u && _bittest(&v65, v66) )
                    {
                      v67 = 16LL * (*((_DWORD *)v63 + 2) & 1) + ((8LL * (*((_DWORD *)v63 + 2) & 2)) | 0xC);
                    }
                    else if ( v66 == 4 )
                    {
                      v67 = 12LL;
                    }
                    else
                    {
                      if ( v66 >= 0xBu && (unsigned __int8)(v66 - 13) > 1u )
                        goto LABEL_122;
                      v67 = 8LL;
                    }
                    v68 = &v63[v67];
                    if ( v68 && *(_WORD *)v68 == *SeOwnerRightsSid )
                    {
                      if ( !memcmp(v68, SeOwnerRightsSid, 4 * (unsigned int)v68[1] + 8) )
                      {
                        v44 = v152;
                        goto LABEL_108;
                      }
                      SeOwnerRightsSid = i;
                      v65 = 104928;
                    }
                  }
LABEL_122:
                  ++v64;
                  v63 += *((unsigned __int16 *)v63 + 1);
                }
                while ( v64 < v118 );
              }
            }
            v44 = v152;
          }
          v48 = 393216;
          if ( (a5 & 0x2000000) == 0 )
            v48 = a5 & 0x60000;
          v31 = v115;
          v49 = a6 | v48;
          v17 = a5 & 0xFFF9FFFF;
          if ( !v115 )
            goto LABEL_68;
          goto LABEL_69;
        }
        v37 = v122;
        v39 = v126;
      }
      v43 = v128;
      v41 = (unsigned __int8)v125 ^ (1 << v118);
      v42 = i;
      v125 = v41;
      if ( (_BYTE)v41 )
        continue;
      break;
    }
    v40 = v131;
    v34 = v26 + 232;
    v36 = v151;
LABEL_105:
    v36 += 8;
    v40 >>= 8;
    v151 = v36;
    v131 = v40;
    if ( v40 )
      continue;
    break;
  }
LABEL_65:
  v118 = *(_DWORD *)v34;
  if ( v118 > 0x40 )
  {
    v88 = 64;
    v155 = 64;
    v89 = *(_WORD **)(v34 + 8);
    for ( i = v89; ; v89 = i )
    {
      v142 = &v89[8 * v88];
      if ( **(_WORD **)v142 == v37 )
      {
        if ( !memcmp(v33, *(const void **)v142, v39) )
          goto LABEL_50;
        v88 = v155;
        v37 = v122;
        v39 = v126;
      }
      v155 = ++v88;
      if ( v88 >= v118 )
        break;
    }
  }
LABEL_66:
  v31 = v115;
LABEL_67:
  v48 = v124;
  v49 = a6;
LABEL_68:
  v44 = 0;
  v152 = 0;
LABEL_69:
  if ( !v17 && !v31 && ((*(_DWORD *)(v26 + 200) & 0x2000) != 0 || !v48) )
  {
    if ( !a4 )
      SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    *a10 = v49;
    *a11 = 0;
    return 1;
  }
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  v50 = *(_QWORD *)a3;
  v51 = *((_QWORD *)a3 + 2);
  v141 = 0;
  LODWORD(v138) = v48;
  LOBYTE(v122) = SepAccessCheck(
                   a1,
                   0,
                   v51,
                   v50,
                   v17,
                   0LL,
                   0,
                   a8,
                   v49,
                   a9,
                   (__int64)a10,
                   (__int64)a7,
                   (__int64)a11,
                   0,
                   v44,
                   (__int64)&v138,
                   (__int64)&P,
                   (__int64)v117,
                   0LL);
  if ( !SepRmEnforceCap || (v90 = *a11, v126 = v90, v90 < 0) || !v115 )
  {
    v54 = v117[0];
    v55 = a10;
    goto LABEL_72;
  }
  v91 = v129;
  v148 = 0;
  LOBYTE(v124) = 0;
  v52 = (unsigned int)*a10;
  v92 = 0;
  v125 = *a10;
  v128 = 0;
  if ( !*(_DWORD *)(v129 + 60) )
  {
LABEL_268:
    v55 = a10;
    *a11 = v90;
    v54 = v117[0];
    *a10 &= v52;
    if ( *a11 < 0 )
      v54 = 0;
LABEL_72:
    v147 = v54;
    if ( !v121 && (v17 & 0x2000000) != 0 )
    {
      if ( (!v116 || !*(_WORD *)((char *)&v140 + 5)) && (_DWORD)v137 && (!BYTE4(v136) || !BYTE5(v136) || !BYTE6(v136)) )
      {
        v71 = v136 & *v55;
        if ( v71 != *v55 )
        {
          *v55 = v71;
          if ( !v71 )
          {
            *a11 = -1073741790;
            goto LABEL_155;
          }
          *a11 = 0;
          v147 = 1;
        }
      }
    }
    else if ( v116 && !*(_WORD *)((char *)&v140 + 5) )
    {
      *a11 = -1073741790;
      *v55 = 0;
LABEL_155:
      v147 = 0;
    }
    LOBYTE(v53) = 0;
    if ( (v17 & 0x2000000) != 0 )
    {
      if ( v14 != -1 )
      {
        v112 = v14 & *v55;
        if ( v112 != *v55 )
        {
          *v55 = v112;
          LOBYTE(v53) = 1;
          if ( v112 )
          {
            *a11 = 0;
            v147 = 1;
          }
          else
          {
            *a11 = -1073741790;
            v147 = 0;
          }
        }
      }
      v56 = 0;
      if ( v143 != -1 )
      {
        v52 = v143 & (unsigned int)*v55;
        if ( (_DWORD)v52 != *v55 )
        {
          *v55 = v52;
          v56 = 1;
          if ( (_DWORD)v52 )
          {
            *a11 = 0;
            v147 = 1;
          }
          else
          {
            *a11 = -1073741790;
            v147 = 0;
          }
        }
      }
    }
    else
    {
      v56 = 0;
    }
    if ( !v26 )
    {
LABEL_83:
      if ( v115 )
      {
        v114 = *(_QWORD *)(v129 + 32);
        if ( v114 )
          SepRmDereferenceCapTable(v114, v52, v55, v53);
      }
      if ( !a4 )
        SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
      v58 = P;
      if ( P )
      {
        AuthzBasepFreeSecurityAttributesList(P);
        ExFreePoolWithTag(v58, 0);
      }
      return v147 && (_BYTE)v122;
    }
    if ( (_BYTE)v53 || v56 )
    {
      v57 = HIDWORD(v139);
    }
    else
    {
      v57 = HIDWORD(v139);
      if ( HIDWORD(v139) || (*(_DWORD *)(v26 + 200) & 0x4000) == 0 )
        goto LABEL_82;
      if ( *a11 < 0 )
      {
LABEL_137:
        v149 = 0;
LABEL_138:
        v150 = *((_QWORD *)a3 + 2);
        v153 = *(_QWORD *)a3;
        if ( *(_QWORD *)a3 )
        {
          RtlSidDominatesForTrust(*(_QWORD *)(*((_QWORD *)a3 + 2) + 1104LL), *(_QWORD *)(*(_QWORD *)a3 + 1104LL), v123);
          if ( v123[0] )
            v70 = v153;
          else
            v70 = v150;
        }
        else
        {
          v70 = *((_QWORD *)a3 + 2);
        }
        SeLogAccessFailure(v26, v52, (_DWORD)v55, *(_QWORD *)(v70 + 1104), a1, v49 | v17, v149);
LABEL_82:
        if ( *a11 < 0 && !v57 && (*(_DWORD *)(v26 + 200) & 0x4000) != 0 )
        {
          if ( (_BYTE)v141 )
          {
            v113 = v17 & ~(HIDWORD(v138) | (unsigned int)v139 | 0x2000000);
            if ( ((unsigned int)v113 & (unsigned int)v140) == (_DWORD)v113 )
              SepLogLpacAccessFailure(v113, v52, v55);
          }
        }
        goto LABEL_83;
      }
      if ( !HIBYTE(v140) )
        goto LABEL_82;
    }
    v149 = 1;
    if ( *a11 >= 0 )
      goto LABEL_138;
    goto LABEL_137;
  }
  while ( 2 )
  {
    v131 = *(_QWORD *)(v91 + 8LL * v92 + 64);
    if ( *(_QWORD *)(v131 + 24) )
    {
      v93 = P;
      if ( !P )
      {
        v94 = AuthzBasepInitializeResourceClaimsFromSacl(v134, (__int64 *)&P);
        v93 = P;
        v95 = (unsigned __int8)v124;
        if ( v94 < 0 )
          v95 = 1;
        v124 = v95;
      }
      v96 = *(_QWORD **)(v26 + 1096);
      if ( v96 )
      {
        v97 = (void *)v96[75];
        v98 = (void *)v96[73];
      }
      else
      {
        v97 = 0LL;
        v98 = 0LL;
      }
      v99 = v96 ? (void *)v96[74] : 0LL;
      v100 = v96 ? (void *)v96[72] : 0LL;
      v101 = AuthzBasepEvaluateAceCondition(
               (_DWORD *)v26,
               *(void **)(v26 + 776),
               v93,
               v100,
               v99,
               v98,
               v97,
               *(_DWORD **)(v131 + 24),
               *(_DWORD *)(v131 + 16),
               1u,
               0,
               &v130);
      v102 = v130;
      v118 = v101;
      if ( v130 != 1 )
      {
        if ( v101 < 0 )
        {
          if ( !a4 )
            goto LABEL_285;
          goto LABEL_286;
        }
        if ( (*(_DWORD *)(v26 + 200) & 0x10) != 0 )
        {
          v103 = *(_QWORD **)(v26 + 1096);
          if ( v103 )
          {
            v104 = (void *)v103[75];
            v105 = (void *)v103[73];
          }
          else
          {
            v104 = 0LL;
            v105 = 0LL;
          }
          if ( v103 )
            v106 = (void *)v103[74];
          else
            v106 = 0LL;
          if ( v103 )
            v107 = (void *)v103[72];
          else
            v107 = 0LL;
          v101 = AuthzBasepEvaluateAceCondition(
                   (_DWORD *)v26,
                   *(void **)(v26 + 776),
                   P,
                   v107,
                   v106,
                   v105,
                   v104,
                   *(_DWORD **)(v131 + 24),
                   *(_DWORD *)(v131 + 16),
                   1u,
                   1u,
                   &v130);
          v118 = v101;
          if ( v101 < 0 )
          {
            if ( a4 )
              goto LABEL_286;
LABEL_285:
            SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
            v101 = v118;
LABEL_286:
            if ( !*(_QWORD *)(v129 + 32) )
              goto LABEL_293;
LABEL_292:
            ((void (*)(void))SepRmDereferenceCapTable)();
            v101 = v118;
            goto LABEL_293;
          }
          v102 = v130;
        }
        if ( !(_BYTE)v124 && v102 != 1 )
        {
          v90 = v126;
          v52 = v125;
LABEL_267:
          v91 = v129;
          v92 = v128 + 1;
          v128 = v92;
          if ( v92 >= *(_DWORD *)(v129 + 60) )
            goto LABEL_268;
          continue;
        }
      }
    }
    break;
  }
  v101 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
  v118 = v101;
  if ( v101 >= 0 )
  {
    v108 = v17;
    if ( (*(_DWORD *)(v131 + 48) & 1) != 0 )
    {
      if ( (v17 & 0x2000000) == 0 )
        v108 = v49 | v17;
      v109 = 0;
    }
    else
    {
      v109 = v49;
    }
    v110 = SepAccessCheck(
             (unsigned int)SecurityDescriptor,
             0,
             *((_QWORD *)a3 + 2),
             *(_QWORD *)a3,
             v108,
             0LL,
             0,
             a8,
             v109,
             a9,
             (__int64)&v132,
             0LL,
             (__int64)&v133,
             0,
             v152,
             (__int64)&v138,
             (__int64)&P,
             (__int64)v117,
             0LL);
    v52 = v132 & v125;
    LOBYTE(v122) = v110;
    if ( !v148 )
      v52 = v132;
    v125 = v52;
    if ( !(_DWORD)v52 )
    {
      v90 = -1073741790;
      goto LABEL_268;
    }
    v90 = v133;
    v126 = v133;
    v148 = 1;
    if ( v133 < 0 )
      goto LABEL_268;
    goto LABEL_267;
  }
  if ( !a4 )
  {
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    v101 = v118;
  }
  if ( *(_QWORD *)(v129 + 32) )
    goto LABEL_292;
LABEL_293:
  *a10 = 0;
  v111 = P;
  *a11 = v101;
  SepFreeResourceInfo(v111);
  return 0;
}
