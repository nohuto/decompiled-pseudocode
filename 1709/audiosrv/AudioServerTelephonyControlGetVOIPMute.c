/*
 * XREFs of AudioServerTelephonyControlGetVOIPMute @ 0x1800905C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioServerTelephonyControlGetVOIPMute()
{
  return (*(__int64 (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)g_TelephonyControl + 112LL))(g_TelephonyControl);
}
