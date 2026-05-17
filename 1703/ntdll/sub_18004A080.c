/*
 * XREFs of sub_18004A080 @ 0x18004A080
 * Callers:
 *     sub_1800498D0 @ 0x1800498D0 (sub_1800498D0.c)
 * Callees:
 *     sub_18004A198 @ 0x18004A198 (sub_18004A198.c)
 */

char __fastcall sub_18004A080(__int64 a1, __int64 a2)
{
  char v4; // r8
  __int64 v5; // rdi
  char v6; // bl
  int v7; // ebp
  int v8; // r12d
  int v9; // r14d
  int v10; // r15d
  int v12; // ecx

  if ( *(_BYTE *)a2 > 8u )
    return 0;
  if ( *(_BYTE *)a2 == 4 )
    return 0;
  v4 = *(_BYTE *)(a2 + 1);
  if ( (v4 & 0x10) == 0 )
    return 0;
  v5 = a1 + 8;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = (v4 & 2) != 0 ? *(_DWORD *)(a2 + 4) : 0;
  v10 = (v4 & 1) != 0 ? *(_DWORD *)(a2 + 4) : 0;
  if ( (v4 & 8) == 0 )
    v7 = *(_DWORD *)(a2 + 4);
  if ( *(unsigned __int16 *)(a1 + 4) - 1 > 0 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)v5 <= 8u
        && *(_BYTE *)v5 != 4
        && (*(_BYTE *)(v5 + 1) & 0x10) != 0
        && (unsigned __int8)sub_18004A198(v5, a2, 0LL, 0LL) )
      {
        v12 = *(_DWORD *)(v5 + 4);
        if ( (*(_BYTE *)(v5 + 1) & 2) != 0 )
          v9 &= ~v12;
        if ( (*(_BYTE *)(v5 + 1) & 1) != 0 )
          v10 &= ~v12;
        if ( (*(_BYTE *)(v5 + 1) & 8) == 0 )
          v7 &= ~v12;
        if ( !(v9 | v10 | v7) )
          break;
      }
      ++v8;
      v5 += *(unsigned __int16 *)(v5 + 2);
      if ( v8 >= *(unsigned __int16 *)(a1 + 4) - 1 )
        return v6;
    }
    return 1;
  }
  return v6;
}
