/*
 * XREFs of AudioServerTelephonyControlIsSessionStarted @ 0x180090600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioServerTelephonyControlIsSessionStarted()
{
  return (*(__int64 (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)g_TelephonyControl + 32LL))(g_TelephonyControl);
}
