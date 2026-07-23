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
  unsigned __int64 *v5; // rcx
  unsigned __int64 *v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // r12
  unsigned __int64 v13; // r14
  bool v14; // bl
  char *v15; // rdi
  char *v16; // r13
  NTSTATUS v17; // eax
  WORD Magic; // ax
  __int64 VirtualAddress; // rdx
  char *v20; // r10
  unsigned __int64 v21; // r8
  unsigned int v22; // r9d
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // r15
  unsigned __int64 *v26; // r12
  int v27; // esi
  __int64 v28; // rbx
  unsigned __int64 v29; // rcx
  unsigned __int16 *v30; // rax
  const char *v31; // r11
  int v32; // r8d
  int v33; // r10d
  int v34; // r9d
  const char *v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int8 v37; // cl
  int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // rcx
  unsigned __int64 v41; // rdi
  char *i; // r12
  char *v43; // rax
  __int16 v44; // bx
  const char *v45; // r15
  __int64 v46; // r13
  unsigned __int64 v47; // r14
  bool v48; // bl
  char *v49; // rdi
  char *v50; // rsi
  NTSTATUS v51; // eax
  WORD v52; // ax
  __int64 v53; // rdx
  int v54; // r10d
  int v55; // r9d
  int v56; // r8d
  const char *v57; // rax
  signed __int64 v58; // rdx
  unsigned __int8 v59; // cl
  int v60; // eax
  ULONG v61; // edx
  unsigned __int64 v62; // rbx
  int v63; // eax
  ULONG v65; // ebx
  unsigned __int16 *v66; // rdx
  char v67; // al
  int v68; // [rsp+20h] [rbp-168h]
  int v69; // [rsp+20h] [rbp-168h]
  __int64 v70; // [rsp+40h] [rbp-148h]
  __int64 v71; // [rsp+48h] [rbp-140h]
  DWORD v72; // [rsp+50h] [rbp-138h]
  unsigned int v73; // [rsp+54h] [rbp-134h]
  unsigned int v74; // [rsp+58h] [rbp-130h]
  unsigned __int64 *v75; // [rsp+60h] [rbp-128h]
  __int64 v76; // [rsp+68h] [rbp-120h]
  __int64 v77; // [rsp+70h] [rbp-118h] BYREF
  __int64 v78; // [rsp+78h] [rbp-110h] BYREF
  __int64 v79; // [rsp+80h] [rbp-108h]
  _QWORD *v80; // [rsp+88h] [rbp-100h]
  unsigned __int64 *v81; // [rsp+90h] [rbp-F8h]
  unsigned __int64 v82; // [rsp+98h] [rbp-F0h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+A0h] [rbp-E8h] BYREF
  PIMAGE_NT_HEADERS NtHeaders; // [rsp+A8h] [rbp-E0h] BYREF
  __int64 v85; // [rsp+B0h] [rbp-D8h] BYREF
  PVOID BaseAddress; // [rsp+B8h] [rbp-D0h] BYREF
  unsigned __int64 v87; // [rsp+C0h] [rbp-C8h]
  unsigned __int16 *v88; // [rsp+C8h] [rbp-C0h]
  unsigned __int64 v89; // [rsp+D0h] [rbp-B8h]
  char *v90; // [rsp+D8h] [rbp-B0h]
  __int64 v91; // [rsp+E0h] [rbp-A8h]
  unsigned __int64 v92; // [rsp+E8h] [rbp-A0h]
  char *v93; // [rsp+F0h] [rbp-98h]
  ANSI_STRING SourceString; // [rsp+F8h] [rbp-90h] BYREF
  __int128 v95; // [rsp+108h] [rbp-80h]
  __int64 v96; // [rsp+118h] [rbp-70h]
  __int128 v97; // [rsp+120h] [rbp-68h]
  __int64 v98; // [rsp+130h] [rbp-58h]
  int v100; // [rsp+198h] [rbp+10h]
  DWORD Size; // [rsp+1A0h] [rbp+18h]
  ULONG Value; // [rsp+1A8h] [rbp+20h] BYREF

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 48);
  v76 = v2;
  v91 = *(_QWORD *)(v2 + 48);
  sub_18003CA5C(v91, v2 + 72, 5286LL);
  sub_18001A950(v1);
  v73 = 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)(v1 + 112);
    if ( v3 >= *(_DWORD *)(v1 + 88) )
    {
      v27 = sub_180058B10(v1);
      if ( v27 >= 0 )
      {
        sub_18003CA5C(*(_QWORD *)(v2 + 48), v2 + 72, 5287LL);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
LABEL_108:
      if ( v27 >= 0 )
        return (unsigned int)v27;
LABEL_130:
      sub_180084734((unsigned int)v27, 25LL, 0LL, v1);
      return (unsigned int)v27;
    }
    v4 = v3;
    v5 = *(unsigned __int64 **)(*(_QWORD *)(v1 + 80) + 8LL * v3);
    v6 = v5;
    v75 = v5;
    if ( v5 )
    {
      v7 = v5[22];
      if ( v7 )
      {
        if ( (*(_DWORD *)(v7 + 24) & 0x80000) == 0 && *(unsigned __int64 **)(v7 + 48) != v5 )
        {
          v6 = *(unsigned __int64 **)(v7 + 48);
          v75 = v6;
          *(_QWORD *)(v7 + 48) = v5;
        }
      }
    }
    v8 = *(unsigned __int64 **)(*(_QWORD *)(v1 + 80) + 8 * v4);
    if ( v8 != v6 )
    {
      sub_180086EA8(v8);
      *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8 * v4) = v6;
    }
    v9 = *(_QWORD *)(v1 + 120);
    v10 = *(unsigned int *)(v9 + 20 * v4);
    v11 = v91 + v10;
    v12 = v91 + *(unsigned int *)(v9 + 20 * v4 + 16);
    if ( !(_DWORD)v10 || (unsigned int)v10 > *(_DWORD *)(v2 + 64) )
      v11 = v91 + *(unsigned int *)(v9 + 20 * v4 + 16);
    if ( v6 )
      break;
