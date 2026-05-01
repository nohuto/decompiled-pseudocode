/*
 * XREFs of ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x180148BDC
 * Callers:
 *     ?s_GetCurrentCoreWindowHwnd@XamlExplorerHost@@CAPEAUHWND__@@XZ @ 0x1801486C8 (-s_GetCurrentCoreWindowHwnd@XamlExplorerHost@@CAPEAUHWND__@@XZ.c)
 *     ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@ME$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x18014D2B0 (-OnLaunched@-QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_ec2760f202b80fe0ecce5a590d38ad00__void_::Invoke @ 0x1801547A0 (Platform--Details--__abi_FunctorCapture__lambda_ec2760f202b80fe0ecce5a590d38ad00__void_--Invoke.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_c684876424e85aad1b0ea528e88729ce__void_::Invoke @ 0x1801556A0 (Platform--Details--__abi_FunctorCapture__lambda_c684876424e85aad1b0ea528e88729ce__void_--Invoke.c)
 *     _lambda_439a64ed92fed00dbcb4e6e66f12d415_::operator() @ 0x18015A2FC (_lambda_439a64ed92fed00dbcb4e6e66f12d415_--operator().c)
 *     _lambda_7e172f12ff20f7d48d0a79092595c49c_::operator() @ 0x18016D884 (_lambda_7e172f12ff20f7d48d0a79092595c49c_--operator().c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator() @ 0x18016F8CC (_lambda_237a64fcb5f24c6cb49474a7b0122401_--operator().c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x180148D3C (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801E5664 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::UI::Xaml::Window::Current::get(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v5; // rbx
  _DWORD v7[6]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+18h]

  v7[0] = -1825405943;
  v7[1] = 1257918113;
  v7[2] = 1309465731;
  v7[3] = -1316231053;
  v8 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"Windows.UI.Xaml.Window",
                                v7,
                                (struct Platform::Guid *)&v8,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v5 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(v8);
  v9 = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v5;
}
