/*
 * XREFs of ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x1801FBB24
 * Callers:
 *     ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@ME$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x1801FDF68 (-OnLaunched@-QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@Co_ea_1801FDF68.c)
 *     _lambda_bf3c92b221d60276737ef151eb6f13fc_::operator() @ 0x1802013A4 (_lambda_bf3c92b221d60276737ef151eb6f13fc_--operator().c)
 *     ?ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x18020176C (-ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_1301d951c5e9082c4f199997fa5a5a32__void_::Invoke @ 0x180201890 (Platform--Details--__abi_FunctorCapture__lambda_1301d951c5e9082c4f199997fa5a5a32__void_--Invoke.c)
 *     _lambda_d4c350abf5d24183546902bae9e0768c_::operator() @ 0x180207E80 (_lambda_d4c350abf5d24183546902bae9e0768c_--operator().c)
 *     _lambda_7e172f12ff20f7d48d0a79092595c49c_::operator() @ 0x180216984 (_lambda_7e172f12ff20f7d48d0a79092595c49c_--operator().c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator() @ 0x1802180B8 (_lambda_237a64fcb5f24c6cb49474a7b0122401_--operator().c)
 * Callees:
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18009BC5C (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x180208BD0 (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::UI::Xaml::Window::Current::get(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbx
  _DWORD v9[6]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+18h]

  v9[0] = -1825405943;
  v9[1] = 1257918113;
  v9[2] = 1309465731;
  v9[3] = -1316231053;
  v10 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"Windows.UI.Xaml.Window",
                                (struct Platform::Guid *)v9,
                                (void **)&v10,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v5 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(v10);
  v11 = v5;
  v6 = __abi_winrt_ptr_ctor(v5);
  v11 = v6;
  __abi_winrt_ptr_dtor(v5);
  v7 = __abi_winrt_ptr_ctor(v6);
  __abi_winrt_ptr_dtor(v6);
  __abi_winrt_ptr_dtor(v10);
  return v7;
}
