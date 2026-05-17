/*
 * XREFs of DbgPrompt @ 0x1800E1340
 * Callers:
 *     sub_180004D78 @ 0x180004D78 (sub_180004D78.c)
 *     RtlAssert @ 0x1800EAE80 (RtlAssert.c)
 * Callees:
 *     sub_1800A8D40 @ 0x1800A8D40 (sub_1800A8D40.c)
 */

__int64 __fastcall DbgPrompt(__int64 a1)
{
  __int64 v1; // rax

  v1 = -1LL;
  do
    ++v1;
  while ( *(_BYTE *)(a1 + v1) );
  return sub_1800A8D40();
}
