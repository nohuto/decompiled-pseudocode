/*
 * XREFs of sub_18004FBBC @ 0x18004FBBC
 * Callers:
 *     RtlSetSecurityObject @ 0x180050300 (RtlSetSecurityObject.c)
 *     RtlSetSecurityObjectEx @ 0x180090680 (RtlSetSecurityObjectEx.c)
 * Callees:
 *     sub_1800044F8 @ 0x1800044F8 (sub_1800044F8.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlValidSid @ 0x1800449F0 (RtlValidSid.c)
 *     RtlInitializeSid @ 0x180047610 (RtlInitializeSid.c)
 *     RtlFindAceByType @ 0x18004A2D0 (RtlFindAceByType.c)
 *     sub_18004B070 @ 0x18004B070 (sub_18004B070.c)
 *     sub_18004B0E8 @ 0x18004B0E8 (sub_18004B0E8.c)
 *     sub_18004B8F8 @ 0x18004B8F8 (sub_18004B8F8.c)
 *     sub_18004C608 @ 0x18004C608 (sub_18004C608.c)
 *     sub_180081410 @ 0x180081410 (sub_180081410.c)
 *     sub_180090200 @ 0x180090200 (sub_180090200.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1800A5720 (ZwQueryInformationToken.c)
 *     ZwOpenProcessToken @ 0x1800A7690 (ZwOpenProcessToken.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800E6AF4 @ 0x1800E6AF4 (sub_1800E6AF4.c)
 *     sub_1800E6ED4 @ 0x1800E6ED4 (sub_1800E6ED4.c)
 *     sub_1800E7FA8 @ 0x1800E7FA8 (sub_1800E7FA8.c)
 */

