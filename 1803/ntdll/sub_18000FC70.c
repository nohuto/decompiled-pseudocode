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
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  unsigned __int64 v12; // r12
  bool v13; // bl
  unsigned __int64 v14; // rdi
  int v15; // eax
  __int16 v16; // ax
  __int64 v17; // rdx
  _DWORD *v18; // rdx
  char *v19; // r10
  unsigned __int64 v20; // r8
  unsigned int v21; // r9d
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // rdi
  unsigned __int64 *v25; // r14
  __int64 v26; // rax
  int v27; // r15d
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r14
  unsigned __int16 *v31; // rax
  int v32; // r8d
  int v33; // r11d
  int v34; // r10d
  unsigned __int8 *v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int8 v37; // cl
  int v38; // eax
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  char v43; // al
  __int64 v44; // rdi
  __int64 v45; // rdi
  _DWORD *v46; // [rsp+40h] [rbp-A8h]
  __int64 v47; // [rsp+48h] [rbp-A0h]
  __int64 v48; // [rsp+50h] [rbp-98h]
  unsigned __int64 *v49; // [rsp+50h] [rbp-98h]
  _DWORD *v50; // [rsp+58h] [rbp-90h] BYREF
  __int64 v51; // [rsp+60h] [rbp-88h]
  unsigned __int64 v52; // [rsp+68h] [rbp-80h]
  unsigned __int64 v53; // [rsp+70h] [rbp-78h]
  char *v54; // [rsp+78h] [rbp-70h]
  __int64 v55; // [rsp+80h] [rbp-68h]
  unsigned __int64 v56; // [rsp+88h] [rbp-60h]
  unsigned __int64 v57; // [rsp+90h] [rbp-58h]
  __int128 v58; // [rsp+98h] [rbp-50h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-40h]
  __int64 v61; // [rsp+F8h] [rbp+10h] BYREF
  unsigned int v62; // [rsp+100h] [rbp+18h] BYREF
  unsigned int v63; // [rsp+108h] [rbp+20h]

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 56);
  v51 = v2;
  v55 = *(_QWORD *)(v2 + 48);
  sub_18003BC9C(v55, v2 + 72, 5286LL);
  sub_18006B5B8(v1);
  v63 = 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)(v1 + 120);
    if ( v3 >= *(_DWORD *)(v1 + 96) )
    {
      v27 = sub_180050300(v1);
      if ( v27 >= 0 )
      {
        sub_18003BC9C(*(_QWORD *)(v2 + 48), v2 + 72, 5287LL);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
      goto LABEL_63;
    }
    v4 = v3;
    v5 = *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8LL * v3);
    v6 = v5;
    v47 = v5;
    v7 = *(_QWORD *)(v1 + 88);
    if ( v5 )
    {
      v8 = *(_QWORD *)(v5 + 176);
      if ( v8 )
      {
        if ( (*(_DWORD *)(v8 + 32) & 0x80000) == 0 && *(_QWORD *)(v8 + 56) != v5 )
        {
          v6 = *(_QWORD *)(v8 + 56);
          v47 = v6;
          *(_QWORD *)(v8 + 56) = v5;
          v7 = *(_QWORD *)(v1 + 88);
        }
      }
    }
    if ( *(_QWORD *)(v7 + 8LL * v3) != v6 )
    {
      sub_18006B460();
      *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8 * v4) = v6;
    }
    v9 = *(_QWORD *)(v1 + 128);
    v10 = *(unsigned int *)(v9 + 20 * v4);
    v48 = v55 + v10;
    v11 = v55 + *(unsigned int *)(v9 + 20 * v4 + 16);
    if ( !(_DWORD)v10 || (unsigned int)v10 > *(_DWORD *)(v2 + 64) )
      v48 = v55 + *(unsigned int *)(v9 + 20 * v4 + 16);
    if ( v6 )
      break;
LABEL_50:
    ++*(_DWORD *)(v1 + 120);
  }
  v12 = *(_QWORD *)(v6 + 48);
  v13 = 1;
  v14 = v12;
  v61 = 0LL;
  v46 = 0LL;
  v50 = 0LL;
  if ( (v12 & 3) != 0 )
  {
    v14 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
    v13 = (v12 & 1) == 0;
  }
  v15 = RtlImageNtHeaderEx(1LL, v14, 0LL, &v61);
  if ( !v61 )
  {
    v18 = 0LL;
LABEL_75:
    if ( v15 >= 0 )
      goto LABEL_20;
    goto LABEL_76;
  }
  v16 = *(_WORD *)(v61 + 24);
  if ( v16 == 267 )
  {
    v15 = sub_1800E4978(v14, v13, 0, (unsigned int)&v62, v61, (__int64)&v50);
    v18 = v50;
    v46 = v50;
    goto LABEL_75;
  }
  if ( v16 != 523 || !*(_DWORD *)(v61 + 132) || (v17 = *(unsigned int *)(v61 + 136), !(_DWORD)v17) )
  {
LABEL_76:
    v18 = 0LL;
    goto LABEL_19;
  }
  v62 = *(_DWORD *)(v61 + 140);
  if ( !v13 && (unsigned int)v17 >= *(_DWORD *)(v61 + 84) )
  {
    v18 = (_DWORD *)RtlAddressInSectionTable(v61, v14, (unsigned int)v17);
    v46 = v18;
    if ( v18 )
    {
      v15 = 0;
      goto LABEL_75;
    }
    goto LABEL_76;
  }
  v18 = (_DWORD *)(v14 + v17);
LABEL_19:
  v46 = v18;
