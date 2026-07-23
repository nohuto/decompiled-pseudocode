/*
 * XREFs of MiInitializeMirroring @ 0x140803C7C
 * Callers:
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     MiSizeMemoryListLocks @ 0x14045EEA0 (MiSizeMemoryListLocks.c)
 *     MiUpdateMirrorBitmaps @ 0x14057AB34 (MiUpdateMirrorBitmaps.c)
 *     MiInitializeDynamicBitmap @ 0x14057E66C (MiInitializeDynamicBitmap.c)
 */

__int64 MiInitializeMirroring()
{
  SIZE_T v0; // rdi
  PVOID PoolWithTag; // rax
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  _RTL_BITMAP_EX *v4; // rsi
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v6; // edi
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  ULONG_PTR v9; // rax
  struct _KTHREAD *v11; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v13; // si
  unsigned int v14; // r8d
  bool v15; // zf
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int16 v22; // ax
  _RTL_BITMAP_EX v23; // [rsp+30h] [rbp-48h] BYREF
  int v24; // [rsp+80h] [rbp+8h] BYREF
  int v25; // [rsp+88h] [rbp+10h]

  stru_14036C920.Header.Size = 6;
  stru_14036C920.Header.WaitListHead.Blink = &stru_14036C920.Header.WaitListHead;
  stru_14036C920.Header.WaitListHead.Flink = &stru_14036C920.Header.WaitListHead;
  LOWORD(stru_14036C920.Header.Lock) = 1;
  stru_14036C938.WorkerRoutine = (void (__fastcall *)(void *))MiFinishResume;
  stru_14036C920.Header.SignalState = 1;
  stru_14036C938.Parameter = (void *)-1LL;
  stru_14036C938.List.Flink = 0LL;
  v0 = MiSizeMemoryListLocks();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x614C6D4Du);
  v2 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v0);
    qword_1403814A8 = v2;
    v4 = &stru_14036C960;
    CurrentThread = KeGetCurrentThread();
    v6 = 0;
    v7 = qword_14036C290;
    v8 = (((unsigned __int64)(qword_14036C290 + 8) >> 3) + 4095) >> 12;
    while ( 1 )
    {
      v9 = MiReservePtes((__int64)&qword_14036D0A0, (unsigned int)v8, v3);
      if ( !v9 || !(unsigned int)MiInitializeDynamicBitmap(&v23, (__int64)(v9 << 25) >> 16, v7 + 1, 24) )
        break;
      v23.SizeOfBitMap = 0LL;
      ++v6;
      *v4++ = v23;
      if ( v6 >= 2 )
      {
        if ( (dword_1403E3118 & 1) != 0 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403802E0, 0LL);
          MiUpdateMirrorBitmaps();
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403802E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403802E0);
          v24 = 0;
          v11 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_1403802E0) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx(v11->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
          --v11->SpecialApcDisable;
          v13 = ++v11->AbAllocationRegionCount;
          v14 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v15 = !_BitScanReverse((unsigned int *)&v16, v14);
            v25 = v16;
            if ( v15 )
              goto LABEL_16;
            v17 = 1 << v16;
            v18 = v16;
            v19 = &v11->LockEntries[v18];
            v14 &= ~v17;
            if ( (v19->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v19->LockState.0 & 1) == 0
              && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_1403802E0 & 0x7FFFFFFFFFFFFFFCLL)
              && v19->LockState.SessionId == (_DWORD)SessionId )
            {
              v19->AcquiredByte &= ~1u;
              if ( v19->LockState.0 )
                break;
            }
          }
          if ( !v19 )
          {
LABEL_16:
            if ( (*((_DWORD *)&v11->0 + 1) & 0x8000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v11, (ULONG_PTR)&qword_1403802E0, (unsigned int)SessionId, 0LL);
            goto LABEL_28;
          }
          v19->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v19->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v11->LockEntries[v18].TreeNode, SessionId);
          v24 = 0;
          v24 = v19->BoostBitmap.AllFields & 0x1FFFF;
          v19->BoostBitmap.AllFields &= 0xFFFE0000;
          v19->ThreadLocalFlags &= ~1u;
          v19->LockState.0 = 0LL;
          v20 = ((char *)v19 - (char *)v11 - 800) / 96;
          if ( v13 == 1 )
            v11->AbEntrySummary |= 1 << v20;
          else
            _InterlockedOr8((volatile signed __int8 *)&v11->AbOrphanedEntrySummary, 1 << v20);
LABEL_28:
          --v11->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(&v11->Header.Lock, (__int64)&qword_1403802E0, (unsigned int *)&v24);
          v22 = v11->SpecialApcDisable + 1;
          v11->SpecialApcDisable = v22;
          if ( !v22 && ($69CD3F157F9F39B6F7113F2231989901 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
            KiCheckForKernelApcDelivery(v21);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        return 1LL;
      }
    }
  }
  return 0LL;
}
