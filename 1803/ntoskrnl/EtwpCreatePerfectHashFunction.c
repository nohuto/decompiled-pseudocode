/*
 * XREFs of EtwpCreatePerfectHashFunction @ 0x1407B187C
 * Callers:
 *     EtwpAllocateFilter @ 0x1407B10E0 (EtwpAllocateFilter.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpFillPerfectHashTable @ 0x1407B1A90 (EtwpFillPerfectHashTable.c)
 */

__int64 __fastcall EtwpCreatePerfectHashFunction(char a1, _WORD *a2, unsigned __int16 a3, _QWORD *a4)
{
  unsigned __int8 v4; // bl
  int v5; // ebp
  _WORD *v6; // r12
  unsigned __int16 v7; // r14
  char v8; // r15
  int v9; // r8d
  unsigned __int16 v10; // dx
  __int16 v11; // r13
  char v12; // r9
  unsigned __int16 v13; // r10
  _WORD *v14; // rax
  __int64 v15; // rcx
  _WORD *v16; // r8
  __int64 v17; // r11
  __int64 v18; // rcx
  char v19; // cl
  unsigned __int16 v20; // si
  unsigned __int16 v21; // ax
  unsigned __int16 v23; // di
  _BYTE *PoolWithTag; // rax
  __int64 v25; // rcx
  __int16 v27; // [rsp+34h] [rbp-264h] BYREF
  _WORD *v28; // [rsp+38h] [rbp-260h]
  _QWORD *v29; // [rsp+40h] [rbp-258h]
  _BYTE v30[2]; // [rsp+50h] [rbp-248h] BYREF
  _DWORD v31[127]; // [rsp+52h] [rbp-246h] BYREF

  v4 = 0;
  v5 = a3;
  v6 = a2;
  v28 = a2;
  v7 = 0;
  v29 = a4;
  v8 = 0;
  v9 = 1;
  v27 = 0;
  v10 = 1;
  v11 = 63;
  if ( v5 - 1 > 1 )
  {
    do
      v10 = (2 * v10) | 1;
    while ( v10 < v5 - 1 );
    if ( v10 > 0x40u )
      return 3221225473LL;
  }
LABEL_4:
  v12 = 0;
  while ( 1 )
  {
    v13 = 0;
    v14 = v31;
    v15 = 128LL;
    do
    {
      *v14 = -1;
      v14 += 2;
      --v15;
    }
    while ( v15 );
    if ( (_WORD)v5 )
    {
      v16 = v6;
      v17 = (unsigned __int16)v5;
      do
      {
        v18 = (unsigned __int16)(v10 & __ROR2__(*v16, v12));
        if ( LOWORD(v31[v18]) == 0xFFFF )
        {
          ++v13;
          LOWORD(v31[v18]) = *v16;
        }
        ++v16;
        --v17;
      }
      while ( v17 );
      v6 = v28;
      v9 = 1;
      v4 = 0;
    }
    v19 = v12;
    v20 = v10;
    if ( v13 <= v7 )
    {
      v19 = v8;
      v20 = v11;
    }
    v21 = v13;
    v8 = v19;
    if ( v13 <= v7 )
      v21 = v7;
    v7 = v21;
    if ( v13 == (_WORD)v5 )
      break;
    ++v12;
    v11 = v20;
    if ( (unsigned __int8)v12 >= 0x10u )
    {
      v10 = (2 * v10) | 1;
      if ( v10 <= 0x40u )
        goto LABEL_4;
      break;
    }
  }
  if ( !v21 )
    return 3221225473LL;
  LOBYTE(v9) = v19;
  v23 = EtwpFillPerfectHashTable((_DWORD)v6, (unsigned __int16)v5, v9, v20, (__int64)v30, (__int64)&v27);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(4 * v23 + 10), 0x46777445u);
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[1] = v8;
  *((_WORD *)PoolWithTag + 1) = v20;
  *((_WORD *)PoolWithTag + 2) = v23;
  *PoolWithTag = a1 != 0;
  if ( v23 )
  {
    do
    {
      v25 = v4++;
      *(_DWORD *)&PoolWithTag[4 * v25 + 6] = *(_DWORD *)&v30[4 * v25];
    }
    while ( v4 < v23 );
  }
  *v29 = PoolWithTag;
  return 0LL;
}
