/*
 * XREFs of sub_18008BEF4 @ 0x18008BEF4
 * Callers:
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008BEF4(__int64 a1)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  char v6; // cl

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    ++*(_DWORD *)(a1 + 608);
    v2 = *(_DWORD *)(a1 + 616);
    if ( *(_DWORD *)(a1 + 608) > v2 )
    {
      v4 = *(_QWORD *)(a1 + 192);
      *(_DWORD *)(a1 + 608) = 0;
      v5 = *(_QWORD *)(a1 + 544) - 16 * v4;
      if ( v5 > *(_QWORD *)(a1 + 640) )
        *(_QWORD *)(a1 + 640) = v5;
      *(_QWORD *)(a1 + 648) = v5;
    }
    ++*(_DWORD *)(a1 + 620);
    result = 4096LL;
    if ( *(_DWORD *)(a1 + 620) >= 0x1000u )
    {
      if ( *(_BYTE *)(a1 + 386) != 2 || (v6 = 4, *(_DWORD *)(a1 + 624) <= 0x10u) )
        v6 = 8;
      result = 4096 >> v6;
      if ( *(_DWORD *)(a1 + 612) > (unsigned int)result && v2 < 0x10000 )
      {
        result = 2 * v2;
        *(_DWORD *)(a1 + 616) = result;
      }
      *(_DWORD *)(a1 + 612) = 0;
      *(_DWORD *)(a1 + 620) = 0;
    }
  }
  return result;
}
