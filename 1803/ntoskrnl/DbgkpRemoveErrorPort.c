/*
 * XREFs of DbgkpRemoveErrorPort @ 0x14048BA68
 * Callers:
 *     DbgkFlushErrorPort @ 0x1405103C0 (DbgkFlushErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140710E28 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     DbgkpDeleteErrorPort @ 0x14048BED4 (DbgkpDeleteErrorPort.c)
 */

int __fastcall DbgkpRemoveErrorPort(__int64 a1, ULONG_PTR a2, volatile signed __int32 *a3)
{
  _UNKNOWN **v3; // rax
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 HostSilo; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  if ( !_interlockedbittestandset(a3 + 1, 0) )
  {
    v7 = 0;
    --*(_WORD *)(a1 + 484);
    ExAcquirePushLockExclusiveEx(a2, 0LL);
    if ( *(volatile signed __int32 **)(a2 + 8) == a3 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      v7 = 1;
      HostSilo = PsGetHostSilo();
      if ( (void *)a2 == (char *)PsGetServerSiloGlobals(HostSilo) + 960 )
        _interlockedbittestandreset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a2, v8, v9, v10);
    KeAbPostRelease(a2);
    LODWORD(v3) = (unsigned int)KeLeaveCriticalRegionThread(a1);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(a3, 0xFFFFFFFF) == 1 )
        DbgkpDeleteErrorPort((PVOID)a3);
      LODWORD(v3) = KeResetEvent(*(PRKEVENT *)(a2 + 24));
    }
  }
  return (int)v3;
}
