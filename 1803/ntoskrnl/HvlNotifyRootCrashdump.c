/*
 * XREFs of HvlNotifyRootCrashdump @ 0x14022A03C
 * Callers:
 *     HvlPrepareForRootCrashdump @ 0x14022A0FC (HvlPrepareForRootCrashdump.c)
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char __fastcall HvlNotifyRootCrashdump(int a1)
{
  char result; // al
  _DWORD *v3; // rax
  PHYSICAL_ADDRESS v4[3]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v5[16]; // [rsp+40h] [rbp-28h] BYREF

  result = HvlpRootFlags;
  if ( (HvlpRootFlags & 4) != 0 )
  {
    v3 = (_DWORD *)HvlpAcquireHypercallPage(v4, 1, (__int64)v5, 8LL);
    *v3 = 2;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v3[1] = 2;
      }
      else
      {
        if ( a1 != 2 )
          return HvlpReleaseHypercallPage((__int64)v4);
        v3[1] = 3;
      }
    }
    else
    {
      v3[1] = 1;
    }
    HvcallCodeVa();
    return HvlpReleaseHypercallPage((__int64)v4);
  }
  return result;
}
