/*
 * XREFs of sub_18000FC70 @ 0x18000FC70
 * Callers:
 *     sub_180039100 @ 0x180039100 (sub_180039100.c)
 *     sub_1800426E8 @ 0x1800426E8 (sub_1800426E8.c)
 * Callees:
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     sub_1800103FC @ 0x1800103FC (sub_1800103FC.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     sub_18003FF10 @ 0x18003FF10 (sub_18003FF10.c)
 *     sub_180042450 @ 0x180042450 (sub_180042450.c)
 *     sub_180043A08 @ 0x180043A08 (sub_180043A08.c)
 *     sub_180043B30 @ 0x180043B30 (sub_180043B30.c)
 *     sub_180050300 @ 0x180050300 (sub_180050300.c)
 *     sub_18006B460 @ 0x18006B460 (sub_18006B460.c)
 *     sub_18006B5B8 @ 0x18006B5B8 (sub_18006B5B8.c)
 *     RtlAddressInSectionTable @ 0x1800782B0 (RtlAddressInSectionTable.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800D0B18 @ 0x1800D0B18 (sub_1800D0B18.c)
 *     sub_1800E4978 @ 0x1800E4978 (sub_1800E4978.c)
 */

__int64 __fastcall sub_18000FC70(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rdi
  unsigned int v3; // eax
  __int64 v4; // rbx
  unsigned __int64 *v5; // rcx
  unsigned __int64 *v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  unsigned __int64 v13; // r12
  bool v14; // bl
  char *v15; // rdi
  NTSTATUS v16; // eax
  WORD Magic; // ax
  __int64 VirtualAddress; // rdx
  char *v19; // rdx
  char *v20; // r10
  unsigned __int64 v21; // r8
  unsigned int v22; // r9d
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 *v25; // rdi
  unsigned __int64 *v26; // r14
  __int64 v27; // rax
  int v28; // r15d
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // r14
  unsigned __int16 *v32; // rax
  int v33; // r8d
  int v34; // r11d
  int v35; // r10d
  unsigned __int8 *v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int8 v38; // cl
  int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  void *v43; // rdx
  char v45; // al
  __int64 v46; // rdi
  __int64 v47; // rdi
  int NtHeaders; // [rsp+20h] [rbp-C8h]
  int NtHeadersa; // [rsp+20h] [rbp-C8h]
  __int64 v50; // [rsp+40h] [rbp-A8h]
  unsigned __int64 *v51; // [rsp+48h] [rbp-A0h]
  __int64 v52; // [rsp+50h] [rbp-98h]
  unsigned __int64 *v53; // [rsp+50h] [rbp-98h]
  __int64 v54; // [rsp+58h] [rbp-90h] BYREF
  __int64 v55; // [rsp+60h] [rbp-88h]
  unsigned __int64 v56; // [rsp+68h] [rbp-80h]
  unsigned __int64 v57; // [rsp+70h] [rbp-78h]
  char *v58; // [rsp+78h] [rbp-70h]
  __int64 v59; // [rsp+80h] [rbp-68h]
  unsigned __int64 v60; // [rsp+88h] [rbp-60h]
  unsigned __int64 v61; // [rsp+90h] [rbp-58h]
  __int128 v62; // [rsp+98h] [rbp-50h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-40h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+F8h] [rbp+10h] BYREF
  DWORD Size; // [rsp+100h] [rbp+18h]
  unsigned int v67; // [rsp+108h] [rbp+20h]

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 56);
  v55 = v2;
  v59 = *(_QWORD *)(v2 + 48);
  sub_18003BC9C(v59, v2 + 72, 5286LL);
  sub_18006B5B8(v1);
  v67 = 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)(v1 + 120);
    if ( v3 >= *(_DWORD *)(v1 + 96) )
    {
      v28 = sub_180050300(v1);
      if ( v28 >= 0 )
      {
        sub_18003BC9C(*(_QWORD *)(v2 + 48), v2 + 72, 5287LL);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
      goto LABEL_63;
    }
    v4 = v3;
    v5 = *(unsigned __int64 **)(*(_QWORD *)(v1 + 88) + 8LL * v3);
    v6 = v5;
    v51 = v5;
    v7 = *(_QWORD *)(v1 + 88);
    if ( v5 )
    {
      v8 = v5[22];
      if ( v8 )
      {
        if ( (*(_DWORD *)(v8 + 32) & 0x80000) == 0 && *(unsigned __int64 **)(v8 + 56) != v5 )
        {
          v6 = *(unsigned __int64 **)(v8 + 56);
          v51 = v6;
          *(_QWORD *)(v8 + 56) = v5;
          v7 = *(_QWORD *)(v1 + 88);
        }
      }
    }
    v9 = *(unsigned __int64 **)(v7 + 8LL * v3);
    if ( v9 != v6 )
    {
      sub_18006B460(v9);
      *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8 * v4) = v6;
    }
    v10 = *(_QWORD *)(v1 + 128);
    v11 = *(unsigned int *)(v10 + 20 * v4);
    v52 = v59 + v11;
    v12 = v59 + *(unsigned int *)(v10 + 20 * v4 + 16);
    if ( !(_DWORD)v11 || (unsigned int)v11 > *(_DWORD *)(v2 + 64) )
      v52 = v59 + *(unsigned int *)(v10 + 20 * v4 + 16);
    if ( v6 )
      break;
