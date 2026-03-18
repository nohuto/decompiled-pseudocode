/*
 * XREFs of HvlpInitializePowerStatistics @ 0x14022C268
 * Callers:
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 */

__int64 HvlpInitializePowerStatistics()
{
  unsigned int v0; // edi
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  PHYSICAL_ADDRESS v4[3]; // [rsp+20h] [rbp-48h] BYREF
  PHYSICAL_ADDRESS v5[3]; // [rsp+40h] [rbp-28h] BYREF

  v0 = 0;
  if ( (HvlEnlightenments & 0x408) == 0 )
    return 0LL;
  v2 = (_QWORD *)HvlpAcquireHypercallPage(v4, 1, 0LL, 8LL);
  v3 = HvlpAcquireHypercallPage(v5, 2, 0LL, 392LL);
  *v2 = 0LL;
  *(_DWORD *)v2 = 4;
  if ( (unsigned __int16)HvcallCodeVa() )
  {
    v0 = -1073741823;
  }
  else
  {
    xmmword_1403E5A30 = *(_OWORD *)v3;
    xmmword_1403E5A40 = *(_OWORD *)(v3 + 16);
    qword_1403E5A50 = *(_QWORD *)(v3 + 32);
  }
  HvlpReleaseHypercallPage((__int64)v4);
  HvlpReleaseHypercallPage((__int64)v5);
  return v0;
}
