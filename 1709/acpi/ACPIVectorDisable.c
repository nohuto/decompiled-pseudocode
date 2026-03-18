/*
 * XREFs of ACPIVectorDisable @ 0x1C00599C0
 * Callers:
 *     ACPIEcMaskInterrupt @ 0x1C004BAE4 (ACPIEcMaskInterrupt.c)
 *     ACPIVectorDisable2 @ 0x1C0059A70 (ACPIVectorDisable2.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C001054C (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0013D1C (ACPIGpeEnableDisableEvents.c)
 */

__int64 __fastcall ACPIVectorDisable(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // rbx
  KIRQL v5; // di
  char v6; // dl
  int v7; // edx

  v3 = *a2;
  v4 = (unsigned int)ACPIGpeIndexToGpeRegister(*a2, (__int64)a2, a3);
  v5 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0);
  v6 = ~(1 << (v3 & 7));
  *((_BYTE *)GpeEnable + v4) &= v6;
  *((_BYTE *)GpeCurEnable + v4) &= v6;
  ACPIGpeEnableDisableEvents(1);
  KeReleaseSpinLock(&GpeTableLock, v5);
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    14,
    12,
    (__int64)&WPP_7b45772542bc311dd8664fae17eff083_Traceguids,
    v3);
  return 0LL;
}
