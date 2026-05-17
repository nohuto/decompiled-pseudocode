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
        unsigned __int64 *a4,
        char a5,
        __int64 a6,
        __int64 a7,
        size_t a8)
{
  BOOL v8; // r11d
  size_t v9; // rbx
  __int16 v12; // dx
  __int16 v13; // si
  unsigned __int8 *v14; // r14
  unsigned __int64 v15; // rcx
  unsigned __int8 *v16; // rdi
  void *ProcessHeap; // r13
  int v18; // r8d
  int v19; // r9d
  _BYTE *v20; // rax
  unsigned __int64 v21; // rax
  _BYTE *v22; // rcx
  unsigned __int8 *v23; // rdi
  __int16 v24; // cx
  unsigned __int16 *v25; // r14
  __int16 v26; // ax
  int v27; // ecx
  int v28; // r8d
  unsigned int v29; // ebx
  unsigned int v30; // r12d
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  char *v33; // r15
  __int16 v34; // ax
  unsigned __int16 *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  bool v38; // zf
  unsigned __int64 *v39; // rsi
  __int64 v40; // rbx
  char *v41; // rbx
  int v42; // ebx
  unsigned __int8 *v43; // r14
  unsigned __int64 v45; // r8
  int v46; // r15d
  unsigned int v47; // eax
  unsigned int v48; // eax
  void *v49; // rax
  void *v50; // rax
  unsigned __int8 *v51; // rax
  unsigned __int8 *v52; // rdi
  __int64 v53; // r8
  size_t v54; // rcx
  unsigned __int64 v55; // rdi
  __int64 v56; // r14
  unsigned __int8 *AceByType; // rax
  __int64 v58; // r8
  unsigned __int8 *v59; // rbx
  __int64 v60; // rdx
  unsigned __int8 *v61; // r14
  unsigned int v62; // edx
  unsigned int v63; // edx
  unsigned __int8 *v64; // r8
  __int16 v65; // ax
  unsigned int v66; // edx
  __int16 v67; // ax
  unsigned int v68; // edx
  unsigned __int8 *v69; // r8
  __int16 v70; // ax
  unsigned int v71; // edx
  __int16 v72; // ax
  __int16 v73; // ax
  __int16 v74; // cx
  __int16 v75; // ax
  __int64 v76; // r8
  unsigned __int64 v77; // rax
  __int16 v78; // dx
  __int64 v79; // rcx
  _QWORD *Heap; // rdi
  unsigned __int64 v81; // r8
  int v82; // edx
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rcx
  __int64 v85; // rax
  char v86; // cl
  unsigned __int8 v87; // [rsp+50h] [rbp-B0h]
  char v88; // [rsp+51h] [rbp-AFh]
  char v89; // [rsp+52h] [rbp-AEh]
  char v90; // [rsp+53h] [rbp-ADh]
  char v91; // [rsp+54h] [rbp-ACh]
  char v92; // [rsp+55h] [rbp-ABh]
  char v93; // [rsp+56h] [rbp-AAh]
  char v94; // [rsp+57h] [rbp-A9h]
  char v95; // [rsp+58h] [rbp-A8h]
  char v96; // [rsp+59h] [rbp-A7h]
  char v97[2]; // [rsp+5Ah] [rbp-A6h] BYREF
  int v98; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v99; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v100; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int8 *v101; // [rsp+70h] [rbp-90h]
  int InformationToken; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 *v103; // [rsp+80h] [rbp-80h]
  char v104; // [rsp+88h] [rbp-78h]
  bool v105; // [rsp+89h] [rbp-77h]
  void *v106; // [rsp+90h] [rbp-70h]
  void *v107; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v108; // [rsp+A0h] [rbp-60h]
  int v109; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v110; // [rsp+ACh] [rbp-54h]
  void *Src; // [rsp+B0h] [rbp-50h]
  unsigned int Size; // [rsp+B8h] [rbp-48h]
  __int16 Size_4; // [rsp+BCh] [rbp-44h]
  size_t v114; // [rsp+C0h] [rbp-40h] BYREF
  size_t v115; // [rsp+C8h] [rbp-38h]
  unsigned __int8 *v116; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v117; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v118; // [rsp+DCh] [rbp-24h]
  BOOL v119; // [rsp+E0h] [rbp-20h]
  unsigned __int8 *v120; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int8 *v121; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int8 *v122; // [rsp+F8h] [rbp-8h] BYREF
  char v123[8]; // [rsp+100h] [rbp+0h] BYREF
  _WORD *v124; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int16 *v125; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 *v126; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int8 *v127; // [rsp+120h] [rbp+20h]
  __int64 *v128; // [rsp+128h] [rbp+28h] BYREF
  __int64 v129; // [rsp+130h] [rbp+30h]
  _BYTE v130[24]; // [rsp+138h] [rbp+38h] BYREF
  int v131; // [rsp+150h] [rbp+50h]
  int v132; // [rsp+154h] [rbp+54h]
  char v133[8]; // [rsp+170h] [rbp+70h] BYREF
  int v134; // [rsp+178h] [rbp+78h]

  v9 = a8;
  v129 = a3;
  v108 = a4;
  LOBYTE(v8) = 0;
  v115 = a8;
  v12 = *(_WORD *)(a3 + 2);
  v13 = 0x8000;
  v89 = 0;
  v88 = 0;
  v97[0] = 0;
  v90 = 0;
  v96 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v125 = 0LL;
  Src = 0LL;
  v124 = 0LL;
  v100 = 0LL;
  v120 = 0LL;
  v116 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  v127 = 0LL;
  v87 = 0;
  LOBYTE(v118) = 0;
  v119 = v8;
  v126 = 0LL;
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
  v103 = v14;
  if ( (*(_BYTE *)(v15 + 2) & 0x10) == 0 )
  {
LABEL_78:
    v16 = 0LL;
    goto LABEL_7;
  }
  if ( *(__int16 *)(v15 + 2) < 0 )
  {
    if ( *(_DWORD *)(v15 + 12) )
    {
      v16 = (unsigned __int8 *)(v15 + *(unsigned int *)(v15 + 12));
      goto LABEL_7;
    }
    goto LABEL_78;
  }
  v16 = *(unsigned __int8 **)(v15 + 24);
LABEL_7:
  v114 = 0LL;
  v101 = v16;
  v128 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( *(__int16 *)(v15 + 2) >= 0 )
    return (unsigned int)-1073741593;
  Size_4 = v12 & 0x80;
  v104 = Size_4 != 0;
  v18 = a2 & 0x80;
  v19 = a2 & 0x100;
  v105 = (v12 & 0x40) != 0;
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
        v119 = (v12 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( *(__int16 *)(v15 + 2) >= 0 )
    {
      v20 = *(_BYTE **)(v15 + 8);
    }
    else
    {
      if ( !*(_DWORD *)(v15 + 4) )
        return (unsigned int)-1073741734;
      v20 = (_BYTE *)(v15 + *(unsigned int *)(v15 + 4));
    }
    v106 = v20;
    if ( v20 )
      goto LABEL_14;
    return (unsigned int)-1073741734;
  }
  v48 = a2 >> 2;
  LOBYTE(v48) = (a2 & 4) == 0;
  v118 = v48;
  if ( v12 >= 0 )
  {
    v49 = *(void **)(a3 + 8);
    goto LABEL_95;
  }
  if ( *(_DWORD *)(a3 + 4) )
  {
    v49 = (void *)(a3 + *(unsigned int *)(a3 + 4));
LABEL_95:
    v106 = v49;
    goto LABEL_96;
  }
  v106 = 0LL;
LABEL_96:
  v88 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !a8 )
      return (unsigned int)-1073741734;
    InformationToken = ZwQueryInformationToken(a8, 10LL, v130, 56LL, v123);
    v42 = InformationToken;
    if ( InformationToken < 0 )
      return (unsigned int)v42;
    if ( v131 == 2 && v132 < 1 )
      return (unsigned int)-1073741659;
    v9 = v115;
    if ( !sub_180044394(v115, v106, v104, &InformationToken) )
      return (unsigned int)-1073741734;
  }
  v20 = v106;
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
        v107 = 0LL;
