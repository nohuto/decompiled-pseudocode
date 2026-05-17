/*
 * XREFs of sub_180032DD0 @ 0x180032DD0
 * Callers:
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     sub_1800417FC @ 0x1800417FC (sub_1800417FC.c)
 * Callees:
 *     sub_180004D78 @ 0x180004D78 (sub_180004D78.c)
 *     sub_18001A950 @ 0x18001A950 (sub_18001A950.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     sub_180058B10 @ 0x180058B10 (sub_180058B10.c)
 *     sub_1800798B8 @ 0x1800798B8 (sub_1800798B8.c)
 *     RtlCharToInteger @ 0x180079AB0 (RtlCharToInteger.c)
 *     sub_18007D2A4 @ 0x18007D2A4 (sub_18007D2A4.c)
 *     RtlAddressInSectionTable @ 0x18007FD90 (RtlAddressInSectionTable.c)
 *     sub_180081F44 @ 0x180081F44 (sub_180081F44.c)
 *     sub_180084734 @ 0x180084734 (sub_180084734.c)
 *     sub_180086EA8 @ 0x180086EA8 (sub_180086EA8.c)
 *     strrchr @ 0x18009AEA0 (strrchr.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800E9728 @ 0x1800E9728 (sub_1800E9728.c)
 */

__int64 __fastcall sub_180032DD0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  unsigned int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // r12
  unsigned __int64 v12; // r14
  bool v13; // bl
  unsigned __int64 v14; // rdi
  _DWORD *v15; // r13
  int v16; // eax
  __int16 v17; // ax
  __int64 v18; // rdx
  char *v19; // r10
  unsigned __int64 v20; // r8
  unsigned int v21; // r9d
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // r15
  unsigned __int64 *v25; // r12
  int v26; // esi
  __int64 v27; // rbx
  unsigned __int64 v28; // rcx
  unsigned __int16 *v29; // rax
  const char *v30; // r11
  int v31; // r8d
  int v32; // r10d
  int v33; // r9d
  const char *v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int8 v36; // cl
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rcx
  unsigned __int64 v40; // rdi
  char *i; // r12
  char *v42; // rax
  __int16 v43; // bx
  const char *v44; // r15
  __int64 v45; // r13
  unsigned __int64 v46; // r14
  bool v47; // bl
  unsigned __int64 v48; // rdi
  char *v49; // rsi
  int v50; // eax
  __int16 v51; // ax
  __int64 v52; // rdx
  int v53; // r10d
  int v54; // r9d
  int v55; // r8d
  const char *v56; // rax
  signed __int64 v57; // rdx
  unsigned __int8 v58; // cl
  int v59; // eax
  ULONG v60; // edx
  unsigned __int64 v61; // rbx
  int v62; // eax
  ULONG v64; // ebx
  __int64 v65; // r14
  unsigned __int16 *v66; // rdx
  char v67; // al
  __int64 v68; // [rsp+40h] [rbp-148h]
  _DWORD *v69; // [rsp+48h] [rbp-140h]
  int v70; // [rsp+50h] [rbp-138h] BYREF
  unsigned int v71; // [rsp+54h] [rbp-134h]
  unsigned int v72; // [rsp+58h] [rbp-130h]
  __int64 v73; // [rsp+60h] [rbp-128h]
  __int64 v74; // [rsp+68h] [rbp-120h]
  _DWORD *v75; // [rsp+70h] [rbp-118h] BYREF
  __int64 v76; // [rsp+78h] [rbp-110h] BYREF
  __int64 v77; // [rsp+80h] [rbp-108h]
  _QWORD *v78; // [rsp+88h] [rbp-100h]
  unsigned __int64 *v79; // [rsp+90h] [rbp-F8h]
  unsigned __int64 v80; // [rsp+98h] [rbp-F0h]
  __int64 v81; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v82; // [rsp+A8h] [rbp-E0h] BYREF
  char *v83; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v84; // [rsp+B8h] [rbp-D0h] BYREF
  unsigned __int64 v85; // [rsp+C0h] [rbp-C8h]
  unsigned __int16 *v86; // [rsp+C8h] [rbp-C0h]
  unsigned __int64 v87; // [rsp+D0h] [rbp-B8h]
  char *v88; // [rsp+D8h] [rbp-B0h]
  __int64 v89; // [rsp+E0h] [rbp-A8h]
  unsigned __int64 v90; // [rsp+E8h] [rbp-A0h]
  char *v91; // [rsp+F0h] [rbp-98h]
  STRING SourceString; // [rsp+F8h] [rbp-90h] BYREF
  __int128 v93; // [rsp+108h] [rbp-80h] BYREF
  __int64 v94; // [rsp+118h] [rbp-70h]
  __int128 v95; // [rsp+120h] [rbp-68h] BYREF
  __int64 v96; // [rsp+130h] [rbp-58h]
  int v98; // [rsp+198h] [rbp+10h]
  unsigned int v99; // [rsp+1A0h] [rbp+18h] BYREF
  ULONG Value; // [rsp+1A8h] [rbp+20h] BYREF

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 48);
  v74 = v2;
  v89 = *(_QWORD *)(v2 + 48);
  sub_18003CA5C(v89, v2 + 72, 5286LL);
  sub_18001A950(v1);
  v71 = 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)(v1 + 112);
    if ( v3 >= *(_DWORD *)(v1 + 88) )
    {
      v26 = sub_180058B10(v1);
      if ( v26 >= 0 )
      {
        sub_18003CA5C(*(_QWORD *)(v2 + 48), v2 + 72, 5287LL);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
LABEL_108:
      if ( v26 >= 0 )
        return (unsigned int)v26;
LABEL_130:
      sub_180084734((unsigned int)v26, 25LL, 0LL, v1);
      return (unsigned int)v26;
    }
    v4 = v3;
    v5 = *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8LL * v3);
    v6 = v5;
    v73 = v5;
    if ( v5 )
    {
      v7 = *(_QWORD *)(v5 + 176);
      if ( v7 )
      {
        if ( (*(_DWORD *)(v7 + 24) & 0x80000) == 0 && *(_QWORD *)(v7 + 48) != v5 )
        {
          v6 = *(_QWORD *)(v7 + 48);
          v73 = v6;
          *(_QWORD *)(v7 + 48) = v5;
        }
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8 * v4) != v6 )
    {
      sub_180086EA8();
      *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8 * v4) = v6;
    }
    v8 = *(_QWORD *)(v1 + 120);
    v9 = *(unsigned int *)(v8 + 20 * v4);
    v10 = v89 + v9;
    v11 = v89 + *(unsigned int *)(v8 + 20 * v4 + 16);
    if ( !(_DWORD)v9 || (unsigned int)v9 > *(_DWORD *)(v2 + 64) )
      v10 = v89 + *(unsigned int *)(v8 + 20 * v4 + 16);
    if ( v6 )
      break;
