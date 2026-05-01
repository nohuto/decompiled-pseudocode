/*
 * XREFs of ??0RowHeight@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@N@Z @ 0x180205EBC
 * Callers:
 *     _lambda_d4c350abf5d24183546902bae9e0768c_::operator() @ 0x180207E80 (_lambda_d4c350abf5d24183546902bae9e0768c_--operator().c)
 * Callees:
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18009BC5C (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetXamlType@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAPE$AAUIXamlType@2345@PE$AAVString@Platform@@@Z @ 0x1801FDB0C (-GetXamlType@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAPE$AAUIXamlType@2345@PE$AAVStri.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::RowHeight::RowHeight(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v5; // rdx
  __int64 XamlType; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  _DWORD v10[6]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+20h]

  v10[0] = -1268021378;
  v10[1] = 1042234396;
  v10[2] = 1197437572;
  v10[3] = -896165633;
  v11 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.RowHeight",
                                (struct Platform::Guid *)v10,
                                (void **)&v11,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  XamlType = Windows::UI::Xaml::Markup::IXamlMetadataProvider::GetXamlType(v11, v5);
  v12 = XamlType;
  v7 = __abi_winrt_ptr_ctor(XamlType);
  v12 = v7;
  __abi_winrt_ptr_dtor(XamlType);
  v8 = __abi_winrt_ptr_ctor(v7);
  __abi_winrt_ptr_dtor(v7);
  __abi_winrt_ptr_dtor(v11);
  return v8;
}
