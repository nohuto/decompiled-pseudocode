/*
 * XREFs of ndisSwitchMiniportReceiveFunction @ 0x1C0005358
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C00050B0 (ndisConfigurePeriodicReceives.c)
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00053EC (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReceiveQueueingOff @ 0x1C0050188 (ndisReceiveQueueingOff.c)
 *     ndisReceiveQueueingOn @ 0x1C00501F4 (ndisReceiveQueueingOn.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C0050558 (ndisTracePeriodicRcvOnOff.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C0069B48 (ndisEmptyPeriodicReceivesQueue.c)
 */

__int64 __fastcall ndisSwitchMiniportReceiveFunction(int a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *i; // rbx
  bool v4; // zf
  struct _NDIS_MINIPORT_BLOCK *NextMiniportBlock; // rdi

  if ( a1 == 6 )
  {
    KeAcquireSpinLockAtDpcLevel(&ndisMiniportListLock);
    for ( i = ndisMiniportList; i; i = i->NextGlobalMiniport )
    {
      if ( !MiniportSupportsReceiveThrottle(i) )
      {
        KeAcquireSpinLockAtDpcLevel(&i->PeriodicReceiveQueue.SpinLock);
        v4 = i->MediaType == NdisMedium802_3;
        i->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
        i->PeriodicReceiveQueue.LockDbg = 72506;
        if ( v4 && i->PeriodicReceiveQueue.BoundToIP && i->PeriodicReceiveQueue.State == PeriodicReceivesOff )
          ndisReceiveQueueingOn(i);
        i->PeriodicReceiveQueue.LockThread = 0LL;
        i->PeriodicReceiveQueue.LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(&i->PeriodicReceiveQueue.SpinLock);
      }
    }
    KeReleaseSpinLockFromDpcLevel(&ndisMiniportListLock);
  }
  else
  {
    v1 = qword_1C0098DD8;
    qword_1C0098DD8 = 0LL;
    if ( v1 )
    {
      do
      {
        NextMiniportBlock = v1->PeriodicReceiveQueue.NextMiniportBlock;
        KeAcquireSpinLockAtDpcLevel(&v1->PeriodicReceiveQueue.SpinLock);
        v1->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
        v1->PeriodicReceiveQueue.LockDbg = 72541;
        ndisReceiveQueueingOff(v1);
        ndisEmptyPeriodicReceivesQueue(v1);
        v1->PeriodicReceiveQueue.NextMiniportBlock = 0LL;
        v1->PeriodicReceiveQueue.LockThread = 0LL;
        v1->PeriodicReceiveQueue.LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(&v1->PeriodicReceiveQueue.SpinLock);
        v1 = NextMiniportBlock;
      }
      while ( NextMiniportBlock );
    }
    if ( BYTE2(dword_1C009AF18) )
      ndisTracePeriodicRcvOnOff(0LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
