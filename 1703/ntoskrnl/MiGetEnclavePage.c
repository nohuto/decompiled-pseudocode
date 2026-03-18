/*
 * XREFs of MiGetEnclavePage @ 0x14021C8F8
 * Callers:
 *     MiAllocateMdlPagesByLists @ 0x140133DC0 (MiAllocateMdlPagesByLists.c)
 *     MiReserveEnclavePages @ 0x14021CB50 (MiReserveEnclavePages.c)
 *     MiCreateEnclave @ 0x1406BB47C (MiCreateEnclave.c)
 *     MiGetPageForEnclave @ 0x1406BBA78 (MiGetPageForEnclave.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140075C3C (MiSetPfnBlink.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
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
  v5 = a1 + 492;
  LockHandle.LockQueue.Lock = a1 + 492;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, a1 + 492);
  while ( 1 )
  {
    if ( !a2 && !a1[488] )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = -1LL;
      goto LABEL_17;
    }
    v6 = a1[490];
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
    a1[491] = v10;
  else
    MiSetPfnBlink(48 * v9 - 0x58000000000LL, *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFLL, 0);
  if ( v10 == 0xFFFFFFFFFLL )
    a1[490] = v9;
  else
    *(_QWORD *)(48 * v10 - 0x58000000000LL) ^= (v9 ^ *(_QWORD *)(48 * v10 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
  if ( !a2 )
    --a1[488];
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  *(_BYTE *)(v7 + 35) &= ~0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v6;
LABEL_17:
  __writecr8(CurrentIrql);
  return result;
}
