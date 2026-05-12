/*
 * XREFs of WPP_SF_qdd @ 0x1C00304CC
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C002F960 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids);
}
