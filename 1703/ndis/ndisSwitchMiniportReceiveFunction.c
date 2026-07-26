/*
 * XREFs of ndisSwitchMiniportReceiveFunction @ 0x1C00207E0
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C00142C8 (ndisConfigurePeriodicReceives.c)
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002097C (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReceiveQueueingOff @ 0x1C0050C74 (ndisReceiveQueueingOff.c)
 *     ndisReceiveQueueingOn @ 0x1C0050CE4 (ndisReceiveQueueingOn.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C0051040 (ndisTracePeriodicRcvOnOff.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C0068148 (ndisEmptyPeriodicReceivesQueue.c)
 */

__int64 __fastcall ndisSwitchMiniportReceiveFunction(int a1)
{
  struct _NDIS_MINIPORT_BLOCK *i; // rbx
  struct _NDIS_MINIPORT_BLOCK *Lock; // rbp
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
        i->PeriodicReceiveQueue.LockDbg = 73151;
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
    Lock = (struct _NDIS_MINIPORT_BLOCK *)WPP_MAIN_CB.DeviceQueue.Lock;
    WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
    if ( Lock )
    {
      do
      {
        NextMiniportBlock = Lock->PeriodicReceiveQueue.NextMiniportBlock;
        KeAcquireSpinLockAtDpcLevel(&Lock->PeriodicReceiveQueue.SpinLock);
        Lock->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
        Lock->PeriodicReceiveQueue.LockDbg = 73186;
        ndisReceiveQueueingOff(Lock);
        ndisEmptyPeriodicReceivesQueue(Lock);
        Lock->PeriodicReceiveQueue.NextMiniportBlock = 0LL;
        Lock->PeriodicReceiveQueue.LockThread = 0LL;
        Lock->PeriodicReceiveQueue.LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(&Lock->PeriodicReceiveQueue.SpinLock);
        Lock = NextMiniportBlock;
      }
      while ( NextMiniportBlock );
    }
    if ( BYTE2(dword_1C0093FD8) )
      ndisTracePeriodicRcvOnOff(0LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
