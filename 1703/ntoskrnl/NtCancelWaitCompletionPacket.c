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

NTSTATUS __fastcall NtCancelWaitCompletionPacket(void *a1)
{
  NTSTATUS result; // eax
  int v2; // ebx
  _BYTE *v3; // rbp
  KSPIN_LOCK *v4; // rsi
  KIRQL v5; // di
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

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
    if ( v3[104] )
    {
      if ( !(unsigned __int8)IopCancelWaitCompletionPacket(Object) )
      {
        if ( v3[104] )
          v2 = 259;
        KxReleaseSpinLock(v4);
        __writecr8(v5);
      }
    }
    else
    {
      v2 = -1073741536;
      KxReleaseSpinLock(v4);
      __writecr8(v5);
    }
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return v2;
  }
  return result;
}
