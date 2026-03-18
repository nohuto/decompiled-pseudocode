/*
 * XREFs of MiLockLowestValidPageTable @ 0x140120AF0
 * Callers:
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiSynchronizeSystemVa @ 0x14003F344 (MiSynchronizeSystemVa.c)
 *     NtUnlockVirtualMemory @ 0x14004E260 (NtUnlockVirtualMemory.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140052680 (MiDeprioritizeVirtualAddresses.c)
 *     MiRelockFaultState @ 0x140059A7C (MiRelockFaultState.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiConvertAndFlushWsleVas @ 0x1400BAC24 (MiConvertAndFlushWsleVas.c)
 *     MiLockStealUserVm @ 0x1400D5854 (MiLockStealUserVm.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 *     MiReacquireWalkLocks @ 0x14025382C (MiReacquireWalkLocks.c)
 *     MiSplitReducedCommitClonePage @ 0x140253E00 (MiSplitReducedCommitClonePage.c)
 *     MiSetPagesModified @ 0x14025545C (MiSetPagesModified.c)
 *     MiScrubLargeMappedPage @ 0x1402703B8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiPerformSafePdeWrite @ 0x1400CD48C (MiPerformSafePdeWrite.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 */

unsigned __int64 __fastcall MiLockLowestValidPageTable(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rdi
  __int64 Process; // rcx
  __int64 i; // rsi
  unsigned __int64 v9; // rbx
  signed __int64 v10; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // [rsp+20h] [rbp-48h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+30h] [rbp-38h]
  __int64 v18; // [rsp+38h] [rbp-30h]

  *a3 = 0LL;
  v15 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0xFFFFF6FB7DBEDF68uLL;
  MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  for ( i = 2LL; ; --i )
  {
    v9 = *(&v15 + i);
    v10 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 640) != 1 )
      {
        if ( (v10 & 1) == 0 )
          break;
        if ( (v10 & 0x20) == 0 || (v10 & 0x42) == 0 )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          v12 = *(_QWORD *)(Process + 1544);
          if ( v12 )
          {
            v13 = *(_QWORD *)(v12 + 8 * ((v9 >> 3) & 0x1FF));
            v14 = v10 | 0x20;
            Process = (unsigned __int8)v13;
            LOBYTE(Process) = v13 & 0x20;
            if ( (v13 & 0x20) == 0 )
              v14 = *(_QWORD *)v9;
            v10 = v14;
            if ( (v13 & 0x42) != 0 )
              v10 = v14 | 0x42;
          }
        }
      }
    }
    if ( (v10 & 1) == 0 || (v10 & 0x80u) != 0LL )
      break;
    if ( (v10 & 0x20) == 0 )
      MiPerformSafePdeWrite(Process, (volatile signed __int64 *)*(&v15 + i), v10, 1);
    if ( v9 != v6 )
    {
      MiLockPageTableInternal(a1, v9, 0LL);
      MiUnlockPageTableInternal(a1, v6);
      v6 = v9;
    }
    if ( !i )
    {
      *a3 = a2;
      return v6;
    }
  }
  *a3 = v9;
  return v6;
}
