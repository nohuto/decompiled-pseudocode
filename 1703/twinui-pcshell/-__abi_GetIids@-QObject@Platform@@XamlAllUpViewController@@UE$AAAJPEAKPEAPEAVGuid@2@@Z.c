/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@XamlAllUpViewController@@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180143740
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@XamlAllUpViewController@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180143370 (-__abi_GetIids@-QObject@Platform@@XamlAllUpViewController@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlAllUpViewController@@WII@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180143380 (-__abi_GetIids@-QObject@Platform@@XamlAllUpViewController@@WII@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1801433E0 (-__abi_GetIids@-QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1801433F0 (-__abi_GetIids@-QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1801434A0 (-__abi_GetIids@-QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180143560 (-__abi_GetIids@-QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18019715C (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

__int64 __fastcall ___abi_GetIids__QObject_Platform__XamlAllUpViewController__UE_AAAJPEAKPEAPEAVGuid_2__Z(
        __int64 a1,
        int a2,
        const struct __s_GUID *a3)
{
  __int64 v4; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+28h] [rbp-28h]
  int v6; // [rsp+2Ch] [rbp-24h]
  __int64 v7; // [rsp+30h] [rbp-20h]
  int v8; // [rsp+38h] [rbp-18h]
  int v9; // [rsp+3Ch] [rbp-14h]

  v5 = -1050331480;
  v6 = 723772329;
  v7 = 56LL;
  v8 = 192;
  v9 = 1174405120;
  return __winRT::__getIids((__winRT *)2, a2, (unsigned int *)&v4, a3, (struct Platform::Guid **)0x3EA948107D3F0E38LL);
}
