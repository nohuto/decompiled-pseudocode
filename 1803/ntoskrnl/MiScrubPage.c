/*
 * XREFs of MiScrubPage @ 0x140270A34
 * Callers:
 *     MiScrubNodeLargePageList @ 0x14026C284 (MiScrubNodeLargePageList.c)
 *     MiScrubAweMappedPage @ 0x140270278 (MiScrubAweMappedPage.c)
 *     MiScrubLargeMappedPage @ 0x1402703B8 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x1402707F0 (MiScrubNode.c)
 *     MiScrubNonPagedPool @ 0x14074DA70 (MiScrubNonPagedPool.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiMakeProtectionPfnCompatible @ 0x1401389C0 (MiMakeProtectionPfnCompatible.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 *     KeCopyPage @ 0x1401AEA50 (KeCopyPage.c)
 *     RtlScrubMemory @ 0x14028F74C (RtlScrubMemory.c)
 */

__int64 __fastcall MiScrubPage(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 UltraMapping; // rsi
  unsigned __int64 *v9; // rbx
  int ProtectionPfnCompatible; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // r15d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8

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
    *v9 = MiMakeValidPte((unsigned __int64)v9, (a3 + 0x58000000000LL) / 48, ProtectionPfnCompatible | 0xA0000000, v11);
    if ( MiPteInShadowRange((unsigned __int64)v9) )
      MiWritePteShadow(v13, v12, v14);
  }
  if ( a2 )
    KeCopyPage(a2, UltraMapping);
  v15 = RtlScrubMemory((PVOID)UltraMapping);
  if ( a2 )
    KeCopyPage(UltraMapping, a2);
  if ( !a4 )
  {
    *v9 = ZeroPte;
    if ( MiPteInShadowRange((unsigned __int64)v9) )
      MiWritePteShadow(v17, v16, v18);
  }
  ++*(_QWORD *)(a1 + 168);
  return v15;
}
