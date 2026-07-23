/*
 * XREFs of MiInitializeMirroring @ 0x14082ED28
 * Callers:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiSizeMemoryListLocks @ 0x14059F5C8 (MiSizeMemoryListLocks.c)
 *     MiInitializeDynamicBitmap @ 0x1405B70F8 (MiInitializeDynamicBitmap.c)
 *     MiUpdateMirrorBitmaps @ 0x1406E1088 (MiUpdateMirrorBitmaps.c)
 */

__int64 MiInitializeMirroring()
{
  SIZE_T v0; // rdi
  PVOID PoolWithTag; // rax
  __int64 v2; // rbx
  __int64 v3; // r8
  _RTL_BITMAP_EX *v4; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  unsigned int v8; // edi
  ULONG_PTR v9; // rax
  struct _KTHREAD *v11; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v13; // si
  unsigned int v14; // r8d
  bool v15; // zf
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  _RTL_BITMAP_EX v22; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+78h] [rbp+10h]

  stru_140388B30.List.Flink = 0LL;
  stru_140388B18.Header.WaitListHead.Blink = &stru_140388B18.Header.WaitListHead;
  stru_140388B18.Header.WaitListHead.Flink = &stru_140388B18.Header.WaitListHead;
  LOWORD(stru_140388B18.Header.Lock) = 1;
  stru_140388B30.WorkerRoutine = (void (__fastcall *)(void *))MiFinishResume;
  stru_140388B18.Header.Size = 6;
  stru_140388B18.Header.SignalState = 1;
  stru_140388B30.Parameter = (void *)-1LL;
  v0 = MiSizeMemoryListLocks();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x614C6D4Du);
  v2 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v0);
    qword_14038B3E8 = v2;
    v4 = &stru_140388B58;
    CurrentThread = KeGetCurrentThread();
    v6 = qword_1403885E0;
    v7 = (((unsigned __int64)(qword_1403885E0 + 8) >> 3) + 4095) >> 12;
    v8 = 0;
    while ( 1 )
    {
      v9 = MiReservePtes((__int64)&qword_140389360, (unsigned int)v7, v3);
      if ( !v9 || !(unsigned int)MiInitializeDynamicBitmap(&v22, (__int64)(v9 << 25) >> 16, v6 + 1, 24) )
        break;
      v22.SizeOfBitMap = 0LL;
      ++v8;
      *v4++ = v22;
      if ( v8 >= 2 )
      {
        if ( (dword_140400118 & 1) != 0 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14038A178, 0LL);
          MiUpdateMirrorBitmaps();
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14038A178, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_14038A178);
          v23 = 0;
          v11 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_14038A178) == 1 )
            SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
          else
            SessionId = -1;
          --v11->SpecialApcDisable;
          v13 = ++v11->AbAllocationRegionCount;
          v14 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v15 = !_BitScanReverse((unsigned int *)&v16, v14);
            v24 = v16;
            if ( v15 )
              goto LABEL_16;
            v17 = 1 << v16;
            v18 = v16;
            v19 = &v11->LockEntries[v18];
            v14 &= ~v17;
            if ( (v19->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v19->LockState.0 & 1) == 0
              && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14038A178 & 0x7FFFFFFFFFFFFFFCLL)
              && v19->LockState.SessionId == SessionId )
            {
              v19->AcquiredByte &= ~1u;
              if ( v19->LockState.0 )
                break;
            }
          }
          if ( !v19 )
          {
LABEL_16:
            if ( (*((_DWORD *)&v11->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v11, (ULONG_PTR)&qword_14038A178, SessionId, 0LL);
            goto LABEL_28;
          }
          v19->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v19->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v11->LockEntries[v18].TreeNode);
          v23 = 0;
          v23 = v19->BoostBitmap.AllFields & 0x1FFFF;
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
          KiAbThreadRemoveBoosts((ULONG_PTR)v11, (__int64)&qword_14038A178, (unsigned int *)&v23);
          v15 = v11->SpecialApcDisable++ == -1;
          if ( v15 && ($B476B70DB57F76B110DA5B9238C3E934 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
            KiCheckForKernelApcDelivery(v21);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        return 1LL;
      }
    }
  }
  return 0LL;
}
