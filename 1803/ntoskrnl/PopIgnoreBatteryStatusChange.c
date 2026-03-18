/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x1401562A4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_1403AA2E0, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_1403AA2E8);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_1403AA368, Executive, 0, 0, 0LL);
  }
  byte_1403AA380 = 1;
  return v0;
}
