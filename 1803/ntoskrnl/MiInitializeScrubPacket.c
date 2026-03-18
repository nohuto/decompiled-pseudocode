/*
 * XREFs of MiInitializeScrubPacket @ 0x140757D28
 * Callers:
 *     MiScrubMemoryWorker @ 0x140757E90 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 * Callees:
 *     MiGetNextPageColor @ 0x1400093C8 (MiGetNextPageColor.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiReferencePageRuns @ 0x1400C4678 (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x1400C613C (MiCreatePteCopyList.c)
 *     MiCreateUltraThreadContext @ 0x14013A724 (MiCreateUltraThreadContext.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiReleaseScrubPacket @ 0x140757E44 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiInitializeScrubPacket(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int NextPageColor; // eax
  unsigned int v9; // edi
  PVOID PoolWithTag; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  MiInitializePageColorBase((__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12], 0, (__int64)v12);
  NextPageColor = MiGetNextPageColor((__int64)v12);
  v9 = 0;
  if ( !(unsigned int)MiCreateUltraThreadContext(a4, NextPageColor, 8) )
    return 3221225626LL;
  MiCreatePteCopyList(0x100uLL, 0x100uLL, a4 + 128);
  if ( *(_DWORD *)(a4 + 132)
    && (*(_DWORD *)(a4 + 184) = a2,
        *(_QWORD *)(a4 + 152) = 0LL,
        *(_QWORD *)(a4 + 176) = 0LL,
        *(_QWORD *)(a4 + 160) = a3,
        *(_QWORD *)(a4 + 168) = 0LL,
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6363454Du),
        (*(_QWORD *)(a4 + 152) = PoolWithTag) != 0LL) )
  {
    if ( a2 != -1 )
      *(_QWORD *)(a4 + 176) = MiReferencePageRuns(a1, 1u);
  }
  else
  {
    MiReleaseScrubPacket(a4);
    return (unsigned int)-1073741670;
  }
  return v9;
}
