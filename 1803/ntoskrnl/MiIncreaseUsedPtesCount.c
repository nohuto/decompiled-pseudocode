/*
 * XREFs of MiIncreaseUsedPtesCount @ 0x14003C650
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiUpdatePageTableUseCount @ 0x14003C610 (MiUpdatePageTableUseCount.c)
 *     MiSplitPrivatePage @ 0x14003CAC0 (MiSplitPrivatePage.c)
 *     MiInPagePageTable @ 0x14003D3E0 (MiInPagePageTable.c)
 *     MiReservePageFileSpaceForPage @ 0x140053840 (MiReservePageFileSpaceForPage.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MiInsertPhysicalPteMapping @ 0x140137EEC (MiInsertPhysicalPteMapping.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiUpdateForkMaps @ 0x140141F94 (MiUpdateForkMaps.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402520D8 (MiUpdatePrivateDemandZeroView.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x140262490 (MiCreatePageTablesForPhysicalRange.c)
 *     MiInsertLargeUserMapping @ 0x140268D44 (MiInsertLargeUserMapping.c)
 * Callees:
 *     MiIsAddressValid @ 0x140122C40 (MiIsAddressValid.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiIncreaseUsedPtesCount(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  MiLockPageAtDpcInline(a1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) ^= ((unsigned int)*(_QWORD *)(a1 + 16) ^ ((unsigned int)*(_QWORD *)(a1 + 16)
                                                               + ((unsigned __int16)a2 << 16))) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a2 <= 1 )
    return MiIsAddressValid(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  return result;
}
