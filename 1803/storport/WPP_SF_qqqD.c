/*
 * XREFs of WPP_SF_qqqD @ 0x1C00376DC
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C000F2D8 (RaidPowerPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqqD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_39b6f691d58430155b1312f31604fba7_Traceguids);
}
