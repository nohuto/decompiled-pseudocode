/*
 * XREFs of sub_1800A4B20 @ 0x1800A4B20
 * Callers:
 *     sub_1800A3C94 @ 0x1800A3C94 (sub_1800A3C94.c)
 *     sub_1800A4118 @ 0x1800A4118 (sub_1800A4118.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 */

__int64 __fastcall sub_1800A4B20(unsigned __int16 a1, __int64 a2)
{
  int v3; // r9d
  unsigned __int64 v4; // rax
  unsigned __int16 *v5; // rax
  int v6; // eax

  if ( !a2 )
  {
    sub_180095DE0();
    return 0xFFFFLL;
  }
  if ( a1 == 0xFFFF )
    return 0xFFFFLL;
  v3 = *(_DWORD *)(a2 + 24);
  if ( (v3 & 1) == 0 && (v3 & 0x82) != 0x80 )
    return 0xFFFFLL;
  v4 = *(_QWORD *)(a2 + 16) + 2LL;
  if ( *(_QWORD *)a2 < v4 )
  {
    if ( *(_DWORD *)(a2 + 8) || *(_DWORD *)(a2 + 36) < 2u )
      return 0xFFFFLL;
    *(_QWORD *)a2 = v4;
  }
  *(_QWORD *)a2 -= 2LL;
  v5 = *(unsigned __int16 **)a2;
  if ( (v3 & 0x40) != 0 )
  {
    if ( *v5 != a1 )
    {
      *(_QWORD *)a2 = v5 + 1;
      return 0xFFFFLL;
    }
  }
  else
  {
    *v5 = a1;
  }
  v6 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 8) += 2;
  *(_DWORD *)(a2 + 24) = v6 & 0xFFFFFFEE | 1;
  return a1;
}
