/*
 * XREFs of ?RuntimeClassInitialize@CSnapAssistViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x180284CFC
 * Callers:
 *     ??$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x180284658 (--$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x18027E86C (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 */

__int64 __fastcall CSnapAssistViewController::RuntimeClassInitialize(
        CSnapAssistViewController *this,
        struct IWeakReference *a2,
        struct IMultitaskingViewManager *a3,
        struct IImmersiveAppCrusher *a4,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a5,
        struct ITabViewManager *a6)
{
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=(
    (__int64 *)this + 5,
    (__int64)a2);
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=(
    (__int64 *)this + 7,
    (__int64)a4);
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=(
    (__int64 *)this + 10,
    (__int64)a5);
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=(
    (__int64 *)this + 11,
    (__int64)a6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  v9 = (**(__int64 (__fastcall ***)(struct IMultitaskingViewManager *, GUID *, char *))a3)(
         a3,
         &GUID_4026878b_100e_4920_8bc7_baeed683a086,
         (char *)this + 144);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
      (const char *)(unsigned int)v9);
  return v10;
}
