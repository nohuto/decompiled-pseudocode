/*
 * XREFs of PopEtAppIdDereference @ 0x1406D0D30
 * Callers:
 *     PoEnergyContextCleanup @ 0x140498B70 (PoEnergyContextCleanup.c)
 *     PopEtAggregateKeyCleanup @ 0x1406D0BBC (PopEtAggregateKeyCleanup.c)
 *     PopEtGetProcessAppId @ 0x1406D27C0 (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x1406EF188 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 24);
  if ( (_WORD)result )
    return RtlInternEntryDereference(PopEtGlobals + 56);
  return result;
}
