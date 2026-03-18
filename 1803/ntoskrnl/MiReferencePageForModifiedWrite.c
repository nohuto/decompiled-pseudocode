/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x140131E00
 * Callers:
 *     MiFillNoReservationCluster @ 0x1400BC0FC (MiFillNoReservationCluster.c)
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 *     MiBuildMappedCluster @ 0x140133CF8 (MiBuildMappedCluster.c)
 *     MmStoreProbeAndLockPages @ 0x140136640 (MmStoreProbeAndLockPages.c)
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140150850 (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x1401509A0 (MiAddToReservationCluster.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     MiClearPfnImageVerified @ 0x140054A44 (MiClearPfnImageVerified.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiChargeForWriteInProgressPage @ 0x140131D70 (MiChargeForWriteInProgressPage.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  int v8; // edx
  unsigned int v9; // esi
  char v10; // al
  char v11; // al

  v6 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL));
  if ( (a2 & 1) != 0 )
  {
    v9 = 1;
  }
  else
  {
    v8 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1 | 2;
    if ( (a2 & 2) == 0 )
      LOBYTE(v8) = (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400) != 0;
    v9 = MiChargeForWriteInProgressPage(v6, v8, (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1, a4);
    if ( !v9 )
      return 0LL;
  }
  if ( (a2 & 4) == 0 )
  {
    MiUnlinkPageFromList(BugCheckParameter2, 0LL);
    *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
  }
  v10 = *(_BYTE *)(BugCheckParameter2 + 34);
  ++*(_WORD *)(BugCheckParameter2 + 32);
  v11 = v10 | 8;
  *(_BYTE *)(BugCheckParameter2 + 34) = v11;
  if ( (a2 & 8) == 0 )
    *(_BYTE *)(BugCheckParameter2 + 34) = v11 & 0xEF;
  if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
    && (MiGetPagePrivilege(BugCheckParameter2, 1, 0LL) & 0x10) != 0 )
  {
    *(_BYTE *)(BugCheckParameter2 + 34) |= 0x20u;
    MiClearPfnImageVerified(BugCheckParameter2, 28);
  }
  return v9;
}
