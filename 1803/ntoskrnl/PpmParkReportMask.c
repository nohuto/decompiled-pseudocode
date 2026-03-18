/*
 * XREFs of PpmParkReportMask @ 0x140036A80
 * Callers:
 *     <none>
 * Callees:
 *     KeCopyAffinityEx @ 0x140034E50 (KeCopyAffinityEx.c)
 *     KeCpuSetReportParkedProcessors @ 0x1400A6A88 (KeCpuSetReportParkedProcessors.c)
 *     KeIsEqualAffinityEx @ 0x14017FE90 (KeIsEqualAffinityEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     HvlParkedVirtualProcessors @ 0x14022BEE0 (HvlParkedVirtualProcessors.c)
 */

char PpmParkReportMask()
{
  __int64 v1; // rdx

  if ( PpmIsParkingEnabled
    && !(unsigned int)KeIsEqualAffinityEx(PpmPerfCoreParkingMask, &PpmPerfReportedCoreParkingMask) )
  {
    KeCopyAffinityEx((__int64)&PpmPerfReportedCoreParkingMask, PpmPerfCoreParkingMask);
    if ( KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorPower )
      HvlParkedVirtualProcessors();
    if ( PpmParkMaskHandler )
      PpmParkMaskHandler(PpmCheckTime, PpmPerfCoreParkingMask);
    LOBYTE(v1) = 2;
    KeCpuSetReportParkedProcessors(PpmPerfCoreParkingMask, v1);
  }
  return 1;
}
