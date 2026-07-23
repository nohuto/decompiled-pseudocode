/*
 * XREFs of DbgPrompt @ 0x1800DAF10
 * Callers:
 *     sub_1800D0B18 @ 0x1800D0B18 (sub_1800D0B18.c)
 *     RtlAssert @ 0x1800E6440 (RtlAssert.c)
 * Callees:
 *     sub_18009E510 @ 0x18009E510 (sub_18009E510.c)
 */

ULONG __cdecl DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Prompt[v3] );
  return sub_18009E510();
}
