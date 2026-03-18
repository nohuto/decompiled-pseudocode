/*
 * XREFs of HvlHvDebuggerPowerHandler @ 0x1401E6E50
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1401EA4A4 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlHvDebuggerPowerHandler(char a1)
{
  __int64 v2; // rax
  unsigned __int16 v3; // bx
  PHYSICAL_ADDRESS v5[3]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v6[80]; // [rsp+40h] [rbp-68h] BYREF

  v2 = HvlpAcquireHypercallPage(v5, 1, (__int64)v6, 40LL);
  *(_DWORD *)v2 = 10;
  *(_BYTE *)(v2 + 8) = a1;
  v3 = HvcallCodeVa();
  HvlpReleaseHypercallPage((__int64)v5);
  return HvlpHvToNtStatus(v3);
}
