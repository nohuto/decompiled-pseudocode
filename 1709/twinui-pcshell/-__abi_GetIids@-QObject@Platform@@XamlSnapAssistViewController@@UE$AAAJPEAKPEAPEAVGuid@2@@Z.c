/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@XamlSnapAssistViewController@@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18017A180
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@XamlSnapAssistViewController@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180179FB0 (-__abi_GetIids@-QObject@Platform@@XamlSnapAssistViewController@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlSnapAssistViewController@@WDA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180179FD0 (-__abi_GetIids@-QObject@Platform@@XamlSnapAssistViewController@@WDA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlSnapAssistViewController@@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18017A030 (-__abi_GetIids@-QObject@Platform@@XamlSnapAssistViewController@@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlSnapAssistViewController@@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18017A0C0 (-__abi_GetIids@-QObject@Platform@@XamlSnapAssistViewController@@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlSnapAssistViewController@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18017A130 (-__abi_GetIids@-QObject@Platform@@XamlSnapAssistViewController@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlSnapAssistViewController@@WII@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18017A140 (-__abi_GetIids@-QObject@Platform@@XamlSnapAssistViewController@@WII@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x1801E5654 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

__int64 __fastcall ___abi_GetIids__QObject_Platform__XamlSnapAssistViewController__UE_AAAJPEAKPEAPEAVGuid_2__Z(
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

  v5 = 7145656;
  v6 = -1248502767;
  v7 = 56LL;
  v8 = 192;
  v9 = 1174405120;
  return __winRT::__getIids((__winRT *)2, a2, (unsigned int *)&v4, a3, (struct Platform::Guid **)0x36D67473F7304F24LL);
}
