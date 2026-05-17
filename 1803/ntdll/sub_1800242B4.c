/*
 * XREFs of sub_1800242B4 @ 0x1800242B4
 * Callers:
 *     sub_180005BC4 @ 0x180005BC4 (sub_180005BC4.c)
 *     sub_1800241D0 @ 0x1800241D0 (sub_1800241D0.c)
 * Callees:
 *     memcmp @ 0x18008EED0 (memcmp.c)
 */

int __fastcall sub_1800242B4(__int64 a1, __int64 a2)
{
  int result; // eax
  unsigned __int16 v5; // cx

  result = memcmp(*(const void **)a1, (const void *)(a2 + 32), 0x10uLL);
  if ( !result )
  {
    v5 = *(_WORD *)(a2 + 96);
    if ( *(_WORD *)(a1 + 8) <= v5 )
    {
      if ( *(_WORD *)(a1 + 8) < v5 )
        return 1;
    }
    else
    {
      return -1;
    }
  }
  return result;
}
