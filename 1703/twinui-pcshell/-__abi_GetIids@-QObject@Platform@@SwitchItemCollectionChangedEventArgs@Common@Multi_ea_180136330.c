/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180136330
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180136070 (-__abi_GetIids@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Common@Multitasking@Exper.c)
 *     ?__abi_GetIids@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180136160 (-__abi_GetIids@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Common@Multi_ea_180136160.c)
 *     ?__abi_GetIids@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1801363C0 (-__abi_GetIids@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Common@Multi_ea_1801363C0.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18019715C (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

__int64 __fastcall ___abi_GetIids__QObject_Platform__SwitchItemCollectionChangedEventArgs_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__UE_AAAJPEAKPEAPEAVGuid_2__Z(
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

  v5 = -456377725;
  v6 = -116510702;
  v7 = -776018380;
  v8 = 1203367472;
  v9 = 1139203467;
  v10 = 1701046345;
  v11 = 56LL;
  v12 = 192;
  v13 = 1174405120;
  return __winRT::__getIids((__winRT *)3, a2, (unsigned int *)&v4, a3, (struct Platform::Guid **)0x31CEFBFC50C659A2LL);
}
