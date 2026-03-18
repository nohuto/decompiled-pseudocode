/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x140464104
 * Callers:
 *     NtReplyWaitReceivePort @ 0x1404640E8 (NtReplyWaitReceivePort.c)
 *     NtListenPort @ 0x1405F1EE4 (NtListenPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140463024 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x140464260 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x140464508 (AlpcpCompleteDeferSignalRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140464544 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtReplyWaitReceivePortEx(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  int v11; // ebx
  __int64 v12; // r9
  PVOID v13; // rdi
  int v15; // eax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v17[8]; // [rsp+40h] [rbp-58h] BYREF

  memset(v17, 0, sizeof(v17));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    AlpcpProbeForWriteMessageHeader(ReceiveMessage, 0LL);
  v11 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v13 = Object;
    v17[0] = Object;
    LODWORD(v17[6]) = 0;
    if ( ReplyMessage
      && ((memset(&v17[3], 0, 24), (*((_DWORD *)Object + 104) & 0x2000) == 0)
        ? (LODWORD(v17[6]) = 65541, LOBYTE(v12) = PreviousMode, v15 = AlpcpSendMessage(v17, ReplyMessage, 0LL, v12))
        : (LODWORD(v17[6]) = 4,
           v15 = AlpcpReplyLegacySynchronousRequest(
                   (__int64)v17,
                   (__int128 *)&ReplyMessage->u1.s1.DataLength,
                   PreviousMode)),
          v11 = v15,
          v15 < 0) )
    {
      ObfDereferenceObject(v13);
      if ( v11 == -1073740029 )
        v11 = -1073741769;
    }
    else
    {
      v11 = AlpcpReceiveLegacyMessage(v17, ReceiveMessage, Timeout, PortContext);
      AlpcpCompleteDeferSignalRequest(v17);
      ObfDereferenceObject(v13);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v11;
}
