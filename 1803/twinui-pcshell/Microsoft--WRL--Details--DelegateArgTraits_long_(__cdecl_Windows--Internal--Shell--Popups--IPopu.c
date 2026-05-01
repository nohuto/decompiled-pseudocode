/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler::_)(enum_Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::FtmBase___lambda_711e41318d04ff5ee814b2cee9c4875d___1_enum_Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::FtmBase___lambda_711e41318d04ff5ee814b2cee9c4875d___1_enum_Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType_ @ 0x1801E43A8
 * Callers:
 *     ??$CreateAgileHelper@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAUIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@PEAPEAU34567@@Z @ 0x1801E3A84 (--$CreateAgileHelper@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@@Details@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002BE80 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler::___enum_Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::FtmBase___lambda_711e41318d04ff5ee814b2cee9c4875d___1_enum_Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::FtmBase___lambda_711e41318d04ff5ee814b2cee9c4875d___1_enum_Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType_(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rsi

  v2 = (_QWORD *)(a1 + 8);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_QWORD *)(a1 + 64) != a2 )
  {
    *(_QWORD *)(a1 + 64) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)a1 = off_180335358;
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
