/*
 * XREFs of PolicyConfigGetProcessingPeriod @ 0x180089940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 PolicyConfigGetProcessingPeriod()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 56LL))(g_PolicyConfig);
}
