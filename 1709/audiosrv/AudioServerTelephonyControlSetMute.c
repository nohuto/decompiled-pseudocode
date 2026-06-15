/*
 * XREFs of AudioServerTelephonyControlSetMute @ 0x180090660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 AudioServerTelephonyControlSetMute()
{
  return (*(__int64 (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)g_TelephonyControl + 88LL))(g_TelephonyControl);
}
