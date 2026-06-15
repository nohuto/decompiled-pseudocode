/*
 * XREFs of AudioServerTelephonyControlGetValidTelephonyInstance @ 0x1800905E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioServerTelephonyControlGetValidTelephonyInstance()
{
  return (*(__int64 (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)g_TelephonyControl + 136LL))(g_TelephonyControl);
}
