/*
 * XREFs of SeAccessCheckWithHintWithAdminlessChecks @ 0x140100CF0
 * Callers:
 *     SeAccessCheckWithHint @ 0x1400D47B0 (SeAccessCheckWithHint.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x140044F30 (AuthzBasepEvaluateAceCondition.c)
 *     SepLocateTokenTrustLevel @ 0x14005C9F4 (SepLocateTokenTrustLevel.c)
 *     SepSidInTokenSidHash @ 0x14005E750 (SepSidInTokenSidHash.c)
 *     SepFreeResourceInfo @ 0x140062FE4 (SepFreeResourceInfo.c)
 *     SeLogAccessFailure @ 0x1400B1D20 (SeLogAccessFailure.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400BBECC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400E2B70 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlSidDominatesForTrust @ 0x1400EF700 (RtlSidDominatesForTrust.c)
 *     SepMandatoryIntegrityCheck @ 0x1401018A0 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x140101D80 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x140101F00 (SepAccessCheck.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14029FA3C (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x14029FB94 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x14029FDD4 (SepLogLpacAccessFailure.c)
 *     SepRmDereferenceCapTable @ 0x14029FF18 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x1402A1BE0 (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SeLockSubjectContext @ 0x1405A4DC0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405A5520 (SeUnlockSubjectContext.c)
 */

