/*
 * XREFs of ndisGetHigherFilterWithPnpRef @ 0x1C00206BC
 * Callers:
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00BBE98 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C00BBFA0 (ndisFNetPnPEventInternal.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001EE0C (ndisReferenceRefEx.c)
 */

__int64 __fastcall ndisGetHigherFilterWithPnpRef(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  KIRQL v6; // bp
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2105675;
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
  while ( a2 && !ndisReferenceRefEx((PKSPIN_LOCK)(a2 + 320), a3, &v8) );
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  return a2;
}
