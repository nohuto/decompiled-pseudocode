/*
 * XREFs of PopThermalCsExit @ 0x140243A20
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x1405F2260 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x140243AA8 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x140243B00 (PopThermalStandbyNotify.c)
 */

__int64 PopThermalCsExit()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = PopThermalStandbyEndTracking(1LL);
  LOBYTE(PopSystemThermalInfo) = 1;
  if ( dword_140365204 )
  {
    LOBYTE(v1) = 1;
    result = PopThermalStandbyNotify(v1);
    PopSystemThermalInfo = 256;
  }
  else if ( HIBYTE(PopSystemThermalInfo) )
  {
    result = PopThermalStandbyNotify(0LL);
    HIBYTE(PopSystemThermalInfo) = 0;
  }
  return result;
}
