/*
 * XREFs of MmResourcesAvailable @ 0x1400869F0
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x140086940 (ExAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KePulseEvent @ 0x140081280 (KePulseEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiFreeExcessSegments @ 0x1400C6548 (MiFreeExcessSegments.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiIssuePageExtendRequest @ 0x14025F94C (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MmResourcesAvailable(char a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR *v3; // r15
  ULONG_PTR v7; // r11
  unsigned __int64 v8; // r12
  int v9; // edi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // r14d
  unsigned __int64 v13; // rcx
  ULONG_PTR v14; // rcx
  ULONG_PTR v15; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  int v21; // ebp
  struct _KEVENT *v22; // rcx
  struct _KTHREAD *CurrentThread; // r13
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _KEVENT *v27; // rcx
  struct _KTHREAD *v28; // r15
  unsigned int SessionId; // edx
  unsigned int v30; // r8d
  bool v31; // zf
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  _KLOCK_ENTRY *v35; // r13
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+A0h] [rbp+8h]
  int v41; // [rsp+B0h] [rbp+18h] BYREF
  struct _KTHREAD *v42; // [rsp+B8h] [rbp+20h]

  v3 = &MiSystemPartition;
  v7 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v8 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v9 = a1 & 1;
  if ( (a1 & 1) == 0 )
  {
    v10 = MiState[0] - qword_1403CB118;
    goto LABEL_4;
  }
  if ( (a1 & 0x20) == 0 )
  {
    v10 = qword_1403CC5D8 - qword_1403CC5C8;
LABEL_4:
    v11 = v10 << 12;
    goto LABEL_5;
  }
  v17 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v18 = (unsigned __int64)*(unsigned int *)(v17 + 8124) << 21;
  v19 = *(_QWORD *)(v17 + 208) << 12;
  v20 = v18 - v19;
  if ( v18 <= v19 )
    v20 = 0LL;
  v11 = ((0x10000LL - *(unsigned int *)(v17 + 8132)) << 21) + v20;
  v3 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(v8 + 3182));
LABEL_5:
  v12 = 0;
  if ( a3 == 16 )
    v13 = a2 + 0x80000;
  else
    v13 = a2 + 0x200000;
  if ( v13 <= v11 )
  {
    if ( !v9 )
      goto LABEL_25;
    v14 = v3[925];
    v15 = v3[769] - v14;
    if ( v14 > v3[769] )
      v15 = 0LL;
    if ( v7 > v15 )
    {
      MiIssuePageExtendRequest(v3, v7, 2LL);
    }
    else
    {
LABEL_25:
      if ( a2 + 10485760 < v11 || v3[858] < 0x40000 )
        return 1LL;
      v12 = 1;
    }
  }
  v21 = a1 & 0x20;
  if ( !v21 )
  {
    if ( v9 )
    {
      ++dword_1403CB1A0;
      CurrentThread = KeGetCurrentThread();
      v42 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
      v27 = (struct _KEVENT *)v3[30];
      if ( !v27->Header.SignalState )
        KePulseEvent(v27, 0, 0);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2, v24, v25, v26);
      v41 = 0;
      v28 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(&BugCheckParameter2) == 1 )
        SessionId = MmGetSessionIdEx(v28->ApcState.Process);
      else
        SessionId = -1;
      --v28->SpecialApcDisable;
      ++v28->AbAllocationRegionCount;
      v30 = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
      AbAllocationRegionCount = v28->AbAllocationRegionCount;
      v31 = !_BitScanReverse((unsigned int *)&v32, v30);
      if ( v31 )
      {
LABEL_57:
        if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v28, (ULONG_PTR)&BugCheckParameter2, SessionId, 0LL);
      }
      else
      {
        while ( 1 )
        {
          v33 = 1 << v32;
          v34 = v32;
          v35 = &v28->LockEntries[v34];
          v30 &= ~v33;
          if ( (v35->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v35->LockState.0 & 1) == 0
            && (*(_QWORD *)&v35->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
            && v35->LockState.SessionId == SessionId )
          {
            v35->AcquiredByte &= ~1u;
            if ( v35->LockState.0 )
              break;
          }
          v31 = !_BitScanReverse((unsigned int *)&v32, v30);
          if ( v31 )
            goto LABEL_56;
        }
        if ( !v35 )
        {
LABEL_56:
          CurrentThread = v42;
          goto LABEL_57;
        }
        v35->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v35->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v28->LockEntries[v34].TreeNode);
        v41 = 0;
        v41 = v35->BoostBitmap.AllFields & 0x1FFFF;
        v35->BoostBitmap.AllFields &= 0xFFFE0000;
        v35->ThreadLocalFlags &= ~1u;
        v35->LockState.0 = 0LL;
        v36 = (unsigned __int128)(((char *)v35 - (char *)v28 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
        CurrentThread = v42;
        v37 = ((unsigned __int64)v36 >> 63) + (v36 >> 4);
        if ( AbAllocationRegionCount == 1 )
          v28->AbEntrySummary |= 1 << v37;
        else
          _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v37);
      }
      --v28->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v28, &BugCheckParameter2, &v41);
      v31 = v28->SpecialApcDisable++ == -1;
      if ( v31 && ($005F0E83B22994B61E86C72E0CE43C71 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe(CurrentThread);
    }
    else
    {
      ++dword_1403CB19C;
      KeAcquireInStackQueuedSpinLock(v3 + 608, &LockHandle);
      v22 = (struct _KEVENT *)v3[32];
      if ( !v22->Header.SignalState )
        KePulseEvent(v22, 0, 0);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    MiFreeExcessSegments();
  }
  if ( !v12 )
  {
    v38 = 4LL;
    if ( a3 != 16 )
      v38 = 8LL;
    if ( v9 )
    {
      if ( v21 )
      {
        ++*(_DWORD *)((char *)&MiState[9] + v38);
        ++*(_DWORD *)(v8 + 88);
      }
      else
      {
        ++*(_DWORD *)((char *)&MiState[7] + v38 + 4);
      }
    }
    else
    {
      ++*(_DWORD *)((char *)&MiState[6] + v38);
    }
    ++dword_1403CB158;
  }
  return v12;
}
