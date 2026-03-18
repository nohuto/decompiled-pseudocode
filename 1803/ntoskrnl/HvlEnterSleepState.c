/*
 * XREFs of HvlEnterSleepState @ 0x1402293B0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall HvlEnterSleepState(int a1)
{
  __int16 v1; // bx
  PHYSICAL_ADDRESS v3[3]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v4[16]; // [rsp+40h] [rbp-28h] BYREF

  *(_DWORD *)HvlpAcquireHypercallPage(v3, 1, (__int64)v4, 8LL) = a1;
  v1 = HvcallCodeVa();
  HvlpReleaseHypercallPage((__int64)v3);
  return v1 != 0 ? 0xC0000001 : 0;
}
