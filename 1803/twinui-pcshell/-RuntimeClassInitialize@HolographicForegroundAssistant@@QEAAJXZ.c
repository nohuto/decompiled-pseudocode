/*
 * XREFs of ?RuntimeClassInitialize@HolographicForegroundAssistant@@QEAAJXZ @ 0x1800A0048
 * Callers:
 *     ??$MakeAndInitialize@VHolographicForegroundAssistant@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18009F770 (--$MakeAndInitialize@VHolographicForegroundAssistant@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010A094 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall HolographicForegroundAssistant::RuntimeClassInitialize(HolographicForegroundAssistant *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0LL;
  *(GUID *)v4 = CLSID_HolographicForegroundAssistant;
  v6 = 0LL;
  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (HolographicForegroundAssistant *)((char *)this + 48),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v4,
         1u);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicforegroundassistant.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
