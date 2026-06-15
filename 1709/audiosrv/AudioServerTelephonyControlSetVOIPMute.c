/*
 * XREFs of AudioServerTelephonyControlSetVOIPMute @ 0x1800906A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioServerTelephonyControlSetVOIPMute()
{
  return (*(__int64 (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)g_TelephonyControl + 104LL))(g_TelephonyControl);
}
