/*
 * XREFs of MiIncreaseUsedPtesCount @ 0x1400666F8
 * Callers:
 *     MiSplitPrivatePage @ 0x140034BC0 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x14003AFF0 (MiCommitExistingVad.c)
 *     MiResolvePageTablePage @ 0x1400422D0 (MiResolvePageTablePage.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiReservePageFileSpaceForPage @ 0x14005CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiUpdatePageTableUseCount @ 0x1400666B8 (MiUpdatePageTableUseCount.c)
 *     MiUpdateForkMaps @ 0x1400CC280 (MiUpdateForkMaps.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiInsertPhysicalPteMapping @ 0x1401184C0 (MiInsertPhysicalPteMapping.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140213E14 (MiUpdatePrivateDemandZeroView.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x1402290E4 (MiCreatePageTablesForPhysicalRange.c)
 *     MiInsertLargeUserMapping @ 0x14022E6A4 (MiInsertLargeUserMapping.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 */

__int64 __fastcall MiIncreaseUsedPtesCount(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v5);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) ^= ((unsigned int)*(_QWORD *)(a1 + 16) ^ ((unsigned int)*(_QWORD *)(a1 + 16)
                                                               + ((unsigned __int16)a2 << 16))) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a2 <= 1 )
    return MiIsAddressValid(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  return result;
}