bool __fastcall SeAccessCheckWithHintWithAdminlessChecks(
        ULONGLONG a1,
        char a2,
        int *a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        _QWORD *a7,
        __int64 a8,
        char a9,
        unsigned int *a10,
        NTSTATUS *a11,
        char a12)
{
  unsigned int v12; // r14d
  int v13; // ebx
  __int16 v17; // r9
  __int64 v18; // r8
  ULONGLONG v19; // rax
  ULONGLONG v20; // rcx
  unsigned int v21; // r10d
  void *v22; // rdi
  int v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // ecx
  __int64 v26; // rsi
  int v27; // eax
  __int64 v28; // rdx
  bool v29; // dl
  char v30; // cl
  int v31; // eax
  char v32; // dl
  char v33; // r15
  unsigned __int8 *v34; // rdi
  unsigned int *v35; // rbx
  int v36; // eax
  __int16 v37; // dx
  size_t v38; // r8
  unsigned int v39; // eax
  unsigned __int64 v40; // r12
  int v41; // ecx
  unsigned int v42; // eax
  char v43; // r12
  unsigned int v44; // r8d
  int v45; // ebx
  __int64 v46; // rdx
  char v47; // bl
  __int64 v48; // r9
  _DWORD *v49; // r15
  char v50; // di
  int *v51; // r12
  unsigned int *v52; // r8
  char v53; // r10
  int v54; // ebx
  bool result; // al
  int v56; // eax
  __int64 v57; // r9
  const void **v58; // rax
  const void **v59; // r12
  __int16 v60; // ax
  ULONGLONG v61; // rcx
  _WORD *SeOwnerRightsSid; // r15
  int v63; // ecx
  int v64; // ecx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned __int8 *v68; // rbx
  unsigned int v69; // edi
  int v70; // edx
  unsigned __int8 v71; // cl
  __int64 v72; // rcx
  char *v73; // rcx
  __int64 v74; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *v75; // rcx
  unsigned int v76; // ecx
  unsigned int *v77; // rax
  NTSTATUS v78; // eax
  __int64 v79; // rcx
  char v80; // r14
  ULONGLONG TokenTrustLevel; // rax
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // rax
  __int16 v85; // cx
  __int64 v86; // rax
  ACL *v87; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v90; // rdx
  __int64 v91; // r9
  unsigned int v92; // ecx
  int v93; // eax
  __int64 v94; // r8
  int v95; // ecx
  unsigned int *v96; // r8
  int v97; // eax
  int v98; // r9d
  _QWORD *v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // r9
  __int64 v103; // r10
  int v104; // eax
  __int64 v105; // rdx
  __int64 v106; // r8
  int v107; // ecx
  _QWORD *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // r10
  __int64 v113; // rdx
  int v114; // ebx
  __int64 v115; // r8
  int v116; // edx
  int v117; // r8d
  __int64 v118; // rcx
  __int64 v119; // rcx
  char v120; // [rsp+28h] [rbp-F8h]
  char v121; // [rsp+A0h] [rbp-80h]
  BOOLEAN v122; // [rsp+A1h] [rbp-7Fh] BYREF
  char v123; // [rsp+A2h] [rbp-7Eh]
  char v124; // [rsp+A3h] [rbp-7Dh] BYREF
  int v125; // [rsp+A4h] [rbp-7Ch]
  bool v126; // [rsp+A8h] [rbp-78h]
  int v127; // [rsp+ACh] [rbp-74h]
  BOOLEAN v128[4]; // [rsp+B0h] [rbp-70h] BYREF
  int v129; // [rsp+B4h] [rbp-6Ch]
  BOOLEAN DominatesTrust[4]; // [rsp+B8h] [rbp-68h] BYREF
  int v131; // [rsp+BCh] [rbp-64h]
  int v132; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int *v133; // [rsp+C8h] [rbp-58h]
  unsigned int v134; // [rsp+D0h] [rbp-50h]
  PVOID P; // [rsp+D8h] [rbp-48h] BYREF
  int v136; // [rsp+E0h] [rbp-40h]
  __int64 v137; // [rsp+E8h] [rbp-38h]
  int v138; // [rsp+F0h] [rbp-30h] BYREF
  int v139; // [rsp+F4h] [rbp-2Ch] BYREF
  ACL *v140; // [rsp+F8h] [rbp-28h]
  __int64 v141; // [rsp+100h] [rbp-20h] BYREF
  __int64 v142; // [rsp+108h] [rbp-18h]
  __int64 v143; // [rsp+110h] [rbp-10h] BYREF
  __int64 v144; // [rsp+118h] [rbp-8h]
  __int64 v145; // [rsp+120h] [rbp+0h]
  int v146; // [rsp+128h] [rbp+8h]
  int v147; // [rsp+130h] [rbp+10h] BYREF
  __int64 i; // [rsp+138h] [rbp+18h]
  const void **v149; // [rsp+140h] [rbp+20h]
  _QWORD SecurityDescriptor[11]; // [rsp+148h] [rbp+28h] BYREF
  char v153; // [rsp+1E0h] [rbp+C0h]
  unsigned __int8 v154; // [rsp+1F0h] [rbp+D0h]
  __int64 v155; // [rsp+1F8h] [rbp+D8h]
  __int64 v156; // [rsp+200h] [rbp+E0h]

  v12 = a5;
  v13 = -1;
  v141 = 0LL;
  v142 = 0LL;
  v140 = 0LL;
  v125 = a6;
  *a10 = 0;
  *a11 = -1073741790;
  memset(SecurityDescriptor, 0, 40);
  v137 = 0LL;
  v121 = 0;
  v127 = 0;
  P = 0LL;
  v138 = 0;
  v139 = -1073741790;
  v136 = -1;
  v147 = -1;
  if ( a7 )
    *a7 = 0LL;
  if ( !a9 )
  {
    if ( (a5 & 0x2000000) != 0 )
      v12 = *(_DWORD *)(a8 + 12) | a5 & 0xFDFFFFFF;
    result = 1;
    *a10 = a6 | v12;
    *a11 = 0;
    return result;
  }
  if ( !a1 )
  {
LABEL_209:
    *a11 = -1073741790;
    return 0;
  }
  if ( *(_QWORD *)a3 && a3[2] < 2 )
  {
    *a11 = -1073741659;
    return 0;
  }
  if ( !a5 )
  {
    if ( a6 )
    {
      *a10 = a6;
      *a11 = 0;
      if ( a7 )
        *a7 = 0LL;
      return 1;
    }
    goto LABEL_209;
  }
  if ( !a4 )
    SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
  v17 = *(_WORD *)(a1 + 2);
  LODWORD(v18) = 0;
  v122 = 0;
  v128[0] = 0;
  v132 = -1;
  while ( 1 )
  {
    if ( (v17 & 0x10) != 0 )
    {
      if ( v17 >= 0 )
      {
        v19 = *(_QWORD *)(a1 + 24);
        goto LABEL_13;
      }
      v66 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v66 )
        break;
    }
LABEL_18:
    v20 = 0LL;
LABEL_19:
    LODWORD(v18) = v18 + 1;
    if ( !v20 )
      goto LABEL_20;
  }
  v19 = a1 + v66;
