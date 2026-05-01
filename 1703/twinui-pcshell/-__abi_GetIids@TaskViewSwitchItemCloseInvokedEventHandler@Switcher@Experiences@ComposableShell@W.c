/*
 * XREFs of ?__abi_GetIids@TaskViewSwitchItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x18012EAE0
 * Callers:
 *     ?__abi_GetIids@TaskViewSwitchItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x180131B20 (-__abi_GetIids@TaskViewSwitchItemCloseInvokedEventHandler@Switcher@Experiences@Comp_ea_180131B20.c)
 *     ?__abi_GetIids@TaskViewSwitchItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x180131B90 (-__abi_GetIids@TaskViewSwitchItemCloseInvokedEventHandler@Switcher@Experiences@Comp_ea_180131B90.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18019715C (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewSwitchItemCloseInvokedEventHandler::__abi_GetIids(
        __int64 a1,
        int a2,
        const struct __s_GUID *a3)
{
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  int v6; // [rsp+2Ch] [rbp-14h]

  v5 = -858815354;
  v6 = -189688270;
  return __winRT::__getIids((__winRT *)1, a2, (unsigned int *)&v4, a3, (struct Platform::Guid **)0x362B3E604A7D4F4DLL);
}
