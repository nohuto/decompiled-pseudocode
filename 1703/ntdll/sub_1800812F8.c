/*
 * XREFs of sub_1800812F8 @ 0x1800812F8
 * Callers:
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800812F8(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        ++*(_DWORD *)(a1 + 596);
    }
    else
    {
      ++*(_DWORD *)(a1 + 592);
    }
  }
  else
  {
    ++*(_DWORD *)(a1 + 588);
    ++*(_DWORD *)(a1 + 584);
    if ( *(_BYTE *)(a1 + 386) != 2 )
    {
      if ( *(_DWORD *)(a1 + 584) < *(_DWORD *)(a1 + 588) )
      {
        *(_DWORD *)(a1 + 584) = 0;
        *(_DWORD *)(a1 + 588) = 0;
      }
      if ( *(_DWORD *)(a1 + 588) >= *(_DWORD *)(a1 + 584) >> 4 )
        *(_DWORD *)(a1 + 120) |= 0x20000000u;
    }
  }
}