LABEL_13:
  if ( !v19 )
    goto LABEL_18;
  v20 = v19 + 8;
  v21 = 0;
  if ( !*(_WORD *)(v19 + 4) )
    goto LABEL_18;
  while ( v21 < (unsigned int)v18 || *(_BYTE *)v20 != 20 )
  {
    ++v21;
    v20 += *(unsigned __int16 *)(v20 + 2);
    if ( v21 >= *(unsigned __int16 *)(v19 + 4) )
      goto LABEL_18;
  }
  LODWORD(v18) = v21;
  if ( (*(_BYTE *)(v20 + 1) & 8) != 0 )
    goto LABEL_19;
  if ( v20 )
    v132 = *(_DWORD *)(v20 + 4);
LABEL_20:
  v22 = (void *)(v20 + 8);
  if ( !v20 )
    v22 = 0LL;
  if ( !v22 )
  {
    v13 = -1;
    *a11 = 0;
    v136 = -1;
    goto LABEL_24;
  }
  if ( !*(_QWORD *)a3 )
  {
LABEL_187:
    v77 = *(unsigned int **)(*((_QWORD *)a3 + 2) + 1104LL);
    goto LABEL_188;
  }
  v79 = *((_QWORD *)a3 + 2);
  v133 = *(unsigned int **)(*(_QWORD *)a3 + 1104LL);
  v78 = RtlSidDominatesForTrust(*(PSID *)(v79 + 1104), v133, v128);
  if ( v78 >= 0 )
  {
    if ( !v128[0] )
      goto LABEL_187;
    v77 = v133;
LABEL_188:
    v78 = RtlSidDominatesForTrust(v77, v22, &v122);
    if ( v78 >= 0 )
    {
      if ( v122 )
        v13 = -1;
      else
        v13 = v132 | 0x1000000;
      v136 = v13;
    }
  }
  *a11 = v78;
  if ( v78 < 0 )
  {
    if ( a4 )
      return 0;
    v75 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
    goto LABEL_143;
  }
LABEL_24:
  v23 = 0;
  v24 = a5 & 0xFDFFFFFF;
  v25 = v13 & a5 & 0xFDFFFFFF;
  if ( v25 != (a5 & 0xFDFFFFFF) )
    v23 = -1073741790;
  *a11 = v23;
  v26 = *(_QWORD *)a3;
  if ( v25 != (a5 & 0xFDFFFFFF) )
  {
    if ( !v26 )
      v26 = *((_QWORD *)a3 + 2);
    v80 = v125 | a5;
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)a3);
    SeLogAccessFailure(v26, v82, v83, TokenTrustLevel, a1, v80, 0);
    if ( a4 )
      return 0;
    v75 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
    goto LABEL_143;
  }
  if ( !v26 )
    v26 = *((_QWORD *)a3 + 2);
  if ( (a2 & 4) == 0 )
  {
    v27 = SepFilterCheck(a1, (unsigned int)&P, v26, 0, (__int64)&v147);
    *a11 = v27;
    if ( v27 >= 0 )
    {
      if ( (v147 & v24) == v24 )
      {
        *a11 = 0;
        goto LABEL_33;
      }
      v120 = v125 | a5;
      *a11 = -1073741790;
      SeLogAccessFailure(v26, v28, v18, 0LL, a1, v120, 0);
    }
LABEL_141:
    if ( a4 )
      return 0;
    v75 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
LABEL_143:
    SeUnlockSubjectContext(v75);
    return 0;
  }