LABEL_112:
        v22 = v107;
        v89 = 1;
        goto LABEL_20;
      }
      v50 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    v107 = v50;
    goto LABEL_112;
  }
  v21 = *v108;
  if ( *(__int16 *)(*v108 + 2) >= 0 )
  {
    v22 = *(_BYTE **)(v21 + 16);
  }
  else
  {
    if ( !*(_DWORD *)(v21 + 8) )
    {
LABEL_243:
      v23 = v116;
      v42 = -1073741733;
LABEL_58:
      v43 = v100;
      if ( v90 )
        RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v125);
      goto LABEL_60;
    }
    v22 = (_BYTE *)(v21 + *(unsigned int *)(v21 + 8));
  }
  v107 = v22;
LABEL_20:
  if ( !v22 )
    goto LABEL_243;
  if ( !RtlValidSid(v22) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    Src = v16;
    v23 = v116;
    v101 = v116;
    goto LABEL_24;
  }
  Size = a2 & 0x10;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_129:
    InformationToken = sub_18002E46C(v9, (unsigned __int64 *)&v128);
    v42 = InformationToken;
    if ( InformationToken < 0 )
      return (unsigned int)v42;
    v55 = (unsigned __int64)v128;
    LODWORD(v115) = a2 & 0x80;
    v56 = *v128;
    if ( (a2 & 0x80) != 0 )
    {
      if ( !v56 )
      {
LABEL_144:
        v42 = -1073741790;
        goto LABEL_146;
      }
      v99 = 0;
      do
      {
        AceByType = RtlFindAceByType((__int64)v103, 20, &v99);
        v59 = AceByType;
        if ( AceByType )
        {
          if ( (*((_DWORD *)AceByType + 1) & 0xFF000000) != 0 )
          {
            v42 = -1073740730;
            goto LABEL_146;
          }
          if ( !sub_180002C80(v56, (__int64)(AceByType + 8), v58, &InformationToken) )
            goto LABEL_144;
        }
        ++v99;
      }
      while ( v59 );
    }
    InformationToken = a2 & 0x100;
    if ( (a2 & 0x100) == 0 )
      goto LABEL_148;
    v42 = sub_18002EC40((__int64)v103, v56);
    if ( v42 < 0 )
      goto LABEL_146;
    if ( (a5 & 2) != 0 )
    {
LABEL_148:
      v61 = v101;
    }
    else
    {
      v60 = v56;
      v61 = v101;
      v42 = sub_18002EC40((__int64)v101, v60);
      if ( v42 < 0 )
      {
LABEL_146:
        v45 = v55;
        goto LABEL_147;
      }
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, v55);
    if ( (a2 & 8) != 0 )
    {
      v62 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) != 0 )
      {
        v42 = sub_1800E0618(
                (_DWORD)v61,
                (*(_WORD *)(*v108 + 2) & 0x2800 | (*(unsigned __int16 *)(*v108 + 2) >> 1) & 0x18u) >> 1,
                (_DWORD)v103,
                (v62 & 0x2800 | (v62 >> 1) & 0x18) >> 1,
                (__int64)v106,
                (__int64)v107,
                a7,
                2,
                (__int64)&v100,
                (__int64)&v98);
        if ( v42 < 0 )
        {
          v43 = v100;
          v23 = v116;
          goto LABEL_60;
        }
        v91 = 1;
        v13 = 2 * (v98 & 0x1400 | (2 * (v98 & 8 | 0x2004)));
      }
      else
      {
        v100 = v103;
        v13 = v62 & 0x2000 | 0x8010;
        if ( (v62 & 0xA00) == 0xA00 )
          v13 = v62 & 0x2000 | 0x8810;
      }
    }
    else
    {
      v100 = v61;
    }
    if ( (a2 & 0x20) != 0 )
    {
      v63 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) == 0 )
      {
        v64 = v103;
        v101 = v103;
        v65 = v13 | v63 & 0x2000;
        v13 = v65 | 0x10;
        if ( (v63 & 0xA00) == 0xA00 )
          v13 = v65 | 0x810;
LABEL_168:
        if ( (a2 & 0x40) != 0 )
        {
          v66 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            v42 = sub_1800E0618(
                    (_DWORD)v61,
                    (*(_WORD *)(*v108 + 2) & 0x800 | (*(unsigned __int16 *)(*v108 + 2) >> 1) & 0x18u) >> 1,
                    (_DWORD)v64,
                    (v66 & 0x800 | (v66 >> 1) & 0x18) >> 1,
                    (__int64)v106,
                    (__int64)v107,
                    a7,
                    2,
                    (__int64)&v120,
                    (__int64)&v98);
            if ( v42 < 0 )
              goto LABEL_162;
            v93 = 1;
            v13 |= 2 * (v98 & 0x1400 | (2 * (v98 & 8 | 4)));
          }
          else
          {
            v120 = v64;
            v67 = v13 | v66 & 0x2000;
            v13 = v67 | 0x10;
            if ( (v66 & 0xA00) == 0xA00 )
              v13 = v67 | 0x810;
          }
        }
        else
        {
          v120 = v61;
        }
        if ( !(_DWORD)v115 )
        {
          v121 = v61;
          goto LABEL_182;
        }
        v68 = *(unsigned __int16 *)(a3 + 2);
        v69 = v103;
        if ( (a5 & 2) == 0 )
        {
          v121 = v103;
          v70 = v13 | v68 & 0x2000;
          v13 = v70 | 0x10;
          if ( (v68 & 0xA00) == 0xA00 )
            v13 = v70 | 0x810;
          goto LABEL_183;
        }
        v42 = sub_1800E0618(
                (_DWORD)v61,
                (*(_WORD *)(*v108 + 2) & 0x800 | (*(unsigned __int16 *)(*v108 + 2) >> 1) & 0x18u) >> 1,
                (_DWORD)v103,
                (v68 & 0x800 | (v68 >> 1) & 0x18) >> 1,
                (__int64)v106,
                (__int64)v107,
                a7,
                2,
                (__int64)&v121,
                (__int64)&v98);
        if ( v42 >= 0 )
        {
          v94 = 1;
          v13 |= 2 * (v98 & 0x1400 | (2 * (v98 & 8 | 4)));
LABEL_182:
          v69 = v103;
LABEL_183:
          if ( !InformationToken )
          {
            v122 = v61;
            goto LABEL_190;
          }
          v71 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) == 0 )
          {
            v122 = v69;
            v72 = v13 | v71 & 0x2000;
            v13 = v72 | 0x10;
            if ( (v71 & 0xA00) == 0xA00 )
              v13 = v72 | 0x810;
            goto LABEL_190;
          }
          v42 = sub_1800E0618(
                  (_DWORD)v61,
                  (*(_WORD *)(*v108 + 2) & 0x800 | (*(unsigned __int16 *)(*v108 + 2) >> 1) & 0x18u) >> 1,
                  (_DWORD)v69,
                  (v71 & 0x800 | (v71 >> 1) & 0x18) >> 1,
                  (__int64)v106,
                  (__int64)v107,
                  a7,
                  2,
                  (__int64)&v122,
                  (__int64)&v98);
          if ( v42 >= 0 )
          {
            v95 = 1;
            v13 |= 2 * (v98 & 0x1400 | (2 * (v98 & 8 | 4)));
LABEL_190:
            if ( Size )
            {
              v73 = *(_WORD *)(a3 + 2);
              v74 = v73 & 0xA00;
              v75 = v13 | v73 & 0x2000;
              v13 = v75 | 0x10;
              if ( v74 == 2560 )
                v13 = v75 | 0x810;
            }
            else
            {
              v103 = v61;
            }
            v23 = v101;
            v43 = v100;
            v42 = sub_18002E668(v100, v103, v101, v120, v121, v122, (unsigned __int64 *)&v124, 0LL);
            if ( v42 < 0 )
              goto LABEL_60;
            Src = v124;
            if ( !v43 && v124 && !v124[2] )
            {
              RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v124);
              Src = 0LL;
            }
            v96 = 1;
