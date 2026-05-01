/*
 * XREFs of ?CMultitaskingViewFrame_CreateInstance@@YAJW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@PEAUISwitchThumbnailDeviceManager@@PEAUIElementFactory@@PEAUISwitchItemController@@PEAUIVirtualDesktopElementFactory@@PEAUIFrameLevelAnimationCoordinator@@AEBU_GUID@@PEAPEAX@Z @ 0x1802813E0
 * Callers:
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x180275624 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 *     ?Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180277660 (-Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@@Z @ 0x1802786E8 (-RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMana.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCMultitaskingViewFrame@@V1@AEAW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@AEAPEAUISwitchThumbnailDeviceManager@@AEAPEAUIElementFactory@@AEAPEAUISwitchItemController@@AEAPEAUIVirtualDesktopElementFactory@@AEAPEAUIFrameLevelAnimationCoordinator@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewFrame@@AEAW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@AEAPEAUISwitchThumbnailDeviceManager@@AEAPEAUIElementFactory@@AEAPEAUISwitchItemController@@AEAPEAUIVirtualDesktopElementFactory@@AEAPEAUIFrameLevelAnimationCoordinator@@@Z @ 0x180280A58 (--$MakeAndInitialize@VCMultitaskingViewFrame@@V1@AEAW4MultitaskingViewControlFlags@@AEBUMultitas.c)
 */

__int64 CMultitaskingViewFrame_CreateInstance(unsigned int a1, __int64 a2, ...)
{
  CMultitaskingViewFrame *v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v9; // [rsp+60h] [rbp+20h] BYREF
  __int64 v10; // [rsp+70h] [rbp+30h] BYREF
  va_list va; // [rsp+70h] [rbp+30h]
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF
  va_list va1; // [rsp+78h] [rbp+38h]
  __int64 v14; // [rsp+80h] [rbp+40h] BYREF
  va_list va2; // [rsp+80h] [rbp+40h]
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF
  va_list va3; // [rsp+88h] [rbp+48h]
  __int64 v18; // [rsp+90h] [rbp+50h] BYREF
  va_list va4; // [rsp+90h] [rbp+50h]
  __int64 v20; // [rsp+98h] [rbp+58h]
  CMultitaskingViewFrame *v21; // [rsp+A0h] [rbp+60h] BYREF
  va_list va5; // [rsp+A0h] [rbp+60h]
  va_list va6; // [rsp+A8h] [rbp+68h] BYREF

  va_start(va6, a2);
  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v14 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v16 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v18 = va_arg(va5, _QWORD);
  v20 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v21 = va_arg(va6, CMultitaskingViewFrame *);
  v9 = a1;
  v2 = v21;
  v21 = 0LL;
  *(_QWORD *)v2 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va5);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewFrame,CMultitaskingViewFrame,enum MultitaskingViewControlFlags &,MultitaskingViewConfig const &,ISwitchThumbnailDeviceManager * &,IElementFactory * &,ISwitchItemController * &,IVirtualDesktopElementFactory * &,IFrameLevelAnimationCoordinator * &>(
         (CMultitaskingViewFrame **)va5,
         &v9,
         a2,
         (__int64 *)va,
         (__int64 *)va1,
         (__int64 *)va2,
         (__int64 *)va3,
         (__int64 *)va4);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1150LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_6;
  }
  v4 = (**(__int64 (__fastcall ***)(CMultitaskingViewFrame *, GUID *, CMultitaskingViewFrame *))v21)(
         v21,
         &GUID_1f7d53e9_6d19_4129_ba5f_8ffba25d6063,
         v2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1151LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va5);
  return v5;
}
