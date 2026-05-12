/*
 * XREFs of WPP_SF_qqqD @ 0x1C0039864
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C000F164 (RaidPowerPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqqD(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, void *))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           &WPP_0c5c8aed4ecb3cf637873a43b49c0b60_Traceguids);
}
