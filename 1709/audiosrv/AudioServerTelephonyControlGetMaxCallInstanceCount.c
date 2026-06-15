/*
 * XREFs of AudioServerTelephonyControlGetMaxCallInstanceCount @ 0x180090560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioServerTelephonyControlGetMaxCallInstanceCount()
{
  return (*(__int64 (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)g_TelephonyControl + 128LL))(g_TelephonyControl);
}
