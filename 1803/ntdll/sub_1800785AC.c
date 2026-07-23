/*
 * XREFs of sub_1800785AC @ 0x1800785AC
 * Callers:
 *     RtlSetSecurityObject @ 0x180078580 (RtlSetSecurityObject.c)
 *     RtlSetSecurityObjectEx @ 0x1800D25C0 (RtlSetSecurityObjectEx.c)
 * Callees:
 *     sub_180002C80 @ 0x180002C80 (sub_180002C80.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18002E46C @ 0x18002E46C (sub_18002E46C.c)
 *     sub_18002E668 @ 0x18002E668 (sub_18002E668.c)
 *     sub_18002EC40 @ 0x18002EC40 (sub_18002EC40.c)
 *     RtlFindAceByType @ 0x1800306C0 (RtlFindAceByType.c)
 *     RtlValidSid @ 0x180037790 (RtlValidSid.c)
 *     RtlInitializeSid @ 0x180044340 (RtlInitializeSid.c)
 *     sub_180044394 @ 0x180044394 (sub_180044394.c)
 *     sub_180078B08 @ 0x180078B08 (sub_180078B08.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x18009AEE0 (ZwQueryInformationToken.c)
 *     ZwOpenProcessToken @ 0x18009CED0 (ZwOpenProcessToken.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800E0618 @ 0x1800E0618 (sub_1800E0618.c)
 *     sub_1800E1800 @ 0x1800E1800 (sub_1800E1800.c)
 *     sub_1800E1BF4 @ 0x1800E1BF4 (sub_1800E1BF4.c)
 *     sub_1800E2CE8 @ 0x1800E2CE8 (sub_1800E2CE8.c)
 */

