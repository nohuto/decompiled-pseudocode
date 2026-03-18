/*
 * XREFs of WbPopStackEntries @ 0x14045B590
 * Callers:
 *     sub_14045B538 @ 0x14045B538 (sub_14045B538.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     sub_140548560 @ 0x140548560 (sub_140548560.c)
 */

__int64 __fastcall WbPopStackEntries(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rbp
  _QWORD *v8; // rbx

  v3 = 0;
  if ( a3 <= -1 )
    a3 = *(_DWORD *)(a2 + 16);
  if ( (unsigned int)a3 > *(_DWORD *)(a2 + 16) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a3 > 0 )
  {
    v7 = (unsigned int)a3;
    do
    {
      v8 = (_QWORD *)(*(_QWORD *)(a2 + 24) + 32LL * (unsigned int)(*(_DWORD *)(a2 + 16) - 1));
      sub_140548560(a1, *v8);
      memset(v8, 0, 0x20uLL);
      --*(_DWORD *)(a2 + 16);
      --v7;
    }
    while ( v7 );
  }
  return v3;
}
