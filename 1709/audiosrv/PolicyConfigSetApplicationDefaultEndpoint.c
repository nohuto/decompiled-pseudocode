/*
 * XREFs of PolicyConfigSetApplicationDefaultEndpoint @ 0x180089AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 PolicyConfigSetApplicationDefaultEndpoint()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 136LL))(g_PolicyConfig);
}
