/*
 * XREFs of ndisGetHigherFilterWithPnpRef @ 0x1C001024C
 * Callers:
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B0E0C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C00B0F20 (ndisFNetPnPEventInternal.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C0022014 (ndisReferenceRefEx.c)
 */

__int64 __fastcall ndisGetHigherFilterWithPnpRef(__int64 a1, __int64 a2)
{
  KIRQL v4; // bp

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2105638;
  if ( !a2 )
  {
    a2 = *(_QWORD *)(a1 + 2048);
    goto LABEL_3;
  }
  do
  {
    a2 = *(_QWORD *)(a2 + 120);
LABEL_3:
    ;
  }
  while ( a2 && !(unsigned __int8)ndisReferenceRefEx((PKSPIN_LOCK)(a2 + 320)) );
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  return a2;
}
