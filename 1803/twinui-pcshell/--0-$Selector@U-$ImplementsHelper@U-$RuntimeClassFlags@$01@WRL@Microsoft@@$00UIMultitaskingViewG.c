/*
 * XREFs of ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VHotTrackingElement@@@Details@23@UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18027D480
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VHotTrackingElement@@UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@WRL@Microsoft@@QEAA@XZ @ 0x18027D3F4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VHotTrackingElement@@UIMultitaskingVie.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x18009770C (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<HotTrackingElement>,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<HotTrackingElement>,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>>(
        __int64 a1)
{
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
  *(_QWORD *)a1 = &Microsoft::WRL::ChainInterfaces<IDragDropViewCreationHandler,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 8));
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::ChainInterfaces<IWindowArrangementOperation,IAppLayoutOperationBuilder,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  return a1;
}
