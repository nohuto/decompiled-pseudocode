/*
 * XREFs of MiGetEnclavePage @ 0x140229730
 * Callers:
 *     MiAllocateMdlPagesByLists @ 0x140128900 (MiAllocateMdlPagesByLists.c)
 *     MiReserveEnclavePages @ 0x140229A18 (MiReserveEnclavePages.c)
 *     MiCreateHardwareEnclave @ 0x1406E8318 (MiCreateHardwareEnclave.c)
 *     MiGetPageForEnclave @ 0x1406E8908 (MiGetPageForEnclave.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     MiSetPfnBlink @ 0x1400C7514 (MiSetPfnBlink.c)
 */

__int64 __fastcall MiGetEnclavePage(_QWORD *a1, int a2)
{
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 *v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.LockQueue.Next = 0LL;
  v5 = a1 + 508;
  LockHandle.LockQueue.Lock = a1 + 508;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, a1 + 508);
  while ( 1 )
  {
    if ( !a2 && !a1[504] )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = -1LL;
      goto LABEL_17;
    }
    v6 = a1[506];
    v7 = 48 * v6 - 0x58000000000LL;
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      break;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    MiLockPageAtDpcInline(v7);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = v5;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v5);
    if ( (*(_BYTE *)(v7 + 35) & 0x10) != 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v9 = *(_QWORD *)v7 & 0xFFFFFFFFFLL;
  v10 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFLL;
  if ( v9 == 0xFFFFFFFFFLL )
    a1[507] = v10;
  else
    MiSetPfnBlink(48 * v9 - 0x58000000000LL, *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFLL, 0);
  if ( v10 == 0xFFFFFFFFFLL )
    a1[506] = v9;
  else
    *(_QWORD *)(48 * v10 - 0x58000000000LL) = v9 | *(_QWORD *)(48 * v10 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
  if ( !a2 )
    --a1[504];
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  *(_BYTE *)(v7 + 35) &= ~0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v6;
LABEL_17:
  __writecr8(CurrentIrql);
  return result;
}
