/*
 * XREFs of MmDuplicateMemory @ 0x140476A94
 * Callers:
 *     PopTransitionToSleep @ 0x140476910 (PopTransitionToSleep.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x140481BA4 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x14048217C (IopLiveDumpEstimateMemoryPages.c)
 *     PnprInitiateReplaceOperation @ 0x140482E4C (PnprInitiateReplaceOperation.c)
 *     MmCreateMirror @ 0x14074BE90 (MmCreateMirror.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14006FF50 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140070288 (MiLockDynamicMemoryExclusive.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     MmUnlockPagableImageSection @ 0x1400C1700 (MmUnlockPagableImageSection.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiMirrorPerformBlackWrites @ 0x140156348 (MiMirrorPerformBlackWrites.c)
 *     MiMirrorPerformBrownWrites @ 0x14015649C (MiMirrorPerformBrownWrites.c)
 *     MiMirrorGatherBrownPages @ 0x140156670 (MiMirrorGatherBrownPages.c)
 *     MiLockAllMemoryLists @ 0x140156D6C (MiLockAllMemoryLists.c)
 *     MiUnlockAllMemoryLists @ 0x140156DA4 (MiUnlockAllMemoryLists.c)
 *     MiResumeFromHibernate @ 0x140156DDC (MiResumeFromHibernate.c)
 *     MiMirrorVerify @ 0x140157168 (MiMirrorVerify.c)
 *     MiMirrorReduceBlackWrites @ 0x1401573F4 (MiMirrorReduceBlackWrites.c)
 *     CcNotifyWriteBehind @ 0x140157744 (CcNotifyWriteBehind.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     MiEmptyAllWorkingSets @ 0x1402597C0 (MiEmptyAllWorkingSets.c)
 *     MiRemoveEnclavePagesFromMirror @ 0x140485B88 (MiRemoveEnclavePagesFromMirror.c)
 *     MmLockPagableSectionByHandle @ 0x14053EAD0 (MmLockPagableSectionByHandle.c)
 *     MiUpdateMirrorBitmaps @ 0x1405EFF68 (MiUpdateMirrorBitmaps.c)
 *     MiActOnMirrorBitmap @ 0x1405EFFA8 (MiActOnMirrorBitmap.c)
 */

