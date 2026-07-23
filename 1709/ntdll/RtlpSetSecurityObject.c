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
        PVOID *a4,
        char a5,
        int a6,
        GENERIC_MAPPING *a7,
        HANDLE TokenHandle)
{
  BOOL v8; // r11d
  HANDLE v9; // rbx
  __int16 v12; // dx
  __int16 v13; // si
  ACL *v14; // r15
  char *v15; // rcx
  unsigned __int16 *v16; // rdi
  void *ProcessHeap; // r12
  __int16 v18; // ax
  int v19; // r8d
  int v20; // r9d
  char *v21; // rax
  _QWORD *v22; // rax
  char *v23; // rcx
  void *v24; // r15
  __int16 v25; // cx
  unsigned __int16 *v26; // r15
  __int16 v27; // ax
  int v28; // ecx
  int v29; // r8d
  unsigned int v30; // ebx
  unsigned int v31; // r12d
  _QWORD *v32; // rdi
  char *v33; // r14
  __int16 v34; // cx
  unsigned __int16 *v35; // r13
  __int64 v36; // rcx
  PVOID *v37; // r13
  __int64 v38; // rcx
  __int64 v39; // rsi
  int v40; // eax
  char *v41; // r14
  int valid; // ebx
  void *v43; // rdi
  __int16 v45; // r9
  __int64 v46; // r8
  _QWORD *v47; // rax
  __int16 v48; // dx
  __int64 v49; // rcx
  unsigned int v50; // eax
  void *v51; // rax
  __int64 v52; // r8
  void *v53; // rax
  PVOID v54; // rdi
  void *v55; // r15
  ACL *v56; // r15
  ACL *v57; // rdi
  unsigned __int8 *v58; // rdx
  int v59; // r14d
  unsigned int v60; // eax
  _DWORD *v61; // rax
  _DWORD *v62; // rdi
  bool v63; // zf
  void *v64; // rcx
  _DWORD *AceByType; // rax
  __int64 v66; // r8
  _DWORD *v67; // rbx
  PVOID v68; // r8
  void *v69; // rdx
  unsigned int v70; // ecx
  __int16 v71; // ax
  unsigned int v72; // ecx
  __int16 v73; // ax
  unsigned int v74; // ecx
  __int16 v75; // ax
  unsigned int v76; // ecx
  __int16 v77; // ax
  __int16 v78; // ax
  __int16 v79; // cx
  __int16 v80; // ax
  _QWORD *Heap; // rdi
  void *v82; // r8
  int v83; // edx
  char *v84; // rax
  char *v85; // rcx
  __int64 AceBySid; // rax
  char v87; // cl
  ACL *v88; // [rsp+50h] [rbp-B0h]
  unsigned __int8 *v89; // [rsp+50h] [rbp-B0h]
  char v90; // [rsp+59h] [rbp-A7h]
  char v91; // [rsp+5Ah] [rbp-A6h]
  char v92; // [rsp+5Bh] [rbp-A5h]
  char v93; // [rsp+5Ch] [rbp-A4h]
  char v94; // [rsp+5Dh] [rbp-A3h]
  char v95; // [rsp+5Eh] [rbp-A2h]
  char v96; // [rsp+5Fh] [rbp-A1h]
  char v97; // [rsp+60h] [rbp-A0h]
  char v98; // [rsp+61h] [rbp-9Fh]
  char v99[2]; // [rsp+62h] [rbp-9Eh] BYREF
  _WORD v100[2]; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG v101; // [rsp+68h] [rbp-98h] BYREF
  PACL Acl; // [rsp+70h] [rbp-90h]
  NTSTATUS DefaultTrustSubjectContext; // [rsp+78h] [rbp-88h] BYREF
  bool v104; // [rsp+7Ch] [rbp-84h]
  bool v105; // [rsp+7Dh] [rbp-83h]
  void *v106; // [rsp+80h] [rbp-80h]
  void *v107; // [rsp+88h] [rbp-78h]
  PVOID *v108; // [rsp+90h] [rbp-70h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+98h] [rbp-68h] BYREF
  unsigned int Size; // [rsp+A0h] [rbp-60h]
  __int16 Size_4; // [rsp+A4h] [rbp-5Ch]
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  void *Src; // [rsp+B0h] [rbp-50h]
  size_t v114; // [rsp+B8h] [rbp-48h]
  __int64 v115; // [rsp+C0h] [rbp-40h] BYREF
  BOOL v116; // [rsp+C8h] [rbp-38h]
  ULONG TokenInformationLength; // [rsp+CCh] [rbp-34h] BYREF
  unsigned int v118; // [rsp+D0h] [rbp-30h]
  __int64 v119; // [rsp+D8h] [rbp-28h] BYREF
  PVOID v120; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v121; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v122; // [rsp+F0h] [rbp-10h] BYREF
  PVOID HeapHandle; // [rsp+F8h] [rbp-8h]
  ULONG ReturnLength; // [rsp+100h] [rbp+0h] BYREF
  PVOID v125; // [rsp+108h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+110h] [rbp+10h] BYREF
  PVOID v127; // [rsp+118h] [rbp+18h] BYREF
  PSID Sid2; // [rsp+120h] [rbp+20h]
  PVOID v129; // [rsp+128h] [rbp+28h] BYREF
  _BYTE TokenInformation[24]; // [rsp+130h] [rbp+30h] BYREF
  int v131; // [rsp+148h] [rbp+48h]
  int v132; // [rsp+14Ch] [rbp+4Ch]
  char Sid[8]; // [rsp+168h] [rbp+68h] BYREF
  int v134; // [rsp+170h] [rbp+70h]

  v9 = TokenHandle;
  v114 = (size_t)TokenHandle;
  v91 = 0;
  v108 = a4;
  v12 = *(_WORD *)(a3 + 2);
  LOBYTE(v8) = 0;
  v90 = 0;
  v99[0] = 0;
  v92 = 0;
  v13 = 0x8000;
  v98 = 0;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  BaseAddress = 0LL;
  Src = 0LL;
  v125 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v115 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  Sid2 = 0LL;
  LOBYTE(v118) = 0;
  v116 = v8;
  v127 = 0LL;
  if ( (v12 & 0x10) == 0 )
    goto LABEL_2;
  if ( v12 >= 0 )
  {
    v14 = *(ACL **)(a3 + 24);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 12) )
    {
LABEL_2:
      v14 = 0LL;
      goto LABEL_3;
    }
    v14 = (ACL *)(a3 + *(unsigned int *)(a3 + 12));
  }
