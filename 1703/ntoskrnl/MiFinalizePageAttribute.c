/*
 * XREFs of MiFinalizePageAttribute @ 0x140105D40
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiTradeActivePage @ 0x140027F94 (MiTradeActivePage.c)
 *     MiSwapStackPage @ 0x14002BD10 (MiSwapStackPage.c)
 *     MiReplaceTransitionPage @ 0x1400750E8 (MiReplaceTransitionPage.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiInitializeTransitionPfn @ 0x140105864 (MiInitializeTransitionPfn.c)
 *     MiAllocateKernelStackPages @ 0x1401059E0 (MiAllocateKernelStackPages.c)
 *     MiInitializePfn @ 0x1401099F8 (MiInitializePfn.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiSplitDirectMapPage @ 0x1402191C4 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x14021FD48 (MiSwapNumaStandbyPage.c)
 *     MiHandleForkTransitionPte @ 0x1402232C0 (MiHandleForkTransitionPte.c)
 *     MxSwapPages @ 0x140802304 (MxSwapPages.c)
 *     MiAllocateDummyPage @ 0x14080276C (MiAllocateDummyPage.c)
 *     MiInitializeCacheFlushing @ 0x140804634 (MiInitializeCacheFlushing.c)
 *     MiInitializeGapFrames @ 0x1408165A8 (MiInitializeGapFrames.c)
 * Callees:
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 */

char __fastcall MiFinalizePageAttribute(__int64 a1, unsigned int a2, int a3)
{
  signed __int64 v4; // rax
  signed __int64 v6; // rdx
  bool i; // zf
  signed __int64 v8; // rcx

  LODWORD(v4) = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( (_DWORD)v4 != a2 )
    LOBYTE(v4) = MiChangePageAttribute(a1, a2, a3 == 1);
  if ( a3 == 1 )
  {
    *(_QWORD *)(a1 + 24) &= 0xF0FFFFFFFFFFFFFFuLL;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v6 & 0xF0FFFFFFFFFFFFFFuLL, v6);
    for ( i = v6 == v4; !i; i = v8 == v4 )
    {
      v8 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v4 & 0xF0FFFFFFFFFFFFFFuLL, v4);
    }
  }
  return v4;
}