__int64 __fastcall sub_1800785AC(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        PVOID *a4,
        char a5,
        int a6,
        __int64 a7,
        HANDLE TokenHandle)
{
  BOOL v8; // r11d
  HANDLE v9; // rbx
  __int16 v12; // dx
  __int16 v13; // si
  ACL *v14; // r14
  _BYTE *v15; // rcx
  char *v16; // rdi
  PVOID ProcessHeap; // r13
  int v18; // r8d
  int v19; // r9d
  char *v20; // rax
  _QWORD *v21; // rax
  char *v22; // rcx
  void *v23; // rdi
  __int16 v24; // cx
  unsigned __int16 *v25; // r14
  __int16 v26; // ax
  int v27; // ecx
  int v28; // r8d
  unsigned int v29; // ebx
  unsigned int v30; // r12d
  char *v31; // rax
  _WORD *v32; // rdi
  char *v33; // r15
  __int16 v34; // ax
  unsigned __int16 *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  bool v38; // zf
  PVOID *v39; // rsi
  __int64 v40; // rbx
  char *v41; // rbx
  int v42; // ebx
  PVOID v43; // r14
  unsigned __int16 *v45; // r8
  int v46; // r15d
  unsigned int v47; // eax
  unsigned int v48; // eax
  void *v49; // rax
  void *v50; // rax
  _DWORD *v51; // rax
  _DWORD *v52; // rdi
  void *v53; // rcx
  unsigned __int16 *v54; // rdi
  void *v55; // r14
  _DWORD *AceByType; // rax
  __int64 v57; // r8
  _DWORD *v58; // rbx
  void *v59; // rdx
  ACL *v60; // r14
  unsigned int v61; // edx
  unsigned int v62; // edx
  PACL v63; // r8
  __int16 v64; // ax
  unsigned int v65; // edx
  __int16 v66; // ax
  unsigned int v67; // edx
  PACL v68; // r8
  __int16 v69; // ax
  unsigned int v70; // edx
  __int16 v71; // ax
  __int16 v72; // ax
  __int16 v73; // cx
  __int16 v74; // ax
  __int64 v75; // r8
  _QWORD *v76; // rax
  __int16 v77; // dx
  __int64 v78; // rcx
  _QWORD *Heap; // rdi
  void *v80; // r8
  int v81; // edx
  char *v82; // rax
  char *v83; // rcx
  __int64 v84; // rax
  char v85; // cl
  char v86; // [rsp+51h] [rbp-AFh]
  char v87; // [rsp+52h] [rbp-AEh]
  char v88; // [rsp+53h] [rbp-ADh]
  char v89; // [rsp+54h] [rbp-ACh]
  char v90; // [rsp+55h] [rbp-ABh]
  char v91; // [rsp+56h] [rbp-AAh]
  char v92; // [rsp+57h] [rbp-A9h]
  char v93; // [rsp+58h] [rbp-A8h]
  char v94; // [rsp+59h] [rbp-A7h]
  char v95[2]; // [rsp+5Ah] [rbp-A6h] BYREF
  _WORD v96[2]; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v97; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v98; // [rsp+68h] [rbp-98h] BYREF
  PVOID v99; // [rsp+70h] [rbp-90h]
  NTSTATUS v100; // [rsp+78h] [rbp-88h] BYREF
  PACL Acl; // [rsp+80h] [rbp-80h]
  char v102; // [rsp+88h] [rbp-78h]
  bool v103; // [rsp+89h] [rbp-77h]
  void *v104; // [rsp+90h] [rbp-70h]
  void *v105; // [rsp+98h] [rbp-68h]
  PVOID *v106; // [rsp+A0h] [rbp-60h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A8h] [rbp-58h] BYREF
  void *Src; // [rsp+B0h] [rbp-50h]
  unsigned int Size; // [rsp+B8h] [rbp-48h]
  __int16 Size_4; // [rsp+BCh] [rbp-44h]
  HANDLE Handle; // [rsp+C0h] [rbp-40h] BYREF
  size_t v112; // [rsp+C8h] [rbp-38h]
  __int64 v113; // [rsp+D0h] [rbp-30h] BYREF
  ULONG TokenInformationLength; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v115; // [rsp+DCh] [rbp-24h]
  BOOL v116; // [rsp+E0h] [rbp-20h]
  PVOID v117; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v118; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v119; // [rsp+F8h] [rbp-8h] BYREF
  ULONG ReturnLength; // [rsp+100h] [rbp+0h] BYREF
  PVOID v121; // [rsp+108h] [rbp+8h] BYREF
  PVOID v122; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 *v123; // [rsp+118h] [rbp+18h] BYREF
  PSID Sid2; // [rsp+120h] [rbp+20h]
  PVOID BaseAddress; // [rsp+128h] [rbp+28h] BYREF
  __int64 v126; // [rsp+130h] [rbp+30h]
  _BYTE TokenInformation[24]; // [rsp+138h] [rbp+38h] BYREF
  int v128; // [rsp+150h] [rbp+50h]
  int v129; // [rsp+154h] [rbp+54h]
  char Sid[8]; // [rsp+170h] [rbp+70h] BYREF
  int v131; // [rsp+178h] [rbp+78h]

  v9 = TokenHandle;
  v126 = a3;
  v106 = a4;
  LOBYTE(v8) = 0;
  v112 = (size_t)TokenHandle;
  v12 = *(_WORD *)(a3 + 2);
  v13 = 0x8000;
  v87 = 0;
  v86 = 0;
  v95[0] = 0;
  v88 = 0;
  v94 = 0;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v122 = 0LL;
  Src = 0LL;
  v121 = 0LL;
  v98 = 0LL;
  v117 = 0LL;
  v113 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  Sid2 = 0LL;
  LOBYTE(v115) = 0;
  v116 = v8;
  v123 = 0LL;
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
  v15 = *a4;
  Acl = v14;
  if ( (v15[2] & 0x10) == 0 )
  {
LABEL_78:
    v16 = 0LL;
    goto LABEL_7;
  }
  if ( *((__int16 *)v15 + 1) < 0 )
  {
    if ( *((_DWORD *)v15 + 3) )
    {
      v16 = &v15[*((unsigned int *)v15 + 3)];
      goto LABEL_7;
    }
    goto LABEL_78;
  }
  v16 = (char *)*((_QWORD *)v15 + 3);
LABEL_7:
  Handle = 0LL;
  v99 = v16;
  BaseAddress = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( *((__int16 *)v15 + 1) >= 0 )
    return (unsigned int)-1073741593;
  Size_4 = v12 & 0x80;
  v102 = Size_4 != 0;
  v18 = a2 & 0x80;
  v19 = a2 & 0x100;
  v103 = (v12 & 0x40) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v46 = a2 | 0x1FF;
    v47 = v46 & 0xFFFFFF7F;
    if ( v18 )
      v47 = v46;
    a2 = v47 & 0xFFFFFEFF;
    if ( v19 )
      a2 = v47;
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
      v20 = (char *)*((_QWORD *)v15 + 1);
    }
    else
    {
      if ( !*((_DWORD *)v15 + 1) )
        return (unsigned int)-1073741734;
      v20 = &v15[*((unsigned int *)v15 + 1)];
    }
    v104 = v20;
    if ( v20 )
      goto LABEL_14;
    return (unsigned int)-1073741734;
  }
  v48 = a2 >> 2;
  LOBYTE(v48) = (a2 & 4) == 0;
  v115 = v48;
  if ( v12 >= 0 )
  {
    v49 = *(void **)(a3 + 8);
    goto LABEL_95;
  }
  if ( *(_DWORD *)(a3 + 4) )
  {
    v49 = (void *)(a3 + *(unsigned int *)(a3 + 4));
LABEL_95:
    v104 = v49;
    goto LABEL_96;
  }
  v104 = 0LL;
