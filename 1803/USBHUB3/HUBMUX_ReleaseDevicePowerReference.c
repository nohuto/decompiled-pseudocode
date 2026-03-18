/*
 * XREFs of HUBMUX_ReleaseDevicePowerReference @ 0x1C000E60C
 * Callers:
 *     HUBDSM_FlushingHubPowerDownEventsForFailedDevice @ 0x1C0019C40 (HUBDSM_FlushingHubPowerDownEventsForFailedDevice.c)
 *     HUBDSM_FailedDeviceHubSuspended @ 0x1C0019CF0 (HUBDSM_FailedDeviceHubSuspended.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMUX_ReleaseDevicePowerReference(volatile signed __int32 *a1)
{
  __int64 v1; // rsi
  volatile signed __int32 *v2; // rbx
  __int64 v3; // rdi
  KIRQL v4; // al

  v1 = *(_QWORD *)a1;
  v2 = a1;
  v3 = *(_QWORD *)a1 + 2312LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3);
  _InterlockedAnd(v2 + 60, 0xFFFFFFFB);
  _InterlockedAnd(v2 + 60, 0xFFFFFFFD);
  _InterlockedOr(v2 + 60, 1u);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 28));
  LODWORD(v2) = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 12), 0xFFFFFFFF);
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v4);
  if ( (_DWORD)v2 == 1 )
    HUBSM_AddEvent(v1 + 1256, 2018);
}
