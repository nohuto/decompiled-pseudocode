/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x14013E02C
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_14034B400, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_14034B408);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_14034B488, Executive, 0, 0, 0LL);
  }
  byte_14034B4A0 = 1;
  return v0;
}
