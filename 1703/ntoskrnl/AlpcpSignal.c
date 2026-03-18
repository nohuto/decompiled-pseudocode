/*
 * XREFs of AlpcpSignal @ 0x14004021C
 * Callers:
 *     AlpcpCompleteDeferSignalRequest @ 0x14047CC20 (AlpcpCompleteDeferSignalRequest.c)
 *     NtAlpcSendWaitReceivePort @ 0x140522360 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     AlpcpQueueIoCompletionPort @ 0x1400402CC (AlpcpQueueIoCompletionPort.c)
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 */

int __fastcall AlpcpSignal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int result; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      LOBYTE(a4) = a2;
      LOBYTE(a3) = 1;
      LOBYTE(a2) = *(_BYTE *)(a1 + 59);
      return AlpcpQueueIoCompletionPort(v6, a2, a3, a4);
    }
    else
    {
      LOBYTE(v5) = (_BYTE)a2 != 0;
      return KeReleaseSemaphoreEx(*(_QWORD *)(v6 + 248), 1, 1, a4, v5);
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
    {
      if ( (_BYTE)a2 )
        v11 = (_BYTE)a3 != 0 ? 1 : 5;
      else
        v11 = 2;
      return KeReleaseSemaphoreEx((int)v7 + 1608, 1, 1, a4, v11);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 40);
      if ( v9 )
      {
        result = KeSetEvent((PRKEVENT)(v9 & 0xFFFFFFFFFFFFFFFEuLL), 0, a2);
        v10 = *(_QWORD *)(a1 + 40);
        if ( (v10 & 1) != 0 )
          result = ObfDereferenceObject((PVOID)(v10 & 0xFFFFFFFFFFFFFFFEuLL));
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
  return result;
}
