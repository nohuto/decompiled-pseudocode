/*
 * XREFs of MiRemoveSpecialPoolRange @ 0x140216E10
 * Callers:
 *     MmFreeSpecialPool @ 0x14021753C (MmFreeSpecialPool.c)
 * Callees:
 *     RemoveListEntryPte @ 0x140030F60 (RemoveListEntryPte.c)
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     InsertTailListPte @ 0x1400ABE6C (InsertTailListPte.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     MiVaRegionSessionSpecialPool @ 0x140217D9C (MiVaRegionSessionSpecialPool.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiRemoveSpecialPoolRange(PKSPIN_LOCK SpinLock, char a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  int v6; // r15d
  __int64 *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 PteTimeStamp; // rax
  __int64 updated; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 result; // rax
  _QWORD *v22; // rdi
  unsigned __int64 v23; // r12
  __int64 v24; // [rsp+20h] [rbp-E0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-D8h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v27; // [rsp+44h] [rbp-BCh]
  __int64 v28; // [rsp+48h] [rbp-B8h]
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]

  if ( (a2 & 1) != 0 )
  {
    v5 = 1LL;
    v6 = 7;
  }
  else
  {
    v5 = 4LL;
    v6 = 13;
  }
  v7 = (__int64 *)&SpinLock[v5];
  v24 = MI_READ_PTE_LOCK_FREE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = MI_GET_PFN_FROM_PTE(&v24, v8, v9, v10);
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(v11 + 16), v12, v13, v14);
  updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v11 + 16), PteTimeStamp - 1);
  *(_QWORD *)(v11 + 16) = updated;
  if ( MiGetPteTimeStamp(updated, v17, updated, v18) )
  {
    InsertTailListPte(v7);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  else
  {
    if ( (v20 & 0xF000) != 0 )
      *(_QWORD *)(v11 + 16) = v20 & 0xFFFFFFFFFFFF0FFFuLL;
    v22 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFF000uLL);
    v23 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) < v23 )
    {
      do
      {
        if ( v22 != (_QWORD *)a3 )
          RemoveListEntryPte((__int64)v7, v22);
        v22 += 2;
      }
      while ( (unsigned __int64)v22 < v23 );
    }
    if ( SpinLock != &qword_14036D000 )
      MiVaRegionSessionSpecialPool(v19, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( SpinLock == &qword_14036D000 )
      _InterlockedDecrement(&dword_14036BDD0);
    v28 = 20LL;
    v27 = 0;
    v29 = 0LL;
    v30 = 0LL;
    v26 = &qword_14036D000 != SpinLock ? 2 : 0;
    if ( SpinLock != &qword_14036D000 )
      v6 = 1;
    return MiReturnSystemVa(
             (__int64)((a3 & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16,
             ((__int64)((a3 & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16) + 0x200000,
             v6,
             (__int64)&v26);
  }
  return result;
}
