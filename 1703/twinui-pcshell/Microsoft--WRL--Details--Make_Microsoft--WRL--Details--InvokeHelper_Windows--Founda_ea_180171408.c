/*
 * XREFs of Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedHideEventArgs_____ptr64___lambda_ae6db1ae38ae62a6e721b96172a4c860__2_1___lambda_ae6db1ae38ae62a6e721b96172a4c860___ @ 0x180171408
 * Callers:
 *     ??$Callback@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerInputAppRequestedHideEventArgs@23456@@Foundation@Windows@@VTabTipAdapter@@PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@67893@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerInputAppRequestedHideEventArgs@23456@@Foundation@Windows@@@01@PEAVTabTipAdapter@@P83@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@56789@@Z@Z @ 0x18016F5F4 (--$Callback@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Win_ea_18016F5F4.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedHideEventArgs_____ptr64___lambda_ae6db1ae38ae62a6e721b96172a4c860__2_1___lambda_ae6db1ae38ae62a6e721b96172a4c860___(
        volatile signed __int32 **a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _OWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *>::`vftable';
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedHideEventArgs *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v4[3] = 1;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v5[1] = *(_OWORD *)a2;
    *((_QWORD *)v5 + 4) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)v5 = off_1801BB300;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(*a1);
    *a1 = (volatile signed __int32 *)v5;
  }
  return a1;
}
