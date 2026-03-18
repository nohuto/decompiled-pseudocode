/*
 * XREFs of HvlpSlowAcknowledgePageRequest @ 0x14022B7B4
 * Callers:
 *     HvlSvmAcknowledgePageRequest @ 0x14022AA90 (HvlSvmAcknowledgePageRequest.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     HvlpFastAcknowledgePageRequest @ 0x14022B5D8 (HvlpFastAcknowledgePageRequest.c)
 */

__int64 __fastcall HvlpSlowAcknowledgePageRequest(unsigned int a1, const void *a2, int *a3)
{
  __int64 v3; // rbx
  void *v6; // rcx
  PHYSICAL_ADDRESS v8[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h]

  v3 = a1;
  v6 = (void *)HvlpAcquireHypercallPage(v8, 5, 0LL, 0LL);
  if ( v6 )
  {
    memmove(v6, a2, 40 * v3);
    v9 = HvcallCodeVa();
    HvlpReleaseHypercallPage((__int64)v8);
    *a3 = WORD2(v9) & 0xFFF;
    return (unsigned __int16)v9;
  }
  else
  {
    if ( (unsigned int)v3 >= 2 )
      LODWORD(v3) = 2;
    return HvlpFastAcknowledgePageRequest(v3, (__int64)a2, a3);
  }
}
