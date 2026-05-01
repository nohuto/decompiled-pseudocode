/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIMultitaskingViewElementRoot@@UIFrameElement@@UIInputEaterElementNotifications@@UIMultitaskingViewDragProvider@@UILightDismissElementHost@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180292CB0
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIMultitaskingViewElementRoot@@UIFrameElement@@UIInputEaterElementNotifications@@UIMultitaskingViewDragProvider@@UILightDismissElementHost@@@Details@WRL@Microsoft@@WNA@EAAKXZ @ 0x1800AE730 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMu_ea_1800AE730.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIMultitaskingViewElementRoot@@UIFrameElement@@UIInputEaterElementNotifications@@UIMultitaskingViewDragProvider@@UILightDismissElementHost@@@Details@WRL@Microsoft@@WNI@EAAKXZ @ 0x1800AE740 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMu_ea_1800AE740.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIMultitaskingViewElementRoot@@UIFrameElement@@UIInputEaterElementNotifications@@UIMultitaskingViewDragProvider@@UILightDismissElementHost@@@Details@WRL@Microsoft@@WOI@EAAKXZ @ 0x1800AE750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMu_ea_1800AE750.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UISwitchItemGrid@@UIObservableObjectArrayChanged@@UIObservableObjectArrayChangedBeginEnd@@UIMultitaskingViewTelemetryHost@@UIScrollableElement@@@Details@WRL@Microsoft@@WPA@EAAKXZ @ 0x1800AE760 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMu_ea_1800AE760.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIMultitaskingViewElementRoot@@UIFrameElement@@UIInputEaterElementNotifications@@UIMultitaskingViewDragProvider@@UILightDismissElementHost@@@Details@WRL@Microsoft@@WOA@EAAKXZ @ 0x1800AE830 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMu_ea_1800AE830.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewElementBase,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 252), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 648LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
