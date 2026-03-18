/*
 * XREFs of ACPIVectorDisable @ 0x1C003FA20
 * Callers:
 *     ACPIEcMaskInterrupt @ 0x1C0021BB4 (ACPIEcMaskInterrupt.c)
 *     ACPIVectorDisable2 @ 0x1C003FAD0 (ACPIVectorDisable2.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00279A4 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0027AF4 (ACPIGpeIndexToGpeRegister.c)
 */

__int64 __fastcall ACPIVectorDisable(__int64 a1, unsigned int *a2)
{
  int v2; // esi
  __int64 v3; // rbx
  KIRQL v4; // di
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v7; // edx

  v2 = *a2;
  v3 = (unsigned int)ACPIGpeIndexToGpeRegister(*a2);
  v4 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0, v5);
  v6 = (unsigned __int8)~(1 << (v2 & 7));
  *((_BYTE *)GpeEnable + v3) &= v6;
  *((_BYTE *)GpeCurEnable + v3) &= v6;
  ACPIGpeEnableDisableEvents(1, v6);
  KeReleaseSpinLock(&GpeTableLock, v4);
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    14,
    12,
    (__int64)&WPP_54ed5c38fd043f43cce4e7311b7ced51_Traceguids,
    v2);
  return 0LL;
}