LABEL_3:
  v15 = (char *)*a4;
  Acl = v14;
  if ( (v15[2] & 0x10) == 0 )
  {
LABEL_98:
    v16 = 0LL;
    goto LABEL_7;
  }
  if ( *((__int16 *)v15 + 1) < 0 )
  {
    if ( *((_DWORD *)v15 + 3) )
    {
      v16 = (unsigned __int16 *)&v15[*((unsigned int *)v15 + 3)];
      goto LABEL_7;
    }
    goto LABEL_98;
  }
  v16 = (unsigned __int16 *)*((_QWORD *)v15 + 3);
LABEL_7:
  Handle = 0LL;
  v88 = (ACL *)v16;
  v129 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v18 = *((_WORD *)v15 + 1) >> 15;
  HeapHandle = ProcessHeap;
  if ( !(_BYTE)v18 )
    return (unsigned int)-1073741593;
  Size_4 = v12 & 0x80;
  v104 = Size_4 != 0;
  v19 = a2 & 0x80;
  v20 = a2 & 0x100;
  v105 = (v12 & 0x40) != 0;
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
        v116 = (v12 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( *((__int16 *)v15 + 1) >= 0 )
    {
      v21 = (char *)*((_QWORD *)v15 + 1);
    }
    else
    {
      if ( !*((_DWORD *)v15 + 1) )
        return (unsigned int)-1073741734;
      v21 = &v15[*((unsigned int *)v15 + 1)];
    }
    v106 = v21;
    if ( v21 )
      goto LABEL_14;
    return (unsigned int)-1073741734;
  }
  v50 = a2 >> 2;
  LOBYTE(v50) = (a2 & 4) == 0;
  v118 = v50;
  if ( v12 >= 0 )
  {
    v51 = *(void **)(a3 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 4) )
    {
      v106 = 0LL;
      goto LABEL_86;
    }
    v51 = (void *)(a3 + *(unsigned int *)(a3 + 4));
  }
  v106 = v51;
