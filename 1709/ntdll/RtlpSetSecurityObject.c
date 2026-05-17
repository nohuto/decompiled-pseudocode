/*
 * XREFs of RtlpSetSecurityObject @ 0x18005A120
 * Callers:
 *     RtlSetSecurityObject @ 0x18005AF70 (RtlSetSecurityObject.c)
 *     RtlSetSecurityObjectEx @ 0x180090600 (RtlSetSecurityObjectEx.c)
 * Callees:
 *     RtlpValidTrustSubjectContext @ 0x1800021CC (RtlpValidTrustSubjectContext.c)
 *     RtlValidSid @ 0x18002DA50 (RtlValidSid.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlpValidFilterAclSubjectContext @ 0x180053E94 (RtlpValidFilterAclSubjectContext.c)
 *     RtlFindAceByType @ 0x180056510 (RtlFindAceByType.c)
 *     RtlpCombineAcls @ 0x1800569A0 (RtlpCombineAcls.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800571B0 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlInitializeSid @ 0x180057700 (RtlInitializeSid.c)
 *     RtlpApplyAclToObject @ 0x1800578D8 (RtlpApplyAclToObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x18005C080 (RtlpValidOwnerSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x18008EE24 (RtlpComputeMergedAcl.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A04E0 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A2490 (NtOpenProcessToken.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800E6148 (RtlpCreateServerAcl.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E6538 (RtlpValidLabelSubjectContext.c)
 *     RtlFindAceBySid @ 0x1800E74F4 (RtlFindAceBySid.c)
 */

