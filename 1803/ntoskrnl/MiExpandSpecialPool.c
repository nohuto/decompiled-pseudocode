/*
 * XREFs of MiExpandSpecialPool @ 0x14025C0AC
 * Callers:
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x140049998 (MiObtainSystemVa.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiObtainSessionVa @ 0x1400CB090 (MiObtainSessionVa.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     InsertTailListPte @ 0x1400E06C0 (InsertTailListPte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
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
  unsigned __int64 v9; // rax
  __int64 updated; // rax
  unsigned __int64 *v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  v1 = 1;
  v2 = a1 & 1;
  if ( (a1 & 0x20) != 0 )
  {
    v4 = 1;
    v3 = qword_1403CCF08;
    if ( *(_DWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 8128) >= (unsigned int)dword_1403CB1D4 )
      return 0LL;
    v1 = 0;
    v5 = MiObtainSessionVa(1u);
  }
  else
  {
    v3 = &qword_1403CC540;
    v4 = v2 != 0 ? 7 : 13;
    v5 = MiObtainSystemVa(1LL, v4);
  }
  v7 = v5;
  if ( !v5 )
    return 0LL;
  v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTables(v8, v8 + 4088, 0, v4) )
  {
    MiReturnSystemVa(v7, v7 + 0x200000, v4);
    return 0LL;
  }
  if ( v1 )
    _InterlockedAdd(&dword_1403CB1D0, 1u);
  v19 = MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19);
  updated = MiUpdatePageFileHighInPte(*(_QWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL), 1LL);
  v12 = updated;
  if ( v4 == 1 )
    v12 = updated & 0xFFFFFFFFFFFF0FFFuLL | 0x1000;
  *v11 = v12;
  if ( MiPteInShadowRange((unsigned __int64)v11) )
    MiWritePteShadow(v14, v13, v15);
  KeAcquireInStackQueuedSpinLock(v3, &LockHandle);
  v16 = 255LL;
  do
  {
    InsertTailListPte((unsigned __int64)v3 + (-(__int64)(v2 != 0) & 0xFFFFFFFFFFFFFFE8uLL) + 32, v8);
    v8 += 16LL;
    --v16;
  }
  while ( v16 );
  if ( v3 != &qword_1403CC540 )
  {
    v17 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    ++*(_DWORD *)(v17 + 8128);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v8;
}
