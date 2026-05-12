/*
 * XREFs of WPP_SF_ddsd @ 0x1C00465D4
 * Callers:
 *     RaidSelectDeviceDumpCollectionMode @ 0x1C0015AEC (RaidSelectDeviceDumpCollectionMode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_ddsd(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           &WPP_e2ad347556083c3f7a7362b05d162079_Traceguids);
}
