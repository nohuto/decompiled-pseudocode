/*
 * XREFs of MiWriteCompletePfn @ 0x1400CB520
 * Callers:
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiBuildMappedCluster @ 0x140020978 (MiBuildMappedCluster.c)
 *     MiUnlockStoreLockedPages @ 0x14002E4F4 (MiUnlockStoreLockedPages.c)
 *     MiGatherPagefilePages @ 0x140056D98 (MiGatherPagefilePages.c)
 *     MiUnlockMdlWritePages @ 0x1400CB2A0 (MiUnlockMdlWritePages.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400224C0 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x1400CCF10 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiWriteCompletePfn(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  char v7; // dl
  int v10; // eax
  _QWORD *v11; // rcx
  int v12; // ebp
  unsigned __int64 v13; // r9

  v4 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 16);
    v11 = (_QWORD *)(a1 + 16);
    if ( (v10 & 0x400) == 0 )
      v4 = MiCapturePageFileInfoInline(v11, 1, 0);
    *(_BYTE *)(a1 + 34) |= 0x10u;
  }
  else if ( (a2 & 2) != 0 )
  {
    v12 = MI_IS_PTE_IN_WS_SWAP_SET(
            *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)),
            (_WORD *)(a1 + 16));
    if ( !v12 && (*(_DWORD *)(a1 + 16) & 2) != 0 )
      v12 = ((v13 >> 54) & 7) == 2;
    v4 = MiCapturePageFileInfoInline((_QWORD *)(a1 + 16), 1, v12);
    if ( v12 )
      *(_QWORD *)(a1 + 16) &= ~2uLL;
  }
  *(_BYTE *)(a1 + 34) &= ~8u;
  v7 = *(_BYTE *)(a1 + 34);
  if ( (v7 & 0x20) != 0
    && ((*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0
     || (unsigned int)MiGetSystemRegionType((__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16) - 6 > 1) )
  {
    *(_BYTE *)(a1 + 34) = v7 & 0xDF;
  }
  if ( (*(_WORD *)(a1 + 32))-- == 1 )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0
      && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0
      && !(unsigned int)MiIsPfnCommitNotCharged(a1) )
    {
      MiReturnCommit(*(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)), 1LL);
    }
    if ( (a2 & 4) != 0 )
    {
      MiRestoreTransitionPte(a1, 1LL, a3, a4);
      MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
    }
    else
    {
      MiPfnReferenceCountIsZero(a1, (a1 + 0x58000000000LL) / 48);
    }
  }
  return v4;
}
