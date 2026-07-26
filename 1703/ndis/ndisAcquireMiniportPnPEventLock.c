/*
 * XREFs of ndisAcquireMiniportPnPEventLock @ 0x1C0016B38
 * Callers:
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00B547C (ndisPnPNotifyBindingUnlocked.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00FA564 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAcquireMiniportPnPEventLock(__int64 a1, struct _KEVENT *a2)
{
  KIRQL v4; // r14
  int v5; // ecx
  void *v6; // rbx

  KeInitializeEvent(a2, NotificationEvent, 0);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_DWORD *)(a1 + 4448);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 1641231;
  if ( (v5 & 8) != 0 )
  {
    do
    {
      if ( !*(_QWORD *)(a1 + 760) )
      {
        KeClearEvent(a2);
        *(_QWORD *)(a1 + 760) = a2;
      }
      v6 = *(void **)(a1 + 760);
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
      KeWaitForSingleObject(v6, Executive, 0, 0, 0LL);
      v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(a1 + 1856) = 1641231;
    }
    while ( (*(_DWORD *)(a1 + 4448) & 8) != 0 );
  }
  *(_DWORD *)(a1 + 4448) |= 8u;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
}
