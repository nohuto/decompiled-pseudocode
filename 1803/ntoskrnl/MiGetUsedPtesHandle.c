/*
 * XREFs of MiGetUsedPtesHandle @ 0x14003E470
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiUpdatePageTableUseCount @ 0x14003C610 (MiUpdatePageTableUseCount.c)
 *     MiSplitPrivatePage @ 0x14003CAC0 (MiSplitPrivatePage.c)
 *     MiInPagePageTable @ 0x14003D3E0 (MiInPagePageTable.c)
 *     MiEvictPageTableLock @ 0x14003D960 (MiEvictPageTableLock.c)
 *     MiReservePageFileSpaceForPage @ 0x140053840 (MiReservePageFileSpaceForPage.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiInsertPhysicalPteMapping @ 0x140137EEC (MiInsertPhysicalPteMapping.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402520D8 (MiUpdatePrivateDemandZeroView.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x140262490 (MiCreatePageTablesForPhysicalRange.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1402629CC (MiRemoveUserPhysicalPagesVad.c)
 *     MiDeleteLargeUserPde @ 0x14026A4BC (MiDeleteLargeUserPde.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetUsedPtesHandle(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // [rsp+8h] [rbp+8h] BYREF

  v1 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v2 = *(_QWORD *)v1;
  if ( v1 >= 0xFFFFF6FB7DBED000uLL
    && v1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v4 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v4 )
    {
      v5 = v2 | 0x20;
      v6 = *(_QWORD *)(v4 + 8 * ((v1 >> 3) & 0x1FF));
      if ( (v6 & 0x20) == 0 )
        v5 = v2;
      v2 = v5;
      if ( (v6 & 0x42) != 0 )
        v2 = v5 | 0x42;
    }
  }
  v10 = v2;
  if ( (unsigned __int64)&v10 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v10 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v7 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 8 * (((unsigned __int64)&v10 >> 3) & 0x1FF));
      v9 = v2 | 0x20;
      if ( (v8 & 0x20) == 0 )
        v9 = v2;
      v2 = v9;
      if ( (v8 & 0x42) != 0 )
        v2 = v9 | 0x42;
    }
  }
  return 48 * ((v2 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
}
