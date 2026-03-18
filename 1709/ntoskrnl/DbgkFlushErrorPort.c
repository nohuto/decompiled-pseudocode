/*
 * XREFs of DbgkFlushErrorPort @ 0x1404FCFE8
 * Callers:
 *     PspExitProcess @ 0x1404FCEF4 (PspExitProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     DbgkpDeleteErrorPort @ 0x1406AC1D0 (DbgkpDeleteErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x1406AC1FC (DbgkpRemoveErrorPort.c)
 */

__int64 __fastcall DbgkFlushErrorPort(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  __int64 result; // rax
  signed __int64 *v4; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int32 *v6; // rbx

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  result = (__int64)PsGetServerSiloGlobals(ProcessServerSilo);
  v4 = (signed __int64 *)(result + 960);
  if ( a1 == *(_QWORD *)(result + 976) )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx(result + 960, 0LL);
    if ( a1 == v4[2] )
    {
      v6 = (volatile signed __int32 *)v4[1];
      _InterlockedIncrement(v6);
    }
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    result = (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v6 )
    {
      DbgkpRemoveErrorPort(CurrentThread, v4, v6);
      result = (unsigned int)_InterlockedDecrement(v6);
      if ( !(_DWORD)result )
        return DbgkpDeleteErrorPort((PVOID)v6);
    }
  }
  return result;
}
