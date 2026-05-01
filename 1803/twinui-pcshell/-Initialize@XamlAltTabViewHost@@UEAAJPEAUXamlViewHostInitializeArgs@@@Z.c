/*
 * XREFs of ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x180217100
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1801F9514 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ??0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ @ 0x180205BA4 (--0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ.c)
 *     ??0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewManager@@@Z @ 0x180221D2C (--0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImme.c)
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x18023551C (-AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIA_ea_18023551C.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x18027E86C (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall XamlAltTabViewHost::Initialize(XamlAltTabViewHost *this, struct XamlViewHostInitializeArgs *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  void **v8; // r9
  UAPViewWrapper *v9; // r15
  __int64 v10; // rbx
  struct IInspectable *v11; // rbx
  int Instance; // eax
  unsigned int v13; // ebx
  const char *v14; // r9
  __int64 result; // rax
  __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  UAPViewWrapper *v23; // [rsp+80h] [rbp+8h] BYREF
  struct IInspectable *v24; // [rsp+88h] [rbp+10h] BYREF
  void *v25; // [rsp+90h] [rbp+18h]

  try
  {
    Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this - 40);
    Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this - 32);
    Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this + 56);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 5, *((_QWORD *)a2 + 3));
    Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this + 48);
    v4 = 0LL;
    v24 = 0LL;
    v9 = (UAPViewWrapper *)Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice::DesktopThumbnailDevice(
                             v6,
                             v5,
                             v7,
                             v8);
    v24 = (struct IInspectable *)v9;
    v10 = __abi_winrt_cast_to(
            0,
            (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))v9,
            (__int64)&GUID_1a799508_e9ca_48aa_b2f1_d6101190fb84);
    v25 = (void *)v10;
    __abi_winrt_ptr_assign((__int64 *)this + 4, v10);
    __abi_winrt_ptr_dtor(v10);
    __abi_winrt_ptr_dtor((__int64)v9);
    v24 = (struct IInspectable *)*((_QWORD *)this + 4);
    v11 = v24;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
    Instance = AppViewDataSourceAdapter_CreateInstance(
                 *((struct IApplicationViewCollection **)a2 + 2),
                 *((struct IApplicationViewIconLoader **)a2 + 8),
                 0LL,
                 v11,
                 (struct IAppViewDataSourceAdapter **)this + 9);
    v13 = Instance;
    if ( Instance >= 0 )
    {
      v23 = 0LL;
      v16 = *((_QWORD *)this + 9);
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v23);
      v17 = (*(__int64 (__fastcall **)(__int64, GUID *, UAPViewWrapper **))(*(_QWORD *)v16 + 24LL))(
              v16,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              &v23);
      v18 = v17;
      if ( v17 >= 0 )
      {
        v19 = __abi_winrt_cast_to(
                0,
                (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))v23,
                (__int64)&_uuidof__AUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__);
        v25 = (void *)v19;
        __abi_winrt_ptr_assign((__int64 *)this + 2, v19);
        __abi_winrt_ptr_dtor(v19);
        v25 = Platform::Details::Heap::Allocate(0x78uLL, 0xA8uLL);
        v20 = XamlAltTabViewController::XamlAltTabViewController(
                v25,
                (char *)this - 120,
                *((_QWORD *)this + 5),
                *((_QWORD *)this + 6),
                *((_QWORD *)this - 5));
        v21 = v20;
        v25 = (void *)v20;
        if ( v20 )
          v4 = v20 + 16;
        __abi_winrt_ptr_assign((__int64 *)this + 3, v4);
        __abi_winrt_ptr_dtor(v21);
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v23);
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v24);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x52,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
          (const char *)(unsigned int)v17);
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v23);
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v24);
        result = v18;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
        (const char *)(unsigned int)Instance);
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v24);
      result = v13;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x59,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
                           v14);
  }
  return result;
}
