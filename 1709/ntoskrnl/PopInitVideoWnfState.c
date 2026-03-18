/*
 * XREFs of PopInitVideoWnfState @ 0x1408573B4
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 */

__int64 PopInitVideoWnfState()
{
  int v1; // [rsp+50h] [rbp+8h] BYREF

  ZwUpdateWnfStateData((__int64)&WNF_PO_VIDEO_INITIALIALIZED, (__int64)&PopVideoInitialized, 1LL);
  ZwUpdateWnfStateData(
    (__int64)&WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
    (__int64)&PopVideoHighPrecisionBrightnessEnabled,
    1LL);
  v1 = 100;
  return ZwUpdateWnfStateData((__int64)&WNF_PO_BRIGHTNESS_ALS_OFFSET, (__int64)&v1, 4LL);
}
