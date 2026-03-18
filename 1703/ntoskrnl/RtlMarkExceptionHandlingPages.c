/*
 * XREFs of RtlMarkExceptionHandlingPages @ 0x1405128E0
 * Callers:
 *     MiCaptureImageExceptionValues @ 0x1404B6E10 (MiCaptureImageExceptionValues.c)
 * Callees:
 *     RtlpSearchFunctionTable @ 0x14001BE20 (RtlpSearchFunctionTable.c)
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlMarkExceptionHandlingPages(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        PRTL_BITMAP BitMapHeader)
{
  unsigned __int64 v6; // rbp
  unsigned int v8; // r15d
  __int64 v9; // rdi
  unsigned int *v10; // rbx
  int v11; // r14d
  _BYTE *v12; // rbx
  int v13; // eax
  bool v14; // zf
  unsigned int v15; // ecx
  __int64 v16; // rax
  unsigned int *v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  ULONG v21; // r8d
  unsigned __int64 v22; // [rsp+60h] [rbp+8h]

  v6 = a1 + a2;
  if ( a3 < a1 )
    return 3221225727LL;
  v22 = a4 + a3;
  if ( v22 > v6 )
    return 3221225727LL;
  v8 = a4 / 0xC;
  if ( a4 != 12 * (a4 / 0xCuLL) )
    return 3221225727LL;
  RtlSetBits(BitMapHeader, (a3 - a1) >> 12, ((a3 - a1 + a4 + 4095LL) >> 12) - ((a3 - a1) >> 12));
  v9 = 0LL;
  if ( !v8 )
    return 0LL;
LABEL_5:
  v10 = (unsigned int *)(a3 + 12 * v9);
  if ( (v10[2] & 1) != 0 )
  {
    do
    {
      v19 = v10[2];
      v20 = (unsigned __int64)v10;
      if ( (v19 & 1) != 0 )
      {
        v20 = v19 + a1 - 1;
        if ( a1 <= 0x7FFFFFFEFFFFLL && (v20 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      v10 = (unsigned int *)v20;
      if ( v20 >= a3 && v20 + 12 <= v22 )
        break;
      if ( v20 < a1 || v20 > v6 - 12 )
        return 3221225727LL;
      v21 = 1;
      if ( (unsigned __int64)(((_WORD)v20 - (_WORD)a1) & 0xFFF) + 12 > 0x1000 )
        v21 = 2;
      RtlSetBits(BitMapHeader, (v20 - a1) >> 12, v21);
    }
    while ( (*(_DWORD *)(v20 + 8) & 1) != 0 );
  }
  v11 = 0;
  while ( 1 )
  {
    v12 = (_BYTE *)(a1 + v10[2]);
    if ( (unsigned __int64)v12 < a1 || (unsigned __int64)(v12 + 6) > v6 )
      return 3221225727LL;
    v13 = (unsigned __int8)v12[2];
    v14 = (v13 & 1) == 0;
    v15 = 2 * v13 + 6;
    v16 = (unsigned int)(2 * v13 + 8);
    if ( v14 )
      v16 = v15;
    if ( (*v12 & 0x20) != 0 )
    {
      v16 = (unsigned int)(v16 + 12);
    }
    else if ( (*v12 & 0x18) != 0 )
    {
      v16 = (unsigned int)(v16 + 8);
    }
    if ( (unsigned __int64)&v12[v16] > v6 )
      return 3221225727LL;
    RtlSetBits(
      BitMapHeader,
      (unsigned __int64)&v12[-a1] >> 12,
      ((unsigned __int64)&v12[(unsigned int)v16 + 4095 - a1] >> 12) - ((unsigned __int64)&v12[-a1] >> 12));
    if ( (*v12 & 0x20) != 0 )
    {
      if ( (unsigned int)++v11 > 0x20 )
        return 3221225727LL;
      v10 = (unsigned int *)&v12[2 * (((unsigned __int8)v12[2] + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) + 4];
      v18 = RtlpSearchFunctionTable(a3, v8, a1 + *v10, a1);
      if ( !v18 || v18[2] != v10[2] )
        continue;
    }
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 < v8 )
      goto LABEL_5;
    return 0LL;
  }
}
