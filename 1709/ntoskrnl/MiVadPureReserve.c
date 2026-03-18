/*
 * XREFs of MiVadPureReserve @ 0x14003DDE0
 * Callers:
 *     MiSplitPrivatePage @ 0x140034BC0 (MiSplitPrivatePage.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     MiResolvePageTablePage @ 0x1400422D0 (MiResolvePageTablePage.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiProbeAndLockPrepare @ 0x1400BEF50 (MiProbeAndLockPrepare.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400E9820 (MiSetReadOnlyOnSectionView.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiCommitPagefileBackedSection @ 0x140460420 (MiCommitPagefileBackedSection.c)
 *     MiReturnVadQuota @ 0x140495B20 (MiReturnVadQuota.c)
 *     MiCommitPageTablesForVad @ 0x140499490 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x140499780 (MiReturnPageTablePageCommitment.c)
 *     MiInsertVadCharges @ 0x1404D0090 (MiInsertVadCharges.c)
 *     MiAllocateChildVads @ 0x14057AC60 (MiAllocateChildVads.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadPureReserve(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x8000) != 0 )
  {
    if ( *(int *)(a1 + 52) < 0 || (v1 & 7) != 0 )
      return 0LL;
  }
  else
  {
    if ( (v1 & 0xF8) != 0xC0 )
      return 0LL;
    v3 = *(_QWORD *)(a1 + 72);
    if ( !v3 || (v1 & 7) == 1 || *(_QWORD *)(*(_QWORD *)v3 + 64LL) || (*(_DWORD *)(*(_QWORD *)v3 + 56LL) & 0x1000) == 0 )
      return 0LL;
  }
  return 1LL;
}
