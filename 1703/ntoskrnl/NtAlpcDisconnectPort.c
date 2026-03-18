/*
 * XREFs of NtAlpcDisconnectPort @ 0x140470EA0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     AlpcpDisconnectPort @ 0x14047400C (AlpcpDisconnectPort.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcDisconnectPort(void *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v4; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v4 = -1073741811;
  }
  else
  {
    v4 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v4 >= 0 )
    {
      v4 = AlpcpDisconnectPort(Object, a2);
      ObfDereferenceObject(Object);
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v4;
}
