/*
 * XREFs of WPP_SF_qqDDD @ 0x1C00401F4
 * Callers:
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000BB98 (RaidUnitHandleSpecialErrorConditions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqDDD(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids);
}
