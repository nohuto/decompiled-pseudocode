/*
 * XREFs of sub_18001B9D8 @ 0x18001B9D8
 * Callers:
 *     sub_18001A6A8 @ 0x18001A6A8 (sub_18001A6A8.c)
 *     sub_18001B91C @ 0x18001B91C (sub_18001B91C.c)
 * Callees:
 *     memcmp @ 0x180099A70 (memcmp.c)
 */

int __fastcall sub_18001B9D8(__int64 a1, __int64 a2)
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
