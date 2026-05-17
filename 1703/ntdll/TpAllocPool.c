/*
 * XREFs of TpAllocPool @ 0x180010280
 * Callers:
 *     sub_180018508 @ 0x180018508 (sub_180018508.c)
 * Callees:
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall TpAllocPool(__int64 a1, __int64 a2)
{
  if ( a1 && !a2 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return sub_1800115C8(a1, 0LL);
  sub_1801058B8();
  return 3221225485LL;
}
