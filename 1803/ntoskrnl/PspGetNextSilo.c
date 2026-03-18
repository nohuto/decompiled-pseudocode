/*
 * XREFs of PspGetNextSilo @ 0x140535274
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x1400D3DA0 (EtwpAdjustTraceBuffers.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14057B938 (EtwpUpdateGlobalGroupMasks.c)
 *     PsStartSiloMonitor @ 0x140647BE0 (PsStartSiloMonitor.c)
 *     PsFreeSiloContextSlot @ 0x140778830 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x140778AF0 (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x14077CC34 (PsShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x14077D330 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x14008A910 (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x1405352AC (PspGetNextJob.c)
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
    if ( (*(_DWORD *)(NextJob + 1304) & 0x40000000) != 0 && (!a2 || PsIsServerSilo(NextJob)) )
      break;
    a1 = v4;
  }
  return v4;
}