LABEL_33:
  v29 = (a2 & 2) != 0 && (*(_DWORD *)(v26 + 200) & 0x2000) != 0;
  v126 = v29;
  v123 = 0;
  if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(v26 + 200) & 0x20) == 0 )
  {
    v84 = *(_QWORD *)(v26 + 216);
    if ( v84 )
    {
      if ( (*(_DWORD *)(v84 + 32) & 0x20) != 0 )
      {
        *a10 = 0;
        *a11 = -1073741790;
        goto LABEL_141;
      }
    }
  }
  v30 = a12;
  if ( !v29 )
  {
    LOBYTE(v18) = (a2 & 2) != 0;
    v31 = SepMandatoryIntegrityCheck(a8, a1, v18, v26, 0, a12, (__int64)&v141);
    *a11 = v31;
    if ( v31 < 0 )
      goto LABEL_141;
    if ( (_DWORD)v142 && (v24 & (unsigned int)v141) != v24 )
    {
      *a11 = -1073741790;
      if ( (*(_DWORD *)(v26 + 200) & 0x4000) == 0 || HIDWORD(v142) > 0x2000 )
        goto LABEL_141;
      v123 = 1;
    }
    else
    {
      *a11 = 0;
      if ( (a5 & 0x2000000) != 0 && (*(_DWORD *)(v26 + 200) & 0x4000) != 0 )
      {
        v30 = a12;
        if ( HIDWORD(v142) <= 0x2000 )
          v123 = 1;
        goto LABEL_42;
      }
    }
    v30 = a12;
  }
LABEL_42:
  if ( !SepRmEnforceCap )
  {
LABEL_43:
    v32 = 0;
    goto LABEL_44;
  }
  v85 = *(_WORD *)(a1 + 2);
  if ( (v85 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
  {
LABEL_220:
    v30 = a12;
    goto LABEL_43;
  }
  if ( v85 >= 0 )
  {
    v87 = *(ACL **)(a1 + 24);
  }
  else
  {
    v86 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v86 )
    {
      v140 = 0LL;
      goto LABEL_220;
    }
    v87 = (ACL *)(a1 + v86);
  }
  v140 = v87;
  if ( !v87 )
    goto LABEL_220;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v87);
  if ( !ScopedPolicySid )
    goto LABEL_220;
  Cap = SepRmReferenceFindCap(ScopedPolicySid);
  v90 = v137;
  if ( Cap < 0 )
    v90 = SepRmDefaultCap;
  v30 = a12;
  v137 = v90;
  v32 = 1;
  v121 = 1;
