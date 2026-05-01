/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18013E280
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180133280 (-__abi_GetIids@-QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@Composa.c)
 *     ?__abi_GetIids@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180136A90 (-__abi_GetIids@-QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experi_ea_180136A90.c)
 *     ?__abi_GetIids@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18013DE20 (-__abi_GetIids@-QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experi_ea_18013DE20.c)
 *     ?__abi_GetIids@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WCI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18013E330 (-__abi_GetIids@-QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experi_ea_18013E330.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18019715C (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

__int64 __fastcall ___abi_GetIids__QObject_Platform__SwitchItemDataViewImpl_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__UE_AAAJPEAKPEAPEAVGuid_2__Z(
        __int64 a1,
        int a2,
        const struct __s_GUID *a3)
{
  __int64 v4; // [rsp+20h] [rbp-50h] BYREF
  int v5; // [rsp+28h] [rbp-48h]
  int v6; // [rsp+2Ch] [rbp-44h]
  int v7; // [rsp+30h] [rbp-40h]
  int v8; // [rsp+34h] [rbp-3Ch]
  int v9; // [rsp+38h] [rbp-38h]
  int v10; // [rsp+3Ch] [rbp-34h]
  int v11; // [rsp+40h] [rbp-30h]
  int v12; // [rsp+44h] [rbp-2Ch]
  int v13; // [rsp+48h] [rbp-28h]
  int v14; // [rsp+4Ch] [rbp-24h]
  __int64 v15; // [rsp+50h] [rbp-20h]
  int v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+5Ch] [rbp-14h]

  v5 = -483961695;
  v6 = 1299899154;
  v7 = -506254316;
  v8 = 1254873425;
  v9 = 1997470904;
  v10 = -935157999;
  v11 = 1556520125;
  v12 = 1182043084;
  v13 = 1720978344;
  v14 = -797824871;
  v15 = 56LL;
  v16 = 192;
  v17 = 1174405120;
  return __winRT::__getIids((__winRT *)4, a2, (unsigned int *)&v4, a3, (struct Platform::Guid **)0x35910A54F0B11824LL);
}
