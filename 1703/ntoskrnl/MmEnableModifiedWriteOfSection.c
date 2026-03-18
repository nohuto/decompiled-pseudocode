/*
 * XREFs of MmEnableModifiedWriteOfSection @ 0x1402115C0
 * Callers:
 *     CcClearPrivateWriteFile @ 0x1401DDE20 (CcClearPrivateWriteFile.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockSectionControlArea @ 0x140099610 (MiLockSectionControlArea.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 */

char __fastcall MmEnableModifiedWriteOfSection(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  int v3; // ecx
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 i; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 v13; // [rsp+78h] [rbp+38h] BYREF

  v1 = MiLockSectionControlArea(a1, 1, &v13);
  v2 = v1;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 56);
    if ( (v3 & 8) != 0 )
    {
      *(_DWORD *)(v1 + 56) = v3 & 0xFFFFFFF7;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
      __writecr8(v13);
      v4 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v2 + 60) & 0x3FF));
      if ( *(_QWORD *)(v4 + 6224) != 0xFFFFFFFFFLL )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v13 = CurrentIrql;
LABEL_12:
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v4 + 6240);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v4 + 6240));
        for ( i = *(_QWORD *)(v4 + 6224); i != 0xFFFFFFFFFLL; i = *(_QWORD *)v6 & 0xFFFFFFFFFLL )
        {
          v6 = 48 * i - 0x58000000000LL;
          if ( v2 == *(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v6 + 16), v7, v8, v9) )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
            {
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            }
            else
            {
              MiUnlinkPageFromList(v6, 1);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              MiInsertPageInList(v6, 8u);
              _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            __writecr8(v13);
            v13 = KeGetCurrentIrql();
            CurrentIrql = v13;
            __writecr8(2uLL);
            goto LABEL_12;
          }
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(CurrentIrql);
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
      __writecr8(v13);
    }
    LOBYTE(v1) = 1;
  }
  return v1;
}
