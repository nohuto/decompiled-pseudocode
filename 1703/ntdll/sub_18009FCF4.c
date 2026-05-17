/*
 * XREFs of sub_18009FCF4 @ 0x18009FCF4
 * Callers:
 *     sub_18009EF60 @ 0x18009EF60 (sub_18009EF60.c)
 *     sub_18009F290 @ 0x18009F290 (sub_18009F290.c)
 *     sub_1800A2584 @ 0x1800A2584 (sub_1800A2584.c)
 *     sub_1800A28A4 @ 0x1800A28A4 (sub_1800A28A4.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_18009FD98 @ 0x18009FD98 (sub_18009FD98.c)
 */

__int64 __fastcall sub_18009FCF4(int a1, __int64 a2)
{
  unsigned __int8 v3; // di
  int v5; // eax
  unsigned __int8 *v6; // rax

  v3 = a1;
  if ( !a2 )
  {
    sub_180095DE0();
    return 0xFFFFFFFFLL;
  }
  if ( a1 == -1 )
    return 0xFFFFFFFFLL;
  v5 = *(_DWORD *)(a2 + 24);
  if ( (v5 & 1) == 0 && (v5 & 0x82) != 0x80 )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a2 + 16) )
    sub_18009FD98(a2);
  if ( *(_QWORD *)a2 == *(_QWORD *)(a2 + 16) )
  {
    if ( *(_DWORD *)(a2 + 8) )
      return 0xFFFFFFFFLL;
    ++*(_QWORD *)a2;
  }
  v6 = (unsigned __int8 *)--*(_QWORD *)a2;
  if ( (*(_BYTE *)(a2 + 24) & 0x40) != 0 )
  {
    if ( *v6 != v3 )
    {
      *(_QWORD *)a2 = v6 + 1;
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    *v6 = v3;
  }
  ++*(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 24) &= ~0x10u;
  *(_DWORD *)(a2 + 24) |= 1u;
  return v3;
}
