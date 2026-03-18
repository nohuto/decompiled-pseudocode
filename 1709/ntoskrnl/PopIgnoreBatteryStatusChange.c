/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x14024240C
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140365980, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140365988);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140365A08, Executive, 0, 0, 0LL);
  }
  byte_140365A20 = 1;
  return v0;
}
