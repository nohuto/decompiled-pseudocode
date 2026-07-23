/*
 * XREFs of MiInitializeMirroring @ 0x14089C980
 * Callers:
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiSizeMemoryListLocks @ 0x140584D18 (MiSizeMemoryListLocks.c)
 *     MiUpdateMirrorBitmaps @ 0x1405EFF68 (MiUpdateMirrorBitmaps.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 */

__int64 MiInitializeMirroring()
{
  SIZE_T v0; // rdi
  PVOID PoolWithTag; // rax
  __int64 v2; // rbx
  __int64 *v3; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned int v7; // edi
  ULONG_PTR v8; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *v13; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v15; // si
  unsigned int v16; // r8d
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _KLOCK_ENTRY *v21; // rdi
  __int64 v22; // rdx
  __int128 v23; // [rsp+30h] [rbp-38h] BYREF
  int v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+78h] [rbp+10h]

  stru_1403CBDC8.List.Flink = 0LL;
  stru_1403CBDB0.Header.WaitListHead.Blink = &stru_1403CBDB0.Header.WaitListHead;
  stru_1403CBDB0.Header.WaitListHead.Flink = &stru_1403CBDB0.Header.WaitListHead;
  LOWORD(stru_1403CBDB0.Header.Lock) = 1;
  stru_1403CBDC8.WorkerRoutine = (void (__fastcall *)(void *))MiFinishResume;
  stru_1403CBDB0.Header.Size = 6;
  stru_1403CBDB0.Header.SignalState = 1;
  stru_1403CBDC8.Parameter = (void *)-1LL;
  v0 = MiSizeMemoryListLocks();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x614C6D4Du);
  v2 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v0);
    qword_1403CF2A8 = v2;
    v3 = qword_1403CBDF0;
    CurrentThread = KeGetCurrentThread();
    v5 = qword_1403CB780;
    v6 = (((unsigned __int64)(qword_1403CB780 + 8) >> 3) + 4095) >> 12;
    v7 = 0;
    while ( 1 )
    {
      v8 = MiReservePtes((__int64)&qword_1403CC5E0, v6);
      if ( !v8 || !(unsigned int)MiInitializeDynamicBitmap(&v23, (__int64)(v8 << 25) >> 16, v5 + 1, 12) )
        break;
      *(_QWORD *)&v23 = 0LL;
      ++v7;
      *(_OWORD *)v3 = v23;
      v3 += 2;
      if ( v7 >= 2 )
      {
        if ( (dword_14044B178 & 1) != 0 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CDFF8, 0LL);
          MiUpdateMirrorBitmaps();
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CDFF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CDFF8, v10, v11, v12);
          v24 = 0;
          v13 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_1403CDFF8) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx((__int64)v13->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
          --v13->SpecialApcDisable;
          v15 = ++v13->AbAllocationRegionCount;
          v16 = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v17 = !_BitScanReverse((unsigned int *)&v18, v16);
            v25 = v18;
            if ( v17 )
              goto LABEL_16;
            v19 = 1 << v18;
            v20 = v18;
            v21 = &v13->LockEntries[v20];
            v16 &= ~v19;
            if ( (v21->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v21->LockState.0 & 1) == 0
              && (*(_QWORD *)&v21->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_1403CDFF8 & 0x7FFFFFFFFFFFFFFCLL)
              && v21->LockState.SessionId == (_DWORD)SessionId )
            {
              v21->AcquiredByte &= ~1u;
              if ( v21->LockState.0 )
                break;
            }
          }
          if ( !v21 )
          {
LABEL_16:
            if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v13, (ULONG_PTR)&qword_1403CDFF8, (unsigned int)SessionId, 0LL);
            goto LABEL_28;
          }
          v21->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v21->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v13->LockEntries[v20].TreeNode, SessionId);
          v24 = 0;
          v24 = v21->BoostBitmap.AllFields & 0x1FFFF;
          v21->BoostBitmap.AllFields &= 0xFFFE0000;
          v21->ThreadLocalFlags &= ~1u;
          v21->LockState.0 = 0LL;
          v22 = ((char *)v21 - (char *)v13 - 800) / 96;
          if ( v15 == 1 )
            v13->AbEntrySummary |= 1 << v22;
          else
            _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v22);
LABEL_28:
          --v13->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v13, (__int64)&qword_1403CDFF8, (__int64)&v24);
          v17 = v13->SpecialApcDisable++ == -1;
          if ( v17 && ($005F0E83B22994B61E86C72E0CE43C71 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
            KiCheckForKernelApcDelivery();
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        return 1LL;
      }
    }
  }
  return 0LL;
}
