/*
 * XREFs of MiGetDanglingExtent @ 0x140222EE4
 * Callers:
 *     MiRemovePhysicalMemory @ 0x1406E00F8 (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiGetDanglingExtent(_QWORD *a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 i; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  LockHandle.LockQueue.Next = 0LL;
  *a1 = 0LL;
  LockHandle.LockQueue.Lock = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_14038B060, &LockHandle);
  do
  {
    v4 = qword_140388248;
    if ( !qword_140388248 )
      break;
    v5 = *(_QWORD *)qword_140388248;
    qword_140388248 = *(_QWORD *)qword_140388248;
    if ( !v2 )
      v3 = v4;
    ++v2;
  }
  while ( v5 == v4 - 48 );
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( !v2 )
    return -1LL;
  v7 = v3 - 48 * v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = v7 + 48; i <= v3; i += 48LL )
  {
    MiLockPageAtDpcInline(i);
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  __writecr8(CurrentIrql);
  *a1 = v2;
  return (__int64)(v7 + 0x58000000030LL) / 48;
}