LABEL_24:
            if ( (a2 & 4) == 0 )
            {
              v83 = *v108;
              if ( (*(_BYTE *)(*v108 + 2) & 4) != 0 )
              {
                if ( *(__int16 *)(v83 + 2) >= 0 )
                {
                  v25 = *(unsigned __int16 **)(v83 + 32);
                  goto LABEL_32;
                }
                if ( *(_DWORD *)(v83 + 16) )
                {
                  v25 = (unsigned __int16 *)(v83 + *(unsigned int *)(v83 + 16));
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
                v117 = 76;
                Heap = (_QWORD *)RtlAllocateHeap((__int64)ProcessHeap, dword_18015C294 + 1310720, 76LL);
                if ( !Heap )
                {
LABEL_219:
                  v42 = -1073741801;
                  goto LABEL_57;
                }
                v42 = ZwOpenProcessToken(-1LL, 8LL, &v114);
                v81 = (unsigned __int64)Heap;
                if ( v42 >= 0 )
                {
                  v42 = ZwQueryInformationToken(v114, 4LL, Heap, v117, &v117);
                  ZwClose(v114);
                  if ( v42 >= 0 )
                  {
                    LOBYTE(v82) = v105;
                    v42 = sub_1800E1800((_DWORD)v25, v82, *Heap, (unsigned int)&v126, (__int64)v97);
                    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Heap);
                    if ( v42 < 0 )
                      goto LABEL_57;
                    v25 = v126;
                    goto LABEL_32;
                  }
                  v81 = (unsigned __int64)Heap;
                }
                RtlFreeHeap((__int64)ProcessHeap, 0, v81);
LABEL_57:
                v23 = v101;
                goto LABEL_58;
              }
LABEL_32:
              v27 = 4 * *((unsigned __int8 *)v106 + 1) + 8;
              Size = v27;
              v28 = 4 * *((unsigned __int8 *)v107 + 1) + 8;
              LODWORD(v115) = v28;
              if ( Src )
                v29 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
              else
                v29 = 0;
              if ( v25 )
                v30 = (v25[1] + 3) & 0xFFFFFFFC;
              else
                v30 = 0;
              v31 = RtlAllocateHeap((__int64)ProcessHeap, dword_18015C294 + 1310720, v28 + v30 + v29 + v27 + 20);
              v32 = v31;
              if ( v31 )
              {
                v33 = (char *)(v31 + 20);
                *(_QWORD *)v31 = 0LL;
                *(_QWORD *)(v31 + 8) = 0LL;
                *(_DWORD *)(v31 + 16) = 0;
                *(_BYTE *)v31 = 1;
                if ( v119 )
                  v13 |= 0x800u;
                v34 = *(_WORD *)(v31 + 2) | v13;
                *(_WORD *)(v32 + 2) = v34;
                if ( (*(_WORD *)(v129 + 2) & 0x4000) != 0 )
                {
                  *(_BYTE *)(v32 + 1) = *(_BYTE *)(v129 + 1);
                  *(_WORD *)(v32 + 2) = v34 | 0x4000;
                }
                if ( Src )
                {
                  memmove((void *)(v32 + 20), Src, *((unsigned __int16 *)Src + 1));
                  sub_180078B08(v32 + 20, a7);
                  v35 = (unsigned __int16 *)Src;
                  *(_DWORD *)(v32 + 12) = (_DWORD)v33 - v32;
                  v36 = v35[1];
                  if ( v29 > (unsigned int)v36 )
                    memset((void *)(v32 + 20 + v36), 0, v29 - (unsigned int)v36);
                  v33 = (char *)(v32 + 20 + v29);
                }
                else
                {
                  *(_DWORD *)(v32 + 12) = 0;
                }
                if ( (v13 & 0x10) == 0 )
                  *(_WORD *)(v32 + 2) |= *(_WORD *)(*v108 + 2) & 0x2830;
                if ( v25 )
                {
                  memmove(v33, v25, v25[1]);
                  sub_180078B08(v33, a7);
                  *(_DWORD *)(v32 + 16) = (_DWORD)v33 - v32;
                  v37 = v25[1];
                  if ( v30 > (unsigned int)v37 )
                    memset(&v33[v37], 0, v30 - (unsigned int)v37);
                  v33 += v30;
                }
                else
                {
                  *(_DWORD *)(v32 + 16) = 0;
                }
                v38 = (v13 & 4) == 0;
                v39 = v108;
                if ( v38 && (*(_WORD *)(v32 + 2) |= *(_WORD *)(*v108 + 2) & 0x140C, (_BYTE)v118) )
                {
                  v109 = 0;
                  v110 = 768;
                  v42 = RtlInitializeSid((__int64)v133, (__int64)&v109, 1u);
                  if ( v42 >= 0 )
                  {
                    v134 = 4;
                    v99 = 0;
                    while ( 1 )
                    {
                      if ( (*(_BYTE *)(v32 + 2) & 4) == 0 )
                        goto LABEL_239;
                      if ( *(__int16 *)(v32 + 2) < 0 )
                        break;
                      v84 = *(_QWORD *)(v32 + 32);
LABEL_241:
                      v85 = sub_1800E2CE8(v84, v133, &v99);
                      if ( !v85 )
                        goto LABEL_52;
                      v86 = *(_BYTE *)(v85 + 1) & 0xF4 | 8;
                      ++v99;
                      *(_BYTE *)(v85 + 1) = v86;
                    }
                    if ( *(_DWORD *)(v32 + 16) )
                    {
                      v84 = v32 + *(unsigned int *)(v32 + 16);
                      goto LABEL_241;
                    }
LABEL_239:
                    v84 = 0LL;
                    goto LABEL_241;
                  }
                }
                else
                {
LABEL_52:
                  v40 = Size;
                  memmove(v33, v106, Size);
                  v41 = &v33[v40];
                  *(_DWORD *)(v32 + 4) = (_DWORD)v33 - v32;
                  if ( !v88 )
                    *(_WORD *)(v32 + 2) |= *(_WORD *)(*v39 + 2) & 1;
                  memmove(v41, v107, (unsigned int)v115);
                  *(_DWORD *)(v32 + 8) = (_DWORD)v41 - v32;
                  if ( !v89 )
                    *(_WORD *)(v32 + 2) |= *(_WORD *)(*v39 + 2) & 2;
                  RtlFreeHeap((__int64)ProcessHeap, 0, *v39);
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
                v76 = *(_QWORD *)(a3 + 32);
LABEL_206:
                v77 = *v108;
                v78 = *(_WORD *)(*v108 + 2);
                if ( (v78 & 4) != 0 )
                {
                  if ( v78 >= 0 )
                  {
                    v79 = *(_QWORD *)(v77 + 32);
LABEL_212:
                    v42 = sub_1800E0618(
                            v79,
                            v78 & 0x140C,
                            v76,
                            *(_WORD *)(a3 + 2) & 0x140C,
                            (__int64)v106,
                            (__int64)v107,
                            a7,
                            1,
                            (__int64)&v125,
                            (__int64)&v98);
                    if ( v42 >= 0 )
                    {
                      v90 = 1;
                      v25 = v125;
                      v13 |= v98 & 0x1408 | 4;
                      goto LABEL_31;
                    }
                    goto LABEL_163;
                  }
                  if ( *(_DWORD *)(v77 + 16) )
                  {
                    LODWORD(v79) = v77 + *(_DWORD *)(v77 + 16);
                    goto LABEL_212;
                  }
                }
                LODWORD(v79) = 0;
                goto LABEL_212;
              }
              if ( *(_DWORD *)(a3 + 16) )
              {
                LODWORD(v76) = a3 + *(_DWORD *)(a3 + 16);
                goto LABEL_206;
              }
            }
            LODWORD(v76) = 0;
            goto LABEL_206;
          }
        }
