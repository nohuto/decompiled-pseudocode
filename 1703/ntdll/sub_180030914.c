/*
 * XREFs of sub_180030914 @ 0x180030914
 * Callers:
 *     sub_18003076C @ 0x18003076C (sub_18003076C.c)
 *     sub_1800874C4 @ 0x1800874C4 (sub_1800874C4.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 * Callees:
 *     sub_1800306B8 @ 0x1800306B8 (sub_1800306B8.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007FD90 (RtlAddressInSectionTable.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800E9728 @ 0x1800E9728 (sub_1800E9728.c)
 */

__int64 __fastcall sub_180030914(unsigned __int64 a1, const char *a2, int a3, _QWORD *a4)
{
  bool v5; // si
  unsigned __int64 v9; // rbp
  _DWORD *v10; // rbx
  int v11; // eax
  int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // r12d
  int v15; // edi
  _BYTE *v16; // rcx
  _DWORD *v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v5 = 1;
  v9 = a1;
  v10 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v9 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v5 = (a1 & 1) == 0;
  }
  v11 = RtlImageNtHeaderEx(1LL, v9, 0LL, &v19);
  v12 = 0;
  if ( !v19 )
  {
LABEL_34:
    if ( v11 >= 0 )
    {
      v14 = v19;
      goto LABEL_10;
    }
    goto LABEL_26;
  }
  if ( *(_WORD *)(v19 + 24) == 267 )
  {
    LOBYTE(v12) = v5;
    v11 = sub_1800E9728(v9, v12, 0, (unsigned int)&v19, v19, (__int64)&v18);
    v10 = v18;
    goto LABEL_34;
  }
  if ( *(_WORD *)(v19 + 24) != 523 )
  {
    v11 = -1073741811;
    goto LABEL_34;
  }
  if ( !*(_DWORD *)(v19 + 132) || (v13 = *(unsigned int *)(v19 + 136), !(_DWORD)v13) )
  {
LABEL_26:
    v14 = v19;
LABEL_27:
    v10 = 0LL;
    goto LABEL_10;
  }
  v14 = *(_DWORD *)(v19 + 140);
  if ( v5 || (unsigned int)v13 < *(_DWORD *)(v19 + 84) )
  {
    v10 = (_DWORD *)(v13 + v9);
    goto LABEL_10;
  }
  v10 = (_DWORD *)RtlAddressInSectionTable(v19, v9, (unsigned int)v13);
  if ( !v10 )
    goto LABEL_27;
LABEL_10:
  if ( !v10 )
    return 3221225594LL;
  if ( a2 )
  {
    if ( (dword_180155A10 & 5) != 0 )
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        671,
        (unsigned int)"LdrpGetProcedureAddress",
        2,
        "Locating procedure \"%s\" by name\n",
        a2);
    v15 = sub_1800306B8(a2, -1, (_BYTE *)a1, v10[6], a1 + (unsigned int)v10[8], a1 + (unsigned int)v10[9]);
    if ( v15 >= 0 )
      goto LABEL_15;
    return 3221225594LL;
  }
  if ( (dword_180155A10 & 5) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      689,
      (unsigned int)"LdrpGetProcedureAddress",
      2,
      "Loading procedure 0x%lx by ordinal\n",
      a3);
  if ( !a3 )
    return 3221225485LL;
  v15 = a3 - v10[4];
LABEL_15:
  if ( (unsigned int)v15 >= v10[5] )
    return (unsigned int)(a2 != 0LL) - 1073741512;
  v16 = (_BYTE *)(a1 + *(unsigned int *)(a1 + (unsigned int)v10[7] + 4LL * v15));
  *a4 = v16;
  if ( v16 < (_BYTE *)v10 || v16 >= (_BYTE *)v10 + v14 )
    return 0LL;
  else
    return 3221226029LL;
}
