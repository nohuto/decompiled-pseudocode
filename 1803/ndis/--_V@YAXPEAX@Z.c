/*
 * XREFs of ??_V@YAXPEAX@Z @ 0x1C00CA238
 * Callers:
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C00B465C (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 *     KRegKey::QueryValueBlob__lambda_1e1d3c9721006777a03f858ff1740b3c___ @ 0x1C00BA898 (KRegKey--QueryValueBlob__lambda_1e1d3c9721006777a03f858ff1740b3c___.c)
 *     KRegKey::QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee09c56382ecb370___ @ 0x1C00BA960 (KRegKey--QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee0.c)
 *     KRegKey::QueryValueBlob__lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31___ @ 0x1C00BAAB0 (KRegKey--QueryValueBlob__lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31___.c)
 *     KRegKey::QueryValueBlob__lambda_0a0f4a6e234c0d615b3ff6ea32737ef1___ @ 0x1C00BAB78 (KRegKey--QueryValueBlob__lambda_0a0f4a6e234c0d615b3ff6ea32737ef1___.c)
 *     KRegKey::QueryValueBlob__lambda_5658d1e45bdcd14f12a9cd7c7449a826___ @ 0x1C00BAD04 (KRegKey--QueryValueBlob__lambda_5658d1e45bdcd14f12a9cd7c7449a826___.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00BADAC (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     KRegKey::QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11bfda5894fd36a4____0 @ 0x1C00EA8E8 (KRegKey--QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb_ea_1C00EA8E8.c)
 *     KRegKey::QueryValueMultisz__lambda_43d9c6f647151fdb2f2362c6d885aaea___lambda_ac55aedf94f20521cfbcaaf74fbc728b___ @ 0x1C00FD518 (KRegKey--QueryValueMultisz__lambda_43d9c6f647151fdb2f2362c6d885aaea___lambda_ac55aedf94f20521cfb.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete[](void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
