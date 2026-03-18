/*
 * XREFs of MiDeleteProcessShadow @ 0x1400704F8
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140070A70 (MiDeleteFinalPageTables.c)
 *     PspDisablePrimaryTokenExchange @ 0x1404B8C60 (PspDisablePrimaryTokenExchange.c)
 *     MmCreateProcessAddressSpace @ 0x1405129E8 (MmCreateProcessAddressSpace.c)
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     KeFlushProcessTb @ 0x140070738 (KeFlushProcessTb.c)
 *     MiDeleteTopLevelPage @ 0x140070754 (MiDeleteTopLevelPage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeMakeUserDirectoryTableBase @ 0x1400CA584 (KeMakeUserDirectoryTableBase.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiReleaseNonPagedResources @ 0x14013A6A0 (MiReleaseNonPagedResources.c)
 */

__int64 __fastcall MiDeleteProcessShadow(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // r14
  __int64 SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  char v8; // si
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF

  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (MiFlags & 0x1800000) != 0 && *(_QWORD *)(a1 + 1544) )
  {
    v4 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 1454));
    if ( a2 )
    {
      SharedVm = MiGetSharedVm(a1 + 1280);
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
      v8 = v6;
      if ( !*(_QWORD *)(a1 + 1544) )
      {
        LOBYTE(v7) = v6;
        return MiUnlockWorkingSetExclusive(a1 + 1280, v7);
      }
    }
    else
    {
      v8 = 17;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &qword_1403CC4C0;
    KxAcquireQueuedSpinLock(&LockHandle, &qword_1403CC4C0);
    v9 = ((*(_QWORD *)(a1 + 1544) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = MI_READ_PTE_LOCK_FREE(v9);
    v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v15);
    *(_QWORD *)(a1 + 1544) = 0LL;
    v11 = (v10 >> 12) & 0xFFFFFFFFFLL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    *(_QWORD *)(a1 + 632) = KeMakeUserDirectoryTableBase(0LL);
    if ( v8 != 17 )
    {
      LOBYTE(v12) = v8;
      MiUnlockWorkingSetExclusive(a1 + 1280, v12);
    }
    MiReleasePtes(&qword_1403CC5E0, v9, 1LL);
    KeFlushProcessTb(v11 << 12);
    result = MiDeleteTopLevelPage(v13, v11);
    if ( (_DWORD)result != 3 )
      return MiReleaseNonPagedResources(v4, 1LL);
  }
  return result;
}
