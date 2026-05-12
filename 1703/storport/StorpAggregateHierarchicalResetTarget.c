/*
 * XREFs of StorpAggregateHierarchicalResetTarget @ 0x1C00426D0
 * Callers:
 *     RaidUnitResetTarget @ 0x1C003E240 (RaidUnitResetTarget.c)
 * Callees:
 *     <none>
 */

char __fastcall StorpAggregateHierarchicalResetTarget(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int8 v3; // r9
  char result; // al

  v3 = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      result = v3;
      if ( a3 <= TraceLoggingResetLatencyBuckets[v3] )
        break;
      if ( ++v3 >= 5u )
        return result;
    }
    result = a2 & 0x3F;
    ++*(_DWORD *)(a1 + 12LL * v3 + 5272);
    if ( (a2 & 0x3F) == 1 )
    {
      ++*(_DWORD *)(a1 + 12LL * v3 + 5276);
    }
    else
    {
      result = 3 * v3;
      *(_BYTE *)(a1 + 12LL * v3 + 5280) = a2;
    }
  }
  return result;
}
