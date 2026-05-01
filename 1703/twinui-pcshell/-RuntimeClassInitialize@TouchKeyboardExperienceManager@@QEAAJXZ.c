/*
 * XREFs of ?RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18016B20C
 * Callers:
 *     ?CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18016CFD0 (-CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180023C8C (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?RuntimeClassInitialize@TabTipAdapter@@QEAAJPEAUITabTipAdapterOwner@@@Z @ 0x18016DF3C (-RuntimeClassInitialize@TabTipAdapter@@QEAAJPEAUITabTipAdapterOwner@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::RuntimeClassInitialize(LONG_PTR dwNewLong)
{
  HWND Window; // rax
  __int64 v3; // rcx
  TabTipAdapter *v4; // rax
  TabTipAdapter *v5; // rbx
  int v6; // edi
  int v8; // eax
  unsigned int v9; // ebx
  WNDCLASSEXW v10; // [rsp+98h] [rbp-70h] BYREF
  __int128 v11; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v12; // [rsp+F8h] [rbp-10h]
  __int64 v13; // [rsp+100h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  memset(&v10.style, 0, 0x4CuLL);
  v10.cbSize = 80;
  v10.lpfnWndProc = (WNDPROC)_KBEMWndProc;
  v10.lpszClassName = L"KBEMWndClass";
  RegisterClassExW(&v10);
  Window = CreateWindowExW(0, L"KBEMWndClass", L"KBEMWnd", 0, 0, 0, 0, 0, HWND_MESSAGE, 0LL, 0LL, 0LL);
  *(_QWORD *)(dwNewLong + 336) = Window;
  SetWindowLongPtrW(Window, -21, dwNewLong);
  v3 = *(_QWORD *)(dwNewLong + 368);
  if ( v3 )
  {
    *(_QWORD *)(dwNewLong + 368) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *(_QWORD *)(dwNewLong + 368) = 0LL;
  v4 = (TabTipAdapter *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_16:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x109,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  *((_DWORD *)v4 + 5) = 1;
  *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IRemoteTabTipAdapter,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v5 = &TabTipAdapter::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *((_QWORD *)v5 + 1) = &TabTipAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IRemoteTabTipAdapter,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)v5 + 3) = 0LL;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_QWORD *)v5 + 5) = 0LL;
  *((_QWORD *)v5 + 7) = 0LL;
  *((_QWORD *)v5 + 8) = 0LL;
  *((_QWORD *)v5 + 9) = 0LL;
  v6 = TabTipAdapter::RuntimeClassInitialize(v5, (struct ITabTipAdapterOwner *)(dwNewLong + 112));
  if ( v6 >= 0 )
  {
    if ( v5 )
      (*(void (__fastcall **)(TabTipAdapter *))(*(_QWORD *)v5 + 8LL))(v5);
    *(_QWORD *)(dwNewLong + 368) = v5;
    if ( v5 )
      (*(void (__fastcall **)(TabTipAdapter *))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = 0;
  }
  else if ( v5 )
  {
    (*(void (__fastcall **)(TabTipAdapter *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v6 < 0 )
    goto LABEL_16;
  v11 = *(_OWORD *)&SID_TouchKeyboardExperienceManager.Revision;
  v12 = 0LL;
  v13 = 0LL;
  v8 = CImmersiveShellComponent::RegisterServiceInformation(
         (CImmersiveShellComponent *)(dwNewLong + 40),
         (__int64)&v11,
         1uLL);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x10B,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