LABEL_44:
  v33 = a2 & 1;
  if ( v33 && (a5 & 0x2060000) == 0 && !v32 )
  {
    v43 = 0;
    goto LABEL_54;
  }
  if ( *(__int16 *)(a1 + 2) < 0 )
  {
    v65 = *(unsigned int *)(a1 + 4);
    if ( (_DWORD)v65 )
      v34 = (unsigned __int8 *)(v65 + a1);
    else
      v34 = 0LL;
  }
  else
  {
    v34 = *(unsigned __int8 **)(a1 + 8);
  }
  v35 = (unsigned int *)(v26 + 232);
  if ( v30 && v34 && RtlEqualSid(SeAliasAdminsSid, v34) )
  {
    v43 = 0;
    goto LABEL_87;
  }
  if ( v26 == -232 || !v34 )
    goto LABEL_52;
  v36 = v34[1];
  v37 = *(_WORD *)v34;
  *(_WORD *)v128 = v37;
  v38 = (unsigned int)(4 * v36 + 8);
  v134 = 4 * v36 + 8;
  v39 = v34[4 * HIBYTE(v37) + 4];
  v40 = *(_QWORD *)&v35[2 * (v39 & 0xF) + 4] & *(_QWORD *)&v35[2 * (v39 >> 4) + 36];
  LOBYTE(v41) = 0;
  v122 = 0;
  if ( !v40 )
    goto LABEL_51;
  while ( 2 )
  {
    LOBYTE(v56) = v40;
    v129 = (unsigned __int8)v40;
    if ( !(_BYTE)v40 )
      goto LABEL_152;
    v57 = *(_QWORD *)(v26 + 240);
    v41 = (unsigned __int8)v41;
    i = v57;
    LODWORD(v133) = (unsigned __int8)v41;
    while ( 2 )
    {
      v131 = SidHashByteToIndexLookupTable[(unsigned __int8)v56];
      v58 = (const void **)(v57 + 16LL * (unsigned int)(v41 + v131));
      v149 = v58;
      if ( *(_WORD *)*v58 == v37 )
      {
        if ( !memcmp(v34, *v58, v38) )
        {
          v59 = v149;
LABEL_83:
          if ( v59 == *(const void ***)(v26 + 240) && ((_DWORD)v59[1] & 0x10) == 0 || ((_DWORD)v59[1] & 4) != 0 )
          {
            v43 = 1;
            if ( *(_DWORD *)(v26 + 128) )
              v43 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v26 + 504), 0LL, v34, 0, 1, 0, a12);
          }
          else
          {
            v43 = 0;
          }
LABEL_87:
          if ( !v43 || (a5 & 0x2060000) == 0 )
            goto LABEL_53;
          if ( v33
            || ((v60 = *(_WORD *)(a1 + 2), (v60 & 4) != 0)
              ? (v60 >= 0
               ? (v61 = *(_QWORD *)(a1 + 32))
               : (v67 = *(unsigned int *)(a1 + 16), !(_DWORD)v67)
               ? (v61 = 0LL)
               : (v61 = v67 + a1))
              : (v61 = 0LL),
                (SeOwnerRightsSid = SeExports->SeOwnerRightsSid, !v61)
             || (v68 = (unsigned __int8 *)(v61 + 8),
                 LODWORD(v133) = *(unsigned __int16 *)(v61 + 4),
                 v69 = 0,
                 !(_DWORD)v133)) )
          {
LABEL_93:
            v44 = 393216;
            v63 = 393216;
            if ( (a5 & 0x2000000) == 0 )
              v63 = a5 & 0x60000;
            v64 = v125 | v63;
            v125 = v64;
            v32 = v121;
            v45 = v64;
            if ( (a5 & 0x2000000) == 0 )
              v44 = a5 & 0x60000;
            v12 = a5 & 0xFFF9FFFF;
            if ( !v121 )
            {
              v43 = 0;
              v125 = v64;
            }
            goto LABEL_55;
          }
          v70 = 104928;
          while ( 2 )
          {
            if ( (v68[1] & 8) != 0 )
              goto LABEL_123;
            v71 = *v68;
            if ( *v68 <= 0x10u && _bittest(&v70, v71) )
            {
              v72 = 16LL * (*((_DWORD *)v68 + 2) & 1) + ((8LL * (*((_DWORD *)v68 + 2) & 2)) | 0xC);
            }
            else
            {
              if ( v71 != 4 )
              {
                if ( v71 < 0xBu || (unsigned __int8)(v71 - 13) <= 1u )
                {
                  v72 = 8LL;
                  break;
                }
LABEL_123:
                ++v69;
                v68 += *((unsigned __int16 *)v68 + 1);
                if ( v69 >= (unsigned int)v133 )
                  goto LABEL_93;
                continue;
              }
              v72 = 12LL;
            }
            break;
          }
          v73 = (char *)&v68[v72];
          if ( v73 && *(_WORD *)v73 == *SeOwnerRightsSid )
          {
            if ( !memcmp(v73, SeOwnerRightsSid, 4 * (unsigned int)(unsigned __int8)HIBYTE(*(_WORD *)v73) + 8) )
              goto LABEL_53;
            v70 = 104928;
          }
          goto LABEL_123;
        }
        v37 = *(_WORD *)v128;
        v38 = v134;
        v57 = i;
      }
      v56 = (unsigned __int8)v129 ^ (1 << v131);
      v41 = (int)v133;
      v129 = v56;
      if ( (_BYTE)v56 )
        continue;
      break;
    }
    LOBYTE(v41) = v122;
