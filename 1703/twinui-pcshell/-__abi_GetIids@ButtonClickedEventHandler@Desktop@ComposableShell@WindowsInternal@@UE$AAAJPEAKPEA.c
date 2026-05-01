/*
 * XREFs of ?__abi_GetIids@ButtonClickedEventHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x180129210
 * Callers:
 *     ?__abi_GetIids@ButtonClickedEventHandler@Desktop@ComposableShell@WindowsInternal@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x18012AD70 (-__abi_GetIids@ButtonClickedEventHandler@Desktop@ComposableShell@WindowsInternal@@W7E$AAAJPEAKPE.c)
 *     ?__abi_GetIids@ButtonClickedEventHandler@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x18012AD90 (-__abi_GetIids@ButtonClickedEventHandler@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAK.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18019715C (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::__abi_GetIids(
        __int64 a1,
        int a2,
        const struct __s_GUID *a3)
{
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  int v6; // [rsp+2Ch] [rbp-14h]

  v5 = 1243988413;
  v6 = -455585514;
  return __winRT::__getIids((__winRT *)1, a2, (unsigned int *)&v4, a3, (struct Platform::Guid **)0x344FDDF752AEA2F3LL);
}
