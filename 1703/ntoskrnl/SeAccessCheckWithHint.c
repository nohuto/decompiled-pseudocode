/*
 * XREFs of SeAccessCheckWithHint @ 0x14008D7C0
 * Callers:
 *     ExCpuSetResourceManagerAccessCheck @ 0x14002B79C (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400364A0 (RtlpAllowsLowBoxAccess.c)
 *     RtlCheckTokenMembershipEx @ 0x1400671B0 (RtlCheckTokenMembershipEx.c)
 *     SeAccessCheckFromStateEx @ 0x1400882E0 (SeAccessCheckFromStateEx.c)
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     RtlCheckTokenCapability @ 0x14023BE40 (RtlCheckTokenCapability.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140469F00 (ObpVerifyAccessToBoundaryEntry.c)
 *     ExpCheckWakeTimerAccess @ 0x140586274 (ExpCheckWakeTimerAccess.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000DBA0 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepLocateTokenTrustLevel @ 0x140013744 (SepLocateTokenTrustLevel.c)
 *     SeLogAccessFailure @ 0x14001BD60 (SeLogAccessFailure.c)
 *     SepFreeResourceInfo @ 0x14003E044 (SepFreeResourceInfo.c)
 *     RtlSidDominatesForTrust @ 0x140044710 (RtlSidDominatesForTrust.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140065DA4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400897C0 (AuthzBasepEvaluateAceCondition.c)
 *     SepMandatoryIntegrityCheck @ 0x14008E320 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x14008E7E0 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x14008E970 (SepAccessCheck.c)
 *     SepSidInTokenSidHash @ 0x140091F00 (SepSidInTokenSidHash.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14024696C (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x140246AC4 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x140246C14 (SepLogLpacAccessFailure.c)
 *     SepRmDereferenceCapTable @ 0x140246D54 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x140248A28 (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeLockSubjectContext @ 0x1405086C0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140531170 (SeUnlockSubjectContext.c)
 */

