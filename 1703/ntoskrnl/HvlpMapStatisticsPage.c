/*
 * XREFs of HvlpMapStatisticsPage @ 0x1401E5C54
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x1401E5790 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeBootProcessor @ 0x1401E5B04 (HvlpInitializeBootProcessor.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpMapStatisticsPage(int a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  PHYSICAL_ADDRESS v9[3]; // [rsp+20h] [rbp-A8h] BYREF
  PHYSICAL_ADDRESS v10[3]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v11[16]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v12[48]; // [rsp+70h] [rbp-58h] BYREF

  v6 = HvlpAcquireHypercallPage(v9, 1, (__int64)v12, 24LL);
  v7 = (_QWORD *)HvlpAcquireHypercallPage(v10, 2, (__int64)v11, 8LL);
  *(_OWORD *)(v6 + 8) = *a2;
  *(_DWORD *)v6 = a1;
  LOWORD(v6) = HvcallCodeVa();
  *a3 = *v7 << 12;
  HvlpReleaseHypercallPage(v9);
  HvlpReleaseHypercallPage(v10);
  return (_WORD)v6 != 0 ? 0xC0000001 : 0;
}
