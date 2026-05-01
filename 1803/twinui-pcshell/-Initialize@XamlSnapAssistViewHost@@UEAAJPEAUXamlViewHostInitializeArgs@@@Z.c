/*
 * XREFs of ?Initialize@XamlSnapAssistViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1802187B0
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
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x18023551C (-AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIA_ea_18023551C.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x18027E86C (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall XamlSnapAssistViewHost::Initialize(
        XamlSnapAssistViewHost *this,
        struct XamlViewHostInitializeArgs *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  void **v7; // r9
  UAPViewWrapper *v8; // r14
  __int64 v9; // rbx
  struct IInspectable *v10; // rbx
  int Instance; // eax
  unsigned int v12; // ebx
  const char *v13; // r9
  __int64 result; // rax
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  UAPViewWrapper *v20; // [rsp+70h] [rbp+8h] BYREF
  struct IInspectable *v21; // [rsp+78h] [rbp+10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+18h]

  try
  {
    Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this - 40);
    Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this - 32);
    Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this + 40);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 6, *((_QWORD *)a2 + 7));
    Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this + 56);
    v21 = 0LL;
    v8 = (UAPViewWrapper *)Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice::DesktopThumbnailDevice(
                             v5,
                             v4,
                             v6,
                             v7);
    v21 = (struct IInspectable *)v8;
    v9 = __abi_winrt_cast_to(
           0,
           (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))v8,
           (__int64)&GUID_1a799508_e9ca_48aa_b2f1_d6101190fb84);
    v22 = v9;
    __abi_winrt_ptr_assign((__int64 *)this + 4, v9);
    __abi_winrt_ptr_dtor(v9);
    __abi_winrt_ptr_dtor((__int64)v8);
    v21 = (struct IInspectable *)*((_QWORD *)this + 4);
    v10 = v21;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
    Instance = AppViewDataSourceAdapter_CreateInstance(
                 *((struct IApplicationViewCollection **)a2 + 2),
                 *((struct IApplicationViewIconLoader **)a2 + 8),
                 0LL,
                 v10,
                 (struct IAppViewDataSourceAdapter **)this + 10);
    v12 = Instance;
    if ( Instance >= 0 )
    {
      v20 = 0LL;
      v15 = *((_QWORD *)this + 10);
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v20);
      v16 = (*(__int64 (__fastcall **)(__int64, GUID *, UAPViewWrapper **))(*(_QWORD *)v15 + 24LL))(
              v15,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              &v20);
      v17 = v16;
      if ( v16 >= 0 )
      {
        v18 = __abi_winrt_cast_to(
                0,
                (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))v20,
                (__int64)&_uuidof__AUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__);
        v22 = v18;
        __abi_winrt_ptr_assign((__int64 *)this + 2, v18);
        __abi_winrt_ptr_dtor(v18);
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v20);
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v21);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x50,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v20);
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v21);
        result = v17;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
        (const char *)(unsigned int)Instance);
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v21);
      result = v12;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x55,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                           v13);
  }
  return result;
}
