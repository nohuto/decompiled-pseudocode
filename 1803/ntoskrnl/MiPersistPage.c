/*
 * XREFs of MiPersistPage @ 0x14025E29C
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x14025DA0C (MiFlushFileOnlyMdl.c)
 *     MiMarkFileOnlyPfnBad @ 0x14025E0C4 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14025E548 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiPersistMemory @ 0x14025E26C (MiPersistMemory.c)
 */

__int64 __fastcall MiPersistPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = (void *)MiMapPageInHyperSpaceWorker(a1, &v6, 0x80000000, a4);
  MiPersistMemory(v4, 4096LL);
  return MiUnmapPageInHyperSpaceWorker((unsigned __int64)v4, v6, 0x80000000);
}
