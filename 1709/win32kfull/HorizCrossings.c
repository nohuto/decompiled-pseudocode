/*
 * XREFs of HorizCrossings @ 0x1C02C6E88
 * Callers:
 *     DoHorizDropout @ 0x1C02C69C4 (DoHorizDropout.c)
 *     DoVertDropout @ 0x1C02C6B58 (DoVertDropout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HorizCrossings(__int16 a1, int a2)
{
  unsigned int v3; // r9d
  int v4; // edx
  _WORD *v5; // r10
  __int16 *v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // r8
  unsigned int v9; // edx
  __int16 v10; // cx

  if ( a2 < dword_1C0334260 || a2 >= dword_1C033425C )
    return 0LL;
  v3 = 0;
  v4 = a2 - dword_1C0334260;
  v5 = *(_WORD **)(qword_1C0334278 + 8LL * v4);
  v6 = *(__int16 **)(qword_1C0334280 + 8LL * v4);
  v7 = *(_QWORD *)(qword_1C0334288 + 8LL * v4);
  if ( (unsigned __int64)v5 < v7 )
  {
    v8 = 2LL * (__int16)dword_1C0334352;
    do
    {
      v9 = v3 + 1;
      v10 = *v6;
      if ( *v5 != a1 )
        v9 = v3;
      v5 = (_WORD *)((char *)v5 + v8);
      v6 = (__int16 *)((char *)v6 + v8);
      v3 = v9 + 1;
      if ( v10 != a1 )
        v3 = v9;
    }
    while ( (unsigned __int64)v5 < v7 );
  }
  return v3;
}
