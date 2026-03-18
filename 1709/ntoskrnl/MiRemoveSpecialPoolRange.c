/*
 * XREFs of MiRemoveSpecialPoolRange @ 0x140220644
 * Callers:
 *     MmFreeSpecialPool @ 0x140220DA4 (MmFreeSpecialPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     InsertTailListPte @ 0x1400A477C (InsertTailListPte.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     RemoveListEntryPte @ 0x140125FB0 (RemoveListEntryPte.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiVaRegionSessionSpecialPool @ 0x140221DA8 (MiVaRegionSessionSpecialPool.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

void __fastcall MiRemoveSpecialPoolRange(PKSPIN_LOCK SpinLock, char a2, unsigned __int64 a3, __int64 a4)
{
  int v6; // r13d
  __int64 *v7; // r12
  __int64 *v8; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int64 PteTimeStamp; // rax
  __int64 v14; // r8
  __int64 updated; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rdi
  unsigned __int64 v20; // r15
  __int64 v21; // [rsp+20h] [rbp-E0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-D8h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v24; // [rsp+44h] [rbp-BCh]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h]

  v6 = (a2 & 1) != 0 ? 7 : 13;
  v7 = (__int64 *)((char *)SpinLock + (-(__int64)((a2 & 1) != 0) & 0xFFFFFFFFFFFFFFE8uLL) + 32);
  v8 = (__int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v8;
  v10 = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL )
  {
    v10 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
  }
  v21 = PteShadow;
  v11 = MI_GET_PFN_FROM_PTE(&v21, v10, a3, a4);
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(v11 + 16), v12, *(_QWORD *)(v11 + 16));
  updated = MiUpdatePageFileHighInPte(v14, PteTimeStamp - 1);
  *(_QWORD *)(v11 + 16) = updated;
  if ( MiGetPteTimeStamp(updated, v16, updated) )
  {
    InsertTailListPte(v7);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  else
  {
    if ( (v18 & 0xF000) != 0 )
      *(_QWORD *)(v11 + 16) = v18 & 0xFFFFFFFFFFFF0FFFuLL;
    v19 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFF000uLL);
    v20 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) < v20 )
    {
      do
      {
        if ( v19 != (_QWORD *)a3 )
          RemoveListEntryPte((__int64)v7, v19);
        v19 += 2;
      }
      while ( (unsigned __int64)v19 < v20 );
    }
    if ( SpinLock != &qword_1403892C0 )
      MiVaRegionSessionSpecialPool(v17, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( SpinLock == &qword_1403892C0 )
      _InterlockedDecrement(&dword_1403880D0);
    v25 = 20LL;
    v24 = 0;
    v26 = 0LL;
    v27 = 0LL;
    v23 = &qword_1403892C0 != SpinLock ? 2 : 0;
    if ( SpinLock != &qword_1403892C0 )
      v6 = 1;
    MiReturnSystemVa(
      (__int64)((a3 & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16,
      ((__int64)((a3 & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16) + 0x200000,
      v6,
      (__int64)&v23);
  }
}
