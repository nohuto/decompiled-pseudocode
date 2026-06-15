/*
 * XREFs of AudioServerTelephonyControlEndSession @ 0x180090520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioServerTelephonyControlEndSession()
{
  return (*(__int64 (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)g_TelephonyControl + 40LL))(g_TelephonyControl);
}
