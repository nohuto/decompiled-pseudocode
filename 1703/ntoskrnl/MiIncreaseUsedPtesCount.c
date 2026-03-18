/*
 * XREFs of MiIncreaseUsedPtesCount @ 0x1400A8338
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiUpdateForkMaps @ 0x140002950 (MiUpdateForkMaps.c)
 *     MiSplitPrivatePage @ 0x1400A7140 (MiSplitPrivatePage.c)
 *     MiResolvePageTablePage @ 0x1400BF190 (MiResolvePageTablePage.c)
 *     MiCommitExistingVad @ 0x1400CE7C0 (MiCommitExistingVad.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiReservePageFileSpaceForPage @ 0x1401048E0 (MiReservePageFileSpaceForPage.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 *     MiInsertPhysicalPteMapping @ 0x140123724 (MiInsertPhysicalPteMapping.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14020CE14 (MiUpdatePrivateDemandZeroView.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x14021C4A4 (MiCreatePageTablesForPhysicalRange.c)
 *     MiInsertLargeUserMapping @ 0x14022181C (MiInsertLargeUserMapping.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiIsAddressValid @ 0x1400A58A0 (MiIsAddressValid.c)
 */

char __fastcall MiIncreaseUsedPtesCount(__int64 a1, unsigned int a2)
{
  char result; // al

  MiLockPageAtDpcInline(a1);
  result = -1;
  *(_QWORD *)(a1 + 16) ^= ((unsigned int)*(_QWORD *)(a1 + 16) ^ ((unsigned int)*(_QWORD *)(a1 + 16)
                                                               + ((unsigned __int16)a2 << 16))) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a2 <= 1 )
    return MiIsAddressValid(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  return result;
}
