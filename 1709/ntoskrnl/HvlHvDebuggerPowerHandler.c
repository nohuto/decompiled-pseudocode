/*
 * XREFs of HvlHvDebuggerPowerHandler @ 0x1401EC200
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x1401EF688 (HvlpHvToNtStatus.c)
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
