/*
 * XREFs of ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@44@Z @ 0x1802378E8
 * Callers:
 *     ??$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspectable@@AEAPEAUIInspectable@@AEAPEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewDataSourceAdapter@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspectable@@55@Z @ 0x1802334EC (--$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIAp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@44@Z @ 0x1802364B4 (-InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIAp.c)
 *     ?InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18023662C (-InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180239A80 (-AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewDataSourceAdapter::RuntimeClassInitialize(
        AppViewDataSourceAdapter *this,
        struct IApplicationViewCollection *a2,
        struct IApplicationViewIconLoader *a3,
        struct IImmersiveShellHookService *a4,
        struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *a5,
        struct IInspectable *a6,
        struct IInspectable *a7,
        struct IInspectable *a8)
{
  const struct _GUID *v9; // rcx
  int v10; // eax
  void *v11; // rbx
  int v12; // eax
  const char *v13; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v16; // [rsp+60h] [rbp+8h] BYREF

  try
  {
    AppViewDataSourceAdapterBase::InitializeDataSource((AppViewDataSourceAdapter *)((char *)this + 8), a2, a3, a4, a5);
    v16 = 0LL;
    v10 = AppViewSwitchItemZOrderSort_CreateInstance(v9, &v16);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        85LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v10);
    v11 = v16;
    v12 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 4) + 72LL))(*((_QWORD *)this + 4), v16);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        86LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v12);
    AppViewDataSourceAdapter::InitializeItems(this);
    if ( v11 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5D,
                           (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                           v13);
  }
  return result;
}
