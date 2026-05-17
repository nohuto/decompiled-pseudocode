/*
 * XREFs of sub_18001F54C @ 0x18001F54C
 * Callers:
 *     sub_18001F198 @ 0x18001F198 (sub_18001F198.c)
 *     sub_18001F314 @ 0x18001F314 (sub_18001F314.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F54C(unsigned __int16 a1, __int64 a2)
{
  if ( a1 >= *(_WORD *)(a2 + 26) )
    return a1 > *(_WORD *)(a2 + 26);
  else
    return 0xFFFFFFFFLL;
}
