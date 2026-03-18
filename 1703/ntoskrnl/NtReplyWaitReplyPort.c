/*
 * XREFs of NtReplyWaitReplyPort @ 0x1406B0DFC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     LpcpReplyWaitReplyPort @ 0x1406B0BF0 (LpcpReplyWaitReplyPort.c)
 */

NTSTATUS __stdcall NtReplyWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  char PreviousMode; // si
  NTSTATUS v4; // edi
  PVOID v5; // rbx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v4 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v5 = Object;
    if ( (*((_DWORD *)Object + 104) & 6) == 2 )
    {
      ObfDereferenceObject(Object);
      return -1073741811;
    }
    else
    {
      v4 = LpcpReplyWaitReplyPort(
             (__int64)Object,
             (__int128 *)&ReplyMessage->u1.s1.DataLength,
             PreviousMode,
             PreviousMode);
      ObfDereferenceObject(v5);
    }
  }
  return v4;
}
