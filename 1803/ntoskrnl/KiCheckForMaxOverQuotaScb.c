/*
 * XREFs of KiCheckForMaxOverQuotaScb @ 0x1400A7660
 * Callers:
 *     KiSchedulerApc @ 0x140041440 (KiSchedulerApc.c)
 *     KiFindReadyThread @ 0x1400A74E0 (KiFindReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400EABEC (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400F7A90 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckForMaxOverQuotaScb(__int64 a1)
{
  while ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    a1 = *(_QWORD *)(a1 + 408);
    if ( !a1 )
      return 0;
  }
  return 1;
}
