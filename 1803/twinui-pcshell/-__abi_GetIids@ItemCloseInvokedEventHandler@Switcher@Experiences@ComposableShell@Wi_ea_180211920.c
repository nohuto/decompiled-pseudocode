/*
 * XREFs of ?__abi_GetIids@ItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x180211920
 * Callers:
 *     ?__abi_GetIids@ItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1800AA4B0 (-__abi_GetIids@ItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal.c)
 *     ?__abi_GetIids@ItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1800AA4C0 (-__abi_GetIids@ItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@Wi_ea_1800AA4C0.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18009BC4C (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler::__abi_GetIids(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  int v6; // [rsp+2Ch] [rbp-14h]

  v5 = 995753387;
  v6 = -797061028;
  return __winRT::__getIids(
           (__winRT *)1,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x3C00E2A22F644D05LL);
}