LABEL_152:
    LOBYTE(v41) = v41 + 8;
    v40 >>= 8;
    v122 = v41;
    if ( v40 )
      continue;
    break;
  }
LABEL_51:
  v42 = *v35;
  LODWORD(v133) = v42;
  if ( v42 > 0x40 )
  {
    v91 = *(_QWORD *)(v26 + 240);
    v92 = 64;
    v129 = 64;
    for ( i = v91; ; v91 = i )
    {
      v59 = (const void **)(v91 + 16LL * v92);
      if ( *(_WORD *)*v59 == v37 )
      {
        if ( !memcmp(v34, *v59, v38) )
          goto LABEL_83;
        v37 = *(_WORD *)v128;
        v42 = (unsigned int)v133;
        v38 = v134;
        v92 = v129;
      }
      v129 = ++v92;
      if ( v92 >= v42 )
        break;
    }
  }
LABEL_52:
  v43 = 0;
LABEL_53:
  v32 = v121;
LABEL_54:
  v44 = v127;
  v45 = v125;
LABEL_55:
  if ( !v12 && !v32 && ((*(_DWORD *)(v26 + 200) & 0x2000) != 0 || !v44) )
  {
    if ( !a4 )
      SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    result = 1;
    *a10 = v45;
    *a11 = 0;
    return result;
  }
  v144 = 0LL;
  v145 = 0LL;
  v146 = 0;
  v143 = v44;
  v47 = SepAccessCheck(
          a1,
          0,
          *((_QWORD *)a3 + 2),
          *(_QWORD *)a3,
          v12,
          0LL,
          0,
          a8,
          v45,
          a9,
          (__int64)a10,
          (__int64)a7,
          (__int64)a11,
          0,
          v43,
          (__int64)&v143,
          (__int64)&P,
          (__int64)&v124,
          0LL,
          a12);
  v153 = v47;
  if ( !SepRmEnforceCap || (v93 = *a11, v134 = v93, v93 < 0) || !v121 )
  {
    v49 = P;
    v50 = v124;
    v51 = a11;
    v52 = a10;
    goto LABEL_58;
  }
  v94 = v137;
  v95 = *a10;
  v46 = 0LL;
  v122 = 0;
  v127 = v95;
  v128[0] = 0;
  v129 = 0;
  if ( !*(_DWORD *)(v137 + 60) )
  {
LABEL_296:
    v49 = P;
    goto LABEL_297;
  }
  v49 = P;
  while ( 2 )
  {
    v96 = *(unsigned int **)(v94 + 8LL * (unsigned int)v46 + 64);
    v133 = v96;
    if ( *((_QWORD *)v96 + 3) )
    {
      if ( !v49 )
      {
        v97 = AuthzBasepInitializeResourceClaimsFromSacl((__int64)v140, (__int64 *)&P);
        v49 = P;
        v96 = v133;
        v98 = v128[0];
        if ( v97 < 0 )
          v98 = 1;
        *(_DWORD *)v128 = v98;
      }
      v99 = *(_QWORD **)(v26 + 1096);
      if ( v99 )
      {
        v100 = v99[75];
        v101 = v99[73];
        v102 = v99[74];
        v103 = v99[72];
      }
      else
      {
        v100 = 0LL;
        v101 = 0LL;
        v102 = 0LL;
        v103 = 0LL;
      }
      v104 = AuthzBasepEvaluateAceCondition(
               v26,
               *(_QWORD *)(v26 + 776),
               (__int64)v49,
               v103,
               v102,
               v101,
               v100,
               *((_DWORD **)v96 + 3),
               v96[4],
               1u,
               0,
               &v132);
      v107 = v132;
      v131 = v104;
      if ( v132 != 1 )
      {
        if ( v104 < 0 )
        {
          if ( !a4 )
          {
            SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
            v104 = v131;
          }
          if ( *(_QWORD *)(v137 + 32) )
          {
            ((void (*)(void))SepRmDereferenceCapTable)();
            v104 = v131;
          }
          goto LABEL_284;
        }
        if ( (*(_DWORD *)(v26 + 200) & 0x10) != 0 )
        {
          v108 = *(_QWORD **)(v26 + 1096);
          if ( v108 )
          {
            v109 = v108[75];
            v110 = v108[73];
            v111 = v108[74];
            v112 = v108[72];
          }
          else
          {
            v109 = 0LL;
            v110 = 0LL;
            v111 = 0LL;
            v112 = 0LL;
          }
          v104 = AuthzBasepEvaluateAceCondition(
                   v26,
                   *(_QWORD *)(v26 + 776),
                   (__int64)v49,
                   v112,
                   v111,
                   v110,
                   v109,
                   *((_DWORD **)v133 + 3),
                   v133[4],
                   1u,
                   1u,
                   &v132);
          v131 = v104;
          if ( v104 >= 0 )
          {
            v107 = v132;
            goto LABEL_263;
          }
          if ( !a4 )
          {
            SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
            v104 = v131;
          }
          if ( *(_QWORD *)(v137 + 32) )
          {
            ((void (*)(void))SepRmDereferenceCapTable)();
            v104 = v131;
          }
LABEL_284:
          *a10 = 0;
          *a11 = v104;
          SepFreeResourceInfo(v49, v105, v106);
          return 0;
        }
LABEL_263:
        if ( !v128[0] && v107 != 1 )
        {
          v93 = v134;
          v95 = v127;
          goto LABEL_278;
        }
      }
    }
    v114 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v114 < 0 )
    {
      if ( !a4 )
        SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
      if ( *(_QWORD *)(v137 + 32) )
        ((void (*)(void))SepRmDereferenceCapTable)();
      *a10 = 0;
      *a11 = v114;
      SepFreeResourceInfo(v49, v113, v115);
      return 0;
    }
    v116 = v12;
    if ( (v133[12] & 1) != 0 )
    {
      v117 = 0;
      if ( (v12 & 0x2000000) == 0 )
        v116 = v125 | v12;
    }
    else
    {
      v117 = v125;
    }
    v47 = SepAccessCheck(
            (unsigned int)SecurityDescriptor,
            0,
            *((_QWORD *)a3 + 2),
            *(_QWORD *)a3,
            v116,
            0LL,
            0,
            a8,
            v117,
            a9,
            (__int64)&v138,
            0LL,
            (__int64)&v139,
            0,
            v43,
            (__int64)&v143,
            (__int64)&P,
            (__int64)&v124,
            0LL,
            a12);
    v153 = v47;
    if ( v122 )
      v95 = v138 & v127;
    else
      v95 = v138;
    v127 = v95;
    if ( v95 )
    {
      v93 = v139;
      v134 = v139;
      v122 = 1;
      if ( v139 < 0 )
        goto LABEL_296;
      v49 = P;
LABEL_278:
      v94 = v137;
      v46 = (unsigned int)(v129 + 1);
      v129 = v46;
      if ( (unsigned int)v46 >= *(_DWORD *)(v137 + 60) )
        goto LABEL_297;
      continue;
    }
    break;
  }
  v49 = P;
  v93 = -1073741790;
