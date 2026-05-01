/*
 * XREFs of ?GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ @ 0x180200B38
 * Callers:
 *     ?WindowCreated@XamlExplorerHostWindow@@UEAAXXZ @ 0x180201C40 (-WindowCreated@XamlExplorerHostWindow@@UEAAXXZ.c)
 *     ?OnContainerNavigate@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXI@Z @ 0x18021E9A4 (-OnContainerNavigate@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXI@Z.c)
 * Callees:
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18009BC5C (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x180208BD0 (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::UI::Core::CoreWindow::GetForCurrentThread(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbx
  _DWORD v9[6]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+18h]

  v9[0] = 1294176261;
  v9[1] = 1102134314;
  v9[2] = 1800610448;
  v9[3] = -1315713095;
  v10 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"Windows.UI.Core.CoreWindow",
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