LABEL_86:
  v90 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !TokenHandle )
      return (unsigned int)-1073741734;
    DefaultTrustSubjectContext = NtQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
    valid = DefaultTrustSubjectContext;
    if ( DefaultTrustSubjectContext < 0 )
      return (unsigned int)valid;
    if ( v131 == 2 && v132 < 1 )
      return (unsigned int)-1073741659;
    v9 = (HANDLE)v114;
    LOBYTE(v52) = v104;
    if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v114, v106, v52, &DefaultTrustSubjectContext) )
      return (unsigned int)-1073741734;
  }
  v21 = (char *)v106;
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
        v107 = 0LL;
        goto LABEL_97;
      }
      v53 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    v107 = v53;
LABEL_97:
    v23 = (char *)v107;
    v91 = 1;
    goto LABEL_20;
  }
  v22 = *v108;
  if ( *((__int16 *)*v108 + 1) >= 0 )
  {
    v23 = (char *)v22[2];
  }
  else
  {
    if ( !*((_DWORD *)v22 + 2) )
    {
LABEL_254:
      v43 = (void *)v119;
      valid = -1073741733;
      v24 = (void *)v115;
LABEL_58:
      if ( v92 )
        RtlFreeHeap(ProcessHeap, 0, BaseAddress);
      goto LABEL_60;
    }
    v23 = (char *)v22 + *((unsigned int *)v22 + 2);
  }
  v107 = v23;
