/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1801FE870
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A9600 (-__abi_GetIids@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A9610 (-__abi_GetIids@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_1800A9610.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A9620 (-__abi_GetIids@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_1800A9620.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A9630 (-__abi_GetIids@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_1800A9630.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WFA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A9640 (-__abi_GetIids@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_1800A9640.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18009BC4C (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall ___abi_GetIids__QObject_Platform__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJPEAKPEAPEAVGuid_2__Z(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
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

  v5 = -1234886246;
  v6 = -796798784;
  v7 = -1284088471;
  v8 = 1261594789;
  v9 = -1174576760;
  v10 = 911744780;
  v11 = 56LL;
  v12 = 192;
  v13 = 1174405120;
  return __winRT::__getIids(
           (__winRT *)3,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x37A64B9690ADD32BLL);
}
