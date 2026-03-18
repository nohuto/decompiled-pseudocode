/*
 * XREFs of HvlSetQpcBias @ 0x14022A8A0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall HvlSetQpcBias(__int64 a1)
{
  __int64 v2; // rax
  PHYSICAL_ADDRESS v4[3]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v5[80]; // [rsp+40h] [rbp-68h] BYREF

  v2 = HvlpAcquireHypercallPage(v4, 1, (__int64)v5, 40LL);
  *(_DWORD *)v2 = 18;
  *(_QWORD *)(v2 + 8) = a1;
  LOWORD(a1) = HvcallCodeVa();
  HvlpReleaseHypercallPage((__int64)v4);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
