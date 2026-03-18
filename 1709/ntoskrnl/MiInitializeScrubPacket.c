/*
 * XREFs of MiInitializeScrubPacket @ 0x1406EE840
 * Callers:
 *     MiScrubMemoryWorker @ 0x1406EE9C0 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiCreateUltraThreadContext @ 0x1400CF818 (MiCreateUltraThreadContext.c)
 *     MiReferencePageRuns @ 0x14011CB5C (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x140123E80 (MiCreatePteCopyList.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiReleaseScrubPacket @ 0x1406EE968 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiInitializeScrubPacket(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _WORD *v8; // rax
  unsigned int v9; // edi
  PVOID PoolWithTag; // rax
  _WORD *v12; // [rsp+20h] [rbp-28h] BYREF
  __int16 v13; // [rsp+28h] [rbp-20h]
  unsigned __int16 v14; // [rsp+2Ah] [rbp-1Eh]

  MiInitializePageColorBase((__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12], 0, (__int64)&v12);
  v8 = v12;
  ++*v12;
  v9 = 0;
  if ( !(unsigned int)MiCreateUltraThreadContext(a4, v14 | (unsigned int)(unsigned __int16)(v13 & *v8), 8) )
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
