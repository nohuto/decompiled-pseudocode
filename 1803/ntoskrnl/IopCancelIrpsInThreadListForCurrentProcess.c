/*
 * XREFs of IopCancelIrpsInThreadListForCurrentProcess @ 0x1404E447C
 * Callers:
 *     IopRevokeFileObjectForProcess @ 0x140237D18 (IopRevokeFileObjectForProcess.c)
 *     NtCancelIoFileEx @ 0x14055C4AC (NtCancelIoFileEx.c)
 * Callees:
 *     IopCancelApcRequired @ 0x140069E88 (IopCancelApcRequired.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PsGetNextProcessThread @ 0x1404E8150 (PsGetNextProcessThread.c)
 *     IopCancelIrpsInThreadList @ 0x14055C648 (IopCancelIrpsInThreadList.c)
 */

__int64 __fastcall IopCancelIrpsInThreadListForCurrentProcess(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  _KPROCESS *Process; // rsi
  __int64 i; // rdx
  __int64 NextProcessThread; // rax
  __int64 v8; // rbx
  _QWORD v10[18]; // [rsp+20h] [rbp-98h] BYREF

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  memset(v10, 0, 0x88uLL);
  v10[11] = a1;
  v10[12] = a2;
  LOBYTE(v10[16]) = 0;
  KeInitializeEvent((PRKEVENT)&v10[13], NotificationEvent, 0);
  for ( i = 0LL; ; i = v8 )
  {
    NextProcessThread = PsGetNextProcessThread(Process, i);
    v8 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    if ( IopCancelApcRequired(NextProcessThread, a1, a2) )
      v4 |= IopCancelIrpsInThreadList(v8, v10);
  }
  return v4;
}
