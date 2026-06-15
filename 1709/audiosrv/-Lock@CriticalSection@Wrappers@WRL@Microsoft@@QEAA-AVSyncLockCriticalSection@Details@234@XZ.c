/*
 * XREFs of ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x180005E94
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180004CD0 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?OnHoloshellStateChange@CExclusiveModeListener@@AEAAXAEBW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x180036448 (-OnHoloshellStateChange@CExclusiveModeListener@@AEAAXAEBW4ShellState@Holographic@Shell@Internal@.c)
 *     ?EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ @ 0x1800E30F8 (-EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ.c)
 *     ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUDolbyLicenseResult@@@Z @ 0x1800E4210 (-IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUDolbyLicenseResult@@@Z.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall Microsoft::WRL::Wrappers::CriticalSection::Lock(
        struct _RTL_CRITICAL_SECTION *a1,
        struct _RTL_CRITICAL_SECTION **a2)
{
  EnterCriticalSection(a1);
  *a2 = a1;
  return a2;
}
