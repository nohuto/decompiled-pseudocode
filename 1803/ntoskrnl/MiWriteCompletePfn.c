/*
 * XREFs of MiWriteCompletePfn @ 0x14002F710
 * Callers:
 *     MiUnlockMdlWritePages @ 0x14002F4C0 (MiUnlockMdlWritePages.c)
 *     MiUnlockStoreLockedPages @ 0x1400BF3E0 (MiUnlockStoreLockedPages.c)
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 *     MiBuildMappedCluster @ 0x140133CF8 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiIsPfnCommitNotCharged @ 0x140032060 (MiIsPfnCommitNotCharged.c)
 *     MiReleasePageFileSpace @ 0x140051890 (MiReleasePageFileSpace.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400B8750 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiWriteCompletePfn(ULONG_PTR BugCheckParameter2, char a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v12; // eax
  ULONG_PTR v13; // rcx
  int v14; // ebp
  unsigned __int64 v15; // r9
  char v17; // al

  v3 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v12 = *(_DWORD *)(BugCheckParameter2 + 16);
    v13 = BugCheckParameter2 + 16;
    if ( (v12 & 0x400) == 0 )
      v3 = MiCapturePageFileInfoInline(v13, 1LL);
    *(_BYTE *)(BugCheckParameter2 + 34) |= 0x10u;
  }
  else if ( (a2 & 2) != 0 )
  {
    v14 = MI_IS_PTE_IN_WS_SWAP_SET(
            *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL)),
            BugCheckParameter2 + 16,
            a3,
            *(_QWORD *)(BugCheckParameter2 + 40));
    if ( !v14 && (*(_DWORD *)(BugCheckParameter2 + 16) & 2) != 0 )
      v14 = ((v15 >> 54) & 7) == 2;
    v3 = MiCapturePageFileInfoInline(BugCheckParameter2 + 16, 1LL);
    if ( v14 )
      *(_QWORD *)(BugCheckParameter2 + 16) &= ~2uLL;
  }
  v6 = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF7;
  *(_BYTE *)(BugCheckParameter2 + 34) = v6;
  v7 = v6;
  if ( (v6 & 0x20) != 0
    && ((*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0
     || (unsigned int)MiGetSystemRegionType((__int64)(*(_QWORD *)(BugCheckParameter2 + 8) << 25) >> 16) - 6 > 1) )
  {
    LOBYTE(v7) = v7 & 0xDF;
    *(_BYTE *)(BugCheckParameter2 + 34) = v7;
  }
  if ( (*(_WORD *)(BugCheckParameter2 + 32))-- == 1 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0
      && !(unsigned int)MiIsPfnCommitNotCharged(BugCheckParameter2, v7) )
    {
      MiReturnCommit(*(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL)), 1uLL);
    }
    if ( (a2 & 8) != 0 )
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
    if ( (a2 & 4) != 0 )
    {
      MiRestoreTransitionPte(BugCheckParameter2);
    }
    else
    {
      if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
        KeBugCheckEx(
          0x4Eu,
          7uLL,
          (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48,
          *(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL,
          0LL);
      if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) == 0 )
      {
        v9 = *(_QWORD *)(BugCheckParameter2 + 16);
        v10 = -9LL;
        if ( (v9 & 0x400) != 0 )
          v10 = -2049LL;
        *(_QWORD *)(BugCheckParameter2 + 16) = v9 & v10;
        if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) != 0 )
          MiInsertPageInList(BugCheckParameter2, 8u);
        else
          MiInsertPageInList(BugCheckParameter2, 4u);
        return v3;
      }
      v17 = *(_BYTE *)(BugCheckParameter2 + 35);
      if ( (v17 & 0x10) != 0 )
        *(_BYTE *)(BugCheckParameter2 + 35) = v17 & 0xEF;
      MiReleasePageFileSpace(
        *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL)),
        *(_QWORD *)(BugCheckParameter2 + 16),
        1LL);
    }
    MiInsertPageInFreeOrZeroedList((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 2);
  }
  return v3;
}
