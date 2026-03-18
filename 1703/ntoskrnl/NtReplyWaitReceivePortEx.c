/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x14047C7E0
 * Callers:
 *     NtReplyWaitReceivePort @ 0x14047C7C4 (NtReplyWaitReceivePort.c)
 *     NtListenPort @ 0x1405D5974 (NtListenPort.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     memset @ 0x140192D80 (memset.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14042F9B0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x14047C970 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x14047CC20 (AlpcpCompleteDeferSignalRequest.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtReplyWaitReceivePortEx(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v10; // r15
  __int64 v11; // rax
  int v12; // esi
  PVOID v13; // rdi
  int v15; // eax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v17[8]; // [rsp+40h] [rbp-58h] BYREF

  memset(v17, 0, sizeof(v17));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeGetCurrentThread()->gap0[10];
  if ( v10 )
  {
    v11 = (__int64)ReceiveMessage;
    if ( ((unsigned __int8)ReceiveMessage & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)ReceiveMessage >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 39) = *(_BYTE *)(v11 + 39);
  }
  v12 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v10, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = Object;
    v17[0] = (__int64)Object;
    LODWORD(v17[6]) = 0;
    if ( ReplyMessage
      && ((memset(&v17[3], 0, 24), (*((_DWORD *)Object + 104) & 0x2000) == 0)
        ? (LODWORD(v17[6]) = 65541, v15 = AlpcpSendMessage(v17, ReplyMessage, 0LL, v10))
        : (LODWORD(v17[6]) = 4,
           v15 = AlpcpReplyLegacySynchronousRequest(v17, (__int128 *)&ReplyMessage->u1.s1.DataLength, v10)),
          v12 = v15,
          v15 < 0) )
    {
      ObfDereferenceObject(v13);
      if ( v12 == -1073740029 )
        v12 = -1073741769;
    }
    else
    {
      v12 = AlpcpReceiveLegacyMessage(v17, ReceiveMessage, Timeout, PortContext);
      AlpcpCompleteDeferSignalRequest(v17);
      ObfDereferenceObject(v13);
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v12;
}
