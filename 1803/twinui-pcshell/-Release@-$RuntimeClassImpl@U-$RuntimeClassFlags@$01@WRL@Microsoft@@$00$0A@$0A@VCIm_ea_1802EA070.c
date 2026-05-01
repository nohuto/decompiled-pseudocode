/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802EA070
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800A74D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1800A74D0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800AFEB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1800AFEB0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WFI@EAAKXZ @ 0x1800AFEC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1800AFEC0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WGA@EAAKXZ @ 0x1800AFED0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1800AFED0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WGI@EAAKXZ @ 0x1800AFEE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1800AFEE0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@WHA@EAAKXZ @ 0x1800AFEF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1800AFEF0.c)
 *     ??$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801BF3C4 (--$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 *     ??1?$ComPtr@VPeoplePaneViewManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801C076C (--1-$ComPtr@VPeoplePaneViewManager@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IWindowManagementJointResizeEvents,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,IImmersiveRawInputKeyboardNotification>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 124), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v3 + 24) + 64LL))(v3 + 24, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
