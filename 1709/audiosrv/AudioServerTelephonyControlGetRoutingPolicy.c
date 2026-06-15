/*
 * XREFs of AudioServerTelephonyControlGetRoutingPolicy @ 0x1800905A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioServerTelephonyControlGetRoutingPolicy()
{
  return (*(__int64 (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)g_TelephonyControl + 56LL))(g_TelephonyControl);
}
