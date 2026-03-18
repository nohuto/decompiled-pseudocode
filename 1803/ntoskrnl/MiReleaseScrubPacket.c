/*
 * XREFs of MiReleaseScrubPacket @ 0x140757E44
 * Callers:
 *     MiInitializeScrubPacket @ 0x140757D28 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x140757E90 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 * Callees:
 *     MiReleasePteCopyList @ 0x1400C8214 (MiReleasePteCopyList.c)
 *     MiDeleteUltraThreadContext @ 0x14013A5C4 (MiDeleteUltraThreadContext.c)
 *     MiDereferencePageRuns @ 0x14014C808 (MiDereferencePageRuns.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseScrubPacket(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx

  MiDeleteUltraThreadContext(a1);
  MiReleasePteCopyList(a1 + 128);
  v2 = *(void **)(a1 + 152);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(_QWORD *)(a1 + 176);
  if ( v3 )
    MiDereferencePageRuns(v3);
}
