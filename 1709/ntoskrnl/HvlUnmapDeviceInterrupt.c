/*
 * XREFs of HvlUnmapDeviceInterrupt @ 0x1401EDB70
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x1401EF688 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlUnmapDeviceInterrupt(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  PHYSICAL_ADDRESS v6[3]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v7[64]; // [rsp+40h] [rbp-58h] BYREF

  v4 = HvlpAcquireHypercallPage(v6, 1, (__int64)v7, 32LL);
  *(_QWORD *)v4 = -1LL;
  *(_QWORD *)(v4 + 8) = a1;
  *(_OWORD *)(v4 + 16) = *a2;
  LOWORD(a1) = HvcallCodeVa();
  HvlpReleaseHypercallPage((__int64)v6);
  return HvlpHvToNtStatus((unsigned __int16)a1);
}
