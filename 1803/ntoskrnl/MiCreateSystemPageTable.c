/*
 * XREFs of MiCreateSystemPageTable @ 0x140070FD0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiInitializeSystemPageTable @ 0x140071268 (MiInitializeSystemPageTable.c)
 *     MiGetPageTablePages @ 0x1400716C0 (MiGetPageTablePages.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiReplicatePteChange @ 0x14016B45C (MiReplicatePteChange.c)
 *     MiMakeSystemLeavesNonZero @ 0x1401A63B4 (MiMakeSystemLeavesNonZero.c)
 *     KeCopyPage @ 0x1401AEA50 (KeCopyPage.c)
 *     MiMakeLargePageTable @ 0x14025BAE8 (MiMakeLargePageTable.c)
 *     MiArePageContentsZero @ 0x140264DE4 (MiArePageContentsZero.c)
 *     MxCopyPage @ 0x14089B084 (MxCopyPage.c)
 */

__int64 __fastcall MiCreateSystemPageTable(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // r11
  int PageTablePages; // eax
  __int64 v13; // r9
  __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v5 = a3;
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v19 = v7;
  v8 = v7;
  v9 = v7 & 1;
  if ( (v7 & 1) != 0 )
  {
    if ( (v7 & 0x80) != 0 )
      return 0LL;
    if ( (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFLL) != MiState[v5 + 621] )
    {
      v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19);
      if ( ((v10 >> 12) & 0xFFFFFFFFFLL) != *(_QWORD *)(v11 + 8 * v5 + 4936) && ((v8 & 0x800) != 0 || (v8 & 0x42) != 0) )
        return 0LL;
    }
  }
  if ( (*(_DWORD *)(v3 + 52) & 0x80) != 0 && (unsigned int)MiMakeLargePageTable(a1, a2, (unsigned int)v5, v8) )
    return 0LL;
  PageTablePages = MiGetPageTablePages(v3, 1LL, &v20, v8);
  if ( PageTablePages < 0 )
  {
    if ( PageTablePages == -1073741801
      && (*(_DWORD *)a1 & 2) != 0
      && *(_BYTE *)(a1 + 4) <= 1u
      && KeGetCurrentThread()->Priority < 16 )
    {
      return 2LL;
    }
    *(_DWORD *)(v3 + 248) = PageTablePages;
    return 4LL;
  }
  ++*(_QWORD *)(v3 + 40);
  v15 = (v20 + 0x58000000000LL) / 48;
  if ( (MiFlags & 0x80) != 0 && (++dword_1403CBEAC & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero((v20 + 0x58000000000LL) / 48);
  if ( v9 )
  {
    if ( KeGetCurrentPrcb()->HyperPte )
    {
      v16 = MiMapPageInHyperSpaceWorker(v15, 0LL, 0x80000000, v13);
      KeCopyPage(v16, (__int64)(a2 << 25) >> 16);
      MiUnmapPageInHyperSpaceWorker(v16, 0x11u, 0x80000000);
    }
    else
    {
      MxCopyPage(v15);
    }
  }
  MiInitializeSystemPageTable(v3, v5, a2, v20, v3 + 64);
  v17 = 3;
  if ( (_DWORD)v5 == 3 && *(_DWORD *)(v3 + 48) != 2 )
  {
    v18 = a2;
    do
    {
      v18 = v18 << 25 >> 16;
      --v17;
    }
    while ( v17 );
    MiReplicatePteChange(v18, v18);
  }
  if ( (int)v5 <= *(unsigned __int8 *)(a1 + 10) )
  {
    if ( (int)v5 > 1 )
      MiMakeSystemLeavesNonZero(a1, a2, (unsigned int)v5);
    return 0LL;
  }
  if ( v9 )
    MiFlushTbList(v3 + 64);
  return 1LL;
}
