/*
 * XREFs of CcCoalescingCallBack @ 0x1401DD4D0
 * Callers:
 *     <none>
 * Callees:
 *     CcRescheduleLazyWriteScan @ 0x14002F8F0 (CcRescheduleLazyWriteScan.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x140118B04 (CcScheduleLazyWriteScan.c)
 */

__int64 __fastcall CcCoalescingCallBack(int a1)
{
  int v1; // ecx
  int v2; // ecx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      if ( v2 != 1 )
        return result;
      KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
      ++CcDbgCoalescingCmdFlushReceived;
      goto LABEL_7;
    }
    KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
    ++CcDbgCoalescingCmdOffReceived;
    CcCoalescingState = 0;
    CcRescheduleLazyWriteScan((__int64)&CcSystemPartition, 0LL);
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
    ++CcDbgCoalescingCmdOnReceived;
    CcCoalescingState = 1;
    byte_14036F998 = 0;
    if ( (unsigned __int64)qword_14036F9A0 >= 0x2000 )
LABEL_7:
      CcScheduleLazyWriteScan((__int64)&CcSystemPartition, 1, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
