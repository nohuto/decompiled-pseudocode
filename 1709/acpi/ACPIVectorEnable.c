/*
 * XREFs of ACPIVectorEnable @ 0x1C0059BB0
 * Callers:
 *     ACPIEcUnmaskInterrupt @ 0x1C004BB28 (ACPIEcUnmaskInterrupt.c)
 *     ACPIVectorEnable2 @ 0x1C0059C70 (ACPIVectorEnable2.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C001054C (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0013D1C (ACPIGpeEnableDisableEvents.c)
 */

__int64 __fastcall ACPIVectorEnable(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v3; // ebp
  int v4; // esi
  __int64 v5; // rbx
  KIRQL v6; // di
  int v7; // edx

  v3 = *a2;
  v4 = 1 << (*a2 & 7);
  v5 = (unsigned int)ACPIGpeIndexToGpeRegister(*a2, (__int64)a2, a3);
  v6 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0);
  *((_BYTE *)GpeEnable + v5) |= v4;
  *((_BYTE *)GpeCurEnable + v5) |= v4;
  ACPIGpeEnableDisableEvents(1);
  KeReleaseSpinLock(&GpeTableLock, v6);
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    14,
    14,
    (__int64)&WPP_7b45772542bc311dd8664fae17eff083_Traceguids,
    v3);
  return 0LL;
}
