/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x1400877D8
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
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtCancelWaitCompletionPacket(void *a1)
{
  NTSTATUS result; // eax
  int v2; // ebx
  PVOID v3; // rbp
  KSPIN_LOCK *v4; // rsi
  KIRQL v5; // al
  KSPIN_LOCK *v6; // rdi
  KIRQL v7; // r14
  KIRQL v8; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandle(
             a1,
             1u,
             IopWaitCompletionPacketObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v2 = result;
  if ( result >= 0 )
  {
    v3 = Object;
    v4 = (KSPIN_LOCK *)((char *)Object + 96);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
    v6 = (KSPIN_LOCK *)*((_QWORD *)v3 + 11);
    v7 = v5;
    if ( v6 )
      ObfReferenceObjectWithTag(*((PVOID *)v3 + 11), 0x746C6644u);
    KxReleaseSpinLock(v4);
    __writecr8(v7);
    if ( v6 )
    {
      KeAcquireInStackQueuedSpinLock(v6 + 8, &LockHandle);
      v8 = KeAcquireSpinLockRaiseToDpc(v4);
      if ( *((_BYTE *)v3 + 104) )
      {
        if ( !(unsigned __int8)IopCancelWaitCompletionPacket(Object) )
        {
          if ( *((_BYTE *)v3 + 104) )
            v2 = 259;
          KxReleaseSpinLock(v4);
          __writecr8(v8);
        }
      }
      else
      {
        v2 = -1073741536;
        KxReleaseSpinLock(v4);
        __writecr8(v8);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      ObfDereferenceObjectWithTag(v6, 0x746C6644u);
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return v2;
    }
    else
    {
      return -1073741536;
    }
  }
  return result;
}
