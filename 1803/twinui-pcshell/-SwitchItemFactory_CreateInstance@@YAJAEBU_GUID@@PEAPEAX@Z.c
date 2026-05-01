/*
 * XREFs of ?SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802793A4
 * Callers:
 *     ?RuntimeClassInitialize@MultitaskingData@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@@Z @ 0x180274834 (-RuntimeClassInitialize@MultitaskingData@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationV.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x180249C78 (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VSwitchItemFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemFactory@@@Z @ 0x180279254 (--$MakeAndInitialize@VSwitchItemFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemFacto.c)
 */

__int64 __fastcall SwitchItemFactory_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  int v4; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  volatile int *v8; // rcx
  volatile int *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile int *v12; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v12);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<SwitchItemFactory,SwitchItemFactory,>(&v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = (unsigned int)v3;
    v6 = 24LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfactory.cpp",
      (const char *)v5);
    goto LABEL_11;
  }
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_6376f62e_2aef_470d_9975_4bf85317f40a, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v9 = v12;
    *a2 = (void *)v12;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v9 + 8LL))(v9);
    v4 = 0;
  }
  else if ( InlineIsEqualGUID(v7, v7) )
  {
    v8 = v12;
    v4 = 0;
    *a2 = (void *)v12;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    v4 = -2147467262;
  }
  if ( v4 < 0 )
  {
    v5 = (unsigned int)v4;
    v6 = 25LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v12);
  return (unsigned int)v4;
}
