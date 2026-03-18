/*
 * XREFs of MiGetUsedPtesHandle @ 0x140228894
 * Callers:
 *     MiSplitPrivatePage @ 0x140034BC0 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x14003AFF0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiResolveSharedZeroFault @ 0x140040630 (MiResolveSharedZeroFault.c)
 *     MiResolvePageTablePage @ 0x1400422D0 (MiResolvePageTablePage.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiResolvePrivateZeroFault @ 0x1400464C0 (MiResolvePrivateZeroFault.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiReservePageFileSpaceForPage @ 0x14005CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiUpdatePageTableUseCount @ 0x1400666B8 (MiUpdatePageTableUseCount.c)
 *     MiDeletePageTableHierarchy @ 0x1400EB190 (MiDeletePageTableHierarchy.c)
 *     MiInsertPhysicalPteMapping @ 0x1401184C0 (MiInsertPhysicalPteMapping.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140213E14 (MiUpdatePrivateDemandZeroView.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x1402290E4 (MiCreatePageTablesForPhysicalRange.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiGetUsedPtesHandle(unsigned __int64 a1)
{
  __int64 *v1; // rcx
  __int64 PteShadow; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  PteShadow = *v1;
  if ( (unsigned __int64)v1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v4 = PteShadow;
  return 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v4) - 0x58000000000LL;
}