__int64 __fastcall sub_18004FBBC(
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
  __int16 v13; // r14
  ACL *v14; // rdi
  _BYTE *v15; // rcx
  unsigned __int16 *v16; // r15
  PVOID ProcessHeap; // r12
  __int16 v18; // ax
  int v19; // r9d
  int v20; // r8d
  char *v21; // rax
  _QWORD *v22; // rax
  char *v23; // rcx
  unsigned __int16 *v24; // rdi
  void *v25; // r15
  __int16 v26; // cx
  unsigned __int16 *v27; // r15
  int v28; // r8d
  unsigned int v29; // r8d
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ebx
  unsigned int v33; // r12d
  _QWORD *v34; // rdi
  char *v35; // rsi
  __int16 v36; // cx
  unsigned __int16 *v37; // r13
  __int64 v38; // rcx
  PVOID *v39; // r13
  __int64 v40; // rcx
  __int64 v41; // r15
  __int64 v42; // r14
  int v43; // eax
  char *v44; // rsi
  __int64 v45; // r14
  int v46; // ebx
  void *v47; // rdi
  __int16 v49; // r9
  __int64 v50; // r8
  _QWORD *v51; // rdx
  __int16 v52; // r10
  __int64 v53; // rcx
  int v54; // esi
  unsigned int v55; // eax
  unsigned int v56; // eax
  void *v57; // rax
  __int64 v58; // r8
  void *v59; // rax
  void *v60; // r15
  _DWORD *v61; // rax
  _DWORD *v62; // rdi
  bool v63; // zf
  HANDLE v64; // rcx
  PVOID v65; // rdi
  void *v66; // r15
  _DWORD *AceByType; // rax
  __int64 v68; // r8
  _DWORD *v69; // rbx
  void *v70; // rdx
  ACL *v71; // r15
  PVOID v72; // r8
  ACL *v73; // rdi
  __int16 v74; // ax
  unsigned int v75; // ecx
  unsigned int v76; // ecx
  unsigned int v77; // ecx
  unsigned int v78; // ecx
  __int16 v79; // ax
  unsigned __int8 *v80; // rdx
  _QWORD *Heap; // rdi
  void *v82; // r8
  int v83; // edx
  char *v84; // rcx
  char *v85; // rcx
  __int64 v86; // rax
  char v87; // cl
  __int64 v88; // [rsp+50h] [rbp-B0h] BYREF
  PACL Acl; // [rsp+58h] [rbp-A8h]
  PVOID v90; // [rsp+60h] [rbp-A0h]
  char v91; // [rsp+68h] [rbp-98h]
  char v92; // [rsp+69h] [rbp-97h]
  char v93; // [rsp+6Ah] [rbp-96h]
  char v94; // [rsp+6Bh] [rbp-95h]
  char v95; // [rsp+6Ch] [rbp-94h]
  char v96; // [rsp+6Dh] [rbp-93h]
  char v97; // [rsp+6Eh] [rbp-92h]
  char v98; // [rsp+6Fh] [rbp-91h]
  char v99; // [rsp+70h] [rbp-90h]
  char v100; // [rsp+71h] [rbp-8Fh]
  char v101; // [rsp+72h] [rbp-8Eh]
  char v102; // [rsp+73h] [rbp-8Dh] BYREF
  ULONG Index; // [rsp+74h] [rbp-8Ch] BYREF
  NTSTATUS v104; // [rsp+78h] [rbp-88h] BYREF
  bool v105; // [rsp+7Ch] [rbp-84h]
  void *v106; // [rsp+80h] [rbp-80h]
  void *v107; // [rsp+88h] [rbp-78h]
  PVOID *v108; // [rsp+90h] [rbp-70h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+98h] [rbp-68h] BYREF
  size_t Size; // [rsp+A0h] [rbp-60h]
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  void *Src; // [rsp+B0h] [rbp-50h]
  HANDLE ClientToken; // [rsp+B8h] [rbp-48h]
  __int64 v114; // [rsp+C0h] [rbp-40h] BYREF
  BOOL v115; // [rsp+C8h] [rbp-38h]
  ULONG TokenInformationLength; // [rsp+CCh] [rbp-34h] BYREF
  unsigned int v117; // [rsp+D0h] [rbp-30h]
  __int64 v118; // [rsp+D8h] [rbp-28h] BYREF
  PVOID v119; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v120; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v121; // [rsp+F0h] [rbp-10h] BYREF
  PVOID HeapHandle; // [rsp+F8h] [rbp-8h]
  ULONG ReturnLength; // [rsp+100h] [rbp+0h] BYREF
  PVOID v124; // [rsp+108h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+110h] [rbp+10h] BYREF
  PVOID v126; // [rsp+118h] [rbp+18h] BYREF
  PVOID v127[2]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE TokenInformation[24]; // [rsp+130h] [rbp+30h] BYREF
  int v129; // [rsp+148h] [rbp+48h]
  int v130; // [rsp+14Ch] [rbp+4Ch]
  char Sid[8]; // [rsp+168h] [rbp+68h] BYREF
  int v132; // [rsp+170h] [rbp+70h]

  v9 = TokenHandle;
  ClientToken = TokenHandle;
  v94 = 0;
  v108 = a4;
  v12 = *(_WORD *)(a3 + 2);
  LOBYTE(v8) = 0;
  v93 = 0;
  v102 = 0;
  v95 = 0;
  v13 = 0x8000;
  v101 = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  BaseAddress = 0LL;
  Src = 0LL;
  v124 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v114 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  v91 = 0;
  LOBYTE(v117) = 0;
  v115 = v8;
  v126 = 0LL;
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
  if ( (~v15[2] & 0x10) != 0 )
  {
LABEL_76:
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
    goto LABEL_76;
  }
  v16 = (unsigned __int16 *)*((_QWORD *)v15 + 3);
LABEL_7:
  Handle = 0LL;
  v90 = v16;
  v127[0] = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v18 = *((_WORD *)v15 + 1) >> 15;
  HeapHandle = ProcessHeap;
  if ( !(_BYTE)v18 )
    return (unsigned int)-1073741593;
  v19 = a2 & 0x100;
  v92 = (unsigned __int8)v12 >> 7;
  v20 = a2 & 0x80;
  v105 = (v12 & 0x40) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v54 = a2 | 0x1FF;
    v55 = v54 & 0xFFFFFF7F;
    if ( v20 )
      v55 = v54;
    a2 = v55 & 0xFFFFFEFF;
    if ( v19 )
      a2 = v55;
    if ( !v16 && !v14 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v12 & 0x10) != 0 )
        a2 |= 8u;
      else
        v115 = (v12 & 0x800) != 0;
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
  v56 = a2 >> 2;
  LOBYTE(v56) = (a2 & 4) == 0;
  v117 = v56;
  if ( v12 >= 0 )
  {
    v57 = *(void **)(a3 + 8);
    goto LABEL_109;
  }
  if ( *(_DWORD *)(a3 + 4) )
  {
    v57 = (void *)(a3 + *(unsigned int *)(a3 + 4));
LABEL_109:
    v106 = v57;
    goto LABEL_110;
  }
  v106 = 0LL;
