/*
 * XREFs of PolicyConfigSetPropertyValue @ 0x180089E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 PolicyConfigSetPropertyValue()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 96LL))(g_PolicyConfig);
}
