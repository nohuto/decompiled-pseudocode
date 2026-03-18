/*
 * XREFs of MiExpandSpecialPool @ 0x140216C28
 * Callers:
 *     MmAllocateSpecialPool @ 0x140217008 (MmAllocateSpecialPool.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     InsertTailListPte @ 0x1400ABE6C (InsertTailListPte.c)
 *     MiObtainSessionVa @ 0x140125850 (MiObtainSessionVa.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x1401282A4 (MiObtainSystemVa.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     MiVaRegionSessionSpecialPool @ 0x140217D9C (MiVaRegionSessionSpecialPool.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiExpandSpecialPool(char a1)
{
  int v1; // r15d
  int v2; // ebp
  KSPIN_LOCK *v3; // r14
  int v4; // edi
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 updated; // rax
  unsigned __int64 *v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  v1 = 1;
  v2 = a1 & 1;
  if ( (a1 & 0x20) != 0 )
  {
    v4 = 1;
    v3 = (KSPIN_LOCK *)qword_14036D688;
    if ( *(_DWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 8000) >= (unsigned int)dword_14036BDD4 )
      return 0LL;
    v1 = 0;
    v5 = MiObtainSessionVa(1u);
  }
  else
  {
    v3 = &qword_14036D000;
    v4 = v2 != 0 ? 7 : 13;
    v5 = MiObtainSystemVa(1u, v4);
  }
  v7 = v5;
  if ( !v5 )
    return 0LL;
  v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTables(v8, v8 + 4088, 0, v4) )
  {
    MiReturnSystemVa(v7, v7 + 0x200000, v4, 0LL);
    return 0LL;
  }
  if ( v1 )
    _InterlockedAdd(&dword_14036BDD0, 1u);
  v19 = MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = MI_GET_PFN_FROM_PTE(&v19, v9, v10, v11);
  updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v12 + 16), 1LL);
  v15 = updated;
  if ( v4 == 1 )
    v15 = updated & 0xFFFFFFFFFFFF0FFFuLL | 0x1000;
  *v14 = v15;
  if ( MiPteInShadowRange((unsigned __int64)v14) )
    MiWritePteShadow();
  KeAcquireInStackQueuedSpinLock(v3, &LockHandle);
  v16 = 255LL;
  do
  {
    InsertTailListPte((__int64 *)((char *)v3 + (-(__int64)(v2 != 0) & 0xFFFFFFFFFFFFFFE8uLL) + 32));
    v8 += 16LL;
    --v16;
  }
  while ( v16 );
  if ( v3 != &qword_14036D000 )
    MiVaRegionSessionSpecialPool(v17, 1LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v8;
}
