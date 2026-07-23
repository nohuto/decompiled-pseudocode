/*
 * XREFs of MmResourcesAvailable @ 0x14012A820
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KePulseEvent @ 0x140082D10 (KePulseEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     MiFreeExcessSegments @ 0x140126A94 (MiFreeExcessSegments.c)
 *     MiTrimSegmentCache @ 0x140167B80 (MiTrimSegmentCache.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiIssuePageExtendRequestNoWait @ 0x14021A398 (MiIssuePageExtendRequestNoWait.c)
 */

__int64 __fastcall MmResourcesAvailable(char a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR *v3; // r14
  int v4; // edi
  ULONG_PTR v8; // r11
  unsigned __int64 v9; // r12
  int v10; // ebx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // r15d
  unsigned __int64 v14; // rcx
  ULONG_PTR v15; // rcx
  ULONG_PTR v16; // rdx
  ULONG_PTR v17; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  int v23; // ebp
  struct _KEVENT *v24; // rcx
  struct _KTHREAD *CurrentThread; // r13
  struct _KEVENT *v26; // rcx
  struct _KTHREAD *v27; // r14
  __int64 SessionId; // rdx
  unsigned int v29; // r8d
  bool v30; // zf
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  _KLOCK_ENTRY *v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int16 v38; // ax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+A0h] [rbp+8h]
  int v45; // [rsp+B0h] [rbp+18h] BYREF
  struct _KTHREAD *v46; // [rsp+B8h] [rbp+20h]

  v3 = &MiSystemPartition;
  v4 = 0;
  v8 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v10 = a1 & 1;
  if ( (a1 & 1) == 0 )
  {
    v11 = MiState[0] - qword_14036BD18;
    goto LABEL_4;
  }
  if ( (a1 & 0x20) == 0 )
  {
    v11 = qword_14036D098 - qword_14036D088;
LABEL_4:
    v12 = v11 << 12;
    goto LABEL_5;
  }
  v19 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v20 = (unsigned __int64)*(unsigned int *)(v19 + 7996) << 21;
  v21 = *(_QWORD *)(v19 + 208) << 12;
  v22 = v20 - v21;
  if ( v20 <= v21 )
    v22 = 0LL;
  v12 = ((0x10000LL - *(unsigned int *)(v19 + 8004)) << 21) + v22;
  v3 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v9 + 3180));
LABEL_5:
  v13 = 0;
  if ( a3 == 16 )
    v14 = a2 + 0x80000;
  else
    v14 = a2 + 0x200000;
  if ( v14 <= v12 )
  {
    if ( v10 && ((v15 = v3[617], v16 = v3[766], v16 > v15) ? (v17 = 0LL) : (v17 = v15 - v16), v8 > v17) )
    {
      MiIssuePageExtendRequestNoWait(v3, v8, 0LL);
    }
    else
    {
      if ( a2 + 10485760 < v12 || v3[698] < 0x40000 )
        return 1LL;
      v13 = 1;
    }
  }
  v23 = a1 & 0x20;
  if ( !v23 )
  {
    if ( v10 )
    {
      ++dword_14036BDA0;
      CurrentThread = KeGetCurrentThread();
      v46 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036D058, 0LL);
      v26 = (struct _KEVENT *)v3[35];
      if ( !v26->Header.SignalState )
        KePulseEvent(v26, 0, 0);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036D058, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036D058);
      v45 = 0;
      v27 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_14036D058) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx(v27->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --v27->SpecialApcDisable;
      ++v27->AbAllocationRegionCount;
      v29 = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
      AbAllocationRegionCount = v27->AbAllocationRegionCount;
      v30 = !_BitScanReverse((unsigned int *)&v31, v29);
      if ( v30 )
      {
LABEL_57:
        if ( (*((_DWORD *)&v27->0 + 1) & 0x8000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v27, (ULONG_PTR)&qword_14036D058, (unsigned int)SessionId, 0LL);
      }
      else
      {
        while ( 1 )
        {
          v32 = 1 << v31;
          v33 = v31;
          v34 = &v27->LockEntries[v33];
          v29 &= ~v32;
          if ( (v34->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v34->LockState.0 & 1) == 0
            && (*(_QWORD *)&v34->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14036D058 & 0x7FFFFFFFFFFFFFFCLL)
            && v34->LockState.SessionId == (_DWORD)SessionId )
          {
            v34->AcquiredByte &= ~1u;
            if ( v34->LockState.0 )
              break;
          }
          v30 = !_BitScanReverse((unsigned int *)&v31, v29);
          if ( v30 )
            goto LABEL_56;
        }
        if ( !v34 )
        {
LABEL_56:
          CurrentThread = v46;
          goto LABEL_57;
        }
        v34->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v34->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v27->LockEntries[v33].TreeNode, SessionId);
        v45 = 0;
        v45 = v34->BoostBitmap.AllFields & 0x1FFFF;
        v34->BoostBitmap.AllFields &= 0xFFFE0000;
        v34->ThreadLocalFlags &= ~1u;
        v34->LockState.0 = 0LL;
        v35 = (unsigned __int128)(((char *)v34 - (char *)v27 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
        CurrentThread = v46;
        v36 = ((unsigned __int64)v35 >> 63) + (v35 >> 4);
        if ( AbAllocationRegionCount == 1 )
          v27->AbEntrySummary |= 1 << v36;
        else
          _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, 1 << v36);
      }
      --v27->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(&v27->Header.Lock, (__int64)&qword_14036D058, (unsigned int *)&v45);
      v38 = v27->SpecialApcDisable + 1;
      v27->SpecialApcDisable = v38;
      if ( !v38 && ($69CD3F157F9F39B6F7113F2231989901 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
        KiCheckForKernelApcDelivery(v37);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    else
    {
      ++dword_14036BD9C;
      KeAcquireInStackQueuedSpinLock(v3 + 584, &LockHandle);
      v24 = (struct _KEVENT *)v3[37];
      if ( !v24->Header.SignalState )
        KePulseEvent(v24, 0, 0);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    if ( !(unsigned int)MiFreeExcessSegments() )
      MiTrimSegmentCache(v40, v39, v41);
  }
  if ( !v13 )
  {
    LOBYTE(v4) = a3 != 16;
    v42 = (unsigned int)(v4 + 1);
    if ( v10 )
    {
      if ( v23 )
      {
        ++*((_DWORD *)&MiState[9] + v42);
        ++*(_DWORD *)(v9 + 88);
      }
      else
      {
        ++*((_DWORD *)&MiState[7] + v42 + 1);
      }
    }
    else
    {
      ++*((_DWORD *)&MiState[6] + v42);
    }
    ++dword_14036BD58;
  }
  return v13;
}
