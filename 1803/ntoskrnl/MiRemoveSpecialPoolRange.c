/*
 * XREFs of MiRemoveSpecialPoolRange @ 0x14025C410
 * Callers:
 *     MmFreeSpecialPool @ 0x14025CAE4 (MmFreeSpecialPool.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RemoveListEntryPte @ 0x1400C2AC8 (RemoveListEntryPte.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     InsertTailListPte @ 0x1400E06C0 (InsertTailListPte.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiRemoveSpecialPoolRange(PKSPIN_LOCK SpinLock, char a2, unsigned __int64 a3)
{
  int v5; // r15d
  char *v6; // r12
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned __int64 PteTimeStamp; // rax
  __int64 v11; // r8
  __int64 updated; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 result; // rax
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  v5 = (a2 & 1) != 0 ? 7 : 13;
  v6 = (char *)SpinLock + (-(__int64)((a2 & 1) != 0) & 0xFFFFFFFFFFFFFFE8uLL) + 32;
  v21 = MI_READ_PTE_LOCK_FREE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(v7 + 16), v8, *(_QWORD *)(v7 + 16), v9);
  updated = MiUpdatePageFileHighInPte(v11, PteTimeStamp - 1);
  *(_QWORD *)(v7 + 16) = updated;
  if ( MiGetPteTimeStamp(updated, v13, updated, v14) )
  {
    InsertTailListPte((unsigned __int64)v6, a3);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  else
  {
    if ( (v15 & 0xF000) != 0 )
      *(_QWORD *)(v7 + 16) = v15 & 0xFFFFFFFFFFFF0FFFuLL;
    v17 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFF000uLL);
    v18 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) < v18 )
    {
      do
      {
        if ( v17 != (_QWORD *)a3 )
          RemoveListEntryPte((__int64)v6, v17);
        v17 += 2;
      }
      while ( (unsigned __int64)v17 < v18 );
    }
    if ( SpinLock != &qword_1403CC540 )
    {
      v19 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
      --*(_DWORD *)(v19 + 8128);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( SpinLock == &qword_1403CC540 )
      _InterlockedDecrement(&dword_1403CB1D0);
    else
      v5 = 1;
    return MiReturnSystemVa(
             (__int64)((a3 & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16,
             ((__int64)((a3 & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16) + 0x200000,
             v5);
  }
  return result;
}