LABEL_110:
  v93 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !TokenHandle )
      return (unsigned int)-1073741734;
    v104 = ZwQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
    v46 = v104;
    if ( v104 < 0 )
      return (unsigned int)v46;
    if ( v129 == 2 && v130 < 1 )
      return (unsigned int)-1073741659;
    v9 = ClientToken;
    LOBYTE(v58) = v92;
    if ( !(unsigned __int8)sub_180081410(ClientToken, v106, v58, &v104) )
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
      v59 = *(void **)(a3 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a3 + 8) )
      {
        v107 = 0LL;
LABEL_126:
        v23 = (char *)v107;
        v94 = 1;
        goto LABEL_20;
      }
      v59 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    v107 = v59;
    goto LABEL_126;
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
LABEL_247:
      v47 = (void *)v118;
      v46 = -1073741733;
      v25 = (void *)v114;
LABEL_62:
      if ( v95 )
        RtlFreeHeap(ProcessHeap, 0, BaseAddress);
      goto LABEL_64;
    }
    v23 = (char *)v22 + *((unsigned int *)v22 + 2);
  }
  v107 = v23;
LABEL_20:
  if ( !v23 )
    goto LABEL_247;
  if ( !RtlValidSid(v23) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v24 = v16;
    Src = v16;
    v25 = (void *)v114;
    Acl = (PACL)v114;
    v90 = (PVOID)v118;
    goto LABEL_24;
  }
  LODWORD(Size) = a2 & 0x10;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_146:
    v104 = sub_18004B8F8(v9, v127);
    v46 = v104;
    if ( v104 < 0 )
      return (unsigned int)v46;
    v65 = v127[0];
    LODWORD(ClientToken) = a2 & 0x80;
    v66 = *(void **)v127[0];
    if ( (a2 & 0x80) != 0 )
    {
      if ( !v66 )
      {
LABEL_159:
        v46 = -1073741790;
        goto LABEL_161;
      }
      Index = 0;
      do
      {
        AceByType = RtlFindAceByType(Acl, 0x14u, &Index);
        v69 = AceByType;
        if ( AceByType )
        {
          if ( (AceByType[1] & 0xFF000000) != 0 )
          {
            v46 = -1073740730;
            goto LABEL_161;
          }
          if ( !sub_1800044F8(v66, AceByType + 2, v68, &v104) )
            goto LABEL_159;
        }
        ++Index;
      }
      while ( v69 );
    }
    v104 = a2 & 0x100;
    if ( (a2 & 0x100) == 0 )
      goto LABEL_162;
    v46 = sub_18004B070(Acl, v66);
    if ( v46 < 0 )
      goto LABEL_161;
    if ( (a5 & 2) != 0 )
    {
LABEL_162:
      v71 = (ACL *)v90;
    }
    else
    {
      v70 = v66;
      v71 = (ACL *)v90;
      v46 = sub_18004B070((PACL)v90, v70);
      if ( v46 < 0 )
      {
LABEL_161:
        v72 = v65;
        goto LABEL_259;
      }
    }
    RtlFreeHeap(ProcessHeap, 0, v65);
    v73 = Acl;
    if ( (a2 & 8) != 0 )
    {
      if ( (a5 & 2) != 0 )
      {
        v46 = sub_180090200(
                (int)v71,
                (*((_WORD *)*v108 + 1) & 0x2800 | (*((unsigned __int16 *)*v108 + 1) >> 1) & 0x18u) >> 1,
                (int)Acl,
                (*(_WORD *)(a3 + 2) & 0x2800 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x18u) >> 1,
                (__int64)v106,
                (__int64)v107,
                (__int64)a7,
                2,
                (__int64)&v118,
                (__int64)&v88);
        if ( v46 < 0 )
        {
          v47 = (void *)v118;
          v25 = (void *)v114;
          goto LABEL_64;
        }
        v96 = 1;
        v90 = (PVOID)v118;
        v13 = 2 * (v88 & 0x1400 | (2 * (v88 & 8 | 0x2004)));
      }
      else
      {
        v74 = *(_WORD *)(a3 + 2);
        v90 = Acl;
        v13 = v74 & 0x2000 | 0x8010;
        if ( (v74 & 0xA00) == 0xA00 )
          v13 = v74 & 0x2000 | 0x8810;
      }
    }
    else
    {
      v90 = v71;
    }
    if ( (a2 & 0x20) != 0 )
    {
      v75 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) != 0 )
      {
        v46 = sub_180090200(
                (int)v71,
                (((*((unsigned __int16 *)*v108 + 1) >> 1) & 0x18 | *((_WORD *)*v108 + 1) & 0x800u) >> 1) & 0xFFFFEFFF,
                (int)v73,
                ((v75 & 0x800 | (v75 >> 1) & 0x18) >> 1) & 0xFFFFEFFF,
                (__int64)v106,
                (__int64)v107,
                (__int64)a7,
                2,
                (__int64)&v114,
                (__int64)&v88);
        if ( v46 < 0 )
        {
          v25 = (void *)v114;
LABEL_177:
          v47 = v90;
LABEL_64:
          if ( v47 && v96 )
            RtlFreeHeap(ProcessHeap, 0, v47);
          if ( v25 && v97 )
            RtlFreeHeap(ProcessHeap, 0, v25);
          if ( v119 && v98 )
            RtlFreeHeap(ProcessHeap, 0, v119);
          if ( v120 && v99 )
            RtlFreeHeap(ProcessHeap, 0, v120);
          if ( v121 && v100 )
            RtlFreeHeap(ProcessHeap, 0, v121);
          if ( Src && v101 )
            RtlFreeHeap(ProcessHeap, 0, Src);
          if ( !v102 )
            return (unsigned int)v46;
          v72 = v126;
LABEL_259:
          RtlFreeHeap(ProcessHeap, 0, v72);
          return (unsigned int)v46;
        }
        v97 = 1;
        Acl = (PACL)v114;
        v13 |= 2 * (v88 & 0x1400 | (2 * (v88 & 8 | 4)));
      }
      else
      {
        Acl = v73;
        v13 |= v75 & 0x2000 | 0x10;
        if ( (v75 & 0xA00) == 0xA00 )
          v13 |= 0x800u;
      }
    }
    else
    {
      Acl = v71;
    }
    if ( (a2 & 0x40) != 0 )
    {
      v76 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) != 0 )
      {
        v46 = sub_180090200(
                (int)v71,
                (((*((unsigned __int16 *)*v108 + 1) >> 1) & 0x18 | *((_WORD *)*v108 + 1) & 0x800u) >> 1) & 0xFFFFEFFF,
                (int)v73,
                ((v76 & 0x800 | (v76 >> 1) & 0x18) >> 1) & 0xFFFFEFFF,
                (__int64)v106,
                (__int64)v107,
                (__int64)a7,
                2,
                (__int64)&v119,
                (__int64)&v88);
        if ( v46 < 0 )
          goto LABEL_176;
        v98 = 1;
        v13 |= 2 * (v88 & 0x1400 | (2 * (v88 & 8 | 4)));
      }
      else
      {
        v119 = v73;
        v13 |= v76 & 0x2000 | 0x10;
        if ( (v76 & 0xA00) == 0xA00 )
          v13 |= 0x800u;
      }
    }
    else
    {
      v119 = v71;
    }
    if ( !(_DWORD)ClientToken )
    {
      v120 = v71;
      goto LABEL_195;
    }
    v77 = *(unsigned __int16 *)(a3 + 2);
    if ( (a5 & 2) == 0 )
    {
      v120 = v73;
      v13 |= v77 & 0x2000 | 0x10;
      if ( (v77 & 0xA00) == 0xA00 )
        v13 |= 0x800u;
      goto LABEL_195;
    }
    v46 = sub_180090200(
            (int)v71,
            (((*((unsigned __int16 *)*v108 + 1) >> 1) & 0x18 | *((_WORD *)*v108 + 1) & 0x800u) >> 1) & 0xFFFFEFFF,
            (int)v73,
            ((v77 & 0x800 | (v77 >> 1) & 0x18) >> 1) & 0xFFFFEFFF,
            (__int64)v106,
            (__int64)v107,
            (__int64)a7,
            2,
            (__int64)&v120,
            (__int64)&v88);
    if ( v46 >= 0 )
    {
      v99 = 1;
      v13 |= 2 * (v88 & 0x1400 | (2 * (v88 & 8 | 4)));
LABEL_195:
      if ( !v104 )
      {
        v121 = v71;
        goto LABEL_202;
      }
      v78 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) == 0 )
      {
        v121 = v73;
        v13 |= v78 & 0x2000 | 0x10;
        if ( (v78 & 0xA00) == 0xA00 )
          v13 |= 0x800u;
        goto LABEL_202;
      }
      v46 = sub_180090200(
              (int)v71,
              (((*((unsigned __int16 *)*v108 + 1) >> 1) & 0x18 | *((_WORD *)*v108 + 1) & 0x800u) >> 1) & 0xFFFFEFFF,
              (int)v73,
              ((v78 & 0x800 | (v78 >> 1) & 0x18) >> 1) & 0xFFFFEFFF,
              (__int64)v106,
              (__int64)v107,
              (__int64)a7,
              2,
              (__int64)&v121,
              (__int64)&v88);
      if ( v46 >= 0 )
      {
        v100 = 1;
        v13 |= 2 * (v88 & 0x1400 | (2 * (v88 & 8 | 4)));
LABEL_202:
        if ( (_DWORD)Size )
        {
          v79 = *(_WORD *)(a3 + 2);
          v13 |= v79 & 0x2000 | 0x10;
          if ( (v79 & 0xA00) == 0xA00 )
            v13 |= 0x800u;
        }
        else
        {
          v73 = v71;
        }
        v25 = Acl;
        v80 = (unsigned __int8 *)v73;
        v47 = v90;
        v46 = sub_18004B0E8(
                (unsigned __int8 *)v90,
                v80,
                (unsigned __int8 *)Acl,
                (unsigned __int8 *)v119,
                (unsigned __int8 *)v120,
                (unsigned __int8 *)v121,
                (ACL **)&v124,
                0LL);
        if ( v46 < 0 )
          goto LABEL_64;
        v24 = (unsigned __int16 *)v124;
        Src = v124;
        if ( !v90 && v124 && !*((_WORD *)v124 + 2) )
        {
          RtlFreeHeap(ProcessHeap, 0, v124);
          v24 = 0LL;
          Src = 0LL;
        }
        v101 = 1;
LABEL_24:
        if ( (a2 & 4) == 0 )
        {
          v84 = (char *)*v108;
          if ( (~*((_BYTE *)*v108 + 2) & 4) != 0 )
          {
            v27 = 0LL;
          }
          else if ( *((__int16 *)v84 + 1) >= 0 )
          {
            v27 = (unsigned __int16 *)*((_QWORD *)v84 + 4);
          }
          else if ( *((_DWORD *)v84 + 4) )
          {
            v27 = (unsigned __int16 *)&v84[*((unsigned int *)v84 + 4)];
          }
          else
          {
            v27 = 0LL;
          }
          goto LABEL_32;
        }
        if ( (a5 & 1) == 0 )
        {
          v26 = *(_WORD *)(a3 + 2);
          if ( (~(_BYTE)v26 & 4) != 0 )
            goto LABEL_216;
          if ( v26 >= 0 )
          {
            v27 = *(unsigned __int16 **)(a3 + 32);
            goto LABEL_29;
          }
          if ( !*(_DWORD *)(a3 + 16) )
LABEL_216:
            v27 = 0LL;
          else
            v27 = (unsigned __int16 *)(a3 + *(unsigned int *)(a3 + 16));
LABEL_29:
          v13 |= v26 & 0x1000 | 4;
          if ( (v26 & 0x500) == 0x500 )
            v13 |= 0x400u;
LABEL_31:
          if ( v92 )
          {
            TokenInformationLength = 76;
            Heap = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1310720, 0x4CuLL);
            if ( !Heap )
            {
              v46 = -1073741801;
              goto LABEL_61;
            }
            v46 = ZwOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
            v82 = Heap;
            if ( v46 >= 0 )
            {
              v46 = ZwQueryInformationToken(Handle, 4u, Heap, TokenInformationLength, &TokenInformationLength);
              ZwClose(Handle);
              if ( v46 >= 0 )
              {
                LOBYTE(v83) = v105;
                v46 = sub_1800E6AF4((_DWORD)v27, v83, *Heap, (unsigned int)&v126, (__int64)&v102);
                RtlFreeHeap(ProcessHeap, 0, Heap);
                if ( v46 < 0 )
                  goto LABEL_61;
                v27 = (unsigned __int16 *)v126;
                v24 = (unsigned __int16 *)Src;
                goto LABEL_32;
              }
              v82 = Heap;
            }
            RtlFreeHeap(ProcessHeap, 0, v82);
            goto LABEL_61;
          }
LABEL_32:
          v28 = 4 * *((unsigned __int8 *)v106 + 1) + 11;
          LODWORD(Size) = 4 * *((unsigned __int8 *)v106 + 1) + 8;
          v29 = v28 & 0xFFFFFFFC;
          LODWORD(ClientToken) = v29;
          v30 = 4 * *((unsigned __int8 *)v107 + 1) + 11;
          v104 = 4 * *((unsigned __int8 *)v107 + 1) + 8;
          v31 = v30 & 0xFFFFFFFC;
          LODWORD(v88) = v31;
          if ( v24 )
            v32 = (v24[1] + 3) & 0xFFFFFFFC;
          else
            v32 = 0;
          if ( v27 )
            v33 = (v27[1] + 3) & 0xFFFFFFFC;
          else
            v33 = 0;
          v34 = RtlAllocateHeap(HeapHandle, dword_18015B268 + 1310720, v31 + v33 + v32 + v29 + 20);
          if ( v34 )
          {
            *v34 = 0LL;
            v34[1] = 0LL;
            *((_DWORD *)v34 + 4) = 0;
            *(_BYTE *)v34 = 1;
            v35 = (char *)v34 + 20;
            if ( v115 )
              v13 |= 0x800u;
            *((_WORD *)v34 + 1) |= v13;
            v36 = *((_WORD *)v34 + 1);
            if ( (*(_WORD *)(a3 + 2) & 0x4000) != 0 )
            {
              *((_BYTE *)v34 + 1) = *(_BYTE *)(a3 + 1);
              *((_WORD *)v34 + 1) = v36 | 0x4000;
            }
            v37 = (unsigned __int16 *)Src;
            if ( Src )
            {
              memmove((char *)v34 + 20, Src, *((unsigned __int16 *)Src + 1));
              sub_18004C608((__int64)v34 + 20, a7);
              *((_DWORD *)v34 + 3) = 20;
              v38 = v37[1];
              if ( v32 > (unsigned int)v38 )
                memset(&v35[v38], 0, v32 - (unsigned int)v38);
              v35 += v32;
            }
            else
            {
              *((_DWORD *)v34 + 3) = 0;
            }
            v39 = v108;
            if ( (v13 & 0x10) == 0 )
              *((_WORD *)v34 + 1) |= *((_WORD *)*v108 + 1) & 0x2830;
            if ( v27 )
            {
              memmove(v35, v27, v27[1]);
              sub_18004C608((__int64)v35, a7);
              *((_DWORD *)v34 + 4) = (_DWORD)v35 - (_DWORD)v34;
              v40 = v27[1];
              if ( v33 > (unsigned int)v40 )
                memset(&v35[v40], 0, v33 - (unsigned int)v40);
              v35 += v33;
            }
            else
            {
              *((_DWORD *)v34 + 4) = 0;
            }
            if ( (v13 & 4) != 0 || (*((_WORD *)v34 + 1) |= *((_WORD *)*v39 + 1) & 0x140C, !(_BYTE)v117) )
            {
LABEL_52:
              v41 = (unsigned int)Size;
              memmove(v35, v106, (unsigned int)Size);
              v42 = (unsigned int)ClientToken;
              if ( (unsigned int)v41 < (unsigned int)ClientToken )
                memset(&v35[v41], 0, (unsigned int)((_DWORD)ClientToken - v41));
              v43 = (_DWORD)v35 - (_DWORD)v34;
              v44 = &v35[v42];
              *((_DWORD *)v34 + 1) = v43;
              if ( !v93 )
                *((_WORD *)v34 + 1) |= *((_WORD *)*v39 + 1) & 1;
              v45 = (unsigned int)v104;
              memmove(v44, v107, (unsigned int)v104);
              if ( (unsigned int)v45 < (unsigned int)v88 )
                memset(&v44[v45], 0, (unsigned int)(v88 - v45));
              *((_DWORD *)v34 + 2) = (_DWORD)v44 - (_DWORD)v34;
              if ( !v94 )
                *((_WORD *)v34 + 1) |= *((_WORD *)*v39 + 1) & 2;
              ProcessHeap = HeapHandle;
              RtlFreeHeap(HeapHandle, 0, *v39);
              *v39 = v34;
              v46 = 0;
              goto LABEL_61;
            }
            *(_DWORD *)IdentifierAuthority.Value = 0;
            *(_WORD *)&IdentifierAuthority.Value[4] = 768;
            v46 = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
            if ( v46 >= 0 )
            {
              v132 = 4;
              Index = 0;
              while ( 1 )
              {
                if ( (~*((_BYTE *)v34 + 2) & 4) != 0 )
                  goto LABEL_243;
                if ( *((__int16 *)v34 + 1) < 0 )
                  break;
                v85 = (char *)v34[4];
LABEL_245:
                v86 = sub_1800E7FA8(v85, Sid, &Index);
                if ( !v86 )
                  goto LABEL_52;
                v87 = *(_BYTE *)(v86 + 1) & 0xF4 | 8;
                ++Index;
                *(_BYTE *)(v86 + 1) = v87;
              }
              if ( *((_DWORD *)v34 + 4) )
              {
                v85 = (char *)v34 + *((unsigned int *)v34 + 4);
                goto LABEL_245;
              }
LABEL_243:
              v85 = 0LL;
              goto LABEL_245;
            }
          }
          else
          {
            v46 = -1073741801;
          }
          ProcessHeap = HeapHandle;
LABEL_61:
          v25 = Acl;
          v47 = v90;
          goto LABEL_62;
        }
        v49 = *(_WORD *)(a3 + 2);
        if ( (~(_BYTE)v49 & 4) == 0 )
        {
          if ( v49 >= 0 )
          {
            v50 = *(_QWORD *)(a3 + 32);
LABEL_81:
            v51 = *v108;
            v52 = *((_WORD *)*v108 + 1);
            if ( (~(_BYTE)v52 & 4) == 0 )
            {
              if ( v52 >= 0 )
              {
                v53 = v51[4];
LABEL_85:
                v46 = sub_180090200(
                        v53,
                        v52 & 0x140C,
                        v50,
                        v49 & 0x140C,
                        (__int64)v106,
                        (__int64)v107,
                        (__int64)a7,
                        1,
                        (__int64)&BaseAddress,
                        (__int64)&v88);
                if ( v46 >= 0 )
                {
                  v27 = (unsigned __int16 *)BaseAddress;
                  v95 = 1;
                  v13 |= v88 & 0x1408 | 4;
                  goto LABEL_31;
                }
                goto LABEL_177;
              }
              if ( *((_DWORD *)v51 + 4) )
              {
                LODWORD(v53) = (_DWORD)v51 + *((_DWORD *)v51 + 4);
                goto LABEL_85;
              }
            }
            LODWORD(v53) = 0;
            goto LABEL_85;
          }
          if ( *(_DWORD *)(a3 + 16) )
          {
            LODWORD(v50) = a3 + *(_DWORD *)(a3 + 16);
            goto LABEL_81;
          }
        }
        LODWORD(v50) = 0;
        goto LABEL_81;
      }
    }
