/*
 * XREFs of AudioServerTelephonyControlStartSession @ 0x1800906E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioServerTelephonyControlStartSession()
{
  return (*(__int64 (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)g_TelephonyControl + 24LL))(g_TelephonyControl);
}
