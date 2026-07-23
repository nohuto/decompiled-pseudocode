/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x1400E0F58
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1400E2730 (KeReleaseSpinLock.c)
 *     IopCancelWaitCompletionPacket @ 0x1400E281C (IopCancelWaitCompletionPacket.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400F1C30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  PVOID v4; // rbp
  KSPIN_LOCK *v5; // rsi
  KIRQL v6; // al
  KSPIN_LOCK *v7; // rdi
  KIRQL v8; // r14
  KIRQL v9; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandle(
             WaitCompletionPacketHandle,
             1u,
             IopWaitCompletionPacketObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v3 = result;
  if ( result >= 0 )
  {
    v4 = Object;
    v5 = (KSPIN_LOCK *)((char *)Object + 96);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
    v7 = (KSPIN_LOCK *)*((_QWORD *)v4 + 11);
    v8 = v6;
    if ( v7 )
      ObfReferenceObject(*((PVOID *)v4 + 11));
    KeReleaseSpinLock(v5, v8);
    if ( !v7 )
      return -1073741536;
    KeAcquireInStackQueuedSpinLock(v7 + 8, &LockHandle);
    v9 = KeAcquireSpinLockRaiseToDpc(v5);
    if ( *((_BYTE *)v4 + 104) )
    {
      if ( (unsigned __int8)IopCancelWaitCompletionPacket(Object) )
      {
LABEL_12:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        ObfDereferenceObject(v7);
        ObfDereferenceObject(Object);
        return v3;
      }
      if ( *((_BYTE *)v4 + 104) )
        v3 = 259;
    }
    else
    {
      v3 = -1073741536;
    }
    KeReleaseSpinLock(v5, v9);
    goto LABEL_12;
  }
  return result;
}
