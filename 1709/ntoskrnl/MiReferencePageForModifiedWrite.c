/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x1400EF550
 * Callers:
 *     MiBuildMappedCluster @ 0x1400EE1F0 (MiBuildMappedCluster.c)
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 *     MiAddToReservationCluster @ 0x140223F60 (MiAddToReservationCluster.c)
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 *     MiFillNoReservationCluster @ 0x140225384 (MiFillNoReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140226540 (MiGetPageForWriteCluster.c)
 *     MmStoreProbeAndLockPages @ 0x14022DB24 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiClearPfnImageVerified @ 0x140050290 (MiClearPfnImageVerified.c)
 *     MiGetPagePrivilege @ 0x14005AE80 (MiGetPagePrivilege.c)
 *     MiChargeForWriteInProgressPage @ 0x14011F45C (MiChargeForWriteInProgressPage.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 result; // rax
  __int64 v7; // rdx

  v4 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL));
  if ( (a2 & 1) != 0 )
  {
    v5 = 1;
LABEL_3:
    if ( (a2 & 4) == 0 )
    {
      MiUnlinkPageFromList(BugCheckParameter2, 0LL);
      *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
    }
    ++*(_WORD *)(BugCheckParameter2 + 32);
    *(_BYTE *)(BugCheckParameter2 + 34) |= 8u;
    if ( (a2 & 8) == 0 )
      *(_BYTE *)(BugCheckParameter2 + 34) &= ~0x10u;
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && (MiGetPagePrivilege(BugCheckParameter2, 1, 0LL) & 0x10) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 34) |= 0x20u;
      MiClearPfnImageVerified(BugCheckParameter2, 28);
    }
    return v5;
  }
  v7 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1 | 2u;
  if ( (a2 & 2) == 0 )
    v7 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1;
  result = MiChargeForWriteInProgressPage(v4, v7);
  v5 = result;
  if ( (_DWORD)result )
    goto LABEL_3;
  return result;
}
