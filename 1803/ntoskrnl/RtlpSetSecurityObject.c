/*
 * XREFs of RtlpSetSecurityObject @ 0x1404EB1D0
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1404E1604 (CmpSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfo @ 0x1404EB190 (SeSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfoEx @ 0x1405796B0 (SeSetSecurityDescriptorInfoEx.c)
 * Callees:
 *     RtlFindAceBySid @ 0x14005C220 (RtlFindAceBySid.c)
 *     RtlFindAceByType @ 0x14005C9A0 (RtlFindAceByType.c)
 *     SepLocateTokenTrustLevel @ 0x14005C9F4 (SepLocateTokenTrustLevel.c)
 *     RtlpValidTrustSubjectContext @ 0x14016CACC (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlpApplyAclToObject @ 0x1404C5F80 (RtlpApplyAclToObject.c)
 *     RtlpCombineAcls @ 0x1404C6050 (RtlpCombineAcls.c)
 *     RtlValidSid @ 0x1404C80A0 (RtlValidSid.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SepValidLabelSubjectContext @ 0x1404EBF4C (SepValidLabelSubjectContext.c)
 *     RtlInitializeSid @ 0x140541FB0 (RtlInitializeSid.c)
 *     SepValidOwnerSubjectContext @ 0x140569EF0 (SepValidOwnerSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x1407856EC (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x140785B10 (RtlpCreateServerAcl.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1407863E4 (RtlpValidFilterAclSubjectContext.c)
 *     SepGetDefaultsSubjectContext @ 0x140790B2C (SepGetDefaultsSubjectContext.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        char a5,
        int a6,
        _DWORD *a7,
        __int64 *a8)
{
  __int16 v8; // si
  _QWORD *v10; // rdi
  unsigned __int16 *v11; // r12
  __int16 v13; // ax
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r11
  void *v15; // r14
  __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rax
  ACL *v19; // r15
  __int16 v20; // r8
  int v21; // edx
  __int64 v22; // rax
  unsigned __int8 *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int8 *v26; // r13
  __int16 v27; // cx
  unsigned __int16 *v28; // r15
  int v29; // ecx
  int v30; // eax
  unsigned int v31; // esi
  unsigned int v32; // r14d
  _QWORD *PoolWithTag; // rax
  _QWORD *v34; // rbx
  bool v35; // zf
  char *v36; // rdi
  int v37; // r12d
  __int16 v38; // ax
  __int64 v39; // rdx
  __int16 v40; // cx
  unsigned __int16 *v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // r12
  __int64 v44; // rcx
  __int64 v45; // rsi
  int v46; // eax
  char *v47; // rdi
  int valid; // esi
  unsigned __int8 *v49; // r15
  void *v50; // r14
  void *v51; // rdi
  void *v52; // rbx
  __int64 v54; // rax
  void *TokenTrustLevel; // rdx
  __int64 v56; // r9
  int v57; // ecx
  unsigned __int8 *v58; // r10
  unsigned int v59; // r8d
  __int16 v60; // ax
  __int16 v61; // dx
  __int16 v62; // dx
  unsigned __int8 *v63; // rsi
  unsigned __int8 *v64; // r11
  PVOID v65; // r15
  __int64 v66; // rax
  __int64 v67; // rax
  __int16 v68; // cx
  __int64 v69; // rcx
  __int16 v70; // ax
  __int64 v71; // rax
  __int64 v72; // rcx
  char *AceBySid; // rax
  unsigned __int8 *AceByType; // rax
  __int16 v75; // dx
  unsigned int v76; // eax
  __int64 v77; // rax
  unsigned int v78; // eax
  unsigned int v79; // edx
  _DWORD *v80; // rax
  __int64 v81; // r8
  unsigned int v82; // r8d
  __int16 v83; // ax
  int v84; // ebx
  unsigned int v85; // eax
  int v86; // eax
  unsigned int v87; // r8d
  __int16 v88; // ax
  unsigned int v89; // r8d
  __int16 v90; // ax
  __int64 v91; // r8
  int v92; // eax
  __int64 v93; // rax
  __int16 v94; // dx
  __int64 v95; // rcx
  int v96; // ecx
  char v97; // cl
  __int16 v98; // [rsp+58h] [rbp-B0h]
  ULONG Index; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned __int8 v100; // [rsp+60h] [rbp-A8h]
  bool v101; // [rsp+61h] [rbp-A7h]
  bool v102; // [rsp+62h] [rbp-A6h]
  char v103; // [rsp+63h] [rbp-A5h]
  char v104; // [rsp+64h] [rbp-A4h]
  char v105; // [rsp+65h] [rbp-A3h]
  char v106; // [rsp+66h] [rbp-A2h]
  char v107; // [rsp+67h] [rbp-A1h]
  __int16 v108; // [rsp+68h] [rbp-A0h]
  char v109; // [rsp+6Ah] [rbp-9Eh]
  __int16 v110; // [rsp+6Bh] [rbp-9Dh] BYREF
  void *Src; // [rsp+70h] [rbp-98h]
  PVOID v112; // [rsp+78h] [rbp-90h]
  unsigned __int8 *v113; // [rsp+80h] [rbp-88h]
  PVOID v114; // [rsp+88h] [rbp-80h]
  PVOID v115; // [rsp+90h] [rbp-78h]
  _SID_IDENTIFIER_AUTHORITY PoolType; // [rsp+98h] [rbp-70h] BYREF
  PVOID v117; // [rsp+A0h] [rbp-68h]
  _DWORD *v118; // [rsp+A8h] [rbp-60h]
  __int64 v119; // [rsp+B0h] [rbp-58h]
  size_t v120; // [rsp+B8h] [rbp-50h] BYREF
  int v121; // [rsp+C0h] [rbp-48h]
  unsigned int v122; // [rsp+C4h] [rbp-44h]
  void *v123; // [rsp+C8h] [rbp-40h]
  __int64 *v124; // [rsp+D0h] [rbp-38h]
  PVOID P; // [rsp+D8h] [rbp-30h] BYREF
  size_t Size; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v127; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v128; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v129; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v130; // [rsp+100h] [rbp-8h] BYREF
  __int64 v131; // [rsp+108h] [rbp+0h] BYREF
  int v132; // [rsp+110h] [rbp+8h]
  PVOID v133; // [rsp+118h] [rbp+10h] BYREF
  PVOID v134; // [rsp+120h] [rbp+18h] BYREF
  _QWORD *v135; // [rsp+128h] [rbp+20h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+130h] [rbp+28h] BYREF
  __int16 Sid; // [rsp+150h] [rbp+48h] BYREF
  int v138; // [rsp+158h] [rbp+50h]

  v8 = 0x8000;
  v10 = a4;
  v11 = 0LL;
  *(_DWORD *)PoolType.Value = a6;
  v13 = *(_WORD *)(a3 + 2);
  p_SubjectContext = (struct _SECURITY_SUBJECT_CONTEXT *)a8;
  v135 = a4;
  v119 = a3;
  v124 = a8;
  v104 = 0;
  v103 = 0;
  v105 = 0;
  v110 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v133 = 0LL;
  P = 0LL;
  v115 = 0LL;
  v131 = 0LL;
  v114 = 0LL;
  v128 = 0LL;
  v113 = 0LL;
  v127 = 0LL;
  v112 = 0LL;
  v129 = 0LL;
  v117 = 0LL;
  v130 = 0LL;
  v120 = 0LL;
  v100 = 0;
  LOBYTE(v122) = 0;
  LOBYTE(v121) = 0;
  v98 = 0x8000;
  v134 = 0LL;
  if ( (v13 & 0x10) != 0 )
  {
    if ( v13 >= 0 )
    {
      v15 = *(void **)(a3 + 24);
    }
    else
    {
      v66 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v66 )
        v15 = (void *)(v66 + a3);
      else
        v15 = 0LL;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *a4;
  Src = v15;
  v17 = *(_WORD *)(v16 + 2);
  if ( (v17 & 0x10) != 0 )
  {
    if ( v17 >= 0 )
    {
      v19 = *(ACL **)(v16 + 24);
    }
    else
    {
      v18 = *(unsigned int *)(v16 + 12);
      if ( (_DWORD)v18 )
        v19 = (ACL *)(v16 + v18);
      else
        v19 = 0LL;
    }
  }
  else
  {
    v19 = 0LL;
  }
  if ( !a8 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v16 = *v10;
    p_SubjectContext = &SubjectContext;
    v124 = (__int64 *)&SubjectContext;
  }
  if ( *(__int16 *)(v16 + 2) >= 0 )
  {
    valid = -1073741593;
    goto LABEL_75;
  }
  v20 = *(_WORD *)(a3 + 2);
  v101 = (v20 & 0x80u) != 0;
  v102 = (v20 & 0x40) != 0;
  v21 = a2 & 0x80;
  LOBYTE(a4) = (a2 & 0x100) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v84 = a2 | 0x1FF;
    v85 = v84 & 0xFFFFFF7F;
    if ( v21 )
      v85 = v84;
    a2 = v85 & 0xFFFFFEFF;
    if ( (_BYTE)a4 )
      a2 = v85;
    if ( !v19 && !v15 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v20 & 0x10) != 0 )
      {
        a2 |= 8u;
      }
      else
      {
        v86 = (unsigned __int8)v121;
        if ( (v20 & 0x800) != 0 )
          v86 = 1;
        v121 = v86;
      }
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( *(__int16 *)(v16 + 2) >= 0 )
    {
      v23 = *(unsigned __int8 **)(v16 + 8);
    }
    else
    {
      v22 = *(unsigned int *)(v16 + 4);
      if ( !(_DWORD)v22 )
        goto LABEL_187;
      v23 = (unsigned __int8 *)(v16 + v22);
    }
    v123 = v23;
    if ( v23 )
      goto LABEL_16;
LABEL_187:
    valid = -1073741734;
    goto LABEL_75;
  }
  v76 = a2 >> 2;
  LOBYTE(v76) = (a2 & 4) == 0;
  v122 = v76;
  if ( v20 >= 0 )
  {
    v23 = *(unsigned __int8 **)(a3 + 8);
  }
  else
  {
    v77 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v77 )
      v23 = (unsigned __int8 *)(v77 + a3);
    else
      v23 = 0LL;
  }
  v123 = v23;
  v103 = 1;
  if ( (a5 & 8) == 0 && !(unsigned __int8)SepValidOwnerSubjectContext(p_SubjectContext, v23, (v20 & 0x80u) != 0, a4) )
  {
    valid = -1073741734;
    goto LABEL_75;
  }
LABEL_16:
  if ( !RtlValidSid(v23) )
  {
    valid = -1073741734;
    goto LABEL_75;
  }
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(a3 + 2) >= 0 )
    {
      v26 = *(unsigned __int8 **)(a3 + 16);
    }
    else
    {
      v78 = *(_DWORD *)(a3 + 8);
      if ( v78 )
        v26 = (unsigned __int8 *)(v119 + v78);
      else
        v26 = 0LL;
    }
    v104 = 1;
  }
  else
  {
    v24 = *v10;
    if ( *(__int16 *)(*v10 + 2LL) >= 0 )
    {
      v26 = *(unsigned __int8 **)(v24 + 16);
    }
    else
    {
      v25 = *(unsigned int *)(v24 + 8);
      if ( !(_DWORD)v25 )
      {
LABEL_247:
        valid = -1073741733;
        goto LABEL_75;
      }
      v26 = (unsigned __int8 *)(v24 + v25);
    }
  }
  if ( !v26 || !RtlValidSid(v26) )
    goto LABEL_247;
  if ( (a2 & 0x1F8) == 0 )
  {
    v11 = (unsigned __int16 *)v19;
    Src = v19;
    goto LABEL_25;
  }
  LODWORD(Size) = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    Index = 0;
    while ( 1 )
    {
      AceByType = (unsigned __int8 *)RtlFindAceByType((PACL)Src, 0x11u, &Index);
      v115 = AceByType;
      if ( AceByType )
      {
        v35 = (*((_DWORD *)AceByType + 1) & 0xFFFFFFF8) == 0;
        v120 = (size_t)(AceByType + 8);
        v100 = AceByType[1];
        if ( !v35 )
          break;
      }
      if ( !(unsigned __int8)SepValidLabelSubjectContext(v124, v120, v100) )
        break;
      ++Index;
      if ( !v115 )
        goto LABEL_81;
    }
LABEL_191:
    valid = -1073740730;
  }
  else
  {
LABEL_81:
    TokenTrustLevel = (void *)SepLocateTokenTrustLevel(v124);
    v115 = TokenTrustLevel;
    v132 = a2 & 0x80;
    if ( (a2 & 0x80) == 0 )
    {
LABEL_82:
      LODWORD(v120) = a2 & 0x100;
      if ( (a2 & 0x100) != 0 )
      {
        valid = RtlpValidFilterAclSubjectContext((PACL)Src);
        if ( valid < 0 )
          goto LABEL_75;
        if ( (a5 & 2) == 0 )
        {
          valid = RtlpValidFilterAclSubjectContext(v19);
          if ( valid < 0 )
            goto LABEL_75;
        }
        v8 = 0x8000;
      }
      v56 = v119;
      v57 = a5 & 2;
      LODWORD(v118) = v57;
      if ( (a2 & 8) != 0 )
      {
        v79 = *(unsigned __int16 *)(v119 + 2);
        if ( (a5 & 2) == 0 )
        {
          v58 = (unsigned __int8 *)Src;
          v115 = Src;
          v8 = v79 & 0x2000 | 0x8010;
          if ( (v79 & 0xA00) == 0xA00 )
            v8 = v79 & 0x2000 | 0x8810;
          v98 = v8;
          goto LABEL_86;
        }
        valid = RtlpComputeMergedAcl(
                  (int)v19,
                  (*(_WORD *)(*v10 + 2LL) & 0x2800 | (*(unsigned __int16 *)(*v10 + 2LL) >> 1) & 0x18u) >> 1,
                  (int)Src,
                  (v79 & 0x2800 | (v79 >> 1) & 0x18) >> 1,
                  (__int64)v23,
                  (__int64)v26,
                  (__int64)a7,
                  2,
                  (__int64)&v131,
                  (__int64)&Index);
        if ( valid < 0 )
        {
          v115 = (PVOID)v131;
          goto LABEL_61;
        }
        v57 = (int)v118;
        v56 = v119;
        v106 = 1;
        v8 = 2 * (Index & 0x1400 | (2 * (Index & 8 | 0x2004)));
        v115 = (PVOID)v131;
        v98 = v8;
      }
      else
      {
        v115 = v19;
        LODWORD(v118) = a5 & 2;
      }
      v58 = (unsigned __int8 *)Src;
LABEL_86:
      if ( (a2 & 0x20) != 0 )
      {
        v59 = *(unsigned __int16 *)(v56 + 2);
        if ( v57 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v19,
                    (*(_WORD *)(*v10 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v10 + 2LL) >> 1) & 0x18u) >> 1,
                    (int)v58,
                    (v59 & 0x800 | (v59 >> 1) & 0x18) >> 1,
                    (__int64)v23,
                    (__int64)v26,
                    (__int64)a7,
                    2,
                    (__int64)&v127,
                    (__int64)&Index);
          if ( valid < 0 )
          {
            v49 = (unsigned __int8 *)v127;
            goto LABEL_62;
          }
          v56 = v119;
          v58 = (unsigned __int8 *)Src;
          v107 = 1;
          v113 = (unsigned __int8 *)v127;
          v61 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v98;
          v57 = (int)v118;
          v98 = v61;
        }
        else
        {
          v113 = v58;
          v60 = v8 | v59 & 0x2000;
          v61 = v60 | 0x10;
          v98 = v60 | 0x10;
          if ( (v59 & 0xA00) == 0xA00 )
          {
            v61 = v60 | 0x810;
            v98 = v60 | 0x810;
          }
        }
      }
      else
      {
        v61 = v98;
        v113 = (unsigned __int8 *)v19;
      }
      if ( (a2 & 0x40) != 0 )
      {
        v87 = *(unsigned __int16 *)(v56 + 2);
        if ( v57 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v19,
                    (*(_WORD *)(*v10 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v10 + 2LL) >> 1) & 0x18u) >> 1,
                    (int)v58,
                    (v87 & 0x800 | (v87 >> 1) & 0x18) >> 1,
                    (__int64)v23,
                    (__int64)v26,
                    (__int64)a7,
                    2,
                    (__int64)&v128,
                    (__int64)&Index);
          if ( valid < 0 )
          {
            v50 = (void *)v128;
            v49 = v113;
            goto LABEL_63;
          }
          v56 = v119;
          v58 = (unsigned __int8 *)Src;
          v114 = (PVOID)v128;
          LOBYTE(v108) = 1;
          v61 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v98;
          v57 = (int)v118;
          v98 = v61;
        }
        else
        {
          v114 = v58;
          v88 = v61 | v87 & 0x2000;
          v61 = v88 | 0x10;
          v98 = v88 | 0x10;
          if ( (v87 & 0xA00) == 0xA00 )
          {
            v61 = v88 | 0x810;
            v98 = v88 | 0x810;
          }
        }
      }
      else
      {
        v114 = v19;
      }
      if ( v132 )
      {
        v82 = *(unsigned __int16 *)(v56 + 2);
        if ( v57 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v19,
                    (*(_WORD *)(*v10 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v10 + 2LL) >> 1) & 0x18u) >> 1,
                    (int)v58,
                    (v82 & 0x800 | (v82 >> 1) & 0x18) >> 1,
                    (__int64)v23,
                    (__int64)v26,
                    (__int64)a7,
                    2,
                    (__int64)&v129,
                    (__int64)&Index);
          if ( valid < 0 )
          {
            v51 = (void *)v129;
            v50 = v114;
            v49 = v113;
            goto LABEL_64;
          }
          v63 = (unsigned __int8 *)v129;
          v56 = v119;
          v58 = (unsigned __int8 *)Src;
          HIBYTE(v108) = 1;
          v112 = (PVOID)v129;
          v62 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v98;
          v57 = (int)v118;
          v98 = v62;
        }
        else
        {
          v112 = v58;
          v83 = v61 | v82 & 0x2000;
          v63 = v58;
          v62 = v83 | 0x10;
          v98 = v83 | 0x10;
          if ( (v82 & 0xA00) == 0xA00 )
          {
            v62 = v83 | 0x810;
            v98 = v83 | 0x810;
          }
        }
      }
      else
      {
        v62 = v98;
        v63 = (unsigned __int8 *)v19;
        v112 = v19;
      }
      if ( (_DWORD)v120 )
      {
        v89 = *(unsigned __int16 *)(v56 + 2);
        if ( v57 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v19,
                    (*(_WORD *)(*v10 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v10 + 2LL) >> 1) & 0x18u) >> 1,
                    (int)v58,
                    (v89 & 0x800 | (v89 >> 1) & 0x18) >> 1,
                    (__int64)v23,
                    (__int64)v26,
                    (__int64)a7,
                    2,
                    (__int64)&v130,
                    (__int64)&Index);
          if ( valid < 0 )
          {
            v52 = (void *)v130;
            v51 = v112;
            v50 = v114;
            v49 = v113;
LABEL_65:
            if ( v115 && v106 )
              ExFreePoolWithTag(v115, 0);
            if ( v49 && v107 )
              ExFreePoolWithTag(v49, 0);
            if ( v50 && (_BYTE)v108 )
              ExFreePoolWithTag(v50, 0);
            if ( v51 && HIBYTE(v108) )
              ExFreePoolWithTag(v51, 0);
            if ( v52 && v109 )
              ExFreePoolWithTag(v52, 0);
            if ( v11 && (_BYTE)v110 )
              ExFreePoolWithTag(v11, 0);
            if ( HIBYTE(v110) )
              ExFreePoolWithTag(v134, 0);
            goto LABEL_75;
          }
          v64 = (unsigned __int8 *)v130;
          v56 = v119;
          v58 = (unsigned __int8 *)Src;
          v63 = (unsigned __int8 *)v112;
          v109 = 1;
          v62 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v98;
          v117 = (PVOID)v130;
          v98 = v62;
        }
        else
        {
          v117 = v58;
          v90 = v62 | v89 & 0x2000;
          v64 = v58;
          v62 = v90 | 0x10;
          v98 = v90 | 0x10;
          if ( (v89 & 0xA00) == 0xA00 )
          {
            v62 = v90 | 0x810;
            v98 = v90 | 0x810;
          }
        }
      }
      else
      {
        v64 = (unsigned __int8 *)v19;
        v117 = v19;
      }
      if ( (_DWORD)Size )
      {
        v75 = v62 | *(_WORD *)(v56 + 2) & 0x2000;
        v98 = v75 | 0x10;
        if ( (*(_WORD *)(v56 + 2) & 0xA00) == 0xA00 )
          v98 = v75 | 0x810;
      }
      else
      {
        v58 = (unsigned __int8 *)v19;
      }
      v65 = v115;
      valid = RtlpCombineAcls((unsigned __int8 *)v115, v58, v113, (unsigned __int8 *)v114, v63, v64, (char **)&P, 0LL);
      if ( valid < 0 )
        goto LABEL_61;
      v11 = (unsigned __int16 *)P;
      Src = P;
      if ( !v65 && P && !*((_WORD *)P + 2) )
      {
        ExFreePoolWithTag(P, 0);
        v11 = 0LL;
        Src = 0LL;
      }
      v8 = v98;
      LOBYTE(v110) = 1;
LABEL_25:
      if ( (a2 & 4) == 0 )
      {
        v67 = *v10;
        v68 = *(_WORD *)(*v10 + 2LL);
        if ( (v68 & 4) != 0 )
        {
          if ( v68 >= 0 )
          {
            v28 = *(unsigned __int16 **)(v67 + 32);
          }
          else
          {
            v69 = *(unsigned int *)(v67 + 16);
            if ( (_DWORD)v69 )
              v28 = (unsigned __int16 *)(v67 + v69);
            else
              v28 = 0LL;
          }
        }
        else
        {
          v28 = 0LL;
        }
        goto LABEL_33;
      }
      v27 = *(_WORD *)(v119 + 2);
      if ( (a5 & 1) == 0 )
      {
        if ( (v27 & 4) != 0 )
        {
          if ( v27 < 0 )
          {
            v54 = *(unsigned int *)(v119 + 16);
            if ( (_DWORD)v54 )
              v28 = (unsigned __int16 *)(v119 + v54);
            else
              v28 = 0LL;
          }
          else
          {
            v28 = *(unsigned __int16 **)(v119 + 32);
          }
        }
        else
        {
          v28 = 0LL;
        }
        v98 = v8 | v27 & 0x1000 | 4;
        if ( (v27 & 0x500) == 0x500 )
          v98 = v8 | v27 & 0x1000 | 0x404;
LABEL_32:
        if ( v101 )
        {
          SepGetDefaultsSubjectContext(
            (_DWORD)v124,
            (unsigned int)&Size,
            (unsigned int)&v131,
            (unsigned int)&P,
            (__int64)&v127,
            (__int64)&v128,
            (__int64)&v129,
            (__int64)&v130);
          valid = RtlpCreateServerAcl((_DWORD)v28, v102, (_DWORD)P, (unsigned int)&v134, (__int64)&v110 + 1);
          if ( valid < 0 )
            goto LABEL_59;
          v28 = (unsigned __int16 *)v134;
        }
LABEL_33:
        v29 = 4 * v23[1] + 8;
        v30 = v26[1];
        LODWORD(Size) = v29;
        LODWORD(v120) = 4 * v30 + 8;
        if ( v11 )
          v31 = (v11[1] + 3) & 0xFFFFFFFC;
        else
          v31 = 0;
        if ( v28 )
          v32 = (v28[1] + 3) & 0xFFFFFFFC;
        else
          v32 = 0;
        PoolWithTag = ExAllocatePoolWithTag(
                        *(POOL_TYPE *)PoolType.Value,
                        4 * v30 + 8 + v32 + v31 + v29 + 20,
                        0x64536553u);
        v34 = PoolWithTag;
        if ( PoolWithTag )
        {
          LODWORD(v118) = (_DWORD)PoolWithTag;
          v35 = (_BYTE)v121 == 0;
          v36 = (char *)PoolWithTag + 20;
          *PoolWithTag = 0LL;
          v37 = (_DWORD)PoolWithTag + 20;
          PoolWithTag[1] = 0LL;
          *((_DWORD *)PoolWithTag + 4) = 0;
          v38 = v98;
          *(_BYTE *)v34 = 1;
          if ( !v35 )
          {
            v38 = v98 | 0x800;
            LODWORD(v118) = (_DWORD)v34;
          }
          v39 = v119;
          v40 = *((_WORD *)v34 + 1) | v38;
          *((_WORD *)v34 + 1) = v40;
          if ( (*(_WORD *)(v39 + 2) & 0x4000) != 0 )
          {
            *((_BYTE *)v34 + 1) = *(_BYTE *)(v39 + 1);
            *((_WORD *)v34 + 1) = v40 | 0x4000;
          }
          if ( Src )
          {
            memmove((char *)v34 + 20, Src, *((unsigned __int16 *)Src + 1));
            RtlpApplyAclToObject((__int64)v34 + 20, a7);
            v41 = (unsigned __int16 *)Src;
            *((_DWORD *)v34 + 3) = v37 - (_DWORD)v118;
            v42 = v41[1];
            if ( v31 > (unsigned int)v42 )
              memset(&v36[v42], 0, v31 - (unsigned int)v42);
            v36 += v31;
          }
          else
          {
            *((_DWORD *)v34 + 3) = 0;
          }
          v43 = v135;
          if ( (v98 & 0x10) == 0 )
            *((_WORD *)v34 + 1) |= *(_WORD *)(*v135 + 2LL) & 0x2830;
          if ( v28 )
          {
            memmove(v36, v28, v28[1]);
            RtlpApplyAclToObject((__int64)v36, a7);
            *((_DWORD *)v34 + 4) = (_DWORD)v36 - (_DWORD)v118;
            v44 = v28[1];
            if ( v32 > (unsigned int)v44 )
              memset(&v36[v44], 0, v32 - (unsigned int)v44);
            v36 += v32;
          }
          else
          {
            *((_DWORD *)v34 + 4) = 0;
          }
          if ( (v98 & 4) == 0 )
          {
            *((_WORD *)v34 + 1) |= *(_WORD *)(*v43 + 2LL) & 0x140C;
            if ( (_BYTE)v122 )
            {
              *(_DWORD *)PoolType.Value = 0;
              *(_WORD *)&PoolType.Value[4] = 768;
              valid = RtlInitializeSid(&Sid, &PoolType, 1u);
              if ( valid < 0 )
              {
LABEL_58:
                v11 = (unsigned __int16 *)Src;
                goto LABEL_59;
              }
              v138 = 4;
              Index = 0;
              while ( 1 )
              {
                v70 = *((_WORD *)v34 + 1);
                if ( (v70 & 4) != 0 )
                {
                  if ( v70 >= 0 )
                  {
                    v72 = v34[4];
                  }
                  else
                  {
                    v71 = *((unsigned int *)v34 + 4);
                    v72 = (_DWORD)v71 ? (__int64)v34 + v71 : 0LL;
                  }
                }
                else
                {
                  v72 = 0LL;
                }
                AceBySid = RtlFindAceBySid(v72, &Sid, &Index);
                if ( !AceBySid )
                  break;
                v97 = AceBySid[1] & 0xF4 | 8;
                ++Index;
                AceBySid[1] = v97;
              }
            }
          }
          v45 = (unsigned int)Size;
          memmove(v36, v123, (unsigned int)Size);
          v46 = (int)v36;
          v47 = &v36[v45];
          v35 = v103 == 0;
          *((_DWORD *)v34 + 1) = v46 - (_DWORD)v34;
          if ( v35 )
            *((_WORD *)v34 + 1) |= *(_WORD *)(*v43 + 2LL) & 1;
          memmove(v47, v26, (unsigned int)v120);
          v35 = v104 == 0;
          *((_DWORD *)v34 + 2) = (_DWORD)v47 - (_DWORD)v34;
          if ( v35 )
            *((_WORD *)v34 + 1) |= *(_WORD *)(*v43 + 2LL) & 2;
          *v43 = v34;
          valid = 0;
          goto LABEL_58;
        }
        valid = -1073741801;
LABEL_59:
        if ( v105 )
          ExFreePoolWithTag(v133, 0);
        goto LABEL_61;
      }
      if ( (v27 & 4) != 0 )
      {
        if ( v27 >= 0 )
        {
          v91 = *(_QWORD *)(v119 + 32);
        }
        else
        {
          v92 = *(_DWORD *)(v119 + 16);
          if ( v92 )
            LODWORD(v91) = v119 + v92;
          else
            LODWORD(v91) = 0;
        }
      }
      else
      {
        LODWORD(v91) = 0;
      }
      v93 = *v10;
      v94 = *(_WORD *)(*v10 + 2LL);
      if ( (v94 & 4) != 0 )
      {
        if ( v94 >= 0 )
        {
          v95 = *(_QWORD *)(v93 + 32);
        }
        else
        {
          v96 = *(_DWORD *)(v93 + 16);
          if ( v96 )
            LODWORD(v95) = v93 + v96;
          else
            LODWORD(v95) = 0;
        }
      }
      else
      {
        LODWORD(v95) = 0;
      }
      valid = RtlpComputeMergedAcl(
                v95,
                v94 & 0x140C,
                v91,
                *(_WORD *)(v119 + 2) & 0x140C,
                (__int64)v23,
                (__int64)v26,
                (__int64)a7,
                1,
                (__int64)&v133,
                (__int64)&Index);
      if ( valid >= 0 )
      {
        v28 = (unsigned __int16 *)v133;
        v105 = 1;
        v98 |= Index & 0x1408 | 4;
        goto LABEL_32;
      }
LABEL_61:
      v49 = v113;
LABEL_62:
      v50 = v114;
LABEL_63:
      v51 = v112;
LABEL_64:
      v52 = v117;
      goto LABEL_65;
    }
    if ( TokenTrustLevel )
    {
      Index = 0;
      while ( 1 )
      {
        v80 = RtlFindAceByType((PACL)Src, 0x14u, &Index);
        v118 = v80;
        if ( v80 )
        {
          if ( (v80[1] & 0xFF000000) != 0 )
            goto LABEL_191;
          if ( !RtlpValidTrustSubjectContext(v115, v80 + 2, v81, (NTSTATUS *)&v120) )
            break;
          v80 = v118;
        }
        ++Index;
        if ( !v80 )
          goto LABEL_82;
      }
    }
    valid = -1073741790;
  }
LABEL_75:
  if ( v124 == (__int64 *)&SubjectContext )
    SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)valid;
}
