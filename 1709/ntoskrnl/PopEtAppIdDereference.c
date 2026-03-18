/*
 * XREFs of PopEtAppIdDereference @ 0x140458834
 * Callers:
 *     PopEtAggregateKeyCleanup @ 0x14045876C (PopEtAggregateKeyCleanup.c)
 *     PopEtGetProcessAppId @ 0x140458AB8 (PopEtGetProcessAppId.c)
 *     PoEnergyContextCleanup @ 0x1404FC9BC (PoEnergyContextCleanup.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x140458864 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 24);
  if ( (_WORD)result )
    return RtlInternEntryDereference(PopEtGlobals + 56, a1);
  return result;
}
