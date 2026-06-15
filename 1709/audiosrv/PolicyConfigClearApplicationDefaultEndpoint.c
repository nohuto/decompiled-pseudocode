/*
 * XREFs of PolicyConfigClearApplicationDefaultEndpoint @ 0x180089740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 PolicyConfigClearApplicationDefaultEndpoint()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 144LL))(g_PolicyConfig);
}
