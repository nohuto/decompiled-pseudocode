/*
 * XREFs of PolicyConfigGetPropertyValue @ 0x180089970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 PolicyConfigGetPropertyValue()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 88LL))(g_PolicyConfig);
}