__int64 __fastcall MmDuplicateMemory(__int64 a1)
{
  int v1; // edx
  char v3; // si
  unsigned int v4; // r12d
  struct _KTHREAD *CurrentThread; // rbp
  int v6; // r13d
  int v7; // r15d
  int v8; // edi
  __int64 v9; // rdx
  unsigned int v10; // r9d
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v12; // di
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // [rsp+30h] [rbp-58h]
  unsigned __int64 v22[10]; // [rsp+38h] [rbp-50h] BYREF
  int v23; // [rsp+90h] [rbp+8h]
  int v24; // [rsp+98h] [rbp+10h]
  int v25; // [rsp+A0h] [rbp+18h]

  v1 = *(_DWORD *)(a1 + 32);
  if ( (*(_BYTE *)(a1 + 32) & 5) == 5 )
    return 3221225485LL;
  v3 = v1 & 0xFA;
  v4 = 8;
  if ( (v1 & 8) == 0 )
    v3 = *(_DWORD *)(a1 + 32);
  if ( (v3 & 0xA) == 0 )
    CcNotifyWriteBehind();
  CurrentThread = KeGetCurrentThread();
  v23 = 0;
  v21 = (__int64)CurrentThread;
  v6 = 0;
  v7 = 0;
  KeWaitForSingleObject(&stru_1403CBDB0, WrVirtualMemory, 0, 0, 0LL);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CBD48, 0LL);
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  if ( (MiFlags & 4) == 0 )
    MmLockPagableSectionByHandle(ExPageLockHandle);
  _InterlockedIncrement(&dword_1403CC510);
  if ( (unsigned int)MiUpdateMirrorBitmaps() )
  {
    MiActOnMirrorBitmap(&qword_1403CBE00, 1LL);
    v25 = 0;
    v24 = 1;
    if ( (v3 & 1) != 0 )
    {
      v6 = 3;
    }
    else
    {
      if ( (v3 & 4) != 0 )
      {
        v4 = 7;
      }
      else
      {
        if ( (v3 & 8) == 0 )
          goto LABEL_14;
        v4 = 0;
      }
      v6 = 2;
    }
    v24 = 0;
LABEL_14:
    v8 = (*(__int64 (**)(void))a1)();
    if ( v8 < 0 )
    {
      v6 = 0;
    }
    else
    {
      while ( 1 )
      {
        MiActOnMirrorBitmap(&qword_1403CBDF0, 2LL);
        if ( v25 == ((v3 & 0xA) == 0) )
        {
          v7 = 1;
          _InterlockedIncrement(&dword_1403CC3E8);
        }
        if ( (v3 & 4) != 0 )
        {
          v10 = v4;
        }
        else
        {
          if ( (v3 & 0x10) == 0 )
            MiEmptyAllWorkingSets((__int64)&MiSystemPartition);
          v10 = 0;
        }
        dword_1403CBDAC = 1;
        MiMirrorGatherBrownPages(a1, v9, v6, v10);
        v8 = MiMirrorPerformBrownWrites(a1, v3, v22);
        if ( v8 < 0 )
          break;
        if ( v7 == 1 || v22[0] < 0x400 )
        {
          if ( (v3 & 2) == 0 && v7 == 1 )
          {
            _InterlockedAdd(&dword_1403CC3E8, 0xFFFFFFFF);
            v7 = 0;
          }
          CurrentIrql = KeGetCurrentIrql();
          v8 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(0LL);
          if ( v8 < 0 )
          {
            if ( v7 == 1 )
              _InterlockedAdd(&dword_1403CC3E8, 0xFFFFFFFF);
            dword_1403CBDAC = 0;
            __writecr8(CurrentIrql);
          }
          else
          {
            v12 = KeGetCurrentIrql();
            if ( *(_QWORD *)(a1 + 24) )
              MiActOnMirrorBitmap(&qword_1403CBDF0, 1LL);
            if ( v12 < 2u )
            {
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            MiLockAllMemoryLists();
            qword_1403CBDE8 = v21;
            if ( v7 == 1 )
              _InterlockedAdd(&dword_1403CC3E8, 0xFFFFFFFF);
            dword_1403CBDAC = 2;
            if ( qword_1403CB788 )
              MiRemoveEnclavePagesFromMirror(a1);
            MiMirrorReduceBlackWrites(a1, v13, v3, v4);
            v8 = MiMirrorPerformBlackWrites(a1);
            if ( v8 < 0 || (v8 = MiMirrorVerify(a1), v8 < 0) )
            {
              qword_1403CBDE8 = 0LL;
            }
            else
            {
              v14 = (*(__int64 (__fastcall **)(__int64))(a1 + 8))(1LL);
              qword_1403CBDE8 = 0LL;
              v8 = v14;
              if ( v14 == 1073742484 && !v24 )
              {
                v8 = 0;
                MiResumeFromHibernate(v4);
                v23 = 1;
              }
            }
            dword_1403CBDAC = 0;
            if ( CurrentIrql != 17 )
            {
              MiUnlockAllMemoryLists();
              __writecr8(CurrentIrql);
            }
          }
          goto LABEL_40;
        }
        ++v25;
      }
      if ( v7 == 1 )
        _InterlockedAdd(&dword_1403CC3E8, 0xFFFFFFFF);
      dword_1403CBDAC = 0;
LABEL_40:
      v6 = v23;
    }
    CurrentThread = (struct _KTHREAD *)v21;
    goto LABEL_42;
  }
  v8 = -1073741670;
LABEL_42:
  if ( (MiFlags & 4) == 0 )
    MmUnlockPagableImageSection(ExPageLockHandle);
  if ( v6 == 1 )
  {
    stru_1403CBDC8.Parameter = (void *)v4;
    ExQueueWorkItem(&stru_1403CBDC8, HyperCriticalWorkQueue);
  }
  else
  {
    _InterlockedAdd(&dword_1403CC510, 0xFFFFFFFF);
    KeSetEvent(&stru_1403CBDB0, 0, 0);
  }
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread, v15, v16);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CBD48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CBD48, v17, v18, v19);
  KeAbPostRelease((ULONG_PTR)&qword_1403CBD48);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v8;
}
