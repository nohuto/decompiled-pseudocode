/*
 * XREFs of HvlDmaGetDmaGuardEnabled @ 0x140228B40
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaGetDmaGuardEnabled(_BYTE *a1)
{
  _QWORD *v2; // rbx
  _BYTE *v3; // rsi
  unsigned __int16 v4; // bx
  PHYSICAL_ADDRESS v6[3]; // [rsp+20h] [rbp-878h] BYREF
  PHYSICAL_ADDRESS v7[3]; // [rsp+40h] [rbp-858h] BYREF
  _BYTE v8[16]; // [rsp+60h] [rbp-838h] BYREF
  _BYTE v9[2064]; // [rsp+70h] [rbp-828h] BYREF

  v2 = (_QWORD *)HvlpAcquireHypercallPage(v6, 1, (__int64)v8, 8LL);
  v3 = (_BYTE *)HvlpAcquireHypercallPage(v7, 2, (__int64)v9, 1032LL);
  *v2 = 0LL;
  *(_DWORD *)v2 = 20;
  v4 = HvcallCodeVa();
  if ( !v4 )
    *a1 = *v3;
  HvlpReleaseHypercallPage((__int64)v6);
  HvlpReleaseHypercallPage((__int64)v7);
  return HvlpHvToNtStatus(v4);
}
