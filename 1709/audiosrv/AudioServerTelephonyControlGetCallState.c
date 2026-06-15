/*
 * XREFs of AudioServerTelephonyControlGetCallState @ 0x180090540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioServerTelephonyControlGetCallState()
{
  return (*(__int64 (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)g_TelephonyControl + 72LL))(g_TelephonyControl);
}
