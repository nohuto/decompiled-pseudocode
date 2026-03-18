/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x1404D04D0
 * Callers:
 *     NtReplyWaitReceivePort @ 0x1404D04B0 (NtReplyWaitReceivePort.c)
 *     NtListenPort @ 0x1406551A8 (NtListenPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404D0660 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x1404D0918 (AlpcpCompleteDeferSignalRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404DE4F0 (AlpcpReplyLegacySynchronousRequest.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
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
  _QWORD v17[8]; // [rsp+40h] [rbp-58h] BYREF

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
    v17[0] = Object;
    LODWORD(v17[6]) = 0;
    if ( ReplyMessage
      && ((memset(&v17[3], 0, 24), (*((_DWORD *)Object + 104) & 0x2000) == 0)
        ? (LODWORD(v17[6]) = 65541, v15 = AlpcpSendMessage((__int64)v17, (__m256i *)ReplyMessage, 0LL, v10))
        : (LODWORD(v17[6]) = 4, v15 = AlpcpReplyLegacySynchronousRequest(v17, ReplyMessage, v10)),
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v12;
}
