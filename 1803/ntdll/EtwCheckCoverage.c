/*
 * XREFs of EtwCheckCoverage @ 0x180083AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl EtwCheckCoverage(PTELEMETRY_COVERAGE_POINT CoveragePoint)
{
  PTELEMETRY_COVERAGE_HEADER TelemetryCoverageHeader; // rdx
  ULONG Hash; // r8d
  __int64 HashTableEntries; // rax
  unsigned int v6; // ecx
  unsigned __int64 v7; // r10
  ULONG *v8; // rcx
  ULONG *i; // rax

  TelemetryCoverageHeader = NtCurrentPeb()->TelemetryCoverageHeader;
  if ( !TelemetryCoverageHeader || (*(_BYTE *)&TelemetryCoverageHeader->2 & 1) != 0 )
    return 0;
  Hash = CoveragePoint->Hash;
  HashTableEntries = TelemetryCoverageHeader->HashTableEntries;
  v6 = Hash & TelemetryCoverageHeader->HashIndexMask;
  v7 = (unsigned __int64)&TelemetryCoverageHeader->HashTable[HashTableEntries];
  if ( v6 >= (unsigned int)HashTableEntries )
    v6 = v6 - (unsigned int)HashTableEntries < (unsigned int)HashTableEntries ? v6 - HashTableEntries : 0;
  v8 = &TelemetryCoverageHeader->HashTable[v6];
  i = v8;
  if ( (unsigned __int64)v8 >= v7 )
  {
LABEL_10:
    for ( i = TelemetryCoverageHeader->HashTable; i < v8; ++i )
    {
      if ( !*i )
        goto LABEL_8;
      if ( *i == Hash )
        goto LABEL_9;
    }
    i = 0LL;
  }
  else
  {
    while ( *i )
    {
      if ( *i == Hash )
        goto LABEL_9;
      if ( (unsigned __int64)++i >= v7 )
        goto LABEL_10;
    }
  }
LABEL_8:
  if ( *i != Hash )
    return 0;
LABEL_9:
  CoveragePoint->LastCoveredRound = TelemetryCoverageHeader->ResetRound;
  return 1;
}
