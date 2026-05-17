/*
 * XREFs of sub_18000FA60 @ 0x18000FA60
 * Callers:
 *     sub_1800103FC @ 0x1800103FC (sub_1800103FC.c)
 *     sub_1800105FC @ 0x1800105FC (sub_1800105FC.c)
 *     sub_180081044 @ 0x180081044 (sub_180081044.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x1800782B0 (RtlAddressInSectionTable.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800E4978 @ 0x1800E4978 (sub_1800E4978.c)
 */

__int64 __fastcall sub_18000FA60(unsigned __int64 a1, const char *a2, int a3, char **a4)
{
  char *v4; // rbp
  bool v9; // bl
  unsigned __int64 v10; // rdi
  int v11; // eax
  __int16 v12; // ax
  __int64 v13; // rax
  int v14; // r13d
  char v15; // di
  int v16; // r10d
  int v17; // r9d
  int v18; // r8d
  const char *v19; // rcx
  signed __int64 v20; // rdx
  unsigned __int8 v21; // al
  int v22; // eax
  unsigned int v24; // esi
  char *v25; // rcx
  char *v26; // [rsp+40h] [rbp-38h] BYREF
  __int64 v27; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v9 = 1;
  v10 = a1;
  if ( (a1 & 3) != 0 )
  {
    v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v9 = (a1 & 1) == 0;
  }
  v11 = RtlImageNtHeaderEx(1LL, v10, 0LL, &v27);
  if ( !v27 )
  {
LABEL_45:
    if ( v11 >= 0 )
    {
      v14 = v27;
      goto LABEL_10;
    }
LABEL_42:
    v14 = v27;
LABEL_43:
    v4 = 0LL;
    goto LABEL_10;
  }
  v12 = *(_WORD *)(v27 + 24);
  if ( v12 == 267 )
  {
    v11 = sub_1800E4978(v10, v9, 0, (unsigned int)&v27, v27, (__int64)&v26);
    v4 = v26;
    goto LABEL_45;
  }
  if ( v12 != 523 )
    goto LABEL_42;
  if ( !*(_DWORD *)(v27 + 132) )
    goto LABEL_42;
  v13 = *(unsigned int *)(v27 + 136);
  if ( !(_DWORD)v13 )
    goto LABEL_42;
  v14 = *(_DWORD *)(v27 + 140);
  if ( v9 || (unsigned int)v13 < *(_DWORD *)(v27 + 84) )
  {
    v4 = (char *)(v10 + v13);
    goto LABEL_10;
  }
  v4 = (char *)RtlAddressInSectionTable(v27, v10, (unsigned int)v13);
  if ( !v4 )
    goto LABEL_43;
LABEL_10:
  if ( !v4 )
    return 3221225594LL;
  if ( a2 )
  {
    v15 = dword_180156A70;
    if ( (dword_180156A70 & 5) != 0 )
    {
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        758,
        (unsigned int)"LdrpGetProcedureAddress",
        2,
        "Locating procedure \"%s\" by name\n",
        a2);
      v15 = dword_180156A70;
    }
    v16 = 0;
    v17 = *((_DWORD *)v4 + 6) - 1;
    v18 = v17 / 2;
    if ( v17 >= 0 )
    {
      while ( 1 )
      {
        v19 = a2;
        v20 = a1 + *(unsigned int *)(a1 + *((unsigned int *)v4 + 8) + 4LL * v18) - (_QWORD)a2;
        while ( 1 )
        {
          v21 = *v19;
          if ( *v19 != v19[v20] )
            break;
          ++v19;
          if ( !v21 )
          {
            v22 = 0;
            goto LABEL_19;
          }
        }
        v22 = v21 < (unsigned int)v19[v20] ? -1 : 1;
LABEL_19:
        if ( !v22 )
          break;
        if ( v22 < 0 )
          v17 = v18 - 1;
        else
          v16 = v18 + 1;
        v18 = (v17 + v16) / 2;
        if ( v17 < v16 )
          goto LABEL_23;
      }
      v24 = *(unsigned __int16 *)(a1 + *((unsigned int *)v4 + 9) + 2LL * v18);
      goto LABEL_30;
    }
LABEL_23:
    if ( (v15 & 3) != 0 )
    {
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1487,
        (unsigned int)"LdrpNameToOrdinal",
        1,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        a2,
        (const void *)a1);
      v15 = dword_180156A70;
    }
    if ( (v15 & 0x40) != 0 )
      __debugbreak();
    return 3221225594LL;
  }
  if ( (dword_180156A70 & 5) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      776,
      (unsigned int)"LdrpGetProcedureAddress",
      2,
      "Loading procedure 0x%lx by ordinal\n",
      a3);
  if ( !a3 )
    return 3221225485LL;
  v24 = a3 - *((_DWORD *)v4 + 4);
LABEL_30:
  if ( v24 >= *((_DWORD *)v4 + 5) )
  {
    if ( a2 )
      return 3221225785LL;
    else
      return 3221225784LL;
  }
  else
  {
    v25 = (char *)(a1 + *(unsigned int *)(a1 + *((unsigned int *)v4 + 7) + 4LL * (int)v24));
    *a4 = v25;
    if ( v25 < v4 || v25 >= &v4[v14] )
      return 0LL;
    else
      return 3221226029LL;
  }
}
