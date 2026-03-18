/*
 * XREFs of MiUnlinkSessionWorkingSet @ 0x14013E1D4
 * Callers:
 *     MiDereferenceSessionFinal @ 0x14057A664 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiUnlinkWorkingSet @ 0x1400178A8 (MiUnlinkWorkingSet.c)
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiUnlinkSessionWorkingSet(__int64 a1)
{
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
  *(_DWORD *)(a1 + 4) |= 2u;
  if ( *(_DWORD *)(a1 + 116) )
  {
    *(_DWORD *)(a1 + 124) = 0;
    *(_WORD *)(a1 + 120) = 263;
    *(_BYTE *)(a1 + 122) = 6;
    *(_QWORD *)(a1 + 136) = a1 + 128;
    *(_QWORD *)(a1 + 128) = a1 + 128;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    KeWaitForGate(a1 + 120, 0x12u);
    KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
  }
  MiUnlinkWorkingSet(a1 + 3008, &LockHandle);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