LABEL_49:
    ++*(_DWORD *)(v1 + 112);
  }
  v13 = v6[6];
  v87 = v13;
  v14 = 1;
  v15 = (char *)v13;
  OutHeaders = 0LL;
  v16 = 0LL;
  v71 = 0LL;
  v77 = 0LL;
  if ( (v13 & 3) != 0 )
  {
    v15 = (char *)(v13 & 0xFFFFFFFFFFFFFFFCuLL);
    v14 = (v13 & 1) == 0;
  }
  v17 = RtlImageNtHeaderEx(1u, v15, 0LL, &OutHeaders);
  if ( !OutHeaders )
  {
LABEL_136:
    if ( v17 >= 0 )
      goto LABEL_20;
    goto LABEL_137;
  }
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic == 267 )
  {
    v17 = sub_1800E9728(v15, OutHeaders, (__int64)&v77);
    v16 = (char *)v77;
    v71 = v77;
    goto LABEL_136;
  }
  if ( Magic != 523
    || !OutHeaders->OptionalHeader.NumberOfRvaAndSizes
    || (VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress, !(_DWORD)VirtualAddress) )
  {
LABEL_137:
    v16 = 0LL;
    goto LABEL_19;
  }
  Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
  if ( !v14 && (unsigned int)VirtualAddress >= OutHeaders->OptionalHeader.SizeOfHeaders )
  {
    v16 = (char *)RtlAddressInSectionTable(OutHeaders, v15, VirtualAddress);
    v71 = (__int64)v16;
    if ( v16 )
    {
      v17 = 0;
      goto LABEL_136;
    }
    goto LABEL_137;
  }
  v16 = &v15[VirtualAddress];
LABEL_19:
  v71 = (__int64)v16;
