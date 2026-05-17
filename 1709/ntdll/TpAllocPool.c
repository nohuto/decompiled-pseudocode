/*
 * XREFs of TpAllocPool @ 0x18000A460
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x180035C94 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocPool(__int64 a1, __int64 a2)
{
  if ( a1 && !a2 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return TpAllocPoolInternal(a1, 0LL);
  TppRaiseInvalidParameter();
  return 3221225485LL;
}
