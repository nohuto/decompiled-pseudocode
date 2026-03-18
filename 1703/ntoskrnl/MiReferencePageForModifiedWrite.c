/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x14010EC0C
 * Callers:
 *     MiBuildMappedCluster @ 0x140020978 (MiBuildMappedCluster.c)
 *     MmStoreProbeAndLockPages @ 0x1400266C0 (MmStoreProbeAndLockPages.c)
 *     MiFillNoReservationCluster @ 0x14002DC7C (MiFillNoReservationCluster.c)
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 *     MiBuildReservationCluster @ 0x140139AAC (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x14013A0CC (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x14013A21C (MiAddToReservationCluster.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1400A3660 (MiGetPagePrivilege.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiChargeForWriteInProgressPage @ 0x14010EDCC (MiChargeForWriteInProgressPage.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 result; // rax
  __int64 v7; // rdx

  v4 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL));
  if ( (a2 & 1) != 0 )
  {
    v5 = 1;
LABEL_3:
    if ( (a2 & 4) == 0 )
    {
      MiUnlinkPageFromList(BugCheckParameter2, 0);
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
