/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x14049E130
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14006BEF0 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     AlpcpSignal @ 0x14006AE10 (AlpcpSignal.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AlpcpReceiveMessage @ 0x14049E3C0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404A2660 (AlpcpProcessSynchronousRequest.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     AlpcpTrackPortReferences @ 0x140596220 (AlpcpTrackPortReferences.c)
 */

NTSTATUS __cdecl NtAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v13; // edi
  unsigned __int8 v14; // r14
  int v15; // esi
  PVOID v16; // rbx
  struct _KTHREAD *v18; // rax
  $B476B70DB57F76B110DA5B9238C3E934 *v20; // rcx
  char v22; // al
  int v23; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v25[8]; // [rsp+60h] [rbp-58h] BYREF

  memset(v25, 0, sizeof(v25));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = Flags & 0xFFFF0000;
  v14 = KeGetCurrentThread()->gap0[10];
  v15 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v14, &Object, 0LL);
  if ( v15 >= 0 )
  {
    v16 = Object;
    if ( (v13 & 0x40000) != 0 )
      AlpcpTrackPortReferences(Object);
    if ( (v13 & 0x20000) != 0 )
    {
      if ( SendMessageA )
      {
        if ( (v13 & 0x10000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( (v13 & 0x1000000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( ReceiveMessage )
        {
          if ( (v13 & 0x100000) != 0 )
            v22 = 1;
          else
            v22 = v14;
          LOBYTE(v23) = v14;
          v15 = AlpcpProcessSynchronousRequest(
                  (int)v16,
                  (__int64)ReceiveMessage,
                  (__int64)BufferLength,
                  ReceiveMessageAttributes,
                  (__int64)Timeout,
                  v23,
                  v22);
        }
        else
        {
          v15 = -1073740027;
        }
      }
      else
      {
        v15 = -1073741584;
      }
    }
    else
    {
      v25[0] = v16;
      LODWORD(v25[6]) = v13;
      if ( !SendMessageA )
      {
LABEL_6:
        if ( ReceiveMessage )
          v15 = AlpcpReceiveMessage(v25, ReceiveMessage, BufferLength, ReceiveMessageAttributes, Timeout);
        if ( _bittestandreset((signed __int32 *)&v25[6], 2u) )
        {
          AlpcpSignal((__int64)v25, 0);
          if ( v25[4] )
            ObfDereferenceObject((PVOID)v25[4]);
        }
        goto LABEL_9;
      }
      if ( (v13 & 0x1000000) != 0 )
      {
        v15 = -1073741584;
      }
      else
      {
        LODWORD(v25[6]) = v13 | 4;
        memset(&v25[3], 0, 24);
        v15 = AlpcpSendMessage(v25, SendMessageA, SendMessageAttributes, v14);
        if ( v15 >= 0 )
          goto LABEL_6;
      }
    }
LABEL_9:
    ObfDereferenceObject(v16);
  }
  v18 = KeGetCurrentThread();
  if ( v18->KernelApcDisable++ == -1 )
  {
    v20 = &v18->152;
    if ( ($B476B70DB57F76B110DA5B9238C3E934 *)v20->ApcState.ApcListHead[0].Flink != v20 && !v18->SpecialApcDisable )
      KiCheckForKernelApcDelivery((__int64)v20);
  }
  return v15;
}
