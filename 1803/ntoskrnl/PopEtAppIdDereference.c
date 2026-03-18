/*
 * XREFs of PopEtAppIdDereference @ 0x1405350DC
 * Callers:
 *     PoEnergyContextCleanup @ 0x140511194 (PoEnergyContextCleanup.c)
 *     PopEtAggregateKeyCleanup @ 0x140535008 (PopEtAggregateKeyCleanup.c)
 *     PopEtGetProcessAppId @ 0x140559898 (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x140535108 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56);
  return result;
}
