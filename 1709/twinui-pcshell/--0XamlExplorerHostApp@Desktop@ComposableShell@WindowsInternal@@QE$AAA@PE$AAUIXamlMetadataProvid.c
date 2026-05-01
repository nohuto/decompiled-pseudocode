/*
 * XREFs of ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x18014C6CC
 * Callers:
 *     ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x180147DC8 (-EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?CreateInstance@IApplicationFactory@Xaml@UI@Windows@@UE$AAAPE$AAVApplication@234@PE$AAVObject@Platform@@PEAPE$AAV67@@Z @ 0x1801525D8 (-CreateInstance@IApplicationFactory@Xaml@UI@Windows@@UE$AAAPE$AAVApplication@234@PE$AAVObject@Pl.c)
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801E5664 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::XamlExplorerHostApp(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r14
  _OWORD *v7; // rax
  void **v8; // r9
  int ActivationFactoryByPCWSTR; // eax
  __int64 Instance; // rax
  __int64 *v11; // rbx
  __int64 v12; // rax
  _DWORD v14[6]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF
  __int64 v16; // [rsp+80h] [rbp+40h]
  __int64 v17; // [rsp+88h] [rbp+48h]

  *(_QWORD *)a1 = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `WindowsInternal::ComposableShell::Desktop::__IXamlExplorerHostAppPublicNonVirtuals'};
  *(_QWORD *)(a1 + 16) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Platform::Object's `Windows::UI::Xaml::Application'};
  v6 = a1 + 8;
  *(_QWORD *)(a1 + 8) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Windows::UI::Xaml::IApplication'};
  *(_QWORD *)(a1 + 24) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Windows::UI::Xaml::IApplicationOverrides'};
  *(_QWORD *)(a1 + 64) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Windows::UI::Xaml::Markup::IXamlMetadataProvider'};
  *(_QWORD *)(a1 + 72) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 80) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 232) = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  *(_QWORD *)(a1 + 88) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 96) = a2;
  _Mtx_init_in_situ((_Mtx_t)(a1 + 104), 2);
  v15 = a1 + 184;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  v7 = operator new(0x10uLL);
  *(_QWORD *)(a1 + 184) = v7;
  if ( v7 )
    *v7 = 0LL;
  **(_QWORD **)(a1 + 184) = a1 + 184;
  v14[0] = -1816403103;
  v14[1] = 1323548250;
  v14[2] = 295019444;
  v14[3] = -1988441715;
  v15 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"Windows.UI.Xaml.Application",
                                v14,
                                (struct Platform::Guid *)&v15,
                                v8);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  Instance = Windows::UI::Xaml::IApplicationFactory::CreateInstance(v15, v6, (v6 + 48) & -(__int64)(v6 != 0));
  v11 = (__int64 *)Instance;
  v17 = Instance;
  v16 = 0LL;
  if ( v6 )
  {
    if ( !Instance )
      goto LABEL_19;
    v12 = *(_QWORD *)Instance;
    goto LABEL_18;
  }
  if ( Instance )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Instance + 8LL))(Instance);
  if ( v11 )
  {
    v12 = *v11;
LABEL_18:
    (*(void (__fastcall **)(__int64 *))(v12 + 16))(v11);
  }
LABEL_19:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return a1;
}