LABEL_176:
    v25 = Acl;
    goto LABEL_177;
  }
  Index = 0;
  v60 = 0LL;
  while ( 1 )
  {
    v61 = RtlFindAceByType(v14, 0x11u, &Index);
    v62 = v61;
    if ( v61 )
    {
      v63 = (v61[1] & 0xFFFFFFF8) == 0;
      v60 = v61 + 2;
      v91 = *((_BYTE *)v61 + 1);
      if ( !v63 )
        break;
    }
    if ( v9 )
    {
      v104 = ZwQueryInformationToken(v9, 0xAu, TokenInformation, 0x38u, &ReturnLength);
      v46 = v104;
      if ( v104 < 0 )
        return (unsigned int)v46;
      if ( v129 == 2 && v130 < 1 )
        return (unsigned int)-1073741659;
    }
    else
    {
      v104 = ZwOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
      v46 = v104;
      if ( v104 < 0 )
        return (unsigned int)v46;
    }
    v9 = ClientToken;
    v64 = Handle;
    if ( ClientToken )
      v64 = ClientToken;
    if ( !(unsigned __int8)sub_1800E6ED4(v64, v60) )
    {
      ZwClose(Handle);
      break;
    }
    ZwClose(Handle);
    ++Index;
    if ( !v62 )
      goto LABEL_146;
    v14 = Acl;
  }
  return (unsigned int)-1073740730;
}
