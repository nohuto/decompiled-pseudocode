/*
 * XREFs of MiExpandSpecialPool @ 0x14022042C
 * Callers:
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     InsertTailListPte @ 0x1400A477C (InsertTailListPte.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x1400F61D8 (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     MiObtainSessionVa @ 0x1400F85C0 (MiObtainSessionVa.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiVaRegionSessionSpecialPool @ 0x140221DA8 (MiVaRegionSessionSpecialPool.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

unsigned __int64 __fastcall MiExpandSpecialPool(char a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  int v4; // ebp
  KSPIN_LOCK *v5; // r14
  unsigned int v6; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // r8
  __int64 *v12; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 updated; // rax
  unsigned __int64 *v18; // r8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r10
  __int64 v21; // rbx
  __int64 v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF

  v3 = 1;
  v4 = a1 & 1;
  if ( (a1 & 0x20) != 0 )
  {
    v6 = 1;
    v5 = (KSPIN_LOCK *)qword_140389948;
    if ( *(_DWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 8000) >= (unsigned int)dword_1403880D4 )
      return 0LL;
    v3 = 0;
    v7 = MiObtainSessionVa(1u);
  }
  else
  {
    v5 = &qword_1403892C0;
    v6 = v4 != 0 ? 7 : 13;
    v7 = MiObtainSystemVa(1u, v6, a3);
  }
  v9 = v7;
  if ( !v7 )
    return 0LL;
  v10 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTables(v10, v10 + 4088, 0, v6) )
  {
    MiReturnSystemVa(v9, v9 + 0x200000, v6, 0LL);
    return 0LL;
  }
  if ( v3 )
    _InterlockedAdd(&dword_1403880D0, 1u);
  v12 = (__int64 *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v12;
  v14 = 0xFFFFF6FB7DBED000uLL;
  v15 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL )
  {
    v14 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
  }
  v24 = PteShadow;
  v16 = MI_GET_PFN_FROM_PTE(&v24, v14, v11, v15);
  updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v16 + 16), 1LL);
  if ( v6 == 1 )
    updated = updated & 0xFFFFFFFFFFFF0FFFuLL | 0x1000;
  *v18 = updated;
  if ( (unsigned __int64)v18 >= v20 && (unsigned __int64)v18 <= v19 )
    MiWritePteShadow();
  KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
  v21 = 255LL;
  do
  {
    InsertTailListPte((__int64 *)((char *)v5 + (-(__int64)(v4 != 0) & 0xFFFFFFFFFFFFFFE8uLL) + 32));
    v10 += 16LL;
    --v21;
  }
  while ( v21 );
  if ( v5 != &qword_1403892C0 )
    MiVaRegionSessionSpecialPool(v22, 1LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v10;
}
