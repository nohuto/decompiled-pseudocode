/*
 * XREFs of ?ReportTimeout@NdisWatchdogState@@QEAAXXZ @ 0x1C00F9750
 * Callers:
 *     ndisWatchdogTimeoutWorkerRoutine @ 0x1C00F9BA0 (ndisWatchdogTimeoutWorkerRoutine.c)
 * Callees:
 *     ndisFindSomeoneToBlame @ 0x1C00F9814 (ndisFindSomeoneToBlame.c)
 *     ndisWaitForAllProcessorsIdle @ 0x1C00F9AB8 (ndisWaitForAllProcessorsIdle.c)
 */

void __fastcall NdisWatchdogState::ReportTimeout(struct _KEVENT *this)
{
  signed __int32 Blink; // eax
  signed __int32 v3; // ett
  KPRIORITY v4; // ebx
  signed __int32 v5; // eax
  signed __int32 v6; // ett

  _m_prefetchw(&this[6].Header.WaitListHead.Blink);
  Blink = (signed __int32)this[6].Header.WaitListHead.Blink;
  do
  {
    v3 = Blink;
    Blink = _InterlockedCompareExchange((volatile signed __int32 *)&this[6].Header.WaitListHead.Blink, Blink, Blink);
  }
  while ( v3 != Blink );
  if ( Blink )
  {
    v4 = KeSetPriorityThread(KeGetCurrentThread(), 2);
    ndisWaitForAllProcessorsIdle();
    KeSetPriorityThread(KeGetCurrentThread(), v4);
  }
  _m_prefetchw(&this[6].Header.WaitListHead.Blink);
  v5 = (signed __int32)this[6].Header.WaitListHead.Blink;
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)&this[6].Header.WaitListHead.Blink, v5, v5);
  }
  while ( v6 != v5 );
  if ( v5 )
  {
    ndisFindSomeoneToBlame((unsigned int)this[8].Header.Lock, (ULONG_PTR)&this[8].Header.WaitListHead);
    LODWORD(this[6].Header.WaitListHead.Blink) = 0;
    this[11].Header.Type = 1;
  }
  KeSetEvent(this + 7, 0, 0);
}
