/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x1404C9870
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     AlpcpSignal @ 0x14006010C (AlpcpSignal.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     AlpcpReceiveMessage @ 0x1404C9B10 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404CB670 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpTrackPortReferences @ 0x14057D4A4 (AlpcpTrackPortReferences.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAlpcSendWaitReceivePort(
        HANDLE Handle,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        volatile void *Address,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // edi
  unsigned __int8 v14; // r14
  NTSTATUS v15; // esi
  __int64 v16; // r9
  PVOID v17; // rbx
  struct _KTHREAD *v19; // rax
  bool v20; // zf
  char v22; // al
  int v23; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v25[8]; // [rsp+60h] [rbp-58h] BYREF

  memset(v25, 0, sizeof(v25));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = a2 & 0xFFFF0000;
  v14 = KeGetCurrentThread()->gap0[10];
  v15 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, v14, &Object, 0LL);
  if ( v15 >= 0 )
  {
    v17 = Object;
    if ( (v13 & 0x40000) != 0 )
      AlpcpTrackPortReferences(Object);
    if ( (v13 & 0x20000) != 0 )
    {
      if ( a3 )
      {
        if ( (v13 & 0x10000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( (v13 & 0x1000000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( a5 )
        {
          if ( (v13 & 0x100000) != 0 )
            v22 = 1;
          else
            v22 = v14;
          LOBYTE(v23) = v14;
          v15 = AlpcpProcessSynchronousRequest((int)v17, a5, a6, Address, a8, v23, v22);
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
      v25[0] = v17;
      LODWORD(v25[6]) = v13;
      if ( !a3 )
      {
LABEL_6:
        if ( a5 )
          v15 = AlpcpReceiveMessage(v25, a5, a6, Address, a8);
        if ( _bittestandreset((signed __int32 *)&v25[6], 2u) )
        {
          AlpcpSignal((__int64)v25, 0LL, 0LL, v16);
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
        v15 = AlpcpSendMessage(v25, a3, a4, v14);
        if ( v15 >= 0 )
          goto LABEL_6;
      }
    }
LABEL_9:
    ObfDereferenceObject(v17);
  }
  v19 = KeGetCurrentThread();
  v20 = v19->KernelApcDisable++ == -1;
  if ( v20
    && ($005F0E83B22994B61E86C72E0CE43C71 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
    && !v19->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v15;
}
