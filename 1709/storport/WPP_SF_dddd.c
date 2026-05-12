/*
 * XREFs of WPP_SF_dddd @ 0x1C0036510
 * Callers:
 *     StorPortDeviceBusy @ 0x1C0033C50 (StorPortDeviceBusy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_dddd(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           &WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids);
}
