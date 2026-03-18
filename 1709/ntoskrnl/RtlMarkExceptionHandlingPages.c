/*
 * XREFs of RtlMarkExceptionHandlingPages @ 0x1404D0FC0
 * Callers:
 *     MiCaptureImageExceptionValues @ 0x140471A50 (MiCaptureImageExceptionValues.c)
 * Callees:
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     RtlpSearchFunctionTable @ 0x140143878 (RtlpSearchFunctionTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  char v17; // cl
  unsigned int *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  ULONG v22; // r8d
  unsigned __int64 v23; // [rsp+60h] [rbp+8h]

  v6 = a1 + a2;
  if ( a3 < a1 )
    return 3221225727LL;
  v23 = a4 + a3;
  if ( v23 > v6 )
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
      v20 = v10[2];
      v21 = (unsigned __int64)v10;
      if ( (v20 & 1) != 0 )
      {
        v21 = v20 + a1 - 1;
        if ( a1 <= 0x7FFFFFFEFFFFLL && (v21 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      v10 = (unsigned int *)v21;
      if ( v21 >= a3 && v21 + 12 <= v23 )
        break;
      if ( v21 < a1 || v21 > v6 - 12 )
        return 3221225727LL;
      v22 = 1;
      if ( (unsigned __int64)(((_WORD)v21 - (_WORD)a1) & 0xFFF) + 12 > 0x1000 )
        v22 = 2;
      RtlSetBits(BitMapHeader, (v21 - a1) >> 12, v22);
    }
    while ( (*(_DWORD *)(v21 + 8) & 1) != 0 );
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
    v17 = *v12 >> 3;
    if ( (v17 & 4) != 0 )
    {
      v16 = (unsigned int)(v16 + 12);
    }
    else if ( (v17 & 3) != 0 )
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
      v19 = RtlpSearchFunctionTable(a3, v8, a1 + *v10, a1);
      if ( !v19 || v19[2] != v10[2] )
        continue;
    }
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 < v8 )
      goto LABEL_5;
    return 0LL;
  }
}
