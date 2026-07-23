/*
 * XREFs of DbgPrompt @ 0x1800E1340
 * Callers:
 *     sub_180004D78 @ 0x180004D78 (sub_180004D78.c)
 *     RtlAssert @ 0x1800EAE80 (RtlAssert.c)
 * Callees:
 *     sub_1800A8D40 @ 0x1800A8D40 (sub_1800A8D40.c)
 */

ULONG __cdecl DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Prompt[v3] );
  return sub_1800A8D40();
}
