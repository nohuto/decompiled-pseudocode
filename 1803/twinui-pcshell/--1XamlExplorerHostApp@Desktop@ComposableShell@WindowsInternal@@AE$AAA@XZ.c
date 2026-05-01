/*
 * XREFs of ??1XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@AE$AAA@XZ @ 0x1801FCE18
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x1801FF310 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?_Dispose_@IDisposable@Platform@@UE$AAAXXZ @ 0x1801FC010 (-_Dispose_@IDisposable@Platform@@UE$AAAXXZ.c)
 *     ?pop_back@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAAXXZ @ 0x180200754 (-pop_back@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::~XamlExplorerHostApp(__int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rdi
  char *v4; // rcx
  char *v5; // rcx
  __int64 result; // rax
  __int64 v7; // rbx

  for ( i = a1 + 184;
        *(_QWORD *)(i + 32);
        std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::pop_back(i) )
  {
    ;
  }
  v3 = *(_QWORD *)(i + 16);
  while ( v3 )
  {
    --v3;
    v4 = *(char **)(*(_QWORD *)(i + 8) + 8 * v3);
    if ( v4 )
      std::_Deallocate(v4, 2uLL, 8uLL);
  }
  v5 = *(char **)(i + 8);
  if ( v5 )
    std::_Deallocate(v5, *(_QWORD *)(i + 16), 8uLL);
  *(_QWORD *)(i + 16) = 0LL;
  *(_QWORD *)(i + 8) = 0LL;
  std::_Deallocate(*(char **)i, 1uLL, 0x10uLL);
  *(_QWORD *)i = 0LL;
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 104));
  __abi_winrt_ptr_dtor(*(_QWORD *)(a1 + 96));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 88));
  result = __abi_winrt_cast_to(
             1,
             *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(a1 + 56),
             (__int64)&_uuidof__AUIDisposable_Platform__);
  v7 = result;
  if ( result )
  {
    Platform::IDisposable::_Dispose_(result);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return result;
}
