/*
 * XREFs of ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008A9C0
 * Callers:
 *     ?make_bstr@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x18008AA48 (-make_bstr@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFre.c)
 *     ??$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@wil@@YA?AV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@AEAPEAUIImmersiveMonitor@@AEAPE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPE$AAUIXamlMultitaskingViewController@@$$QEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x180130FBC (--$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAUISwitchItemDataView@Common@Mult.c)
 *     ??$MakeOrThrow@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPEAUISwitchItem@23456@AEAW4SwitchItemCollectionChangedEventType@23456@@wil@@YA?AV?$ComPtr@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@AEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAW4SwitchItemCollectionChangedEventType@56789@@Z @ 0x180160CEC (--$MakeOrThrow@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableS.c)
 *     ??$MakeOrThrow@VThumbnailSourceEventArgs@@PEAUHSTRING__@@@wil@@YA?AV?$ComPtr@VThumbnailSourceEventArgs@@@WRL@Microsoft@@$$QEAPEAUHSTRING__@@@Z @ 0x1801683F4 (--$MakeOrThrow@VThumbnailSourceEventArgs@@PEAUHSTRING__@@@wil@@YA-AV-$ComPtr@VThumbnailSourceEve.c)
 *     ??$MakeOrThrow@VThumbnailInteropFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@wil@@YA?AV?$ComPtr@VThumbnailInteropFactory@@@WRL@Microsoft@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Z @ 0x180168444 (--$MakeOrThrow@VThumbnailInteropFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@wil@@Y.c)
 *     ?Register@ThumbnailEventListener@@QEAAXPEAUIThumbnailDeviceInternal@@@Z @ 0x180168C58 (-Register@ThumbnailEventListener@@QEAAXPEAUIThumbnailDeviceInternal@@@Z.c)
 *     ??$MakeOrThrow@VDesktopBackgroundFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@wil@@YA?AV?$ComPtr@VDesktopBackgroundFactory@@@WRL@Microsoft@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@Z @ 0x180169410 (--$MakeOrThrow@VDesktopBackgroundFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@wil@@YA.c)
 *     ??$MakeOrThrow@VThumbnailInteropVisual@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryInternal@@AEAPEAUHWND__@@AEAPEAURect@Foundation@Windows@@AEAPEAUICompositor@Composition@UI@7@AEAUSize@67@AEAUThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@wil@@YA?AV?$ComPtr@VThumbnailInteropVisual@@@WRL@Microsoft@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryInternal@@AEAPEAUHWND__@@AEAPEAURect@Foundation@Windows@@AEAPEAUICompositor@Composition@UI@9@AEAUSize@89@AEAUThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18016A1E8 (--$MakeOrThrow@VThumbnailInteropVisual@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactor.c)
 *     ??$MakeOrThrow@VSolidColorVisual@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@34@AEAUSize@Foundation@4@@wil@@YA?AV?$ComPtr@VSolidColorVisual@@@WRL@Microsoft@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@56@AEAUSize@Foundation@6@@Z @ 0x18016AA9C (--$MakeOrThrow@VSolidColorVisual@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@34@AEAUSi.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180003DD0 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::in1diag3::_Throw_NullAlloc(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  unsigned int v5; // edi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v5 = (unsigned int)a2;
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(0LL, 2147942414LL);
  wil::details::ReportFailure_Hr((__int64)this, v5, a3, 0LL, 0LL, retaddr, 0, 0x8007000E);
}
