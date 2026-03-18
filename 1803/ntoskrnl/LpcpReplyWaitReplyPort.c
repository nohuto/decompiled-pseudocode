/*
 * XREFs of LpcpReplyWaitReplyPort @ 0x140747000
 * Callers:
 *     LpcReplyWaitReplyPort @ 0x140746F30 (LpcReplyWaitReplyPort.c)
 *     NtReplyWaitReplyPort @ 0x14074720C (NtReplyWaitReplyPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404CB670 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140560B60 (AlpcpProbeForWriteMessageHeader.c)
 */

__int64 __fastcall LpcpReplyWaitReplyPort(__int64 a1, unsigned __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a3 )
    AlpcpProbeForWriteMessageHeader(a2, 0);
  v9 = AlpcpProcessSynchronousRequest(a1, 0x20001u, a2, 0LL, a2, 0LL, 0LL, 0LL, a3, a4);
  if ( v9 == -1073740029 )
    v9 = -1073741769;
  if ( v9 == -1073740031 )
    v9 = -1073741229;
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v9;
}
