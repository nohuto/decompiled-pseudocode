/*
 * XREFs of MiSetPagesModified @ 0x140218768
 * Callers:
 *     MiCreateNewSection @ 0x1404F96D0 (MiCreateNewSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiUpdateControlAreaCommitCount @ 0x14001FCD0 (MiUpdateControlAreaCommitCount.c)
 *     MiGetEffectivePagePriorityThread @ 0x140028114 (MiGetEffectivePagePriorityThread.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MiGetCommittedPages @ 0x1400A2BFC (MiGetCommittedPages.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiPrefetchControlArea @ 0x1404F605C (MiPrefetchControlArea.c)
 *     MiUnmapImageInSystemSpace @ 0x1404F73D4 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x1404F7424 (MiMapImageInSystemSpace.c)
 */

__int64 __fastcall MiSetPagesModified(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned __int64 v7; // r15
  __int64 *v9; // r12
  unsigned int EffectivePagePriorityThread; // eax
  int v11; // ebx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 *v14; // rsi
  __int64 v15; // r14
  __int64 PteShadow; // rax
  LONG *SharedVm; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  KIRQL v21; // r13
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r13
  unsigned __int64 v25; // rbx
  LONG *v26; // rax
  LONG *v27; // rax
  __int64 v28; // r13
  __int64 v29; // rsi
  __int64 CommittedPages; // rbx
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r14
  struct _KTHREAD *v33; // r15
  volatile signed __int64 *v34; // rsi
  unsigned __int8 v35; // [rsp+30h] [rbp-108h]
  __int64 v36; // [rsp+38h] [rbp-100h]
  __int64 v37; // [rsp+40h] [rbp-F8h]
  _QWORD v39[4]; // [rsp+58h] [rbp-E0h] BYREF
  __int64 *v40; // [rsp+78h] [rbp-C0h]
  __int64 *v41; // [rsp+80h] [rbp-B8h]
  __int64 v42; // [rsp+88h] [rbp-B0h]
  __int64 v43; // [rsp+90h] [rbp-A8h]
  __int64 v44; // [rsp+98h] [rbp-A0h]
  __int64 *v45; // [rsp+A0h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-90h]
  _QWORD v47[3]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-70h]
  void *retaddr; // [rsp+138h] [rbp+0h]

  v6 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v43 = v6;
  v39[1] = v6;
  v44 = *(_QWORD *)a1;
  v39[2] = v44;
  v7 = *(unsigned int *)(v44 + 8);
  v39[3] = v7;
  if ( !(unsigned int)MiChargeCommit(v6, (unsigned int)v7, 0LL, a4) )
    return 3221225773LL;
  v9 = *(__int64 **)(a1 + 136);
  v40 = v9;
  v45 = &v9[v7];
  CurrentThread = KeGetCurrentThread();
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  if ( EffectivePagePriorityThread > 5 )
    EffectivePagePriorityThread = 5;
  MiPrefetchControlArea(a1, RtlpInterceptorRoutines, 0, EffectivePagePriorityThread, 0, a2);
  v11 = MiMapImageInSystemSpace(a1, 3LL, v47);
  if ( v11 >= 0 )
  {
    v12 = v48;
    v37 = v48;
    v13 = v47[0];
    v36 = v47[0];
    v14 = (__int64 *)(((v47[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v15 = 0LL;
    while ( 1 )
    {
      v42 = v13;
      v41 = v14;
      if ( v9 >= v45 )
        break;
      PteShadow = *v9;
      if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        PteShadow = MiReadPteShadow();
        v13 = v36;
      }
      v39[0] = PteShadow;
      if ( PteShadow )
      {
        while ( 1 )
        {
          SharedVm = MiGetSharedVm(v12);
          v21 = ExAcquireSpinLockExclusive(SharedVm);
          v35 = v21;
          SharedVm[1] = 0;
          v22 = *v14;
          if ( (*v14 & 1) != 0 )
            break;
          v12 = v37;
          MiPreUnlockWorkingSetExclusive(v37, v21);
          v27 = MiGetSharedVm(v37);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v27, retaddr);
          else
            *v27 = 0;
          __writecr8(v21);
        }
        ++v15;
        if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL )
          v22 = MiReadPteShadow();
        v39[0] = v22;
        v23 = MI_GET_PFN_FROM_PTE(v39, v18, v19, v20);
        v24 = v23;
        if ( (*(_QWORD *)(v23 + 40) & 0x200000000000000LL) != 0 )
        {
          v25 = 0LL;
          MiLockPageAtDpcInline(v23);
          if ( (*(_DWORD *)(v24 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v24 + 34) & 8) == 0 )
            v25 = MiCapturePageFileInfoInline((unsigned __int64 *)(v24 + 16), 1, 0);
          *(_BYTE *)(v24 + 34) |= 0x10u;
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v25 )
            MiReleasePageFileInfo(
              *(struct _KEVENT **)(qword_140388AF0 + 8 * ((*(_QWORD *)(v24 + 40) >> 40) & 0x3FFLL)),
              v25,
              1);
        }
        MiPreUnlockWorkingSetExclusive(v37, v35);
        v26 = MiGetSharedVm(v37);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v26, retaddr);
        else
          *v26 = 0;
        __writecr8(v35);
        v13 = v36;
      }
      v40 = ++v9;
      ++v14;
      v13 += 4096LL;
      v36 = v13;
      v12 = v37;
    }
    v28 = v43;
    v29 = v44;
    MiUnmapImageInSystemSpace(v47, v13, 0xFFFFF6FB7DBED7F8uLL, 0xFFFFF6FB7DBED000uLL);
    CommittedPages = MiGetCommittedPages((_QWORD *)a1);
    v31 = CommittedPages - v15 + v7;
    if ( v31 )
      MiReturnCommit(v28, v31);
    v32 = v15 - CommittedPages;
    if ( v32 )
    {
      v33 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      v34 = (volatile signed __int64 *)(v29 + 40);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v34, 0LL);
      MiUpdateControlAreaCommitCount(a1, v32);
      if ( (_InterlockedExchangeAdd64(v34, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v34);
      KeAbPostRelease((ULONG_PTR)v34);
      KiLeaveGuardedRegionUnsafe((__int64)v33);
    }
    return 0LL;
  }
  else
  {
    MiReturnCommit(v6, v7);
    return (unsigned int)v11;
  }
}