LABEL_20:
  if ( !v16 )
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
        v75 + 9);
      v67 = dword_180155A10;
    }
    if ( (v67 & 0x10) != 0 )
      __debugbreak();
    v27 = -1073741701;
    v1 = a1;
    goto LABEL_130;
  }
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
  {
    if ( v13 < *((_QWORD *)&xmmword_18016B4C0 + 1)
      || v13 >= *((_QWORD *)&xmmword_18016B4C0 + 1) + (unsigned __int64)(unsigned int)qword_18016B4D0 )
    {
      sub_180034A40((PVOID)v13);
    }
    else
    {
      v95 = xmmword_18016B4C0;
      v96 = qword_18016B4D0;
    }
    if ( *((_QWORD *)&v95 + 1) != v13 )
      __fastfail(0x18u);
  }
  v20 = &v16[Size];
  v90 = v20;
  v21 = v13 + *((unsigned int *)v16 + 7);
  v89 = v21;
  v22 = *((_DWORD *)v16 + 6);
  v74 = v22;
  v23 = v13 + *((unsigned int *)v16 + 8);
  v82 = v23;
  v92 = v13 + *((unsigned int *)v16 + 9);
  v1 = a1;
  v24 = 8LL * *(unsigned int *)(a1 + 116);
  v25 = (_QWORD *)(v24 + v11);
  v26 = (unsigned __int64 *)(v24 + v12);
  while ( 1 )
  {
    v81 = v26;
    v80 = v25;
    if ( !*v25 )
    {
      *(_DWORD *)(v1 + 116) = 0;
      v2 = v76;
      goto LABEL_49;
    }
    v27 = -1073741702;
    v28 = *v25 >> 63;
    v79 = v28;
    v29 = -4530927LL;
    v70 = -4530927LL;
    v88 = 0LL;
    if ( (_BYTE)v28 )
    {
      v73 = *(unsigned __int16 *)v25;
      v39 = v73 - *((_DWORD *)v16 + 4);
    }
    else
    {
      v30 = (unsigned __int16 *)(*(_QWORD *)(v76 + 48) + *(unsigned int *)v25);
      v31 = (const char *)(v30 + 1);
      v88 = v30 + 1;
      v32 = *v30;
      v33 = 0;
      v34 = v22 - 1;
      if ( v32 >= v74 )
      {
        v32 = v34 / 2;
        v23 = v82;
      }
      if ( v34 < 0 )
        goto LABEL_144;
      while ( 1 )
      {
        v35 = v31;
        v36 = v13 + *(unsigned int *)(v23 + 4LL * v32) - (_QWORD)v31;
        while ( 1 )
        {
          v37 = *v35;
          if ( *v35 != v35[v36] )
            break;
          ++v35;
          if ( !v37 )
          {
            v38 = 0;
            goto LABEL_35;
          }
        }
        v38 = v37 < (unsigned int)v35[v36] ? -1 : 1;
LABEL_35:
        if ( !v38 )
          break;
        if ( v38 < 0 )
          v34 = v32 - 1;
        else
          v33 = v32 + 1;
        v32 = (v34 + v33) / 2;
        v23 = v82;
        if ( v34 < v33 )
        {
          v29 = -4530927LL;
LABEL_144:
          if ( (dword_180155A10 & 3) != 0 )
          {
            sub_1800D5274(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              1379,
              (unsigned int)"LdrpNameToOrdinal",
              1,
              "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
              v31,
              (const void *)v13);
            v29 = -4530927LL;
          }
          if ( (dword_180155A10 & 0x40) != 0 )
            __debugbreak();
          goto LABEL_45;
        }
      }
      v39 = *(unsigned __int16 *)(v92 + 2LL * v32);
      v21 = v89;
      v20 = v90;
    }
    if ( v39 >= *((_DWORD *)v16 + 5) )
      goto LABEL_122;
    _mm_lfence();
    v40 = *(unsigned int *)(v21 + 4LL * (int)v39);
    if ( !(_DWORD)v40 )
    {
      v27 = -1073741702;
      goto LABEL_122;
    }
    v29 = v13 + v40;
    v70 = v29;
    v27 = 0;
    if ( v29 > (unsigned __int64)v16 && v29 < (unsigned __int64)v20 )
      break;
LABEL_45:
    if ( v27 < 0 )
    {
      if ( v27 == -1073741702 || v27 == -1073741515 )
      {
        if ( (unsigned int)sub_1800798B8(*(wchar_t **)(v76 + 80)) || (unsigned int)sub_1800798B8((wchar_t *)v75[10]) )
        {
          LOBYTE(v68) = 0;
          sub_180081F44(v76 + 72, v75 + 9, 1LL, &unk_180113DC0, v68);
          LOBYTE(v69) = 1;
          sub_180081F44(v76 + 72, v75 + 9, 1LL, &unk_180124740, v69);
          LOBYTE(v28) = v79;
          v1 = a1;
        }
        if ( (_BYTE)v28 )
        {
          v27 = -1073741512;
          v66 = (unsigned __int16 *)v73;
        }
        else
        {
          v27 = -1073741511;
          v66 = v88;
        }
        sub_18007D2A4(v76 + 72, v66, (unsigned int)v27);
      }
      goto LABEL_108;
    }
    *v26 = v29;
    ++v25;
    ++v26;
    ++*(_DWORD *)(v1 + 116);
    v23 = v82;
    v22 = v74;
    v21 = v89;
    v20 = v90;
  }
  v41 = v29;
  v100 = 0;
  v78 = 0LL;
  v77 = *(_QWORD *)(v76 + 176);
  BaseAddress = 0LL;
  for ( i = v93; ; v41 = (unsigned __int64)i )
  {
    v43 = strrchr((const char *)v41, 46);
    if ( !v43 || (v44 = (_WORD)v43 - v41, (unsigned __int64)&v43[-v41] > 0xFFFF) )
    {
LABEL_162:
      v27 = -1073741701;
      goto LABEL_91;
    }
    SourceString.Buffer = (PCHAR)v41;
    SourceString.Length = (_WORD)v43 - v41;
    SourceString.MaximumLength = (_WORD)v43 - v41;
    v45 = v43 + 1;
    if ( v43[1] == 35 )
    {
      if ( RtlCharToInteger(v43 + 2, 0, &Value) < 0 )
        goto LABEL_162;
      v45 = 0LL;
    }
    if ( v44 == 5 && (*(_DWORD *)v41 | 0x20202020) == 0x6C64746E && (*(_BYTE *)(v41 + 4) | 0x20) == 0x6C )
    {
      v46 = qword_18015B318;
      v78 = qword_18015B318;
    }
    else
    {
      v63 = sub_180041A60(&SourceString, (__int64)&v78, (__int64)&BaseAddress);
      v27 = v63;
      if ( v63 < 0 || v63 == 259 )
        goto LABEL_91;
      v46 = v78;
    }
    v47 = *(_QWORD *)(v46 + 48);
    v48 = 1;
    v49 = (char *)v47;
    NtHeaders = 0LL;
    v50 = 0LL;
    v85 = 0LL;
    if ( (v47 & 3) != 0 )
    {
      v49 = (char *)(v47 & 0xFFFFFFFFFFFFFFFCuLL);
      v48 = (v47 & 1) == 0;
    }
    v51 = RtlImageNtHeaderEx(1u, v49, 0LL, &NtHeaders);
    if ( !NtHeaders )
      goto LABEL_152;
    v52 = NtHeaders->OptionalHeader.Magic;
    if ( v52 == 267 )
    {
      v51 = sub_1800E9728(v49, NtHeaders, (__int64)&v85);
      v50 = (char *)v85;
      goto LABEL_152;
    }
    if ( v52 == 523 )
    {
      if ( NtHeaders->OptionalHeader.NumberOfRvaAndSizes )
      {
        v53 = NtHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
        if ( (_DWORD)v53 )
        {
          v72 = NtHeaders->OptionalHeader.DataDirectory[0].Size;
          if ( v48 || (unsigned int)v53 < NtHeaders->OptionalHeader.SizeOfHeaders )
          {
            v50 = &v49[v53];
            goto LABEL_68;
          }
          v50 = (char *)RtlAddressInSectionTable(NtHeaders, v49, v53);
          if ( v50 )
          {
            v51 = 0;
LABEL_152:
            if ( v51 >= 0 )
              goto LABEL_68;
          }
        }
      }
    }
    v50 = 0LL;
LABEL_68:
    if ( !v50 )
      goto LABEL_158;
    if ( v45 )
    {
      if ( (dword_180155A10 & 5) != 0 )
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          671,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          "Locating procedure \"%s\" by name\n",
          v45);
      v54 = 0;
      v55 = *((_DWORD *)v50 + 6) - 1;
      v56 = v55 / 2;
      if ( v55 < 0 )
      {
LABEL_154:
        if ( (dword_180155A10 & 3) != 0 )
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            1379,
            (unsigned int)"LdrpNameToOrdinal",
            1,
            "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
            v45,
            (const void *)v47);
        if ( (dword_180155A10 & 0x40) != 0 )
          __debugbreak();
LABEL_158:
        v27 = -1073741702;
        goto LABEL_91;
      }
      while ( 1 )
      {
        v57 = v45;
        v58 = v47 + *(unsigned int *)(v47 + *((unsigned int *)v50 + 8) + 4LL * v56) - (_QWORD)v45;
        while ( 1 )
        {
          v59 = *v57;
          if ( *v57 != v57[v58] )
            break;
          ++v57;
          if ( !v59 )
          {
            v60 = 0;
            goto LABEL_77;
          }
        }
        v60 = v59 < (unsigned int)v57[v58] ? -1 : 1;
LABEL_77:
        if ( !v60 )
          break;
        if ( v60 >= 0 )
          v54 = v56 + 1;
        else
          v55 = v56 - 1;
        v56 = (v55 + v54) / 2;
        if ( v55 < v54 )
          goto LABEL_154;
      }
      v61 = *(unsigned __int16 *)(v47 + *((unsigned int *)v50 + 9) + 2LL * v56);
    }
    else
    {
      v65 = Value;
      if ( (dword_180155A10 & 5) != 0 )
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          689,
          (unsigned int)"LdrpGetProcedureAddress",
          2,
          "Loading procedure 0x%lx by ordinal\n",
          Value);
      if ( !v65 )
      {
        v27 = -1073741811;
        goto LABEL_91;
      }
      v61 = v65 - *((_DWORD *)v50 + 4);
    }
    if ( v61 >= *((_DWORD *)v50 + 5) )
    {
      v27 = (v45 != 0LL) - 1073741512;
      goto LABEL_91;
    }
    i = (char *)(v47 + *(unsigned int *)(v47 + *((unsigned int *)v50 + 7) + 4LL * (int)v61));
    v93 = i;
    if ( i < v50 || i >= &v50[v72] )
      break;
    if ( ++v100 == 32 )
      goto LABEL_162;
  }
  v27 = 0;
  v62 = *(_QWORD *)(v46 + 48);
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
  {
    if ( v62 < *((_QWORD *)&xmmword_18016B4C0 + 1)
      || v62 >= *((_QWORD *)&xmmword_18016B4C0 + 1) + (unsigned __int64)(unsigned int)qword_18016B4D0 )
    {
      sub_180034A40(*(PVOID *)(v46 + 48));
    }
    else
    {
      v97 = xmmword_18016B4C0;
      v98 = qword_18016B4D0;
    }
    if ( *((_QWORD *)&v97 + 1) != v62 )
      __fastfail(0x18u);
  }
LABEL_91:
  if ( BaseAddress )
    RtlFreeHeap(HeapHandle, 0, BaseAddress);
  if ( v27 != 259 )
  {
    LOBYTE(v28) = v79;
    v13 = v87;
    v25 = v80;
    v16 = (char *)v71;
    v1 = a1;
    if ( v27 >= 0 )
    {
      v29 = (unsigned __int64)i;
      v26 = v81;
      goto LABEL_45;
    }
    v26 = v81;
LABEL_122:
    v29 = v70;
    goto LABEL_45;
  }
  return 0LL;
}