__int64 __fastcall RtlpSetSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 *a4,
        char a5,
        int a6,
        _DWORD *a7,
        size_t a8)
{
  BOOL v8; // r11d
  size_t v9; // rbx
  __int16 v12; // dx
  __int16 v13; // si
  unsigned __int8 *v14; // r15
  unsigned __int64 v15; // rcx
  unsigned __int16 *v16; // rdi
  void *ProcessHeap; // r12
  __int16 v18; // ax
  int v19; // r8d
  int v20; // r9d
  _BYTE *v21; // rax
  unsigned __int64 v22; // rax
  _BYTE *v23; // rcx
  unsigned __int8 *v24; // r15
  __int16 v25; // cx
  unsigned __int16 *v26; // r15
  __int16 v27; // ax
  int v28; // ecx
  int v29; // r8d
  unsigned int v30; // ebx
  unsigned int v31; // r12d
  __int64 v32; // rdi
  char *v33; // r14
  __int16 v34; // cx
  unsigned __int16 *v35; // r13
  __int64 v36; // rcx
  unsigned __int64 *v37; // r13
  __int64 v38; // rcx
  __int64 v39; // rsi
  int v40; // eax
  char *v41; // r14
  int valid; // ebx
  unsigned __int64 v43; // rdi
  __int16 v45; // r9
  __int64 v46; // r8
  unsigned __int64 v47; // rax
  __int16 v48; // dx
  __int64 v49; // rcx
  unsigned int v50; // eax
  void *v51; // rax
  __int64 v52; // r8
  void *v53; // rax
  unsigned __int64 v54; // rdi
  __int64 v55; // r15
  unsigned __int8 *v56; // r15
  unsigned __int8 *v57; // rdi
  unsigned __int8 *v58; // rdx
  int v59; // r14d
  unsigned int v60; // eax
  unsigned __int8 *v61; // rax
  unsigned __int8 *v62; // rdi
  bool v63; // zf
  __int64 v64; // r8
  size_t v65; // rcx
  unsigned __int8 *AceByType; // rax
  __int64 v67; // r8
  unsigned __int8 *v68; // rbx
  unsigned __int64 v69; // r8
  __int64 v70; // rdx
  unsigned int v71; // ecx
  __int16 v72; // ax
  unsigned int v73; // ecx
  __int16 v74; // ax
  unsigned int v75; // ecx
  __int16 v76; // ax
  unsigned int v77; // ecx
  __int16 v78; // ax
  __int16 v79; // ax
  __int16 v80; // cx
  __int16 v81; // ax
  _QWORD *Heap; // rdi
  unsigned __int64 v83; // r8
  int v84; // edx
  unsigned __int64 v85; // rax
  __int64 v86; // rcx
  __int64 AceBySid; // rax
  char v88; // cl
  __int64 v89; // [rsp+50h] [rbp-B0h]
  unsigned __int8 *v90; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v91; // [rsp+58h] [rbp-A8h]
  char v92; // [rsp+59h] [rbp-A7h]
  char v93; // [rsp+5Ah] [rbp-A6h]
  char v94; // [rsp+5Bh] [rbp-A5h]
  char v95; // [rsp+5Ch] [rbp-A4h]
  char v96; // [rsp+5Dh] [rbp-A3h]
  char v97; // [rsp+5Eh] [rbp-A2h]
  char v98; // [rsp+5Fh] [rbp-A1h]
  char v99; // [rsp+60h] [rbp-A0h]
  char v100; // [rsp+61h] [rbp-9Fh]
  char v101[2]; // [rsp+62h] [rbp-9Eh] BYREF
  int v102; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v103; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int8 *v104; // [rsp+70h] [rbp-90h]
  int InformationToken; // [rsp+78h] [rbp-88h] BYREF
  bool v106; // [rsp+7Ch] [rbp-84h]
  bool v107; // [rsp+7Dh] [rbp-83h]
  void *v108; // [rsp+80h] [rbp-80h]
  void *v109; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v110; // [rsp+90h] [rbp-70h]
  int v111; // [rsp+98h] [rbp-68h] BYREF
  __int16 v112; // [rsp+9Ch] [rbp-64h]
  unsigned int Size; // [rsp+A0h] [rbp-60h]
  __int16 Size_4; // [rsp+A4h] [rbp-5Ch]
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  void *Src; // [rsp+B0h] [rbp-50h]
  size_t v117; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v118; // [rsp+C0h] [rbp-40h] BYREF
  BOOL v119; // [rsp+C8h] [rbp-38h]
  unsigned int v120; // [rsp+CCh] [rbp-34h] BYREF
  unsigned int v121; // [rsp+D0h] [rbp-30h]
  unsigned __int8 *v122; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int8 *v123; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int8 *v124; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int8 *v125; // [rsp+F0h] [rbp-10h] BYREF
  void *v126; // [rsp+F8h] [rbp-8h]
  char v127[8]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int16 *v128; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int16 *v129; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 *v130; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int8 *v131; // [rsp+120h] [rbp+20h]
  __int64 *v132; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v133[24]; // [rsp+130h] [rbp+30h] BYREF
  int v134; // [rsp+148h] [rbp+48h]
  int v135; // [rsp+14Ch] [rbp+4Ch]
  char v136[8]; // [rsp+168h] [rbp+68h] BYREF
  int v137; // [rsp+170h] [rbp+70h]

  v9 = a8;
  v117 = a8;
  v93 = 0;
  v110 = a4;
  v12 = *(_WORD *)(a3 + 2);
  LOBYTE(v8) = 0;
  v92 = 0;
  v101[0] = 0;
  v94 = 0;
  v13 = 0x8000;
  v100 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v129 = 0LL;
  Src = 0LL;
  v128 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  v118 = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  v131 = 0LL;
  v91 = 0;
  LOBYTE(v121) = 0;
  v119 = v8;
  v130 = 0LL;
  if ( (v12 & 0x10) == 0 )
    goto LABEL_2;
  if ( v12 >= 0 )
  {
    v14 = *(unsigned __int8 **)(a3 + 24);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 12) )
    {
LABEL_2:
      v14 = 0LL;
      goto LABEL_3;
    }
    v14 = (unsigned __int8 *)(a3 + *(unsigned int *)(a3 + 12));
  }