LABEL_50:
    ++*(_DWORD *)(v1 + 120);
  }
  v13 = v6[6];
  v14 = 1;
  v15 = (char *)v13;
  OutHeaders = 0LL;
  v50 = 0LL;
  v54 = 0LL;
  if ( (v13 & 3) != 0 )
  {
    v15 = (char *)(v13 & 0xFFFFFFFFFFFFFFFCuLL);
    v14 = (v13 & 1) == 0;
  }
  v16 = RtlImageNtHeaderEx(1u, v15, 0LL, &OutHeaders);
  if ( !OutHeaders )
  {
    v19 = 0LL;
LABEL_75:
    if ( v16 >= 0 )
      goto LABEL_20;
    goto LABEL_76;
  }
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic == 267 )
  {
    v16 = sub_1800E4978(v15, OutHeaders, (__int64)&v54);
    v19 = (char *)v54;
    v50 = v54;
    goto LABEL_75;
  }
  if ( Magic != 523
    || !OutHeaders->OptionalHeader.NumberOfRvaAndSizes
    || (VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress, !(_DWORD)VirtualAddress) )
  {
LABEL_76:
    v19 = 0LL;
    goto LABEL_19;
  }
  Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
  if ( !v14 && (unsigned int)VirtualAddress >= OutHeaders->OptionalHeader.SizeOfHeaders )
  {
    v19 = (char *)RtlAddressInSectionTable(OutHeaders, v15, VirtualAddress);
    v50 = (__int64)v19;
    if ( v19 )
    {
      v16 = 0;
      goto LABEL_75;
    }
    goto LABEL_76;
  }
  v19 = &v15[VirtualAddress];
LABEL_19:
  v50 = (__int64)v19;
