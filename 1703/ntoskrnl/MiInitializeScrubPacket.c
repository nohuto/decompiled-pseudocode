/*
 * XREFs of MiInitializeScrubPacket @ 0x1406BFEE8
 * Callers:
 *     MiScrubMemoryWorker @ 0x1406BFFD0 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 * Callees:
 *     MiReferencePageRuns @ 0x140025380 (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x14002A77C (MiCreatePteCopyList.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     MiReleaseScrubPacket @ 0x1406BFF98 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiInitializeScrubPacket(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  PVOID PoolWithTag; // rax

  v4 = 0;
  *(_DWORD *)(a4 + 56) = a2;
  *(_QWORD *)(a4 + 32) = a3;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_QWORD *)(a4 + 40) = 0LL;
  MiCreatePteCopyList(0x100uLL, 0x100uLL, a4);
  if ( !*(_DWORD *)(a4 + 4) )
    return 3221225626LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6363454Du);
  *(_QWORD *)(a4 + 24) = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( a2 != -1 )
      *(_QWORD *)(a4 + 48) = MiReferencePageRuns(a1, 1u);
  }
  else
  {
    v4 = -1073741670;
    MiReleaseScrubPacket(a4);
  }
  return v4;
}
