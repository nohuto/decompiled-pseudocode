/*
 * XREFs of ?__abi_GetIids@ApplicationInitializationCallback@Xaml@UI@Windows@@UE$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x180126DDC
 * Callers:
 *     ?__abi_GetIids@ApplicationInitializationCallback@Xaml@UI@Windows@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x180126D90 (-__abi_GetIids@ApplicationInitializationCallback@Xaml@UI@Windows@@WBA@E$AAAJPEAKPEAPEAVGuid@Plat.c)
 *     ?__abi_GetIids@ApplicationInitializationCallback@Xaml@UI@Windows@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x180126E40 (-__abi_GetIids@ApplicationInitializationCallback@Xaml@UI@Windows@@W7E$AAAJPEAKPEAPEAVGuid@Platfo.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18019715C (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::ApplicationInitializationCallback::__abi_GetIids(
        __int64 a1,
        int a2,
        const struct __s_GUID *a3)
{
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  int v6; // [rsp+2Ch] [rbp-14h]

  v5 = 167448707;
  v6 = 1874328167;
  return __winRT::__getIids((__winRT *)1, a2, (unsigned int *)&v4, a3, (struct Platform::Guid **)0x46E4C284B6351C55LL);
}