LABEL_3:
  v15 = *a4;
  v104 = v14;
  if ( (*(_BYTE *)(v15 + 2) & 0x10) == 0 )
  {
LABEL_98:
    v16 = 0LL;
    goto LABEL_7;
  }
  if ( *(__int16 *)(v15 + 2) < 0 )
  {
    if ( *(_DWORD *)(v15 + 12) )
    {
      v16 = (unsigned __int16 *)(v15 + *(unsigned int *)(v15 + 12));
      goto LABEL_7;
    }
    goto LABEL_98;
  }
  v16 = *(unsigned __int16 **)(v15 + 24);
LABEL_7:
  Handle = 0LL;
  v89 = (__int64)v16;
  v132 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v18 = *(_WORD *)(v15 + 2) >> 15;
  v126 = ProcessHeap;
  if ( !(_BYTE)v18 )
    return (unsigned int)-1073741593;
  Size_4 = v12 & 0x80;
  v106 = Size_4 != 0;
  v19 = a2 & 0x80;
  v20 = a2 & 0x100;
  v107 = (v12 & 0x40) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v59 = a2 | 0x1FF;
    v60 = v59 & 0xFFFFFF7F;
    if ( v19 )
      v60 = v59;
    a2 = v60 & 0xFFFFFEFF;
    if ( v20 )
      a2 = v60;
    if ( !v16 && !v14 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v12 & 0x10) != 0 )
        a2 |= 8u;
      else
        v119 = (v12 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( *(__int16 *)(v15 + 2) >= 0 )
    {
      v21 = *(_BYTE **)(v15 + 8);
    }
    else
    {
      if ( !*(_DWORD *)(v15 + 4) )
        return (unsigned int)-1073741734;
      v21 = (_BYTE *)(v15 + *(unsigned int *)(v15 + 4));
    }
    v108 = v21;
    if ( v21 )
      goto LABEL_14;
    return (unsigned int)-1073741734;
  }
  v50 = a2 >> 2;
  LOBYTE(v50) = (a2 & 4) == 0;
  v121 = v50;
  if ( v12 >= 0 )
  {
    v51 = *(void **)(a3 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 4) )
    {
      v108 = 0LL;
      goto LABEL_86;
    }
    v51 = (void *)(a3 + *(unsigned int *)(a3 + 4));
  }
  v108 = v51;
LABEL_86:
  v92 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !a8 )
      return (unsigned int)-1073741734;
    InformationToken = NtQueryInformationToken(a8, 10LL, v133, 56LL, v127);
    valid = InformationToken;
    if ( InformationToken < 0 )
      return (unsigned int)valid;
    if ( v134 == 2 && v135 < 1 )
      return (unsigned int)-1073741659;
    v9 = v117;
    LOBYTE(v52) = v106;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v117, v108, v52, &InformationToken) )
      return (unsigned int)-1073741734;
  }
  v21 = v108;
LABEL_14:
  if ( !RtlValidSid(v21) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(a3 + 2) >= 0 )
    {
      v53 = *(void **)(a3 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a3 + 8) )
      {
        v109 = 0LL;
        goto LABEL_97;
      }
      v53 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    v109 = v53;
LABEL_97:
    v23 = v109;
    v93 = 1;
    goto LABEL_20;
  }
  v22 = *v110;
  if ( *(__int16 *)(*v110 + 2) >= 0 )
  {
    v23 = *(_BYTE **)(v22 + 16);
  }
  else
  {
    if ( !*(_DWORD *)(v22 + 8) )
    {
LABEL_254:
      v43 = (unsigned __int64)v122;
      valid = -1073741733;
      v24 = v118;
LABEL_58:
      if ( v94 )
        RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v129);
      goto LABEL_60;
    }
    v23 = (_BYTE *)(v22 + *(unsigned int *)(v22 + 8));
  }
  v109 = v23;
