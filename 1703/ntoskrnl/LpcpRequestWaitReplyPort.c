/*
 * XREFs of LpcpRequestWaitReplyPort @ 0x140470B28
 * Callers:
 *     LpcRequestWaitReplyPortEx @ 0x140470A50 (LpcRequestWaitReplyPortEx.c)
 *     NtRequestWaitReplyPort @ 0x140470A90 (NtRequestWaitReplyPort.c)
 *     LpcRequestWaitReplyPort @ 0x1405746A0 (LpcRequestWaitReplyPort.c)
 *     IopSendMessageToTrackService @ 0x140689EC4 (IopSendMessageToTrackService.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140470BF0 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProcessSynchronousRequest @ 0x140526710 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcpRequestWaitReplyPort(int a1, int a2, __int64 a3, char a4, char a5, int a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // ebx
  int v13; // [rsp+40h] [rbp-18h]

  if ( a4 )
    AlpcpProbeForWriteMessageHeader(a3, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(v13) = a4;
  v11 = AlpcpProcessSynchronousRequest(a1, a6 | 0x20000u, a2, 0, a3, 0LL, 0LL, 0LL, v13, a5);
  KeLeaveCriticalRegion();
  if ( v11 == -1073740029 )
    v11 = -1073741769;
  if ( v11 == -1073740031 )
    return (unsigned int)-1073741229;
  return v11;
}
