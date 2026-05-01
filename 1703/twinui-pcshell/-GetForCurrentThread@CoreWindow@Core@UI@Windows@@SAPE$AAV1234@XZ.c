/*
 * XREFs of ?GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ @ 0x1801292C4
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84__void_Windows::UI::Xaml::Window_____ptr64_HWND_______ptr64_::Invoke @ 0x18011EE10 (Platform--Details--__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84__void_Windows--.c)
 *     ?WindowCreated@XamlExplorerHostWindow@@UEAAXXZ @ 0x18012B010 (-WindowCreated@XamlExplorerHostWindow@@UEAAXXZ.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x18011E6EC (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18019716C (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::UI::Core::CoreWindow::GetForCurrentThread(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v5; // rbx
  _DWORD v7[6]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+18h]

  v7[0] = 1294176261;
  v7[1] = 1102134314;
  v7[2] = 1800610448;
  v7[3] = -1315713095;
  v8 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"Windows.UI.Core.CoreWindow",
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