LABEL_20:
  if ( !v23 )
    goto LABEL_254;
  if ( !RtlValidSid(v23) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v24 = v118;
    v90 = v122;
    v104 = v118;
    Src = v16;
    goto LABEL_24;
  }
  Size = a2 & 0x10;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_105:
    InformationToken = RtlpGetDefaultTrustSubjectContext(v9, (unsigned __int64 *)&v132);
    valid = InformationToken;
    if ( InformationToken < 0 )
      return (unsigned int)valid;
    v54 = (unsigned __int64)v132;
    LODWORD(v117) = a2 & 0x80;
    v55 = *v132;
    if ( (a2 & 0x80) != 0 )
    {
      if ( !v55 )
      {
LABEL_180:
        valid = -1073741790;
        goto LABEL_182;
      }
      v103 = 0;
      do
      {
        AceByType = RtlFindAceByType((__int64)v104, 20, &v103);
        v68 = AceByType;
        if ( AceByType )
        {
          if ( (*((_DWORD *)AceByType + 1) & 0xFF000000) != 0 )
          {
            valid = -1073740730;
            goto LABEL_182;
          }
          if ( !RtlpValidTrustSubjectContext(v55, (__int64)(AceByType + 8), v67, &InformationToken) )
            goto LABEL_180;
        }
        ++v103;
      }
      while ( v68 );
    }
    InformationToken = a2 & 0x100;
    if ( (a2 & 0x100) == 0 )
      goto LABEL_108;
    valid = RtlpValidFilterAclSubjectContext((__int64)v104, v55);
    if ( valid >= 0 )
    {
      if ( (a5 & 2) != 0 )
      {
LABEL_108:
        v56 = (unsigned __int8 *)v89;
        goto LABEL_109;
      }
      v70 = v55;
      v56 = (unsigned __int8 *)v89;
      valid = RtlpValidFilterAclSubjectContext(v89, v70);
      if ( valid >= 0 )
      {
LABEL_109:
        RtlFreeHeap((__int64)ProcessHeap, 0, v54);
        v57 = v104;
        if ( (a2 & 8) != 0 )
        {
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (_DWORD)v56,
                      (*(_WORD *)(*v110 + 2) & 0x2800 | (*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18u) >> 1,
                      (_DWORD)v104,
                      (*(_WORD *)(a3 + 2) & 0x2800 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x18u) >> 1,
                      (__int64)v108,
                      (__int64)v109,
                      (__int64)a7,
                      2,
                      (__int64)&v122,
                      (__int64)&v102);
            if ( valid < 0 )
            {
              v43 = (unsigned __int64)v122;
              v24 = v118;
              goto LABEL_60;
            }
            v90 = v122;
            v95 = 1;
            v13 = 2 * (v102 & 0x1400 | (2 * (v102 & 8 | 0x2004)));
          }
          else
          {
            v90 = v104;
            v13 = *(_WORD *)(a3 + 2) & 0x2000 | 0x8010;
            if ( (*(_WORD *)(a3 + 2) & 0xA00) == 0xA00 )
              v13 = *(_WORD *)(a3 + 2) & 0x2000 | 0x8810;
          }
        }
        else
        {
          v90 = v56;
        }
        if ( (a2 & 0x20) != 0 )
        {
          v71 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (_DWORD)v56,
                      (*(_WORD *)(*v110 + 2) & 0x800 | (*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18u) >> 1,
                      (_DWORD)v57,
                      (v71 & 0x800 | (v71 >> 1) & 0x18) >> 1,
                      (__int64)v108,
                      (__int64)v109,
                      (__int64)a7,
                      2,
                      (__int64)&v118,
                      (__int64)&v102);
            if ( valid < 0 )
            {
              v24 = v118;
LABEL_196:
              v43 = (unsigned __int64)v90;
LABEL_60:
              if ( v43 && v95 )
                RtlFreeHeap((__int64)ProcessHeap, 0, v43);
              if ( v24 && v96 )
                RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v24);
              if ( v123 && v97 )
                RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v123);
              if ( v124 && v98 )
                RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v124);
              if ( v125 && v99 )
                RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v125);
              if ( Src && v100 )
                RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Src);
              if ( !v101[0] )
                return (unsigned int)valid;
              v69 = (unsigned __int64)v130;
