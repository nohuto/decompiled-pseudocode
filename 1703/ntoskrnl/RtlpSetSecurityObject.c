/*
 * XREFs of RtlpSetSecurityObject @ 0x1404F50F0
 * Callers:
 *     SeSetSecurityDescriptorInfo @ 0x1404F50B0 (SeSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfoEx @ 0x1406F8530 (SeSetSecurityDescriptorInfoEx.c)
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x140013744 (SepLocateTokenTrustLevel.c)
 *     RtlFindAceBySid @ 0x140087F40 (RtlFindAceBySid.c)
 *     RtlFindAceByType @ 0x1400DBB80 (RtlFindAceByType.c)
 *     RtlpValidTrustSubjectContext @ 0x140149030 (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlpCombineAcls @ 0x140427E70 (RtlpCombineAcls.c)
 *     SepValidOwnerSubjectContext @ 0x1404460BC (SepValidOwnerSubjectContext.c)
 *     SepValidLabelSubjectContext @ 0x14049CE4C (SepValidLabelSubjectContext.c)
 *     RtlInitializeSid @ 0x1404A47F0 (RtlInitializeSid.c)
 *     RtlValidSid @ 0x1404F5A90 (RtlValidSid.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x14051E030 (RtlpApplyAclToObject.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x1406EA05C (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x1406EA480 (RtlpCreateServerAcl.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1406EAD44 (RtlpValidFilterAclSubjectContext.c)
 *     SepGetDefaultsSubjectContext @ 0x1406F4D34 (SepGetDefaultsSubjectContext.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        char a5,
        int a6,
        __int64 a7)
{
  BOOL v7; // r14d
  char v8; // r10
  _QWORD *v9; // rsi
  __int16 v11; // r8
  unsigned __int16 *v13; // rdi
  void *v14; // r11
  __int64 v15; // rcx
  __int16 v16; // dx
  __int64 v17; // rax
  ACL *v18; // r15
  bool v19; // dl
  unsigned int v20; // eax
  unsigned __int8 *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int8 *v24; // r13
  __int16 v25; // cx
  unsigned __int16 *v26; // r15
  __int16 v27; // dx
  int v28; // r12d
  unsigned int v29; // r12d
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // esi
  unsigned int v33; // r14d
  _QWORD *PoolWithTag; // rax
  _QWORD *v35; // rbx
  char *v36; // rdi
  bool v37; // zf
  __int16 v38; // ax
  __int16 v39; // cx
  __int64 v40; // rcx
  __int64 v41; // rcx
  _QWORD *v42; // r15
  __int64 v43; // r14
  char *v44; // rdi
  __int64 v45; // r14
  int valid; // esi
  void *v47; // r12
  void *v48; // r15
  void *v49; // r14
  void *v50; // rbx
  __int64 v52; // rax
  void *TokenTrustLevel; // rcx
  __int16 v54; // r8
  void *v55; // r10
  __int64 v56; // rdx
  unsigned int v57; // ecx
  unsigned __int8 *v58; // r11
  unsigned __int8 *v59; // r9
  PVOID v60; // r15
  __int64 v61; // rax
  __int64 v62; // rax
  __int16 v63; // cx
  __int64 v64; // rcx
  __int16 v65; // ax
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned __int8 *AceBySid; // rax
  char *AceByType; // rax
  __int16 v70; // ax
  __int16 v71; // r8
  unsigned int v72; // eax
  __int64 v73; // rax
  unsigned int v74; // eax
  __int16 v75; // r8
  __int16 v76; // ax
  int v77; // ebx
  unsigned int v78; // eax
  _DWORD *v79; // rax
  __int64 v80; // r8
  unsigned int v81; // ecx
  unsigned int v82; // ecx
  unsigned int v83; // ecx
  __int16 v84; // r9
  __int64 v85; // r8
  int v86; // eax
  __int64 v87; // rdx
  __int16 v88; // r10
  __int64 v89; // rcx
  int v90; // eax
  unsigned __int8 v91; // cl
  __int16 v92; // [rsp+50h] [rbp-B0h]
  ULONG Index; // [rsp+54h] [rbp-ACh] BYREF
  char v94; // [rsp+58h] [rbp-A8h]
  char v95; // [rsp+59h] [rbp-A7h]
  bool v96; // [rsp+5Ah] [rbp-A6h]
  char v97; // [rsp+5Bh] [rbp-A5h]
  char v98; // [rsp+5Ch] [rbp-A4h]
  char v99; // [rsp+5Dh] [rbp-A3h]
  char v100; // [rsp+5Eh] [rbp-A2h]
  char v101; // [rsp+5Fh] [rbp-A1h]
  char v102; // [rsp+60h] [rbp-A0h]
  char v103; // [rsp+61h] [rbp-9Fh]
  char v104; // [rsp+62h] [rbp-9Eh]
  char v105; // [rsp+63h] [rbp-9Dh]
  char v106[4]; // [rsp+64h] [rbp-9Ch] BYREF
  void *Src; // [rsp+68h] [rbp-98h]
  PVOID v108; // [rsp+70h] [rbp-90h]
  PVOID v109; // [rsp+78h] [rbp-88h]
  PVOID v110; // [rsp+80h] [rbp-80h]
  __int64 v111; // [rsp+88h] [rbp-78h]
  PVOID v112; // [rsp+90h] [rbp-70h]
  PVOID v113; // [rsp+98h] [rbp-68h]
  _SID_IDENTIFIER_AUTHORITY PoolType; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v115; // [rsp+A8h] [rbp-58h]
  unsigned int v116; // [rsp+B0h] [rbp-50h]
  _DWORD Size[3]; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned int v118; // [rsp+C0h] [rbp-40h]
  BOOL v119; // [rsp+C4h] [rbp-3Ch]
  void *v120; // [rsp+C8h] [rbp-38h]
  __int64 v121; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v122; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v123; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v124; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v125; // [rsp+F0h] [rbp-10h] BYREF
  PVOID P; // [rsp+F8h] [rbp-8h] BYREF
  PVOID v127; // [rsp+100h] [rbp+0h] BYREF
  PVOID v128; // [rsp+108h] [rbp+8h] BYREF
  _DWORD *v129; // [rsp+110h] [rbp+10h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+118h] [rbp+18h] BYREF

  v8 = 0;
  v9 = a4;
  v115 = a4;
  LOBYTE(v7) = 0;
  v111 = a3;
  *(_DWORD *)PoolType.Value = a6;
  v11 = *(_WORD *)(a3 + 2);
  v98 = 0;
  v97 = 0;
  v106[0] = 0;
  v13 = 0LL;
  v99 = 0;
  v105 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v127 = 0LL;
  P = 0LL;
  v112 = 0LL;
  v121 = 0LL;
  v109 = 0LL;
  v123 = 0LL;
  v108 = 0LL;
  v122 = 0LL;
  v110 = 0LL;
  v124 = 0LL;
  v113 = 0LL;
  v125 = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  v95 = 0;
  LOBYTE(v118) = 0;
  v119 = v7;
  v92 = 0x8000;
  v128 = 0LL;
  if ( (v11 & 0x10) != 0 )
  {
    if ( v11 >= 0 )
    {
      v14 = *(void **)(a3 + 24);
    }
    else
    {
      v61 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v61 )
        v14 = (void *)(v61 + a3);
      else
        v14 = 0LL;
    }
  }
  else
  {
    v14 = 0LL;
  }
  v15 = *a4;
  Src = v14;
  v16 = *(_WORD *)(v15 + 2);
  if ( (~(_BYTE)v16 & 0x10) != 0 )
  {
    v18 = 0LL;
  }
  else if ( v16 >= 0 )
  {
    v18 = *(ACL **)(v15 + 24);
  }
  else
  {
    v17 = *(unsigned int *)(v15 + 12);
    if ( (_DWORD)v17 )
      v18 = (ACL *)(v15 + v17);
    else
      v18 = 0LL;
  }
  if ( v16 >= 0 )
    return (unsigned int)-1073741593;
  v94 = (v11 & 0x80u) != 0;
  v96 = (v11 & 0x40) != 0;
  if ( (a2 & 0x80u) != 0 )
    v8 = 1;
  v19 = (a2 & 0x100) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v77 = a2 | 0x1FF;
    v78 = v77 & 0xFFFFFF7F;
    if ( v8 )
      v78 = v77;
    a2 = v78 & 0xFFFFFEFF;
    if ( v19 )
      a2 = v78;
    if ( !v18 && !v14 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v11 & 0x10) != 0 )
        a2 |= 8u;
      else
        v119 = (v11 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) != 0 )
  {
    v72 = a2 >> 2;
    LOBYTE(v72) = (a2 & 4) == 0;
    v118 = v72;
    if ( v11 >= 0 )
    {
      v21 = *(unsigned __int8 **)(a3 + 8);
    }
    else
    {
      v73 = *(unsigned int *)(a3 + 4);
      if ( (_DWORD)v73 )
        v21 = (unsigned __int8 *)(v73 + a3);
      else
        v21 = 0LL;
    }
    v120 = v21;
    v97 = 1;
    if ( (a5 & 8) == 0 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      if ( !SepValidOwnerSubjectContext((__int64 *)&SubjectContext, v21, v94) )
      {
        SeReleaseSubjectContext(&SubjectContext);
        return (unsigned int)-1073741734;
      }
      SeReleaseSubjectContext(&SubjectContext);
    }
  }
  else
  {
    v20 = *(_DWORD *)(v15 + 4);
    if ( !v20 )
      return (unsigned int)-1073741734;
    v21 = (unsigned __int8 *)(v15 + v20);
    v120 = v21;
    if ( !v21 )
      return (unsigned int)-1073741734;
  }
  if ( !RtlValidSid(v21) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(a3 + 2) >= 0 )
    {
      v24 = *(unsigned __int8 **)(a3 + 16);
    }
    else
    {
      v74 = *(_DWORD *)(a3 + 8);
      if ( v74 )
        v24 = (unsigned __int8 *)(v111 + v74);
      else
        v24 = 0LL;
    }
    v98 = 1;
  }
  else
  {
    v22 = *v9;
    if ( *(__int16 *)(*v9 + 2LL) >= 0 )
    {
      v24 = *(unsigned __int8 **)(v22 + 16);
    }
    else
    {
      v23 = *(unsigned int *)(v22 + 8);
      if ( !(_DWORD)v23 )
        return (unsigned int)-1073741733;
      v24 = (unsigned __int8 *)(v22 + v23);
    }
  }
  if ( !v24 || !RtlValidSid(v24) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v13 = (unsigned __int16 *)v18;
    Src = v18;
    goto LABEL_23;
  }
  Size[0] = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    Index = 0;
    while ( 1 )
    {
      AceByType = (char *)RtlFindAceByType((PACL)Src, 0x11u, &Index);
      v112 = AceByType;
      if ( AceByType )
      {
        v37 = (*((_DWORD *)AceByType + 1) & 0xFFFFFFF8) == 0;
        *(_QWORD *)&Size[1] = AceByType + 8;
        v95 = AceByType[1];
        if ( !v37 )
          break;
      }
      SeCaptureSubjectContext(&SubjectContext);
      if ( !SepValidLabelSubjectContext((__int64 *)&SubjectContext, *(void **)&Size[1], v95) )
      {
        SeReleaseSubjectContext(&SubjectContext);
        break;
      }
      SeReleaseSubjectContext(&SubjectContext);
      ++Index;
      if ( !v112 )
        goto LABEL_84;
    }
    return (unsigned int)-1073740730;
  }
  else
  {
LABEL_84:
    SeCaptureSubjectContext(&SubjectContext);
    TokenTrustLevel = (void *)SepLocateTokenTrustLevel((__int64 *)&SubjectContext);
    v112 = TokenTrustLevel;
    v116 = a2 & 0x80;
    if ( (a2 & 0x80) == 0 )
    {
LABEL_85:
      Size[1] = a2 & 0x100;
      if ( (a2 & 0x100) != 0 )
      {
        valid = RtlpValidFilterAclSubjectContext((PACL)Src);
        if ( valid < 0 || (a5 & 2) == 0 && (valid = RtlpValidFilterAclSubjectContext(v18), valid < 0) )
        {
LABEL_191:
          SeReleaseSubjectContext(&SubjectContext);
          return (unsigned int)valid;
        }
        v9 = v115;
      }
      SeReleaseSubjectContext(&SubjectContext);
      if ( (a2 & 8) != 0 )
      {
        if ( (a5 & 2) == 0 )
        {
          v56 = v111;
          v55 = Src;
          v112 = Src;
          v75 = *(_WORD *)(v111 + 2);
          v76 = v75 & 0xA00;
          v54 = v75 & 0x2000 | 0x8010;
          v92 = v54;
          if ( v76 == 2560 )
          {
            v54 |= 0x800u;
            v92 = v54;
          }
          goto LABEL_89;
        }
        valid = RtlpComputeMergedAcl(
                  (int)v18,
                  (*(_WORD *)(*v9 + 2LL) & 0x2800 | (*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18u) >> 1,
                  (int)Src,
                  (*(_WORD *)(v111 + 2) & 0x2800 | (*(unsigned __int16 *)(v111 + 2) >> 1) & 0x18u) >> 1,
                  (__int64)v21,
                  (__int64)v24,
                  a7,
                  2,
                  (__int64)&v121,
                  (__int64)&Index);
        if ( valid < 0 )
        {
          v112 = (PVOID)v121;
          goto LABEL_63;
        }
        v9 = v115;
        v100 = 1;
        v54 = 2 * (Index & 0x1400 | (2 * (Index & 8 | 0x2004)));
        v112 = (PVOID)v121;
        v92 = v54;
      }
      else
      {
        v112 = v18;
        v54 = 0x8000;
      }
      v55 = Src;
      v56 = v111;
LABEL_89:
      if ( (a2 & 0x20) != 0 )
      {
        v57 = *(unsigned __int16 *)(v56 + 2);
        if ( (a5 & 2) != 0 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v18,
                    (((*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18 | *(_WORD *)(*v9 + 2LL) & 0x800u) >> 1) & 0xFFFFEFFF,
                    (int)v55,
                    ((v57 & 0x800 | (v57 >> 1) & 0x18) >> 1) & 0xFFFFEFFF,
                    (__int64)v21,
                    (__int64)v24,
                    a7,
                    2,
                    (__int64)&v122,
                    (__int64)&Index);
          if ( valid < 0 )
          {
            v47 = (void *)v122;
            goto LABEL_64;
          }
          v9 = v115;
          v55 = Src;
          v108 = (PVOID)v122;
          v56 = v111;
          v101 = 1;
          v54 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v92;
          v92 = v54;
        }
        else
        {
          v108 = v55;
          v54 |= v57 & 0x2000 | 0x10;
          v92 = v54;
          if ( (v57 & 0xA00) == 0xA00 )
          {
            v54 |= 0x800u;
            v92 = v54;
          }
        }
      }
      else
      {
        v108 = v18;
      }
      if ( (a2 & 0x40) != 0 )
      {
        v81 = *(unsigned __int16 *)(v56 + 2);
        if ( (a5 & 2) != 0 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v18,
                    (((*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18 | *(_WORD *)(*v9 + 2LL) & 0x800u) >> 1) & 0xFFFFEFFF,
                    (int)v55,
                    ((v81 & 0x800 | (v81 >> 1) & 0x18) >> 1) & 0xFFFFEFFF,
                    (__int64)v21,
                    (__int64)v24,
                    a7,
                    2,
                    (__int64)&v123,
                    (__int64)&Index);
          if ( valid < 0 )
          {
            v48 = (void *)v123;
            v47 = v108;
            goto LABEL_65;
          }
          v9 = v115;
          v56 = v111;
          v55 = Src;
          v109 = (PVOID)v123;
          v54 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v92;
          v102 = 1;
          v92 = v54;
        }
        else
        {
          v109 = v55;
          v54 |= v81 & 0x2000 | 0x10;
          v92 = v54;
          if ( (v81 & 0xA00) == 0xA00 )
          {
            v54 |= 0x800u;
            v92 = v54;
          }
        }
      }
      else
      {
        v109 = v18;
      }
      if ( v116 )
      {
        v82 = *(unsigned __int16 *)(v56 + 2);
        if ( (a5 & 2) != 0 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v18,
                    (((*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18 | *(_WORD *)(*v9 + 2LL) & 0x800u) >> 1) & 0xFFFFEFFF,
                    (int)v55,
                    ((v82 & 0x800 | (v82 >> 1) & 0x18) >> 1) & 0xFFFFEFFF,
                    (__int64)v21,
                    (__int64)v24,
                    a7,
                    2,
                    (__int64)&v124,
                    (__int64)&Index);
          if ( valid < 0 )
          {
            v49 = (void *)v124;
            v48 = v109;
            v47 = v108;
            goto LABEL_66;
          }
          v58 = (unsigned __int8 *)v124;
          v9 = v115;
          v56 = v111;
          v55 = Src;
          v103 = 1;
          v54 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v92;
          v110 = (PVOID)v124;
          v92 = v54;
        }
        else
        {
          v110 = v55;
          v58 = (unsigned __int8 *)v55;
          v54 |= v82 & 0x2000 | 0x10;
          v92 = v54;
          if ( (v82 & 0xA00) == 0xA00 )
          {
            v54 |= 0x800u;
            v92 = v54;
          }
        }
      }
      else
      {
        v58 = (unsigned __int8 *)v18;
        v110 = v18;
      }
      if ( Size[1] )
      {
        v83 = *(unsigned __int16 *)(v56 + 2);
        if ( (a5 & 2) != 0 )
        {
          valid = RtlpComputeMergedAcl(
                    (int)v18,
                    (((*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18 | *(_WORD *)(*v9 + 2LL) & 0x800u) >> 1) & 0xFFFFEFFF,
                    (int)v55,
                    ((v83 & 0x800 | (v83 >> 1) & 0x18) >> 1) & 0xFFFFEFFF,
                    (__int64)v21,
                    (__int64)v24,
                    a7,
                    2,
                    (__int64)&v125,
                    (__int64)&Index);
          if ( valid < 0 )
          {
            v50 = (void *)v125;
            v49 = v110;
            v48 = v109;
            v47 = v108;
LABEL_67:
            if ( v112 && v100 )
              ExFreePoolWithTag(v112, 0);
            if ( v47 && v101 )
              ExFreePoolWithTag(v47, 0);
            if ( v48 && v102 )
              ExFreePoolWithTag(v48, 0);
            if ( v49 && v103 )
              ExFreePoolWithTag(v49, 0);
            if ( v50 && v104 )
              ExFreePoolWithTag(v50, 0);
            if ( v13 && v105 )
              ExFreePoolWithTag(v13, 0);
            if ( v106[0] )
              ExFreePoolWithTag(v128, 0);
            return (unsigned int)valid;
          }
          v59 = (unsigned __int8 *)v125;
          v56 = v111;
          v55 = Src;
          v58 = (unsigned __int8 *)v110;
          v104 = 1;
          v54 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v92;
          v113 = (PVOID)v125;
          v92 = v54;
        }
        else
        {
          v113 = v55;
          v54 |= v83 & 0x2000 | 0x10;
          v59 = (unsigned __int8 *)v55;
          v92 = v54;
          if ( (v83 & 0xA00) == 0xA00 )
          {
            v54 |= 0x800u;
            v92 = v54;
          }
        }
      }
      else
      {
        v59 = (unsigned __int8 *)v18;
        v113 = v18;
      }
      if ( Size[0] )
      {
        v70 = *(_WORD *)(v56 + 2);
        v71 = v70 & 0x2000 | 0x10 | v54;
        v92 = v71;
        if ( (v70 & 0xA00) == 0xA00 )
          v92 = v71 | 0x800;
      }
      else
      {
        v55 = v18;
      }
      v60 = v112;
      valid = RtlpCombineAcls(
                (unsigned __int8 *)v112,
                (unsigned __int8 *)v55,
                (unsigned __int8 *)v108,
                (unsigned __int8 *)v109,
                v58,
                v59,
                (char **)&P,
                0LL);
      if ( valid < 0 )
        goto LABEL_63;
      v13 = (unsigned __int16 *)P;
      Src = P;
      if ( !v60 && P && !*((_WORD *)P + 2) )
      {
        ExFreePoolWithTag(P, 0);
        v13 = 0LL;
        Src = 0LL;
      }
      v9 = v115;
      v105 = 1;
LABEL_23:
      if ( (a2 & 4) == 0 )
      {
        v62 = *v9;
        v63 = *(_WORD *)(*v9 + 2LL);
        if ( (v63 & 4) != 0 )
        {
          if ( v63 >= 0 )
          {
            v26 = *(unsigned __int16 **)(v62 + 32);
          }
          else
          {
            v64 = *(unsigned int *)(v62 + 16);
            if ( (_DWORD)v64 )
              v26 = (unsigned __int16 *)(v62 + v64);
            else
              v26 = 0LL;
          }
        }
        else
        {
          v26 = 0LL;
        }
        goto LABEL_31;
      }
      if ( (a5 & 1) == 0 )
      {
        v25 = *(_WORD *)(v111 + 2);
        if ( (v25 & 4) != 0 )
        {
          if ( v25 < 0 )
          {
            v52 = *(unsigned int *)(v111 + 16);
            if ( (_DWORD)v52 )
              v26 = (unsigned __int16 *)(v111 + v52);
            else
              v26 = 0LL;
          }
          else
          {
            v26 = *(unsigned __int16 **)(v111 + 32);
          }
        }
        else
        {
          v26 = 0LL;
        }
        v27 = v25 & 0x1000 | 4 | v92;
        v92 = v27;
        if ( (v25 & 0x500) == 0x500 )
          v92 = v27 | 0x400;
LABEL_30:
        if ( v94 )
        {
          SeCaptureSubjectContext(&SubjectContext);
          SepGetDefaultsSubjectContext(
            (unsigned int)&SubjectContext,
            (unsigned int)&v121,
            (unsigned int)&v122,
            (unsigned int)&v129,
            (__int64)&v123,
            (__int64)&v124,
            (__int64)&v125,
            (__int64)&P);
          valid = RtlpCreateServerAcl((_DWORD)v26, v96, (_DWORD)v129, (unsigned int)&v128, (__int64)v106);
          SeReleaseSubjectContext(&SubjectContext);
          if ( valid < 0 )
            goto LABEL_61;
          v26 = (unsigned __int16 *)v128;
        }
LABEL_31:
        v28 = 4 * v21[1] + 11;
        Size[0] = 4 * v21[1] + 8;
        v29 = v28 & 0xFFFFFFFC;
        v30 = 4 * v24[1] + 11;
        Size[1] = 4 * v24[1] + 8;
        v31 = v30 & 0xFFFFFFFC;
        v116 = v31;
        if ( v13 )
          v32 = (v13[1] + 3) & 0xFFFFFFFC;
        else
          v32 = 0;
        if ( v26 )
          v33 = (v26[1] + 3) & 0xFFFFFFFC;
        else
          v33 = 0;
        PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)PoolType.Value, v29 + v31 + 20 + v33 + v32, 0x64536553u);
        v35 = PoolWithTag;
        if ( PoolWithTag )
        {
          v36 = (char *)PoolWithTag + 20;
          v37 = !v119;
          *PoolWithTag = 0LL;
          PoolWithTag[1] = 0LL;
          *((_DWORD *)PoolWithTag + 4) = 0;
          v38 = v92;
          *(_BYTE *)v35 = 1;
          if ( !v37 )
            v38 = v92 | 0x800;
          *((_WORD *)v35 + 1) |= v38;
          v39 = *((_WORD *)v35 + 1);
          if ( (*(_WORD *)(v111 + 2) & 0x4000) != 0 )
          {
            *((_BYTE *)v35 + 1) = *(_BYTE *)(v111 + 1);
            *((_WORD *)v35 + 1) = v39 | 0x4000;
          }
          if ( Src )
          {
            memmove((char *)v35 + 20, Src, *((unsigned __int16 *)Src + 1));
            RtlpApplyAclToObject((char *)v35 + 20, a7);
            *((_DWORD *)v35 + 3) = (_DWORD)v36 - (_DWORD)v35;
            v40 = *((unsigned __int16 *)Src + 1);
            if ( v32 > (unsigned int)v40 )
              memset(&v36[v40], 0, v32 - (unsigned int)v40);
            v36 += v32;
          }
          else
          {
            *((_DWORD *)v35 + 3) = 0;
          }
          if ( (v92 & 0x10) == 0 )
            *((_WORD *)v35 + 1) |= *(_WORD *)(*v115 + 2LL) & 0x2830;
          if ( v26 )
          {
            memmove(v36, v26, v26[1]);
            RtlpApplyAclToObject(v36, a7);
            *((_DWORD *)v35 + 4) = (_DWORD)v36 - (_DWORD)v35;
            v41 = v26[1];
            if ( v33 > (unsigned int)v41 )
              memset(&v36[v41], 0, v33 - (unsigned int)v41);
            v36 += v33;
          }
          else
          {
            *((_DWORD *)v35 + 4) = 0;
          }
          v42 = v115;
          if ( (v92 & 4) == 0 )
          {
            *((_WORD *)v35 + 1) |= *(_WORD *)(*v115 + 2LL) & 0x140C;
            if ( (_BYTE)v118 )
            {
              *(_DWORD *)PoolType.Value = 0;
              *(_WORD *)&PoolType.Value[4] = 768;
              valid = RtlInitializeSid(&SubjectContext, &PoolType, 1u);
              if ( valid < 0 )
              {
LABEL_60:
                v13 = (unsigned __int16 *)Src;
                goto LABEL_61;
              }
              SubjectContext.ImpersonationLevel = 4;
              Index = 0;
              while ( 1 )
              {
                v65 = *((_WORD *)v35 + 1);
                if ( (v65 & 4) != 0 )
                {
                  if ( v65 >= 0 )
                  {
                    v67 = v35[4];
                  }
                  else
                  {
                    v66 = *((unsigned int *)v35 + 4);
                    v67 = (_DWORD)v66 ? (__int64)v35 + v66 : 0LL;
                  }
                }
                else
                {
                  v67 = 0LL;
                }
                AceBySid = RtlFindAceBySid(v67, &SubjectContext, &Index);
                if ( !AceBySid )
                  break;
                v91 = AceBySid[1] & 0xF4 | 8;
                ++Index;
                AceBySid[1] = v91;
              }
            }
          }
          v43 = Size[0];
          memmove(v36, v120, Size[0]);
          if ( (unsigned int)v43 < v29 )
            memset(&v36[v43], 0, v29 - (unsigned int)v43);
          *((_DWORD *)v35 + 1) = (_DWORD)v36 - (_DWORD)v35;
          v44 = &v36[v29];
          if ( !v97 )
            *((_WORD *)v35 + 1) |= *(_WORD *)(*v42 + 2LL) & 1;
          v45 = Size[1];
          memmove(v44, v24, Size[1]);
          if ( (unsigned int)v45 < v116 )
            memset(&v44[v45], 0, v116 - (unsigned int)v45);
          v37 = v98 == 0;
          *((_DWORD *)v35 + 2) = (_DWORD)v44 - (_DWORD)v35;
          if ( v37 )
            *((_WORD *)v35 + 1) |= *(_WORD *)(*v42 + 2LL) & 2;
          *v42 = v35;
          valid = 0;
          goto LABEL_60;
        }
        valid = -1073741801;
LABEL_61:
        if ( v99 )
          ExFreePoolWithTag(v127, 0);
        goto LABEL_63;
      }
      v84 = *(_WORD *)(v111 + 2);
      if ( (~(_BYTE)v84 & 4) != 0 )
      {
        LODWORD(v85) = 0;
      }
      else if ( v84 >= 0 )
      {
        v85 = *(_QWORD *)(v111 + 32);
      }
      else
      {
        v86 = *(_DWORD *)(v111 + 16);
        if ( v86 )
          LODWORD(v85) = v111 + v86;
        else
          LODWORD(v85) = 0;
      }
      v87 = *v9;
      v88 = *(_WORD *)(*v9 + 2LL);
      if ( (~(_BYTE)v88 & 4) != 0 )
      {
        LODWORD(v89) = 0;
      }
      else if ( v88 >= 0 )
      {
        v89 = *(_QWORD *)(v87 + 32);
      }
      else
      {
        v90 = *(_DWORD *)(v87 + 16);
        if ( v90 )
          LODWORD(v89) = v87 + v90;
        else
          LODWORD(v89) = 0;
      }
      valid = RtlpComputeMergedAcl(
                v89,
                v88 & 0x140C,
                v85,
                v84 & 0x140C,
                (__int64)v21,
                (__int64)v24,
                a7,
                1,
                (__int64)&v127,
                (__int64)&Index);
      if ( valid >= 0 )
      {
        v26 = (unsigned __int16 *)v127;
        v99 = 1;
        v92 |= Index & 0x1408 | 4;
        goto LABEL_30;
      }
LABEL_63:
      v47 = v108;
LABEL_64:
      v48 = v109;
LABEL_65:
      v49 = v110;
LABEL_66:
      v50 = v113;
      goto LABEL_67;
    }
    if ( TokenTrustLevel )
    {
      Index = 0;
      while ( 1 )
      {
        v79 = RtlFindAceByType((PACL)Src, 0x14u, &Index);
        v129 = v79;
        if ( v79 )
        {
          if ( (v79[1] & 0xFF000000) != 0 )
          {
            valid = -1073740730;
            goto LABEL_191;
          }
          if ( !RtlpValidTrustSubjectContext(v112, v79 + 2, v80, &Size[1]) )
            break;
          v79 = v129;
        }
        ++Index;
        if ( !v79 )
          goto LABEL_85;
      }
    }
    valid = -1073741790;
    SeReleaseSubjectContext(&SubjectContext);
  }
  return (unsigned int)valid;
}
