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
  void *v12; // rdi
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
  __int64 v70; // rax
  __int64 v71; // r9
  int v72; // ecx
  const void **v73; // rax
  NTSTATUS v74; // eax
  struct _SECURITY_SUBJECT_CONTEXT *v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rbx
  int TokenTrustLevel; // eax
  int v79; // edx
  int v80; // r8d
  __int64 v81; // rax
  __int16 v82; // cx
  __int64 v83; // rax
  ACL *v84; // rcx
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v87; // rdx
  bool v88; // sf
  unsigned int v89; // ecx
  _WORD *v90; // rdx
  int v91; // eax
  __int64 v92; // r8
  unsigned int v93; // ecx
  PVOID v94; // rcx
  int v95; // eax
  int v96; // edx
  _QWORD *v97; // rax
  void *v98; // r8
  void *v99; // r10
  void *v100; // rdx
  void *v101; // r9
  int v102; // eax
  int v103; // ecx
  _QWORD *v104; // rax
  void *v105; // rdx
  void *v106; // r8
  void *v107; // rcx
  void *v108; // r9
  int v109; // ecx
  int v110; // edx
  char v111; // al
  PVOID v112; // rcx
  int v113; // ecx
  __int64 v114; // rcx
  __int64 v115; // rcx
  char v116; // [rsp+A0h] [rbp-80h]
  char v117; // [rsp+A1h] [rbp-7Fh]
  _BYTE v118[2]; // [rsp+A2h] [rbp-7Eh] BYREF
  unsigned int v119; // [rsp+A4h] [rbp-7Ch]
  BOOLEAN v120; // [rsp+A8h] [rbp-78h] BYREF
  BOOLEAN DominatesTrust; // [rsp+A9h] [rbp-77h] BYREF
  bool v122; // [rsp+AAh] [rbp-76h]
  __int16 v123; // [rsp+ACh] [rbp-74h]
  BOOLEAN v124[2]; // [rsp+AEh] [rbp-72h] BYREF
  int v125; // [rsp+B0h] [rbp-70h]
  unsigned int v126; // [rsp+B4h] [rbp-6Ch]
  int v127; // [rsp+B8h] [rbp-68h]
  PVOID P; // [rsp+C0h] [rbp-60h] BYREF
  int v129; // [rsp+C8h] [rbp-58h]
  __int64 v130; // [rsp+D0h] [rbp-50h]
  int v131; // [rsp+D8h] [rbp-48h] BYREF
  unsigned __int64 v132; // [rsp+E0h] [rbp-40h]
  unsigned int v133; // [rsp+E8h] [rbp-38h] BYREF
  int v134; // [rsp+ECh] [rbp-34h] BYREF
  ACL *v135; // [rsp+F0h] [rbp-30h]
  _WORD *i; // [rsp+F8h] [rbp-28h]
  __int64 v137; // [rsp+100h] [rbp-20h] BYREF
  __int64 v138; // [rsp+108h] [rbp-18h]
  __int64 v139; // [rsp+110h] [rbp-10h] BYREF
  __int64 v140; // [rsp+118h] [rbp-8h]
  __int64 v141; // [rsp+120h] [rbp+0h]
  int v142; // [rsp+128h] [rbp+8h]
  const void **v143; // [rsp+130h] [rbp+10h]
  int v144; // [rsp+138h] [rbp+18h] BYREF
  _QWORD SecurityDescriptor[12]; // [rsp+140h] [rbp+20h] BYREF
  char v148; // [rsp+1E0h] [rbp+C0h]
  char v149; // [rsp+1E0h] [rbp+C0h]
  char v150; // [rsp+1F0h] [rbp+D0h]
  __int64 v151; // [rsp+1F8h] [rbp+D8h]
  unsigned __int8 v152; // [rsp+200h] [rbp+E0h]
  char v153; // [rsp+200h] [rbp+E0h]
  __int64 v154; // [rsp+200h] [rbp+E0h]
  int v155; // [rsp+200h] [rbp+E0h]
  int v156; // [rsp+200h] [rbp+E0h]

  LODWORD(v12) = 0;
  v135 = 0LL;
  v130 = 0LL;
  v14 = -1;
  v137 = 0LL;
  v138 = 0LL;
  memset(SecurityDescriptor, 0, 40);
  v116 = 0;
  *a10 = 0;
  *a11 = -1073741790;
  v125 = 0;
  P = 0LL;
  v133 = 0;
  v134 = -1073741790;
  v144 = -1;
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
  DominatesTrust = 0;
  v120 = 0;
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
  if ( !v21 || (v12 = (void *)(v21 + 8), v155 = *(_DWORD *)(v21 + 4), v21 == -8) )
  {
LABEL_20:
    v14 = -1;
    *a11 = (int)v12;
  }
  else
  {
    if ( !*(_QWORD *)a3 )
      goto LABEL_175;
    v76 = *((_QWORD *)a3 + 2);
    v143 = *(const void ***)(*(_QWORD *)a3 + 1104LL);
    v74 = RtlSidDominatesForTrust(*(PSID *)(v76 + 1104), v143, &v120);
    if ( v74 >= 0 )
    {
      if ( v120 )
        v73 = v143;
      else
LABEL_175:
        v73 = *(const void ***)(*((_QWORD *)a3 + 2) + 1104LL);
      v74 = RtlSidDominatesForTrust(v73, v12, &DominatesTrust);
      if ( v74 >= 0 )
      {
        if ( DominatesTrust )
          v14 = -1;
        else
          v14 = v155 | 0x1000000;
      }
    }
    *a11 = v74;
    if ( v74 < 0 )
    {
      if ( a4 )
        return 0;
      v75 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
LABEL_200:
      SeUnlockSubjectContext(v75);
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
    v77 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
      v77 = *((_QWORD *)a3 + 2);
    TokenTrustLevel = SepLocateTokenTrustLevel(a3, 3221225506LL, v19);
    SeLogAccessFailure(v77, v79, v80, TokenTrustLevel, a1, a6 | a5, 0);
    if ( a4 )
      return 0;
    v75 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
    goto LABEL_200;
  }
  v26 = *(_QWORD *)a3;
  if ( !v26 )
    v26 = *((_QWORD *)a3 + 2);
  if ( (a2 & 4) == 0 )
  {
    v27 = SepFilterCheck(a1, (unsigned int)&P, v26, 0, (__int64)&v144);
    *a11 = v27;
    if ( v27 >= 0 )
    {
      if ( (v144 & v24) == v24 )
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
    v75 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
    goto LABEL_200;
  }
LABEL_30:
  v29 = (a2 & 2) != 0 && (*(_DWORD *)(v26 + 200) & 0x2000) != 0;
  v122 = v29;
  v117 = 0;
  if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(v26 + 200) & 0x20) == 0 )
  {
    v81 = *(_QWORD *)(v26 + 216);
    if ( v81 )
    {
      if ( (*(_DWORD *)(v81 + 32) & 0x20) != 0 )
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
    v30 = SepMandatoryIntegrityCheck(a8, a1, v19, v26, 0, (__int64)&v137);
    *a11 = v30;
    if ( v30 < 0 )
      goto LABEL_190;
    if ( (_DWORD)v138 && ((unsigned int)v137 & v24) != v24 )
    {
      *a11 = -1073741790;
      if ( (*(_DWORD *)(v26 + 200) & 0x4000) == 0 || HIDWORD(v138) > 0x2000 )
        goto LABEL_190;
    }
    else
    {
      *a11 = 0;
      if ( (a5 & 0x2000000) == 0 || (*(_DWORD *)(v26 + 200) & 0x4000) == 0 || HIDWORD(v138) > 0x2000 )
        goto LABEL_38;
    }
    v117 = 1;
  }
LABEL_38:
  if ( !SepRmEnforceCap )
    goto LABEL_39;
  v82 = *(_WORD *)(a1 + 2);
  if ( (v82 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_39;
  if ( v82 >= 0 )
  {
    v84 = *(ACL **)(a1 + 24);
  }
  else
  {
    v83 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v83 )
    {
      v135 = 0LL;
      goto LABEL_39;
    }
    v84 = (ACL *)(v83 + a1);
  }
  v135 = v84;
  if ( v84 && (ScopedPolicySid = (void *)SepGetScopedPolicySid(v84)) != 0LL )
  {
    Cap = SepRmReferenceFindCap(ScopedPolicySid);
    v87 = v130;
    v88 = Cap < 0;
    v31 = 1;
    if ( v88 )
      v87 = SepRmDefaultCap;
    v116 = 1;
    v130 = v87;
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
  v123 = *(_WORD *)v33;
  v152 = 0;
  v38 = v33[4 * v35 + 4];
  v39 = 4 * v35 + 8;
  v127 = v39;
  v40 = *(_QWORD *)(v34 + 8LL * (v38 & 0xF) + 16) & *(_QWORD *)(v34 + 8LL * ((v38 >> 4) + 16) + 16);
  v132 = v40;
  if ( !v40 )
    goto LABEL_65;
  while ( 2 )
  {
    LOBYTE(v41) = v40;
    v126 = (unsigned __int8)v40;
    if ( !(_BYTE)v40 )
      goto LABEL_105;
    v42 = *(_WORD **)(v34 + 8);
    v43 = v36;
    v129 = v36;
    i = v42;
    while ( 2 )
    {
      v119 = SidHashByteToIndexLookupTable[(unsigned __int8)v41];
      v143 = (const void **)&v42[8 * v43 + 8 * v119];
      if ( *(_WORD *)*v143 == v37 )
      {
        if ( !memcmp(v33, *v143, v39) )
        {
LABEL_50:
          if ( v143 == *(const void ***)(v26 + 240) && ((_DWORD)v143[1] & 0x10) == 0 || ((_DWORD)v143[1] & 4) != 0 )
          {
            v44 = 1;
            v153 = 1;
            if ( *(_DWORD *)(v26 + 128) )
            {
              v44 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v26 + 504), 0LL, v33, 0, 1, 0);
              v153 = v44;
            }
          }
          else
          {
            v44 = 0;
            v153 = 0;
          }
          if ( !v44 || (a5 & 0x2060000) == 0 )
          {
LABEL_108:
            v49 = a6;
            v48 = v125;
            v31 = v116;
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
              v119 = *(unsigned __int16 *)(v46 + 4);
              v64 = 0;
              if ( v119 )
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
                        v44 = v153;
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
                while ( v64 < v119 );
              }
            }
            v44 = v153;
          }
          v48 = 393216;
          if ( (a5 & 0x2000000) == 0 )
            v48 = a5 & 0x60000;
          v31 = v116;
          v49 = a6 | v48;
          v17 = a5 & 0xFFF9FFFF;
          if ( !v116 )
            goto LABEL_68;
          goto LABEL_69;
        }
        v37 = v123;
        v39 = v127;
      }
      v43 = v129;
      v41 = (unsigned __int8)v126 ^ (1 << v119);
      v42 = i;
      v126 = v41;
      if ( (_BYTE)v41 )
        continue;
      break;
    }
    v40 = v132;
    v34 = v26 + 232;
    v36 = v152;