LABEL_49:
    ++*(_DWORD *)(v1 + 112);
  }
  v12 = *(_QWORD *)(v6 + 48);
  v85 = v12;
  v13 = 1;
  v14 = v12;
  v81 = 0LL;
  v15 = 0LL;
  v69 = 0LL;
  v75 = 0LL;
  if ( (v12 & 3) != 0 )
  {
    v14 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
    v13 = (v12 & 1) == 0;
  }
  v16 = RtlImageNtHeaderEx(1LL, v14, 0LL, &v81);
  if ( !v81 )
  {
LABEL_136:
    if ( v16 >= 0 )
      goto LABEL_20;
    goto LABEL_137;
  }
  v17 = *(_WORD *)(v81 + 24);
  if ( v17 == 267 )
  {
    v16 = sub_1800E9728(v14, v13, 0, (unsigned int)&v99, v81, (__int64)&v75);
    v15 = v75;
    v69 = v75;
    goto LABEL_136;
  }
  if ( v17 != 523 || !*(_DWORD *)(v81 + 132) || (v18 = *(unsigned int *)(v81 + 136), !(_DWORD)v18) )
  {
LABEL_137:
    v15 = 0LL;
    goto LABEL_19;
  }
  v99 = *(_DWORD *)(v81 + 140);
  if ( !v13 && (unsigned int)v18 >= *(_DWORD *)(v81 + 84) )
  {
    v15 = (_DWORD *)RtlAddressInSectionTable(v81, v14, (unsigned int)v18);
    v69 = v15;
    if ( v15 )
    {
      v16 = 0;
      goto LABEL_136;
    }
    goto LABEL_137;
  }
  v15 = (_DWORD *)(v14 + v18);
