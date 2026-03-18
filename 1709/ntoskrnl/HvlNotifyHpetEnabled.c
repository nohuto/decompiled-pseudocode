/*
 * XREFs of HvlNotifyHpetEnabled @ 0x1401EC910
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 HvlNotifyHpetEnabled()
{
  __int64 v0; // rax
  __int16 v1; // bx
  PHYSICAL_ADDRESS v3[3]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v4[80]; // [rsp+40h] [rbp-68h] BYREF

  v0 = HvlpAcquireHypercallPage(v3, 1, (__int64)v4, 40LL);
  *(_DWORD *)v0 = 8;
  *(_BYTE *)(v0 + 8) = 1;
  v1 = HvcallCodeVa();
  HvlpReleaseHypercallPage((__int64)v3);
  return v1 != 0 ? 0xC0000001 : 0;
}
