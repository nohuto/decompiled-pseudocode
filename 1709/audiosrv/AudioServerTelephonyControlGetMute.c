/*
 * XREFs of AudioServerTelephonyControlGetMute @ 0x180090580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 AudioServerTelephonyControlGetMute()
{
  return (*(__int64 (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)g_TelephonyControl + 96LL))(g_TelephonyControl);
}
