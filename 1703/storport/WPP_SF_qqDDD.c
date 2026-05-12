/*
 * XREFs of WPP_SF_qqDDD @ 0x1C003FCCC
 * Callers:
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000AD4C (RaidUnitHandleSpecialErrorConditions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqDDD(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           &WPP_95124dee8acf35750318326cda357b29_Traceguids);
}
