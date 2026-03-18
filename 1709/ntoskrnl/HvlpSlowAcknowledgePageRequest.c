/*
 * XREFs of HvlpSlowAcknowledgePageRequest @ 0x1401EDF14
 * Callers:
 *     HvlSvmAcknowledgePageRequest @ 0x1401ED260 (HvlSvmAcknowledgePageRequest.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1401EDD38 (HvlpFastAcknowledgePageRequest.c)
 */

__int64 __fastcall HvlpSlowAcknowledgePageRequest(unsigned int a1, const void *a2, int *a3)
{
  __int64 v3; // rbx
  void *v6; // rax
  PHYSICAL_ADDRESS v8[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h]

  v3 = a1;
  v6 = (void *)HvlpAcquireHypercallPage(v8, 5, 0LL, 0LL);
  if ( v6 )
  {
    memmove(v6, a2, 32 * v3);
    v9 = HvcallCodeVa();
    HvlpReleaseHypercallPage((__int64)v8);
    *a3 = WORD2(v9) & 0xFFF;
    return (unsigned __int16)v9;
  }
  else
  {
    if ( (unsigned int)v3 >= 3 )
      LODWORD(v3) = 3;
    return HvlpFastAcknowledgePageRequest(v3, (__int64)a2, a3);
  }
}
