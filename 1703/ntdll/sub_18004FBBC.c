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
        unsigned __int64 *a4,
        char a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  BOOL v8; // r11d
  __int64 v9; // rbx
  __int16 v12; // dx
  __int16 v13; // r14
  unsigned __int8 *v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int8 *v16; // r15
  void *ProcessHeap; // r12
  __int16 v18; // ax
  int v19; // r9d
  int v20; // r8d
  _BYTE *v21; // rax
  unsigned __int64 v22; // rax
  _BYTE *v23; // rcx
  _WORD *v24; // rdi
  unsigned __int8 *v25; // r15
  __int16 v26; // cx
  unsigned __int16 *v27; // r15
  int v28; // r8d
  unsigned int v29; // r8d
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ebx
  unsigned int v33; // r12d
  __int64 v34; // rdi
  char *v35; // rsi
  __int16 v36; // cx
  unsigned __int16 *v37; // r13
  __int64 v38; // rcx
  unsigned __int64 *v39; // r13
  __int64 v40; // rcx
  __int64 v41; // r15
  __int64 v42; // r14
  int v43; // eax
  char *v44; // rsi
  __int64 v45; // r14
  int v46; // ebx
  unsigned __int8 *v47; // rdi
  __int16 v49; // r9
  __int64 v50; // r8
  unsigned __int64 v51; // rdx
  __int16 v52; // r10
  __int64 v53; // rcx
  int v54; // esi
  unsigned int v55; // eax
  unsigned int v56; // eax
  void *v57; // rax
  __int64 v58; // r8
  void *v59; // rax
  unsigned __int8 *v60; // r15
  unsigned __int8 *v61; // rax
  unsigned __int8 *v62; // rdi
  bool v63; // zf
  __int64 v64; // r8
  __int64 v65; // rcx
  unsigned __int64 v66; // rdi
  __int64 v67; // r15
  unsigned __int8 *AceByType; // rax
  __int64 v69; // r8
  unsigned __int8 *v70; // rbx
  __int64 v71; // rdx
  unsigned __int8 *v72; // r15
  unsigned __int64 v73; // r8
  unsigned __int8 *v74; // rdi
  __int16 v75; // ax
  unsigned int v76; // ecx
  unsigned int v77; // ecx
  unsigned int v78; // ecx
  unsigned int v79; // ecx
  __int16 v80; // ax
  unsigned __int8 *v81; // rdx
  _QWORD *Heap; // rdi
  unsigned __int64 v83; // r8
  int v84; // edx
  unsigned __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rax
  char v88; // cl
  char *v89; // [rsp+20h] [rbp-E0h]
  unsigned int v90; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 *v91; // [rsp+58h] [rbp-A8h]
  unsigned __int8 *v92; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v93; // [rsp+68h] [rbp-98h]
  char v94; // [rsp+69h] [rbp-97h]
  char v95; // [rsp+6Ah] [rbp-96h]
  char v96; // [rsp+6Bh] [rbp-95h]
  char v97; // [rsp+6Ch] [rbp-94h]
  char v98; // [rsp+6Dh] [rbp-93h]
  char v99; // [rsp+6Eh] [rbp-92h]
  char v100; // [rsp+6Fh] [rbp-91h]
  char v101; // [rsp+70h] [rbp-90h]
  char v102; // [rsp+71h] [rbp-8Fh]
  char v103; // [rsp+72h] [rbp-8Eh]
  char v104; // [rsp+73h] [rbp-8Dh] BYREF
  unsigned int v105; // [rsp+74h] [rbp-8Ch] BYREF
  int InformationToken; // [rsp+78h] [rbp-88h] BYREF
  bool v107; // [rsp+7Ch] [rbp-84h]
  void *v108; // [rsp+80h] [rbp-80h]
  void *v109; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v110; // [rsp+90h] [rbp-70h]
  int v111; // [rsp+98h] [rbp-68h] BYREF
  __int16 v112; // [rsp+9Ch] [rbp-64h]
  size_t Size; // [rsp+A0h] [rbp-60h]
  __int64 v114; // [rsp+A8h] [rbp-58h] BYREF
  void *Src; // [rsp+B0h] [rbp-50h]
  __int64 v116; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v117; // [rsp+C0h] [rbp-40h] BYREF
  BOOL v118; // [rsp+C8h] [rbp-38h]
  int v119; // [rsp+CCh] [rbp-34h]
  unsigned int v120; // [rsp+D0h] [rbp-30h]
  unsigned __int8 *v121; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int8 *v122; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int8 *v123; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int8 *v124; // [rsp+F0h] [rbp-10h] BYREF
  void *v125; // [rsp+F8h] [rbp-8h]
  char v126; // [rsp+100h] [rbp+0h] BYREF
  _WORD *v127; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int16 *v128; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 *v129; // [rsp+118h] [rbp+18h] BYREF
  __int64 *v130; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v131[24]; // [rsp+130h] [rbp+30h] BYREF
  int v132; // [rsp+148h] [rbp+48h]
  int v133; // [rsp+14Ch] [rbp+4Ch]
  char v134[8]; // [rsp+168h] [rbp+68h] BYREF
  int v135; // [rsp+170h] [rbp+70h]

  v9 = a8;
  v116 = a8;
  v96 = 0;
  v110 = a4;
  v12 = *(_WORD *)(a3 + 2);
  LOBYTE(v8) = 0;
  v95 = 0;
  v104 = 0;
  v97 = 0;
  v13 = 0x8000;
  v103 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v128 = 0LL;
  Src = 0LL;
  v127 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  v117 = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  v93 = 0;
  LOBYTE(v120) = 0;
  v118 = v8;
  v129 = 0LL;
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
  v91 = v14;
  if ( (~*(_BYTE *)(v15 + 2) & 0x10) != 0 )
  {
LABEL_76:
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
    goto LABEL_76;
  }
  v16 = *(unsigned __int8 **)(v15 + 24);
