/*
 * XREFs of DbgPrompt @ 0x1800DAF10
 * Callers:
 *     sub_1800D0B18 @ 0x1800D0B18 (sub_1800D0B18.c)
 *     RtlAssert @ 0x1800E6440 (RtlAssert.c)
 * Callees:
 *     sub_18009E510 @ 0x18009E510 (sub_18009E510.c)
 */

__int64 __fastcall DbgPrompt(__int64 a1)
{
  __int64 v1; // rax

  v1 = -1LL;
  do
    ++v1;
  while ( *(_BYTE *)(a1 + v1) );
  return sub_18009E510();
}
