/*
 * XREFs of CpcAcquirePerformanceCallback @ 0x1C0007D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcAcquirePerformanceCallback(__int64 a1, __int64 (*a2)(void))
{
  return a2();
}
