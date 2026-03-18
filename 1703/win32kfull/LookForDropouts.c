/*
 * XREFs of LookForDropouts @ 0x1C02CD128
 * Callers:
 *     fsc_FillBitMap @ 0x1C02CD5D4 (fsc_FillBitMap.c)
 * Callees:
 *     DoHorizDropout @ 0x1C02CCB94 (DoHorizDropout.c)
 *     DoVertDropout @ 0x1C02CCD38 (DoVertDropout.c)
 */

__int64 __fastcall LookForDropouts(__int64 a1, char a2)
{
  int v2; // r10d
  int v3; // esi
  __int64 v4; // r9
  int v5; // r13d
  __int64 v6; // r8
  __int16 **v7; // r14
  _WORD **v8; // r15
  unsigned __int64 *i; // rbp
  __int16 *v10; // rbx
  _WORD *v11; // rdi
  unsigned __int64 v12; // r12
  __int64 result; // rax
  __int64 v14; // rax
  int v15; // ebp
  int v16; // ecx
  int v17; // esi
  unsigned __int64 *v18; // r14
  __int16 **v19; // r15
  _WORD **v20; // r12
  unsigned __int64 v21; // r13
  __int16 *v22; // rbx
  _WORD *v23; // rdi
  __int64 v24; // rax
  char v26; // [rsp+78h] [rbp+10h]

  v26 = a2;
  v2 = dword_1C0338B44;
  v3 = 0;
  v4 = a1;
  v5 = dword_1C0338B44 - dword_1C0338B48;
  v6 = dword_1C0338B44 - dword_1C0338B40 - 1;
  v7 = (__int16 **)(qword_1C0338B58 + 8 * v6);
  v8 = (_WORD **)(qword_1C0338B60 + 8 * v6);
  for ( i = (unsigned __int64 *)(qword_1C0338B68 + 8 * v6); v3 < v5; ++v3 )
  {
    v10 = *v7--;
    v11 = *v8--;
    v12 = *i--;
    while ( (unsigned __int64)v10 < v12 )
    {
      if ( *v10 == *v11 )
      {
        result = DoHorizDropout(v10, (__int64)v11, v2 - v3 - 1, v4, a2);
        if ( (_DWORD)result )
          return result;
        v2 = dword_1C0338B44;
        a2 = v26;
        v4 = a1;
      }
      v14 = 2LL * (__int16)dword_1C0338C32;
      v10 = (__int16 *)((char *)v10 + v14);
      v11 = (_WORD *)((char *)v11 + v14);
    }
  }
  v15 = 0;
  v16 = dword_1C0338B28;
  v17 = dword_1C0338B2C - dword_1C0338B28;
  v18 = (unsigned __int64 *)qword_1C0338B98;
  v19 = (__int16 **)qword_1C0338BA8;
  v20 = (_WORD **)qword_1C0338BB0;
  if ( dword_1C0338B2C - dword_1C0338B28 > 0 )
  {
    while ( 1 )
    {
      v21 = *v18++;
      v22 = *v19++;
      v23 = *v20++;
      while ( 1 )
      {
        v24 = 2LL * (__int16)dword_1C0338C32;
        v22 = (__int16 *)((char *)v22 - v24);
        v23 = (_WORD *)((char *)v23 - v24);
        if ( (unsigned __int64)v22 < v21 )
          break;
        if ( *v22 == *v23 )
        {
          result = DoVertDropout(v22, (__int64)v23, v16 + v15, v4, a2);
          if ( (_DWORD)result )
            return result;
          v16 = dword_1C0338B28;
        }
        a2 = v26;
        v4 = a1;
      }
      if ( ++v15 >= v17 )
        break;
      a2 = v26;
      v4 = a1;
    }
  }
  return 0LL;
}
