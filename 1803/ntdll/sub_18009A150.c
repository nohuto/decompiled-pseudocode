/*
 * XREFs of sub_18009A150 @ 0x18009A150
 * Callers:
 *     sub_18009924C @ 0x18009924C (sub_18009924C.c)
 *     sub_1800996E8 @ 0x1800996E8 (sub_1800996E8.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 */

__int64 __fastcall sub_18009A150(unsigned __int16 a1, __int64 a2)
{
  int v3; // r9d
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r10
  unsigned __int16 *v6; // rax
  int v7; // eax

  if ( !a2 )
  {
    sub_18008B020();
    return 0xFFFFLL;
  }
  if ( a1 == 0xFFFF )
    return 0xFFFFLL;
  v3 = *(_DWORD *)(a2 + 24);
  if ( (v3 & 1) == 0 && (v3 & 0x82) != 0x80 )
    return 0xFFFFLL;
  v4 = *(_QWORD *)a2;
  v5 = *(_QWORD *)(a2 + 16) + 2LL;
  if ( *(_QWORD *)a2 < v5 )
  {
    if ( *(_DWORD *)(a2 + 8) || *(_DWORD *)(a2 + 36) < 2u )
      return 0xFFFFLL;
    *(_QWORD *)a2 = v5;
    v4 = v5;
  }
  v6 = (unsigned __int16 *)(v4 - 2);
  *(_QWORD *)a2 = v6;
  if ( (v3 & 0x40) != 0 )
  {
    if ( *v6 != a1 )
    {
      *(_QWORD *)a2 = v6 + 1;
      return 0xFFFFLL;
    }
  }
  else
  {
    *v6 = a1;
  }
  v7 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 8) += 2;
  *(_DWORD *)(a2 + 24) = v7 & 0xFFFFFFEE | 1;
  return a1;
}
