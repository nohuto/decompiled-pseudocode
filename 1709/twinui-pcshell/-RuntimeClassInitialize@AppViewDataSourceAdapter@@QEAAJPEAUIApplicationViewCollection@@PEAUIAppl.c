/*
 * XREFs of ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x1801912A8
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x180193760 (--$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAPEAUIApplicationViewCollection@@AEAPEA.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x180191874 (-InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?Register@?$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellHookRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIImmersiveShellHookService@@@Z @ 0x180192D2C (-Register@-$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellH.c)
 *     ?Register@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIApplicationViewCollection@@@Z @ 0x180192DFC (-Register@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplica.c)
 *     ?AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180194A8C (-AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewDataSourceAdapter::RuntimeClassInitialize(
        AppViewDataSourceAdapter *this,
        struct IApplicationViewCollection *a2,
        struct IApplicationViewIconLoader *a3,
        struct IImmersiveShellHookService *a4,
        struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *a5)
{
  HRESULT v9; // eax
  __int64 **v10; // rbx
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  int v16; // eax
  const struct _GUID *v17; // rcx
  int v18; // eax
  int Instance; // eax
  __int64 *v20; // rcx
  __int64 v21; // rax
  void *v22; // rbx
  int v23; // eax
  const char *v24; // r9
  __int64 result; // rax
  void *v26[2]; // [rsp+20h] [rbp-68h] BYREF
  HSTRING_HEADER v27; // [rsp+30h] [rbp-58h] BYREF
  HSTRING v28; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v26[1] = (void *)-2LL;
  try
  {
    v28 = 0LL;
    v9 = WindowsCreateStringReference(
           L"Windows.Internal.ComposableShell.Multitasking.SwitchItemDataSource",
           0x42u,
           &v27,
           &v28);
    if ( v9 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    v10 = (__int64 **)((char *)this + 96);
    v11 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    *v10 = 0LL;
    v12 = RoActivateInstance(v28, v26);
    if ( v12 >= 0 )
    {
      if ( *(_QWORD *)&GUID_a28b14ed_d8bd_4873_864d_0c360cfe2c6b.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
        && *(_QWORD *)GUID_a28b14ed_d8bd_4873_864d_0c360cfe2c6b.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
      {
        *v10 = (__int64 *)v26[0];
      }
      else
      {
        v12 = (**(__int64 (__fastcall ***)(void *, GUID *, char *))v26[0])(
                v26[0],
                &GUID_a28b14ed_d8bd_4873_864d_0c360cfe2c6b,
                (char *)this + 96);
        (*(void (__fastcall **)(void *))(*(_QWORD *)v26[0] + 16LL))(v26[0]);
      }
    }
    if ( v12 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x68,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v12);
    v13 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct IApplicationViewIconLoader *))(*(_QWORD *)a3 + 8LL))(a3);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = *((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = a5;
    if ( a5 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *))(*(_QWORD *)a5 + 8LL))(a5);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v16 = AppViewEventHelpers::EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>::Register(
            (char *)this + 128,
            *((_QWORD *)this + 13));
    v17 = (const struct _GUID *)retaddr;
    if ( v16 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x6F,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v16);
    if ( a4 )
    {
      v18 = AppViewEventHelpers::EventListener<IImmersiveShellHookService,IImmersiveShellHookNotification,AppViewEventHelpers::details::ShellHookRegistration>::Register(
              (char *)this + 144,
              a4);
      v17 = (const struct _GUID *)retaddr;
      if ( v18 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x75,
          (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
          (const char *)(unsigned int)v18);
    }
    v26[0] = 0LL;
    Instance = AppViewSwitchItemZOrderSort_CreateInstance(v17, v26);
    if ( Instance < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x7A,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)Instance);
    v20 = *v10;
    v21 = **v10;
    v22 = v26[0];
    v23 = (*(__int64 (__fastcall **)(__int64 *, void *))(v21 + 72))(v20, v26[0]);
    if ( v23 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x7B,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v23);
    AppViewDataSourceAdapter::InitializeItems(this);
    if ( v22 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16LL))(v22);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x82,
                           (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                           v24);
  }
  return result;
}