bool __fastcall SeAccessCheckWithHint(
        ULONGLONG a1,
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
  int *v11; // rsi
  __int64 v12; // rdi
  int v14; // ebx
  unsigned int v17; // r14d
  __int16 v18; // r9
  __int64 v19; // r8
  unsigned int v20; // eax
  int v21; // eax
  ULONGLONG v22; // rcx
  ULONGLONG v23; // rdx
  unsigned int v24; // r10d
  unsigned int v25; // edi
  int v26; // ecx
  __int64 v27; // r13
  int v28; // eax
  __int64 v29; // rdx
  bool v30; // cl
  int v31; // eax
  __int64 v32; // rax
  char v33; // r12
  unsigned __int8 *v34; // rsi
  _DWORD *v35; // rdi
  int v36; // eax
  __int16 v37; // r8
  unsigned int v38; // r9d
  unsigned int v39; // eax
  unsigned __int64 v40; // rdx
  int v41; // ecx
  int v42; // eax
  __int64 v43; // rdx
  char v44; // cl
  __int16 v45; // cx
  ULONGLONG v46; // rcx
  _WORD *SeOwnerRightsSid; // r12
  int v48; // edx
  int v49; // edi
  int v50; // edi
  __int64 v51; // r9
  __int64 v52; // r8
  char v53; // al
  __int64 v54; // r8
  __int64 v55; // rdx
  char v56; // al
  int *v57; // r9
  char v58; // r10
  int v59; // ebx
  PVOID v60; // rbx
  bool result; // al
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned __int8 *v65; // rdi
  unsigned int v66; // esi
  int v67; // edx
  unsigned __int8 v68; // cl
  unsigned __int8 *v69; // rcx
  unsigned int v70; // ecx
  __int64 v71; // rcx
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rax
  int v75; // eax
  struct _SECURITY_SUBJECT_CONTEXT *v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rbx
  ULONGLONG TokenTrustLevel; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  int v82; // eax
  __int64 v83; // r9
  unsigned int v84; // ecx
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  void *ScopedPolicySid; // rax
  __int64 v89; // rdx
  bool v90; // sf
  unsigned int v91; // ecx
  __int64 v92; // rdx
  PVOID v93; // rcx
  int v94; // eax
  int v95; // r9d
  _QWORD *v96; // rax
  void *v97; // r10
  void *v98; // r8
  void *v99; // rdx
  void *v100; // r9
  int v101; // eax
  int v102; // ecx
  _QWORD *v103; // rax
  void *v104; // r9
  void *v105; // r8
  void *v106; // rdx
  void *v107; // rcx
  int v108; // eax
  int v109; // ecx
  int v110; // edx
  char v111; // al
  _DWORD *v112; // rcx
  _DWORD *v113; // rcx
  int v114; // eax
  int v115; // ecx
  __int64 v116; // rcx
  __int64 v117; // rcx
  int v118; // [rsp+20h] [rbp-100h]
  int v119; // [rsp+28h] [rbp-F8h]
  char v120; // [rsp+A0h] [rbp-80h]
  char v121; // [rsp+A1h] [rbp-7Fh]
  char v122; // [rsp+A2h] [rbp-7Eh] BYREF
  char v123; // [rsp+A3h] [rbp-7Dh]
  char v124; // [rsp+A4h] [rbp-7Ch] BYREF
  bool v125; // [rsp+A5h] [rbp-7Bh]
  unsigned int v126; // [rsp+A8h] [rbp-78h] BYREF
  int v127; // [rsp+ACh] [rbp-74h]
  int v128; // [rsp+B0h] [rbp-70h]
  char v129[4]; // [rsp+B4h] [rbp-6Ch] BYREF
  int v130; // [rsp+B8h] [rbp-68h]
  unsigned int v131; // [rsp+BCh] [rbp-64h]
  PVOID P; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v133; // [rsp+C8h] [rbp-58h]
  __int64 v134; // [rsp+D0h] [rbp-50h]
  int v135; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v136; // [rsp+E0h] [rbp-40h]
  unsigned int v137; // [rsp+E8h] [rbp-38h] BYREF
  int v138; // [rsp+ECh] [rbp-34h] BYREF
  __int64 i; // [rsp+F0h] [rbp-30h]
  __int64 v140; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v141; // [rsp+100h] [rbp-20h]
  __int64 v142; // [rsp+108h] [rbp-18h] BYREF
  __int64 v143; // [rsp+110h] [rbp-10h]
  __int64 v144; // [rsp+118h] [rbp-8h]
  int v145; // [rsp+120h] [rbp+0h]
  __int64 v146; // [rsp+128h] [rbp+8h]
  int v147; // [rsp+130h] [rbp+10h] BYREF
  unsigned __int64 v148; // [rsp+138h] [rbp+18h]
  _QWORD SecurityDescriptor[12]; // [rsp+140h] [rbp+20h] BYREF
  char v152; // [rsp+1E0h] [rbp+C0h]
  int v153; // [rsp+1E0h] [rbp+C0h]
  char v154; // [rsp+1F0h] [rbp+D0h]
  char v155; // [rsp+1F8h] [rbp+D8h]
  __int64 v156; // [rsp+200h] [rbp+E0h]
  char v157; // [rsp+200h] [rbp+E0h]

  v11 = a11;
  LODWORD(v12) = 0;
  v136 = 0LL;
  v134 = 0LL;
  v14 = -1;
  v140 = 0LL;
  v141 = 0LL;
  memset(SecurityDescriptor, 0, 40);
  v121 = 0;
  *a10 = 0;
  *a11 = -1073741790;
  v130 = 0;
  P = 0LL;
  v137 = 0;
  v138 = -1073741790;
  v147 = -1;
  if ( a7 )
    *a7 = 0LL;
  if ( a9 )
  {
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
    if ( a5 )
    {
      if ( !a4 )
        SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
      v18 = *(_WORD *)(a1 + 2);
      LODWORD(v19) = 0;
      v20 = (unsigned __int16)v18;
      v122 = 0;
      LOWORD(v20) = ~v18;
      LOBYTE(v126) = 0;
      v21 = (v20 >> 4) & 1;
      while ( !v21 )
      {
        if ( v18 < 0 )
        {
          v63 = *(unsigned int *)(a1 + 12);
          if ( !(_DWORD)v63 )
            break;
          v22 = a1 + v63;
        }
        else
        {
          v22 = *(_QWORD *)(a1 + 24);
        }
        if ( !v22 )
          break;
        v23 = v22 + 8;
        v24 = 0;
        if ( !*(_WORD *)(v22 + 4) )
          break;
        while ( v24 < (unsigned int)v19 || *(_BYTE *)v23 != 20 )
        {
          ++v24;
          v23 += *(unsigned __int16 *)(v23 + 2);
          if ( v24 >= *(unsigned __int16 *)(v22 + 4) )
            goto LABEL_18;
        }
        v19 = v24;
        if ( (*(_BYTE *)(v23 + 1) & 8) == 0 )
        {
          if ( !v23 || (v12 = v23 + 8, v127 = *(_DWORD *)(v23 + 4), v23 == -8LL) )
          {
LABEL_20:
            v14 = -1;
            *a11 = v12;
          }
          else
          {
            if ( !*(_QWORD *)a3 )
              goto LABEL_173;
            v77 = *((_QWORD *)a3 + 2);
            v146 = *(_QWORD *)(*(_QWORD *)a3 + 1104LL);
            v75 = RtlSidDominatesForTrust(*(_QWORD *)(v77 + 1104), v146, &v126);
            if ( v75 >= 0 )
            {
              if ( (_BYTE)v126 )
                v74 = v146;
              else
LABEL_173:
                v74 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 1104LL);
              v75 = RtlSidDominatesForTrust(v74, v12, &v122);
              if ( v75 >= 0 )
              {
                if ( v122 )
                  v14 = -1;
                else
                  v14 = v127 | 0x1000000;
              }
            }
            *a11 = v75;
            if ( v75 < 0 )
            {
              if ( !a4 )
              {
                v76 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
LABEL_198:
                SeUnlockSubjectContext(v76);
                return 0;
              }
              return 0;
            }
          }
          v25 = a5 & 0xFDFFFFFF;
          v26 = 0;
          if ( (v14 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
            v26 = -1073741790;
          *a11 = v26;
          if ( v26 < 0 )
          {
            v78 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3 )
              v78 = *((_QWORD *)a3 + 2);
            TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)a3);
            SeLogAccessFailure(v78, v80, v81, TokenTrustLevel, a1, a6 | a5, 0);
            if ( !a4 )
            {
              v76 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
              goto LABEL_198;
            }
            return 0;
          }
          v27 = *(_QWORD *)a3;
          if ( !v27 )
            v27 = *((_QWORD *)a3 + 2);
          if ( (a2 & 4) == 0 )
          {
            v28 = SepFilterCheck(a1, (unsigned int)&P, v27, 0, (__int64)&v147);
            *a11 = v28;
            if ( v28 >= 0 )
            {
              if ( (v147 & v25) == v25 )
              {
                *a11 = 0;
                goto LABEL_30;
              }
              *a11 = -1073741790;
              SeLogAccessFailure(v27, v29, v19, 0LL, a1, a6 | a5, 0);
            }
LABEL_185:
            if ( !a4 )
            {
              v76 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
              goto LABEL_198;
            }
            return 0;
          }
LABEL_30:
          LOBYTE(v19) = (a2 & 2) != 0;
          v30 = (a2 & 2) != 0 && (*(_DWORD *)(v27 + 200) & 0x2000) != 0;
          v125 = v30;
          v123 = 0;
          if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(v27 + 200) & 0x20) == 0 )
          {
            v85 = *(_QWORD *)(v27 + 216);
            if ( v85 )
            {
              if ( (*(_DWORD *)(v85 + 32) & 0x20) != 0 )
              {
                *a10 = 0;
                *a11 = -1073741790;
                goto LABEL_185;
              }
            }
          }
          if ( !v30 )
          {
            v31 = SepMandatoryIntegrityCheck(a8, a1, v19, v27, 0, (__int64)&v140);
            *a11 = v31;
            if ( v31 < 0 )
              goto LABEL_185;
            if ( (_DWORD)v141 && ((unsigned int)v140 & v25) != v25 )
            {
              *a11 = -1073741790;
              if ( (*(_DWORD *)(v27 + 200) & 0x4000) == 0 || HIDWORD(v141) > 0x2000 )
                goto LABEL_185;
            }
            else
            {
              *a11 = 0;
              if ( (a5 & 0x2000000) == 0 || (*(_DWORD *)(v27 + 200) & 0x4000) == 0 || HIDWORD(v141) > 0x2000 )
                goto LABEL_38;
            }
            v123 = 1;
          }
LABEL_38:
          if ( !SepRmEnforceCap )
            goto LABEL_39;
          v86 = *(unsigned __int16 *)(a1 + 2);
          if ( (v86 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
            goto LABEL_39;
          if ( (v86 & 0x10) == 0 )
          {
            v136 = 0LL;
            LOBYTE(v32) = 0;
            goto LABEL_40;
          }
          if ( (v86 & 0x8000u) == 0LL )
          {
            v87 = *(_QWORD *)(a1 + 24);
          }
          else
          {
            v32 = *(unsigned int *)(a1 + 12);
            if ( !(_DWORD)v32 )
            {
              v136 = 0LL;
              goto LABEL_40;
            }
            v87 = a1 + v32;
          }
          v136 = v87;
          if ( v87 && (ScopedPolicySid = (void *)SepGetScopedPolicySid(v87, v86, v19)) != 0LL )
          {
            LODWORD(v32) = SepRmReferenceFindCap(ScopedPolicySid);
            v89 = v134;
            v90 = (int)v32 < 0;
            LOBYTE(v32) = 1;
            if ( v90 )
              v89 = SepRmDefaultCap;
            v134 = v89;
            v121 = 1;
          }
          else
          {
LABEL_39:
            LOBYTE(v32) = 0;
          }
LABEL_40:
          v33 = a2 & 1;
          if ( v33 && (a5 & 0x2060000) == 0 && !(_BYTE)v32 )
            goto LABEL_67;
          if ( *(__int16 *)(a1 + 2) < 0 )
          {
            v62 = *(unsigned int *)(a1 + 4);
            if ( (_DWORD)v62 )
              v34 = (unsigned __int8 *)(a1 + v62);
            else
              v34 = 0LL;
          }
          else
          {
            v34 = *(unsigned __int8 **)(a1 + 8);
          }
          v35 = (_DWORD *)(v27 + 232);
          if ( v27 == -232 || !v34 )
            goto LABEL_66;
          v36 = v34[1];
          v37 = *(_WORD *)v34;
          LOWORD(v126) = *(_WORD *)v34;
          v38 = 4 * v36 + 8;
          v131 = v38;
          v39 = v34[4 * v36 + 4];
          v40 = *(_QWORD *)&v35[2 * (v39 & 0xF) + 4] & *(_QWORD *)&v35[2 * (v39 >> 4) + 36];
          LOBYTE(v41) = 0;
          v122 = 0;
          v148 = v40;
          if ( !v40 )
            goto LABEL_65;
          while ( 2 )
          {
            LOBYTE(v42) = v40;
            v128 = (unsigned __int8)v40;
            if ( !(_BYTE)v40 )
              goto LABEL_105;
            v43 = *(_QWORD *)(v27 + 240);
            v41 = (unsigned __int8)v41;
            i = v43;
            v127 = (unsigned __int8)v41;
LABEL_48:
            LODWORD(v133) = (unsigned __int8)SidHashByteToIndexLookupTable[(unsigned __int8)v42];
            v146 = v43 + 16LL * (unsigned int)(v41 + v133);
            if ( **(_WORD **)v146 == v37 )
            {
              if ( !memcmp(v34, *(const void **)v146, v38) )
              {
LABEL_50:
                if ( v146 == *(_QWORD *)(v27 + 240) && (*(_DWORD *)(v146 + 8) & 0x10) == 0
                  || (*(_DWORD *)(v146 + 8) & 4) != 0 )
                {
                  v44 = 1;
                  v120 = 1;
                  if ( *(_DWORD *)(v27 + 128) )
                  {
                    LOBYTE(v119) = 0;
                    LOBYTE(v118) = 1;
                    v44 = SepSidInTokenSidHash(v27 + 504, 0LL, v34, 0LL, v118, v119);
                    v120 = v44;
                  }
                }
                else
                {
                  v44 = 0;
                  v120 = 0;
                }
                if ( !v44 || (a5 & 0x2060000) == 0 )
                {
LABEL_108:
                  v50 = a6;
                  v11 = a11;
                  v48 = v130;
                  LOBYTE(v32) = v121;
                  goto LABEL_69;
                }
                if ( !v33 )
                {
                  v45 = *(_WORD *)(a1 + 2);
                  if ( (~(_BYTE)v45 & 4) != 0 )
                  {
                    v46 = 0LL;
                  }
                  else if ( v45 >= 0 )
                  {
                    v46 = *(_QWORD *)(a1 + 32);
                  }
                  else
                  {
                    v64 = *(unsigned int *)(a1 + 16);
                    if ( (_DWORD)v64 )
                      v46 = a1 + v64;
                    else
                      v46 = 0LL;
                  }
                  SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
                  if ( v46 )
                  {
                    v65 = (unsigned __int8 *)(v46 + 8);
                    LODWORD(v133) = *(unsigned __int16 *)(v46 + 4);
                    v66 = 0;
                    if ( (_DWORD)v133 )
                    {
                      v67 = 104928;
                      do
                      {
                        if ( (v65[1] & 8) == 0 )
                        {
                          v68 = *v65;
                          if ( *v65 <= 0x10u && _bittest(&v67, v68) )
                          {
                            v69 = &v65[8 * (*((_DWORD *)v65 + 2) & 2) + ((16LL * (*((_DWORD *)v65 + 2) & 1)) | 0xC)];
                          }
                          else if ( v68 == 4 )
                          {
                            v69 = v65 + 12;
                          }
                          else
                          {
                            if ( v68 > 0xAu && (unsigned __int8)(v68 - 13) > 1u )
                              goto LABEL_122;
                            v69 = v65 + 8;
                          }
                          if ( v69 && *(_WORD *)v69 == *SeOwnerRightsSid )
                          {
                            if ( !memcmp(v69, SeOwnerRightsSid, 4LL * v69[1] + 8) )
                            {
                              v44 = v120;
                              goto LABEL_108;
                            }
                            v67 = 104928;
                          }
                        }
LABEL_122:
                        ++v66;
                        v65 += *((unsigned __int16 *)v65 + 1);
                      }
                      while ( v66 < (unsigned int)v133 );
                    }
                  }
                  v44 = v120;
                }
                v48 = 393216;
                if ( (a5 & 0x2000000) != 0 )
                {
                  v49 = 393216;
                }
                else
                {
                  v48 = a5 & 0x60000;
                  v49 = a5 & 0x60000;
                }
                v50 = a6 | v49;
                v17 = a5 & 0xFFF9FFFF;
                LOBYTE(v32) = v121;
                v11 = a11;
                if ( !v121 )
                  goto LABEL_68;
                goto LABEL_69;
              }
              v37 = v126;
              v38 = v131;
              v41 = v127;
            }
            v42 = (unsigned __int8)v128 ^ (1 << v133);
            v43 = i;
            v128 = v42;
            if ( !(_BYTE)v42 )
            {
              v40 = v148;
              LOBYTE(v41) = v122;
LABEL_105:
              LOBYTE(v41) = v41 + 8;
              v40 >>= 8;
              v122 = v41;
              v148 = v40;
              if ( !v40 )
              {
LABEL_65:
                LODWORD(v133) = *v35;
                if ( (unsigned int)v133 > 0x40 )
                {
                  v91 = 64;
                  v128 = 64;
                  v92 = *(_QWORD *)(v27 + 240);
                  for ( i = v92; ; v92 = i )
                  {
                    v146 = v92 + 16LL * v91;
                    if ( **(_WORD **)v146 == v37 )
                    {
                      if ( !memcmp(v34, *(const void **)v146, v38) )
                        goto LABEL_50;
                      v37 = v126;
                      v38 = v131;
                      v91 = v128;
                    }
                    v128 = ++v91;
                    if ( v91 >= (unsigned int)v133 )
                      break;
                  }
                }
LABEL_66:
                v11 = a11;
                LOBYTE(v32) = v121;
LABEL_67:
                v48 = v130;
                v50 = a6;
LABEL_68:
                v44 = 0;
                v120 = 0;
LABEL_69:
                if ( !v17 && !(_BYTE)v32 && ((*(_DWORD *)(v27 + 200) & 0x2000) != 0 || !v48) )
                {
                  if ( !a4 )
                    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
                  *a10 = v50;
                  result = 1;
                  *v11 = 0;
                  return result;
                }
                v142 = 0LL;
                v143 = 0LL;
                v144 = 0LL;
                v51 = *(_QWORD *)a3;
                v52 = *((_QWORD *)a3 + 2);
                v145 = 0;
                LODWORD(v142) = v48;
                v53 = SepAccessCheck(
                        a1,
                        0,
                        v52,
                        v51,
                        v17,
                        0LL,
                        0,
                        a8,
                        v50,
                        a9,
                        (__int64)a10,
                        (__int64)a7,
                        (__int64)v11,
                        0,
                        v44,
                        (__int64)&v142,
                        (__int64)&P,
                        (__int64)&v124,
                        0LL);
                v55 = 1LL;
                v152 = v53;
                if ( SepRmEnforceCap && (v82 = *v11, v131 = v82, v82 >= 0) && v121 )
                {
                  v83 = v134;
                  v157 = 0;
                  LOBYTE(v130) = 0;
                  v54 = (unsigned int)*a10;
                  v84 = 0;
                  v126 = *a10;
                  v128 = 0;
                  if ( *(_DWORD *)(v134 + 60) )
                  {
                    while ( 1 )
                    {
                      v133 = *(_QWORD *)(v83 + 8LL * v84 + 64);
                      if ( !*(_QWORD *)(v133 + 24) )
                        goto LABEL_276;
                      v93 = P;
                      if ( !P )
                      {
                        v94 = AuthzBasepInitializeResourceClaimsFromSacl(v136, &P);
                        v93 = P;
                        v95 = (unsigned __int8)v130;
                        if ( v94 < 0 )
                          v95 = 1;
                        v130 = v95;
                      }
                      v96 = *(_QWORD **)(v27 + 1096);
                      v97 = v96 ? (void *)v96[75] : 0LL;
                      v98 = v96 ? (void *)v96[73] : 0LL;
                      v99 = v96 ? (void *)v96[74] : 0LL;
                      v100 = v96 ? (void *)v96[72] : 0LL;
                      v101 = AuthzBasepEvaluateAceCondition(
                               (_DWORD *)v27,
                               *(void **)(v27 + 776),
                               v93,
                               v100,
                               v99,
                               v98,
                               v97,
                               *(_DWORD **)(v133 + 24),
                               *(_DWORD *)(v133 + 16),
                               1u,
                               0,
                               &v135);
                      v102 = v135;
                      v127 = v101;
                      if ( v135 == 1 )
                        goto LABEL_276;
                      if ( v101 < 0 )
                      {
                        if ( !a4 )
                        {
                          SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
                          v101 = v127;
                        }
                        if ( !*(_QWORD *)(v134 + 32) )
                          goto LABEL_296;
LABEL_295:
                        ((void (*)(void))SepRmDereferenceCapTable)();
                        v101 = v127;
LABEL_296:
                        *a10 = 0;
                        v112 = P;
                        *v11 = v101;
                        SepFreeResourceInfo(v112);
                        return 0;
                      }
                      if ( (*(_DWORD *)(v27 + 200) & 0x10) != 0 )
                      {
                        v103 = *(_QWORD **)(v27 + 1096);
                        v104 = 0LL;
                        if ( v103 )
                          v105 = (void *)v103[75];
                        else
                          v105 = 0LL;
                        if ( v103 )
                          v106 = (void *)v103[73];
                        else
                          v106 = 0LL;
                        if ( v103 )
                          v107 = (void *)v103[74];
                        else
                          v107 = 0LL;
                        if ( v103 )
                          v104 = (void *)v103[72];
                        v101 = AuthzBasepEvaluateAceCondition(
                                 (_DWORD *)v27,
                                 *(void **)(v27 + 776),
                                 P,
                                 v104,
                                 v107,
                                 v106,
                                 v105,
                                 *(_DWORD **)(v133 + 24),
                                 *(_DWORD *)(v133 + 16),
                                 1u,
                                 1u,
                                 &v135);
                        v127 = v101;
                        if ( v101 < 0 )
                        {
                          if ( !a4 )
                          {
                            SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
                            v101 = v127;
                          }
                          if ( !*(_QWORD *)(v134 + 32) )
                            goto LABEL_296;
                          goto LABEL_295;
                        }
                        v102 = v135;
                      }
                      if ( (_BYTE)v130 || v102 == 1 )
                      {
LABEL_276:
                        v108 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
                        v153 = v108;
                        if ( v108 < 0 )
                        {
                          if ( !a4 )
                          {
                            SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
                            v108 = v153;
                          }
                          if ( *(_QWORD *)(v134 + 32) )
                          {
                            ((void (*)(void))SepRmDereferenceCapTable)();
                            v108 = v153;
                          }
                          *a10 = 0;
                          v113 = P;
                          *v11 = v108;
                          SepFreeResourceInfo(v113);
                          return 0;
                        }
                        v109 = v17;
                        if ( (*(_DWORD *)(v133 + 48) & 1) != 0 )
                        {
                          if ( (v17 & 0x2000000) == 0 )
                            v109 = v50 | v17;
                          v110 = 0;
                        }
                        else
                        {
                          v110 = v50;
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
                                 (__int64)&v137,
                                 0LL,
                                 (__int64)&v138,
                                 0,
                                 v120,
                                 (__int64)&v142,
                                 (__int64)&P,
                                 (__int64)&v124,
                                 0LL);
                        v54 = v137 & v126;
                        v152 = v111;
                        if ( !v157 )
                          v54 = v137;
                        v126 = v54;
                        if ( !(_DWORD)v54 )
                        {
                          v82 = -1073741790;
LABEL_272:
                          v55 = 1LL;
                          break;
                        }
                        v82 = v138;
                        v131 = v138;
                        v157 = 1;
                        if ( v138 < 0 )
                        {
                          v55 = 1LL;
                          break;
                        }
                      }
                      else
                      {
                        v82 = v131;
                        v54 = v126;
                      }
                      v83 = v134;
                      v84 = v128 + 1;
                      v128 = v84;
                      if ( v84 >= *(_DWORD *)(v134 + 60) )
                        goto LABEL_272;
                    }
                  }
                  v57 = a10;
                  *v11 = v82;
                  v56 = v124;
                  *a10 &= v54;
                  if ( *v11 < 0 )
                    v56 = 0;
                }
                else
                {
                  v56 = v124;
                  v57 = a10;
                }
                v154 = v56;
                if ( !v125 && (v17 & 0x2000000) != 0 )
                {
                  if ( (!v123 || !*(_WORD *)((char *)&v144 + 1))
                    && (_DWORD)v141
                    && (!BYTE4(v140) || !BYTE5(v140) || !BYTE6(v140)) )
                  {
                    v73 = v140 & *v57;
                    if ( v73 != *v57 )
                    {
                      *v57 = v73;
                      if ( v73 )
                      {
                        *v11 = 0;
                        v154 = 1;
                      }
                      else
                      {
                        *v11 = -1073741790;
LABEL_161:
                        v154 = 0;
                      }
                    }
                  }
                }
                else if ( v123 && !*(_WORD *)((char *)&v144 + 1) )
                {
                  *v11 = -1073741790;
                  *v57 = 0;
                  goto LABEL_161;
                }
                LOBYTE(v54) = 0;
                if ( (v17 & 0x2000000) != 0 )
                {
                  if ( v14 != -1 )
                  {
                    v114 = v14 & *v57;
                    if ( v114 != *v57 )
                    {
                      *v57 = v114;
                      LOBYTE(v54) = 1;
                      if ( v114 )
                      {
                        *v11 = 0;
                        v154 = 1;
                      }
                      else
                      {
                        *v11 = -1073741790;
                        v154 = 0;
                      }
                    }
                  }
                  v58 = 0;
                  if ( v147 != -1 )
                  {
                    v115 = v147 & *v57;
                    if ( v115 != *v57 )
                    {
                      *v57 = v115;
                      v58 = 1;
                      if ( v115 )
                      {
                        *v11 = 0;
                        v154 = 1;
                      }
                      else
                      {
                        *v11 = -1073741790;
                        v154 = 0;
                      }
                    }
                  }
                }
                else
                {
                  v58 = 0;
                }
                if ( v27 )
                {
                  if ( (_BYTE)v54 || v58 )
                  {
                    v59 = HIDWORD(v143);
                    goto LABEL_315;
                  }
                  v59 = HIDWORD(v143);
                  if ( HIDWORD(v143) || (*(_DWORD *)(v27 + 200) & 0x4000) == 0 )
                    goto LABEL_82;
                  if ( *v11 < 0 )
                  {
LABEL_140:
                    v155 = 0;
                    goto LABEL_141;
                  }
                  if ( BYTE3(v144) )
                  {
LABEL_315:
                    v155 = 1;
                    if ( *v11 < 0 )
                      goto LABEL_140;
LABEL_141:
                    v71 = *(_QWORD *)a3;
                    v72 = *((_QWORD *)a3 + 2);
                    i = v72;
                    v156 = v71;
                    if ( v71 )
                    {
                      RtlSidDominatesForTrust(*(_QWORD *)(v72 + 1104), *(_QWORD *)(v71 + 1104), v129);
                      if ( v129[0] )
                        v72 = v156;
                      else
                        v72 = i;
                    }
                    SeLogAccessFailure(v27, v55, v54, *(_QWORD *)(v72 + 1104), a1, v50 | v17, v155);
                  }
LABEL_82:
                  if ( BYTE4(v144) )
                  {
                    if ( !v59
                      && (*(_DWORD *)(v27 + 200) & 0x4000) != 0
                      && (v145 & (HIDWORD(v142) | (unsigned int)v143)) != v145 )
                    {
                      v116 = (unsigned int)~v145;
                      if ( ((unsigned int)v116 & (unsigned int)v142) == 0 && *v11 < 0 )
                        SepLogLpacAccessFailure(v116, v55, v54, v57);
                    }
                  }
                }
                if ( v121 )
                {
                  v117 = *(_QWORD *)(v134 + 32);
                  if ( v117 )
                    SepRmDereferenceCapTable(v117, v55, v54, v57);
                }
                if ( !a4 )
                  SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
                v60 = P;
                if ( P )
                {
                  AuthzBasepFreeSecurityAttributesList(P);
                  ExFreePoolWithTag(v60, 0);
                }
                return v154 && v152;
              }
              continue;
            }
            goto LABEL_48;
          }
        }
LABEL_19:
        v19 = (unsigned int)(v19 + 1);
        if ( !v23 )
          goto LABEL_20;
      }
LABEL_18:
      v23 = 0LL;
      goto LABEL_19;
    }
    if ( a6 )
    {
      *a10 = a6;
      *a11 = 0;
      if ( a7 )
        *a7 = 0LL;
      return 1;
    }
    else
    {
      *a11 = -1073741790;
      return 0;
    }
  }
  else
  {
    v70 = a5;
    if ( (a5 & 0x2000000) != 0 )
      v70 = *(_DWORD *)(a8 + 12) | a5 & 0xFDFFFFFF;
    result = 1;
    *a10 = a6 | v70;
    *a11 = 0;
  }
  return result;
}