LABEL_7:
  v114 = 0LL;
  v92 = v16;
  v130 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v18 = *(_WORD *)(v15 + 2) >> 15;
  v125 = ProcessHeap;
  if ( !(_BYTE)v18 )
    return (unsigned int)-1073741593;
  v19 = a2 & 0x100;
  v94 = (unsigned __int8)v12 >> 7;
  v20 = a2 & 0x80;
  v107 = (v12 & 0x40) != 0;
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
        v118 = (v12 & 0x800) != 0;
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
  v56 = a2 >> 2;
  LOBYTE(v56) = (a2 & 4) == 0;
  v120 = v56;
  if ( v12 >= 0 )
  {
    v57 = *(void **)(a3 + 8);
    goto LABEL_109;
  }
  if ( *(_DWORD *)(a3 + 4) )
  {
    v57 = (void *)(a3 + *(unsigned int *)(a3 + 4));
LABEL_109:
    v108 = v57;
    goto LABEL_110;
  }
  v108 = 0LL;
LABEL_110:
  v95 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !a8 )
      return (unsigned int)-1073741734;
    v89 = &v126;
    InformationToken = ZwQueryInformationToken(a8, 10LL, v131);
    v46 = InformationToken;
    if ( InformationToken < 0 )
      return (unsigned int)v46;
    if ( v132 == 2 && v133 < 1 )
      return (unsigned int)-1073741659;
    v9 = v116;
    LOBYTE(v58) = v94;
    if ( !(unsigned __int8)sub_180081410(v116, v108, v58, &InformationToken) )
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
      v59 = *(void **)(a3 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a3 + 8) )
      {
        v109 = 0LL;
LABEL_126:
        v23 = v109;
        v96 = 1;
        goto LABEL_20;
      }
      v59 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    v109 = v59;
    goto LABEL_126;
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
LABEL_247:
      v47 = v121;
      v46 = -1073741733;
      v25 = v117;
LABEL_62:
      if ( v97 )
        RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v128);
      goto LABEL_64;
    }
    v23 = (_BYTE *)(v22 + *(unsigned int *)(v22 + 8));
  }
  v109 = v23;
