/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1801359B0
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180135580 (-__abi_GetIids@-QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experiences@Composab.c)
 *     ?__abi_GetIids@?QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180135730 (-__abi_GetIids@-QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experie_ea_180135730.c)
 *     ?__abi_GetIids@?QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180135A40 (-__abi_GetIids@-QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experie_ea_180135A40.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18019715C (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

__int64 __fastcall ___abi_GetIids__QObject_Platform__EvaluateItemEventArgs_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__UE_AAAJPEAKPEAPEAVGuid_2__Z(
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

  v5 = -1283767885;
  v6 = 1345371020;
  v7 = -1866520753;
  v8 = 1083436433;
  v9 = 1684172416;
  v10 = -1925085632;
  v11 = 56LL;
  v12 = 192;
  v13 = 1174405120;
  return __winRT::__getIids((__winRT *)3, a2, (unsigned int *)&v4, a3, (struct Platform::Guid **)0x3F871DDAFCD574FFLL);
}
