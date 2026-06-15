/*
 * XREFs of AudioServerTelephonyControlSetCallState @ 0x180090640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioServerTelephonyControlSetCallState()
{
  return (*(__int64 (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)g_TelephonyControl + 64LL))(g_TelephonyControl);
}
