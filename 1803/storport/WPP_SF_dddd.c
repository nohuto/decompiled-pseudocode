/*
 * XREFs of WPP_SF_dddd @ 0x1C0033C4C
 * Callers:
 *     StorPortDeviceBusy @ 0x1C00302A0 (StorPortDeviceBusy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_dddd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids);
}
