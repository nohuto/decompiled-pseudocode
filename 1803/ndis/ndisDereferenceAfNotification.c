/*
 * XREFs of ndisDereferenceAfNotification @ 0x1C0052B3C
 * Callers:
 *     ndisCreateNotifyQueue @ 0x1C010DDE8 (ndisCreateNotifyQueue.c)
 *     ndisNotifyAfRegistration @ 0x1C010E070 (ndisNotifyAfRegistration.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C010F3E0 (ndisMFinishQueuedPendingOpen.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall ndisDereferenceAfNotification(__int64 a1)
{
  KIRQL v2; // si
  struct _KEVENT *v3; // rcx

  if ( (unsigned __int8)byte_1C009961A >= 4u )
    WPP_SF_q(0x39u, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids, a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 232));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1120), 0xFFFFFFFF) == 1 )
  {
    v3 = *(struct _KEVENT **)(a1 + 1128);
    if ( v3 )
      KeSetEvent(v3, 0, 0);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 232), v2);
  if ( (unsigned __int8)byte_1C009961A >= 4u )
    WPP_SF_q(0x3Au, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids, a1);
}
