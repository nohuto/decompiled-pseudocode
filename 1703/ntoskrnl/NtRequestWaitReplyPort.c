/*
 * XREFs of NtRequestWaitReplyPort @ 0x140470A90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     LpcpRequestWaitReplyPort @ 0x140470B28 (LpcpRequestWaitReplyPort.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply, PPORT_MESSAGE LpcRequest)
{
  int v4; // ebp
  KPROCESSOR_MODE PreviousMode; // di
  int v6; // ebx
  int v7; // r9d
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v4 = (int)LpcReply;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v6 >= 0 )
  {
    LOBYTE(v7) = PreviousMode;
    v6 = LpcpRequestWaitReplyPort((_DWORD)Object, v4, (__int64)LpcRequest, v7, PreviousMode, 0);
    ObfDereferenceObject(Object);
  }
  return v6;
}
