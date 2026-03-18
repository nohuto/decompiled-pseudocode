/*
 * XREFs of AlpcpSignal @ 0x14006010C
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x1404C9870 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x1404D0918 (AlpcpCompleteDeferSignalRequest.c)
 * Callees:
 *     AlpcpQueueIoCompletionPort @ 0x1400845E0 (AlpcpQueueIoCompletionPort.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

int __fastcall AlpcpSignal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v5 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      LOBYTE(a4) = a2;
      LOBYTE(a3) = 1;
      LOBYTE(a2) = *(_BYTE *)(a1 + 59);
      LODWORD(v7) = AlpcpQueueIoCompletionPort(v6, a2, a3, a4);
    }
    else
    {
      LOBYTE(v5) = (_BYTE)a2 != 0;
      LODWORD(v7) = KeReleaseSemaphoreEx(*(_QWORD *)(v6 + 248), 1, 1, a4, v5);
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
    {
      v8 = v7 + 1608;
      if ( (_BYTE)a2 )
        LODWORD(v7) = KeReleaseSemaphoreEx(v8, 1, 1, a4, (_BYTE)a3 != 0 ? 1 : 5);
      else
        LODWORD(v7) = KeReleaseSemaphoreEx(v8, 1, 1, a4, 2);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 40);
      if ( v9 )
      {
        LODWORD(v7) = KeSetEvent((PRKEVENT)(v9 & 0xFFFFFFFFFFFFFFFEuLL), 0, a2);
        v10 = *(_QWORD *)(a1 + 40);
        if ( (v10 & 1) != 0 )
          LODWORD(v7) = ObfDereferenceObject((PVOID)(v10 & 0xFFFFFFFFFFFFFFFEuLL));
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
  return v7;
}