LABEL_162:
        v23 = v101;
        goto LABEL_163;
      }
      v42 = sub_1800E0618(
              (_DWORD)v61,
              (*(_WORD *)(*v108 + 2) & 0x800 | (*(unsigned __int16 *)(*v108 + 2) >> 1) & 0x18u) >> 1,
              (_DWORD)v103,
              (v63 & 0x800 | (v63 >> 1) & 0x18) >> 1,
              (__int64)v106,
              (__int64)v107,
              a7,
              2,
              (__int64)&v116,
              (__int64)&v98);
      if ( v42 < 0 )
      {
        v23 = v116;
LABEL_163:
        v43 = v100;
LABEL_60:
        if ( v43 && v91 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v43);
        if ( v23 && v92 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v23);
        if ( v120 && v93 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v120);
        if ( v121 && v94 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v121);
        if ( v122 && v95 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v122);
        if ( Src && v96 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Src);
        if ( !v97[0] )
          return (unsigned int)v42;
        v45 = (unsigned __int64)v126;
LABEL_147:
        RtlFreeHeap((__int64)ProcessHeap, 0, v45);
        return (unsigned int)v42;
      }
      v92 = 1;
      v101 = v116;
      v13 |= 2 * (v98 & 0x1400 | (2 * (v98 & 8 | 4)));
    }
    else
    {
      v101 = v61;
    }
    v64 = v103;
    goto LABEL_168;
  }
  v99 = 0;
  while ( 1 )
  {
    v51 = RtlFindAceByType((__int64)v14, 17, &v99);
    v52 = v51;
    if ( v51 )
    {
      v38 = (*((_DWORD *)v51 + 1) & 0xFFFFFFF8) == 0;
      v127 = v51 + 8;
      v87 = v51[1];
      if ( !v38 )
        break;
    }
    if ( v9 )
    {
      InformationToken = ZwQueryInformationToken(v9, 10LL, v130, 56LL, v123);
      v42 = InformationToken;
      if ( InformationToken < 0 )
        return (unsigned int)v42;
      if ( v131 == 2 && v132 < 1 )
        return (unsigned int)-1073741659;
    }
    else
    {
      InformationToken = ZwOpenProcessToken(-1LL, 8LL, &v114);
      v42 = InformationToken;
      if ( InformationToken < 0 )
        return (unsigned int)v42;
    }
    v9 = v115;
    v54 = v114;
    LOBYTE(v53) = v87;
    if ( v115 )
      v54 = v115;
    if ( !(unsigned __int8)sub_1800E1BF4(v54, v127, v53, &InformationToken) )
    {
      ZwClose(v114);
      break;
    }
    ZwClose(v114);
    ++v99;
    if ( !v52 )
      goto LABEL_129;
  }
  return (unsigned int)-1073740730;
}
