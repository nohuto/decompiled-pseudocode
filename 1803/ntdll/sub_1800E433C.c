/*
 * XREFs of sub_1800E433C @ 0x1800E433C
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x1800E2820 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     sub_1800E4160 @ 0x1800E4160 (sub_1800E4160.c)
 */

char __fastcall sub_1800E433C(__int64 a1)
{
  __int64 v3; // rsi
  unsigned int v4; // edi

  if ( a1 && *(_WORD *)a1 == 1 && !*(_WORD *)(a1 + 2) && *(_DWORD *)(a1 + 4) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = 0;
    while ( sub_1800E4160(v3) )
    {
      ++v4;
      v3 += 32LL;
      if ( v4 >= *(_DWORD *)(a1 + 4) )
        return 1;
    }
  }
  return 0;
}
