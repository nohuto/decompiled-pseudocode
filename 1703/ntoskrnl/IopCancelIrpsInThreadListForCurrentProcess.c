/*
 * XREFs of IopCancelIrpsInThreadListForCurrentProcess @ 0x14048BDA0
 * Callers:
 *     IopRevokeFileObjectForProcess @ 0x1401F520C (IopRevokeFileObjectForProcess.c)
 *     NtCancelIoFileEx @ 0x140433178 (NtCancelIoFileEx.c)
 * Callees:
 *     IopCancelApcRequired @ 0x14004F978 (IopCancelApcRequired.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IopCancelIrpsInThreadList @ 0x140433318 (IopCancelIrpsInThreadList.c)
 *     PsGetNextProcessThread @ 0x14047F100 (PsGetNextProcessThread.c)
 */

__int64 __fastcall IopCancelIrpsInThreadListForCurrentProcess(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  _KPROCESS *Process; // rsi
  _QWORD *i; // rdx
  _QWORD *NextProcessThread; // rax
  __int64 v8; // rbx
  _QWORD v10[18]; // [rsp+20h] [rbp-98h] BYREF

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  memset(v10, 0, 0x88uLL);
  v10[11] = a1;
  v10[12] = a2;
  LOBYTE(v10[16]) = 0;
  KeInitializeEvent((PRKEVENT)&v10[13], NotificationEvent, 0);
  for ( i = 0LL; ; i = (_QWORD *)v8 )
  {
    NextProcessThread = PsGetNextProcessThread((__int64)Process, i);
    v8 = (__int64)NextProcessThread;
    if ( !NextProcessThread )
      break;
    if ( IopCancelApcRequired((__int64)NextProcessThread, a1, a2) )
      v4 |= IopCancelIrpsInThreadList(v8, (__int64)v10);
  }
  return v4;
}
