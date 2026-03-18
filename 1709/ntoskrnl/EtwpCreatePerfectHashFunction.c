/*
 * XREFs of EtwpCreatePerfectHashFunction @ 0x140750BA8
 * Callers:
 *     EtwpAllocateFilter @ 0x140750414 (EtwpAllocateFilter.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpFillPerfectHashTable @ 0x140750DA4 (EtwpFillPerfectHashTable.c)
 */

__int64 __fastcall EtwpCreatePerfectHashFunction(char a1, _WORD *a2, unsigned __int16 a3, _QWORD *a4)
{
  unsigned __int8 v4; // bl
  _WORD *v6; // r10
  _QWORD *v7; // r13
  unsigned __int16 v8; // bp
  int v9; // ecx
  char v10; // r15
  unsigned __int16 v11; // r12
  unsigned __int16 v12; // dx
  char v13; // cl
  int v14; // r8d
  _WORD *v15; // rax
  __int64 v16; // r9
  _WORD *v17; // r9
  __int64 v18; // r11
  __int64 v19; // r10
  unsigned __int16 v21; // di
  _BYTE *PoolWithTag; // rax
  __int64 v23; // rcx
  __int16 v25; // [rsp+34h] [rbp-264h] BYREF
  _WORD *v26; // [rsp+38h] [rbp-260h]
  _QWORD *v27; // [rsp+40h] [rbp-258h]
  _BYTE v28[2]; // [rsp+50h] [rbp-248h] BYREF
  _DWORD v29[127]; // [rsp+52h] [rbp-246h] BYREF

  v4 = 0;
  v6 = a2;
  v26 = a2;
  v7 = a4;
  v27 = a4;
  v8 = 0;
  v25 = 0;
  v9 = a3 - 1;
  v10 = 0;
  v11 = 63;
  v12 = 1;
  if ( v9 > 1 )
  {
    do
      v12 = (2 * v12) | 1;
    while ( v12 < v9 );
    if ( v12 > 0x40u )
      return 3221225473LL;
  }
LABEL_4:
  v13 = 0;
  while ( 1 )
  {
    v14 = 0;
    v15 = v29;
    v16 = 128LL;
    do
    {
      *v15 = -1;
      v15 += 2;
      --v16;
    }
    while ( v16 );
    if ( a3 )
    {
      v17 = v6;
      v18 = a3;
      do
      {
        v19 = (unsigned __int16)(v12 & __ROR2__(*v17, v13));
        if ( LOWORD(v29[v19]) == 0xFFFF )
        {
          LOWORD(v14) = v14 + 1;
          LOWORD(v29[v19]) = *v17;
        }
        ++v17;
        --v18;
      }
      while ( v18 );
      v7 = v27;
      v6 = v26;
      v4 = 0;
      if ( (unsigned __int16)v14 > v8 )
      {
        v8 = v14;
        v10 = v13;
        v11 = v12;
      }
    }
    if ( (_WORD)v14 == a3 )
      break;
    if ( (unsigned __int8)++v13 >= 0x10u )
    {
      v12 = (2 * v12) | 1;
      if ( v12 <= 0x40u )
        goto LABEL_4;
      break;
    }
  }
  if ( !v8 )
    return 3221225473LL;
  LOBYTE(v14) = v10;
  v21 = EtwpFillPerfectHashTable((_DWORD)v6, a3, v14, v11, (__int64)v28, (__int64)&v25);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(4 * v21 + 10), 0x46777445u);
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[1] = v10;
  *((_WORD *)PoolWithTag + 1) = v11;
  *((_WORD *)PoolWithTag + 2) = v21;
  *PoolWithTag = a1 != 0;
  if ( v21 )
  {
    do
    {
      v23 = v4++;
      *(_DWORD *)&PoolWithTag[4 * v23 + 6] = *(_DWORD *)&v28[4 * v23];
    }
    while ( v4 < v21 );
  }
  *v7 = PoolWithTag;
  return 0LL;
}
