/*
 * XREFs of LpcpRequestWaitReplyPort @ 0x140463C18
 * Callers:
 *     NtRequestWaitReplyPort @ 0x140463B80 (NtRequestWaitReplyPort.c)
 *     LpcRequestWaitReplyPortEx @ 0x14059C250 (LpcRequestWaitReplyPortEx.c)
 *     LpcRequestWaitReplyPort @ 0x1405F1AD0 (LpcRequestWaitReplyPort.c)
 *     IopSendMessageToTrackService @ 0x1406B5B58 (IopSendMessageToTrackService.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140464544 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404A2660 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcpRequestWaitReplyPort(int a1, __int64 a2, __int64 a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx
  int v11; // [rsp+40h] [rbp-18h]

  if ( a4 )
    AlpcpProbeForWriteMessageHeader(a3, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(v11) = a4;
  v9 = AlpcpProcessSynchronousRequest(a1, a3, 0LL, 0LL, 0LL, v11, a5);
  KeLeaveCriticalRegion();
  if ( v9 == -1073740029 )
    v9 = -1073741769;
  if ( v9 == -1073740031 )
    return (unsigned int)-1073741229;
  return v9;
}
