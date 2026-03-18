/*
 * XREFs of HvlpSlowFlushPasidAddressList @ 0x1401E8DD0
 * Callers:
 *     HvlSvmFlushPasid @ 0x1401E8560 (HvlSvmFlushPasid.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 *     HvlpFlushPasidAddressSpace @ 0x1401E8CD0 (HvlpFlushPasidAddressSpace.c)
 *     HvlpCopyFlushVaList @ 0x1401EB948 (HvlpCopyFlushVaList.c)
 */

char __fastcall HvlpSlowFlushPasidAddressList(int a1, int a2, unsigned int a3, __int64 a4)
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
  HvlpCopyFlushVaList(a3, a4, 0LL, v8 + 16);
  HvcallCodeVa();
  return HvlpReleaseHypercallPage((__int64)v10);
}
