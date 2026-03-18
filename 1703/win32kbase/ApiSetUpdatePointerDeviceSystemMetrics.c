/*
 * XREFs of ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C0009128
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C004E7F0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetUpdatePointerDeviceSystemMetrics(__int64 a1)
{
  __int64 result; // rax

  result = IsUpdatePointerDeviceSystemMetricsSupported();
  if ( (int)result >= 0 )
    return UpdatePointerDeviceSystemMetrics(a1);
  return result;
}
