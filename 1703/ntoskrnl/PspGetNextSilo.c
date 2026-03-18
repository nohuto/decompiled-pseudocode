/*
 * XREFs of PspGetNextSilo @ 0x14054B0C4
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14011D770 (EtwpAdjustTraceBuffers.c)
 *     PsStartSiloMonitor @ 0x1405CB6A0 (PsStartSiloMonitor.c)
 *     PsFreeSiloContextSlot @ 0x1406DE190 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x1406DE440 (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x1406E2814 (PsShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x1406E3000 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PspIsServerSilo @ 0x14011E800 (PspIsServerSilo.c)
 *     PspGetNextJob @ 0x14054B100 (PspGetNextJob.c)
 */

void *__fastcall PspGetNextSilo(void *a1, char a2)
{
  __int64 NextJob; // rax
  void *v4; // r8

  while ( 1 )
  {
    NextJob = PspGetNextJob(a1);
    v4 = (void *)NextJob;
    if ( !NextJob )
      return 0LL;
    if ( (*(_DWORD *)(NextJob + 1304) & 0x40000000) != 0 && (!a2 || PspIsServerSilo(NextJob)) )
      break;
    a1 = v4;
  }
  return v4;
}
