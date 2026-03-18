/*
 * XREFs of HvlpInitializePowerStatistics @ 0x1401E98DC
 * Callers:
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
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
    xmmword_140389228 = *(_OWORD *)v3;
    xmmword_140389238 = *(_OWORD *)(v3 + 16);
    qword_140389248 = *(_QWORD *)(v3 + 32);
  }
  HvlpReleaseHypercallPage((__int64)v4);
  HvlpReleaseHypercallPage((__int64)v5);
  return v0;
}
