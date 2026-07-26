/*
 * XREFs of NdisMCancelTimer @ 0x1C0025230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 */

void __stdcall NdisMCancelTimer(PNDIS_MINIPORT_TIMER Timer, PBOOLEAN TimerCancelled)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // r8
  BOOLEAN v5; // al
  _NDIS_MINIPORT_BLOCK *v6; // r8
  KIRQL v7; // r8
  $3DC05226F8E9AFE79CCAAC6A3E49652D *i; // rcx
  struct _NDIS_MINIPORT_TIMER *TimerQueue; // rdx

  Miniport = Timer->Miniport;
  if ( (Miniport->DriverVerifyFlags & 8) != 0 )
  {
    *TimerCancelled = 0;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099613 >= 4u )
      WPP_SF_qq(11LL, &WPP_a220dbba1db53d57c8c40116951fe210_Traceguids, Miniport, Timer);
    v5 = KeCancelTimer(&Timer->Timer);
    *TimerCancelled = v5;
    v6 = Timer->Miniport;
    if ( (v6->DriverHandle->Flags & 2) != 0 && v5 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&v6->TimerQueueLock);
      for ( i = &Timer->Miniport->560; ; i = ($3DC05226F8E9AFE79CCAAC6A3E49652D *)&TimerQueue->NextTimer )
      {
        TimerQueue = i->TimerQueue;
        if ( !i->TimerQueue )
          break;
        if ( TimerQueue == Timer )
        {
          i->TimerQueue = Timer->NextTimer;
          break;
        }
      }
      KeReleaseSpinLock(&Timer->Miniport->TimerQueueLock, v7);
    }
  }
}
