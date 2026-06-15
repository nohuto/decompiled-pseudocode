/*
 * XREFs of __tailMerge_bcrypt_dll @ 0x18004B182
 * Callers:
 *     __imp_load_BCryptDestroyKey @ 0x18004B176 (__imp_load_BCryptDestroyKey.c)
 *     __imp_load_BCryptGetProperty @ 0x18004B37E (__imp_load_BCryptGetProperty.c)
 *     __imp_load_BCryptVerifySignature @ 0x18004B3C6 (__imp_load_BCryptVerifySignature.c)
 *     __imp_load_BCryptOpenAlgorithmProvider @ 0x18004B3F6 (__imp_load_BCryptOpenAlgorithmProvider.c)
 *     __imp_load_BCryptFinishHash @ 0x18004B4C3 (__imp_load_BCryptFinishHash.c)
 *     __imp_load_BCryptCloseAlgorithmProvider @ 0x18004B4DB (__imp_load_BCryptCloseAlgorithmProvider.c)
 *     __imp_load_BCryptDestroyHash @ 0x18004B4FF (__imp_load_BCryptDestroyHash.c)
 *     __imp_load_BCryptImportKeyPair @ 0x18004B517 (__imp_load_BCryptImportKeyPair.c)
 *     __imp_load_BCryptHashData @ 0x18004B523 (__imp_load_BCryptHashData.c)
 *     __imp_load_BCryptCreateHash @ 0x18004B52F (__imp_load_BCryptCreateHash.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18002EDC0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_bcrypt_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_bcrypt_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
