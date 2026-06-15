/*
 * XREFs of PolicyConfigGetProcessingPeriod @ 0x18009F670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 PolicyConfigGetProcessingPeriod()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 56LL))(g_PolicyConfig);
}