LABEL_96:
  v86 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !TokenHandle )
      return (unsigned int)-1073741734;
    v100 = ZwQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
    v42 = v100;
    if ( v100 < 0 )
      return (unsigned int)v42;
    if ( v128 == 2 && v129 < 1 )
      return (unsigned int)-1073741659;
    v9 = (HANDLE)v112;
    if ( !sub_180044394((void *)v112, v104, v102, &v100) )
      return (unsigned int)-1073741734;
  }
  v20 = (char *)v104;
LABEL_14:
  if ( !RtlValidSid(v20) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(a3 + 2) >= 0 )
    {
      v50 = *(void **)(a3 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a3 + 8) )
      {
        v105 = 0LL;
LABEL_112:
        v22 = (char *)v105;
        v87 = 1;
        goto LABEL_20;
      }
      v50 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    v105 = v50;
    goto LABEL_112;
  }
  v21 = *v106;
  if ( *((__int16 *)*v106 + 1) >= 0 )
  {
    v22 = (char *)v21[2];
  }
  else
  {
    if ( !*((_DWORD *)v21 + 2) )
    {
LABEL_243:
      v23 = (void *)v113;
      v42 = -1073741733;
LABEL_58:
      v43 = v98;
      if ( v88 )
        RtlFreeHeap(ProcessHeap, 0, v122);
      goto LABEL_60;
    }
    v22 = (char *)v21 + *((unsigned int *)v21 + 2);
  }
  v105 = v22;
