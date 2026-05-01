/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIShellPositionerManagerInternal@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180028B90
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIShellPositionerManagerInternal@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800AEF60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1800AEF60.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIShellPositionerManagerInternal@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800AEF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1800AEF70.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIShellPositionerManagerInternal@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@@Details@WRL@Microsoft@@WFI@EAAKXZ @ 0x1800AEF80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1800AEF80.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIShellPositionerManagerInternal@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@@Details@WRL@Microsoft@@WGA@EAAKXZ @ 0x1800AEF90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1800AEF90.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIShellPositionerManagerInternal@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@@Details@WRL@Microsoft@@WGI@EAAKXZ @ 0x1800AEFA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1800AEFA0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIShellPositionerManagerInternal@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@@Details@WRL@Microsoft@@WHA@EAAKXZ @ 0x1800AEFB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1800AEFB0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIShellPositionerManagerInternal@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@@Details@WRL@Microsoft@@WHI@EAAKXZ @ 0x1800AEFC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1800AEFC0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIShellPositionerManagerInternal@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@@Details@WRL@Microsoft@@WIA@EAAKXZ @ 0x1800AEFD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1800AEFD0.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IShellPositionerManager,IShellPositionerManagerInternal,IApplicationViewChangeListener,ITabletModeChangeListener,IShellPositionerActivationHandler,IShellPositionerFrameworkViewTypeChangedHandler>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 140), a2);
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