LABEL_20:
  if ( !v23 )
    goto LABEL_254;
  if ( !RtlValidSid(v23) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v24 = (void *)v115;
    v89 = (unsigned __int8 *)v119;
    Acl = (PACL)v115;
    Src = v16;
    goto LABEL_24;
  }
  Size = a2 & 0x10;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_105:
    DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(v9, &v129);
    valid = DefaultTrustSubjectContext;
    if ( DefaultTrustSubjectContext < 0 )
      return (unsigned int)valid;
    v54 = v129;
    LODWORD(v114) = a2 & 0x80;
    v55 = *(void **)v129;
    if ( (a2 & 0x80) != 0 )
    {
      if ( !v55 )
      {
LABEL_180:
        valid = -1073741790;
        goto LABEL_182;
      }
      v101 = 0;
      do
      {
        AceByType = RtlFindAceByType(Acl, 0x14u, &v101);
        v67 = AceByType;
        if ( AceByType )
        {
          if ( (AceByType[1] & 0xFF000000) != 0 )
          {
            valid = -1073740730;
            goto LABEL_182;
          }
          if ( !RtlpValidTrustSubjectContext(v55, AceByType + 2, v66, &DefaultTrustSubjectContext) )
            goto LABEL_180;
        }
        ++v101;
      }
      while ( v67 );
    }
    DefaultTrustSubjectContext = a2 & 0x100;
    if ( (a2 & 0x100) == 0 )
      goto LABEL_108;
    valid = RtlpValidFilterAclSubjectContext(Acl, v55);
    if ( valid >= 0 )
    {
      if ( (a5 & 2) != 0 )
      {
LABEL_108:
        v56 = v88;
        goto LABEL_109;
      }
      v69 = v55;
      v56 = v88;
      valid = RtlpValidFilterAclSubjectContext(v88, v69);
      if ( valid >= 0 )
      {
LABEL_109:
        RtlFreeHeap(ProcessHeap, 0, v54);
        v57 = Acl;
        if ( (a2 & 8) != 0 )
        {
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (int)v56,
                      (*((_WORD *)*v108 + 1) & 0x2800 | (*((unsigned __int16 *)*v108 + 1) >> 1) & 0x18u) >> 1,
                      (int)Acl,
                      (*(_WORD *)(a3 + 2) & 0x2800 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x18u) >> 1,
                      (__int64)v106,
                      (__int64)v107,
                      (__int64)a7,
                      2,
                      (__int64)&v119,
                      (__int64)v100);
            if ( valid < 0 )
            {
              v43 = (void *)v119;
              v24 = (void *)v115;
              goto LABEL_60;
            }
            v89 = (unsigned __int8 *)v119;
            v93 = 1;
            v13 = 2 * (v100[0] & 0x1400 | (2 * (v100[0] & 8 | 0x2004)));
          }
          else
          {
            v89 = (unsigned __int8 *)Acl;
            v13 = *(_WORD *)(a3 + 2) & 0x2000 | 0x8010;
            if ( (*(_WORD *)(a3 + 2) & 0xA00) == 0xA00 )
              v13 = *(_WORD *)(a3 + 2) & 0x2000 | 0x8810;
          }
        }
        else
        {
          v89 = (unsigned __int8 *)v56;
        }
        if ( (a2 & 0x20) != 0 )
        {
          v70 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (int)v56,
                      (*((_WORD *)*v108 + 1) & 0x800 | (*((unsigned __int16 *)*v108 + 1) >> 1) & 0x18u) >> 1,
                      (int)v57,
                      (v70 & 0x800 | (v70 >> 1) & 0x18) >> 1,
                      (__int64)v106,
                      (__int64)v107,
                      (__int64)a7,
                      2,
                      (__int64)&v115,
                      (__int64)v100);
            if ( valid < 0 )
            {
              v24 = (void *)v115;
LABEL_196:
              v43 = v89;
LABEL_60:
              if ( v43 && v93 )
                RtlFreeHeap(ProcessHeap, 0, v43);
              if ( v24 && v94 )
                RtlFreeHeap(ProcessHeap, 0, v24);
              if ( v120 && v95 )
                RtlFreeHeap(ProcessHeap, 0, v120);
              if ( v121 && v96 )
                RtlFreeHeap(ProcessHeap, 0, v121);
              if ( v122 && v97 )
                RtlFreeHeap(ProcessHeap, 0, v122);
              if ( Src && v98 )
                RtlFreeHeap(ProcessHeap, 0, Src);
              if ( !v99[0] )
                return (unsigned int)valid;
              v68 = v127;
LABEL_256:
              RtlFreeHeap(ProcessHeap, 0, v68);
              return (unsigned int)valid;
            }
            v94 = 1;
            Acl = (PACL)v115;
            v13 |= 2 * (v100[0] & 0x1400 | (2 * (v100[0] & 8 | 4)));
          }
          else
          {
            Acl = v57;
            v71 = v13 | v70 & 0x2000;
            v13 = v71 | 0x10;
            if ( (v70 & 0xA00) == 0xA00 )
              v13 = v71 | 0x810;
          }
        }
        else
        {
          Acl = v56;
        }
        if ( (a2 & 0x40) != 0 )
        {
          v72 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            valid = RtlpComputeMergedAcl(
                      (int)v56,
                      (*((_WORD *)*v108 + 1) & 0x800 | (*((unsigned __int16 *)*v108 + 1) >> 1) & 0x18u) >> 1,
                      (int)v57,
                      (v72 & 0x800 | (v72 >> 1) & 0x18) >> 1,
                      (__int64)v106,
                      (__int64)v107,
                      (__int64)a7,
                      2,
                      (__int64)&v120,
                      (__int64)v100);
            if ( valid < 0 )
              goto LABEL_195;
            v95 = 1;
            v13 |= 2 * (v100[0] & 0x1400 | (2 * (v100[0] & 8 | 4)));
          }
          else
          {
            v120 = v57;
            v73 = v13 | v72 & 0x2000;
            v13 = v73 | 0x10;
            if ( (v72 & 0xA00) == 0xA00 )
              v13 = v73 | 0x810;
          }
        }
        else
        {
          v120 = v56;
        }
        if ( !(_DWORD)v114 )
        {
          v121 = v56;
LABEL_119:
          if ( !DefaultTrustSubjectContext )
          {
            v122 = v56;
LABEL_121:
            if ( Size )
            {
              v78 = *(_WORD *)(a3 + 2);
              v79 = v78 & 0xA00;
              v80 = v13 | v78 & 0x2000;
              v13 = v80 | 0x10;
              if ( v79 == 2560 )
                v13 = v80 | 0x810;
            }
            else
            {
              v57 = v56;
            }
            v24 = Acl;
            v58 = (unsigned __int8 *)v57;
            v43 = v89;
            valid = RtlpCombineAcls(
                      v89,
                      v58,
                      (unsigned __int8 *)Acl,
                      (unsigned __int8 *)v120,
                      (unsigned __int8 *)v121,
                      (unsigned __int8 *)v122,
                      (ACL **)&v125,
                      0LL);
            if ( valid < 0 )
              goto LABEL_60;
            v16 = (unsigned __int16 *)v125;
            Src = v125;
            if ( !v89 && v125 && !*((_WORD *)v125 + 2) )
            {
              RtlFreeHeap(ProcessHeap, 0, v125);
              v16 = 0LL;
              Src = 0LL;
            }
            v98 = 1;
LABEL_24:
            if ( (a2 & 4) == 0 )
            {
              v84 = (char *)*v108;
              if ( (*((_BYTE *)*v108 + 2) & 4) != 0 )
              {
                if ( *((__int16 *)v84 + 1) >= 0 )
                {
                  v26 = (unsigned __int16 *)*((_QWORD *)v84 + 4);
                }
                else if ( *((_DWORD *)v84 + 4) )
                {
                  v26 = (unsigned __int16 *)&v84[*((unsigned int *)v84 + 4)];
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
                TokenInformationLength = 76;
                Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
                if ( !Heap )
                {
                  valid = -1073741801;
                  goto LABEL_57;
                }
                valid = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
                v82 = Heap;
                if ( valid >= 0 )
                {
                  valid = NtQueryInformationToken(Handle, 4u, Heap, TokenInformationLength, &TokenInformationLength);
                  NtClose(Handle);
                  if ( valid >= 0 )
                  {
                    LOBYTE(v83) = v105;
                    valid = RtlpCreateServerAcl((_DWORD)v26, v83, *Heap, (unsigned int)&v127, (__int64)v99);
                    RtlFreeHeap(ProcessHeap, 0, Heap);
                    if ( valid < 0 )
                      goto LABEL_57;
                    v26 = (unsigned __int16 *)v127;
                    v16 = (unsigned __int16 *)Src;
                    goto LABEL_32;
                  }
                  v82 = Heap;
                }
                RtlFreeHeap(ProcessHeap, 0, v82);
                goto LABEL_57;
              }
LABEL_32:
              v28 = 4 * *((unsigned __int8 *)v106 + 1) + 8;
              Size = v28;
              v29 = 4 * *((unsigned __int8 *)v107 + 1) + 8;
              LODWORD(v114) = v29;
              if ( v16 )
                v30 = (v16[1] + 3) & 0xFFFFFFFC;
              else
                v30 = 0;
              if ( v26 )
                v31 = (v26[1] + 3) & 0xFFFFFFFC;
              else
                v31 = 0;
              v32 = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v29 + v31 + v30 + v28 + 20);
              if ( v32 )
              {
                *v32 = 0LL;
                v32[1] = 0LL;
                *((_DWORD *)v32 + 4) = 0;
                *(_BYTE *)v32 = 1;
                v33 = (char *)v32 + 20;
                if ( v116 )
                  v13 |= 0x800u;
                *((_WORD *)v32 + 1) |= v13;
                v34 = *((_WORD *)v32 + 1);
                if ( (*(_WORD *)(a3 + 2) & 0x4000) != 0 )
                {
                  *((_BYTE *)v32 + 1) = *(_BYTE *)(a3 + 1);
                  *((_WORD *)v32 + 1) = v34 | 0x4000;
                }
                v35 = (unsigned __int16 *)Src;
                if ( Src )
                {
                  memmove((char *)v32 + 20, Src, *((unsigned __int16 *)Src + 1));
                  RtlpApplyAclToObject((__int64)v32 + 20, a7);
                  *((_DWORD *)v32 + 3) = 20;
                  v36 = v35[1];
                  if ( v30 > (unsigned int)v36 )
                    memset(&v33[v36], 0, v30 - (unsigned int)v36);
                  v33 += v30;
                }
                else
                {
                  *((_DWORD *)v32 + 3) = 0;
                }
                v37 = v108;
                if ( (v13 & 0x10) == 0 )
                  *((_WORD *)v32 + 1) |= *((_WORD *)*v108 + 1) & 0x2830;
                if ( v26 )
                {
                  memmove(v33, v26, v26[1]);
                  RtlpApplyAclToObject((__int64)v33, a7);
                  *((_DWORD *)v32 + 4) = (_DWORD)v33 - (_DWORD)v32;
                  v38 = v26[1];
                  if ( v31 > (unsigned int)v38 )
                    memset(&v33[v38], 0, v31 - (unsigned int)v38);
                  v33 += v31;
                }
                else
                {
                  *((_DWORD *)v32 + 4) = 0;
                }
                if ( (v13 & 4) != 0 || (*((_WORD *)v32 + 1) |= *((_WORD *)*v37 + 1) & 0x140C, !(_BYTE)v118) )
                {
LABEL_52:
                  v39 = Size;
                  memmove(v33, v106, Size);
                  v40 = (_DWORD)v33 - (_DWORD)v32;
                  v41 = &v33[v39];
                  *((_DWORD *)v32 + 1) = v40;
                  if ( !v90 )
                    *((_WORD *)v32 + 1) |= *((_WORD *)*v37 + 1) & 1;
                  memmove(v41, v107, (unsigned int)v114);
                  *((_DWORD *)v32 + 2) = (_DWORD)v41 - (_DWORD)v32;
                  if ( !v91 )
                    *((_WORD *)v32 + 1) |= *((_WORD *)*v37 + 1) & 2;
                  ProcessHeap = HeapHandle;
                  RtlFreeHeap(HeapHandle, 0, *v37);
                  *v37 = v32;
                  valid = 0;
                  goto LABEL_57;
                }
                *(_DWORD *)IdentifierAuthority.Value = 0;
                *(_WORD *)&IdentifierAuthority.Value[4] = 768;
                valid = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
                if ( valid >= 0 )
                {
                  v134 = 4;
                  v101 = 0;
                  while ( 1 )
                  {
                    if ( (*((_BYTE *)v32 + 2) & 4) == 0 )
                      goto LABEL_250;
                    if ( *((__int16 *)v32 + 1) < 0 )
                      break;
                    v85 = (char *)v32[4];
LABEL_252:
                    AceBySid = RtlFindAceBySid(v85, Sid, &v101);
                    if ( !AceBySid )
                      goto LABEL_52;
                    v87 = *(_BYTE *)(AceBySid + 1) & 0xF4 | 8;
                    ++v101;
                    *(_BYTE *)(AceBySid + 1) = v87;
                  }
                  if ( *((_DWORD *)v32 + 4) )
                  {
                    v85 = (char *)v32 + *((unsigned int *)v32 + 4);
                    goto LABEL_252;
                  }
LABEL_250:
                  v85 = 0LL;
                  goto LABEL_252;
                }
              }
              else
              {
                valid = -1073741801;
              }
              ProcessHeap = HeapHandle;
LABEL_57:
              v24 = Acl;
              v43 = v89;
              goto LABEL_58;
            }
            v45 = *(_WORD *)(a3 + 2);
            if ( (v45 & 4) != 0 )
            {
              if ( v45 >= 0 )
              {
                v46 = *(_QWORD *)(a3 + 32);
LABEL_76:
                v47 = *v108;
                v48 = *((_WORD *)*v108 + 1);
                if ( (v48 & 4) != 0 )
                {
                  if ( v48 >= 0 )
                  {
                    v49 = v47[4];
LABEL_80:
                    valid = RtlpComputeMergedAcl(
                              v49,
                              v48 & 0x140C,
                              v46,
                              v45 & 0x140C,
                              (__int64)v106,
                              (__int64)v107,
                              (__int64)a7,
                              1,
                              (__int64)&BaseAddress,
                              (__int64)v100);
                    if ( valid >= 0 )
                    {
                      v26 = (unsigned __int16 *)BaseAddress;
                      v92 = 1;
                      v13 |= v100[0] & 0x1408 | 4;
                      goto LABEL_31;
                    }
                    goto LABEL_196;
                  }
                  if ( *((_DWORD *)v47 + 4) )
                  {
                    LODWORD(v49) = (_DWORD)v47 + *((_DWORD *)v47 + 4);
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
          v76 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) == 0 )
          {
            v122 = v57;
            v77 = v13 | v76 & 0x2000;
            v13 = v77 | 0x10;
            if ( (v76 & 0xA00) == 0xA00 )
              v13 = v77 | 0x810;
            goto LABEL_121;
          }
          valid = RtlpComputeMergedAcl(
                    (int)v56,
                    (*((_WORD *)*v108 + 1) & 0x800 | (*((unsigned __int16 *)*v108 + 1) >> 1) & 0x18u) >> 1,
                    (int)v57,
                    (v76 & 0x800 | (v76 >> 1) & 0x18) >> 1,
                    (__int64)v106,
                    (__int64)v107,
                    (__int64)a7,
                    2,
                    (__int64)&v122,
                    (__int64)v100);
          if ( valid >= 0 )
          {
            v97 = 1;
            v13 |= 2 * (v100[0] & 0x1400 | (2 * (v100[0] & 8 | 4)));
            goto LABEL_121;
          }
          goto LABEL_195;
        }
        v74 = *(unsigned __int16 *)(a3 + 2);
        if ( (a5 & 2) == 0 )
        {
          v121 = v57;
          v75 = v13 | v74 & 0x2000;
          v13 = v75 | 0x10;
          if ( (v74 & 0xA00) == 0xA00 )
            v13 = v75 | 0x810;
          goto LABEL_119;
        }
        valid = RtlpComputeMergedAcl(
                  (int)v56,
                  (*((_WORD *)*v108 + 1) & 0x800 | (*((unsigned __int16 *)*v108 + 1) >> 1) & 0x18u) >> 1,
                  (int)v57,
                  (v74 & 0x800 | (v74 >> 1) & 0x18) >> 1,
                  (__int64)v106,
                  (__int64)v107,
                  (__int64)a7,
                  2,
                  (__int64)&v121,
                  (__int64)v100);
        if ( valid >= 0 )
        {
          v96 = 1;
          v13 |= 2 * (v100[0] & 0x1400 | (2 * (v100[0] & 8 | 4)));
          goto LABEL_119;
        }
LABEL_195:
        v24 = Acl;
        goto LABEL_196;
      }
    }
LABEL_182:
    v68 = v54;
    goto LABEL_256;
  }
  v101 = 0;
  while ( 1 )
  {
    v61 = RtlFindAceByType(v14, 0x11u, &v101);
    v62 = v61;
    if ( v61 )
    {
      v63 = (v61[1] & 0xFFFFFFF8) == 0;
      Sid2 = v61 + 2;
      if ( !v63 )
        break;
    }
    if ( v9 )
    {
      DefaultTrustSubjectContext = NtQueryInformationToken(v9, 0xAu, TokenInformation, 0x38u, &ReturnLength);
      valid = DefaultTrustSubjectContext;
      if ( DefaultTrustSubjectContext < 0 )
        return (unsigned int)valid;
      if ( v131 == 2 && v132 < 1 )
        return (unsigned int)-1073741659;
    }
    else
    {
      DefaultTrustSubjectContext = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
      valid = DefaultTrustSubjectContext;
      if ( DefaultTrustSubjectContext < 0 )
        return (unsigned int)valid;
    }
    v9 = (HANDLE)v114;
    v64 = Handle;
    if ( v114 )
      v64 = (void *)v114;
    if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v64, Sid2) )
    {
      NtClose(Handle);
      break;
    }
    NtClose(Handle);
    ++v101;
    if ( !v62 )
      goto LABEL_105;
  }
  return (unsigned int)-1073740730;
}
