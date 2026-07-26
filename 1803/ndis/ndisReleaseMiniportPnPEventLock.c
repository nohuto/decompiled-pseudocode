/*
 * XREFs of ndisReleaseMiniportPnPEventLock @ 0x1C001A750
 * Callers:
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00B85A4 (ndisPnPNotifyBindingUnlocked.c)
 *     ndisPnPNotifyAllTransports @ 0x1C0101810 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReleaseMiniportPnPEventLock(__int64 a1)
{
  KIRQL v2; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v4; // si
  struct _KEVENT *v5; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  CurrentThread = KeGetCurrentThread();
  v4 = v2;
  *(_DWORD *)(a1 + 4448) &= ~8u;
  v5 = *(struct _KEVENT **)(a1 + 760);
  *(_QWORD *)(a1 + 520) = CurrentThread;
  *(_DWORD *)(a1 + 1856) = 1641263;
  if ( v5 )
  {
    KeSetEvent(v5, 0, 0);
    *(_QWORD *)(a1 + 760) = 0LL;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
}
