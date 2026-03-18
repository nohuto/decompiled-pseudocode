/*
 * XREFs of sub_14050F6D0 @ 0x14050F6D0
 * Callers:
 *     sub_14050EE10 @ 0x14050EE10 (sub_14050EE10.c)
 *     sub_140584440 @ 0x140584440 (sub_140584440.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     sub_14050F8B4 @ 0x14050F8B4 (sub_14050F8B4.c)
 */

__int64 __fastcall sub_14050F6D0(__int64 a1, __int64 a2, int a3)
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
      sub_14050F8B4(a1, *v7);
      memset(v7, 0, 0x20uLL);
      --*(_DWORD *)(a2 + 16);
      --v6;
    }
    while ( v6 );
  }
  return v3;
}