LABEL_20:
  if ( !v18 )
  {
    v43 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2555,
        (unsigned int)"LdrpSnapModule",
        0,
        "DLL \"%wZ\" does not contain an export table\n",
        v47 + 72);
      v43 = dword_180156A70;
    }
    if ( (v43 & 0x10) != 0 )
      __debugbreak();
    v27 = -1073741701;
    goto LABEL_63;
  }
  if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
  {
    if ( v12 < *((_QWORD *)&xmmword_18016F4E0 + 1)
      || v12 >= *((_QWORD *)&xmmword_18016F4E0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4F0 )
    {
      sub_18000EF10(v12, (__int64 *)&v58);
      v18 = v46;
    }
    else
    {
      v58 = xmmword_18016F4E0;
      v59 = qword_18016F4F0;
    }
    v61 = *((_QWORD *)&v58 + 1);
    if ( *((_QWORD *)&v58 + 1) != v12 )
      __fastfail(0x18u);
  }
  v19 = (char *)v18 + v62;
  v54 = v19;
  v20 = v12 + (unsigned int)v18[7];
  v53 = v20;
  v21 = v18[6];
  LODWORD(v50) = v21;
  v22 = v12 + (unsigned int)v18[8];
  v52 = v22;
  v56 = v12 + (unsigned int)v18[9];
  v23 = 8LL * *(unsigned int *)(v1 + 124);
  v24 = (__int64 *)(v23 + v48);
  v25 = (unsigned __int64 *)(v23 + v11);
  while ( 1 )
  {
    v49 = v25;
    v26 = *v24;
    if ( !*v24 )
    {
      *(_DWORD *)(v1 + 124) = 0;
      v2 = v51;
      goto LABEL_50;
    }
    v27 = -1073741702;
    LODWORD(v61) = -1073741702;
    v28 = (unsigned __int64)v26 >> 63;
    v29 = -4530927LL;
    v30 = 0LL;
    if ( v26 < 0 )
    {
      v63 = (unsigned __int16)v26;
      v39 = (unsigned __int16)v26 - v18[4];
    }
    else
    {
      v31 = (unsigned __int16 *)(*(_QWORD *)(v51 + 48) + (unsigned int)v26);
      v30 = (unsigned __int64)(v31 + 1);
      v32 = *v31;
      v33 = 0;
      v34 = v21 - 1;
      if ( v32 >= v21 )
        v32 = v34 / 2;
      if ( v34 < 0 )
      {
LABEL_83:
        if ( (dword_180156A70 & 3) != 0 )
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            1487,
            (unsigned int)"LdrpNameToOrdinal",
            1,
            "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
            (const char *)v30,
            (const void *)v12);
        if ( (dword_180156A70 & 0x40) != 0 )
          __debugbreak();
        goto LABEL_46;
      }
      while ( 1 )
      {
        v35 = (unsigned __int8 *)v30;
        v36 = v12 + *(unsigned int *)(v22 + 4LL * v32) - v30;
        while ( 1 )
        {
          v37 = *v35;
          if ( *v35 != v35[v36] )
            break;
          ++v35;
          if ( !v37 )
          {
            v38 = 0;
            goto LABEL_36;
          }
        }
        v38 = v37 < v35[v36] ? -1 : 1;
LABEL_36:
        if ( !v38 )
          break;
        if ( v38 < 0 )
          v34 = v32 - 1;
        else
          v33 = v32 + 1;
        v32 = (v34 + v33) / 2;
        v22 = v52;
        if ( v34 < v33 )
          goto LABEL_83;
      }
      v39 = *(unsigned __int16 *)(v56 + 2LL * v32);
      v18 = v46;
      v20 = v53;
      v19 = v54;
    }
    if ( (unsigned int)v39 < v18[5] )
    {
      v40 = *(unsigned int *)(v20 + 4LL * v39);
      if ( (_DWORD)v40 )
      {
        v29 = v12 + v40;
        v27 = 0;
        LODWORD(v61) = 0;
        if ( v12 + v40 > (unsigned __int64)v18 && v29 < (unsigned __int64)v19 )
        {
          v41 = sub_1800103FC((char *)(v12 + v40));
          v27 = v41;
          LODWORD(v61) = v41;
          if ( v41 == 259 )
            return 0LL;
          if ( v41 >= 0 )
            v29 = v57;
        }
      }
    }
LABEL_46:
    if ( v27 < 0 )
      break;
    *v49 = v29;
    ++v24;
    v25 = v49 + 1;
    v1 = a1;
    ++*(_DWORD *)(a1 + 124);
    v18 = v46;
    v22 = v52;
    v21 = (unsigned int)v50;
    v20 = v53;
    v19 = v54;
  }
  if ( v27 == -1073741702 || v27 == -1073741515 )
  {
    v44 = v51;
    if ( (unsigned int)sub_18003FF10(*(wchar_t **)(v51 + 80)) || (unsigned int)sub_18003FF10(*(wchar_t **)(v47 + 80)) )
    {
      v45 = v44 + 72;
      sub_180043A08(v45, v47 + 72, 1, (unsigned int)&unk_1801146E8, 0);
      sub_180043A08(v45, v47 + 72, 1, (unsigned int)&unk_180123FC0, 1);
    }
    else
    {
      v45 = v44 + 72;
    }
    if ( (_BYTE)v28 )
    {
      v27 = -1073741512;
      v30 = v63;
    }
    else
    {
      v27 = -1073741511;
    }
    LODWORD(v61) = v27;
    sub_180042450(v45, v30, (unsigned int)v27);
    v1 = a1;
  }
  else
  {
    v1 = a1;
  }
LABEL_63:
  if ( *(_QWORD *)(v1 + 184) )
  {
    ZwUnmapViewOfSection(-1LL);
    *(_QWORD *)(v1 + 184) = 0LL;
  }
  if ( v27 < 0 )
    sub_180043B30((unsigned int)v27, 25LL, 0LL, v1);
  return (unsigned int)v27;
}
