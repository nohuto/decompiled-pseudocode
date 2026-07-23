/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x14004DA50
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopCancelWaitCompletionPacket @ 0x14005135C (IopCancelWaitCompletionPacket.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  _BYTE *v4; // rbp
  KSPIN_LOCK *v5; // rsi
  KIRQL v6; // di
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

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
    if ( v4[104] )
    {
      if ( !(unsigned __int8)IopCancelWaitCompletionPacket(Object) )
      {
        if ( v4[104] )
          v3 = 259;
        KxReleaseSpinLock(v5);
        __writecr8(v6);
      }
    }
    else
    {
      v3 = -1073741536;
      KxReleaseSpinLock(v5);
      __writecr8(v6);
    }
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return v3;
  }
  return result;
}
