/*
 * XREFs of NtRequestWaitReplyPort @ 0x140463B80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     LpcpRequestWaitReplyPort @ 0x140463C18 (LpcpRequestWaitReplyPort.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply, PPORT_MESSAGE LpcRequest)
{
  KPROCESSOR_MODE PreviousMode; // di
  int v4; // ebx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v4 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v4 = LpcpRequestWaitReplyPort((_DWORD)Object, PreviousMode, 0);
    ObfDereferenceObject(Object);
  }
  return v4;
}
