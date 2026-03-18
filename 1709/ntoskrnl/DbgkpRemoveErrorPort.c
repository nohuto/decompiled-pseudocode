/*
 * XREFs of DbgkpRemoveErrorPort @ 0x1406AC1FC
 * Callers:
 *     DbgkFlushErrorPort @ 0x1404FCFE8 (DbgkFlushErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x1406AC4FC (DbgkpSendErrorMessage.c)
 * Callees:
 *     PsGetHostSilo @ 0x140004290 (PsGetHostSilo.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     DbgkpDeleteErrorPort @ 0x1406AC1D0 (DbgkpDeleteErrorPort.c)
 */

int __fastcall DbgkpRemoveErrorPort(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  int v7; // ebp
  __int64 HostSilo; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a3 + 4), 0) )
  {
    v7 = 0;
    --*(_WORD *)(a1 + 484);
    ExAcquirePushLockExclusiveEx(a2, 0LL);
    if ( *(_QWORD *)(a2 + 8) == a3 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      v7 = 1;
      HostSilo = PsGetHostSilo();
      if ( (void *)a2 == (char *)PsGetServerSiloGlobals(HostSilo) + 960 )
        _interlockedbittestandreset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a2);
    KeAbPostRelease(a2);
    LODWORD(v3) = (unsigned int)KeLeaveCriticalRegionThread(a1);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a3, 0xFFFFFFFF) == 1 )
        DbgkpDeleteErrorPort((HANDLE *)a3);
      LODWORD(v3) = KeResetEvent(*(PRKEVENT *)(a2 + 24));
    }
  }
  return (int)v3;
}
