/*
 * XREFs of IopCloseWaitCompletionPacket @ 0x140068960
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopCancelWaitCompletionPacket @ 0x140087944 (IopCancelWaitCompletionPacket.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall IopCloseWaitCompletionPacket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v4; // rdi
  KIRQL v6; // al
  KSPIN_LOCK *v7; // rbx
  KIRQL v8; // bp
  KIRQL v9; // bp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 1 )
  {
    v4 = (KSPIN_LOCK *)(a2 + 96);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v7 = *(KSPIN_LOCK **)(a2 + 88);
    v8 = v6;
    if ( v7 )
      ObfReferenceObjectWithTag(*(PVOID *)(a2 + 88), 0x746C6644u);
    KxReleaseSpinLock(v4);
    __writecr8(v8);
    if ( v7 )
    {
      KeAcquireInStackQueuedSpinLock(v7 + 8, &LockHandle);
      v9 = KeAcquireSpinLockRaiseToDpc(v4);
      if ( !*(_BYTE *)(a2 + 104) || !(unsigned __int8)IopCancelWaitCompletionPacket((PVOID)a2) )
      {
        KxReleaseSpinLock(v4);
        __writecr8(v9);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    }
  }
}