LABEL_105:
    v36 += 8;
    v40 >>= 8;
    v152 = v36;
    v132 = v40;
    if ( v40 )
      continue;
    break;
  }
LABEL_65:
  v119 = *(_DWORD *)v34;
  if ( v119 > 0x40 )
  {
    v89 = 64;
    v156 = 64;
    v90 = *(_WORD **)(v34 + 8);
    for ( i = v90; ; v90 = i )
    {
      v143 = (const void **)&v90[8 * v89];
      if ( *(_WORD *)*v143 == v37 )
      {
        if ( !memcmp(v33, *v143, v39) )
          goto LABEL_50;
        v89 = v156;
        v37 = v123;
        v39 = v127;
      }
      v156 = ++v89;
      if ( v89 >= v119 )
        break;
    }
  }
LABEL_66:
  v31 = v116;
LABEL_67:
  v48 = v125;
  v49 = a6;
LABEL_68:
  v44 = 0;
  v153 = 0;
LABEL_69:
  if ( !v17 && !v31 && ((*(_DWORD *)(v26 + 200) & 0x2000) != 0 || !v48) )
  {
    if ( !a4 )
      SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    *a10 = v49;
    *a11 = 0;
    return 1;
  }
  v139 = 0LL;
  v140 = 0LL;
  v141 = 0LL;
  v50 = *(_QWORD *)a3;
  v51 = *((_QWORD *)a3 + 2);
  v142 = 0;
  LODWORD(v139) = v48;
  LOBYTE(v123) = SepAccessCheck(
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
                   (__int64)&v139,
                   (__int64)&P,
                   (__int64)v118,
                   0LL);
  if ( !SepRmEnforceCap || (v91 = *a11, v127 = v91, v91 < 0) || !v116 )
  {
    v54 = v118[0];
    v55 = a10;
    goto LABEL_72;
  }
  v92 = v130;
  v149 = 0;
  LOBYTE(v125) = 0;
  v52 = (unsigned int)*a10;
  v93 = 0;
  v126 = *a10;
  v129 = 0;
  if ( !*(_DWORD *)(v130 + 60) )
  {
LABEL_268:
    v55 = a10;
    *a11 = v91;
    v54 = v118[0];
    *a10 &= v52;
    if ( *a11 < 0 )
      v54 = 0;
LABEL_72:
    v148 = v54;
    if ( !v122 && (v17 & 0x2000000) != 0 )
    {
      if ( (!v117 || !*(_WORD *)((char *)&v141 + 5)) && (_DWORD)v138 && (!BYTE4(v137) || !BYTE5(v137) || !BYTE6(v137)) )
      {
        v72 = v137 & *v55;
        if ( v72 != *v55 )
        {
          *v55 = v72;
          if ( !v72 )
          {
            *a11 = -1073741790;
            goto LABEL_155;
          }
          *a11 = 0;
          v148 = 1;
        }
      }
    }
    else if ( v117 && !*(_WORD *)((char *)&v141 + 5) )
    {
      *a11 = -1073741790;
      *v55 = 0;
LABEL_155:
      v148 = 0;
    }
    LOBYTE(v53) = 0;
    if ( (v17 & 0x2000000) != 0 )
    {
      if ( v14 != -1 )
      {
        v113 = v14 & *v55;
        if ( v113 != *v55 )
        {
          *v55 = v113;
          LOBYTE(v53) = 1;
          if ( v113 )
          {
            *a11 = 0;
            v148 = 1;
          }
          else
          {
            *a11 = -1073741790;
            v148 = 0;
          }
        }
      }
      v56 = 0;
      if ( v144 != -1 )
      {
        v52 = v144 & (unsigned int)*v55;
        if ( (_DWORD)v52 != *v55 )
        {
          *v55 = v52;
          v56 = 1;
          if ( (_DWORD)v52 )
          {
            *a11 = 0;
            v148 = 1;
          }
          else
          {
            *a11 = -1073741790;
            v148 = 0;
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
      if ( v116 )
      {
        v115 = *(_QWORD *)(v130 + 32);
        if ( v115 )
          SepRmDereferenceCapTable(v115, v52, v55, v53);
      }
      if ( !a4 )
        SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
      v58 = P;
      if ( P )
      {
        AuthzBasepFreeSecurityAttributesList(P);
        ExFreePoolWithTag(v58, 0);
      }
      return v148 && (_BYTE)v123;
    }
    if ( (_BYTE)v53 || v56 )
    {
      v57 = HIDWORD(v140);
    }
    else
    {
      v57 = HIDWORD(v140);
      if ( HIDWORD(v140) || (*(_DWORD *)(v26 + 200) & 0x4000) == 0 )
        goto LABEL_82;
      if ( *a11 < 0 )
      {
LABEL_137:
        v150 = 0;
LABEL_138:
        v70 = *((_QWORD *)a3 + 2);
        v151 = v70;
        v154 = *(_QWORD *)a3;
        if ( *(_QWORD *)a3 )
        {
          RtlSidDominatesForTrust(*(PSID *)(v70 + 1104), *(PSID *)(*(_QWORD *)a3 + 1104LL), v124);
          if ( v124[0] )
            v71 = v154;
          else
            v71 = v151;
        }
        else
        {
          v71 = *((_QWORD *)a3 + 2);
        }
        SeLogAccessFailure(v26, v52, (_DWORD)v55, *(_QWORD *)(v71 + 1104), a1, v49 | v17, v150);
LABEL_82:
        if ( *a11 < 0 && !v57 && (*(_DWORD *)(v26 + 200) & 0x4000) != 0 )
        {
          if ( (_BYTE)v142 )
          {
            v114 = v17 & ~(HIDWORD(v139) | (unsigned int)v140 | 0x2000000);
            if ( ((unsigned int)v114 & (unsigned int)v141) == (_DWORD)v114 )
              SepLogLpacAccessFailure(v114, v52, v55);
          }
        }
        goto LABEL_83;
      }
      if ( !HIBYTE(v141) )
        goto LABEL_82;
    }
    v150 = 1;
    if ( *a11 >= 0 )
      goto LABEL_138;
    goto LABEL_137;
  }
  while ( 2 )
  {
    v132 = *(_QWORD *)(v92 + 8LL * v93 + 64);
    if ( *(_QWORD *)(v132 + 24) )
    {
      v94 = P;
      if ( !P )
      {
        v95 = AuthzBasepInitializeResourceClaimsFromSacl((__int64)v135, (__int64 *)&P);
        v94 = P;
        v96 = (unsigned __int8)v125;
        if ( v95 < 0 )
          v96 = 1;
        v125 = v96;
      }
      v97 = *(_QWORD **)(v26 + 1096);
      if ( v97 )
      {
        v98 = (void *)v97[75];
        v99 = (void *)v97[73];
      }
      else
      {
        v98 = 0LL;
        v99 = 0LL;
      }
      v100 = v97 ? (void *)v97[74] : 0LL;
      v101 = v97 ? (void *)v97[72] : 0LL;
      v102 = AuthzBasepEvaluateAceCondition(
               (_DWORD *)v26,
               *(void **)(v26 + 776),
               v94,
               v101,
               v100,
               v99,
               v98,
               *(_DWORD **)(v132 + 24),
               *(_DWORD *)(v132 + 16),
               1u,
               0,
               &v131);
      v103 = v131;
      v119 = v102;
      if ( v131 != 1 )
      {
        if ( v102 < 0 )
        {
          if ( !a4 )
            goto LABEL_285;
          goto LABEL_286;
        }
        if ( (*(_DWORD *)(v26 + 200) & 0x10) != 0 )
        {
          v104 = *(_QWORD **)(v26 + 1096);
          if ( v104 )
          {
            v105 = (void *)v104[75];
            v106 = (void *)v104[73];
          }
          else
          {
            v105 = 0LL;
            v106 = 0LL;
          }
          if ( v104 )
            v107 = (void *)v104[74];
          else
            v107 = 0LL;
          if ( v104 )
            v108 = (void *)v104[72];
          else
            v108 = 0LL;
          v102 = AuthzBasepEvaluateAceCondition(
                   (_DWORD *)v26,
                   *(void **)(v26 + 776),
                   P,
                   v108,
                   v107,
                   v106,
                   v105,
                   *(_DWORD **)(v132 + 24),
                   *(_DWORD *)(v132 + 16),
                   1u,
                   1u,
                   &v131);
          v119 = v102;
          if ( v102 < 0 )
          {
            if ( a4 )
              goto LABEL_286;
LABEL_285:
            SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
            v102 = v119;
LABEL_286:
            if ( !*(_QWORD *)(v130 + 32) )
              goto LABEL_293;
LABEL_292:
            ((void (*)(void))SepRmDereferenceCapTable)();
            v102 = v119;
            goto LABEL_293;
          }
          v103 = v131;
        }
        if ( !(_BYTE)v125 && v103 != 1 )
        {
          v91 = v127;
          v52 = v126;
LABEL_267:
          v92 = v130;
          v93 = v129 + 1;
          v129 = v93;
          if ( v93 >= *(_DWORD *)(v130 + 60) )
            goto LABEL_268;
          continue;
        }
      }
    }
    break;
  }
  v102 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
  v119 = v102;
  if ( v102 >= 0 )
  {
    v109 = v17;
    if ( (*(_DWORD *)(v132 + 48) & 1) != 0 )
    {
      if ( (v17 & 0x2000000) == 0 )
        v109 = v49 | v17;
      v110 = 0;
    }
    else
    {
      v110 = v49;
    }
    v111 = SepAccessCheck(
             (unsigned int)SecurityDescriptor,
             0,
             *((_QWORD *)a3 + 2),
             *(_QWORD *)a3,
             v109,
             0LL,
             0,
             a8,
             v110,
             a9,
             (__int64)&v133,
             0LL,
             (__int64)&v134,
             0,
             v153,
             (__int64)&v139,
             (__int64)&P,
             (__int64)v118,
             0LL);
    v52 = v133 & v126;
    LOBYTE(v123) = v111;
    if ( !v149 )
      v52 = v133;
    v126 = v52;
    if ( !(_DWORD)v52 )
    {
      v91 = -1073741790;
      goto LABEL_268;
    }
    v91 = v134;
    v127 = v134;
    v149 = 1;
    if ( v134 < 0 )
      goto LABEL_268;
    goto LABEL_267;
  }
  if ( !a4 )
  {
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    v102 = v119;
  }
  if ( *(_QWORD *)(v130 + 32) )
    goto LABEL_292;
LABEL_293:
  *a10 = 0;
  v112 = P;
  *a11 = v102;
  SepFreeResourceInfo(v112);
  return 0;
}
