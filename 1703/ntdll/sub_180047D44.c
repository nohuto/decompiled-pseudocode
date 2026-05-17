/*
 * XREFs of sub_180047D44 @ 0x180047D44
 * Callers:
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     RtlNewSecurityObjectEx @ 0x18007FCF0 (RtlNewSecurityObjectEx.c)
 *     RtlNewSecurityObject @ 0x180086680 (RtlNewSecurityObject.c)
 *     RtlCreateUserSecurityObject @ 0x1800D8FB0 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x1800D9050 (RtlNewInstanceSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x1800D92C0 (RtlNewSecurityObjectWithMultipleInheritance.c)
 * Callees:
 *     sub_1800044F8 @ 0x1800044F8 (sub_1800044F8.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180047C5C @ 0x180047C5C (sub_180047C5C.c)
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     sub_18004912C @ 0x18004912C (sub_18004912C.c)
 *     RtlCreateAcl @ 0x1800496D0 (RtlCreateAcl.c)
 *     RtlFindAceByType @ 0x18004A2D0 (RtlFindAceByType.c)
 *     RtlCreateSecurityDescriptor @ 0x18004A330 (RtlCreateSecurityDescriptor.c)
 *     sub_18004B070 @ 0x18004B070 (sub_18004B070.c)
 *     sub_18004B0E8 @ 0x18004B0E8 (sub_18004B0E8.c)
 *     sub_18004B6C4 @ 0x18004B6C4 (sub_18004B6C4.c)
 *     RtlAddMandatoryAce @ 0x18004C070 (RtlAddMandatoryAce.c)
 *     sub_18004C608 @ 0x18004C608 (sub_18004C608.c)
 *     sub_180081410 @ 0x180081410 (sub_180081410.c)
 *     RtlSidDominates @ 0x180081CB0 (RtlSidDominates.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800889C0 (RtlAddProcessTrustLabelAce.c)
 *     sub_180090200 @ 0x180090200 (sub_180090200.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwAccessCheck @ 0x1800A5300 (ZwAccessCheck.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1800A5720 (ZwQueryInformationToken.c)
 *     ZwDuplicateToken @ 0x1800A5B40 (ZwDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x1800A7870 (ZwPrivilegeCheck.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800E6AF4 @ 0x1800E6AF4 (sub_1800E6AF4.c)
 */

