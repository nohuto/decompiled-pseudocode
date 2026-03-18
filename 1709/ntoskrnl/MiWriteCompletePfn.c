/*
 * XREFs of MiWriteCompletePfn @ 0x1400A5320
 * Callers:
 *     MiUnlockMdlWritePages @ 0x1400A50D0 (MiUnlockMdlWritePages.c)
 *     MiBuildMappedCluster @ 0x1400EE1F0 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x140225D30 (MiGatherPagefilePages.c)
 *     MiUnlockStoreLockedPages @ 0x14022D744 (MiUnlockStoreLockedPages.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsPfnCommitNotCharged @ 0x140078050 (MiIsPfnCommitNotCharged.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14011B680 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 */

__int64 __fastcall MiWriteCompletePfn(__int64 a1, char a2)
{
  __int64 v2; // rdi
  char v5; // dl
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebp
  unsigned __int64 v11; // r9

  v2 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 16);
    v9 = a1 + 16;
    if ( (v8 & 0x400) == 0 )
      v2 = MiCapturePageFileInfoInline(v9, 1LL);
    *(_BYTE *)(a1 + 34) |= 0x10u;
  }
  else if ( (a2 & 2) != 0 )
  {
    v10 = MI_IS_PTE_IN_WS_SWAP_SET(*(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)), a1 + 16);
    if ( !v10 && (*(_DWORD *)(a1 + 16) & 2) != 0 )
      v10 = ((v11 >> 54) & 7) == 2;
    v2 = MiCapturePageFileInfoInline(a1 + 16, 1LL);
    if ( v10 )
      *(_QWORD *)(a1 + 16) &= ~2uLL;
  }
  *(_BYTE *)(a1 + 34) &= ~8u;
  v5 = *(_BYTE *)(a1 + 34);
  if ( (v5 & 0x20) != 0
    && ((*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0
     || (unsigned int)MiGetSystemRegionType((__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16) - 6 > 1) )
  {
    *(_BYTE *)(a1 + 34) = v5 & 0xDF;
  }
  if ( (*(_WORD *)(a1 + 32))-- == 1 )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0
      && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0
      && !(unsigned int)MiIsPfnCommitNotCharged(a1) )
    {
      MiReturnCommit(*(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)), 1uLL);
    }
    if ( (a2 & 4) != 0 )
    {
      MiRestoreTransitionPte(a1, 1);
      MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
    }
    else
    {
      MiPfnReferenceCountIsZero(a1, (a1 + 0x58000000000LL) / 48);
    }
  }
  return v2;
}
