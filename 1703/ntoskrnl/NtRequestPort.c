/*
 * XREFs of NtRequestPort @ 0x140458000
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     memset @ 0x140192D80 (memset.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtRequestPort(HANDLE PortHandle, PPORT_MESSAGE LpcMessage)
{
  int v4; // ebx
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  _QWORD v8[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v8, 0, 0x40uLL);
  v4 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v8[0] = Object;
    CurrentThread = KeGetCurrentThread();
    LODWORD(v8[6]) = 0x10000;
    --CurrentThread->KernelApcDisable;
    LOBYTE(v5) = KeGetCurrentThread()->PreviousMode;
    v4 = AlpcpSendMessage(v8, LpcMessage, 0LL, v5);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
  }
  return v4;
}