LABEL_256:
              RtlFreeHeap((__int64)ProcessHeap, 0, v69);
              return (unsigned int)valid;
            }
            v96 = 1;
            v104 = v118;
            v13 |= 2 * (v102 & 0x1400 | (2 * (v102 & 8 | 4)));
          }
          else
          {
            v104 = v57;
            v72 = v13 | v71 & 0x2000;
            v13 = v72 | 0x10;
            if ( (v71 & 0xA00) == 0xA00 )
              v13 = v72 | 0x810;
          }
        }
        else
        {
          v104 = v56;
        }
        if ( (a2 & 0x40) != 0 )
        {
          v73 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (_DWORD)v56,
                      (*(_WORD *)(*v110 + 2) & 0x800 | (*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18u) >> 1,
                      (_DWORD)v57,
                      (v73 & 0x800 | (v73 >> 1) & 0x18) >> 1,
                      (__int64)v108,
                      (__int64)v109,
                      (__int64)a7,
                      2,
                      (__int64)&v123,
                      (__int64)&v102);
            if ( valid < 0 )
              goto LABEL_195;
            v97 = 1;
            v13 |= 2 * (v102 & 0x1400 | (2 * (v102 & 8 | 4)));
          }
          else
          {
            v123 = v57;
            v74 = v13 | v73 & 0x2000;
            v13 = v74 | 0x10;
            if ( (v73 & 0xA00) == 0xA00 )
              v13 = v74 | 0x810;
          }
        }
        else
        {
          v123 = v56;
        }
        if ( !(_DWORD)v117 )
        {
          v124 = v56;
LABEL_119:
          if ( !InformationToken )
          {
            v125 = v56;
LABEL_121:
            if ( Size )
            {
              v79 = *(_WORD *)(a3 + 2);
              v80 = v79 & 0xA00;
              v81 = v13 | v79 & 0x2000;
              v13 = v81 | 0x10;
              if ( v80 == 2560 )
                v13 = v81 | 0x810;
            }
            else
            {
              v57 = v56;
            }
            v24 = v104;
            v58 = v57;
            v43 = (unsigned __int64)v90;
            valid = RtlpCombineAcls(v90, v58, v104, v123, v124, v125, (unsigned __int64 *)&v128, 0LL);
            if ( valid < 0 )
              goto LABEL_60;
            v16 = v128;
            Src = v128;
            if ( !v90 && v128 && !v128[2] )
            {
              RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v128);
              v16 = 0LL;
              Src = 0LL;
            }
            v100 = 1;
LABEL_24:
            if ( (a2 & 4) == 0 )
            {
              v85 = *v110;
              if ( (*(_BYTE *)(*v110 + 2) & 4) != 0 )
              {
                if ( *(__int16 *)(v85 + 2) >= 0 )
                {
                  v26 = *(unsigned __int16 **)(v85 + 32);
                }
                else if ( *(_DWORD *)(v85 + 16) )
                {
                  v26 = (unsigned __int16 *)(v85 + *(unsigned int *)(v85 + 16));
                }
                else
                {
                  v26 = 0LL;
                }
              }
              else
              {
                v26 = 0LL;
              }
              goto LABEL_32;
            }
            if ( (a5 & 1) == 0 )
            {
              v25 = *(_WORD *)(a3 + 2);
              if ( (v25 & 4) == 0 )
                goto LABEL_223;
              if ( v25 >= 0 )
              {
                v26 = *(unsigned __int16 **)(a3 + 32);
                goto LABEL_29;
              }
              if ( *(_DWORD *)(a3 + 16) )
                v26 = (unsigned __int16 *)(a3 + *(unsigned int *)(a3 + 16));
              else
LABEL_223:
                v26 = 0LL;
LABEL_29:
              v27 = v13 | v25 & 0x1000;
              v13 = v27 | 4;
              if ( (v25 & 0x500) == 0x500 )
                v13 = v27 | 0x404;
LABEL_31:
              if ( Size_4 )
              {
                v120 = 76;
                Heap = (_QWORD *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, 76LL);
                if ( !Heap )
                {
                  valid = -1073741801;
                  goto LABEL_57;
                }
                valid = NtOpenProcessToken(-1LL, 8LL, &Handle);
                v83 = (unsigned __int64)Heap;
                if ( valid >= 0 )
                {
                  valid = NtQueryInformationToken(Handle, 4LL, Heap, v120, &v120);
                  NtClose(Handle);
                  if ( valid >= 0 )
                  {
                    LOBYTE(v84) = v107;
                    valid = RtlpCreateServerAcl((_DWORD)v26, v84, *Heap, (unsigned int)&v130, (__int64)v101);
                    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Heap);
                    if ( valid < 0 )
                      goto LABEL_57;
                    v26 = v130;
                    v16 = (unsigned __int16 *)Src;
                    goto LABEL_32;
                  }
                  v83 = (unsigned __int64)Heap;
                }
                RtlFreeHeap((__int64)ProcessHeap, 0, v83);
                goto LABEL_57;
              }
LABEL_32:
              v28 = 4 * *((unsigned __int8 *)v108 + 1) + 8;
              Size = v28;
              v29 = 4 * *((unsigned __int8 *)v109 + 1) + 8;
              LODWORD(v117) = v29;
              if ( v16 )
                v30 = (v16[1] + 3) & 0xFFFFFFFC;
              else
                v30 = 0;
              if ( v26 )
                v31 = (v26[1] + 3) & 0xFFFFFFFC;
              else
                v31 = 0;
              v32 = RtlAllocateHeap((__int64)v126, NtdllBaseTag + 1310720, v29 + v31 + v30 + v28 + 20);
              if ( v32 )
              {
                *(_QWORD *)v32 = 0LL;
                *(_QWORD *)(v32 + 8) = 0LL;
                *(_DWORD *)(v32 + 16) = 0;
                *(_BYTE *)v32 = 1;
                v33 = (char *)(v32 + 20);
                if ( v119 )
                  v13 |= 0x800u;
                *(_WORD *)(v32 + 2) |= v13;
                v34 = *(_WORD *)(v32 + 2);
                if ( (*(_WORD *)(a3 + 2) & 0x4000) != 0 )
                {
                  *(_BYTE *)(v32 + 1) = *(_BYTE *)(a3 + 1);
                  *(_WORD *)(v32 + 2) = v34 | 0x4000;
                }
                v35 = (unsigned __int16 *)Src;
                if ( Src )
                {
                  memmove((void *)(v32 + 20), Src, *((unsigned __int16 *)Src + 1));
                  RtlpApplyAclToObject(v32 + 20, a7);
                  *(_DWORD *)(v32 + 12) = 20;
                  v36 = v35[1];
                  if ( v30 > (unsigned int)v36 )
                    memset(&v33[v36], 0, v30 - (unsigned int)v36);
                  v33 += v30;
                }
                else
                {
                  *(_DWORD *)(v32 + 12) = 0;
                }
                v37 = v110;
                if ( (v13 & 0x10) == 0 )
                  *(_WORD *)(v32 + 2) |= *(_WORD *)(*v110 + 2) & 0x2830;
                if ( v26 )
                {
                  memmove(v33, v26, v26[1]);
                  RtlpApplyAclToObject((__int64)v33, a7);
                  *(_DWORD *)(v32 + 16) = (_DWORD)v33 - v32;
                  v38 = v26[1];
                  if ( v31 > (unsigned int)v38 )
                    memset(&v33[v38], 0, v31 - (unsigned int)v38);
                  v33 += v31;
                }
                else
                {
                  *(_DWORD *)(v32 + 16) = 0;
                }
                if ( (v13 & 4) != 0 || (*(_WORD *)(v32 + 2) |= *(_WORD *)(*v37 + 2) & 0x140C, !(_BYTE)v121) )
                {
LABEL_52:
                  v39 = Size;
                  memmove(v33, v108, Size);
                  v40 = (_DWORD)v33 - v32;
                  v41 = &v33[v39];
                  *(_DWORD *)(v32 + 4) = v40;
                  if ( !v92 )
                    *(_WORD *)(v32 + 2) |= *(_WORD *)(*v37 + 2) & 1;
                  memmove(v41, v109, (unsigned int)v117);
                  *(_DWORD *)(v32 + 8) = (_DWORD)v41 - v32;
                  if ( !v93 )
                    *(_WORD *)(v32 + 2) |= *(_WORD *)(*v37 + 2) & 2;
                  ProcessHeap = v126;
                  RtlFreeHeap((__int64)v126, 0, *v37);
                  *v37 = v32;
                  valid = 0;
                  goto LABEL_57;
                }
                v111 = 0;
                v112 = 768;
                valid = RtlInitializeSid((__int64)v136, (__int64)&v111, 1u);
                if ( valid >= 0 )
                {
                  v137 = 4;
                  v103 = 0;
                  while ( 1 )
                  {
                    if ( (*(_BYTE *)(v32 + 2) & 4) == 0 )
                      goto LABEL_250;
                    if ( *(__int16 *)(v32 + 2) < 0 )
                      break;
                    v86 = *(_QWORD *)(v32 + 32);
LABEL_252:
                    AceBySid = RtlFindAceBySid(v86, v136, &v103);
                    if ( !AceBySid )
                      goto LABEL_52;
                    v88 = *(_BYTE *)(AceBySid + 1) & 0xF4 | 8;
                    ++v103;
                    *(_BYTE *)(AceBySid + 1) = v88;
                  }
                  if ( *(_DWORD *)(v32 + 16) )
                  {
                    v86 = v32 + *(unsigned int *)(v32 + 16);
                    goto LABEL_252;
                  }
LABEL_250:
                  v86 = 0LL;
                  goto LABEL_252;
                }
              }
              else
              {
                valid = -1073741801;
              }
              ProcessHeap = v126;
LABEL_57:
              v24 = v104;
              v43 = (unsigned __int64)v90;
              goto LABEL_58;
            }
            v45 = *(_WORD *)(a3 + 2);
            if ( (v45 & 4) != 0 )
            {
              if ( v45 >= 0 )
              {
                v46 = *(_QWORD *)(a3 + 32);
LABEL_76:
                v47 = *v110;
                v48 = *(_WORD *)(*v110 + 2);
                if ( (v48 & 4) != 0 )
                {
                  if ( v48 >= 0 )
                  {
                    v49 = *(_QWORD *)(v47 + 32);
LABEL_80:
                    valid = RtlpComputeMergedAcl(
                              v49,
                              v48 & 0x140C,
                              v46,
                              v45 & 0x140C,
                              (__int64)v108,
                              (__int64)v109,
                              (__int64)a7,
                              1,
                              (__int64)&v129,
                              (__int64)&v102);
                    if ( valid >= 0 )
                    {
                      v26 = v129;
                      v94 = 1;
                      v13 |= v102 & 0x1408 | 4;
                      goto LABEL_31;
                    }
                    goto LABEL_196;
                  }
                  if ( *(_DWORD *)(v47 + 16) )
                  {
                    LODWORD(v49) = v47 + *(_DWORD *)(v47 + 16);
                    goto LABEL_80;
                  }
                }
                LODWORD(v49) = 0;
                goto LABEL_80;
              }
              if ( *(_DWORD *)(a3 + 16) )
              {
                LODWORD(v46) = a3 + *(_DWORD *)(a3 + 16);
                goto LABEL_76;
              }
            }
            LODWORD(v46) = 0;
            goto LABEL_76;
          }
          v77 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) == 0 )
          {
            v125 = v57;
            v78 = v13 | v77 & 0x2000;
            v13 = v78 | 0x10;
            if ( (v77 & 0xA00) == 0xA00 )
              v13 = v78 | 0x810;
            goto LABEL_121;
          }
          valid = RtlpComputeMergedAcl(
                    (_DWORD)v56,
                    (*(_WORD *)(*v110 + 2) & 0x800 | (*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18u) >> 1,
                    (_DWORD)v57,
                    (v77 & 0x800 | (v77 >> 1) & 0x18) >> 1,
                    (__int64)v108,
                    (__int64)v109,
                    (__int64)a7,
                    2,
                    (__int64)&v125,
                    (__int64)&v102);
          if ( valid >= 0 )
          {
            v99 = 1;
            v13 |= 2 * (v102 & 0x1400 | (2 * (v102 & 8 | 4)));
            goto LABEL_121;
          }
          goto LABEL_195;
        }
        v75 = *(unsigned __int16 *)(a3 + 2);
        if ( (a5 & 2) == 0 )
        {
          v124 = v57;
          v76 = v13 | v75 & 0x2000;
          v13 = v76 | 0x10;
          if ( (v75 & 0xA00) == 0xA00 )
            v13 = v76 | 0x810;
          goto LABEL_119;
        }
        valid = RtlpComputeMergedAcl(
                  (_DWORD)v56,
                  (*(_WORD *)(*v110 + 2) & 0x800 | (*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18u) >> 1,
                  (_DWORD)v57,
                  (v75 & 0x800 | (v75 >> 1) & 0x18) >> 1,
                  (__int64)v108,
                  (__int64)v109,
                  (__int64)a7,
                  2,
                  (__int64)&v124,
                  (__int64)&v102);
        if ( valid >= 0 )
        {
          v98 = 1;
          v13 |= 2 * (v102 & 0x1400 | (2 * (v102 & 8 | 4)));
          goto LABEL_119;
        }
LABEL_195:
        v24 = v104;
        goto LABEL_196;
      }
    }