__int64 __fastcall sub_180047D44(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _BYTE *v10; // rdi
  void *v11; // rbx
  void *v12; // rsi
  int v13; // edx
  __int64 result; // rax
  int v15; // eax
  unsigned __int8 v16; // r10
  char v17; // r10
  __int64 v18; // r8
  unsigned int v19; // edx
  _BYTE *v20; // rcx
  void *v21; // rcx
  __int64 v22; // rax
  _BYTE *v23; // rcx
  void *v24; // rcx
  int v25; // eax
  int v26; // esi
  int v27; // r9d
  int v28; // r10d
  int v29; // r8d
  int v30; // r11d
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // r8d
  int v34; // r9d
  int v35; // eax
  int v36; // ebx
  __int16 v37; // cx
  int v38; // ebx
  _BYTE *v39; // rsi
  unsigned __int16 v40; // dx
  int v41; // r9d
  int v42; // r11d
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // r8d
  int v46; // eax
  __int16 v47; // cx
  _BYTE *v48; // rcx
  __int64 AceByType; // rbx
  __int64 v50; // r8
  __int64 v51; // rdx
  _BYTE *v52; // rcx
  int v53; // r9d
  int v54; // edx
  int v55; // esi
  _BYTE *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int8 v59; // cl
  _BYTE *v60; // rsi
  unsigned int v61; // r8d
  __int64 v62; // rcx
  int v63; // eax
  _BYTE *v64; // rdi
  __int16 v65; // si
  __int64 v66; // rdi
  void *v67; // rbx
  _BYTE *v68; // rdi
  __int16 v69; // r8
  __int64 v70; // rdx
  int v71; // r9d
  __int64 v72; // rcx
  int v73; // eax
  __int64 v74; // r8
  int v75; // edx
  __int64 v76; // rdi
  __int64 v77; // rdx
  bool v78; // al
  int v79; // edi
  __int64 v80; // rsi
  char v81; // bl
  unsigned __int8 *v82; // rsi
  int v83; // r9d
  unsigned int v84; // r9d
  unsigned int v85; // r8d
  __int16 v86; // bx
  unsigned int v87; // esi
  unsigned int v88; // ecx
  __int64 v89; // rdi
  __int64 Heap; // rax
  _DWORD *v91; // rdx
  char *v92; // rbx
  unsigned __int16 *v93; // rdi
  __int64 v94; // rcx
  __int64 v95; // rdi
  __int64 v96; // rsi
  __int64 v97; // rdi
  int v98; // eax
  char *v99; // rbx
  __int64 v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rax
  int v103; // eax
  unsigned __int16 *v104; // rdi
  __int64 v105; // rcx
  unsigned __int64 v106; // r8
  int v107; // edx
  __int16 v108; // cx
  void *v109; // rcx
  _BYTE *v110; // rax
  __int64 v111; // rax
  _BYTE *v112; // rcx
  __int64 v113; // rax
  int v114; // esi
  __int64 v115; // rdx
  void *v116; // rdi
  int Acl; // [rsp+90h] [rbp-80h] BYREF
  char v118; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned __int8 v119; // [rsp+95h] [rbp-7Bh]
  char v120; // [rsp+96h] [rbp-7Ah]
  char v121; // [rsp+97h] [rbp-79h]
  char v122; // [rsp+98h] [rbp-78h]
  char v123; // [rsp+99h] [rbp-77h] BYREF
  char v124; // [rsp+9Ah] [rbp-76h]
  char v125; // [rsp+9Bh] [rbp-75h] BYREF
  int v126; // [rsp+9Ch] [rbp-74h]
  void *ProcessHeap; // [rsp+A0h] [rbp-70h]
  void *v128; // [rsp+A8h] [rbp-68h]
  char v129; // [rsp+B0h] [rbp-60h] BYREF
  char v130; // [rsp+B1h] [rbp-5Fh] BYREF
  char v131; // [rsp+B2h] [rbp-5Eh]
  char v132; // [rsp+B3h] [rbp-5Dh]
  char v133; // [rsp+B4h] [rbp-5Ch]
  char v134; // [rsp+B5h] [rbp-5Bh]
  int v135; // [rsp+B8h] [rbp-58h] BYREF
  _DWORD v136[3]; // [rsp+BCh] [rbp-54h] BYREF
  char v137[4]; // [rsp+C8h] [rbp-48h] BYREF
  int v138; // [rsp+CCh] [rbp-44h] BYREF
  char v139; // [rsp+D0h] [rbp-40h] BYREF
  char v140; // [rsp+D1h] [rbp-3Fh]
  int v141; // [rsp+D4h] [rbp-3Ch] BYREF
  unsigned int v142; // [rsp+D8h] [rbp-38h]
  void *v143; // [rsp+E0h] [rbp-30h]
  void *Src; // [rsp+E8h] [rbp-28h] BYREF
  unsigned int v145; // [rsp+F0h] [rbp-20h]
  void *v146; // [rsp+F8h] [rbp-18h]
  __int64 v147; // [rsp+100h] [rbp-10h]
  int v148; // [rsp+108h] [rbp-8h]
  __int64 v149; // [rsp+110h] [rbp+0h]
  __int64 v150; // [rsp+118h] [rbp+8h]
  __int64 v151; // [rsp+120h] [rbp+10h] BYREF
  void *v152; // [rsp+128h] [rbp+18h]
  __int64 v153; // [rsp+130h] [rbp+20h]
  unsigned int v154; // [rsp+138h] [rbp+28h] BYREF
  int v155; // [rsp+13Ch] [rbp+2Ch] BYREF
  size_t Size; // [rsp+140h] [rbp+30h] BYREF
  __int64 v157; // [rsp+148h] [rbp+38h]
  __int64 v158; // [rsp+150h] [rbp+40h]
  _DWORD *v159; // [rsp+158h] [rbp+48h]
  int v160; // [rsp+160h] [rbp+50h] BYREF
  __int64 v161; // [rsp+168h] [rbp+58h]
  unsigned __int64 v162; // [rsp+170h] [rbp+60h] BYREF
  void *v163; // [rsp+178h] [rbp+68h] BYREF
  __int64 v164; // [rsp+180h] [rbp+70h]
  __int64 v165; // [rsp+188h] [rbp+78h]
  __int64 v166; // [rsp+190h] [rbp+80h]
  __int64 v167; // [rsp+198h] [rbp+88h]
  __int64 v168; // [rsp+1A0h] [rbp+90h] BYREF
  __int64 v169; // [rsp+1A8h] [rbp+98h]
  void **v170; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 *v171; // [rsp+1B8h] [rbp+A8h] BYREF
  __int64 *v172; // [rsp+1C0h] [rbp+B0h] BYREF
  void **v173; // [rsp+1C8h] [rbp+B8h] BYREF
  __int64 *v174; // [rsp+1D0h] [rbp+C0h] BYREF
  __int64 *v175; // [rsp+1D8h] [rbp+C8h] BYREF
  __int64 *v176; // [rsp+1E0h] [rbp+D0h] BYREF
  _BYTE *v177; // [rsp+1E8h] [rbp+D8h] BYREF
  _BYTE *v178; // [rsp+1F0h] [rbp+E0h]
  void *v179; // [rsp+1F8h] [rbp+E8h] BYREF
  _BYTE *v180; // [rsp+200h] [rbp+F0h]
  _QWORD *v181; // [rsp+208h] [rbp+F8h]
  int v182; // [rsp+210h] [rbp+100h] BYREF
  __int64 v183; // [rsp+218h] [rbp+108h]
  __int64 v184; // [rsp+220h] [rbp+110h]
  int v185; // [rsp+228h] [rbp+118h]
  __int64 v186; // [rsp+230h] [rbp+120h]
  _DWORD *v187; // [rsp+238h] [rbp+128h]
  _BYTE v188[40]; // [rsp+240h] [rbp+130h] BYREF
  int v189; // [rsp+268h] [rbp+158h] BYREF
  int v190; // [rsp+26Ch] [rbp+15Ch]
  __int64 v191; // [rsp+270h] [rbp+160h]
  int v192; // [rsp+278h] [rbp+168h]
  _DWORD v193[2]; // [rsp+280h] [rbp+170h] BYREF
  __int16 v194; // [rsp+288h] [rbp+178h]
  char v195[24]; // [rsp+290h] [rbp+180h] BYREF
  unsigned int v196; // [rsp+2A8h] [rbp+198h]
  int v197; // [rsp+2ACh] [rbp+19Ch]
  _BYTE v198[96]; // [rsp+2D0h] [rbp+1C0h] BYREF
  _BYTE v199[128]; // [rsp+330h] [rbp+220h] BYREF

  v150 = a9;
  v10 = a2;
  v11 = 0LL;
  v169 = a10;
  v12 = 0LL;
  v162 = 0LL;
  v178 = v199;
  v147 = a1;
  v180 = a2;
  v13 = 1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v164 = a4;
  v181 = a3;
  v149 = a8;
  v151 = 0LL;
  v121 = 0;
  v132 = 0;
  v131 = 0;
  memset(v136, 0, sizeof(v136));
  Src = 0LL;
  v163 = 0LL;
  v122 = 0;
  v124 = 0;
  v118 = 0;
  v137[0] = 0;
  v139 = 0;
  v125 = 0;
  LOBYTE(v142) = 0;
  v130 = 0;
  v167 = 0LL;
  v165 = 0LL;
  v152 = 0LL;
  v158 = 0LL;
  v153 = 0LL;
  v159 = 0LL;
  v160 = 0;
  v166 = 0LL;
  v157 = 0LL;
  v177 = 0LL;
  v179 = 0LL;
  v119 = 0;
  v129 = 1;
  v168 = 0LL;
  v133 = 0;
  LOBYTE(v145) = 1;
  v170 = 0LL;
  v173 = 0LL;
  v174 = 0LL;
  v171 = 0LL;
  v172 = 0LL;
  v175 = 0LL;
  v176 = 0LL;
  if ( a8 )
  {
    result = ZwQueryInformationToken(a8, 10LL, v195);
    if ( (int)result < 0 )
      return result;
    v145 = v196;
    v13 = 1;
    if ( v196 == 2 && v197 < 1 )
      return 3221225637LL;
  }
  if ( v10 )
  {
    v134 = 1;
  }
  else
  {
    v134 = 0;
    RtlCreateSecurityDescriptor(v188, 1LL);
    v10 = v188;
    v180 = v188;
    v13 = 1;
  }
  v15 = *((unsigned __int16 *)v10 + 1);
  v16 = v15;
  LOBYTE(v15) = (v15 & 0x40) != 0;
  v17 = v16 >> 7;
  v148 = v15;
  v120 = v17;
  if ( v149 || v17 )
  {
    LOBYTE(v13) = v17;
    result = sub_18004B6C4(
               v149,
               v13,
               (unsigned int)&v170,
               (unsigned int)&v173,
               (__int64)&v174,
               (__int64)&v175,
               (__int64)&v171,
               (__int64)&v172,
               (__int64)&v176);
    if ( (int)result < 0 )
      return result;
    v11 = *v170;
    v12 = *v173;
    v153 = *v174;
    v167 = *v171;
    v165 = *v172;
    if ( v175 )
      v152 = (void *)*v175;
    else
      v152 = 0LL;
    v17 = v120;
    if ( v176 )
    {
      v18 = *v176;
      v158 = *v176;
    }
    else
    {
      v18 = 0LL;
      v158 = 0LL;
    }
  }
  else
  {
    v18 = 0LL;
  }
  v19 = *((unsigned __int16 *)v10 + 1);
  if ( (v19 & 0x8000u) != 0 )
  {
    if ( !*((_DWORD *)v10 + 1) )
      goto LABEL_15;
    v20 = &v10[*((unsigned int *)v10 + 1)];
  }
  else
  {
    v20 = (_BYTE *)*((_QWORD *)v10 + 1);
  }
  v143 = v20;
  if ( v20 )
  {
    v124 = 1;
LABEL_19:
    v22 = v147;
    goto LABEL_20;
  }
LABEL_15:
  if ( (a7 & 0x20) == 0 )
  {
    v21 = v11;
    if ( v17 )
      v21 = v152;
    v143 = v21;
    if ( !v21 )
    {
      v36 = -1073741700;
      goto LABEL_288;
    }
    goto LABEL_19;
  }
  v22 = v147;
  if ( !v147 )
    goto LABEL_286;
  if ( *(__int16 *)(v147 + 2) < 0 )
  {
    if ( *(_DWORD *)(v147 + 4) )
    {
      v109 = (void *)(v147 + *(unsigned int *)(v147 + 4));
      goto LABEL_277;
    }
LABEL_286:
    v36 = -1073741734;
LABEL_288:
    Acl = v36;
    goto LABEL_289;
  }
  v109 = *(void **)(v147 + 8);
LABEL_277:
  v143 = v109;
  v124 = 1;
  if ( !v109 )
    goto LABEL_286;
LABEL_20:
  if ( (v19 & 0x8000u) != 0 )
  {
    if ( !*((_DWORD *)v10 + 2) )
    {
LABEL_23:
      if ( (a7 & 0x40) == 0 )
      {
        v24 = v12;
        if ( v17 )
          v24 = (void *)v18;
LABEL_26:
        v146 = v24;
        if ( v24 )
          goto LABEL_27;
        goto LABEL_287;
      }
      if ( v22 )
      {
        if ( *(__int16 *)(v22 + 2) >= 0 )
        {
          v24 = *(void **)(v22 + 16);
          goto LABEL_26;
        }
        if ( *(_DWORD *)(v22 + 8) )
        {
          v24 = (void *)(v22 + *(unsigned int *)(v22 + 8));
          goto LABEL_26;
        }
      }
LABEL_287:
      v36 = -1073741733;
      goto LABEL_288;
    }
    v23 = &v10[*((unsigned int *)v10 + 2)];
  }
  else
  {
    v23 = (_BYTE *)*((_QWORD *)v10 + 2);
  }
  v146 = v23;
  if ( !v23 )
    goto LABEL_23;
LABEL_27:
  v25 = a7 >> 2;
  LOBYTE(v25) = (a7 & 4) != 0;
  v26 = a7 & 2;
  v141 = v25;
  v140 = v26 != 0;
  v27 = (v19 >> 2) & 8;
  v28 = (v19 >> 1) & 0x400;
  v29 = (v19 >> 1) & 0x1000;
  v30 = (v19 & 0x10) != 0 ? 4 : 0;
  if ( (v19 & 0x10) == 0 )
    goto LABEL_28;
  if ( (v19 & 0x8000u) == 0 )
  {
    v31 = *((_QWORD *)v10 + 3);
    goto LABEL_29;
  }
  if ( *((_DWORD *)v10 + 3) )
    LODWORD(v31) = (_DWORD)v10 + *((_DWORD *)v10 + 3);
  else
LABEL_28:
    LODWORD(v31) = 0;
LABEL_29:
  if ( !v147 || (~*(_BYTE *)(v147 + 2) & 0x10) != 0 )
  {
LABEL_211:
    LODWORD(v32) = 0;
    goto LABEL_34;
  }
  if ( *(__int16 *)(v147 + 2) < 0 )
  {
    if ( *(_DWORD *)(v147 + 12) )
    {
      LODWORD(v32) = v147 + *(_DWORD *)(v147 + 12);
      goto LABEL_34;
    }
    goto LABEL_211;
  }
  v32 = *(_QWORD *)(v147 + 24);
LABEL_34:
  v33 = v27 | v28 | v29;
  v34 = v150;
  LOBYTE(v34) = a6;
  v35 = sub_18004912C(
          v32,
          v31,
          v30 | (unsigned int)v33,
          v34,
          v26 != 0,
          v141,
          (__int64)v143,
          (__int64)v146,
          (__int64)v152,
          v158,
          v150,
          2,
          v164,
          a5,
          (__int64)&v136[1],
          (__int64)&v118,
          (__int64)&v138);
  Acl = v35;
  v36 = v35;
  if ( v35 < 0 )
  {
    if ( v35 == -2147483637 )
    {
      v37 = *((_WORD *)v10 + 1);
      v38 = 0x8000;
      if ( (a7 & 2) != 0 )
        v38 = 34816;
      v126 = v38;
      if ( (v37 & 0x30) != 0x30 )
        goto LABEL_39;
      if ( (~(_BYTE)v37 & 0x10) == 0 )
      {
        if ( v37 >= 0 )
        {
          v39 = (_BYTE *)*((_QWORD *)v10 + 3);
          goto LABEL_300;
        }
        if ( *((_DWORD *)v10 + 3) )
        {
          v39 = &v10[*((unsigned int *)v10 + 3)];
LABEL_300:
          *(_QWORD *)&v136[1] = v39;
          v128 = v39;
          goto LABEL_301;
        }
      }
      v39 = 0LL;
      v128 = 0LL;
      *(_QWORD *)&v136[1] = 0LL;
LABEL_301:
      v118 = 1;
      v126 = v37 & 0x2000 | 0x10 | v38;
      goto LABEL_40;
    }
LABEL_289:
    v39 = *(_BYTE **)&v136[1];
    goto LABEL_152;
  }
  v121 = 1;
  v126 = 2 * (v138 & 0x1400 | (2 * (v138 & 8 | 0x2004)));
LABEL_39:
  v39 = *(_BYTE **)&v136[1];
  v128 = *(void **)&v136[1];
LABEL_40:
  v40 = *((_WORD *)v10 + 1);
  v41 = (v40 >> 2) & 8;
  v42 = (v40 & 0x10) != 0 ? 4 : 0;
  if ( (v40 & 0x10) == 0 )
    goto LABEL_41;
  if ( (v40 & 0x8000u) == 0 )
  {
    v43 = *((_QWORD *)v10 + 3);
    goto LABEL_42;
  }
  if ( *((_DWORD *)v10 + 3) )
    LODWORD(v43) = (_DWORD)v10 + *((_DWORD *)v10 + 3);
  else
LABEL_41:
    LODWORD(v43) = 0;
LABEL_42:
  if ( !v147 || (~*(_BYTE *)(v147 + 2) & 0x10) != 0 )
  {
LABEL_212:
    LODWORD(v44) = 0;
    goto LABEL_47;
  }
  if ( *(__int16 *)(v147 + 2) < 0 )
  {
    if ( *(_DWORD *)(v147 + 12) )
    {
      LODWORD(v44) = v147 + *(_DWORD *)(v147 + 12);
      goto LABEL_47;
    }
    goto LABEL_212;
  }
  v44 = *(_QWORD *)(v147 + 24);
LABEL_47:
  v45 = v41 | (*((unsigned __int16 *)v10 + 1) >> 1) & 0x1400;
  LOBYTE(v41) = a6;
  v46 = sub_18004912C(
          v44,
          v43,
          (v42 | v45) & 0xFFFFEFFF,
          v41,
          v140,
          v141,
          (__int64)v143,
          (__int64)v146,
          (__int64)v152,
          v158,
          v150,
          2,
          v164,
          a5,
          (__int64)&v151,
          (__int64)v137,
          (__int64)&v160);
  Acl = v46;
  v36 = v46;
  if ( v46 >= 0 )
  {
    v132 = 1;
  }
  else
  {
    if ( v46 != -2147483637 )
      goto LABEL_152;
    v47 = *((_WORD *)v10 + 1);
    if ( (v47 & 0x30) != 0x30 )
      goto LABEL_50;
    if ( (~(_BYTE)v47 & 0x10) == 0 )
    {
      if ( v47 >= 0 )
      {
        v111 = *((_QWORD *)v10 + 3);
        goto LABEL_309;
      }
      if ( *((_DWORD *)v10 + 3) )
      {
        v111 = (__int64)&v10[*((unsigned int *)v10 + 3)];
LABEL_309:
        v151 = v111;
        goto LABEL_50;
      }
    }
    v151 = 0LL;
  }
LABEL_50:
  v135 = 0;
  do
  {
    if ( (~v10[2] & 0x10) != 0 )
    {
LABEL_52:
      v48 = 0LL;
      goto LABEL_53;
    }
    if ( *((__int16 *)v10 + 1) >= 0 )
    {
      v48 = (_BYTE *)*((_QWORD *)v10 + 3);
    }
    else
    {
      if ( !*((_DWORD *)v10 + 3) )
        goto LABEL_52;
      v48 = &v10[*((unsigned int *)v10 + 3)];
    }
LABEL_53:
    AceByType = RtlFindAceByType(v48, 20LL, &v135);
    v51 = AceByType + 8;
    if ( !AceByType )
      v51 = 0LL;
    if ( v51 && !sub_1800044F8(v165, v51, v50, &Acl) )
    {
      v36 = -1073741790;
LABEL_311:
      Acl = v36;
      goto LABEL_152;
    }
    ++v135;
  }
  while ( AceByType );
  if ( (a7 & 0x800) == 0 )
  {
LABEL_58:
    v168 = v151;
    goto LABEL_59;
  }
  v135 = 0;
  while ( 2 )
  {
    if ( (~v10[2] & 0x10) != 0 )
      goto LABEL_317;
    if ( *((__int16 *)v10 + 1) >= 0 )
    {
      v112 = (_BYTE *)*((_QWORD *)v10 + 3);
    }
    else
    {
      if ( *((_DWORD *)v10 + 3) )
      {
        v112 = &v10[*((unsigned int *)v10 + 3)];
        goto LABEL_319;
      }
LABEL_317:
      v112 = 0LL;
    }
LABEL_319:
    v113 = RtlFindAceByType(v112, 20LL, &v135);
    ++v135;
    if ( v113 )
    {
      if ( (*(_BYTE *)(v113 + 1) & 8) == 0 )
      {
        v114 = *(_DWORD *)(v113 + 4);
        v135 = *(unsigned __int8 *)(v113 + 1);
        v161 = v113 + 8;
        if ( !v169 || (v114 & *(_DWORD *)(v169 + 4)) != v114 || v113 == -8 )
        {
          v36 = -1073741811;
          goto LABEL_150;
        }
        goto LABEL_329;
      }
      continue;
    }
    break;
  }
  if ( !v165 )
    goto LABEL_58;
  if ( !v169 )
  {
    v36 = -1073741811;
    goto LABEL_311;
  }
  v114 = *(_DWORD *)(v169 + 4);
  v161 = v165;
  v135 = 0;
LABEL_329:
  Acl = RtlCreateAcl(v198, 88LL, 2LL);
  v36 = Acl;
  if ( Acl < 0 )
    goto LABEL_151;
  Acl = RtlAddProcessTrustLabelAce((unsigned int)v198, 2, v135, v161, 20, v114);
  v36 = Acl;
  if ( Acl < 0 )
    goto LABEL_151;
  Acl = sub_180090200(
          v151,
          ((*((_WORD *)v10 + 1) & 0x800 | (*((unsigned __int16 *)v10 + 1) >> 1) & 0x18u) >> 1) & 0xFFFFEFFF,
          (unsigned int)v198,
          4,
          (__int64)v143,
          (__int64)v146,
          v150,
          2,
          (__int64)&v168,
          (__int64)&v138);
  v36 = Acl;
  if ( Acl < 0 )
    goto LABEL_151;
  v133 = 1;
LABEL_59:
  if ( (~v10[2] & 0x10) != 0 )
  {
LABEL_60:
    v52 = 0LL;
  }
  else if ( *((__int16 *)v10 + 1) >= 0 )
  {
    v52 = (_BYTE *)*((_QWORD *)v10 + 3);
  }
  else
  {
    if ( !*((_DWORD *)v10 + 3) )
      goto LABEL_60;
    v52 = &v10[*((unsigned int *)v10 + 3)];
  }
  Acl = sub_18004B070(v52, v165);
  v36 = Acl;
  if ( Acl < 0 )
    goto LABEL_151;
  v54 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v54 = (a7 >> 8) & 1;
  v55 = v54 | 4;
  if ( (a7 & 0x400) == 0 )
    v55 = v54;
  if ( v55 )
  {
    v57 = 0LL;
    goto LABEL_70;
  }
  if ( (~v10[2] & 0x10) != 0 )
    goto LABEL_68;
  if ( *((__int16 *)v10 + 1) >= 0 )
  {
    v56 = (_BYTE *)*((_QWORD *)v10 + 3);
  }
  else if ( *((_DWORD *)v10 + 3) )
  {
    v56 = &v10[*((unsigned int *)v10 + 3)];
  }
  else
  {
LABEL_68:
    v56 = 0LL;
  }
  v57 = RtlFindAceByType(v56, 17LL, 0LL);
  v166 = v57;
  if ( v57 )
  {
    v59 = *(_BYTE *)(v57 + 1);
    v58 = v57 + 8;
    v55 = *(_DWORD *)(v57 + 4);
    v157 = v57 + 8;
    v119 = v59;
    if ( v59 == 8 || (v59 & 0x10) != 0 )
    {
      v57 = 0LL;
      v58 = 0LL;
      v59 = 0;
      v166 = 0LL;
      v157 = 0LL;
      v55 = 0;
      v119 = 0;
    }
  }
  else
  {
LABEL_70:
    v58 = 0LL;
    v59 = 0;
  }
  if ( (v59 & 8) != 0 && *(_DWORD *)(v167 + 8) < 0x2000u )
  {
    v36 = -1073740730;
    goto LABEL_150;
  }
  if ( v55 )
  {
LABEL_208:
    if ( v57 )
      goto LABEL_75;
    if ( v149 )
    {
      v58 = v167;
      v157 = v167;
      v119 = 0;
      goto LABEL_75;
    }
    goto LABEL_336;
  }
  if ( v167 && *(_DWORD *)(v167 + 8) < 0x2000u )
  {
    v55 = 1;
    goto LABEL_208;
  }
LABEL_75:
  if ( !v58 )
  {
    v60 = 0LL;
    v178 = 0LL;
    goto LABEL_77;
  }
  Acl = RtlCreateAcl(v199, 128LL, 2LL);
  v36 = Acl;
  if ( Acl < 0 )
    goto LABEL_151;
  Acl = RtlAddMandatoryAce((unsigned int)v199, 2, v119, v157, 17, v55);
  v36 = Acl;
  if ( Acl < 0 )
    goto LABEL_151;
  v60 = v199;
LABEL_77:
  if ( (a7 & 0x700) != 0 )
  {
    v61 = 4;
  }
  else if ( !v166 && v60 )
  {
    v61 = 0;
  }
  else
  {
    v61 = (*((_WORD *)v10 + 1) & 0x2800 | (*((unsigned __int16 *)v10 + 1) >> 1) & 0x18u) >> 1;
  }
  if ( !v147 || (~*(_BYTE *)(v147 + 2) & 0x10) != 0 )
    goto LABEL_213;
  if ( *(__int16 *)(v147 + 2) >= 0 )
  {
    v62 = *(_QWORD *)(v147 + 24);
  }
  else
  {
    if ( *(_DWORD *)(v147 + 12) )
    {
      LODWORD(v62) = v147 + *(_DWORD *)(v147 + 12);
      goto LABEL_86;
    }
LABEL_213:
    LODWORD(v62) = 0;
  }
LABEL_86:
  LOBYTE(v53) = a6;
  v63 = sub_18004912C(
          v62,
          (_DWORD)v60,
          v61,
          v53,
          1,
          0,
          (__int64)v143,
          (__int64)v146,
          (__int64)v152,
          v158,
          v150,
          3,
          v164,
          a5,
          (__int64)&v177,
          (__int64)&v139,
          (__int64)&v138);
  Acl = v63;
  v36 = v63;
  if ( v63 != -2147483637 )
  {
    if ( v63 >= 0 )
    {
      v64 = v177;
      v65 = v138;
      goto LABEL_88;
    }
    goto LABEL_151;
  }
  v64 = v60;
  v65 = 0;
  v138 = 0;
LABEL_88:
  v36 = sub_18004B0E8((_DWORD)v128, (_DWORD)v64, v151, v151, v168, v151, (__int64)&v179, (__int64)v136);
  Acl = v36;
  v160 = ((v126 & 0x2000) << 17) | v136[0];
  if ( !v64 || v64 == v178 )
  {
    v66 = (__int64)ProcessHeap;
  }
  else
  {
    v106 = (unsigned __int64)v64;
    v66 = (__int64)ProcessHeap;
    RtlFreeHeap((__int64)ProcessHeap, 0, v106);
  }
  if ( v36 < 0 )
    goto LABEL_151;
  v67 = v179;
  if ( v179 )
  {
    if ( v121 && v128 )
      RtlFreeHeap(v66, 0, (unsigned __int64)v128);
    v128 = v67;
    *(_QWORD *)&v136[1] = v67;
    v131 = 1;
    v126 |= 2 * (v65 & 0x1400 | (2 * (v65 & 8 | 4)));
  }
  v136[0] = a7 & 8;
  if ( (a7 & 8) != 0
    || ((v39 = v128, (v101 = RtlFindAceByType(v128, 17LL, 0LL)) != 0) ? (v102 = v101 + 8) : (v102 = v157), !v102) )
  {
LABEL_93:
    v68 = v180;
    v69 = *((_WORD *)v180 + 1);
    if ( (~(_BYTE)v69 & 4) != 0 )
      goto LABEL_97;
    if ( v69 >= 0 )
    {
      v70 = *((_QWORD *)v180 + 4);
      goto LABEL_98;
    }
    if ( !*((_DWORD *)v180 + 4) )
LABEL_97:
      LODWORD(v70) = 0;
    else
      LODWORD(v70) = (_DWORD)v180 + *((_DWORD *)v180 + 4);
LABEL_98:
    v71 = v147;
    if ( v147 && (~*(_BYTE *)(v147 + 2) & 4) == 0 )
    {
      if ( *(__int16 *)(v147 + 2) >= 0 )
      {
        v72 = *(_QWORD *)(v147 + 32);
LABEL_103:
        LOBYTE(v71) = a6;
        v73 = sub_18004912C(
                v72,
                v70,
                v69 & 0x140C,
                v71,
                a7 & 1,
                v141,
                (__int64)v143,
                (__int64)v146,
                (__int64)v152,
                v158,
                v150,
                1,
                v164,
                a5,
                (__int64)&Src,
                (__int64)&v125,
                (__int64)&v138);
        Acl = v73;
        v36 = v73;
        if ( v73 >= 0 )
        {
          v122 = 1;
          v126 |= v138 & 0x1408 | 4;
LABEL_105:
          v75 = 1;
LABEL_106:
          if ( (a7 & 0x1000) != 0 )
            goto LABEL_116;
          if ( !v134 )
            goto LABEL_116;
          v76 = v149;
          if ( !v149 || !v147 )
            goto LABEL_116;
          v154 = 0;
          v141 = 0;
          Acl = sub_180047D44(v147, 0, (unsigned int)&v162, v164, a5, a6, a7 | 1, v149, v150, v169);
          v36 = Acl;
          if ( Acl >= 0 )
          {
            if ( (~*(_BYTE *)(v162 + 2) & 4) == 0 )
            {
              if ( *(__int16 *)(v162 + 2) >= 0 )
              {
                v77 = *(_QWORD *)(v162 + 32);
LABEL_115:
                if ( sub_180047C5C(0x10u, v77) )
                {
                  v161 = 0LL;
                  LODWORD(Size) = 20;
                  if ( (_BYTE)v145 != 1 )
                    goto LABEL_348;
                  v194 = 1;
                  v193[1] = 2;
                  v187 = v193;
                  v193[0] = 12;
                  v182 = 48;
                  v183 = 0LL;
                  v185 = 0;
                  v184 = 0LL;
                  v186 = 0LL;
                  Acl = ZwDuplicateToken(v76, 8LL, &v182);
                  v36 = Acl;
                  if ( Acl < 0 )
                    goto LABEL_151;
                  v115 = v161;
                  if ( !v161 )
LABEL_348:
                    v115 = v76;
                  Acl = ZwAccessCheck(v162, v115, 0x40000LL, v150, &v189, &Size, &v154, &v141);
                  v36 = Acl;
                  if ( v161 )
                    ZwClose(v161);
                  if ( v36 < 0 )
                    goto LABEL_151;
                  v36 = v141;
                  Acl = v141;
                  if ( v141 < 0 )
                    goto LABEL_151;
                }
LABEL_116:
                if ( (a7 & 1) != 0 && !Src )
                  v126 |= 0x1000u;
                v78 = !v160 || (v160 & 0x1B0) != v160;
                v79 = v136[0];
                v80 = v149;
                if ( v118 && !v136[0] && v78 )
                {
                  if ( !v149 )
                    goto LABEL_336;
                  v189 = 1;
                  v190 = 1;
                  v153 = 8LL;
                  v191 = 8LL;
                  v192 = 0;
                  Acl = ZwPrivilegeCheck(v149, &v189, &v123);
                  v36 = Acl;
                  if ( Acl < 0 )
                    goto LABEL_151;
                  if ( !v123 )
                    goto LABEL_354;
                }
                if ( (_BYTE)v142 && !v79 )
                {
                  if ( !v80 )
                    goto LABEL_336;
                  v153 = 32LL;
                  v189 = 1;
                  v190 = 1;
                  v191 = 32LL;
                  v192 = 0;
                  Acl = ZwPrivilegeCheck(v80, &v189, &v123);
                  v36 = Acl;
                  if ( Acl < 0 )
                    goto LABEL_151;
                  if ( !v123 )
                  {
LABEL_354:
                    v36 = -1073741727;
                    goto LABEL_150;
                  }
                }
                if ( !v124 || (a7 & 0x10) != 0 )
                {
                  v81 = v120;
                  v82 = (unsigned __int8 *)v143;
LABEL_125:
                  if ( v125 && v81 )
                  {
                    v116 = Src;
                    LOBYTE(v75) = v148;
                    Acl = sub_1800E6AF4((_DWORD)Src, v75, (_DWORD)v152, (unsigned int)&v163, (__int64)&v130);
                    v36 = Acl;
                    if ( Acl < 0 )
                      goto LABEL_151;
                    if ( v122 && v116 )
                      RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v116);
                    Src = v163;
                    v163 = 0LL;
                  }
                  v83 = 4 * v82[1] + 11;
                  LODWORD(Size) = 4 * v82[1] + 8;
                  v84 = v83 & 0xFFFFFFFC;
                  v154 = v84;
                  if ( v146 )
                  {
                    v136[0] = 4 * *((unsigned __int8 *)v146 + 1) + 8;
                    v85 = (v136[0] + 3) & 0xFFFFFFFC;
                  }
                  else
                  {
                    v136[0] = 0;
                    v85 = 0;
                  }
                  v86 = v126;
                  v142 = v85;
                  v148 = v126 & 0x10;
                  if ( (v126 & 0x10) != 0 && v128 )
                    v87 = (*((unsigned __int16 *)v128 + 1) + 3) & 0xFFFFFFFC;
                  else
                    v87 = 0;
                  v155 = v126 & 4;
                  if ( (v126 & 4) != 0 && Src )
                    v88 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
                  else
                    v88 = 0;
                  v89 = (__int64)ProcessHeap;
                  v145 = v88;
                  Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015B268 + 1310720, v85 + v88 + v87 + v84 + 20);
                  v159 = (_DWORD *)Heap;
                  v91 = (_DWORD *)Heap;
                  if ( !Heap )
                  {
                    v39 = v128;
                    v36 = -1073741801;
                    Acl = -1073741801;
                    goto LABEL_153;
                  }
                  *(_QWORD *)Heap = 0LL;
                  *(_QWORD *)(Heap + 8) = 0LL;
                  *(_DWORD *)(Heap + 16) = 0;
                  *(_WORD *)(Heap + 2) |= v86;
                  v92 = (char *)(Heap + 20);
                  *(_BYTE *)Heap = 1;
                  if ( v148 )
                  {
                    v104 = (unsigned __int16 *)v128;
                    if ( v128 )
                    {
                      memmove(v92, v128, *((unsigned __int16 *)v128 + 1));
                      if ( !v121 )
                        sub_18004C608(v92, v150);
                      v91 = v159;
                      v159[3] = (_DWORD)v92 - (_DWORD)v159;
                      v105 = v104[1];
                      if ( v87 > (unsigned int)v105 )
                      {
                        memset(&v92[v105], 0, v87 - (unsigned int)v105);
                        v91 = v159;
                      }
                      v92 += v87;
                    }
                    else
                    {
                      *(_DWORD *)(Heap + 12) = 0;
                    }
                  }
                  if ( v155 )
                  {
                    v93 = (unsigned __int16 *)Src;
                    if ( Src )
                    {
                      memmove(v92, Src, *((unsigned __int16 *)Src + 1));
                      if ( !v122 )
                        sub_18004C608(v92, v150);
                      v159[4] = (_DWORD)v92 - (_DWORD)v159;
                      v94 = v93[1];
                      v95 = v145;
                      if ( v145 > (unsigned int)v94 )
                        memset(&v92[v94], 0, v145 - (unsigned int)v94);
                      v92 += v95;
                    }
                    else
                    {
                      v91[4] = 0;
                    }
                  }
                  v96 = (unsigned int)Size;
                  memmove(v92, v143, (unsigned int)Size);
                  v97 = v154;
                  if ( v154 > (unsigned int)v96 )
                    memset(&v92[v96], 0, v154 - (unsigned int)v96);
                  v98 = (_DWORD)v92 - (_DWORD)v159;
                  v99 = &v92[v97];
                  v159[1] = v98;
                  if ( v146 )
                  {
                    v100 = v136[0];
                    memmove(v99, v146, v136[0]);
                    if ( v142 > (unsigned int)v100 )
                      memset(&v99[v100], 0, v142 - (unsigned int)v100);
                    v159[2] = (_DWORD)v99 - (_DWORD)v159;
                  }
                  v36 = 0;
                  goto LABEL_150;
                }
                if ( v80 )
                {
                  v81 = v120;
                  v82 = (unsigned __int8 *)v143;
                  LOBYTE(v74) = v120;
                  if ( !(unsigned __int8)sub_180081410(v149, v143, v74, &v155) )
                  {
                    v36 = v155;
                    goto LABEL_150;
                  }
                  goto LABEL_125;
                }
LABEL_336:
                v36 = -1073741700;
LABEL_150:
                Acl = v36;
                goto LABEL_151;
              }
              if ( *(_DWORD *)(v162 + 16) )
              {
                v77 = v162 + *(unsigned int *)(v162 + 16);
                goto LABEL_115;
              }
            }
            v77 = 0LL;
            goto LABEL_115;
          }
LABEL_151:
          v39 = v128;
          goto LABEL_152;
        }
        if ( v73 != -2147483637 )
          goto LABEL_151;
        v107 = v126;
        if ( (a7 & 1) != 0 )
        {
          v107 = v126 | 0x400;
          v126 |= 0x400u;
        }
        v108 = *((_WORD *)v68 + 1);
        if ( (v108 & 0xC) != 0xC )
        {
          if ( v153 )
          {
            Src = (void *)v153;
            v126 = v107 | 4;
          }
          goto LABEL_105;
        }
        if ( (~(_BYTE)v108 & 4) == 0 )
        {
          if ( v108 >= 0 )
          {
            v110 = (_BYTE *)*((_QWORD *)v68 + 4);
LABEL_282:
            Src = v110;
LABEL_283:
            v126 = v108 & 0x1000 | 4 | v107;
            v75 = 1;
            v125 = 1;
            goto LABEL_106;
          }
          if ( *((_DWORD *)v68 + 4) )
          {
            v110 = &v68[*((unsigned int *)v68 + 4)];
            goto LABEL_282;
          }
        }
        Src = 0LL;
        goto LABEL_283;
      }
      if ( *(_DWORD *)(v147 + 16) )
      {
        LODWORD(v72) = v147 + *(_DWORD *)(v147 + 16);
        goto LABEL_103;
      }
    }
    LODWORD(v72) = 0;
    goto LABEL_103;
  }
  if ( !v149 )
  {
    v36 = -1073741700;
    goto LABEL_311;
  }
  Acl = RtlSidDominates(v167, v102, &v129);
  v36 = Acl;
  if ( Acl >= 0 )
  {
    v103 = (unsigned __int8)v142;
    if ( !v129 )
      v103 = 1;
    v142 = v103;
    goto LABEL_93;
  }
