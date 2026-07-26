/*
 * XREFs of NdisMCancelTimer @ 0x1C001F580
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

void __stdcall NdisMCancelTimer(PNDIS_MINIPORT_TIMER Timer, PBOOLEAN TimerCancelled)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // r8
  BOOLEAN v5; // al
  _NDIS_MINIPORT_BLOCK *v6; // r8
  KIRQL v7; // r8
  $94042B82EFD482E65234DA71E06B9256 *i; // rcx

  Miniport = Timer->Miniport;
  if ( (Miniport->DriverVerifyFlags & 8) != 0 )
  {
    *TimerCancelled = 0;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0098753 >= 4u )
      WPP_SF_qq(11LL, &WPP_89199a78c9ed372c807b20ed02a65825_Traceguids, Miniport, Timer);
    v5 = KeCancelTimer(&Timer->Timer);
    *TimerCancelled = v5;
    v6 = Timer->Miniport;
    if ( (v6->DriverHandle->Flags & 2) != 0 && v5 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&v6->TimerQueueLock);
      for ( i = &Timer->Miniport->560; i->TimerQueue; i = ($94042B82EFD482E65234DA71E06B9256 *)&i->TimerQueue->NextTimer )
      {
        if ( i->TimerQueue == Timer )
        {
          i->TimerQueue = Timer->NextTimer;
          break;
        }
      }
      KeReleaseSpinLock(&Timer->Miniport->TimerQueueLock, v7);
    }
  }
}
