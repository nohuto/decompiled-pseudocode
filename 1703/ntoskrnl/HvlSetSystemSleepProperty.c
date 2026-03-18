/*
 * XREFs of HvlSetSystemSleepProperty @ 0x1401E7F90
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetSystemSleepProperty(int a1, char a2, char a3)
{
  __int64 v6; // rax
  PHYSICAL_ADDRESS v8[3]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v9[80]; // [rsp+40h] [rbp-68h] BYREF

  v6 = HvlpAcquireHypercallPage(v8, 1, (__int64)v9, 40LL);
  *(_DWORD *)v6 = 3;
  *(_DWORD *)(v6 + 8) = a1;
  *(_BYTE *)(v6 + 12) = a2;
  *(_BYTE *)(v6 + 13) = a3;
  LOWORD(a1) = HvcallCodeVa();
  HvlpReleaseHypercallPage((__int64)v8);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
