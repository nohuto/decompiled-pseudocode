/*
 * XREFs of MiReleaseScrubPacket @ 0x1406BFF98
 * Callers:
 *     MiInitializeScrubPacket @ 0x1406BFEE8 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x1406BFFD0 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 * Callees:
 *     MiDereferencePageRuns @ 0x1400252E4 (MiDereferencePageRuns.c)
 *     MiReleasePteCopyList @ 0x14002EDD4 (MiReleasePteCopyList.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseScrubPacket(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx

  MiReleasePteCopyList(a1);
  v2 = *(void **)(a1 + 24);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
    MiDereferencePageRuns(v3);
}
