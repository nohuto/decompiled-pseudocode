/*
 * XREFs of WPP_SF_qqDDD @ 0x1C003E698
 * Callers:
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000D1BC (RaidUnitHandleSpecialErrorConditions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqDDD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids);
}
