/*
 * XREFs of HvlpSlowFlushAddressSpaceTbEx @ 0x14022E874
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x140159CD8 (HvlFlushAddressSpaceTb.c)
 *     HvlpFlushAddressSpaceTbEx @ 0x14022E6C4 (HvlpFlushAddressSpaceTbEx.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvlpAffinityToHvProcessorSet @ 0x14022DD70 (HvlpAffinityToHvProcessorSet.c)
 */

char __fastcall HvlpSlowFlushAddressSpaceTbEx(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // r9
  unsigned int v7; // r8d
  _QWORD *v8; // rbx
  __int64 v9; // rax
  PHYSICAL_ADDRESS v11[3]; // [rsp+28h] [rbp-F0h] BYREF
  _BYTE v12[192]; // [rsp+48h] [rbp-D0h] BYREF

  v6 = (_QWORD *)HvlpAcquireHypercallPage(v11, 1, (__int64)v12, 96LL);
  *v6 = a1;
  v7 = a3 == 0 ? 4 : 0;
  v8 = v6 + 2;
  v9 = v7 | 2;
  if ( a1 )
    v9 = v7;
  v6[1] = v9;
  if ( (unsigned int)HvlpAffinityToHvProcessorSet(a2, v6 + 2, (v11[0].LowPart & 2) != 0 ? 64 : 4064) == -1 )
    HvlpAffinityToHvProcessorSet(0LL, v8, 0);
  HvcallCodeVa();
  return HvlpReleaseHypercallPage((__int64)v11);
}
