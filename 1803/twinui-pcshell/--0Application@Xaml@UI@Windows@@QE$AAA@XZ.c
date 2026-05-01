/*
 * XREFs of ??0Application@Xaml@UI@Windows@@QE$AAA@XZ @ 0x1801FC970
 * Callers:
 *     ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1801FCA74 (--0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvid.c)
 * Callees:
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18009BC5C (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?CreateInstance@IApplicationFactory@Xaml@UI@Windows@@UE$AAAPE$AAVApplication@234@PE$AAVObject@Platform@@PEAPE$AAV67@@Z @ 0x1801FD598 (-CreateInstance@IApplicationFactory@Xaml@UI@Windows@@UE$AAAPE$AAVApplication@234@PE$AAVObject@Pl.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::UI::Xaml::Application::Application(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 Instance; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  _DWORD v10[6]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h]

  v10[0] = -1816403103;
  v10[1] = 1323548250;
  v10[2] = 295019444;
  v10[3] = -1988441715;
  v11 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"Windows.UI.Xaml.Application",
                                (struct Platform::Guid *)v10,
                                (void **)&v11,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  Instance = Windows::UI::Xaml::IApplicationFactory::CreateInstance(v11, a1, (a1 + 48) & -(__int64)(a1 != 0));
  v12 = Instance;
  v7 = __abi_winrt_ptr_ctor(Instance);
  v12 = v7;
  __abi_winrt_ptr_dtor(Instance);
  if ( a1 )
  {
    __abi_winrt_ptr_dtor(v7);
    __abi_winrt_ptr_dtor(v11);
    return 0LL;
  }
  else
  {
    v8 = __abi_winrt_ptr_ctor(v7);
    __abi_winrt_ptr_dtor(v7);
    __abi_winrt_ptr_dtor(v11);
    return v8;
  }
}
