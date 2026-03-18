/*
 * XREFs of DbgkFlushErrorPort @ 0x1405103C0
 * Callers:
 *     PspExitProcess @ 0x14050FEC8 (PspExitProcess.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     DbgkpRemoveErrorPort @ 0x14048BA68 (DbgkpRemoveErrorPort.c)
 *     DbgkpDeleteErrorPort @ 0x14048BED4 (DbgkpDeleteErrorPort.c)
 */

void __fastcall DbgkFlushErrorPort(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  _QWORD *ServerSiloGlobals; // rax
  signed __int64 *v4; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int32 *v6; // rbx

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
  v4 = ServerSiloGlobals + 120;
  if ( a1 == ServerSiloGlobals[122] )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(ServerSiloGlobals + 120), 0LL);
    if ( a1 == v4[2] )
    {
      v6 = (volatile signed __int32 *)v4[1];
      _InterlockedIncrement(v6);
    }
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v6 )
    {
      DbgkpRemoveErrorPort((__int64)CurrentThread, (ULONG_PTR)v4, v6);
      if ( !_InterlockedDecrement(v6) )
        DbgkpDeleteErrorPort((HANDLE *)v6);
    }
  }
}
