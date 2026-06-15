/*
 * XREFs of AudioServerTelephonyControlSetVolume @ 0x1800906C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioServerTelephonyControlSetVolume()
{
  return (*(__int64 (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)g_TelephonyControl + 120LL))(g_TelephonyControl);
}