LABEL_152:
  v89 = (__int64)ProcessHeap;
LABEL_153:
  if ( v162 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v162);
    v39 = *(_BYTE **)&v136[1];
    v36 = Acl;
  }
  if ( v130 && v163 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v163);
    v39 = *(_BYTE **)&v136[1];
    v36 = Acl;
  }
  RtlFreeHeap(v89, 0, (unsigned __int64)v170);
  RtlFreeHeap(v89, 0, (unsigned __int64)v171);
  RtlFreeHeap(v89, 0, (unsigned __int64)v172);
  RtlFreeHeap(v89, 0, (unsigned __int64)v173);
  RtlFreeHeap(v89, 0, (unsigned __int64)v174);
  if ( v175 )
    RtlFreeHeap(v89, 0, (unsigned __int64)v175);
  if ( v176 )
    RtlFreeHeap(v89, 0, (unsigned __int64)v176);
  if ( (v131 || v121) && v39 )
    RtlFreeHeap(v89, 0, (unsigned __int64)v39);
  if ( v132 && v151 )
    RtlFreeHeap(v89, 0, v151);
  if ( v168 && v133 )
    RtlFreeHeap(v89, 0, v168);
  if ( v122 )
  {
    if ( Src )
      RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Src);
  }
  *v181 = v159;
  return (unsigned int)v36;
}
