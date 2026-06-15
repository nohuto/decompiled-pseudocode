/*
 * XREFs of __tailMerge_bcrypt_dll @ 0x180035052
 * Callers:
 *     __imp_load_BCryptDestroyKey @ 0x180035046 (__imp_load_BCryptDestroyKey.c)
 *     __imp_load_BCryptGetProperty @ 0x1800351D5 (__imp_load_BCryptGetProperty.c)
 *     __imp_load_BCryptVerifySignature @ 0x180035211 (__imp_load_BCryptVerifySignature.c)
 *     __imp_load_BCryptOpenAlgorithmProvider @ 0x180035235 (__imp_load_BCryptOpenAlgorithmProvider.c)
 *     __imp_load_BCryptFinishHash @ 0x1800352EA (__imp_load_BCryptFinishHash.c)
 *     __imp_load_BCryptCloseAlgorithmProvider @ 0x180035302 (__imp_load_BCryptCloseAlgorithmProvider.c)
 *     __imp_load_BCryptDestroyHash @ 0x18003531A (__imp_load_BCryptDestroyHash.c)
 *     __imp_load_BCryptImportKeyPair @ 0x180035332 (__imp_load_BCryptImportKeyPair.c)
 *     __imp_load_BCryptHashData @ 0x18003533E (__imp_load_BCryptHashData.c)
 *     __imp_load_BCryptCreateHash @ 0x18003534A (__imp_load_BCryptCreateHash.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800DDF20 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_bcrypt_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_bcrypt_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