LABEL_20:
  if ( !v23 )
    goto LABEL_247;
  if ( !RtlValidSid(v23) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v24 = v16;
    Src = v16;
    v25 = v117;
    v91 = v117;
    v92 = v121;
    goto LABEL_24;
  }
  LODWORD(Size) = a2 & 0x10;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_146:
    InformationToken = sub_18004B8F8(v9, (unsigned __int64 *)&v130);
    v46 = InformationToken;
    if ( InformationToken < 0 )
      return (unsigned int)v46;
    v66 = (unsigned __int64)v130;
    LODWORD(v116) = a2 & 0x80;
    v67 = *v130;
    if ( (a2 & 0x80) != 0 )
    {
      if ( !v67 )
      {
LABEL_159:
        v46 = -1073741790;
        goto LABEL_161;
      }
      v105 = 0;
      do
      {
        AceByType = RtlFindAceByType((__int64)v91, 20, &v105);
        v70 = AceByType;
        if ( AceByType )
        {
          if ( (*((_DWORD *)AceByType + 1) & 0xFF000000) != 0 )
          {
            v46 = -1073740730;
            goto LABEL_161;
          }
          if ( !sub_1800044F8(v67, (__int64)(AceByType + 8), v69, &InformationToken) )
            goto LABEL_159;
        }
        ++v105;
      }
      while ( v70 );
    }
    InformationToken = a2 & 0x100;
    if ( (a2 & 0x100) == 0 )
      goto LABEL_162;
    v46 = sub_18004B070((__int64)v91, v67);
    if ( v46 < 0 )
      goto LABEL_161;
    if ( (a5 & 2) != 0 )
    {
LABEL_162:
      v72 = v92;
    }
    else
    {
      v71 = v67;
      v72 = v92;
      v46 = sub_18004B070((__int64)v92, v71);
      if ( v46 < 0 )
      {
LABEL_161:
        v73 = v66;
        goto LABEL_259;
      }
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, v66);
    v74 = v91;
    if ( (a2 & 8) != 0 )
    {
      if ( (a5 & 2) != 0 )
      {
        v46 = sub_180090200(
                (_DWORD)v72,
                (*(_WORD *)(*v110 + 2) & 0x2800 | (*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18u) >> 1,
                (_DWORD)v91,
                (*(_WORD *)(a3 + 2) & 0x2800 | (*(unsigned __int16 *)(a3 + 2) >> 1) & 0x18u) >> 1,
                (__int64)v108,
                (__int64)v109,
                (__int64)a7,
                2,
                (__int64)&v121,
                (__int64)&v90);
        if ( v46 < 0 )
        {
          v47 = v121;
          v25 = v117;
          goto LABEL_64;
        }
        v98 = 1;
        v92 = v121;
        v13 = 2 * (v90 & 0x1400 | (2 * (v90 & 8 | 0x2004)));
      }
      else
      {
        v75 = *(_WORD *)(a3 + 2);
        v92 = v91;
        v13 = v75 & 0x2000 | 0x8010;
        if ( (v75 & 0xA00) == 0xA00 )
          v13 = v75 & 0x2000 | 0x8810;
      }
    }
    else
    {
      v92 = v72;
    }
    if ( (a2 & 0x20) != 0 )
    {
      v76 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) != 0 )
      {
        v46 = sub_180090200(
                (_DWORD)v72,
                (((*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18 | *(_WORD *)(*v110 + 2) & 0x800u) >> 1) & 0xFFFFEFFF,
                (_DWORD)v74,
                ((v76 & 0x800 | (v76 >> 1) & 0x18) >> 1) & 0xFFFFEFFF,
                (__int64)v108,
                (__int64)v109,
                (__int64)a7,
                2,
                (__int64)&v117,
                (__int64)&v90);
        if ( v46 < 0 )
        {
          v25 = v117;
LABEL_177:
          v47 = v92;
LABEL_64:
          if ( v47 && v98 )
            RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v47);
          if ( v25 && v99 )
            RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v25);
          if ( v122 && v100 )
            RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v122);
          if ( v123 && v101 )
            RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v123);
          if ( v124 && v102 )
            RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v124);
          if ( Src && v103 )
            RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Src);
          if ( !v104 )
            return (unsigned int)v46;
          v73 = (unsigned __int64)v129;
