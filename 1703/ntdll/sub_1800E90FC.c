/*
 * XREFs of sub_1800E90FC @ 0x1800E90FC
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x1800E7AF0 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     sub_1800E8F20 @ 0x1800E8F20 (sub_1800E8F20.c)
 */

char __fastcall sub_1800E90FC(__int64 a1)
{
  __int64 v3; // rsi
  unsigned int v4; // edi

  if ( a1 && *(_WORD *)a1 == 1 && !*(_WORD *)(a1 + 2) && *(_DWORD *)(a1 + 4) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = 0;
    while ( sub_1800E8F20(v3) )
    {
      ++v4;
      v3 += 32LL;
      if ( v4 >= *(_DWORD *)(a1 + 4) )
        return 1;
    }
  }
  return 0;
}
