/*
 * XREFs of sub_140502134 @ 0x140502134
 * Callers:
 *     sub_140502058 @ 0x140502058 (sub_140502058.c)
 *     sub_14059E238 @ 0x14059E238 (sub_14059E238.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     sub_140502354 @ 0x140502354 (sub_140502354.c)
 */

__int64 __fastcall sub_140502134(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v6; // rbp
  _QWORD *v7; // rbx

  v3 = 0;
  if ( a3 <= -1 )
    a3 = *(_DWORD *)(a2 + 16);
  if ( (unsigned int)a3 > *(_DWORD *)(a2 + 16) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a3 > 0 )
  {
    v6 = (unsigned int)a3;
    do
    {
      v7 = (_QWORD *)(*(_QWORD *)(a2 + 24) + 32LL * (unsigned int)(*(_DWORD *)(a2 + 16) - 1));
      sub_140502354(a1, *v7);
      memset(v7, 0, 0x20uLL);
      --*(_DWORD *)(a2 + 16);
      --v6;
    }
    while ( v6 );
  }
  return v3;
}
