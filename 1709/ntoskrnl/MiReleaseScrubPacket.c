/*
 * XREFs of MiReleaseScrubPacket @ 0x1406EE968
 * Callers:
 *     MiInitializeScrubPacket @ 0x1406EE840 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x1406EE9C0 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1400CF060 (MiDeleteUltraThreadContext.c)
 *     MiDereferencePageRuns @ 0x14011CA7C (MiDereferencePageRuns.c)
 *     MiReleasePteCopyList @ 0x140125EF4 (MiReleasePteCopyList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseScrubPacket(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rcx
  __int64 v9; // rcx

  MiDeleteUltraThreadContext(a1);
  MiReleasePteCopyList(a1 + 128, v2, v3, v4);
  v8 = *(void **)(a1 + 152);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  v9 = *(_QWORD *)(a1 + 176);
  if ( v9 )
    MiDereferencePageRuns(v9, v5, v6, v7);
}