LABEL_20:
  if ( !v22 )
    goto LABEL_243;
  if ( !RtlValidSid(v22) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    Src = v16;
    v23 = (void *)v113;
    v99 = (PVOID)v113;
    goto LABEL_24;
  }
  Size = a2 & 0x10;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_129:
    v100 = sub_18002E46C(v9, &BaseAddress);
    v42 = v100;
    if ( v100 < 0 )
      return (unsigned int)v42;
    v54 = (unsigned __int16 *)BaseAddress;
    LODWORD(v112) = a2 & 0x80;
    v55 = *(void **)BaseAddress;
    if ( (a2 & 0x80) != 0 )
    {
      if ( !v55 )
      {
LABEL_144:
        v42 = -1073741790;
        goto LABEL_146;
      }
      v97 = 0;
      do
      {
        AceByType = RtlFindAceByType(Acl, 0x14u, &v97);
        v58 = AceByType;
        if ( AceByType )
        {
          if ( (AceByType[1] & 0xFF000000) != 0 )
          {
            v42 = -1073740730;
            goto LABEL_146;
          }
          if ( !sub_180002C80(v55, AceByType + 2, v57, &v100) )
            goto LABEL_144;
        }
        ++v97;
      }
      while ( v58 );
    }
    v100 = a2 & 0x100;
    if ( (a2 & 0x100) == 0 )
      goto LABEL_148;
    v42 = sub_18002EC40(Acl, v55);
    if ( v42 < 0 )
      goto LABEL_146;
    if ( (a5 & 2) != 0 )
    {
LABEL_148:
      v60 = (ACL *)v99;
    }
    else
    {
      v59 = v55;
      v60 = (ACL *)v99;
      v42 = sub_18002EC40((PACL)v99, v59);
      if ( v42 < 0 )
      {
LABEL_146:
        v45 = v54;
        goto LABEL_147;
      }
    }
    RtlFreeHeap(ProcessHeap, 0, v54);
    if ( (a2 & 8) != 0 )
    {
      v61 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) != 0 )
      {
        v42 = sub_1800E0618(
                (int)v60,
                (*((_WORD *)*v106 + 1) & 0x2800 | (*((unsigned __int16 *)*v106 + 1) >> 1) & 0x18u) >> 1,
                (int)Acl,
                (v61 & 0x2800 | (v61 >> 1) & 0x18) >> 1,
                (__int64)v104,
                (__int64)v105,
                a7,
                2,
                (__int64)&v98,
                (__int64)v96);
        if ( v42 < 0 )
        {
          v43 = v98;
          v23 = (void *)v113;
          goto LABEL_60;
        }
        v89 = 1;
        v13 = 2 * (v96[0] & 0x1400 | (2 * (v96[0] & 8 | 0x2004)));
      }
      else
      {
        v98 = Acl;
        v13 = v61 & 0x2000 | 0x8010;
        if ( (v61 & 0xA00) == 0xA00 )
          v13 = v61 & 0x2000 | 0x8810;
      }
    }
    else
    {
      v98 = v60;
    }
    if ( (a2 & 0x20) != 0 )
    {
      v62 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) == 0 )
      {
        v63 = Acl;
        v99 = Acl;
        v64 = v13 | v62 & 0x2000;
        v13 = v64 | 0x10;
        if ( (v62 & 0xA00) == 0xA00 )
          v13 = v64 | 0x810;
LABEL_168:
        if ( (a2 & 0x40) != 0 )
        {
          v65 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            v42 = sub_1800E0618(
                    (int)v60,
                    (*((_WORD *)*v106 + 1) & 0x800 | (*((unsigned __int16 *)*v106 + 1) >> 1) & 0x18u) >> 1,
                    (int)v63,
                    (v65 & 0x800 | (v65 >> 1) & 0x18) >> 1,
                    (__int64)v104,
                    (__int64)v105,
                    a7,
                    2,
                    (__int64)&v117,
                    (__int64)v96);
            if ( v42 < 0 )
              goto LABEL_162;
            v91 = 1;
            v13 |= 2 * (v96[0] & 0x1400 | (2 * (v96[0] & 8 | 4)));
          }
          else
          {
            v117 = v63;
            v66 = v13 | v65 & 0x2000;
            v13 = v66 | 0x10;
            if ( (v65 & 0xA00) == 0xA00 )
              v13 = v66 | 0x810;
          }
        }
        else
        {
          v117 = v60;
        }
        if ( !(_DWORD)v112 )
        {
          v118 = v60;
          goto LABEL_182;
        }
        v67 = *(unsigned __int16 *)(a3 + 2);
        v68 = Acl;
        if ( (a5 & 2) == 0 )
        {
          v118 = Acl;
          v69 = v13 | v67 & 0x2000;
          v13 = v69 | 0x10;
          if ( (v67 & 0xA00) == 0xA00 )
            v13 = v69 | 0x810;
          goto LABEL_183;
        }
        v42 = sub_1800E0618(
                (int)v60,
                (*((_WORD *)*v106 + 1) & 0x800 | (*((unsigned __int16 *)*v106 + 1) >> 1) & 0x18u) >> 1,
                (int)Acl,
                (v67 & 0x800 | (v67 >> 1) & 0x18) >> 1,
                (__int64)v104,
                (__int64)v105,
                a7,
                2,
                (__int64)&v118,
                (__int64)v96);
        if ( v42 >= 0 )
        {
          v92 = 1;
          v13 |= 2 * (v96[0] & 0x1400 | (2 * (v96[0] & 8 | 4)));
LABEL_182:
          v68 = Acl;
LABEL_183:
          if ( !v100 )
          {
            v119 = v60;
            goto LABEL_190;
          }
          v70 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) == 0 )
          {
            v119 = v68;
            v71 = v13 | v70 & 0x2000;
            v13 = v71 | 0x10;
            if ( (v70 & 0xA00) == 0xA00 )
              v13 = v71 | 0x810;
            goto LABEL_190;
          }
          v42 = sub_1800E0618(
                  (int)v60,
                  (*((_WORD *)*v106 + 1) & 0x800 | (*((unsigned __int16 *)*v106 + 1) >> 1) & 0x18u) >> 1,
                  (int)v68,
                  (v70 & 0x800 | (v70 >> 1) & 0x18) >> 1,
                  (__int64)v104,
                  (__int64)v105,
                  a7,
                  2,
                  (__int64)&v119,
                  (__int64)v96);
          if ( v42 >= 0 )
          {
            v93 = 1;
            v13 |= 2 * (v96[0] & 0x1400 | (2 * (v96[0] & 8 | 4)));
LABEL_190:
            if ( Size )
            {
              v72 = *(_WORD *)(a3 + 2);
              v73 = v72 & 0xA00;
              v74 = v13 | v72 & 0x2000;
              v13 = v74 | 0x10;
              if ( v73 == 2560 )
                v13 = v74 | 0x810;
            }
            else
            {
              Acl = v60;
            }
            v23 = v99;
            v43 = v98;
            v42 = sub_18002E668(
                    (unsigned __int8 *)v98,
                    (unsigned __int8 *)Acl,
                    (unsigned __int8 *)v99,
                    (unsigned __int8 *)v117,
                    (unsigned __int8 *)v118,
                    (unsigned __int8 *)v119,
                    (ACL **)&v121,
                    0LL);
            if ( v42 < 0 )
              goto LABEL_60;
            Src = v121;
            if ( !v43 && v121 && !*((_WORD *)v121 + 2) )
            {
              RtlFreeHeap(ProcessHeap, 0, v121);
              Src = 0LL;
            }
            v94 = 1;
LABEL_24:
            if ( (a2 & 4) == 0 )
            {
              v82 = (char *)*v106;
              if ( (*((_BYTE *)*v106 + 2) & 4) != 0 )
              {
                if ( *((__int16 *)v82 + 1) >= 0 )
                {
                  v25 = (unsigned __int16 *)*((_QWORD *)v82 + 4);
                  goto LABEL_32;
                }
                if ( *((_DWORD *)v82 + 4) )
                {
                  v25 = (unsigned __int16 *)&v82[*((unsigned int *)v82 + 4)];
                  goto LABEL_32;
                }
              }
              v25 = 0LL;
              goto LABEL_32;
            }
            v24 = *(_WORD *)(a3 + 2);
            if ( (a5 & 1) == 0 )
            {
              if ( (v24 & 4) == 0 )
                goto LABEL_72;
              if ( v24 >= 0 )
              {
                v25 = *(unsigned __int16 **)(a3 + 32);
                goto LABEL_29;
              }
              if ( *(_DWORD *)(a3 + 16) )
                v25 = (unsigned __int16 *)(a3 + *(unsigned int *)(a3 + 16));
              else
LABEL_72:
                v25 = 0LL;
LABEL_29:
              v26 = v13 | v24 & 0x1000;
              v13 = v26 | 4;
              if ( (v24 & 0x500) == 0x500 )
                v13 = v26 | 0x404;
LABEL_31:
              if ( Size_4 )
              {
                TokenInformationLength = 76;
                Heap = RtlAllocateHeap(ProcessHeap, Flags + 1310720, 0x4CuLL);
                if ( !Heap )
                {
LABEL_219:
                  v42 = -1073741801;
                  goto LABEL_57;
                }
                v42 = ZwOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
                v80 = Heap;
                if ( v42 >= 0 )
                {
                  v42 = ZwQueryInformationToken(Handle, 4u, Heap, TokenInformationLength, &TokenInformationLength);
                  ZwClose(Handle);
                  if ( v42 >= 0 )
                  {
                    LOBYTE(v81) = v103;
                    v42 = sub_1800E1800((_DWORD)v25, v81, *Heap, (unsigned int)&v123, (__int64)v95);
                    RtlFreeHeap(ProcessHeap, 0, Heap);
                    if ( v42 < 0 )
                      goto LABEL_57;
                    v25 = v123;
                    goto LABEL_32;
                  }
                  v80 = Heap;
                }
                RtlFreeHeap(ProcessHeap, 0, v80);
LABEL_57:
                v23 = v99;
                goto LABEL_58;
              }
LABEL_32:
              v27 = 4 * *((unsigned __int8 *)v104 + 1) + 8;
              Size = v27;
              v28 = 4 * *((unsigned __int8 *)v105 + 1) + 8;
              LODWORD(v112) = v28;
              if ( Src )
                v29 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
              else
                v29 = 0;
              if ( v25 )
                v30 = (v25[1] + 3) & 0xFFFFFFFC;
              else
                v30 = 0;
              v31 = (char *)RtlAllocateHeap(ProcessHeap, Flags + 1310720, v28 + v30 + v29 + v27 + 20);
              v32 = v31;
              if ( v31 )
              {
                v33 = v31 + 20;
                *(_QWORD *)v31 = 0LL;
                *((_QWORD *)v31 + 1) = 0LL;
                *((_DWORD *)v31 + 4) = 0;
                *v31 = 1;
                if ( v116 )
                  v13 |= 0x800u;
                v34 = *((_WORD *)v31 + 1) | v13;
                v32[1] = v34;
                if ( (*(_WORD *)(v126 + 2) & 0x4000) != 0 )
                {
                  *((_BYTE *)v32 + 1) = *(_BYTE *)(v126 + 1);
                  v32[1] = v34 | 0x4000;
                }
                if ( Src )
                {
                  memmove(v32 + 10, Src, *((unsigned __int16 *)Src + 1));
                  sub_180078B08(v32 + 10, a7);
                  v35 = (unsigned __int16 *)Src;
                  *((_DWORD *)v32 + 3) = (_DWORD)v33 - (_DWORD)v32;
                  v36 = v35[1];
                  if ( v29 > (unsigned int)v36 )
                    memset((char *)v32 + v36 + 20, 0, v29 - (unsigned int)v36);
                  v33 = (char *)v32 + v29 + 20;
                }
                else
                {
                  *((_DWORD *)v32 + 3) = 0;
                }
                if ( (v13 & 0x10) == 0 )
                  v32[1] |= *((_WORD *)*v106 + 1) & 0x2830;
                if ( v25 )
                {
                  memmove(v33, v25, v25[1]);
                  sub_180078B08(v33, a7);
                  *((_DWORD *)v32 + 4) = (_DWORD)v33 - (_DWORD)v32;
                  v37 = v25[1];
                  if ( v30 > (unsigned int)v37 )
                    memset(&v33[v37], 0, v30 - (unsigned int)v37);
                  v33 += v30;
                }
                else
                {
                  *((_DWORD *)v32 + 4) = 0;
                }
                v38 = (v13 & 4) == 0;
                v39 = v106;
                if ( v38 && (v32[1] |= *((_WORD *)*v106 + 1) & 0x140C, (_BYTE)v115) )
                {
                  *(_DWORD *)IdentifierAuthority.Value = 0;
                  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
                  v42 = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
                  if ( v42 >= 0 )
                  {
                    v131 = 4;
                    v97 = 0;
                    while ( 1 )
                    {
                      if ( (v32[1] & 4) == 0 )
                        goto LABEL_239;
                      if ( (__int16)v32[1] < 0 )
                        break;
                      v83 = (char *)*((_QWORD *)v32 + 4);
LABEL_241:
                      v84 = sub_1800E2CE8(v83, Sid, &v97);
                      if ( !v84 )
                        goto LABEL_52;
                      v85 = *(_BYTE *)(v84 + 1) & 0xF4 | 8;
                      ++v97;
                      *(_BYTE *)(v84 + 1) = v85;
                    }
                    if ( *((_DWORD *)v32 + 4) )
                    {
                      v83 = (char *)v32 + *((unsigned int *)v32 + 4);
                      goto LABEL_241;
                    }
LABEL_239:
                    v83 = 0LL;
                    goto LABEL_241;
                  }
                }
                else
                {
LABEL_52:
                  v40 = Size;
                  memmove(v33, v104, Size);
                  v41 = &v33[v40];
                  *((_DWORD *)v32 + 1) = (_DWORD)v33 - (_DWORD)v32;
                  if ( !v86 )
                    v32[1] |= *((_WORD *)*v39 + 1) & 1;
                  memmove(v41, v105, (unsigned int)v112);
                  *((_DWORD *)v32 + 2) = (_DWORD)v41 - (_DWORD)v32;
                  if ( !v87 )
                    v32[1] |= *((_WORD *)*v39 + 1) & 2;
                  RtlFreeHeap(ProcessHeap, 0, *v39);
                  *v39 = v32;
                  v42 = 0;
                }
                goto LABEL_57;
              }
              goto LABEL_219;
            }
            if ( (v24 & 4) != 0 )
            {
              if ( v24 >= 0 )
              {
                v75 = *(_QWORD *)(a3 + 32);
LABEL_206:
                v76 = *v106;
                v77 = *((_WORD *)*v106 + 1);
                if ( (v77 & 4) != 0 )
                {
                  if ( v77 >= 0 )
                  {
                    v78 = v76[4];
LABEL_212:
                    v42 = sub_1800E0618(
                            v78,
                            v77 & 0x140C,
                            v75,
                            *(_WORD *)(a3 + 2) & 0x140C,
                            (__int64)v104,
                            (__int64)v105,
                            a7,
                            1,
                            (__int64)&v122,
                            (__int64)v96);
                    if ( v42 >= 0 )
                    {
                      v88 = 1;
                      v25 = (unsigned __int16 *)v122;
                      v13 |= v96[0] & 0x1408 | 4;
                      goto LABEL_31;
                    }
                    goto LABEL_163;
                  }
                  if ( *((_DWORD *)v76 + 4) )
                  {
                    LODWORD(v78) = (_DWORD)v76 + *((_DWORD *)v76 + 4);
                    goto LABEL_212;
                  }
                }
                LODWORD(v78) = 0;
                goto LABEL_212;
              }
              if ( *(_DWORD *)(a3 + 16) )
              {
                LODWORD(v75) = a3 + *(_DWORD *)(a3 + 16);
                goto LABEL_206;
              }
            }
            LODWORD(v75) = 0;
            goto LABEL_206;
          }
        }
