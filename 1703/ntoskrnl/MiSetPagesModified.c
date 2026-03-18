/*
 * XREFs of MiSetPagesModified @ 0x140210F54
 * Callers:
 *     MiCreateNewSection @ 0x1404933A8 (MiCreateNewSection.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiGetCommittedPages @ 0x140098EC8 (MiGetCommittedPages.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 *     ExpWakePushLock @ 0x140112720 (ExpWakePushLock.c)
 *     MiUpdateControlAreaCommitCount @ 0x140119798 (MiUpdateControlAreaCommitCount.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiPrefetchControlArea @ 0x140423A90 (MiPrefetchControlArea.c)
 *     MiMapImageInSystemSpace @ 0x140497368 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1404974E0 (MiUnmapImageInSystemSpace.c)
 */

__int64 __fastcall MiSetPagesModified(__int64 a1, int a2)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // rbx
  unsigned int EffectivePagePriorityThread; // eax
  int v9; // edi
  __int64 v10; // r13
  __int64 v11; // r9
  _BYTE *v12; // rdi
  __int64 v13; // r15
  __int64 v14; // r9
  LONG *SharedVm; // rbx
  KIRQL v16; // al
  __int64 v17; // r13
  unsigned __int64 v18; // rbx
  LONG *v19; // rax
  __int64 v20; // rdi
  __int64 CommittedPages; // rbx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r15
  struct _KTHREAD *v24; // r13
  volatile signed __int64 *v25; // rdi
  signed __int64 v26; // rax
  volatile signed __int64 v27; // rtt
  unsigned __int8 v28; // [rsp+30h] [rbp-108h]
  __int64 v30; // [rsp+48h] [rbp-F0h]
  _QWORD v31[4]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+70h] [rbp-C8h]
  unsigned __int64 v33; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v34; // [rsp+80h] [rbp-B8h]
  _BYTE *v35; // [rsp+88h] [rbp-B0h]
  __int64 v36; // [rsp+90h] [rbp-A8h]
  __int64 v37; // [rsp+98h] [rbp-A0h]
  unsigned __int64 v38; // [rsp+A0h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-90h]
  _QWORD v40[3]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v41; // [rsp+C8h] [rbp-70h]
  void *retaddr; // [rsp+138h] [rbp+0h]

  v4 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v31[1] = v4;
  v37 = *(_QWORD *)a1;
  v31[2] = v37;
  v5 = *(unsigned int *)(v37 + 8);
  v31[3] = v5;
  if ( !(unsigned int)MiChargeCommit(v4, (unsigned int)v5, 0LL) )
    return 3221225773LL;
  v7 = *(_QWORD *)(a1 + 136);
  v33 = v7;
  v34 = v7;
  v38 = v7 + 8 * v5;
  CurrentThread = KeGetCurrentThread();
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  if ( EffectivePagePriorityThread > 5 )
    EffectivePagePriorityThread = 5;
  MiPrefetchControlArea(a1, CLFS_LSN_NULL_EXT, 0, EffectivePagePriorityThread, 0, a2);
  v9 = MiMapImageInSystemSpace(a1, 3LL, v40);
  if ( v9 >= 0 )
  {
    v10 = v41;
    v32 = v41;
    v11 = v40[0];
    v30 = v40[0];
    v12 = (_BYTE *)(((v40[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v13 = 0LL;
    while ( 1 )
    {
      v36 = v11;
      v35 = v12;
      if ( v7 >= v38 )
        break;
      v31[0] = MI_READ_PTE_LOCK_FREE(v7);
      if ( v31[0] )
      {
        while ( 1 )
        {
          SharedVm = MiGetSharedVm(v10);
          v16 = ExAcquireSpinLockExclusive(SharedVm);
          v28 = v16;
          SharedVm[1] = 0;
          if ( (*v12 & 1) != 0 )
            break;
          MiUnlockWorkingSetExclusive(v10, v16);
        }
        ++v13;
        v31[0] = MI_READ_PTE_LOCK_FREE(v12);
        v17 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v31) - 0x58000000000LL;
        if ( (*(_QWORD *)(v17 + 40) & 0x200000000000000LL) != 0 )
        {
          v18 = 0LL;
          MiLockPageAtDpcInline(v17);
          if ( (*(_DWORD *)(v17 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v17 + 34) & 8) == 0 )
            v18 = MiCapturePageFileInfoInline((_QWORD *)(v17 + 16), 1, 0);
          *(_BYTE *)(v17 + 34) |= 0x10u;
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v18 )
            MiReleasePageFileInfo(
              *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v17 + 40) >> 40) & 0x3FFLL)),
              v18,
              1);
        }
        v10 = v32;
        MiPreUnlockWorkingSetExclusive(v32, v28);
        v19 = MiGetSharedVm(v10);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v19, retaddr);
        else
          *v19 = 0;
        __writecr8(v28);
        v14 = v30;
        v7 = v33;
      }
      v7 += 8LL;
      v33 = v7;
      v34 = v7;
      v12 += 8;
      v11 = v14 + 4096;
      v30 = v11;
    }
    v20 = v37;
    MiUnmapImageInSystemSpace(v40);
    CommittedPages = MiGetCommittedPages((_QWORD *)a1);
    v22 = CommittedPages - v13 + v5;
    if ( v22 )
      MiReturnCommit(v4, v22);
    v23 = v13 - CommittedPages;
    if ( v23 )
    {
      v24 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      v25 = (volatile signed __int64 *)(v20 + 40);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v25, 0LL);
      MiUpdateControlAreaCommitCount(a1, v23);
      if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        v26 = *v25;
        if ( (*v25 & 5) == 0 && (v26 & 2) != 0 )
        {
          v27 = *v25;
          if ( v27 == _InterlockedCompareExchange64(v25, v26 + 4, v26) )
            ExpWakePushLock(v25, v26 + 4);
        }
      }
      KeAbPostRelease((ULONG_PTR)v25);
      KiLeaveGuardedRegionUnsafe((__int64)v24);
    }
    return 0LL;
  }
  else
  {
    MiReturnCommit(v4, v5);
    return (unsigned int)v9;
  }
}
