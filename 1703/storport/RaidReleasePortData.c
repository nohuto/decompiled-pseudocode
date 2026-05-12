/*
 * XREFs of RaidReleasePortData @ 0x1C0001D80
 * Callers:
 *     StorpLogStatistics @ 0x1C0002FDC (StorpLogStatistics.c)
 *     McGenControlCallbackV2 @ 0x1C001B890 (McGenControlCallbackV2.c)
 *     RaSqmLogAdapterStatistics @ 0x1C0030CD4 (RaSqmLogAdapterStatistics.c)
 *     RaDeleteDriver @ 0x1C006474C (RaDeleteDriver.c)
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
