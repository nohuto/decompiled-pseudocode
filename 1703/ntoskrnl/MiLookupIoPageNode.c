/*
 * XREFs of MiLookupIoPageNode @ 0x140124B28
 * Callers:
 *     MiInsertPhysicalPteMapping @ 0x140123724 (MiInsertPhysicalPteMapping.c)
 *     MmProtectMdlSystemAddress @ 0x14020FE00 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

_QWORD *__fastcall MiLookupIoPageNode(unsigned __int64 a1)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14036CE00, &LockHandle);
  v2 = (_QWORD *)qword_14036CE10;
  while ( v2 )
  {
    v3 = v2[5];
    if ( a1 >= v3 )
    {
      if ( a1 < v3 + 512 )
        break;
      v2 = (_QWORD *)v2[1];
    }
    else
    {
      v2 = (_QWORD *)*v2;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v2;
}
