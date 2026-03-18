/*
 * XREFs of MiScrubPage @ 0x140238F30
 * Callers:
 *     MiScrubNodeLargePageList @ 0x140233A64 (MiScrubNodeLargePageList.c)
 *     MiScrubAweMappedPage @ 0x140238654 (MiScrubAweMappedPage.c)
 *     MiScrubLargeMappedPage @ 0x1402387C4 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x140238CDC (MiScrubNode.c)
 *     MiScrubNonPagedPool @ 0x1406E2B74 (MiScrubNonPagedPool.c)
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400CD358 (MiMakeProtectionPfnCompatible.c)
 *     MiGetUltraMapping @ 0x1400CD380 (MiGetUltraMapping.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeCopyPage @ 0x140184E30 (KeCopyPage.c)
 *     RtlScrubMemory @ 0x1402573DC (RtlScrubMemory.c)
 */

__int64 __fastcall MiScrubPage(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 UltraMapping; // rsi
  unsigned __int64 *v9; // rbx
  int ProtectionPfnCompatible; // eax
  unsigned int v11; // r15d

  if ( a4 )
  {
    UltraMapping = a4;
    v9 = 0LL;
  }
  else
  {
    UltraMapping = MiGetUltraMapping((unsigned __int64 *)(a1 + 96), 3u, 1LL, 0);
    v9 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a3);
    *v9 = MiMakeValidPte((unsigned __int64)v9, (a3 + 0x58000000000LL) / 48, ProtectionPfnCompatible | 0xA0000000);
    if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
  }
  if ( a2 )
    KeCopyPage(a2, UltraMapping);
  v11 = RtlScrubMemory((PVOID)UltraMapping);
  if ( a2 )
    KeCopyPage(UltraMapping, a2);
  if ( !a4 )
  {
    *v9 = 0LL;
    if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
  }
  ++*(_QWORD *)(a1 + 168);
  return v11;
}
