/*
 * XREFs of HvlpInitializePowerStatistics @ 0x1401EE9CC
 * Callers:
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 */

__int64 HvlpInitializePowerStatistics()
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi
  __int16 v3; // ax
  unsigned int v4; // ebx
  PHYSICAL_ADDRESS v5[3]; // [rsp+20h] [rbp-48h] BYREF
  PHYSICAL_ADDRESS v6[3]; // [rsp+40h] [rbp-28h] BYREF

  if ( (HvlEnlightenments & 0x408) == 0 )
    return 0LL;
  v1 = (_QWORD *)HvlpAcquireHypercallPage(v5, 1, 0LL, 8LL);
  v2 = HvlpAcquireHypercallPage(v6, 2, 0LL, 392LL);
  *v1 = 0LL;
  *(_DWORD *)v1 = 4;
  v3 = HvcallCodeVa();
  if ( !v3 )
  {
    xmmword_1403A1E00 = *(_OWORD *)v2;
    xmmword_1403A1E10 = *(_OWORD *)(v2 + 16);
    qword_1403A1E20 = *(_QWORD *)(v2 + 32);
  }
  v4 = v3 != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)v5);
  HvlpReleaseHypercallPage((__int64)v6);
  return v4;
}
