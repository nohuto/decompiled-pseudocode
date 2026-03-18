/*
 * XREFs of PopWatchdogDpc @ 0x140235050
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140070050 (PopUpdateWatchdogNoWorkersEvent.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

__int64 __fastcall PopWatchdogDpc(__int64 a1, __int64 a2)
{
  KIRQL v3; // di
  __int64 result; // rax

  if ( *(_DWORD *)(a2 + 16) != 1146572624 )
    __fastfail(5u);
  v3 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  if ( *(_BYTE *)(a2 + 216) && !*(_BYTE *)(a2 + 21) )
  {
    *(_BYTE *)(a2 + 21) = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 176), DelayedWorkQueue);
  }
  *(_BYTE *)(a2 + 20) = 0;
  PopUpdateWatchdogNoWorkersEvent(a2);
  KxReleaseSpinLock(&PopWatchdogLock);
  result = v3;
  __writecr8(v3);
  return result;
}
