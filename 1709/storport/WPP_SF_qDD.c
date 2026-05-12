/*
 * XREFs of WPP_SF_qdd @ 0x1C0030B44
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C001D1F0 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           &WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids);
}
