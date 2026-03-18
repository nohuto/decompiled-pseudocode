/*
 * XREFs of ACPIVectorEnable @ 0x1C0001D80
 * Callers:
 *     ACPIEcUnmaskInterrupt @ 0x1C004C704 (ACPIEcUnmaskInterrupt.c)
 *     ACPIVectorEnable2 @ 0x1C0059080 (ACPIVectorEnable2.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C001F1BC (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C002029C (ACPIGpeIndexToGpeRegister.c)
 */

__int64 __fastcall ACPIVectorEnable(__int64 a1, unsigned int *a2)
{
  int v2; // ebp
  int v3; // esi
  __int64 v4; // rbx
  KIRQL v5; // di
  __int64 v6; // rcx
  int v7; // edx

  v2 = *a2;
  v3 = 1 << (*a2 & 7);
  v4 = (unsigned int)ACPIGpeIndexToGpeRegister(*a2);
  v5 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0LL);
  LOBYTE(v6) = 1;
  *((_BYTE *)GpeEnable + v4) |= v3;
  *((_BYTE *)GpeCurEnable + v4) |= v3;
  ACPIGpeEnableDisableEvents(v6);
  KeReleaseSpinLock(&GpeTableLock, v5);
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    14,
    14,
    (__int64)&WPP_7b45772542bc311dd8664fae17eff083_Traceguids,
    v2);
  return 0LL;
}
