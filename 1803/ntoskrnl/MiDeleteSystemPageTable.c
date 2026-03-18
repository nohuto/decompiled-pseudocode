/*
 * XREFs of MiDeleteSystemPageTable @ 0x1400B9530
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiEvictPageTableLock @ 0x14003D960 (MiEvictPageTableLock.c)
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiAddSystemPageTableToList @ 0x1400B971C (MiAddSystemPageTableToList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiInsertLargeTbFlushEntry @ 0x1401373A0 (MiInsertLargeTbFlushEntry.c)
 *     MiReplicatePteChange @ 0x14016B45C (MiReplicatePteChange.c)
 *     RtlCompareMemoryUlong @ 0x1401B32E0 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiDeleteSystemPageTable(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  char v8; // bl
  __int64 v9; // r15
  int v10; // r12d
  unsigned __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v16; // r9
  unsigned __int64 LeafVa; // rax
  __int64 v18; // rcx
  BOOL v19; // ebx
  __int64 v20; // r8
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF
  __int64 v25; // [rsp+98h] [rbp+20h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v25 = *(_QWORD *)(a1 + 168);
  v6 = *(_QWORD *)(v25 + 16);
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v24 = v7;
  v8 = v7;
  v9 = v7 & 1;
  if ( (v7 & 1) != 0 )
  {
    v10 = 0;
    if ( (v7 & 0x80u) == 0LL )
    {
      v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v24) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      if ( a3 <= *(unsigned __int8 *)(a1 + 10) )
      {
        v16 = 0LL;
      }
      else
      {
        if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) != v14
          || *(_WORD *)(v11 + 32) != (_WORD)v14
          || RtlCompareMemoryUlong((PVOID)((__int64)((a2 << 25) - (v13 << 25)) >> 16), 0x1000uLL, 0) != 4096 )
        {
          return 0LL;
        }
        LODWORD(v14) = 1;
        v16 = 1LL;
      }
      if ( a3 >= (int)v14 )
      {
        if ( !(unsigned int)MiEvictPageTableLock(*(_QWORD *)(a1 + 24), a2, ZeroPte, v16) )
          return 0LL;
        v10 = 1;
      }
      MiAddSystemPageTableToList(
        v25 + 8,
        v11,
        v12,
        v16,
        LockHandle.LockQueue.Next,
        LockHandle.LockQueue.Lock,
        *(_QWORD *)&LockHandle.OldIrql);
    }
    if ( v9 && a3 >= 1 && v8 < 0 )
    {
      MiInsertLargeTbFlushEntry(v6, (unsigned int)a3, a2);
    }
    else
    {
      MiInsertTbFlushEntry(v6, (__int64)(a2 << 25) >> 16, 1LL, 0);
      if ( a3 == 1 )
      {
        LeafVa = MiGetLeafVa(a2);
        MiInsertTbFlushEntry(v6, LeafVa, 512LL, 0);
      }
    }
    if ( !v10 )
    {
      v19 = MiPteInShadowRange(a2);
      if ( a3 == 3 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
        *(_QWORD *)a2 = ZeroPte;
        if ( v19 )
          MiWritePteShadow(a2, ZeroPte, v21);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        goto LABEL_27;
      }
      *(_QWORD *)a2 = ZeroPte;
      if ( v19 )
        MiWritePteShadow(v18, ZeroPte, v20);
    }
    if ( a3 == 3 )
    {
LABEL_27:
      v22 = MiGetLeafVa(a2);
      MiReplicatePteChange(
        ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    }
  }
  return 0LL;
}
