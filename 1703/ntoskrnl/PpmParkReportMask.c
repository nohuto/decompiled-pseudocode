/*
 * XREFs of PpmParkReportMask @ 0x140046D50
 * Callers:
 *     <none>
 * Callees:
 *     KeCpuSetReportParkedProcessors @ 0x14001A140 (KeCpuSetReportParkedProcessors.c)
 *     KeCopyAffinityEx @ 0x1400D9480 (KeCopyAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x140160800 (KeIsEqualAffinityEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvlParkedVirtualProcessors @ 0x1401E94E8 (HvlParkedVirtualProcessors.c)
 */

char PpmParkReportMask()
{
  if ( PpmIsParkingEnabled
    && !(unsigned int)KeIsEqualAffinityEx(PpmPerfCoreParkingMask, &PpmPerfReportedCoreParkingMask) )
  {
    KeCopyAffinityEx(&PpmPerfReportedCoreParkingMask, PpmPerfCoreParkingMask);
    if ( KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorPower )
      HvlParkedVirtualProcessors();
    if ( PpmParkMaskHandler )
      PpmParkMaskHandler(PpmCheckTime, PpmPerfCoreParkingMask);
    KeCpuSetReportParkedProcessors(PpmPerfCoreParkingMask, 2u);
  }
  return 1;
}
