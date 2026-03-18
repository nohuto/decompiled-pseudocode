/*
 * XREFs of HvlpSlowFlushPasidAddressList @ 0x14022B868
 * Callers:
 *     HvlSvmFlushPasid @ 0x14022AF70 (HvlSvmFlushPasid.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     HvlpCopyFlushVaList @ 0x140159FE4 (HvlpCopyFlushVaList.c)
 *     HvlpFlushPasidAddressSpace @ 0x14022B76C (HvlpFlushPasidAddressSpace.c)
 */

char __fastcall HvlpSlowFlushPasidAddressList(int a1, int a2, unsigned int a3, unsigned __int64 *a4)
{
  __int64 v8; // rax
  PHYSICAL_ADDRESS v10[3]; // [rsp+28h] [rbp-30h] BYREF

  v8 = HvlpAcquireHypercallPage(v10, 5, 0LL, 0LL);
  if ( !v8 )
    return HvlpFlushPasidAddressSpace(a1, a2);
  *(_QWORD *)v8 = 0LL;
  *(_QWORD *)(v8 + 8) = 0LL;
  *(_DWORD *)(v8 + 4) = a1;
  *(_DWORD *)v8 = a2;
  HvlpCopyFlushVaList(a3, a4, 0, (__int64 *)(v8 + 16));
  HvcallCodeVa();
  return HvlpReleaseHypercallPage((__int64)v10);
}
