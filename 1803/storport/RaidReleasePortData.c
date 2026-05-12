/*
 * XREFs of RaidReleasePortData @ 0x1C0004848
 * Callers:
 *     StorpLogStatistics @ 0x1C00054D8 (StorpLogStatistics.c)
 *     RaSqmLogAdapterStatistics @ 0x1C002CFCC (RaSqmLogAdapterStatistics.c)
 *     StorEtwEnableCallback @ 0x1C0040714 (StorEtwEnableCallback.c)
 *     RaDeleteDriver @ 0x1C0065678 (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleasePortData(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    RaidpPortData = 0LL;
    ExFreePoolWithTag(a1, 0x44506152u);
  }
}
