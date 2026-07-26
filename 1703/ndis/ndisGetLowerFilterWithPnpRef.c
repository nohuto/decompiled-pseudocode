/*
 * XREFs of ndisGetLowerFilterWithPnpRef @ 0x1C001D338
 * Callers:
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00A7D30 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00B87B0 (ndisDevicePnPEventNotifyMiniport.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001EE0C (ndisReferenceRefEx.c)
 */

__int64 __fastcall ndisGetLowerFilterWithPnpRef(__int64 a1, __int64 i)
{
  KIRQL v4; // bp

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2105719;
  if ( i )
    goto LABEL_6;
  for ( i = *(_QWORD *)(a1 + 2056);
        i && !(unsigned __int8)ndisReferenceRefEx((PKSPIN_LOCK)(i + 320));
        i = *(_QWORD *)(i + 112) )
  {
LABEL_6:
    ;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  return i;
}
