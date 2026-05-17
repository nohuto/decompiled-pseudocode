/*
 * XREFs of sub_1800366B4 @ 0x1800366B4
 * Callers:
 *     sub_1800353C4 @ 0x1800353C4 (sub_1800353C4.c)
 *     sub_180036554 @ 0x180036554 (sub_180036554.c)
 * Callees:
 *     sub_180036758 @ 0x180036758 (sub_180036758.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_1800366B4(__int64 a1, _WORD *a2, char a3, _DWORD *a4)
{
  int v8; // eax
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // r14
  unsigned __int16 v14; // cx
  __int64 v15; // rax

  v8 = sub_180036758();
  LODWORD(v9) = v8;
  if ( a4 )
    *a4 = 0;
  if ( v8 >= 0 )
    return (unsigned int)v9;
  if ( a1 && a2 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a2[v11] );
    v12 = *(unsigned __int16 *)(a1 + 10);
    v13 = v11 + 1;
    if ( v11 + 1 + v12 > (unsigned __int64)*(unsigned __int16 *)(a1 + 8) )
    {
      if ( a4 )
        *a4 = v13;
    }
    else if ( a3 )
    {
      v14 = *(_WORD *)(a1 + 6);
      if ( v14 < *(_WORD *)(a1 + 4) && is_mul_ok(v13, 2uLL) )
      {
        v9 = v14;
        *(_WORD *)(a1 + 6) = v14 + 1;
        *(_WORD *)(a1 + 10) = v12 + 1;
        memmove((void *)(*(_QWORD *)(a1 + 24) + 2LL * (__int16)v12), a2, 2 * v13);
        v15 = *(_QWORD *)(a1 + 16);
        *(_WORD *)(a1 + 10) += v13;
        *(_WORD *)(v15 + 2 * v9) = v12;
        return (unsigned int)v9;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