LABEL_297:
  v52 = a10;
  v51 = a11;
  *a11 = v93;
  v50 = v124;
  *a10 &= v95;
  if ( *a11 < 0 )
    v50 = 0;
LABEL_58:
  if ( !v126 && (v12 & 0x2000000) != 0 )
  {
    if ( (!v123 || !*(_WORD *)((char *)&v145 + 5)) && (_DWORD)v142 && (!BYTE4(v141) || !BYTE5(v141) || !BYTE6(v141)) )
    {
      v76 = *v52 & v141;
      if ( v76 != *v52 )
      {
        *v52 = v76;
        if ( v76 )
        {
          *v51 = 0;
          v50 = 1;
        }
        else
        {
          *v51 = -1073741790;
LABEL_159:
          v50 = 0;
        }
      }
    }
  }
  else if ( v123 && !*(_WORD *)((char *)&v145 + 5) )
  {
    *v51 = -1073741790;
    *v52 = 0;
    goto LABEL_159;
  }
  LOBYTE(v48) = 0;
  if ( (v12 & 0x2000000) != 0 )
  {
    if ( v136 != -1 )
    {
      v46 = v136 & *v52;
      if ( (_DWORD)v46 != *v52 )
      {
        *v52 = v46;
        LOBYTE(v48) = 1;
        if ( (_DWORD)v46 )
        {
          *v51 = 0;
          v50 = 1;
        }
        else
        {
          *v51 = -1073741790;
          v50 = 0;
        }
      }
    }
    v53 = 0;
    if ( v147 != -1 )
    {
      v46 = v147 & *v52;
      if ( (_DWORD)v46 != *v52 )
      {
        *v52 = v46;
        v53 = 1;
        if ( (_DWORD)v46 )
        {
          *v51 = 0;
          v50 = 1;
        }
        else
        {
          *v51 = -1073741790;
          v50 = 0;
        }
      }
    }
  }
  else
  {
    v53 = 0;
  }
  if ( v26 )
  {
    if ( (_BYTE)v48 || v53 )
    {
      v54 = HIDWORD(v144);
    }
    else
    {
      v54 = HIDWORD(v144);
      if ( HIDWORD(v144) || (*(_DWORD *)(v26 + 200) & 0x4000) == 0 )
        goto LABEL_68;
      if ( *v51 < 0 )
      {
LABEL_138:
        v154 = 0;
        goto LABEL_139;
      }
      if ( !HIBYTE(v145) )
        goto LABEL_68;
    }
    v154 = 1;
    if ( *v51 < 0 )
      goto LABEL_138;
LABEL_139:
    v74 = *((_QWORD *)a3 + 2);
    v156 = v74;
    v155 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 )
    {
      RtlSidDominatesForTrust(*(PSID *)(v74 + 1104), *(PSID *)(*(_QWORD *)a3 + 1104LL), DominatesTrust);
      if ( DominatesTrust[0] )
        v74 = v155;
      else
        v74 = v156;
    }
    SeLogAccessFailure(v26, v154, (__int64)v52, *(_QWORD *)(v74 + 1104), a1, v125 | v12, v154);
LABEL_68:
    if ( *v51 < 0 && !v54 && (*(_DWORD *)(v26 + 200) & 0x4000) != 0 )
    {
      if ( (_BYTE)v146 )
      {
        v118 = v12 & ~(HIDWORD(v143) | (unsigned int)v144 | 0x2000000);
        if ( ((unsigned int)v118 & (unsigned int)v145) == (_DWORD)v118 )
          SepLogLpacAccessFailure(v118, v46, v52);
      }
    }
    v47 = v153;
  }
  if ( v121 )
  {
    v119 = *(_QWORD *)(v137 + 32);
    if ( v119 )
      SepRmDereferenceCapTable(v119, v46, v52, v48);
  }
  if ( !a4 )
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
  if ( v49 )
  {
    AuthzBasepFreeSecurityAttributesList(v49);
    ExFreePoolWithTag(v49, 0);
  }
  return v47 && v50;
}