LABEL_20:
  if ( !v19 )
  {
    v45 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2555,
        (unsigned int)"LdrpSnapModule",
        0,
        "DLL \"%wZ\" does not contain an export table\n",
        v51 + 9);
      v45 = dword_180156A70;
    }
    if ( (v45 & 0x10) != 0 )
      __debugbreak();
    v28 = -1073741701;
    goto LABEL_63;
  }
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    if ( v13 < *((_QWORD *)&xmmword_18016F4E0 + 1)
      || v13 >= *((_QWORD *)&xmmword_18016F4E0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4F0 )
    {
      sub_18000EF10((PVOID)v13, (__int64)&v62);
      v19 = (char *)v50;
    }
    else
    {
      v62 = xmmword_18016F4E0;
      v63 = qword_18016F4F0;
    }
    OutHeaders = (PIMAGE_NT_HEADERS)*((_QWORD *)&v62 + 1);
    if ( *((_QWORD *)&v62 + 1) != v13 )
      __fastfail(0x18u);
  }
  v20 = &v19[Size];
  v58 = v20;
  v21 = v13 + *((unsigned int *)v19 + 7);
  v57 = v21;
  v22 = *((_DWORD *)v19 + 6);
  LODWORD(v54) = v22;
  v23 = v13 + *((unsigned int *)v19 + 8);
  v56 = v23;
  v60 = v13 + *((unsigned int *)v19 + 9);
  v24 = 8LL * *(unsigned int *)(v1 + 124);
  v25 = (__int64 *)(v24 + v52);
  v26 = (unsigned __int64 *)(v24 + v12);
  while ( 1 )
  {
    v53 = v26;
    v27 = *v25;
    if ( !*v25 )
    {
      *(_DWORD *)(v1 + 124) = 0;
      v2 = v55;
      goto LABEL_50;
    }
    v28 = -1073741702;
    LODWORD(OutHeaders) = -1073741702;
    v29 = (unsigned __int64)v27 >> 63;
    v30 = -4530927LL;
    v31 = 0LL;
    if ( v27 < 0 )
    {
      v67 = (unsigned __int16)v27;
      v40 = (unsigned __int16)v27 - *((_DWORD *)v19 + 4);
    }
    else
    {
      v32 = (unsigned __int16 *)(*(_QWORD *)(v55 + 48) + (unsigned int)v27);
      v31 = (unsigned __int64)(v32 + 1);
      v33 = *v32;
      v34 = 0;
      v35 = v22 - 1;
      if ( v33 >= v22 )
        v33 = v35 / 2;
      if ( v35 < 0 )
      {
LABEL_83:
        if ( (dword_180156A70 & 3) != 0 )
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            1487,
            (unsigned int)"LdrpNameToOrdinal",
            1,
            "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
            (const char *)v31,
            (const void *)v13);
        if ( (dword_180156A70 & 0x40) != 0 )
          __debugbreak();
        goto LABEL_46;
      }
      while ( 1 )
      {
        v36 = (unsigned __int8 *)v31;
        v37 = v13 + *(unsigned int *)(v23 + 4LL * v33) - v31;
        while ( 1 )
        {
          v38 = *v36;
          if ( *v36 != v36[v37] )
            break;
          ++v36;
          if ( !v38 )
          {
            v39 = 0;
            goto LABEL_36;
          }
        }
        v39 = v38 < v36[v37] ? -1 : 1;
LABEL_36:
        if ( !v39 )
          break;
        if ( v39 < 0 )
          v35 = v33 - 1;
        else
          v34 = v33 + 1;
        v33 = (v35 + v34) / 2;
        v23 = v56;
        if ( v35 < v34 )
          goto LABEL_83;
      }
      v40 = *(unsigned __int16 *)(v60 + 2LL * v33);
      v19 = (char *)v50;
      v21 = v57;
      v20 = v58;
    }
    if ( (unsigned int)v40 < *((_DWORD *)v19 + 5) )
    {
      v41 = *(unsigned int *)(v21 + 4LL * v40);
      if ( (_DWORD)v41 )
      {
        v30 = v13 + v41;
        v28 = 0;
        LODWORD(OutHeaders) = 0;
        if ( v13 + v41 > (unsigned __int64)v19 && v30 < (unsigned __int64)v20 )
        {
          v42 = sub_1800103FC((char *)(v13 + v41));
          v28 = v42;
          LODWORD(OutHeaders) = v42;
          if ( v42 == 259 )
            return 0LL;
          if ( v42 >= 0 )
            v30 = v61;
        }
      }
    }
LABEL_46:
    if ( v28 < 0 )
      break;
    *v53 = v30;
    ++v25;
    v26 = v53 + 1;
    v1 = a1;
    ++*(_DWORD *)(a1 + 124);
    v19 = (char *)v50;
    v23 = v56;
    v22 = v54;
    v21 = v57;
    v20 = v58;
  }
  if ( v28 == -1073741702 || v28 == -1073741515 )
  {
    v46 = v55;
    if ( (unsigned int)sub_18003FF10(*(wchar_t **)(v55 + 80)) || (unsigned int)sub_18003FF10((wchar_t *)v51[10]) )
    {
      v47 = v46 + 72;
      LOBYTE(NtHeaders) = 0;
      sub_180043A08(v47, v51 + 9, 1LL, &unk_1801146E8, NtHeaders);
      LOBYTE(NtHeadersa) = 1;
      sub_180043A08(v47, v51 + 9, 1LL, &unk_180123FC0, NtHeadersa);
    }
    else
    {
      v47 = v46 + 72;
    }
    if ( (_BYTE)v29 )
    {
      v28 = -1073741512;
      v31 = v67;
    }
    else
    {
      v28 = -1073741511;
    }
    LODWORD(OutHeaders) = v28;
    sub_180042450(v47, v31, (unsigned int)v28);
    v1 = a1;
  }
  else
  {
    v1 = a1;
  }
LABEL_63:
  v43 = *(void **)(v1 + 184);
  if ( v43 )
  {
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v43);
    *(_QWORD *)(v1 + 184) = 0LL;
  }
  if ( v28 < 0 )
    sub_180043B30((unsigned int)v28, 25LL, 0LL, v1);
  return (unsigned int)v28;
}
