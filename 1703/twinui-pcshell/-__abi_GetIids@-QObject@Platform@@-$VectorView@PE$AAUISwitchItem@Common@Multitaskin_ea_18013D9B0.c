/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18013D9B0
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18013B120 (-__abi_GetIids@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18013B1D0 (-__abi_GetIids@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Common@Multitaskin_ea_18013B1D0.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18013B220 (-__abi_GetIids@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Common@Multitaskin_ea_18013B220.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18013B750 (-__abi_GetIids@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Common@Multitaskin_ea_18013B750.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WCI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18013D4F0 (-__abi_GetIids@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Common@Multitaskin_ea_18013D4F0.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WDI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18013DA60 (-__abi_GetIids@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Common@Multitaskin_ea_18013DA60.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18019715C (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

__int64 __fastcall ___abi_GetIids__QObject_Platform____VectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_Collections_2_UE_AAAJPEAKPEAPEAVGuid_2__Z(
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

  v5 = 509564332;
  v6 = -170565212;
  v7 = -1068683784;
  v8 = 1490701538;
  v9 = 1585247155;
  v10 = 1886278168;
  v11 = 879613671;
  v12 = 1271109486;
  v13 = -487826047;
  v14 = 856669251;
  v15 = 56LL;
  v16 = 192;
  v17 = 1174405120;
  return __winRT::__getIids((__winRT *)4, a2, (unsigned int *)&v4, a3, (struct Platform::Guid **)0x334EFF49E09D7B06LL);
}
