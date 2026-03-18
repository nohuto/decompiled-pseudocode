/*
 * XREFs of LpcpReplyWaitReplyPort @ 0x1406DC390
 * Callers:
 *     LpcReplyWaitReplyPort @ 0x1406DC2C0 (LpcReplyWaitReplyPort.c)
 *     NtReplyWaitReplyPort @ 0x1406DC59C (NtReplyWaitReplyPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140464544 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404A2660 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcpReplyWaitReplyPort(__int64 a1, __int128 *a2, unsigned __int8 a3, unsigned __int8 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a3 )
    AlpcpProbeForWriteMessageHeader((unsigned __int64)a2, 0);
  v9 = AlpcpProcessSynchronousRequest(a1, 0x20001u, a2, 0LL, (unsigned __int64)a2, 0LL, 0LL, 0LL, a3, a4);
  if ( v9 == -1073740029 )
    v9 = -1073741769;
  if ( v9 == -1073740031 )
    v9 = -1073741229;
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v9;
}
