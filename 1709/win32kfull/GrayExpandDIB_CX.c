/*
 * XREFs of GrayExpandDIB_CX @ 0x1C02461B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GrayExpandDIB_CX(__int128 *a1, char *a2, _BYTE *a3, __int64 a4, int a5)
{
  __int64 result; // rax
  char v8; // al
  char v9; // cl
  unsigned __int8 *v10; // r10
  unsigned __int8 *v11; // rdx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // r10
  unsigned __int8 v15; // bl
  int v16; // ecx
  char v17; // cl
  __int64 v18; // r10
  __int64 *v19; // r10
  _BYTE *v20; // r14
  __int64 v21; // rax
  unsigned __int16 v22; // r9
  unsigned __int8 v23; // r8
  int v24; // ecx
  int v25; // r8d
  __int128 v26; // [rsp+10h] [rbp-F0h]
  __int128 v27; // [rsp+30h] [rbp-D0h]
  __int64 v28; // [rsp+100h] [rbp+0h]

  v26 = *a1;
  v27 = a1[2];
  result = 0LL;
  v28 = 0LL;
  if ( a2 )
  {
    v8 = a2[(int)v26 - 1];
    a2[(int)v26] = v8;
    a2[(int)v26 + 1] = v8;
    a2[(int)v26 + 2] = v8;
    v9 = *a2;
    BYTE5(v28) = *a2;
    v10 = (unsigned __int8 *)&a2[BYTE8(v26) & 1];
    v11 = v10 + 1;
    BYTE6(v28) = *v10;
    v12 = WORD6(v26) >> 4;
    v13 = BYTE12(v26) & 0xF;
    if ( !v13 && v12 )
    {
      BYTE6(v28) = v9;
      v13 = 1;
      --v12;
      v11 = v10;
    }
    v14 = (unsigned int)(4 - v13);
    while ( v13 )
    {
      --v13;
      v15 = *v11++;
      LODWORD(v28) = *(_DWORD *)((char *)&v28 + 1);
      WORD2(v28) = *(_WORD *)((char *)&v28 + 5);
      BYTE6(v28) = v15;
      if ( (BYTE8(v26) & 4) != 0 )
      {
        BYTE3(v28) = BYTE5(v28);
      }
      else
      {
        v16 = (6 * BYTE5(v28) - BYTE4(v28) - v15) >> 2;
        if ( (v16 & 0xFF00) != 0 )
          LOBYTE(v16) = ~HIBYTE(v16);
        BYTE3(v28) = v16;
      }
    }
    v17 = *((_BYTE *)&v28 + v14);
    v18 = (unsigned int)(v14 - 1);
    HIBYTE(v28) = v17;
    if ( v12 )
    {
      while ( 1 )
      {
        *((_BYTE *)&v28 + v18) = v17;
        v18 = (unsigned int)(v18 - 1);
        if ( !--v12 )
          break;
        v17 = HIBYTE(v28);
      }
    }
    v19 = (__int64 *)*((_QWORD *)&v27 + 1);
    v20 = (_BYTE *)(a5 + a4);
    do
    {
      v21 = *v19++;
      v22 = v21;
      if ( (v21 & 0x8000u) != 0LL )
      {
        v23 = *v11++;
        LODWORD(v28) = *(_DWORD *)((char *)&v28 + 1);
        WORD2(v28) = *(_WORD *)((char *)&v28 + 5);
        BYTE6(v28) = v23;
        if ( (BYTE8(v26) & 4) != 0 )
        {
          BYTE3(v28) = BYTE5(v28);
        }
        else
        {
          v24 = (6 * BYTE5(v28) - BYTE4(v28) - v23) >> 2;
          if ( (v24 & 0xFF00) != 0 )
            LOBYTE(v24) = ~HIBYTE(v24);
          BYTE3(v28) = v24;
        }
        v22 = v21 & 0x3FFF;
      }
      v25 = BYTE3(v28) * HIWORD(v21);
      if ( WORD2(v21) )
      {
        v25 += WORD2(v21) * BYTE2(v28);
        if ( WORD1(v21) )
        {
          v25 += WORD1(v21) * BYTE1(v28);
          if ( v22 )
            v25 += (unsigned __int8)v28 * v22;
        }
      }
      result = (unsigned int)(v25 + 4096) >> 13;
      *a3 = result;
      a3 += a5;
    }
    while ( a3 != v20 );
  }
  return result;
}
