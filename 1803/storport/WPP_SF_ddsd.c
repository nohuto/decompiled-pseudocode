/*
 * XREFs of WPP_SF_ddsd @ 0x1C004731C
 * Callers:
 *     RaidSelectDeviceDumpCollectionMode @ 0x1C0014CDC (RaidSelectDeviceDumpCollectionMode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_ddsd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_62230680ba9933cbbb991facd50afe99_Traceguids);
}
