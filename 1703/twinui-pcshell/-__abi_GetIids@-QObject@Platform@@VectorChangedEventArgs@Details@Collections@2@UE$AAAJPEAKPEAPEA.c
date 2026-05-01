/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18013A390
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180139FB0 (-__abi_GetIids@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@W7E$AAAJPEAKPEAPE.c)
 *     ?__abi_GetIids@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18013A000 (-__abi_GetIids@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBA@E$AAAJPEAKPEA.c)
 *     ?__abi_GetIids@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18013A420 (-__abi_GetIids@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WCA@E$AAAJPEAKPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18019715C (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

__int64 __fastcall ___abi_GetIids__QObject_Platform__VectorChangedEventArgs_Details_Collections_2_UE_AAAJPEAKPEAPEAVGuid_2__Z(
        __int64 a1,
        int a2,
        const struct __s_GUID *a3)
{
  __int64 v4; // [rsp+20h] [rbp-40h] BYREF
  int v5; // [rsp+28h] [rbp-38h]
  int v6; // [rsp+2Ch] [rbp-34h]
  int v7; // [rsp+30h] [rbp-30h]
  int v8; // [rsp+34h] [rbp-2Ch]
  int v9; // [rsp+38h] [rbp-28h]
  int v10; // [rsp+3Ch] [rbp-24h]
  __int64 v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]
  int v13; // [rsp+4Ch] [rbp-14h]

  v5 = -378877555;
  v6 = -151816439;
  v7 = 1465463775;
  v8 = 1149252862;
  v9 = 1762071983;
  v10 = -1688388321;
  v11 = 56LL;
  v12 = 192;
  v13 = 1174405120;
  return __winRT::__getIids((__winRT *)3, a2, (unsigned int *)&v4, a3, (struct Platform::Guid **)0x31364EDB0401B4A6LL);
}