LABEL_259:
          RtlFreeHeap((__int64)ProcessHeap, 0, v73);
          return (unsigned int)v46;
        }
        v99 = 1;
        v91 = v117;
        v13 |= 2 * (v90 & 0x1400 | (2 * (v90 & 8 | 4)));
      }
      else
      {
        v91 = v74;
        v13 |= v76 & 0x2000 | 0x10;
        if ( (v76 & 0xA00) == 0xA00 )
          v13 |= 0x800u;
      }
    }
    else
    {
      v91 = v72;
    }
    if ( (a2 & 0x40) != 0 )
    {
      v77 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) != 0 )
      {
        v46 = sub_180090200(
                (_DWORD)v72,
                (((*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18 | *(_WORD *)(*v110 + 2) & 0x800u) >> 1) & 0xFFFFEFFF,
                (_DWORD)v74,
                ((v77 & 0x800 | (v77 >> 1) & 0x18) >> 1) & 0xFFFFEFFF,
                (__int64)v108,
                (__int64)v109,
                (__int64)a7,
                2,
                (__int64)&v122,
                (__int64)&v90);
        if ( v46 < 0 )
          goto LABEL_176;
        v100 = 1;
        v13 |= 2 * (v90 & 0x1400 | (2 * (v90 & 8 | 4)));
      }
      else
      {
        v122 = v74;
        v13 |= v77 & 0x2000 | 0x10;
        if ( (v77 & 0xA00) == 0xA00 )
          v13 |= 0x800u;
      }
    }
    else
    {
      v122 = v72;
    }
    if ( !(_DWORD)v116 )
    {
      v123 = v72;
      goto LABEL_195;
    }
    v78 = *(unsigned __int16 *)(a3 + 2);
    if ( (a5 & 2) == 0 )
    {
      v123 = v74;
      v13 |= v78 & 0x2000 | 0x10;
      if ( (v78 & 0xA00) == 0xA00 )
        v13 |= 0x800u;
      goto LABEL_195;
    }
    v46 = sub_180090200(
            (_DWORD)v72,
            (((*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18 | *(_WORD *)(*v110 + 2) & 0x800u) >> 1) & 0xFFFFEFFF,
            (_DWORD)v74,
            ((v78 & 0x800 | (v78 >> 1) & 0x18) >> 1) & 0xFFFFEFFF,
            (__int64)v108,
            (__int64)v109,
            (__int64)a7,
            2,
            (__int64)&v123,
            (__int64)&v90);
    if ( v46 >= 0 )
    {
      v101 = 1;
      v13 |= 2 * (v90 & 0x1400 | (2 * (v90 & 8 | 4)));
LABEL_195:
      if ( !InformationToken )
      {
        v124 = v72;
        goto LABEL_202;
      }
      v79 = *(unsigned __int16 *)(a3 + 2);
      if ( (a5 & 2) == 0 )
      {
        v124 = v74;
        v13 |= v79 & 0x2000 | 0x10;
        if ( (v79 & 0xA00) == 0xA00 )
          v13 |= 0x800u;
        goto LABEL_202;
      }
      v46 = sub_180090200(
              (_DWORD)v72,
              (((*(unsigned __int16 *)(*v110 + 2) >> 1) & 0x18 | *(_WORD *)(*v110 + 2) & 0x800u) >> 1) & 0xFFFFEFFF,
              (_DWORD)v74,
              ((v79 & 0x800 | (v79 >> 1) & 0x18) >> 1) & 0xFFFFEFFF,
              (__int64)v108,
              (__int64)v109,
              (__int64)a7,
              2,
              (__int64)&v124,
              (__int64)&v90);
      if ( v46 >= 0 )
      {
        v102 = 1;
        v13 |= 2 * (v90 & 0x1400 | (2 * (v90 & 8 | 4)));
LABEL_202:
        if ( (_DWORD)Size )
        {
          v80 = *(_WORD *)(a3 + 2);
          v13 |= v80 & 0x2000 | 0x10;
          if ( (v80 & 0xA00) == 0xA00 )
            v13 |= 0x800u;
        }
        else
        {
          v74 = v72;
        }
        v25 = v91;
        v81 = v74;
        v47 = v92;
        v46 = sub_18004B0E8(v92, v81, v91, v122, v123, v124, (unsigned __int64 *)&v127, 0LL);
        if ( v46 < 0 )
          goto LABEL_64;
        v24 = v127;
        Src = v127;
        if ( !v92 && v127 && !v127[2] )
        {
          RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v127);
          v24 = 0LL;
          Src = 0LL;
        }
        v103 = 1;
LABEL_24:
        if ( (a2 & 4) == 0 )
        {
          v85 = *v110;
          if ( (~*(_BYTE *)(*v110 + 2) & 4) != 0 )
          {
            v27 = 0LL;
          }
          else if ( *(__int16 *)(v85 + 2) >= 0 )
          {
            v27 = *(unsigned __int16 **)(v85 + 32);
          }
          else if ( *(_DWORD *)(v85 + 16) )
          {
            v27 = (unsigned __int16 *)(v85 + *(unsigned int *)(v85 + 16));
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
          if ( v94 )
          {
            v119 = 76;
            Heap = (_QWORD *)RtlAllocateHeap((__int64)ProcessHeap, dword_18015B268 + 1310720, 76LL);
            if ( !Heap )
            {
              v46 = -1073741801;
              goto LABEL_61;
            }
            v46 = ZwOpenProcessToken(-1LL, 8LL, &v114);
            v83 = (unsigned __int64)Heap;
            if ( v46 >= 0 )
            {
              v46 = ZwQueryInformationToken(v114, 4LL, Heap);
              ZwClose(v114);
              if ( v46 >= 0 )
              {
                LOBYTE(v84) = v107;
                v46 = sub_1800E6AF4((_DWORD)v27, v84, *Heap, (unsigned int)&v129, (__int64)&v104);
                RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Heap);
                if ( v46 < 0 )
                  goto LABEL_61;
                v27 = v129;
                v24 = Src;
                goto LABEL_32;
              }
              v83 = (unsigned __int64)Heap;
            }
            RtlFreeHeap((__int64)ProcessHeap, 0, v83);
            goto LABEL_61;
          }
LABEL_32:
          v28 = 4 * *((unsigned __int8 *)v108 + 1) + 11;
          LODWORD(Size) = 4 * *((unsigned __int8 *)v108 + 1) + 8;
          v29 = v28 & 0xFFFFFFFC;
          LODWORD(v116) = v29;
          v30 = 4 * *((unsigned __int8 *)v109 + 1) + 11;
          InformationToken = 4 * *((unsigned __int8 *)v109 + 1) + 8;
          v31 = v30 & 0xFFFFFFFC;
          v90 = v31;
          if ( v24 )
            v32 = ((unsigned __int16)v24[1] + 3) & 0xFFFFFFFC;
          else
            v32 = 0;
          if ( v27 )
            v33 = (v27[1] + 3) & 0xFFFFFFFC;
          else
            v33 = 0;
          v34 = RtlAllocateHeap((__int64)v125, dword_18015B268 + 1310720, v31 + v33 + v32 + v29 + 20);
          if ( v34 )
          {
            *(_QWORD *)v34 = 0LL;
            *(_QWORD *)(v34 + 8) = 0LL;
            *(_DWORD *)(v34 + 16) = 0;
            *(_BYTE *)v34 = 1;
            v35 = (char *)(v34 + 20);
            if ( v118 )
              v13 |= 0x800u;
            *(_WORD *)(v34 + 2) |= v13;
            v36 = *(_WORD *)(v34 + 2);
            if ( (*(_WORD *)(a3 + 2) & 0x4000) != 0 )
            {
              *(_BYTE *)(v34 + 1) = *(_BYTE *)(a3 + 1);
              *(_WORD *)(v34 + 2) = v36 | 0x4000;
            }
            v37 = (unsigned __int16 *)Src;
            if ( Src )
            {
              memmove((void *)(v34 + 20), Src, *((unsigned __int16 *)Src + 1));
              sub_18004C608(v34 + 20, a7);
              *(_DWORD *)(v34 + 12) = 20;
              v38 = v37[1];
              if ( v32 > (unsigned int)v38 )
                memset(&v35[v38], 0, v32 - (unsigned int)v38);
              v35 += v32;
            }
            else
            {
              *(_DWORD *)(v34 + 12) = 0;
            }
            v39 = v110;
            if ( (v13 & 0x10) == 0 )
              *(_WORD *)(v34 + 2) |= *(_WORD *)(*v110 + 2) & 0x2830;
            if ( v27 )
            {
              memmove(v35, v27, v27[1]);
              sub_18004C608((__int64)v35, a7);
              *(_DWORD *)(v34 + 16) = (_DWORD)v35 - v34;
              v40 = v27[1];
              if ( v33 > (unsigned int)v40 )
                memset(&v35[v40], 0, v33 - (unsigned int)v40);
              v35 += v33;
            }
            else
            {
              *(_DWORD *)(v34 + 16) = 0;
            }
            if ( (v13 & 4) != 0 || (*(_WORD *)(v34 + 2) |= *(_WORD *)(*v39 + 2) & 0x140C, !(_BYTE)v120) )
            {
LABEL_52:
              v41 = (unsigned int)Size;
              memmove(v35, v108, (unsigned int)Size);
              v42 = (unsigned int)v116;
              if ( (unsigned int)v41 < (unsigned int)v116 )
                memset(&v35[v41], 0, (unsigned int)(v116 - v41));
              v43 = (_DWORD)v35 - v34;
              v44 = &v35[v42];
              *(_DWORD *)(v34 + 4) = v43;
              if ( !v95 )
                *(_WORD *)(v34 + 2) |= *(_WORD *)(*v39 + 2) & 1;
              v45 = (unsigned int)InformationToken;
              memmove(v44, v109, (unsigned int)InformationToken);
              if ( (unsigned int)v45 < v90 )
                memset(&v44[v45], 0, v90 - (unsigned int)v45);
              *(_DWORD *)(v34 + 8) = (_DWORD)v44 - v34;
              if ( !v96 )
                *(_WORD *)(v34 + 2) |= *(_WORD *)(*v39 + 2) & 2;
              ProcessHeap = v125;
              RtlFreeHeap((__int64)v125, 0, *v39);
              *v39 = v34;
              v46 = 0;
              goto LABEL_61;
            }
            v111 = 0;
            v112 = 768;
            v46 = RtlInitializeSid((__int64)v134, (__int64)&v111, 1u);
            if ( v46 >= 0 )
            {
              v135 = 4;
              v105 = 0;
              while ( 1 )
              {
                if ( (~*(_BYTE *)(v34 + 2) & 4) != 0 )
                  goto LABEL_243;
                if ( *(__int16 *)(v34 + 2) < 0 )
                  break;
                v86 = *(_QWORD *)(v34 + 32);
LABEL_245:
                v87 = sub_1800E7FA8(v86, v134, &v105);
                if ( !v87 )
                  goto LABEL_52;
                v88 = *(_BYTE *)(v87 + 1) & 0xF4 | 8;
                ++v105;
                *(_BYTE *)(v87 + 1) = v88;
              }
              if ( *(_DWORD *)(v34 + 16) )
              {
                v86 = v34 + *(unsigned int *)(v34 + 16);
                goto LABEL_245;
              }
LABEL_243:
              v86 = 0LL;
              goto LABEL_245;
            }
          }
          else
          {
            v46 = -1073741801;
          }
          ProcessHeap = v125;
LABEL_61:
          v25 = v91;
          v47 = v92;
          goto LABEL_62;
        }
        v49 = *(_WORD *)(a3 + 2);
        if ( (~(_BYTE)v49 & 4) == 0 )
        {
          if ( v49 >= 0 )
          {
            v50 = *(_QWORD *)(a3 + 32);
LABEL_81:
            v51 = *v110;
            v52 = *(_WORD *)(*v110 + 2);
            if ( (~(_BYTE)v52 & 4) == 0 )
            {
              if ( v52 >= 0 )
              {
                v53 = *(_QWORD *)(v51 + 32);
LABEL_85:
                v46 = sub_180090200(
                        v53,
                        v52 & 0x140C,
                        v50,
                        v49 & 0x140C,
                        (__int64)v108,
                        (__int64)v109,
                        (__int64)a7,
                        1,
                        (__int64)&v128,
                        (__int64)&v90);
                if ( v46 >= 0 )
                {
                  v27 = v128;
                  v97 = 1;
                  v13 |= v90 & 0x1408 | 4;
                  goto LABEL_31;
                }
                goto LABEL_177;
              }
              if ( *(_DWORD *)(v51 + 16) )
              {
                LODWORD(v53) = v51 + *(_DWORD *)(v51 + 16);
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
    v25 = v91;
    goto LABEL_177;
  }
  v105 = 0;
  v60 = 0LL;
  while ( 1 )
  {
    v61 = RtlFindAceByType((__int64)v14, 17, &v105);
    v62 = v61;
    if ( v61 )
    {
      v63 = (*((_DWORD *)v61 + 1) & 0xFFFFFFF8) == 0;
      v60 = v61 + 8;
      v93 = v61[1];
      if ( !v63 )
        break;
    }
    if ( v9 )
    {
      v89 = &v126;
      InformationToken = ZwQueryInformationToken(v9, 10LL, v131);
      v46 = InformationToken;
      if ( InformationToken < 0 )
        return (unsigned int)v46;
      if ( v132 == 2 && v133 < 1 )
        return (unsigned int)-1073741659;
    }
    else
    {
      InformationToken = ZwOpenProcessToken(-1LL, 8LL, &v114);
      v46 = InformationToken;
      if ( InformationToken < 0 )
        return (unsigned int)v46;
    }
    v9 = v116;
    v65 = v114;
    LOBYTE(v64) = v93;
    if ( v116 )
      v65 = v116;
    if ( !(unsigned __int8)sub_1800E6ED4(v65, v60, v64, &InformationToken, v89) )
    {
      ZwClose(v114);
      break;
    }
    ZwClose(v114);
    ++v105;
    if ( !v62 )
      goto LABEL_146;
    v14 = v91;
  }
  return (unsigned int)-1073740730;
}