LABEL_182:
    v69 = v54;
    goto LABEL_256;
  }
  v103 = 0;
  while ( 1 )
  {
    v61 = RtlFindAceByType((__int64)v14, 17, &v103);
    v62 = v61;
    if ( v61 )
    {
      v63 = (*((_DWORD *)v61 + 1) & 0xFFFFFFF8) == 0;
      v131 = v61 + 8;
      v91 = v61[1];
      if ( !v63 )
        break;
    }
    if ( v9 )
    {
      InformationToken = NtQueryInformationToken(v9, 10LL, v133, 56LL, v127);
      valid = InformationToken;
      if ( InformationToken < 0 )
        return (unsigned int)valid;
      if ( v134 == 2 && v135 < 1 )
        return (unsigned int)-1073741659;
    }
    else
    {
      InformationToken = NtOpenProcessToken(-1LL, 8LL, &Handle);
      valid = InformationToken;
      if ( InformationToken < 0 )
        return (unsigned int)valid;
    }
    v9 = v117;
    v65 = (size_t)Handle;
    LOBYTE(v64) = v91;
    if ( v117 )
      v65 = v117;
    if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v65, v131, v64, &InformationToken) )
    {
      NtClose(Handle);
      break;
    }
    NtClose(Handle);
    ++v103;
    if ( !v62 )
      goto LABEL_105;
  }
  return (unsigned int)-1073740730;
}
