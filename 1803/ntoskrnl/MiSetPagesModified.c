/*
 * XREFs of MiSetPagesModified @ 0x14025545C
 * Callers:
 *     MiCreateNewSection @ 0x1404BE6AC (MiCreateNewSection.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiUpdateControlAreaCommitCount @ 0x14004B4CC (MiUpdateControlAreaCommitCount.c)
 *     MiGetEffectivePagePriorityThread @ 0x14005605C (MiGetEffectivePagePriorityThread.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiGetCommittedPages @ 0x1400E7A14 (MiGetCommittedPages.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiMapImageInSystemSpace @ 0x1404BD390 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14053D034 (MiUnmapImageInSystemSpace.c)
 *     MiPrefetchControlArea @ 0x14053E190 (MiPrefetchControlArea.c)
 */

__int64 __fastcall MiSetPagesModified(__int64 *a1, int a2)
{
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // r13
  unsigned int EffectivePagePriorityThread; // eax
  int v9; // ebx
  __int64 v10; // rbx
  __int64 v11; // r9
  unsigned __int64 v12; // rdi
  __int64 v13; // r15
  __int64 v14; // r9
  unsigned __int64 valid; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  unsigned __int8 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 CommittedPages; // rbx
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // r15
  struct _KTHREAD *v26; // r12
  ULONG_PTR v27; // r14
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _KTHREAD *v31; // rbx
  __int64 v32; // rdx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v34; // r15
  _KLOCK_ENTRY *v35; // rdi
  unsigned int v36; // r8d
  __int64 v37; // rcx
  bool v38; // zf
  __int64 v39; // rcx
  __int64 v40; // rdx
  unsigned __int8 v41; // [rsp+30h] [rbp-128h]
  _DWORD v42[3]; // [rsp+34h] [rbp-124h] BYREF
  unsigned __int64 v43; // [rsp+40h] [rbp-118h]
  _QWORD *v44; // [rsp+48h] [rbp-110h]
  int v45; // [rsp+50h] [rbp-108h]
  __int64 v46; // [rsp+58h] [rbp-100h]
  __int64 v47; // [rsp+60h] [rbp-F8h]
  __int64 v48; // [rsp+68h] [rbp-F0h]
  _QWORD v49[6]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 v51; // [rsp+A8h] [rbp-B0h]
  unsigned __int64 v52; // [rsp+B0h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-A0h]
  unsigned __int64 v54; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v55[3]; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v56; // [rsp+E8h] [rbp-70h]

  v44 = a1;
  v4 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*((_WORD *)a1 + 30) & 0x3FF));
  v49[1] = v4;
  v50 = *a1;
  v49[2] = v50;
  v5 = *(unsigned int *)(v50 + 8);
  v49[3] = v5;
  if ( !(unsigned int)MiChargeCommit(v4, (unsigned int)v5, 0) )
    return 3221225773LL;
  v7 = a1[17];
  v43 = v7;
  v51 = v7 + 8 * v5;
  CurrentThread = KeGetCurrentThread();
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  if ( EffectivePagePriorityThread > 5 )
    EffectivePagePriorityThread = 5;
  MiPrefetchControlArea((_DWORD)a1, RtlpInterceptorRoutines, 0, EffectivePagePriorityThread, 0, a2);
  v9 = MiMapImageInSystemSpace(a1, 3LL, v55);
  if ( v9 >= 0 )
  {
    v10 = v56;
    v46 = v56;
    v11 = v55[0];
    v48 = v55[0];
    v12 = ((v55[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = 0LL;
    v47 = 0LL;
    v42[1] = 0;
    while ( 1 )
    {
      v49[5] = v11;
      v49[4] = v12;
      if ( v7 >= v51 )
        break;
      v49[0] = MI_READ_PTE_LOCK_FREE(v7);
      if ( v49[0] )
      {
        while ( 1 )
        {
          v41 = MiLockWorkingSetShared(v10);
          valid = MiLockLowestValidPageTable(v10, v12, &v54);
          v52 = valid;
          if ( valid == ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (*(_BYTE *)v12 & 1) != 0 )
            break;
          MiUnlockPageTableInternal(v10, valid);
          MiUnlockWorkingSetShared(v10, v41, v21);
        }
        v47 = ++v13;
        v49[0] = MI_READ_PTE_LOCK_FREE(v12);
        v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v49) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        v43 = v16;
        if ( (*(_QWORD *)(v16 + 40) & 0x200000000000000LL) != 0 )
        {
          v17 = 0LL;
          MiLockPageAtDpcInline(v16);
          v18 = v43;
          v19 = *(_BYTE *)(v43 + 34);
          if ( (((*(_QWORD *)(v43 + 16) & 0x400LL) == 0) & (unsigned __int8)~(v19 >> 3)) != 0 )
          {
            v17 = MiCapturePageFileInfoInline((_QWORD *)(v43 + 16), 1, 0);
            v18 = v43;
            v19 = *(_BYTE *)(v43 + 34);
          }
          *(_BYTE *)(v18 + 34) = v19 | 0x10;
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v17 )
            MiReleasePageFileInfo(
              *(struct _KEVENT **)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL)),
              v17,
              1);
          v10 = v46;
        }
        MiUnlockPageTableInternal(v10, v52);
        MiUnlockWorkingSetShared(v10, v41, v20);
        v14 = v48;
      }
      v7 += 8LL;
      v43 = v7;
      v12 += 8LL;
      v11 = v14 + 4096;
      v48 = v11;
    }
    v22 = v50;
    MiUnmapImageInSystemSpace(v55);
    CommittedPages = MiGetCommittedPages(v44);
    v24 = CommittedPages - v13 + v5;
    if ( v24 )
      MiReturnCommit(v4, v24);
    v25 = v13 - CommittedPages;
    if ( v25 )
    {
      v26 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      v27 = v22 + 40;
      ExAcquirePushLockExclusiveEx(v22 + 40, 0LL);
      MiUpdateControlAreaCommitCount((__int64)v44, v25);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v22 + 40), v28, v29, v30);
      v42[0] = 0;
      v31 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v22 + 40) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx((__int64)v31->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --v31->SpecialApcDisable;
      v34 = ++v31->AbAllocationRegionCount;
      v35 = 0LL;
      v36 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v38 = !_BitScanReverse((unsigned int *)&v39, v36);
        v45 = v39;
        if ( v38 )
          break;
        v36 &= ~(1 << v39);
        v37 = v39;
        v32 = (__int64)&v31->LockEntries[v37];
        if ( (*(_BYTE *)(v32 + 26) & 1) != 0
          && (*(_DWORD *)(v32 + 32) & 1) == 0
          && (*(_QWORD *)(v32 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v27 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v32 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v32 + 26) &= ~1u;
          if ( *(_QWORD *)(v32 + 32) )
          {
            v35 = &v31->LockEntries[v37];
            break;
          }
        }
      }
      if ( v35 )
      {
        v35->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v35->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v35->TreeNode, v32);
        v42[0] = 0;
        v42[0] = v35->BoostBitmap.AllFields & 0x1FFFF;
        v35->BoostBitmap.AllFields &= 0xFFFE0000;
        v35->ThreadLocalFlags &= ~1u;
        v35->LockState.0 = 0LL;
        v40 = ((char *)v35 - (char *)v31 - 800) / 96;
        if ( v34 == 1 )
          v31->AbEntrySummary |= 1 << v40;
        else
          _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, 1 << v40);
      }
      else if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
      {
        KeBugCheckEx(0x162u, (ULONG_PTR)v31, v27, SessionId, 0LL);
      }
      --v31->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v31, v27, (__int64)v42);
      v38 = v31->SpecialApcDisable++ == -1;
      if ( v38 && ($005F0E83B22994B61E86C72E0CE43C71 *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe((__int64)v26);
    }
    return 0LL;
  }
  else
  {
    MiReturnCommit(v4, v5);
    return (unsigned int)v9;
  }
}