LABEL_19:
  v69 = v15;
LABEL_20:
  if ( !v15 )
  {
    v67 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2433,
        (unsigned int)"LdrpSnapModule",
        0,
        "DLL \"%wZ\" does not contain an export table\n",
        v73 + 72);
      v67 = dword_180155A10;
    }
    if ( (v67 & 0x10) != 0 )
      __debugbreak();
    v26 = -1073741701;
    v1 = a1;
    goto LABEL_130;
  }
  if ( qword_18016B370 )
  {
    if ( v12 < *((_QWORD *)&xmmword_18016B4C0 + 1)
      || v12 >= *((_QWORD *)&xmmword_18016B4C0 + 1) + (unsigned __int64)(unsigned int)qword_18016B4D0 )
    {
      sub_180034A40(v12, &v93);
    }
    else
    {
      v93 = xmmword_18016B4C0;
      v94 = qword_18016B4D0;
    }
    if ( *((_QWORD *)&v93 + 1) != v12 )
      __fastfail(0x18u);
  }
  v19 = (char *)v15 + v99;
  v88 = v19;
  v20 = v12 + (unsigned int)v15[7];
  v87 = v20;
  v21 = v15[6];
  v72 = v21;
  v22 = v12 + (unsigned int)v15[8];
  v80 = v22;
  v90 = v12 + (unsigned int)v15[9];
  v1 = a1;
  v23 = 8LL * *(unsigned int *)(a1 + 116);
  v24 = (_QWORD *)(v23 + v10);
  v25 = (unsigned __int64 *)(v23 + v11);
  while ( 1 )
  {
    v79 = v25;
    v78 = v24;
    if ( !*v24 )
    {
      *(_DWORD *)(v1 + 116) = 0;
      v2 = v74;
      goto LABEL_49;
    }
    v26 = -1073741702;
    v27 = *v24 >> 63;
    v77 = v27;
    v28 = -4530927LL;
    v68 = -4530927LL;
    v86 = 0LL;
    if ( (_BYTE)v27 )
    {
      v71 = *(unsigned __int16 *)v24;
      v38 = v71 - v15[4];
    }
    else
    {
      v29 = (unsigned __int16 *)(*(_QWORD *)(v74 + 48) + *(unsigned int *)v24);
      v30 = (const char *)(v29 + 1);
      v86 = v29 + 1;
      v31 = *v29;
      v32 = 0;
      v33 = v21 - 1;
      if ( v31 >= v72 )
      {
        v31 = v33 / 2;
        v22 = v80;
      }
      if ( v33 < 0 )
        goto LABEL_144;
      while ( 1 )
      {
        v34 = v30;
        v35 = v12 + *(unsigned int *)(v22 + 4LL * v31) - (_QWORD)v30;
        while ( 1 )
        {
          v36 = *v34;
          if ( *v34 != v34[v35] )
            break;
          ++v34;
          if ( !v36 )
          {
            v37 = 0;
            goto LABEL_35;
          }
        }
        v37 = v36 < (unsigned int)v34[v35] ? -1 : 1;
LABEL_35:
        if ( !v37 )
          break;
        if ( v37 < 0 )
          v33 = v31 - 1;
        else
          v32 = v31 + 1;
        v31 = (v33 + v32) / 2;
        v22 = v80;
        if ( v33 < v32 )
        {
          v28 = -4530927LL;
LABEL_144:
          if ( (dword_180155A10 & 3) != 0 )
          {
            sub_1800D5274(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              1379,
              (unsigned int)"LdrpNameToOrdinal",
              1,
              "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
              v30,
              (const void *)v12);
            v28 = -4530927LL;
          }
          if ( (dword_180155A10 & 0x40) != 0 )
            __debugbreak();
          goto LABEL_45;
        }
      }
      v38 = *(unsigned __int16 *)(v90 + 2LL * v31);
      v20 = v87;
      v19 = v88;
    }
    if ( v38 >= v15[5] )
      goto LABEL_122;
    _mm_lfence();
    v39 = *(unsigned int *)(v20 + 4LL * (int)v38);
    if ( !(_DWORD)v39 )
    {
      v26 = -1073741702;
      goto LABEL_122;
    }
    v28 = v12 + v39;
    v68 = v28;
    v26 = 0;
    if ( v28 > (unsigned __int64)v15 && v28 < (unsigned __int64)v19 )
      break;
LABEL_45:
    if ( v26 < 0 )
    {
      if ( v26 == -1073741702 || v26 == -1073741515 )
      {
        v65 = v74;
        if ( (unsigned int)sub_1800798B8(*(wchar_t **)(v74 + 80))
          || (unsigned int)sub_1800798B8(*(wchar_t **)(v73 + 80)) )
        {
          LODWORD(v27) = v73;
          sub_180081F44(v65 + 72, v73 + 72, 1, (unsigned int)&unk_180113DC0, 0);
          sub_180081F44(v65 + 72, v27 + 72, 1, (unsigned int)&unk_180124740, 1);
          LOBYTE(v27) = v77;
          v1 = a1;
        }
        if ( (_BYTE)v27 )
        {
          v26 = -1073741512;
          v66 = (unsigned __int16 *)v71;
        }
        else
        {
          v26 = -1073741511;
          v66 = v86;
        }
        sub_18007D2A4(v65 + 72, v66, (unsigned int)v26);
      }
      goto LABEL_108;
    }
    *v25 = v28;
    ++v24;
    ++v25;
    ++*(_DWORD *)(v1 + 116);
    v22 = v80;
    v21 = v72;
    v20 = v87;
    v19 = v88;
  }
  v40 = v28;
  v98 = 0;
  v76 = 0LL;
  v75 = *(_DWORD **)(v74 + 176);
  v84 = 0LL;
  for ( i = v91; ; v40 = (unsigned __int64)i )
  {
    v42 = strrchr((const char *)v40, 46);
    if ( !v42 || (v43 = (_WORD)v42 - v40, (unsigned __int64)&v42[-v40] > 0xFFFF) )
    {
LABEL_162:
      v26 = -1073741701;
      goto LABEL_91;
    }
    SourceString.Buffer = (char *)v40;
    SourceString.Length = (_WORD)v42 - v40;
    SourceString.MaximumLength = (_WORD)v42 - v40;
    v44 = v42 + 1;
    if ( v42[1] == 35 )
    {
      if ( RtlCharToInteger(v42 + 2, 0, &Value) < 0 )
        goto LABEL_162;
      v44 = 0LL;
    }
    if ( v43 == 5 && (*(_DWORD *)v40 | 0x20202020) == 0x6C64746E && (*(_BYTE *)(v40 + 4) | 0x20) == 0x6C )
    {
      v45 = qword_18015B318;
      v76 = qword_18015B318;
    }
    else
    {
      v62 = sub_180041A60(&SourceString, (__int64)&v76, (__int64)&v84);
      v26 = v62;
      if ( v62 < 0 || v62 == 259 )
        goto LABEL_91;
      v45 = v76;
    }
    v46 = *(_QWORD *)(v45 + 48);
    v47 = 1;
    v48 = v46;
    v82 = 0LL;
    v49 = 0LL;
    v83 = 0LL;
    if ( (v46 & 3) != 0 )
    {
      v48 = v46 & 0xFFFFFFFFFFFFFFFCuLL;
      v47 = (v46 & 1) == 0;
    }
    v50 = RtlImageNtHeaderEx(1LL, v48, 0LL, &v82);
    if ( !v82 )
      goto LABEL_152;
    v51 = *(_WORD *)(v82 + 24);
    if ( v51 == 267 )
    {
      v50 = sub_1800E9728(v48, v47, 0, (unsigned int)&v70, v82, (__int64)&v83);
      v49 = v83;
      goto LABEL_152;
    }
    if ( v51 == 523 )
    {
      if ( *(_DWORD *)(v82 + 132) )
      {
        v52 = *(unsigned int *)(v82 + 136);
        if ( (_DWORD)v52 )
        {
          v70 = *(_DWORD *)(v82 + 140);
          if ( v47 || (unsigned int)v52 < *(_DWORD *)(v82 + 84) )
          {
            v49 = (char *)(v48 + v52);
            goto LABEL_68;
          }
          v49 = (char *)RtlAddressInSectionTable(v82, v48, (unsigned int)v52);
          if ( v49 )
          {
            v50 = 0;
LABEL_152:
            if ( v50 >= 0 )
              goto LABEL_68;
          }
        }
      }
    }
    v49 = 0LL;
LABEL_68:
    if ( !v49 )
      goto LABEL_158;
    if ( v44 )
    {
      if ( (dword_180155A10 & 5) != 0 )
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          671,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          "Locating procedure \"%s\" by name\n",
          v44);
      v53 = 0;
      v54 = *((_DWORD *)v49 + 6) - 1;
      v55 = v54 / 2;
      if ( v54 < 0 )
      {
LABEL_154:
        if ( (dword_180155A10 & 3) != 0 )
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            1379,
            (unsigned int)"LdrpNameToOrdinal",
            1,
            "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
            v44,
            (const void *)v46);
        if ( (dword_180155A10 & 0x40) != 0 )
          __debugbreak();
LABEL_158:
        v26 = -1073741702;
        goto LABEL_91;
      }
      while ( 1 )
      {
        v56 = v44;
        v57 = v46 + *(unsigned int *)(v46 + *((unsigned int *)v49 + 8) + 4LL * v55) - (_QWORD)v44;
        while ( 1 )
        {
          v58 = *v56;
          if ( *v56 != v56[v57] )
            break;
          ++v56;
          if ( !v58 )
          {
            v59 = 0;
            goto LABEL_77;
          }
        }
        v59 = v58 < (unsigned int)v56[v57] ? -1 : 1;
LABEL_77:
        if ( !v59 )
          break;
        if ( v59 >= 0 )
          v53 = v55 + 1;
        else
          v54 = v55 - 1;
        v55 = (v54 + v53) / 2;
        if ( v54 < v53 )
          goto LABEL_154;
      }
      v60 = *(unsigned __int16 *)(v46 + *((unsigned int *)v49 + 9) + 2LL * v55);
    }
    else
    {
      v64 = Value;
      if ( (dword_180155A10 & 5) != 0 )
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          689,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          "Loading procedure 0x%lx by ordinal\n",
          Value);
      if ( !v64 )
      {
        v26 = -1073741811;
        goto LABEL_91;
      }
      v60 = v64 - *((_DWORD *)v49 + 4);
    }
    if ( v60 >= *((_DWORD *)v49 + 5) )
    {
      v26 = (v44 != 0LL) - 1073741512;
      goto LABEL_91;
    }
    i = (char *)(v46 + *(unsigned int *)(v46 + *((unsigned int *)v49 + 7) + 4LL * (int)v60));
    v91 = i;
    if ( i < v49 || i >= &v49[v70] )
      break;
    if ( ++v98 == 32 )
      goto LABEL_162;
  }
  v26 = 0;
  v61 = *(_QWORD *)(v45 + 48);
  if ( qword_18016B370 )
  {
    if ( v61 < *((_QWORD *)&xmmword_18016B4C0 + 1)
      || v61 >= *((_QWORD *)&xmmword_18016B4C0 + 1) + (unsigned __int64)(unsigned int)qword_18016B4D0 )
    {
      sub_180034A40(*(_QWORD *)(v45 + 48), &v95);
    }
    else
    {
      v95 = xmmword_18016B4C0;
      v96 = qword_18016B4D0;
    }
    if ( *((_QWORD *)&v95 + 1) != v61 )
      __fastfail(0x18u);
  }
LABEL_91:
  if ( v84 )
    RtlFreeHeap(qword_18015B328, 0, v84);
  if ( v26 != 259 )
  {
    LOBYTE(v27) = v77;
    v12 = v85;
    v24 = v78;
    v15 = v69;
    v1 = a1;
    if ( v26 >= 0 )
    {
      v28 = (unsigned __int64)i;
      v25 = v79;
      goto LABEL_45;
    }
    v25 = v79;
LABEL_122:
    v28 = v68;
    goto LABEL_45;
  }
  return 0LL;
}
