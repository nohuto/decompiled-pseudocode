/*
 * XREFs of MmEnableModifiedWriteOfSection @ 0x140218E50
 * Callers:
 *     CcClearPrivateWriteFile @ 0x1401E0E7C (CcClearPrivateWriteFile.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockSectionControlArea @ 0x1400A4BCC (MiLockSectionControlArea.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
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
  __int64 i; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  KIRQL v12; // [rsp+78h] [rbp+38h] BYREF

  v1 = MiLockSectionControlArea(a1, 1, &v12);
  v2 = v1;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 56);
    if ( (v3 & 8) != 0 )
    {
      *(_DWORD *)(v1 + 56) = v3 & 0xFFFFFFF7;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
      __writecr8(v12);
      v4 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v2 + 60) & 0x3FF));
      if ( *(_QWORD *)(v4 + 6416) != 0xFFFFFFFFFLL )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v12 = CurrentIrql;
LABEL_12:
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v4 + 6432);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v4 + 6432));
        for ( i = *(_QWORD *)(v4 + 6416); i != 0xFFFFFFFFFLL; i = *(_QWORD *)v6 & 0xFFFFFFFFFLL )
        {
          v6 = 48 * i - 0x58000000000LL;
          if ( v2 == *(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v6 + 16), v7, v8) )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
            {
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            }
            else
            {
              MiUnlinkPageFromList(v6, 1LL);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              MiInsertPageInList(v6, 8);
              _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            __writecr8(v12);
            v12 = KeGetCurrentIrql();
            CurrentIrql = v12;
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
      __writecr8(v12);
    }
    LOBYTE(v1) = 1;
  }
  return v1;
}
