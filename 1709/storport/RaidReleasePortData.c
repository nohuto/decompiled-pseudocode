/*
 * XREFs of RaidReleasePortData @ 0x1C000299C
 * Callers:
 *     StorpLogStatistics @ 0x1C0004218 (StorpLogStatistics.c)
 *     McGenControlCallbackV2 @ 0x1C001B5D0 (McGenControlCallbackV2.c)
 *     RaSqmLogAdapterStatistics @ 0x1C00313CC (RaSqmLogAdapterStatistics.c)
 *     RaDeleteDriver @ 0x1C0067C8C (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleasePortData(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = 0LL;
    ExFreePoolWithTag(a1, 0x44506152u);
  }
}