LABEL_162:
        v23 = v99;
        goto LABEL_163;
      }
      v42 = sub_1800E0618(
              (int)v60,
              (*((_WORD *)*v106 + 1) & 0x800 | (*((unsigned __int16 *)*v106 + 1) >> 1) & 0x18u) >> 1,
              (int)Acl,
              (v62 & 0x800 | (v62 >> 1) & 0x18) >> 1,
              (__int64)v104,
              (__int64)v105,
              a7,
              2,
              (__int64)&v113,
              (__int64)v96);
      if ( v42 < 0 )
      {
        v23 = (void *)v113;
LABEL_163:
        v43 = v98;
LABEL_60:
        if ( v43 && v89 )
          RtlFreeHeap(ProcessHeap, 0, v43);
        if ( v23 && v90 )
          RtlFreeHeap(ProcessHeap, 0, v23);
        if ( v117 && v91 )
          RtlFreeHeap(ProcessHeap, 0, v117);
        if ( v118 && v92 )
          RtlFreeHeap(ProcessHeap, 0, v118);
        if ( v119 && v93 )
          RtlFreeHeap(ProcessHeap, 0, v119);
        if ( Src && v94 )
          RtlFreeHeap(ProcessHeap, 0, Src);
        if ( !v95[0] )
          return (unsigned int)v42;
        v45 = v123;
LABEL_147:
        RtlFreeHeap(ProcessHeap, 0, v45);
        return (unsigned int)v42;
      }
      v90 = 1;
      v99 = (PVOID)v113;
      v13 |= 2 * (v96[0] & 0x1400 | (2 * (v96[0] & 8 | 4)));
    }
    else
    {
      v99 = v60;
    }
    v63 = Acl;
    goto LABEL_168;
  }
  v97 = 0;
  while ( 1 )
  {
    v51 = RtlFindAceByType(v14, 0x11u, &v97);
    v52 = v51;
    if ( v51 )
    {
      v38 = (v51[1] & 0xFFFFFFF8) == 0;
      Sid2 = v51 + 2;
      if ( !v38 )
        break;
    }
    if ( v9 )
    {
      v100 = ZwQueryInformationToken(v9, 0xAu, TokenInformation, 0x38u, &ReturnLength);
      v42 = v100;
      if ( v100 < 0 )
        return (unsigned int)v42;
      if ( v128 == 2 && v129 < 1 )
        return (unsigned int)-1073741659;
    }
    else
    {
      v100 = ZwOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
      v42 = v100;
      if ( v100 < 0 )
        return (unsigned int)v42;
    }
    v9 = (HANDLE)v112;
    v53 = Handle;
    if ( v112 )
      v53 = (void *)v112;
    if ( !(unsigned __int8)sub_1800E1BF4(v53, Sid2) )
    {
      ZwClose(Handle);
      break;
    }
    ZwClose(Handle);
    ++v97;
    if ( !v52 )
      goto LABEL_129;
  }
  return (unsigned int)-1073740730;
}
