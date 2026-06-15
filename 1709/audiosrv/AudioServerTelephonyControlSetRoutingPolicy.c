/*
 * XREFs of AudioServerTelephonyControlSetRoutingPolicy @ 0x180090680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioServerTelephonyControlSetRoutingPolicy()
{
  return (*(__int64 (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)g_TelephonyControl + 48LL))(g_TelephonyControl);
}
