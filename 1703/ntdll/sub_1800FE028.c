/*
 * XREFs of sub_1800FE028 @ 0x1800FE028
 * Callers:
 *     sub_18000ABAC @ 0x18000ABAC (sub_18000ABAC.c)
 *     sub_1800FEC20 @ 0x1800FEC20 (sub_1800FEC20.c)
 * Callees:
 *     sub_18000913C @ 0x18000913C (sub_18000913C.c)
 *     RtlRunOnceBeginInitialize @ 0x180028CF0 (RtlRunOnceBeginInitialize.c)
 *     sub_18010AA04 @ 0x18010AA04 (sub_18010AA04.c)
 */

__int64 __fastcall sub_1800FE028(volatile signed __int64 *a1, int a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  _BYTE *v6; // rsi
  __int64 *v7; // rbx
  _BYTE *i; // rdx
  __int64 *v9; // r14
  __int64 *j; // rcx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 *v13; // [rsp+28h] [rbp-18h]
  _BYTE *v14; // [rsp+30h] [rbp-10h]
  unsigned __int64 v17; // [rsp+98h] [rbp+58h] BYREF

  result = RtlRunOnceBeginInitialize(a1, 1, &v17);
  if ( (int)result >= 0 )
  {
    v5 = v17;
    v6 = *(_BYTE **)(v17 + 16);
    v7 = (__int64 *)v6;
    v14 = v6;
    v13 = (__int64 *)v6;
    while ( 1 )
    {
      if ( !v7 )
        goto LABEL_8;
      if ( (*v7 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      {
        v6 = v14;
        v7 = v13;
      }
      result = *v7;
      if ( (*v7 & 1) != 0 )
      {
LABEL_8:
        for ( i = v6 + 8; ; i += 8 )
        {
          if ( (unsigned __int64)i >= *(_QWORD *)(v5 + 16) + 8 * ((unsigned __int64)*(unsigned int *)(v5 + 12) >> 5) )
          {
            result = 0LL;
            goto LABEL_13;
          }
          if ( (*i & 1) == 0 )
            break;
        }
        v7 = *(__int64 **)i;
        v6 = i;
        v13 = *(__int64 **)i;
        result = *(_QWORD *)i;
        v14 = i;
      }
      else
      {
        v7 = (__int64 *)*v7;
        v13 = (__int64 *)result;
      }
LABEL_13:
      if ( !result )
        break;
      v9 = v7;
      if ( (*v7 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      {
        v6 = v14;
        v7 = v13;
      }
      for ( j = (__int64 *)v6; (*j & 1) == 0; j = (__int64 *)*j )
      {
        if ( (__int64 *)*j == v7 )
        {
          *j = *v7;
          --*(_DWORD *)(v5 + 8);
          *v7 |= 0x8000000000000002uLL;
          v7 = j;
          v13 = j;
          goto LABEL_23;
        }
      }
      v9 = 0LL;
      v6 = v14;
      v7 = v13;
LABEL_23:
      sub_18010AA04(&dword_18015C2B0, v9[2]);
      sub_18000913C((int)v9);
    }
    v11 = v17;
    v12 = *(_QWORD *)(v17 + 16);
    if ( v12 )
      result = sub_18000913C(v12);
    if ( a2 )
    {
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)(v5 + 16) = 0LL;
    }
    else
    {
      result = sub_18000913C(v11);
      if ( a3 )
        *a1 = 0LL;
    }
  }
  return result;
}
