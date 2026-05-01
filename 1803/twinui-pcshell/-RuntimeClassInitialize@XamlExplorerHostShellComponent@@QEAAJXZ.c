/*
 * XREFs of ?RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ @ 0x1801F9234
 * Callers:
 *     ??$MakeAndInitialize@VXamlExplorerHostShellComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801F70FC (--$MakeAndInitialize@VXamlExplorerHostShellComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010A094 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlTaskbar@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801F9194 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlTaskbar@@@wil@@CAX_NW4ReportingK.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1801F9514 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ??0XamlExplorerHost@@QE$AAA@XZ @ 0x1801FA370 (--0XamlExplorerHost@@QE$AAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlExplorerHostShellComponent::RuntimeClassInitialize(XamlExplorerHostShellComponent *this)
{
  void *v2; // rax
  const char *v3; // r9
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  int v10[2]; // [rsp+20h] [rbp-48h]
  GUID v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    v2 = Platform::Details::Heap::Allocate(0x70uLL, 0x88uLL);
    *(_QWORD *)v10 = XamlExplorerHost::XamlExplorerHost(v2);
    __abi_winrt_ptr_assign((char *)this + 224, *(_QWORD *)v10);
    __abi_winrt_ptr_dtor(*(_QWORD *)v10);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4D,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
                           v3);
  }
  v11 = GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c;
  v12 = 0LL;
  v13 = 0LL;
  v4 = CImmersiveShellComponent::RegisterServiceInformation(
         (XamlExplorerHostShellComponent *)((char *)this + 48),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&v11,
         1LL);
  v8 = v4;
  if ( v4 >= 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_XamlTaskbar>::ReportUsageToService(v6, v5, v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)(unsigned int)v4);
    return v8;
  }
}
