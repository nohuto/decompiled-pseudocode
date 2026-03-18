/*
 * XREFs of HvlSetSystemMachineCheckProperty @ 0x1401E7F00
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetSystemMachineCheckProperty(_QWORD *a1)
{
  __int64 v2; // rax
  PHYSICAL_ADDRESS v4[3]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v5[80]; // [rsp+40h] [rbp-68h] BYREF

  v2 = HvlpAcquireHypercallPage(v4, 1, (__int64)v5, 40LL);
  *(_DWORD *)v2 = 4;
  *(_QWORD *)(v2 + 8) = *a1;
  LOWORD(a1) = HvcallCodeVa();
  HvlpReleaseHypercallPage((__int64)v4);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
