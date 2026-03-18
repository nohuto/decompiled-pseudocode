/*
 * XREFs of NtReplyPort @ 0x14042F8D0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     memset @ 0x140192D80 (memset.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14042F9B0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *v8; // rax
  _QWORD v10[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v10, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    LODWORD(v10[6]) = 0;
    v10[0] = Object;
    v8 = KeGetCurrentThread();
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      LOBYTE(v6) = v8->PreviousMode;
      v5 = AlpcpReplyLegacySynchronousRequest(v10, LpcReply, v6);
    }
    else
    {
      LOBYTE(v7) = v8->PreviousMode;
      LODWORD(v10[6]) = 65537;
      v5 = AlpcpSendMessage(v10, LpcReply, 0LL, v7);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
    }
    ObfDereferenceObject(Object);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}
