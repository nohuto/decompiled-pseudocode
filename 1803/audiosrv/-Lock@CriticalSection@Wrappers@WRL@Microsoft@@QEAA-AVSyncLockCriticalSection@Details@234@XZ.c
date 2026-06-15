/*
 * XREFs of ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x180017CB8
 * Callers:
 *     ?CodecStatusChanged@AtmosCheck@@AEAA_NPEAUDolbyLicenseResult@@@Z @ 0x1800267D4 (-CodecStatusChanged@AtmosCheck@@AEAA_NPEAUDolbyLicenseResult@@@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180029798 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ @ 0x180110138 (-EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ.c)
 *     ?IsDolbyDigitalPlusDecoderEnabled@AtmosCheck@@QEAAJXZ @ 0x18011108C (-IsDolbyDigitalPlusDecoderEnabled@AtmosCheck@@QEAAJXZ.c)
 *     ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUDolbyLicenseResult@@@Z @ 0x1801111CC (-IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUDolbyLicenseResult@@@Z.c)
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
