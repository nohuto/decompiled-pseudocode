/*
 * XREFs of ?__abi_GetIids@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x18015B6A0
 * Callers:
 *     ?__abi_GetIids@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x18015FDC0 (-__abi_GetIids@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$.c)
 *     ?__abi_GetIids@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x18015FEF0 (-__abi_GetIids@ViewLoadedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@.c)
 * Callees:
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x1801E5654 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ViewLoadedEventHandler::__abi_GetIids(
        __int64 a1,
        int a2,
        const struct __s_GUID *a3)
{
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  int v6; // [rsp+2Ch] [rbp-14h]

  v5 = 1136285856;
  v6 = -1698761609;
  return __winRT::__getIids((__winRT *)1, a2, (unsigned int *)&v4, a3, (struct Platform::Guid **)0x38D2C0AA24AE7820LL);
}
